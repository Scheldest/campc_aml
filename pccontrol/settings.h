#pragma once

enum eWidgetAction
{
    ACTION_NONE = 0,
    ACTION_VC_SHOOT,
    ACTION_TARGET,
    ACTION_JUMP,
    ACTION_CROUCH,
    ACTION_SPRINT,
    ACTION_DPAD,
    ACTION_MACRO1,
    ACTION_MACRO2
};

enum eWidgetType
{
    WTYPE_DEFAULT = 0,      // Blocks touch, Click to activate
    WTYPE_PASSTHROUGH,      // Allows touch behind, Click to activate
    WTYPE_SLIDE,            // Blocks touch, Slide to activate
    WTYPE_SLIDE_PASS        // Allows touch behind, Slide to activate
};

struct CustomWidget
{
    bool enabled;
    int action; // eWidgetAction
    int type;   // eWidgetType
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
