#include "settings.h"
#include <mod/config.h>
#include <stdio.h>

PCControlSettings g_pcSettings = {
    false, // showMenu
    true,  // enableCameraPatch
    false, // disableNativeCrouch
    false, // disableNativeJump
    true,  // enableAnalogPatch
    true,  // enableSprintDoubleTapBoost
    40.0f,
    35.0f,
    30.0f,
    25.0f,
    7.0f,
    1.0f,
    1500.0f,
    350.0f,
    5.0f,
    1.0f,
    {},    // widgets (all false/zero)
    0,     // selectedWidget
    false, // enableMacro1
    1480.0f,
    760.0f,
    140.0f,
    false, // enableMacro2
    1340.0f,
    760.0f,
    140.0f,
    0.5f,
    false,
    false
};

static const char* kSettingsSection = "PCControl";

static ConfigEntry* s_enableCameraPatch = nullptr;
static ConfigEntry* s_disableNativeCrouch = nullptr;
static ConfigEntry* s_disableNativeJump = nullptr;
static ConfigEntry* s_analogPatch = nullptr;
static ConfigEntry* s_sprintDoubleTapBoost = nullptr;
static ConfigEntry* s_camSensX = nullptr;
static ConfigEntry* s_camSensY = nullptr;
static ConfigEntry* s_aimSensX = nullptr;
static ConfigEntry* s_aimSensY = nullptr;
static ConfigEntry* s_smoothness = nullptr;
static ConfigEntry* s_deathListFontSize = nullptr;
static ConfigEntry* s_deathListPosX = nullptr;
static ConfigEntry* s_deathListPosY = nullptr;
static ConfigEntry* s_deathListSpacing = nullptr;
static ConfigEntry* s_customWidgetOpacity = nullptr;

static ConfigEntry* s_widgetEnabled[MAX_CUSTOM_WIDGETS];
static ConfigEntry* s_widgetAction[MAX_CUSTOM_WIDGETS];
static ConfigEntry* s_widgetPosX[MAX_CUSTOM_WIDGETS];
static ConfigEntry* s_widgetPosY[MAX_CUSTOM_WIDGETS];
static ConfigEntry* s_widgetSize[MAX_CUSTOM_WIDGETS];

static ConfigEntry* s_macro1 = nullptr;
static ConfigEntry* s_macro1PosX = nullptr;
static ConfigEntry* s_macro1PosY = nullptr;
static ConfigEntry* s_macro1Size = nullptr;
static ConfigEntry* s_macro2 = nullptr;
static ConfigEntry* s_macro2PosX = nullptr;
static ConfigEntry* s_macro2PosY = nullptr;
static ConfigEntry* s_macro2Size = nullptr;
static ConfigEntry* s_macro2Delay = nullptr;
static ConfigEntry* s_disableLookBehind = nullptr;
static ConfigEntry* s_disablePinchZoom = nullptr;

static float ClampSetting(float value, float min, float max)
{
    if (value < min) return min;
    if (value > max) return max;
    return value;
}

void InitPCControlSettings()
{
    cfg->Init();

    s_enableCameraPatch = cfg->Bind("EnableCameraPatch", true, kSettingsSection);
    s_disableNativeCrouch = cfg->Bind("DisableNativeCrouch", false, kSettingsSection);
    s_disableNativeJump = cfg->Bind("DisableNativeJump", false, kSettingsSection);
    s_analogPatch = cfg->Bind("AnalogPatch", true, kSettingsSection);
    s_sprintDoubleTapBoost = cfg->Bind("SprintDoubleTapBoost", true, kSettingsSection);
    s_camSensX = cfg->Bind("CamSensX", 40.0f, kSettingsSection);
    s_camSensY = cfg->Bind("CamSensY", 35.0f, kSettingsSection);
    s_aimSensX = cfg->Bind("AimSensX", 30.0f, kSettingsSection);
    s_aimSensY = cfg->Bind("AimSensY", 25.0f, kSettingsSection);
    s_smoothness = cfg->Bind("Smoothness", 7.0f, kSettingsSection);
    s_deathListFontSize = cfg->Bind("DeathListFontSize", 1.0f, kSettingsSection);
    s_deathListPosX = cfg->Bind("DeathListPosX", 1500.0f, kSettingsSection);
    s_deathListPosY = cfg->Bind("DeathListPosY", 350.0f, kSettingsSection);
    s_deathListSpacing = cfg->Bind("DeathListSpacing", 5.0f, kSettingsSection);
    s_customWidgetOpacity = cfg->Bind("CustomWidgetOpacity", 1.0f, kSettingsSection);

    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        char buf[64];
        sprintf(buf, "Widget%d_Enabled", i);
        s_widgetEnabled[i] = cfg->Bind(buf, false, kSettingsSection);
        sprintf(buf, "Widget%d_Action", i);
        s_widgetAction[i] = cfg->Bind(buf, 0, kSettingsSection);
        sprintf(buf, "Widget%d_PosX", i);
        s_widgetPosX[i] = cfg->Bind(buf, 500.0f, kSettingsSection);
        sprintf(buf, "Widget%d_PosY", i);
        s_widgetPosY[i] = cfg->Bind(buf, 500.0f, kSettingsSection);
        sprintf(buf, "Widget%d_Size", i);
        s_widgetSize[i] = cfg->Bind(buf, 100.0f, kSettingsSection);

        g_pcSettings.widgets[i].enabled = s_widgetEnabled[i]->GetBool();
        g_pcSettings.widgets[i].action = s_widgetAction[i]->GetInt();
        g_pcSettings.widgets[i].posX = s_widgetPosX[i]->GetFloat();
        g_pcSettings.widgets[i].posY = s_widgetPosY[i]->GetFloat();
        g_pcSettings.widgets[i].size = s_widgetSize[i]->GetFloat();
    }

    s_macro1 = cfg->Bind("Macro1", false, kSettingsSection);
    s_macro1PosX = cfg->Bind("Macro1PosX", 1480.0f, kSettingsSection);
    s_macro1PosY = cfg->Bind("Macro1PosY", 760.0f, kSettingsSection);
    s_macro1Size = cfg->Bind("Macro1Size", 140.0f, kSettingsSection);
    s_macro2 = cfg->Bind("Macro2", false, kSettingsSection);
    s_macro2PosX = cfg->Bind("Macro2PosX", 1340.0f, kSettingsSection);
    s_macro2PosY = cfg->Bind("Macro2PosY", 760.0f, kSettingsSection);
    s_macro2Size = cfg->Bind("Macro2Size", 140.0f, kSettingsSection);
    s_macro2Delay = cfg->Bind("Macro2Delay", 0.5f, kSettingsSection);
    s_disableLookBehind = cfg->Bind("DisableLookBehind", false, kSettingsSection);
    s_disablePinchZoom = cfg->Bind("DisablePinchZoom", false, kSettingsSection);

    g_pcSettings.enableCameraPatch = s_enableCameraPatch->GetBool();
    g_pcSettings.disableNativeCrouch = s_disableNativeCrouch->GetBool();
    g_pcSettings.disableNativeJump = s_disableNativeJump->GetBool();
    g_pcSettings.enableAnalogPatch = s_analogPatch->GetBool();
    g_pcSettings.enableSprintDoubleTapBoost = s_sprintDoubleTapBoost->GetBool();
    g_pcSettings.camSensX = ClampSetting(s_camSensX->GetFloat(), 1.0f, 50.0f);
    g_pcSettings.camSensY = ClampSetting(s_camSensY->GetFloat(), 1.0f, 50.0f);
    g_pcSettings.aimSensX = ClampSetting(s_aimSensX->GetFloat(), 1.0f, 50.0f);
    g_pcSettings.aimSensY = ClampSetting(s_aimSensY->GetFloat(), 1.0f, 50.0f);
    g_pcSettings.smoothness = ClampSetting(s_smoothness->GetFloat(), 1.0f, 10.0f);
    g_pcSettings.deathListFontSize = ClampSetting(s_deathListFontSize->GetFloat(), 0.1f, 3.0f);
    g_pcSettings.deathListPosX = ClampSetting(s_deathListPosX->GetFloat(), 0.0f, 2000.0f);
    g_pcSettings.deathListPosY = ClampSetting(s_deathListPosY->GetFloat(), 0.0f, 1200.0f);
    g_pcSettings.deathListSpacing = ClampSetting(s_deathListSpacing->GetFloat(), 0.0f, 50.0f);
    g_pcSettings.customWidgetOpacity = ClampSetting(s_customWidgetOpacity->GetFloat(), 0.0f, 1.0f);

    g_pcSettings.enableMacro1 = s_macro1->GetBool();
    g_pcSettings.macro1PosX = ClampSetting(s_macro1PosX->GetFloat(), 0.0f, 3000.0f);
    g_pcSettings.macro1PosY = ClampSetting(s_macro1PosY->GetFloat(), 0.0f, 2000.0f);
    g_pcSettings.macro1Size = ClampSetting(s_macro1Size->GetFloat(), 40.0f, 280.0f);
    g_pcSettings.enableMacro2 = s_macro2->GetBool();
    g_pcSettings.macro2PosX = ClampSetting(s_macro2PosX->GetFloat(), 0.0f, 3000.0f);
    g_pcSettings.macro2PosY = ClampSetting(s_macro2PosY->GetFloat(), 0.0f, 2000.0f);
    g_pcSettings.macro2Size = ClampSetting(s_macro2Size->GetFloat(), 40.0f, 280.0f);
    g_pcSettings.macro2Delay = ClampSetting(s_macro2Delay->GetFloat(), 0.0f, 5.0f);
    g_pcSettings.disableLookBehind = s_disableLookBehind->GetBool();
    g_pcSettings.disablePinchZoom = s_disablePinchZoom->GetBool();
    g_pcSettings.showMenu = false;

    SavePCControlSettings();
}

void SavePCControlSettings()
{
    if (!s_enableCameraPatch || !s_disableNativeCrouch || !s_disableNativeJump || !s_analogPatch ||
        !s_sprintDoubleTapBoost || !s_camSensX || !s_camSensY ||
        !s_aimSensX || !s_aimSensY || !s_smoothness || !s_deathListFontSize ||
        !s_deathListPosX || !s_deathListPosY || !s_deathListSpacing ||
        !s_customWidgetOpacity || !s_macro1)
    {
        return;
    }

    g_pcSettings.camSensX = ClampSetting(g_pcSettings.camSensX, 1.0f, 50.0f);
    g_pcSettings.camSensY = ClampSetting(g_pcSettings.camSensY, 1.0f, 50.0f);
    g_pcSettings.aimSensX = ClampSetting(g_pcSettings.aimSensX, 1.0f, 50.0f);
    g_pcSettings.aimSensY = ClampSetting(g_pcSettings.aimSensY, 1.0f, 50.0f);
    g_pcSettings.smoothness = ClampSetting(g_pcSettings.smoothness, 1.0f, 10.0f);
    g_pcSettings.deathListFontSize = ClampSetting(g_pcSettings.deathListFontSize, 0.1f, 3.0f);
    g_pcSettings.deathListPosX = ClampSetting(g_pcSettings.deathListPosX, 0.0f, 2000.0f);
    g_pcSettings.deathListPosY = ClampSetting(g_pcSettings.deathListPosY, 0.0f, 1200.0f);
    g_pcSettings.deathListSpacing = ClampSetting(g_pcSettings.deathListSpacing, 0.0f, 50.0f);
    g_pcSettings.customWidgetOpacity = ClampSetting(g_pcSettings.customWidgetOpacity, 0.0f, 1.0f);

    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
    {
        g_pcSettings.widgets[i].posX = ClampSetting(g_pcSettings.widgets[i].posX, 0.0f, 3000.0f);
        g_pcSettings.widgets[i].posY = ClampSetting(g_pcSettings.widgets[i].posY, 0.0f, 2000.0f);
        g_pcSettings.widgets[i].size = ClampSetting(g_pcSettings.widgets[i].size, 40.0f, 280.0f);

        s_widgetEnabled[i]->SetBool(g_pcSettings.widgets[i].enabled);
        s_widgetAction[i]->SetInt(g_pcSettings.widgets[i].action);
        s_widgetPosX[i]->SetFloat(g_pcSettings.widgets[i].posX);
        s_widgetPosY[i]->SetFloat(g_pcSettings.widgets[i].posY);
        s_widgetSize[i]->SetFloat(g_pcSettings.widgets[i].size);
    }

    g_pcSettings.macro1PosX = ClampSetting(g_pcSettings.macro1PosX, 0.0f, 3000.0f);
    g_pcSettings.macro1PosY = ClampSetting(g_pcSettings.macro1PosY, 0.0f, 2000.0f);
    g_pcSettings.macro1Size = ClampSetting(g_pcSettings.macro1Size, 40.0f, 280.0f);
    g_pcSettings.macro2PosX = ClampSetting(g_pcSettings.macro2PosX, 0.0f, 3000.0f);
    g_pcSettings.macro2PosY = ClampSetting(g_pcSettings.macro2PosY, 0.0f, 2000.0f);
    g_pcSettings.macro2Size = ClampSetting(g_pcSettings.macro2Size, 40.0f, 280.0f);
    g_pcSettings.macro2Delay = ClampSetting(g_pcSettings.macro2Delay, 0.0f, 5.0f);

    s_enableCameraPatch->SetBool(g_pcSettings.enableCameraPatch);
    s_disableNativeCrouch->SetBool(g_pcSettings.disableNativeCrouch);
    s_disableNativeJump->SetBool(g_pcSettings.disableNativeJump);
    s_analogPatch->SetBool(g_pcSettings.enableAnalogPatch);
    s_sprintDoubleTapBoost->SetBool(g_pcSettings.enableSprintDoubleTapBoost);
    s_camSensX->SetFloat(g_pcSettings.camSensX);
    s_camSensY->SetFloat(g_pcSettings.camSensY);
    s_aimSensX->SetFloat(g_pcSettings.aimSensX);
    s_aimSensY->SetFloat(g_pcSettings.aimSensY);
    s_smoothness->SetFloat(g_pcSettings.smoothness);
    s_deathListFontSize->SetFloat(g_pcSettings.deathListFontSize);
    s_deathListPosX->SetFloat(g_pcSettings.deathListPosX);
    s_deathListPosY->SetFloat(g_pcSettings.deathListPosY);
    s_deathListSpacing->SetFloat(g_pcSettings.deathListSpacing);
    s_customWidgetOpacity->SetFloat(g_pcSettings.customWidgetOpacity);

    s_macro1->SetBool(g_pcSettings.enableMacro1);
    s_macro1PosX->SetFloat(g_pcSettings.macro1PosX);
    s_macro1PosY->SetFloat(g_pcSettings.macro1PosY);
    s_macro1Size->SetFloat(g_pcSettings.macro1Size);
    s_macro2->SetBool(g_pcSettings.enableMacro2);
    s_macro2PosX->SetFloat(g_pcSettings.macro2PosX);
    s_macro2PosY->SetFloat(g_pcSettings.macro2PosY);
    s_macro2Size->SetFloat(g_pcSettings.macro2Size);
    s_macro2Delay->SetFloat(g_pcSettings.macro2Delay);
    s_disableLookBehind->SetBool(g_pcSettings.disableLookBehind);
    s_disablePinchZoom->SetBool(g_pcSettings.disablePinchZoom);
    cfg->Save();
}

void TogglePCControlMenu()
{
    g_pcSettings.showMenu = !g_pcSettings.showMenu;
}

bool IsPCControlMenuVisible()
{
    return g_pcSettings.showMenu;
}
