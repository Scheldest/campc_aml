#include "widgetcustom.h"
#include "settings.h"
#include "../ImGui/imgui.h"
#include <math.h>

struct WidgetState {
    int activeFinger = -1;
    bool touched = false;
    int releaseFrames = 0;
    float analogX = 0.0f;
    float analogY = 0.0f;
};

static WidgetState s_widgetStates[MAX_CUSTOM_WIDGETS];
static WidgetState s_macro1State;
static WidgetState s_macro2State;
static int s_macro2Timer = 0;

static int s_dragFinger = -1;
static int s_dragWidgetIdx = 0; // 1..10: widgets, 11: Macro1, 12: Macro2

static bool IsPointInCustomButton(float x, float y, float centerX, float centerY, float size)
{
    float radius = size * 0.5f;
    float dx = x - centerX;
    float dy = y - centerY;
    return (dx * dx + dy * dy) <= (radius * radius);
}

static bool HandleSingleButtonTouch(
    int type,
    int fingerId,
    int x,
    int y,
    bool enabled,
    int wtype,
    float centerX,
    float centerY,
    float size,
    WidgetState& state,
    bool& outShouldBlock)
{
    if (!enabled || IsPCControlMenuVisible()) return false;

    bool inside = IsPointInCustomButton((float)x, (float)y, centerX, centerY, size);
    bool isSlideType = (wtype == WTYPE_SLIDE || wtype == WTYPE_SLIDE_PASS);
    bool isPassType = (wtype == WTYPE_PASSTHROUGH || wtype == WTYPE_SLIDE_PASS);

    outShouldBlock = false;

    if (type == 2) // Down
    {
        if (state.activeFinger == -1 && inside)
        {
            state.activeFinger = fingerId;
            state.touched = true;
            if (!isPassType) outShouldBlock = true;
            return true;
        }
    }
    else if (type == 3) // Move
    {
        if (fingerId == state.activeFinger)
        {
            state.touched = inside;
            if (!isPassType) outShouldBlock = true;
            return true;
        }
        else if (isSlideType && state.activeFinger == -1 && inside)
        {
            state.activeFinger = fingerId;
            state.touched = true;
            if (!isPassType) outShouldBlock = true;
            return true;
        }
    }
    else if (type == 1) // Up
    {
        if (fingerId == state.activeFinger)
        {
            if (state.touched) state.releaseFrames = 2;
            state.touched = false;
            state.activeFinger = -1;
            if (!isPassType) outShouldBlock = true;
            return true;
        }
    }

    return false;
}

bool HandleCustomWidgetTouch(int type, int fingerId, int x, int y)
{
    bool blocked = false;
    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        CustomWidget& w = g_pcSettings.widgets[i];
        if (!w.enabled || IsPCControlMenuVisible()) continue;

        WidgetState& state = s_widgetStates[i];
        bool inside = IsPointInCustomButton((float)x, (float)y, w.posX, w.posY, w.size);
        bool isDPAD = (w.action == ACTION_DPAD);
        bool isPassType = (w.type == WTYPE_PASSTHROUGH || w.type == WTYPE_SLIDE_PASS);
        bool isSlideType = (w.type == WTYPE_SLIDE || w.type == WTYPE_SLIDE_PASS);

        if (type == 2) // Down
        {
            if (state.activeFinger == -1 && inside)
            {
                state.activeFinger = fingerId;
                state.touched = true;
                if (!isPassType) blocked = true;
            }
        }
        else if (type == 3) // Move
        {
            if (fingerId == state.activeFinger)
            {
                if (!isDPAD) state.touched = inside; // Non-DPAD behaves normally
                else state.touched = true; // DPAD stays active once grabbed

                if (!isPassType) blocked = true;
            }
            else if (isSlideType && state.activeFinger == -1 && inside)
            {
                state.activeFinger = fingerId;
                state.touched = true;
                if (!isPassType) blocked = true;
            }
        }
        else if (type == 1) // Up
        {
            if (fingerId == state.activeFinger)
            {
                if (state.touched) state.releaseFrames = 2;
                state.touched = false;
                state.activeFinger = -1;
                state.analogX = 0;
                state.analogY = 0;
                if (!isPassType) blocked = true;
            }
        }

        // Logic specifically for DPAD movement calculation
        if (isDPAD && state.activeFinger != -1 && (type == 3 || type == 2))
        {
            float dx = (float)x - w.posX;
            float dy = (float)y - w.posY;
            float mag = sqrtf(dx * dx + dy * dy);

            if (mag > 15.0f) // Deadzone
            {
                float angle = atan2f(dy, dx);
                // Snap to 8 directions (45 degrees steps)
                float snapped = roundf(angle / (3.14159265f / 4.0f)) * (3.14159265f / 4.0f);

                state.analogX = cosf(snapped) * 127.0f;
                state.analogY = sinf(snapped) * 127.0f;

                // Fine-tuning for perfect 127/-127 or 0 values on clean axes
                if (fabsf(state.analogX) < 1.0f) state.analogX = 0;
                if (fabsf(state.analogY) < 1.0f) state.analogY = 0;
                if (state.analogX > 120.0f) state.analogX = 127.0f;
                if (state.analogX < -120.0f) state.analogX = -127.0f;
                if (state.analogY > 120.0f) state.analogY = 127.0f;
                if (state.analogY < -120.0f) state.analogY = -127.0f;
            }
            else
            {
                state.analogX = 0;
                state.analogY = 0;
            }
        }
    }

    bool mShouldBlock = false;
    // Macro 1 & 2 use Default logic
    if (HandleSingleButtonTouch(type, fingerId, x, y, g_pcSettings.enableMacro1, WTYPE_DEFAULT,
                               g_pcSettings.macro1PosX, g_pcSettings.macro1PosY,
                               g_pcSettings.macro1Size, s_macro1State, mShouldBlock))
    {
        if (mShouldBlock) blocked = true;
    }

    if (HandleSingleButtonTouch(type, fingerId, x, y, g_pcSettings.enableMacro2, WTYPE_DEFAULT,
                               g_pcSettings.macro2PosX, g_pcSettings.macro2PosY,
                               g_pcSettings.macro2Size, s_macro2State, mShouldBlock))
    {
        if (type == 2) s_macro2Timer = 0;
        if (mShouldBlock) blocked = true;
    }

    return blocked;
}

static int AlphaFromOpacity(int alpha)
{
    float opacity = g_pcSettings.customWidgetOpacity;
    if (opacity < 0.0f) opacity = 0.0f;
    if (opacity > 1.0f) opacity = 1.0f;
    return (int)((float)alpha * opacity);
}

static void DrawCustomWidget(const char* label, float centerX, float centerY, float size, bool touched, int selectionIdx, int action, float analogX = 0, float analogY = 0)
{
    if (g_pcSettings.customWidgetOpacity <= 0.0f) return;

    ImDrawList* dl = ImGui::GetBackgroundDrawList();
    if (!dl) return;

    ImVec2 center(centerX, centerY);
    float radius = size * 0.5f;

    bool isSelected = IsPCControlMenuVisible() && (g_pcSettings.selectedWidget == selectionIdx);
    bool isDPAD = (action == ACTION_DPAD);

    ImU32 fill = touched ? IM_COL32(255, 255, 255, AlphaFromOpacity(180)) : IM_COL32(20, 20, 20, AlphaFromOpacity(130));
    ImU32 border = touched ? IM_COL32(255, 255, 255, AlphaFromOpacity(230)) : IM_COL32(255, 255, 255, AlphaFromOpacity(160));

    if (isSelected)
    {
        border = IM_COL32(255, 255, 0, AlphaFromOpacity(255));
        fill = IM_COL32(60, 60, 0, AlphaFromOpacity(150));
    }

    ImU32 textCol = IM_COL32(255, 255, 255, AlphaFromOpacity(230));

    if (isDPAD)
    {
        // Square style for DPAD
        dl->AddRectFilled(ImVec2(center.x - radius, center.y - radius), ImVec2(center.x + radius, center.y + radius), fill, 10.0f);
        dl->AddRect(ImVec2(center.x - radius, center.y - radius), ImVec2(center.x + radius, center.y + radius), border, 10.0f, 0, isSelected ? 5.0f : 3.0f);

        // Draw 8-way directional hints
        float arrowSize = radius * 0.2f;
        ImU32 arrowCol = IM_COL32(255, 255, 255, AlphaFromOpacity(100));
        // Simple dots or lines for 8 directions
        for (int i = 0; i < 8; ++i)
        {
            float ang = i * (3.14159265f / 4.0f);
            dl->AddCircleFilled(ImVec2(center.x + cosf(ang) * radius * 0.7f, center.y + sinf(ang) * radius * 0.7f), 3.0f, arrowCol);
        }
    }
    else
    {
        // Circle style for others
        dl->AddCircleFilled(center, radius, fill, 48);
        dl->AddCircle(center, radius, border, 48, isSelected ? 5.0f : 3.0f);
    }

    // No knob for DPAD as requested, only for non-DPAD analog if we had one (but we don't use it now)
    // We removed knob from DPAD.

    float fontSize = radius * 0.55f;
    ImVec2 textSize = ImGui::GetFont()->CalcTextSizeA(fontSize, FLT_MAX, 0.0f, label);
    dl->AddText(ImGui::GetFont(), fontSize, ImVec2(center.x - textSize.x * 0.5f, center.y - textSize.y * 0.5f), textCol, label);
}

void RenderCustomWidgets()
{
    const char* actionLabels[] = { "NONE", "VC", "TGT", "JMP", "CRH", "SPR", "DPD" };

    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        if (g_pcSettings.widgets[i].enabled)
        {
            int actionIdx = g_pcSettings.widgets[i].action;
            if (actionIdx < 0 || actionIdx >= 7) actionIdx = 0;
            DrawCustomWidget(actionLabels[actionIdx], g_pcSettings.widgets[i].posX,
                                  g_pcSettings.widgets[i].posY, g_pcSettings.widgets[i].size,
                                  s_widgetStates[i].touched, i + 1, g_pcSettings.widgets[i].action,
                                  s_widgetStates[i].analogX, s_widgetStates[i].analogY);
        }
    }

    if (g_pcSettings.enableMacro1)
    {
        DrawCustomCircleButton("M1", g_pcSettings.macro1PosX, g_pcSettings.macro1PosY,
                              g_pcSettings.macro1Size, s_macro1State.touched, 11);
    }

    if (g_pcSettings.enableMacro2)
    {
        DrawCustomCircleButton("M2", g_pcSettings.macro2PosX, g_pcSettings.macro2PosY,
                              g_pcSettings.macro2Size, s_macro2State.touched, 12);
    }
}

bool HandleWidgetDragging(int type, int fingerId, int x, int y)
{
    if (!IsPCControlMenuVisible()) return false;

    if (type == 2) // Down
    {
        for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
        {
            if (g_pcSettings.widgets[i].enabled && IsPointInCustomButton((float)x, (float)y, g_pcSettings.widgets[i].posX, g_pcSettings.widgets[i].posY, g_pcSettings.widgets[i].size))
            {
                s_dragFinger = fingerId;
                s_dragWidgetIdx = i + 1;
                g_pcSettings.selectedWidget = i + 1;
                return true;
            }
        }
        if (g_pcSettings.enableMacro1 && IsPointInCustomButton((float)x, (float)y, g_pcSettings.macro1PosX, g_pcSettings.macro1PosY, g_pcSettings.macro1Size))
        {
            s_dragFinger = fingerId;
            s_dragWidgetIdx = 11;
            g_pcSettings.selectedWidget = 11;
            return true;
        }
        if (g_pcSettings.enableMacro2 && IsPointInCustomButton((float)x, (float)y, g_pcSettings.macro2PosX, g_pcSettings.macro2PosY, g_pcSettings.macro2Size))
        {
            s_dragFinger = fingerId;
            s_dragWidgetIdx = 12;
            g_pcSettings.selectedWidget = 12;
            return true;
        }
    }
    else if (type == 3) // Move
    {
        if (fingerId == s_dragFinger)
        {
            if (s_dragWidgetIdx >= 1 && s_dragWidgetIdx <= MAX_CUSTOM_WIDGETS)
            {
                g_pcSettings.widgets[s_dragWidgetIdx - 1].posX = (float)x;
                g_pcSettings.widgets[s_dragWidgetIdx - 1].posY = (float)y;
            }
            else if (s_dragWidgetIdx == 11) { g_pcSettings.macro1PosX = (float)x; g_pcSettings.macro1PosY = (float)y; }
            else if (s_dragWidgetIdx == 12) { g_pcSettings.macro2PosX = (float)x; g_pcSettings.macro2PosY = (float)y; }
            return true;
        }
    }
    else if (type == 1) // Up
    {
        if (fingerId == s_dragFinger)
        {
            s_dragFinger = -1;
            s_dragWidgetIdx = 0;
            SavePCControlSettings();
            return true;
        }
    }

    return false;
}

bool IsActionTouched(eWidgetAction action)
{
    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        if (g_pcSettings.widgets[i].enabled && g_pcSettings.widgets[i].action == (int)action)
        {
            if (s_widgetStates[i].touched) return true;
        }
    }

    if (action == ACTION_MACRO1) return s_macro1State.touched;
    if (action == ACTION_MACRO2) return s_macro2State.touched;

    return false;
}

int GetActionReleaseFrames(eWidgetAction action)
{
    int maxFrames = 0;
    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        if (g_pcSettings.widgets[i].enabled && g_pcSettings.widgets[i].action == (int)action)
        {
            if (s_widgetStates[i].releaseFrames > maxFrames) maxFrames = s_widgetStates[i].releaseFrames;
        }
    }

    if (action == ACTION_MACRO1 && s_macro1State.releaseFrames > maxFrames) maxFrames = s_macro1State.releaseFrames;
    if (action == ACTION_MACRO2 && s_macro2State.releaseFrames > maxFrames) maxFrames = s_macro2State.releaseFrames;

    return maxFrames;
}

void UpdateWidgetReleaseFrames()
{
    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        if (s_widgetStates[i].releaseFrames > 0) s_widgetStates[i].releaseFrames--;
        if (!s_widgetStates[i].touched)
        {
            s_widgetStates[i].analogX = 0;
            s_widgetStates[i].analogY = 0;
        }
    }
    if (s_macro1State.releaseFrames > 0) s_macro1State.releaseFrames--;
    if (s_macro2State.releaseFrames > 0) s_macro2State.releaseFrames--;

    if (s_macro2State.touched) s_macro2Timer++;
    else s_macro2Timer = 0;
}

void GetCustomAnalogValues(float& x, float& y)
{
    x = 0; y = 0;
    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        if (g_pcSettings.widgets[i].enabled && g_pcSettings.widgets[i].action == ACTION_DPAD)
        {
            if (s_widgetStates[i].touched)
            {
                x = s_widgetStates[i].analogX;
                y = s_widgetStates[i].analogY;
                return;
            }
        }
    }
}

int GetMacro2Timer() { return s_macro2Timer; }
