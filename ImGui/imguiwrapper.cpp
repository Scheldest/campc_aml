#include "imguiwrapper.h"
#include <mod/logger.h>
#include <mod/amlmod.h>

extern RwReal* nearScreenZ;
extern RwReal* recipNearClip;
extern void (*SetScissorRect)(float*);

ImGuiWrapper::ImGuiWrapper()
{
    m_renderer = nullptr;
    m_fontRaster = nullptr;
    m_vertexBuffer = nullptr;
    m_vertexBufferSize = 10000;
}

ImGuiWrapper::~ImGuiWrapper()
{
    shutdown();
}

bool ImGuiWrapper::initialize()
{
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();

    ImGuiIO& io = ImGui::GetIO();
    io.IniFilename = nullptr;
    io.LogFilename = nullptr;
    io.DisplayFramebufferScale = ImVec2(1.0f, 1.0f);
    io.DisplaySize = ImVec2((float)RsGlobal->maximumWidth, (float)RsGlobal->maximumHeight);

    return true;
}

void ImGuiWrapper::render()
{
    ImGui::NewFrame();
    drawList();
    ImGui::EndFrame();
    ImGui::Render();
    renderDrawData(ImGui::GetDrawData());
}

void ImGuiWrapper::shutdown()
{
    destroyFontTexture();
    if (m_renderer)
    {
        delete m_renderer;
        m_renderer = nullptr;
    }
    if (m_vertexBuffer)
    {
        delete[] m_vertexBuffer;
        m_vertexBuffer = nullptr;
    }
}

void ImGuiWrapper::setupRenderState()
{
    RwRenderStateSet(rwRENDERSTATEZTESTENABLE, (void*)0);
    RwRenderStateSet(rwRENDERSTATEZWRITEENABLE, (void*)0);
    RwRenderStateSet(rwRENDERSTATEVERTEXALPHAENABLE, (void*)1);
    RwRenderStateSet(rwRENDERSTATESRCBLEND, (void*)5); // rwBLENDSRCALPHA
    RwRenderStateSet(rwRENDERSTATEDESTBLEND, (void*)6); // rwBLENDINVSRCALPHA
    RwRenderStateSet(rwRENDERSTATEFOGENABLE, (void*)0);
    RwRenderStateSet(rwRENDERSTATECULLMODE, (void*)1); // rwCULLMODECULLNONE
    RwRenderStateSet(rwRENDERSTATEBORDERCOLOR, (void*)0);
    RwRenderStateSet(rwRENDERSTATEALPHATESTFUNCTION, (void*)5); // rwALPHATESTFUNCTIONGREATER
    RwRenderStateSet(rwRENDERSTATEALPHATESTFUNCTIONREF, (void*)2);
    RwRenderStateSet(rwRENDERSTATETEXTUREFILTER, (void*)2); // rwFILTERLINEAR
    RwRenderStateSet(rwRENDERSTATETEXTUREADDRESS, (void*)3); // rwTEXTUREADDRESSCLAMP
}

void ImGuiWrapper::checkVertexBuffer(ImDrawData* draw_data)
{
    if (m_vertexBuffer == nullptr || m_vertexBufferSize < draw_data->TotalVtxCount)
    {
        if (m_vertexBuffer) delete[] m_vertexBuffer;
        m_vertexBufferSize = draw_data->TotalVtxCount + 10000;
        m_vertexBuffer = new RwIm2DVertex[m_vertexBufferSize];
    }
}

void ImGuiWrapper::renderDrawData(ImDrawData* draw_data)
{
    if (!nearScreenZ || !recipNearClip) return;

    checkVertexBuffer(draw_data);
    setupRenderState();

    RwIm2DVertex* vtx_dst = m_vertexBuffer;
    int vtx_offset = 0;

    for (int n = 0; n < draw_data->CmdListsCount; n++)
    {
        const ImDrawList* cmd_list = draw_data->CmdLists[n];
        const ImDrawVert* vtx_src = cmd_list->VtxBuffer.Data;

        for (int i = 0; i < cmd_list->VtxBuffer.Size; i++)
        {
            RwIm2DVertexSetScreenX(vtx_dst, vtx_src->pos.x);
            RwIm2DVertexSetScreenY(vtx_dst, vtx_src->pos.y);
            RwIm2DVertexSetScreenZ(vtx_dst, *nearScreenZ);
            RwIm2DVertexSetRecipCameraZ(vtx_dst, *recipNearClip);
            vtx_dst->emissiveColor = vtx_src->col;
            RwIm2DVertexSetU(vtx_dst, vtx_src->uv.x, recipCameraZ);
            RwIm2DVertexSetV(vtx_dst, vtx_src->uv.y, recipCameraZ);

            vtx_dst++;
            vtx_src++;
        }

        const ImDrawIdx* idx_buffer = cmd_list->IdxBuffer.Data;
        for (int cmd_i = 0; cmd_i < cmd_list->CmdBuffer.Size; cmd_i++)
        {
            const ImDrawCmd* pcmd = &cmd_list->CmdBuffer[cmd_i];
            if (pcmd->UserCallback)
            {
                pcmd->UserCallback(cmd_list, pcmd);
            }
            else
            {
                if (SetScissorRect)
                {
                    ImVec4 clip_rect;
                    clip_rect.x = pcmd->ClipRect.x;
                    clip_rect.y = pcmd->ClipRect.w;
                    clip_rect.z = pcmd->ClipRect.z;
                    clip_rect.w = pcmd->ClipRect.y;
                    SetScissorRect((float*)&clip_rect);
                }

                RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)pcmd->TextureId);
                RwIm2DRenderIndexedPrimitive(rwPRIMTYPETRILIST,
                    &m_vertexBuffer[vtx_offset], (RwInt32)cmd_list->VtxBuffer.Size,
                    (RwImVertexIndex*)idx_buffer, pcmd->ElemCount);
                RwRenderStateSet(rwRENDERSTATETEXTURERASTER, (void*)0);

                if (SetScissorRect)
                {
                    float reset[4] = {0, 0, 0, 0};
                    SetScissorRect(reset);
                }
            }

            idx_buffer += pcmd->ElemCount;
        }
        vtx_offset += cmd_list->VtxBuffer.Size;
    }
}

bool ImGuiWrapper::createFontTexture()
{
    ImGuiIO& io = ImGui::GetIO();
    unsigned char* pxs;
    int width, height, bytes_per_pixel;
    io.Fonts->GetTexDataAsRGBA32(&pxs, &width, &height, &bytes_per_pixel);

    RwImage* font_img = RwImageCreate(width, height, bytes_per_pixel * 8);
    RwImageAllocatePixels(font_img);

    if (font_img == nullptr) return false;

    RwUInt8* pixels = font_img->cpPixels;
    for (int y = 0; y < font_img->height; y++)
    {
        memcpy((void*)pixels, pxs + font_img->stride * y, font_img->stride);
        pixels += font_img->stride;
    }

    RwInt32 w, h, d, flags;
    RwImageFindRasterFormat(font_img, 4, &w, &h, &d, &flags); // 4 = rwRASTERTYPETEXTURE
    m_fontRaster = RwRasterCreate(w, h, d, flags);
    if (m_fontRaster == nullptr)
    {
        RwImageDestroy(font_img);
        return false;
    }

    m_fontRaster = RwRasterSetFromImage(m_fontRaster, font_img);
    io.Fonts->TexID = (ImTextureID*)m_fontRaster;

    RwImageDestroy(font_img);

    m_renderer = new ImGuiRenderer(ImGui::GetBackgroundDrawList(), io.Fonts->Fonts[0]);
    return true;
}

void ImGuiWrapper::destroyFontTexture()
{
    if (m_fontRaster)
    {
        RwRasterDestroy(m_fontRaster);
        m_fontRaster = nullptr;
        ImGui::GetIO().Fonts->TexID = nullptr;
    }
}
