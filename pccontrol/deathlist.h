#pragma once

#include <stdint.h>
#include <string>
#include <vector>

#include "ImGui/imgui.h"

struct DeathMessage {
    std::string killer;
    std::string victim;
    uint32_t killerColor;
    uint32_t victimColor;
    uint8_t weapon;
    std::string libName;
    float time; // Untuk fade out
};

extern std::vector<DeathMessage> g_deathMessages;
extern ImFont* g_fontArial;
extern ImFont* g_fontWeapon;

void DeathListHookLoad(uintptr_t base, bool isOrig);
void RenderDeathListDebugTab();
void RenderCustomDeathWindow();
void InitDeathListFonts();
