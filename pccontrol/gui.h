#pragma once

#include "ImGui/imguiwrapper.h"

class PCControlGUI : public ImGuiWrapper
{
public:
    PCControlGUI();
    virtual ~PCControlGUI();

    bool initialize();

protected:
    virtual void drawList() override;
};

extern PCControlGUI* g_pGUI;
