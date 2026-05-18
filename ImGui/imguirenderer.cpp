#include "imguirenderer.h"
#include <stdio.h>
#include <math.h>

ImGuiRenderer::ImGuiRenderer(ImDrawList* draw_list, ImFont* font)
{
    m_drawList = draw_list;
    m_font = font;
}

void ImGuiRenderer::drawText(const ImVec2& pos, const ImColor& color, const char* begin, const char* end, bool outline, float font_size)
{
    float sz_font = font_size == 0.0f ? m_font->FontSize : font_size;

    // Snap koordinat ke integer agar tajam di piksel (mencegah tebel sebelah)
    ImVec2 p;
    p.x = (float)(int)pos.x;
    p.y = (float)(int)pos.y;

    if (outline)
    {
        ImColor black = ImColor(0, 0, 0, 255);
        float off = 1.0f; // Offset tetap 1 piksel untuk stabilitas teks kecil

        // 4-Way Outline
        m_drawList->AddText(m_font, sz_font, ImVec2(p.x + off, p.y), black, begin, end);
        m_drawList->AddText(m_font, sz_font, ImVec2(p.x - off, p.y), black, begin, end);
        m_drawList->AddText(m_font, sz_font, ImVec2(p.x, p.y + off), black, begin, end);
        m_drawList->AddText(m_font, sz_font, ImVec2(p.x, p.y - off), black, begin, end);
    }

    m_drawList->AddText(m_font, sz_font, p, color, begin, end);
}

void ImGuiRenderer::drawText(const ImVec2& pos, const ImColor& color, const std::string& text, bool outlined, float font_size)
{
    if (text.empty()) return;
    float sz_font = font_size == 0.0f ? m_font->FontSize : font_size;
    const char* text_start = text.c_str();
    const char* text_cur = text.c_str();
    const char* text_end = text.c_str() + text.length();
    ImVec2 pos_cur = pos;
    ImColor color_cur = color;

    while (*text_cur)
    {
        if (*text_cur == '{' && ((&text_cur[7] < text_end) && text_cur[7] == '}'))
        {
            if (text_cur != text_start)
            {
                drawText(pos_cur, color_cur, text_start, text_cur, outlined, sz_font);
                pos_cur.x += calculateTextSize(text_start, text_cur, sz_font).x;
            }
            ImVec4 col;
            if (processInlineHexColor(text_cur + 1, text_cur + 7, col)) color_cur = col;
            text_cur += 7;
            text_start = text_cur + 1;
        }
        ++text_cur;
    }
    if (text_cur != text_start) drawText(pos_cur, color_cur, text_start, text_cur, outlined, sz_font);
}

ImVec2 ImGuiRenderer::calculateTextSize(const std::string& text, float font_size)
{
    if (text.empty()) return {0, 0};
    float sz_font = font_size == 0.0f ? m_font->FontSize : font_size;
    const char* text_start = text.c_str();
    const char* text_cur = text.c_str();
    const char* text_end = text.c_str() + text.length();
    ImVec2 total_size = {0, 0};
    while (*text_cur)
    {
        if (*text_cur == '{' && ((&text_cur[7] < text_end) && text_cur[7] == '}'))
        {
            if (text_cur != text_start)
            {
                ImVec2 sz = calculateTextSize(text_start, text_cur, sz_font);
                total_size.x += sz.x;
                if (total_size.y < sz.y) total_size.y = sz.y;
            }
            text_cur += 7;
            text_start = text_cur + 1;
        }
        ++text_cur;
    }
    if (text_cur != text_start)
    {
        ImVec2 sz = calculateTextSize(text_start, text_cur, sz_font);
        total_size.x += sz.x;
        if (total_size.y < sz.y) total_size.y = sz.y;
    }
    return total_size;
}

ImVec2 ImGuiRenderer::calculateTextSize(const char* begin, const char* end, float font_size)
{
    return m_font->CalcTextSizeA(font_size == 0.0f ? m_font->FontSize : font_size, FLT_MAX, 0.0f, begin, end);
}

bool ImGuiRenderer::processInlineHexColor(const char* start, const char* end, ImVec4& color)
{
    const int hexCount = (int)(end - start);
    if (hexCount == 6)
    {
        char hex[7];
        strncpy(hex, start, hexCount);
        hex[hexCount] = 0;
        unsigned int hexColor = 0;
        if (sscanf(hex, "%x", &hexColor) > 0)
        {
            color.x = static_cast<float>((hexColor & 0xFF0000) >> 16) / 255.0f;
            color.y = static_cast<float>((hexColor & 0x00FF00) >> 8) / 255.0f;
            color.z = static_cast<float>((hexColor & 0x0000FF)) / 255.0f;
            color.w = 1.0f;
            return true;
        }
    }
    return false;
}
