#pragma once

#include "imguirenderer.h"
#include "RW/RenderWare.h"
#include <string>

class ImGuiWrapper
{
public:
    ImGuiWrapper();
    virtual ~ImGuiWrapper();

    bool initialize();
    void render();
    void shutdown();

    ImGuiRenderer* renderer() const { return m_renderer; }

    void setupRenderState();
    void checkVertexBuffer(ImDrawData* draw_data);
    void renderDrawData(ImDrawData* draw_data);
    virtual bool createFontTexture();
    void destroyFontTexture();

protected:
    virtual void drawList() = 0;

private:
    ImGuiRenderer* m_renderer;
    RwRaster* m_fontRaster;

    RwIm2DVertex* m_vertexBuffer;
    int m_vertexBufferSize;
};
