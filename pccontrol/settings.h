#pragma once

enum eWidgetAction
{
    ACTION_NONE = 0,
    ACTION_VC_SHOOT,
    ACTION_TARGET,
    ACTION_JUMP,
    ACTION_CROUCH,
    ACTION_MACRO1,
    ACTION_MACRO2
};

struct CustomWidget
{
    bool enabled;
    int action; // eWidgetAction
    float posX;
    float posY;
    float size;
};

#define MAX_CUSTOM_WIDGETS 10

struct PCControlSettings
{
    bool showMenu;
    bool enableCameraPatch;
    bool disableNativeCrouch;
    bool disableNativeJump;
    bool enableAnalogPatch;
    bool enableSprintDoubleTapBoost;
    float camSensX;
    float camSensY;
    float aimSensX;
    float aimSensY;
    float smoothness;
    float deathListFontSize;
    float deathListPosX;
    float deathListPosY;
    float deathListSpacing;
    float customWidgetOpacity;

    CustomWidget widgets[MAX_CUSTOM_WIDGETS];

    int selectedWidget; // 0: None, 1..MAX: widgets, 11: Macro1, 12: Macro2
    bool enableMacro1;
    float macro1PosX;
    float macro1PosY;
    float macro1Size;
    bool enableMacro2;
    float macro2PosX;
    float macro2PosY;
    float macro2Size;
    float macro2Delay;
    bool disableLookBehind;
    bool disablePinchZoom;
};

extern PCControlSettings g_pcSettings;

void InitPCControlSettings();
void SavePCControlSettings();
void TogglePCControlMenu();
bool IsPCControlMenuVisible();
