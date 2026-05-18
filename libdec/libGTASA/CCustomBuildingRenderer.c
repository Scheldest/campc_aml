
// Address: 0x18fa24
// Original: j__ZN23CCustomBuildingRenderer8ShutdownEv
// Demangled: CCustomBuildingRenderer::Shutdown(void)
// attributes: thunk
int __fastcall CCustomBuildingRenderer::Shutdown(CCustomBuildingRenderer *this)
{
  return _ZN23CCustomBuildingRenderer8ShutdownEv(this);
}


// ============================================================

// Address: 0x195458
// Original: j__ZN23CCustomBuildingRenderer10InitialiseEv
// Demangled: CCustomBuildingRenderer::Initialise(void)
// attributes: thunk
int __fastcall CCustomBuildingRenderer::Initialise(CCustomBuildingRenderer *this)
{
  return _ZN23CCustomBuildingRenderer10InitialiseEv(this);
}


// ============================================================

// Address: 0x19c18c
// Original: j__ZN23CCustomBuildingRenderer22IsCBPCPipelineAttachedEP8RpAtomic
// Demangled: CCustomBuildingRenderer::IsCBPCPipelineAttached(RpAtomic *)
// attributes: thunk
int CCustomBuildingRenderer::IsCBPCPipelineAttached()
{
  return _ZN23CCustomBuildingRenderer22IsCBPCPipelineAttachedEP8RpAtomic();
}


// ============================================================

// Address: 0x19eea4
// Original: j__ZN23CCustomBuildingRenderer11AtomicSetupEP8RpAtomic
// Demangled: CCustomBuildingRenderer::AtomicSetup(RpAtomic *)
// attributes: thunk
int CCustomBuildingRenderer::AtomicSetup(void)
{
  return _ZN23CCustomBuildingRenderer11AtomicSetupEP8RpAtomic();
}


// ============================================================

// Address: 0x19f194
// Original: j__ZN23CCustomBuildingRenderer6UpdateEv
// Demangled: CCustomBuildingRenderer::Update(void)
// attributes: thunk
int __fastcall CCustomBuildingRenderer::Update(CCustomBuildingRenderer *this)
{
  return _ZN23CCustomBuildingRenderer6UpdateEv(this);
}


// ============================================================

// Address: 0x19f20c
// Original: j__ZN23CCustomBuildingRenderer12PluginAttachEv
// Demangled: CCustomBuildingRenderer::PluginAttach(void)
// attributes: thunk
int __fastcall CCustomBuildingRenderer::PluginAttach(CCustomBuildingRenderer *this)
{
  return _ZN23CCustomBuildingRenderer12PluginAttachEv(this);
}


// ============================================================

// Address: 0x2ca1a8
// Original: _ZN23CCustomBuildingRendererC2Ev
// Demangled: CCustomBuildingRenderer::CCustomBuildingRenderer(void)
void __fastcall CCustomBuildingRenderer::CCustomBuildingRenderer(CCustomBuildingRenderer *this)
{
  ;
}


// ============================================================

// Address: 0x2ca1aa
// Original: _ZN23CCustomBuildingRendererD2Ev
// Demangled: CCustomBuildingRenderer::~CCustomBuildingRenderer()
void __fastcall CCustomBuildingRenderer::~CCustomBuildingRenderer(CCustomBuildingRenderer *this)
{
  ;
}


// ============================================================

// Address: 0x2ca1ac
// Original: _ZN23CCustomBuildingRenderer10InitialiseEv
// Demangled: CCustomBuildingRenderer::Initialise(void)
bool __fastcall CCustomBuildingRenderer::Initialise(CCustomBuildingRenderer *this)
{
  CCustomBuildingDNPipeline *Pipe; // r0

  Pipe = (CCustomBuildingDNPipeline *)CCustomBuildingPipeline::CreatePipe(this);
  return Pipe && CCustomBuildingDNPipeline::CreatePipe(Pipe) != 0;
}


// ============================================================

// Address: 0x2ca1c8
// Original: _ZN23CCustomBuildingRenderer8ShutdownEv
// Demangled: CCustomBuildingRenderer::Shutdown(void)
int __fastcall CCustomBuildingRenderer::Shutdown(CCustomBuildingRenderer *this)
{
  CCustomBuildingDNPipeline *v1; // r0

  v1 = (CCustomBuildingDNPipeline *)CCustomBuildingPipeline::DestroyPipe(this);
  return j_CCustomBuildingDNPipeline::DestroyPipe(v1);
}


// ============================================================

// Address: 0x2ca1d8
// Original: _ZN23CCustomBuildingRenderer12PluginAttachEv
// Demangled: CCustomBuildingRenderer::PluginAttach(void)
bool __fastcall CCustomBuildingRenderer::PluginAttach(CCustomBuildingRenderer *this)
{
  return CCustomBuildingDNPipeline::ExtraVertColourPluginAttach(this) != 0;
}


// ============================================================

// Address: 0x2ca1e8
// Original: _ZN23CCustomBuildingRenderer11AtomicSetupEP8RpAtomic
// Demangled: CCustomBuildingRenderer::AtomicSetup(RpAtomic *)
int __fastcall CCustomBuildingRenderer::AtomicSetup(int a1)
{
  int v1; // r5
  int ExtraVertColourPtr; // r0
  bool v3; // zf

  v1 = *(_DWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v1 + 8) & 0x208) == 0x208 )
    return sub_18BE38();
  ExtraVertColourPtr = CCustomBuildingDNPipeline::GetExtraVertColourPtr();
  v3 = ExtraVertColourPtr == 0;
  if ( ExtraVertColourPtr )
    v3 = *(_DWORD *)(v1 + 48) == 0;
  if ( v3 )
    return j_CCustomBuildingPipeline::CustomPipeAtomicSetup();
  else
    return sub_18BE38();
}


// ============================================================

// Address: 0x2ca220
// Original: _ZN23CCustomBuildingRenderer22IsCBPCPipelineAttachedEP8RpAtomic
// Demangled: CCustomBuildingRenderer::IsCBPCPipelineAttached(RpAtomic *)
bool __fastcall CCustomBuildingRenderer::IsCBPCPipelineAttached(int a1)
{
  int v2; // r4
  int ExtraVertColourPtr; // r0
  bool v4; // zf

  if ( (GetPipelineID() | 4) == 0x53F2009C )
    return 1;
  v2 = *(_DWORD *)(a1 + 24);
  if ( (*(_DWORD *)(v2 + 8) & 0x208) == 0x208 )
    return 1;
  ExtraVertColourPtr = CCustomBuildingDNPipeline::GetExtraVertColourPtr();
  v4 = ExtraVertColourPtr == 0;
  if ( ExtraVertColourPtr )
    v4 = *(_DWORD *)(v2 + 48) == 0;
  return !v4;
}


// ============================================================

// Address: 0x2ca260
// Original: _ZN23CCustomBuildingRenderer26UpdateDayNightBalanceParamEv
// Demangled: CCustomBuildingRenderer::UpdateDayNightBalanceParam(void)
int *__fastcall CCustomBuildingRenderer::UpdateDayNightBalanceParam(CCustomBuildingRenderer *this)
{
  float v1; // s2
  float v2; // s0
  int *result; // r0

  v1 = (float)((float)(unsigned __int16)CClock::ms_nGameClockSeconds / 60.0)
     + (float)((unsigned __int8)CClock::ms_nGameClockMinutes + 60 * (unsigned __int8)CClock::ms_nGameClockHours);
  v2 = 1.0;
  if ( v1 >= 360.0 )
  {
    if ( v1 >= 420.0 )
    {
      if ( v1 >= 1200.0 )
      {
        if ( v1 < 1260.0 )
          v2 = (float)((float)(1260.0 - v1) / -60.0) + 1.0;
      }
      else
      {
        v2 = 0.0;
      }
    }
    else
    {
      v2 = (float)(420.0 - v1) / 60.0;
    }
  }
  result = &CCustomBuildingDNPipeline::m_fDNBalanceParam;
  CCustomBuildingDNPipeline::m_fDNBalanceParam = LODWORD(v2);
  return result;
}


// ============================================================

// Address: 0x2ca334
// Original: _ZN23CCustomBuildingRenderer6UpdateEv
// Demangled: CCustomBuildingRenderer::Update(void)
int *__fastcall CCustomBuildingRenderer::Update(CCustomBuildingRenderer *this)
{
  float v1; // s2
  float v2; // s0
  int *result; // r0

  v1 = (float)((float)(unsigned __int16)CClock::ms_nGameClockSeconds / 60.0)
     + (float)((unsigned __int8)CClock::ms_nGameClockMinutes + 60 * (unsigned __int8)CClock::ms_nGameClockHours);
  v2 = 1.0;
  if ( v1 >= 360.0 )
  {
    if ( v1 >= 420.0 )
    {
      if ( v1 >= 1200.0 )
      {
        if ( v1 < 1260.0 )
          v2 = (float)((float)(1260.0 - v1) / -60.0) + 1.0;
      }
      else
      {
        v2 = 0.0;
      }
    }
    else
    {
      v2 = (float)(420.0 - v1) / 60.0;
    }
  }
  result = &CCustomBuildingDNPipeline::m_fDNBalanceParam;
  CCustomBuildingDNPipeline::m_fDNBalanceParam = LODWORD(v2);
  return result;
}


// ============================================================
