#include "camera.h"
#include "settings.h"
#include <mod/amlmod.h>
#include "ImGui/RW/RenderWare.h"
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846f
#endif

struct CWidget
{
    uintptr_t vtable;
    char padding[68];
    bool bIsTouched;
    char padding2[47];
    int nTouchID;
};

struct CCam
{
    char padding[14];
    uint16_t nMode;
    char padding1[132 - 16];
    float fAngleVertical;
    float fBetaSpeed;
    char padding2[8];
    float fAngleHorizontal;
    float fAlphaSpeed;
    char padding3[528 - 156];
};

struct CCamera
{
    char padding[87];
    uint8_t nActiveCam;
    char padding2[172 - 88];
    uint32_t nControlMode;
    char padding3[368 - 176];
    CCam aCams[3];
};

static void* s_gameHandle = nullptr;
static CCamera* s_theCamera = nullptr;
static float* s_timeStep = nullptr;
static uintptr_t* s_widgets = nullptr;
static int* s_menuOpened = nullptr;
static bool* s_userPause = nullptr;
static int s_displayX = 0;
static int s_displayY = 0;
static bool s_lookWidgetTouched = false;
static bool s_firstInit = true;
static float s_smoothH = 0.0f;
static float s_smoothV = 0.0f;
static float s_velH = 0.0f;
static float s_velV = 0.0f;
static float s_stopTimer = 0.0f;
static float s_fingerDeltaX[10] = {0};
static float s_fingerDeltaY[10] = {0};
static float s_lastTouchX[10] = {0};
static float s_lastTouchY[10] = {0};

static const float kStopThreshold = 0.05f;

static float NormalizeAngle(float angle)
{
    while (angle > M_PI) angle -= (2.0f * M_PI);
    while (angle < -M_PI) angle += (2.0f * M_PI);
    return angle;
}

static float SmoothDampAngle(float current, float target, float& currentVelocity, float smoothTime, float deltaTime)
{
    float diff = target - current;
    diff = atan2f(sinf(diff), cosf(diff));

    float targetSanitized = current + diff;
    smoothTime = fmaxf(0.0001f, smoothTime);
    float omega = 2.0f / smoothTime;
    float x = omega * deltaTime;
    float exp = 1.0f / (1.0f + x + 0.48f * x * x + 0.235f * x * x * x);
    float change = current - targetSanitized;
    float originalTo = targetSanitized;
    float maxChange = 10.0f * smoothTime;

    change = fminf(fmaxf(change, -maxChange), maxChange);

    float temp = (currentVelocity + omega * change) * deltaTime;
    currentVelocity = (currentVelocity - omega * temp) * exp;

    float result = targetSanitized + (change + temp) * exp;
    if ((originalTo - current > 0.0f) == (result > originalTo))
    {
        result = originalTo;
        currentVelocity = 0.0f;
    }

    return result;
}

static bool IsAimMode(uint16_t mode)
{
    return (mode == 5 || mode == 7 || mode == 8 ||
            mode == 16 || mode == 53 || mode == 65);
}

static void ResetTouchDeltas()
{
    for (int i = 0; i < 10; ++i)
    {
        s_fingerDeltaX[i] = 0.0f;
        s_fingerDeltaY[i] = 0.0f;
    }
}

static void ApplyNoopPatches(uintptr_t gtasa)
{
    unsigned char nop[4] = {0x00, 0xBF, 0x00, 0xBF};
    aml->Write(gtasa + 0x3C39B8, (uintptr_t)nop, 4);
    aml->Write(gtasa + 0x3C4090, (uintptr_t)nop, 4);
    aml->Write(gtasa + 0x3C1A72, (uintptr_t)nop, 4);
    aml->Write(gtasa + 0x3C1778, (uintptr_t)nop, 4);
}

void CameraPatchPreload(void* gameHandle)
{
    s_gameHandle = gameHandle;
    if (!s_gameHandle) return;

    s_theCamera = (CCamera*)aml->GetSym(s_gameHandle, "TheCamera");
    s_timeStep = (float*)aml->GetSym(s_gameHandle, "_ZN6CTimer12ms_fTimeStepE");
}

void CameraPatchLoad(void* gameHandle, uintptr_t gtasa)
{
    s_gameHandle = gameHandle;
    if (!s_gameHandle) return;

    ApplyNoopPatches(gtasa);
    s_widgets = (uintptr_t*)aml->GetSym(s_gameHandle, "_ZN15CTouchInterface10m_pWidgetsE");
    s_menuOpened = (int*)(gtasa + 0x6E0098);
    s_userPause = (bool*)aml->GetSym(s_gameHandle, "_ZN6CTimer11m_UserPauseE");
}

void CameraPatchOnInitRenderware()
{
    if (RsGlobal)
    {
        s_displayX = RsGlobal->maximumWidth;
        s_displayY = RsGlobal->maximumHeight;
    }
}

void CameraPatchOnRender2D()
{
    if (!g_pcSettings.enableCameraPatch || !s_theCamera || !s_timeStep || !s_widgets || !s_menuOpened || !s_userPause)
    {
        ResetTouchDeltas();
        return;
    }

    if (*s_menuOpened != 0 || *s_userPause)
    {
        ResetTouchDeltas();
        return;
    }

    uint8_t activeIdx = s_theCamera->nActiveCam;
    if (activeIdx >= 3) return;

    CCam& cam = s_theCamera->aCams[activeIdx];
    CWidget* lookWidget = (CWidget*)s_widgets[175];
    bool isCurrentlyTouched = s_lookWidgetTouched;
    if (lookWidget && lookWidget->bIsTouched) isCurrentlyTouched = true;

    s_theCamera->nControlMode = 1;
    cam.fAlphaSpeed = 0.0f;
    cam.fBetaSpeed = 0.0f;

    if (s_firstInit)
    {
        s_smoothH = cam.fAngleHorizontal;
        s_smoothV = cam.fAngleVertical;
        s_firstInit = false;
    }

    float dt = *s_timeStep * 0.02f;
    if (dt <= 0.0f) return;

    bool isMoving = false;
    if (isCurrentlyTouched)
    {
        int fingerId = lookWidget ? lookWidget->nTouchID : -1;

        if (fingerId >= 0 && fingerId < 10 && s_lastTouchX[fingerId] < (float)s_displayX * 0.45f)
        {
            fingerId = -1;
        }

        if (fingerId < 0 || fingerId >= 10)
        {
            for (int i = 0; i < 10; ++i)
            {
                if ((fabsf(s_fingerDeltaX[i]) > 0.01f || fabsf(s_fingerDeltaY[i]) > 0.01f) &&
                    (s_lastTouchX[i] > (float)s_displayX * 0.45f))
                {
                    fingerId = i;
                    break;
                }
            }
        }

        if (fingerId >= 0 && fingerId < 10)
        {
            float dx = s_fingerDeltaX[fingerId];
            float dy = s_fingerDeltaY[fingerId];

            if (fabsf(dx) > 0.0f || fabsf(dy) > 0.0f)
            {
                isMoving = true;

                float sensMultiplier = 0.00025f;
                float sensX = (IsAimMode(cam.nMode) ? g_pcSettings.aimSensX : g_pcSettings.camSensX) * sensMultiplier;
                float sensY = (IsAimMode(cam.nMode) ? g_pcSettings.aimSensY : g_pcSettings.camSensY) * sensMultiplier;

                s_smoothH = NormalizeAngle(s_smoothH - (dx * sensX));
                s_smoothV = s_smoothV - (dy * sensY);

                if (s_smoothV > 1.5f) s_smoothV = 1.5f;
                if (s_smoothV < -1.1f) s_smoothV = -1.1f;
            }
        }
    }

    if (isMoving && isCurrentlyTouched)
    {
        s_stopTimer = 0.0f;
    }
    else
    {
        s_stopTimer += dt;
    }

    if (!isCurrentlyTouched || s_stopTimer >= kStopThreshold)
    {
        s_smoothH = cam.fAngleHorizontal;
        s_smoothV = cam.fAngleVertical;
        s_velH = 0.0f;
        s_velV = 0.0f;
    }
    else
    {
        float dynamicSmoothTime = 0.4f / fmaxf(0.1f, g_pcSettings.smoothness);
        cam.fAngleHorizontal = NormalizeAngle(SmoothDampAngle(cam.fAngleHorizontal, s_smoothH, s_velH, dynamicSmoothTime, dt));
        cam.fAngleVertical = SmoothDampAngle(cam.fAngleVertical, s_smoothV, s_velV, dynamicSmoothTime, dt);
    }

    if (cam.fAngleVertical > 1.5f) cam.fAngleVertical = 1.5f;
    if (cam.fAngleVertical < -1.1f) cam.fAngleVertical = -1.1f;

    ResetTouchDeltas();
}

void CameraPatchOnTouchEvent(int type, int fingerId, int x, int y)
{
    if (fingerId < 0 || fingerId >= 10) return;

    if (type == 2)
    {
        s_lastTouchX[fingerId] = (float)x;
        s_lastTouchY[fingerId] = (float)y;
        s_fingerDeltaX[fingerId] = 0.0f;
        s_fingerDeltaY[fingerId] = 0.0f;
    }
    else if (type == 3)
    {
        s_fingerDeltaX[fingerId] += (float)(x - s_lastTouchX[fingerId]);
        s_fingerDeltaY[fingerId] += (float)(y - s_lastTouchY[fingerId]);
        s_lastTouchX[fingerId] = (float)x;
        s_lastTouchY[fingerId] = (float)y;
    }
    else if (type == 1)
    {
        s_fingerDeltaX[fingerId] = 0.0f;
        s_fingerDeltaY[fingerId] = 0.0f;
    }
}

void CameraPatchOnIsTouched(int widgetId, int result)
{
    if (widgetId == 175)
    {
        s_lookWidgetTouched = (result != 0);
    }
}
