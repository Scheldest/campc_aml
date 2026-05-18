#pragma once

#include "imgui.h"
#include "imgui_internal.h"
#include <string>

class ImGuiRenderer
{
public:
    ImGuiRenderer(ImDrawList* draw_list, ImFont* font);
    ~ImGuiRenderer() {};

    void drawText(const ImVec2& pos, const ImColor& color, const std::string& text, bool outlined = false, float font_size = 0.0f);
    ImVec2 calculateTextSize(const std::string& text, float font_size = 0.0f);

private:
    void drawText(const ImVec2& pos, const ImColor& color, const char* begin, const char* end = nullptr, bool outlined = false, float font_size = 0.0f);
    ImVec2 calculateTextSize(const char* begin, const char* end, float font_size = 0.0f);
    bool processInlineHexColor(const char* start, const char* end, ImVec4& color);

    ImDrawList* m_drawList;
    ImFont* m_font;
};
