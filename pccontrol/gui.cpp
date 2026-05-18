#include "gui.h"
#include "menu.h"
#include "deathlist.h"
#include "settings.h"
#include "widgetcustom.h"
#include "ImGui/imgui.h"
#include <mod/amlmod.h>

PCControlGUI* g_pGUI = nullptr;

PCControlGUI::PCControlGUI() : ImGuiWrapper()
{
}

PCControlGUI::~PCControlGUI()
{
}

bool PCControlGUI::initialize()
{
    if (!ImGuiWrapper::initialize()) return false;

    ImGuiIO& io = ImGui::GetIO();
    ImFontConfig fontCfg;
    fontCfg.OversampleH = 3;
    fontCfg.OversampleV = 2;
    fontCfg.PixelSnapH = true;

    char path[512];
    snprintf(path, sizeof(path), "%s/fonts/arial_bold.ttf", aml->GetAndroidDataPath());
    g_fontArial = io.Fonts->AddFontFromFileTTF(path, 40.0f, &fontCfg);

    snprintf(path, sizeof(path), "%s/fonts/gtaweap3.ttf", aml->GetAndroidDataPath());
    g_fontWeapon = io.Fonts->AddFontFromFileTTF(path, 40.0f, &fontCfg);

    if (!createFontTexture()) return false;

    return true;
}

void PCControlGUI::drawList()
{
    if (IsPCControlMenuVisible())
    {
        RenderPCControlMenu();
    }

    RenderCustomDeathWindow();
    RenderCustomWidgets();
}
