#include "menu.h"
#include "settings.h"
#include "deathlist.h"
#include "timecyc.h"
#include "ImGui/imgui.h"
#include <stdio.h>

void RenderPCControlMenu()
{
    bool changed = false;

    ImGui::SetNextWindowSize(ImVec2(600.0f, 500.0f), ImGuiCond_FirstUseEver);
    if (ImGui::Begin("Dex Menu", &g_pcSettings.showMenu))
    {
        ImGui::SetWindowFontScale(0.60f);

        if (ImGui::BeginTabBar("MenuTabs"))
        {
            if (ImGui::BeginTabItem("Settings"))
            {
                ImGui::TextUnformatted("PC Control Settings");
                ImGui::Separator();

                changed |= ImGui::Checkbox("Enable Camera Patch", &g_pcSettings.enableCameraPatch);
                changed |= ImGui::SliderFloat("Camera Sens X", &g_pcSettings.camSensX, 1.0f, 50.0f, "%.1f");
                changed |= ImGui::SliderFloat("Camera Sens Y", &g_pcSettings.camSensY, 1.0f, 50.0f, "%.1f");
                changed |= ImGui::SliderFloat("Aim Sens X", &g_pcSettings.aimSensX, 1.0f, 50.0f, "%.1f");
                changed |= ImGui::SliderFloat("Aim Sens Y", &g_pcSettings.aimSensY, 1.0f, 50.0f, "%.1f");
                changed |= ImGui::SliderFloat("Smoothness", &g_pcSettings.smoothness, 1.0f, 10.0f, "%.1f");

                ImGui::Spacing();
                ImGui::Separator();
                changed |= ImGui::Checkbox("Disable Native Crouch", &g_pcSettings.disableNativeCrouch);
                changed |= ImGui::Checkbox("Disable Native Jump", &g_pcSettings.disableNativeJump);
                changed |= ImGui::Checkbox("Analog Patch", &g_pcSettings.enableAnalogPatch);
                changed |= ImGui::Checkbox("Double Tap Sprint Boost", &g_pcSettings.enableSprintDoubleTapBoost);
                changed |= ImGui::Checkbox("Disable Look Behind", &g_pcSettings.disableLookBehind);
                changed |= ImGui::Checkbox("Disable Pinch Zoom", &g_pcSettings.disablePinchZoom);

                ImGui::Spacing();
                ImGui::Separator();
                ImGui::TextUnformatted("Death Window Settings");
                changed |= ImGui::SliderFloat("Font Size", &g_pcSettings.deathListFontSize, 0.1f, 3.0f, "%.2f");
                changed |= ImGui::SliderFloat("Pos X", &g_pcSettings.deathListPosX, 0.0f, 2000.0f, "%.0f");
                changed |= ImGui::SliderFloat("Pos Y", &g_pcSettings.deathListPosY, 0.0f, 1200.0f, "%.0f");
                changed |= ImGui::SliderFloat("Spacing", &g_pcSettings.deathListSpacing, 0.0f, 50.0f, "%.0f");

                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Widget"))
            {
                ImGui::TextUnformatted("Custom Widget Manager");
                ImGui::Separator();
                changed |= ImGui::SliderFloat("Global Visibility", &g_pcSettings.customWidgetOpacity, 0.0f, 1.0f, "%.2f");

                ImGui::Spacing();
                ImGui::Separator();
                ImGui::TextUnformatted("Custom Buttons");

                if (ImGui::Button("Add New Widget"))
                {
                    for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
                    {
                        if (!g_pcSettings.widgets[i].enabled)
                        {
                            g_pcSettings.widgets[i].enabled = true;
                            g_pcSettings.widgets[i].action = (int)ACTION_NONE;
                            g_pcSettings.widgets[i].posX = 500.0f;
                            g_pcSettings.widgets[i].posY = 500.0f;
                            g_pcSettings.widgets[i].size = 120.0f;
                            g_pcSettings.selectedWidget = i + 1;
                            changed = true;
                            break;
                        }
                    }
                }

                ImGui::BeginChild("WidgetList", ImVec2(0, 150), true);
                for (int i = 0; i < MAX_CUSTOM_WIDGETS; ++i)
                {
                    if (g_pcSettings.widgets[i].enabled)
                    {
                        char label[64];
                        const char* actionNames[] = { "NONE", "VC Shoot", "Target", "Jump", "Crouch" };
                        int act = g_pcSettings.widgets[i].action;
                        if (act < 0 || act > 4) act = 0;

                        sprintf(label, "Button %d [%s]", i + 1, actionNames[act]);
                        if (ImGui::Selectable(label, g_pcSettings.selectedWidget == (i + 1)))
                        {
                            g_pcSettings.selectedWidget = i + 1;
                        }
                        ImGui::SameLine(ImGui::GetWindowWidth() - 70);
                        sprintf(label, "Remove##%d", i);
                        if (ImGui::Button(label))
                        {
                            g_pcSettings.widgets[i].enabled = false;
                            if (g_pcSettings.selectedWidget == (i + 1)) g_pcSettings.selectedWidget = 0;
                            changed = true;
                        }
                    }
                }
                ImGui::EndChild();

                if (g_pcSettings.selectedWidget >= 1 && g_pcSettings.selectedWidget <= MAX_CUSTOM_WIDGETS)
                {
                    int idx = g_pcSettings.selectedWidget - 1;
                    ImGui::Text("Editing Button %d", idx + 1);

                    const char* actions[] = { "NONE", "VC Shoot", "Target", "Jump", "Crouch" };
                    changed |= ImGui::Combo("Action", &g_pcSettings.widgets[idx].action, actions, IM_ARRAYSIZE(actions));

                    changed |= ImGui::SliderFloat("Pos X", &g_pcSettings.widgets[idx].posX, 0.0f, 3000.0f, "%.0f");
                    changed |= ImGui::SliderFloat("Pos Y", &g_pcSettings.widgets[idx].posY, 0.0f, 2000.0f, "%.0f");
                    changed |= ImGui::SliderFloat("Size", &g_pcSettings.widgets[idx].size, 40.0f, 280.0f, "%.0f");
                }

                ImGui::Spacing();
                ImGui::Separator();
                ImGui::TextUnformatted("Macros");

                bool m1 = g_pcSettings.enableMacro1;
                if (ImGui::Checkbox("Enable Macro 1 (M1)", &m1))
                {
                    g_pcSettings.enableMacro1 = m1;
                    changed = true;
                }
                if (g_pcSettings.enableMacro1)
                {
                    ImGui::SameLine();
                    if (ImGui::Button("Edit M1")) g_pcSettings.selectedWidget = 11;
                }

                bool m2 = g_pcSettings.enableMacro2;
                if (ImGui::Checkbox("Enable Macro 2 (M2)", &m2))
                {
                    g_pcSettings.enableMacro2 = m2;
                    changed = true;
                }
                if (g_pcSettings.enableMacro2)
                {
                    ImGui::SameLine();
                    if (ImGui::Button("Edit M2")) g_pcSettings.selectedWidget = 12;
                }

                if (g_pcSettings.selectedWidget == 11)
                {
                    ImGui::TextUnformatted("Editing: Macro 1");
                    changed |= ImGui::SliderFloat("Pos X##M1", &g_pcSettings.macro1PosX, 0.0f, 3000.0f, "%.0f");
                    changed |= ImGui::SliderFloat("Pos Y##M1", &g_pcSettings.macro1PosY, 0.0f, 2000.0f, "%.0f");
                    changed |= ImGui::SliderFloat("Size##M1", &g_pcSettings.macro1Size, 40.0f, 280.0f, "%.0f");
                }
                else if (g_pcSettings.selectedWidget == 12)
                {
                    ImGui::TextUnformatted("Editing: Macro 2");
                    changed |= ImGui::SliderFloat("Pos X##M2", &g_pcSettings.macro2PosX, 0.0f, 3000.0f, "%.0f");
                    changed |= ImGui::SliderFloat("Pos Y##M2", &g_pcSettings.macro2PosY, 0.0f, 2000.0f, "%.0f");
                    changed |= ImGui::SliderFloat("Size##M2", &g_pcSettings.macro2Size, 40.0f, 280.0f, "%.0f");
                    changed |= ImGui::SliderFloat("Target Delay (s)", &g_pcSettings.macro2Delay, 0.0f, 5.0f, "%.2fs");
                }

                if (IsPCControlMenuVisible())
                {
                    ImGui::Spacing();
                    ImGui::TextColored(ImVec4(1, 1, 0, 1), "Tip: You can drag buttons on screen to reposition them.");
                }

                ImGui::EndTabItem();
            }

            if (ImGui::BeginTabItem("Timecycle"))
            {
                RenderTimecycEditorTab();
                ImGui::EndTabItem();
            }

            ImGui::EndTabBar();
        }

        ImGui::Spacing();
        ImGui::Separator();
        ImGui::TextDisabled("Use /dexmenu to show or hide this menu.");
    }
    ImGui::End();

    if (changed)
    {
        SavePCControlSettings();
    }
}
