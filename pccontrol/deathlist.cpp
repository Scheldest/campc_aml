#include "deathlist.h"
#include "settings.h"
#include "ImGui/imguirenderer.h"
#include <mod/amlmod.h>
#include <mod/logger.h>
#include "ImGui/imgui.h"
#include "ImGui/imgui_internal.h"
#include <time.h>
#include <math.h>

std::vector<DeathMessage> g_deathMessages;
ImFont* g_fontArial = nullptr;
ImFont* g_fontWeapon = nullptr;

static const char* GetWeaponIcon(uint8_t id)
{
    // Pemetaan Karakter yang benar untuk gtaweap3.ttf
    switch(id)
    {
        case 0: return "%";          // Fist
        case 22: return "6";         // Colt 45
        case 23: return "2";         // Silenced
        case 24: return "3";         // Desert Eagle (Gunakan titik)
        case 25: return "=";         // Shotgun
        case 26: return "0";         // Sawnoff
        case 27: return "+";         // Spas-12
        case 28: return "9";         // Micro Uzi
        case 29: return "8";         // MP5
        case 30: return "H";         // AK-47
        case 31: return "5";         // M4
        case 33: return ".";         // Country Rifle
        case 34: return "A";         // Sniper Rifle
        case 35: return "4";         // Rocket Launcher
        case 36: return "]";         // Heatseeker
        case 37: return "*";         // Flamethrower
        case 38: return "F";         // Minigun
        case 16: return "@";         // Grenade
        case 18: return "'";         // Molotov
        case 41: return "/";         // Spraycan
        case 42: return ",";         // Fire Extinguisher
        default: return "K";
    }
}

static void HandleInterceptedDeath(const char* killer, uint32_t kColor, const char* victim, uint32_t vColor, int weapon, const char* libName)
{
    DeathMessage msg;
    msg.killer = killer ? killer : "";
    msg.victim = victim ? victim : "";
    msg.killerColor = kColor | 0xFF000000;
    msg.victimColor = vColor | 0xFF000000;

    // Simpan raw weapon ID, normalisasi dilakukan di GetWeaponIcon agar lebih aman
    msg.weapon = (uint8_t)(weapon & 0xFF);
    msg.libName = libName;
    msg.time = 100.0f;

    g_deathMessages.push_back(msg);
    if(g_deathMessages.size() > 5) g_deathMessages.erase(g_deathMessages.begin());

    logger->Info("[%s] Death Captured: %s -> %s (Weapon ID: %d)", libName, msg.killer.c_str(), msg.victim.c_str(), msg.weapon);
}

// Hook signature yang diperketat untuk ARM EABI stack
DECL_HOOK(int, sub_75370_samp, void* thiz, const char* killer, uint32_t kColor, const char* victim, uint32_t vColor, int weapon) {
    HandleInterceptedDeath(killer, kColor, victim, vColor, weapon, "SAMP");
    return sub_75370_samp(thiz, killer, kColor, victim, vColor, weapon);
}

DECL_HOOK(int, sub_75370_orig, void* thiz, const char* killer, uint32_t kColor, const char* victim, uint32_t vColor, int weapon) {
    HandleInterceptedDeath(killer, kColor, victim, vColor, weapon, "SAMP_ORIG");
    return sub_75370_orig(thiz, killer, kColor, victim, vColor, weapon);
}

DECL_HOOK(int, sub_75410_samp, void* thiz, int a2) { return 0; }
DECL_HOOK(int, sub_75410_orig, void* thiz, int a2) { return 0; }

void DeathListHookLoad(uintptr_t base, bool isOrig)
{
    if (!base) return;
    if (isOrig) {
        HOOK(sub_75370_orig, base + 0x75370 + 1);
        HOOK(sub_75410_orig, base + 0x75410 + 1);
    } else {
        HOOK(sub_75370_samp, base + 0x75370 + 1);
        HOOK(sub_75410_samp, base + 0x75410 + 1);
    }
}

void RenderCustomDeathWindow()
{
    if (g_deathMessages.empty() || !g_fontArial || !g_fontWeapon) return;

    float dt = ImGui::GetIO().DeltaTime;
    for (auto it = g_deathMessages.begin(); it != g_deathMessages.end();) {
        it->time -= dt;
        if (it->time <= 0.0f) it = g_deathMessages.erase(it); else ++it;
    }
    if (g_deathMessages.empty()) return;

    ImDrawList* dl = ImGui::GetBackgroundDrawList();
    ImGuiRenderer rendererArial(dl, g_fontArial);
    ImGuiRenderer rendererWeapon(dl, g_fontWeapon);

    float scale = g_pcSettings.deathListFontSize;
    float currentY = g_pcSettings.deathListPosY;
    float centerX = g_pcSettings.deathListPosX;

    float arialSize = 20.0f * scale;
    float iconFontSize = 28.0f * scale; // Bisa dinaikkan karena sekarang box akan mengkerut pas di tepi icon
    float listSpacing = g_pcSettings.deathListSpacing * scale;
    float itemSpacing = 10.0f * scale;

    for (int i = (int)g_deathMessages.size() - 1; i >= 0; --i)
    {
        auto& msg = g_deathMessages[i];
        const char* iconText = GetWeaponIcon(msg.weapon);

        // 1. Hitung ukuran teks biasa untuk nama pemain
        ImVec2 kSize = msg.killer.empty() ? ImVec2(0,0) : rendererArial.calculateTextSize(msg.killer, arialSize);
        ImVec2 vSize = rendererArial.calculateTextSize(msg.victim, arialSize);

        // 2. HITUNG UKURAN ASLI ICON MURNI (Kelelawar/Pikselnya Saja)
        float iconWidth = 0.0f;
        float iconHeight = 0.0f;
        float glyphOffsetX = 0.0f;
        float glyphOffsetY = 0.0f;

        ImFont* font = g_fontWeapon;
        const ImFontGlyph* glyph = font->FindGlyph(iconText[0]);
        if (glyph) 
        {
            // Rasio skala font ImGui
            float fontScale = iconFontSize / font->FontSize;
            
            // Ukuran murni dari koordinat sudut ke sudut visual karakter
            iconWidth = (glyph->X1 - glyph->X0) * fontScale;
            iconHeight = (glyph->Y1 - glyph->Y0) * fontScale;
            
            // Offset internal untuk menggambar (agar posisi render presisi)
            glyphOffsetX = glyph->X0 * fontScale;
            glyphOffsetY = glyph->Y0 * fontScale;
        }
        else 
        {
            // Fallback jika glyph tidak ketemu
            ImVec2 fallbackSize = rendererWeapon.calculateTextSize(iconText, iconFontSize);
            iconWidth = fallbackSize.x;
            iconHeight = fallbackSize.y;
        }

        // 3. Tentukan Ukuran Box (Bisa ditambah sedikit padding manual jika terlalu mepet)
        float manualPadding = 3.0f * scale; 
        float boxWidth = iconWidth + (manualPadding * 2.0f);
        float boxHeight = iconHeight + (manualPadding * 2.0f);
        
        // Buat box jadi persegi sempurna (Square) berdasarkan sisi terpanjang icon
        float boxSize = (boxWidth > boxHeight) ? boxWidth : boxHeight;

        // Posisi Box (Center Horizontal berdasarkan centerX)
        ImVec2 boxPos = ImVec2(centerX - (boxSize / 2.0f), currentY);

        // 4. RENDER BOX
        dl->AddRectFilled(boxPos, ImVec2(boxPos.x + boxSize, boxPos.y + boxSize), 0xFF000000, 4.0f * scale);

        // 5. RENDER ICON (Dipaksa Center murni mengabaikan whitespace bawaan font)
        ImVec2 iPos = ImVec2(
            boxPos.x + ((boxSize - iconWidth) / 2.0f) - glyphOffsetX,
            boxPos.y + ((boxSize - iconHeight) / 2.0f) - glyphOffsetY
        );
        rendererWeapon.drawText(iPos, ImColor(255, 255, 255, 255), iconText, false, iconFontSize);

        // 6. RENDER NAMA (Killer di kiri, Victim di kanan)
        if (!msg.killer.empty()) {
            ImVec2 kPos = ImVec2(boxPos.x - itemSpacing - kSize.x, boxPos.y + ((boxSize - kSize.y) / 2.0f));
            rendererArial.drawText(kPos, ImColor(msg.killerColor), msg.killer, true, arialSize);
        }

        ImVec2 vPos = ImVec2(boxPos.x + boxSize + itemSpacing, boxPos.y + ((boxSize - vSize.y) / 2.0f));
        rendererArial.drawText(vPos, ImColor(msg.victimColor), msg.victim, true, arialSize);

        currentY += boxSize + listSpacing;
    }
}
