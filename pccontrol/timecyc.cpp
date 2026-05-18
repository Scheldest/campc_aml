#include "timecyc.h"
#include "ImGui/imgui.h"
#include <mod/amlmod.h>
#include <mod/config.h>
#include <string.h>

CColourSet* pCurrentColours = nullptr;
bool g_bOverrideTimecyc = false;
CColourSet g_TimecycOverride;
bool g_bTimecycInitialized = false;

// Configuration Section
static const char* kTimecycSection = "TimecycleOverride";
static ConfigEntry* s_cfgEnableOverride = nullptr;

// Config Entries for all parameters
static ConfigEntry* s_cfgAmb[3], *s_cfgAmbObj[3];
static ConfigEntry* s_cfgSkyTop[3], *s_cfgSkyBot[3];
static ConfigEntry* s_cfgSunCore[3], *s_cfgSunCorona[3];
static ConfigEntry* s_cfgSunSize = nullptr, *s_cfgSpriteSize = nullptr, *s_cfgSpriteBright = nullptr;
static ConfigEntry* s_cfgShadow = nullptr, *s_cfgLightShd = nullptr, *s_cfgPoleShd = nullptr;
static ConfigEntry* s_cfgFarClip = nullptr, *s_cfgFogStart = nullptr, *s_cfgLightsOnGround = nullptr;
static ConfigEntry* s_cfgLowClouds[3], *s_cfgFluffyClouds[3];
static ConfigEntry* s_cfgWater[4];
static ConfigEntry* s_cfgPostFx1[4], *s_cfgPostFx2[4];
static ConfigEntry* s_cfgCloudAlpha = nullptr, *s_cfgIntensityLimit = nullptr;
static ConfigEntry* s_cfgWaterFogAlpha = nullptr, *s_cfgDirMult = nullptr;

// Helpers for UI
static bool ColorEdit3_U16(const char* label, uint16_t* r, uint16_t* g, uint16_t* b)
{
    float col[3] = { *r / 255.0f, *g / 255.0f, *b / 255.0f };
    if (ImGui::ColorEdit3(label, col))
    {
        *r = (uint16_t)(col[0] * 255.0f);
        *g = (uint16_t)(col[1] * 255.0f);
        *b = (uint16_t)(col[2] * 255.0f);
        return true;
    }
    return false;
}

static bool ColorEdit3_F255(const char* label, float* r, float* g, float* b)
{
    float col[3] = { *r / 255.0f, *g / 255.0f, *b / 255.0f };
    if (ImGui::ColorEdit3(label, col))
    {
        *r = col[0] * 255.0f;
        *g = col[1] * 255.0f;
        *b = col[2] * 255.0f;
        return true;
    }
    return false;
}

static bool ColorEdit4_F255(const char* label, float* r, float* g, float* b, float* a)
{
    float col[4] = { *r / 255.0f, *g / 255.0f, *b / 255.0f, *a / 255.0f };
    if (ImGui::ColorEdit4(label, col))
    {
        *r = col[0] * 255.0f;
        *g = col[1] * 255.0f;
        *b = col[2] * 255.0f;
        *a = col[3] * 255.0f;
        return true;
    }
    return false;
}

void SaveTimecycConfig()
{
    if (!s_cfgEnableOverride) return;

    s_cfgEnableOverride->SetBool(g_bOverrideTimecyc);

    s_cfgAmb[0]->SetFloat(g_TimecycOverride.m_fAmbientRed);
    s_cfgAmb[1]->SetFloat(g_TimecycOverride.m_fAmbientGreen);
    s_cfgAmb[2]->SetFloat(g_TimecycOverride.m_fAmbientBlue);
    s_cfgAmbObj[0]->SetFloat(g_TimecycOverride.m_fAmbientRed_Obj);
    s_cfgAmbObj[1]->SetFloat(g_TimecycOverride.m_fAmbientGreen_Obj);
    s_cfgAmbObj[2]->SetFloat(g_TimecycOverride.m_fAmbientBlue_Obj);

    s_cfgSkyTop[0]->SetInt(g_TimecycOverride.m_nSkyTopRed);
    s_cfgSkyTop[1]->SetInt(g_TimecycOverride.m_nSkyTopGreen);
    s_cfgSkyTop[2]->SetInt(g_TimecycOverride.m_nSkyTopBlue);
    s_cfgSkyBot[0]->SetInt(g_TimecycOverride.m_nSkyBottomRed);
    s_cfgSkyBot[1]->SetInt(g_TimecycOverride.m_nSkyBottomGreen);
    s_cfgSkyBot[2]->SetInt(g_TimecycOverride.m_nSkyBottomBlue);

    s_cfgSunCore[0]->SetInt(g_TimecycOverride.m_nSunCoreRed);
    s_cfgSunCore[1]->SetInt(g_TimecycOverride.m_nSunCoreGreen);
    s_cfgSunCore[2]->SetInt(g_TimecycOverride.m_nSunCoreBlue);
    s_cfgSunCorona[0]->SetInt(g_TimecycOverride.m_nSunCoronaRed);
    s_cfgSunCorona[1]->SetInt(g_TimecycOverride.m_nSunCoronaGreen);
    s_cfgSunCorona[2]->SetInt(g_TimecycOverride.m_nSunCoronaBlue);

    s_cfgSunSize->SetFloat(g_TimecycOverride.m_fSunSize);
    s_cfgSpriteSize->SetFloat(g_TimecycOverride.m_fSpriteSize);
    s_cfgSpriteBright->SetFloat(g_TimecycOverride.m_fSpriteBrightness);

    s_cfgShadow->SetInt(g_TimecycOverride.m_nShadowStrength);
    s_cfgLightShd->SetInt(g_TimecycOverride.m_nLightShadowStrength);
    s_cfgPoleShd->SetInt(g_TimecycOverride.m_nPoleShadowStrength);

    s_cfgFarClip->SetFloat(g_TimecycOverride.m_fFarClip);
    s_cfgFogStart->SetFloat(g_TimecycOverride.m_fFogStart);
    s_cfgLightsOnGround->SetFloat(g_TimecycOverride.m_fLightsOnGroundBrightness);

    s_cfgLowClouds[0]->SetInt(g_TimecycOverride.m_nLowCloudsRed);
    s_cfgLowClouds[1]->SetInt(g_TimecycOverride.m_nLowCloudsGreen);
    s_cfgLowClouds[2]->SetInt(g_TimecycOverride.m_nLowCloudsBlue);
    s_cfgFluffyClouds[0]->SetInt(g_TimecycOverride.m_nFluffyCloudsBottomRed);
    s_cfgFluffyClouds[1]->SetInt(g_TimecycOverride.m_nFluffyCloudsBottomGreen);
    s_cfgFluffyClouds[2]->SetInt(g_TimecycOverride.m_nFluffyCloudsBottomBlue);

    s_cfgWater[0]->SetFloat(g_TimecycOverride.m_fWaterRed);
    s_cfgWater[1]->SetFloat(g_TimecycOverride.m_fWaterGreen);
    s_cfgWater[2]->SetFloat(g_TimecycOverride.m_fWaterBlue);
    s_cfgWater[3]->SetFloat(g_TimecycOverride.m_fWaterAlpha);

    s_cfgPostFx1[0]->SetFloat(g_TimecycOverride.m_fPostFx1Red);
    s_cfgPostFx1[1]->SetFloat(g_TimecycOverride.m_fPostFx1Green);
    s_cfgPostFx1[2]->SetFloat(g_TimecycOverride.m_fPostFx1Blue);
    s_cfgPostFx1[3]->SetFloat(g_TimecycOverride.m_fPostFx1Alpha);
    s_cfgPostFx2[0]->SetFloat(g_TimecycOverride.m_fPostFx2Red);
    s_cfgPostFx2[1]->SetFloat(g_TimecycOverride.m_fPostFx2Green);
    s_cfgPostFx2[2]->SetFloat(g_TimecycOverride.m_fPostFx2Blue);
    s_cfgPostFx2[3]->SetFloat(g_TimecycOverride.m_fPostFx2Alpha);

    s_cfgCloudAlpha->SetFloat(g_TimecycOverride.m_fCloudAlpha);
    s_cfgIntensityLimit->SetInt((int)g_TimecycOverride.m_nHighLightMinIntensity);
    s_cfgWaterFogAlpha->SetInt(g_TimecycOverride.m_nWaterFogAlpha);
    s_cfgDirMult->SetFloat(g_TimecycOverride.m_fDirectionalMult);

    cfg->Save();
}

void LoadTimecycConfig()
{
    s_cfgEnableOverride = cfg->Bind("EnableOverride", false, kTimecycSection);

    s_cfgAmb[0] = cfg->Bind("AmbR", 0.1f, kTimecycSection);
    s_cfgAmb[1] = cfg->Bind("AmbG", 0.1f, kTimecycSection);
    s_cfgAmb[2] = cfg->Bind("AmbB", 0.1f, kTimecycSection);
    s_cfgAmbObj[0] = cfg->Bind("AmbObjR", 0.1f, kTimecycSection);
    s_cfgAmbObj[1] = cfg->Bind("AmbObjG", 0.1f, kTimecycSection);
    s_cfgAmbObj[2] = cfg->Bind("AmbObjB", 0.1f, kTimecycSection);

    s_cfgSkyTop[0] = cfg->Bind("SkyTopR", 100, kTimecycSection);
    s_cfgSkyTop[1] = cfg->Bind("SkyTopG", 150, kTimecycSection);
    s_cfgSkyTop[2] = cfg->Bind("SkyTopB", 255, kTimecycSection);
    s_cfgSkyBot[0] = cfg->Bind("SkyBotR", 150, kTimecycSection);
    s_cfgSkyBot[1] = cfg->Bind("SkyBotG", 200, kTimecycSection);
    s_cfgSkyBot[2] = cfg->Bind("SkyBotB", 255, kTimecycSection);

    s_cfgSunCore[0] = cfg->Bind("SunCoreR", 255, kTimecycSection);
    s_cfgSunCore[1] = cfg->Bind("SunCoreG", 255, kTimecycSection);
    s_cfgSunCore[2] = cfg->Bind("SunCoreB", 255, kTimecycSection);
    s_cfgSunCorona[0] = cfg->Bind("SunCoronaR", 255, kTimecycSection);
    s_cfgSunCorona[1] = cfg->Bind("SunCoronaG", 255, kTimecycSection);
    s_cfgSunCorona[2] = cfg->Bind("SunCoronaB", 255, kTimecycSection);

    s_cfgSunSize = cfg->Bind("SunSize", 1.0f, kTimecycSection);
    s_cfgSpriteSize = cfg->Bind("SpriteSize", 1.0f, kTimecycSection);
    s_cfgSpriteBright = cfg->Bind("SpriteBright", 1.0f, kTimecycSection);

    s_cfgShadow = cfg->Bind("Shadow", 128, kTimecycSection);
    s_cfgLightShd = cfg->Bind("LightShadow", 128, kTimecycSection);
    s_cfgPoleShd = cfg->Bind("PoleShadow", 128, kTimecycSection);

    s_cfgFarClip = cfg->Bind("FarClip", 1000.0f, kTimecycSection);
    s_cfgFogStart = cfg->Bind("FogStart", 10.0f, kTimecycSection);
    s_cfgLightsOnGround = cfg->Bind("LightsOnGround", 1.0f, kTimecycSection);

    s_cfgLowClouds[0] = cfg->Bind("LowCloudsR", 255, kTimecycSection);
    s_cfgLowClouds[1] = cfg->Bind("LowCloudsG", 255, kTimecycSection);
    s_cfgLowClouds[2] = cfg->Bind("LowCloudsB", 255, kTimecycSection);
    s_cfgFluffyClouds[0] = cfg->Bind("FluffyCloudsR", 255, kTimecycSection);
    s_cfgFluffyClouds[1] = cfg->Bind("FluffyCloudsG", 255, kTimecycSection);
    s_cfgFluffyClouds[2] = cfg->Bind("FluffyCloudsB", 255, kTimecycSection);

    s_cfgWater[0] = cfg->Bind("WaterR", 0.0f, kTimecycSection);
    s_cfgWater[1] = cfg->Bind("WaterG", 0.0f, kTimecycSection);
    s_cfgWater[2] = cfg->Bind("WaterB", 0.0f, kTimecycSection);
    s_cfgWater[3] = cfg->Bind("WaterA", 128.0f, kTimecycSection);

    s_cfgPostFx1[0] = cfg->Bind("PostFx1R", 0.0f, kTimecycSection);
    s_cfgPostFx1[1] = cfg->Bind("PostFx1G", 0.0f, kTimecycSection);
    s_cfgPostFx1[2] = cfg->Bind("PostFx1B", 0.0f, kTimecycSection);
    s_cfgPostFx1[3] = cfg->Bind("PostFx1A", 0.0f, kTimecycSection);
    s_cfgPostFx2[0] = cfg->Bind("PostFx2R", 0.0f, kTimecycSection);
    s_cfgPostFx2[1] = cfg->Bind("PostFx2G", 0.0f, kTimecycSection);
    s_cfgPostFx2[2] = cfg->Bind("PostFx2B", 0.0f, kTimecycSection);
    s_cfgPostFx2[3] = cfg->Bind("PostFx2A", 0.0f, kTimecycSection);

    s_cfgCloudAlpha = cfg->Bind("CloudAlpha", 128.0f, kTimecycSection);
    s_cfgIntensityLimit = cfg->Bind("IntensityLimit", 255, kTimecycSection);
    s_cfgWaterFogAlpha = cfg->Bind("WaterFogAlpha", 64, kTimecycSection);
    s_cfgDirMult = cfg->Bind("DirMult", 1.0f, kTimecycSection);

    g_bOverrideTimecyc = s_cfgEnableOverride->GetBool();

    g_TimecycOverride.m_fAmbientRed = s_cfgAmb[0]->GetFloat();
    g_TimecycOverride.m_fAmbientGreen = s_cfgAmb[1]->GetFloat();
    g_TimecycOverride.m_fAmbientBlue = s_cfgAmb[2]->GetFloat();
    g_TimecycOverride.m_fAmbientRed_Obj = s_cfgAmbObj[0]->GetFloat();
    g_TimecycOverride.m_fAmbientGreen_Obj = s_cfgAmbObj[1]->GetFloat();
    g_TimecycOverride.m_fAmbientBlue_Obj = s_cfgAmbObj[2]->GetFloat();

    g_TimecycOverride.m_nSkyTopRed = (uint16_t)s_cfgSkyTop[0]->GetInt();
    g_TimecycOverride.m_nSkyTopGreen = (uint16_t)s_cfgSkyTop[1]->GetInt();
    g_TimecycOverride.m_nSkyTopBlue = (uint16_t)s_cfgSkyTop[2]->GetInt();
    g_TimecycOverride.m_nSkyBottomRed = (uint16_t)s_cfgSkyBot[0]->GetInt();
    g_TimecycOverride.m_nSkyBottomGreen = (uint16_t)s_cfgSkyBot[1]->GetInt();
    g_TimecycOverride.m_nSkyBottomBlue = (uint16_t)s_cfgSkyBot[2]->GetInt();

    g_TimecycOverride.m_nSunCoreRed = (uint16_t)s_cfgSunCore[0]->GetInt();
    g_TimecycOverride.m_nSunCoreGreen = (uint16_t)s_cfgSunCore[1]->GetInt();
    g_TimecycOverride.m_nSunCoreBlue = (uint16_t)s_cfgSunCore[2]->GetInt();
    g_TimecycOverride.m_nSunCoronaRed = (uint16_t)s_cfgSunCorona[0]->GetInt();
    g_TimecycOverride.m_nSunCoronaGreen = (uint16_t)s_cfgSunCorona[1]->GetInt();
    g_TimecycOverride.m_nSunCoronaBlue = (uint16_t)s_cfgSunCorona[2]->GetInt();

    g_TimecycOverride.m_fSunSize = s_cfgSunSize->GetFloat();
    g_TimecycOverride.m_fSpriteSize = s_cfgSpriteSize->GetFloat();
    g_TimecycOverride.m_fSpriteBrightness = s_cfgSpriteBright->GetFloat();

    g_TimecycOverride.m_nShadowStrength = (uint16_t)s_cfgShadow->GetInt();
    g_TimecycOverride.m_nLightShadowStrength = (uint16_t)s_cfgLightShd->GetInt();
    g_TimecycOverride.m_nPoleShadowStrength = (uint16_t)s_cfgPoleShd->GetInt();

    g_TimecycOverride.m_fFarClip = s_cfgFarClip->GetFloat();
    g_TimecycOverride.m_fFogStart = s_cfgFogStart->GetFloat();
    g_TimecycOverride.m_fLightsOnGroundBrightness = s_cfgLightsOnGround->GetFloat();

    g_TimecycOverride.m_nLowCloudsRed = (uint16_t)s_cfgLowClouds[0]->GetInt();
    g_TimecycOverride.m_nLowCloudsGreen = (uint16_t)s_cfgLowClouds[1]->GetInt();
    g_TimecycOverride.m_nLowCloudsBlue = (uint16_t)s_cfgLowClouds[2]->GetInt();
    g_TimecycOverride.m_nFluffyCloudsBottomRed = (uint16_t)s_cfgFluffyClouds[0]->GetInt();
    g_TimecycOverride.m_nFluffyCloudsBottomGreen = (uint16_t)s_cfgFluffyClouds[1]->GetInt();
    g_TimecycOverride.m_nFluffyCloudsBottomBlue = (uint16_t)s_cfgFluffyClouds[2]->GetInt();

    g_TimecycOverride.m_fWaterRed = s_cfgWater[0]->GetFloat();
    g_TimecycOverride.m_fWaterGreen = s_cfgWater[1]->GetFloat();
    g_TimecycOverride.m_fWaterBlue = s_cfgWater[2]->GetFloat();
    g_TimecycOverride.m_fWaterAlpha = s_cfgWater[3]->GetFloat();

    g_TimecycOverride.m_fPostFx1Red = s_cfgPostFx1[0]->GetFloat();
    g_TimecycOverride.m_fPostFx1Green = s_cfgPostFx1[1]->GetFloat();
    g_TimecycOverride.m_fPostFx1Blue = s_cfgPostFx1[2]->GetFloat();
    g_TimecycOverride.m_fPostFx1Alpha = s_cfgPostFx1[3]->GetFloat();
    g_TimecycOverride.m_fPostFx2Red = s_cfgPostFx2[0]->GetFloat();
    g_TimecycOverride.m_fPostFx2Green = s_cfgPostFx2[1]->GetFloat();
    g_TimecycOverride.m_fPostFx2Blue = s_cfgPostFx2[2]->GetFloat();
    g_TimecycOverride.m_fPostFx2Alpha = s_cfgPostFx2[3]->GetFloat();

    g_TimecycOverride.m_fCloudAlpha = s_cfgCloudAlpha->GetFloat();
    g_TimecycOverride.m_nHighLightMinIntensity = (uint32_t)s_cfgIntensityLimit->GetInt();
    g_TimecycOverride.m_nWaterFogAlpha = (uint16_t)s_cfgWaterFogAlpha->GetInt();
    g_TimecycOverride.m_fDirectionalMult = s_cfgDirMult->GetFloat();
}

void InitTimecycEditor(void* pHandle)
{
    pCurrentColours = (CColourSet*)aml->GetSym(pHandle, "_ZN10CTimeCycle16m_CurrentColoursE");
    LoadTimecycConfig();
    g_bTimecycInitialized = true;
}

void ApplyTimecycOverrides()
{
    if (g_bOverrideTimecyc && pCurrentColours)
    {
        memcpy(pCurrentColours, &g_TimecycOverride, sizeof(CColourSet));
    }
}

void RenderTimecycEditorTab()
{
    if (!pCurrentColours)
    {
        ImGui::Text("Timecycle data not found!");
        return;
    }

    bool changed = false;

    if (ImGui::Checkbox("Enable Overrides", &g_bOverrideTimecyc)) changed = true;
    ImGui::SameLine();
    if (ImGui::Button("Sync from Game"))
    {
        memcpy(&g_TimecycOverride, pCurrentColours, sizeof(CColourSet));
        changed = true;
    }

    if (!g_bOverrideTimecyc)
    {
        ImGui::TextColored(ImVec4(1, 1, 0, 1), "Override is DISABLED. Showing current game values.");
        ImGui::BeginDisabled();
    }

    ImGui::BeginChild("TimecycChild", ImVec2(0, 0), true);

    CColourSet* target = g_bOverrideTimecyc ? &g_TimecycOverride : pCurrentColours;

    if (ImGui::CollapsingHeader("Ambient & Directional", ImGuiTreeNodeFlags_DefaultOpen))
    {
        if (ImGui::ColorEdit3("World Amb", &target->m_fAmbientRed, ImGuiColorEditFlags_Float)) changed = true;
        if (ImGui::ColorEdit3("Objects Amb", &target->m_fAmbientRed_Obj, ImGuiColorEditFlags_Float)) changed = true;
        if (ImGui::SliderFloat("Dir Mult", &target->m_fDirectionalMult, 0.0f, 2.0f)) changed = true;
    }

    if (ImGui::CollapsingHeader("Sky & Clouds", ImGuiTreeNodeFlags_DefaultOpen))
    {
        if (ColorEdit3_U16("Sky Top", &target->m_nSkyTopRed, &target->m_nSkyTopGreen, &target->m_nSkyTopBlue)) changed = true;
        if (ColorEdit3_U16("Sky Bottom", &target->m_nSkyBottomRed, &target->m_nSkyBottomGreen, &target->m_nSkyBottomBlue)) changed = true;
        if (ColorEdit3_U16("Low Clouds", &target->m_nLowCloudsRed, &target->m_nLowCloudsGreen, &target->m_nLowCloudsBlue)) changed = true;
        if (ColorEdit3_U16("Bottom Cloud", &target->m_nFluffyCloudsBottomRed, &target->m_nFluffyCloudsBottomGreen, &target->m_nFluffyCloudsBottomBlue)) changed = true;

        float cloudAlpha = target->m_fCloudAlpha / 255.0f;
        if (ImGui::SliderFloat("Cloud Alpha", &cloudAlpha, 0.0f, 1.0f))
        {
            target->m_fCloudAlpha = cloudAlpha * 255.0f;
            changed = true;
        }
    }

    if (ImGui::CollapsingHeader("Sun & Visibility", ImGuiTreeNodeFlags_DefaultOpen))
    {
        if (ColorEdit3_U16("Sun Core", &target->m_nSunCoreRed, &target->m_nSunCoreGreen, &target->m_nSunCoreBlue)) changed = true;
        if (ColorEdit3_U16("Sun Corona", &target->m_nSunCoronaRed, &target->m_nSunCoronaGreen, &target->m_nSunCoronaBlue)) changed = true;
        if (ImGui::SliderFloat("Sun Size", &target->m_fSunSize, 0.0f, 10.0f)) changed = true;
        if (ImGui::SliderFloat("Sprite Size", &target->m_fSpriteSize, 0.0f, 10.0f)) changed = true;
        if (ImGui::SliderFloat("Sprite Bright", &target->m_fSpriteBrightness, 0.0f, 5.0f)) changed = true;

        ImGui::Separator();
        if (ImGui::SliderFloat("Far Clip", &target->m_fFarClip, -100.0f, 3000.0f, "%.0f")) changed = true;
        if (ImGui::SliderFloat("Fog Start", &target->m_fFogStart, -100.0f, 1000.0f, "%.0f")) changed = true;
        if (ImGui::SliderFloat("Lights On Ground", &target->m_fLightsOnGroundBrightness, 0.0f, 5.0f)) changed = true;
    }

    if (ImGui::CollapsingHeader("Shadows & Intensity", ImGuiTreeNodeFlags_DefaultOpen))
    {
        int shd = target->m_nShadowStrength;
        if (ImGui::SliderInt("Shadow", &shd, 0, 255)) { target->m_nShadowStrength = (uint16_t)shd; changed = true; }

        int lshd = target->m_nLightShadowStrength;
        if (ImGui::SliderInt("Light Shd", &lshd, 0, 255)) { target->m_nLightShadowStrength = (uint16_t)lshd; changed = true; }

        int pshd = target->m_nPoleShadowStrength;
        if (ImGui::SliderInt("Pole Shd", &pshd, 0, 255)) { target->m_nPoleShadowStrength = (uint16_t)pshd; changed = true; }

        int intens = (int)target->m_nHighLightMinIntensity;
        if (ImGui::SliderInt("Intensity Limit", &intens, 0, 255)) { target->m_nHighLightMinIntensity = (uint32_t)intens; changed = true; }
    }

    if (ImGui::CollapsingHeader("Water", ImGuiTreeNodeFlags_DefaultOpen))
    {
        if (ColorEdit4_F255("Water Color", &target->m_fWaterRed, &target->m_fWaterGreen, &target->m_fWaterBlue, &target->m_fWaterAlpha)) changed = true;

        int wfog = target->m_nWaterFogAlpha;
        if (ImGui::SliderInt("Water Fog Alpha", &wfog, 0, 255)) { target->m_nWaterFogAlpha = (uint16_t)wfog; changed = true; }
    }

    if (ImGui::CollapsingHeader("PostFX (Color Filters)", ImGuiTreeNodeFlags_DefaultOpen))
    {
        if (ColorEdit4_F255("Filter 1 (RGB+Alpha)", &target->m_fPostFx1Red, &target->m_fPostFx1Green, &target->m_fPostFx1Blue, &target->m_fPostFx1Alpha)) changed = true;
        if (ColorEdit4_F255("Filter 2 (RGB+Alpha)", &target->m_fPostFx2Red, &target->m_fPostFx2Green, &target->m_fPostFx2Blue, &target->m_fPostFx2Alpha)) changed = true;
    }

    ImGui::EndChild();

    if (!g_bOverrideTimecyc)
    {
        ImGui::EndDisabled();
    }

    if (changed && g_bOverrideTimecyc)
    {
        SaveTimecycConfig();
    }
}
