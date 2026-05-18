
// Address: 0x18b80c
// Original: j__ZN14CCarFXRenderer21InitialiseDirtTextureEv
// Demangled: CCarFXRenderer::InitialiseDirtTexture(void)
// attributes: thunk
int __fastcall CCarFXRenderer::InitialiseDirtTexture(CCarFXRenderer *this)
{
  return _ZN14CCarFXRenderer21InitialiseDirtTextureEv(this);
}


// ============================================================

// Address: 0x18c40c
// Original: j__ZN14CCarFXRenderer37SetCustomFXAtomicRenderPipelinesVMICBEP8RpAtomicPv
// Demangled: CCarFXRenderer::SetCustomFXAtomicRenderPipelinesVMICB(RpAtomic *,void *)
// attributes: thunk
int CCarFXRenderer::SetCustomFXAtomicRenderPipelinesVMICB(void)
{
  return _ZN14CCarFXRenderer37SetCustomFXAtomicRenderPipelinesVMICBEP8RpAtomicPv();
}


// ============================================================

// Address: 0x18cbe4
// Original: j__ZN14CCarFXRenderer20SetFxEnvMapLightMultEf
// Demangled: CCarFXRenderer::SetFxEnvMapLightMult(float)
// attributes: thunk
int __fastcall CCarFXRenderer::SetFxEnvMapLightMult(CCarFXRenderer *this, float a2)
{
  return _ZN14CCarFXRenderer20SetFxEnvMapLightMultEf(this, a2);
}


// ============================================================

// Address: 0x18eefc
// Original: j__ZN14CCarFXRenderer22IsCCPCPipelineAttachedEP8RpAtomic
// Demangled: CCarFXRenderer::IsCCPCPipelineAttached(RpAtomic *)
// attributes: thunk
int CCarFXRenderer::IsCCPCPipelineAttached()
{
  return _ZN14CCarFXRenderer22IsCCPCPipelineAttachedEP8RpAtomic();
}


// ============================================================

// Address: 0x18fbbc
// Original: j__ZN14CCarFXRenderer15RegisterPluginsEv
// Demangled: CCarFXRenderer::RegisterPlugins(void)
// attributes: thunk
int __fastcall CCarFXRenderer::RegisterPlugins(CCarFXRenderer *this)
{
  return _ZN14CCarFXRenderer15RegisterPluginsEv(this);
}


// ============================================================

// Address: 0x191b04
// Original: j__ZN14CCarFXRenderer23CustomCarPipeClumpSetupEP7RpClump
// Demangled: CCarFXRenderer::CustomCarPipeClumpSetup(RpClump *)
// attributes: thunk
int CCarFXRenderer::CustomCarPipeClumpSetup()
{
  return _ZN14CCarFXRenderer23CustomCarPipeClumpSetupEP7RpClump();
}


// ============================================================

// Address: 0x192cdc
// Original: j__ZN14CCarFXRenderer24CustomCarPipeAtomicSetupEP8RpAtomic
// Demangled: CCarFXRenderer::CustomCarPipeAtomicSetup(RpAtomic *)
// attributes: thunk
int CCarFXRenderer::CustomCarPipeAtomicSetup()
{
  return _ZN14CCarFXRenderer24CustomCarPipeAtomicSetupEP8RpAtomic();
}


// ============================================================

// Address: 0x195190
// Original: j__ZN14CCarFXRenderer15PreRenderUpdateEv
// Demangled: CCarFXRenderer::PreRenderUpdate(void)
// attributes: thunk
int __fastcall CCarFXRenderer::PreRenderUpdate(CCarFXRenderer *this)
{
  return _ZN14CCarFXRenderer15PreRenderUpdateEv(this);
}


// ============================================================

// Address: 0x19c828
// Original: j__ZN14CCarFXRenderer9RemapDirtEP17CVehicleModelInfoj
// Demangled: CCarFXRenderer::RemapDirt(CVehicleModelInfo *,uint)
// attributes: thunk
int __fastcall CCarFXRenderer::RemapDirt(CCarFXRenderer *this, CVehicleModelInfo *a2, unsigned int a3)
{
  return _ZN14CCarFXRenderer9RemapDirtEP17CVehicleModelInfoj(this, a2, a3);
}


// ============================================================

// Address: 0x19cc30
// Original: j__ZN14CCarFXRenderer8ShutdownEv
// Demangled: CCarFXRenderer::Shutdown(void)
// attributes: thunk
int __fastcall CCarFXRenderer::Shutdown(CCarFXRenderer *this)
{
  return _ZN14CCarFXRenderer8ShutdownEv(this);
}


// ============================================================

// Address: 0x19f6d8
// Original: j__ZN14CCarFXRenderer10InitialiseEv
// Demangled: CCarFXRenderer::Initialise(void)
// attributes: thunk
int __fastcall CCarFXRenderer::Initialise(CCarFXRenderer *this)
{
  return _ZN14CCarFXRenderer10InitialiseEv(this);
}


// ============================================================

// Address: 0x2c9d68
// Original: _ZN14CCarFXRenderer10InitialiseEv
// Demangled: CCarFXRenderer::Initialise(void)
bool __fastcall CCarFXRenderer::Initialise(CCarFXRenderer *this)
{
  return CCustomCarEnvMapPipeline::CreatePipe(this) != 0;
}


// ============================================================

// Address: 0x2c9d78
// Original: _ZN14CCarFXRenderer8ShutdownEv
// Demangled: CCarFXRenderer::Shutdown(void)
int __fastcall CCarFXRenderer::Shutdown(CCarFXRenderer *this)
{
  CCustomCarEnvMapPipeline *v1; // r0

  if ( CCarFXRenderer::ms_aDirtTextures )
  {
    RwTextureDestroy(CCarFXRenderer::ms_aDirtTextures);
    CCarFXRenderer::ms_aDirtTextures = 0;
  }
  if ( dword_70BEE0 )
  {
    RwTextureDestroy(dword_70BEE0);
    dword_70BEE0 = 0;
  }
  if ( dword_70BEE4 )
  {
    RwTextureDestroy(dword_70BEE4);
    dword_70BEE4 = 0;
  }
  if ( dword_70BEE8 )
  {
    RwTextureDestroy(dword_70BEE8);
    dword_70BEE8 = 0;
  }
  if ( dword_70BEEC )
  {
    RwTextureDestroy(dword_70BEEC);
    dword_70BEEC = 0;
  }
  if ( dword_70BEF0 )
  {
    RwTextureDestroy(dword_70BEF0);
    dword_70BEF0 = 0;
  }
  if ( dword_70BEF4 )
  {
    RwTextureDestroy(dword_70BEF4);
    dword_70BEF4 = 0;
  }
  if ( dword_70BEF8 )
  {
    RwTextureDestroy(dword_70BEF8);
    dword_70BEF8 = 0;
  }
  if ( dword_70BEFC )
  {
    RwTextureDestroy(dword_70BEFC);
    dword_70BEFC = 0;
  }
  if ( dword_70BF00 )
  {
    RwTextureDestroy(dword_70BF00);
    dword_70BF00 = 0;
  }
  if ( dword_70BF04 )
  {
    RwTextureDestroy(dword_70BF04);
    dword_70BF04 = 0;
  }
  if ( dword_70BF08 )
  {
    RwTextureDestroy(dword_70BF08);
    dword_70BF08 = 0;
  }
  if ( dword_70BF0C )
  {
    RwTextureDestroy(dword_70BF0C);
    dword_70BF0C = 0;
  }
  if ( dword_70BF10 )
  {
    RwTextureDestroy(dword_70BF10);
    dword_70BF10 = 0;
  }
  if ( dword_70BF14 )
  {
    RwTextureDestroy(dword_70BF14);
    dword_70BF14 = 0;
  }
  v1 = (CCustomCarEnvMapPipeline *)dword_70BF18;
  if ( dword_70BF18 )
  {
    RwTextureDestroy(dword_70BF18);
    v1 = (CCustomCarEnvMapPipeline *)&CCarFXRenderer::ms_aDirtTextures;
    dword_70BF18 = 0;
  }
  return j_CCustomCarEnvMapPipeline::DestroyPipe(v1);
}


// ============================================================

// Address: 0x2c9f84
// Original: _ZN14CCarFXRenderer15RegisterPluginsEv
// Demangled: CCarFXRenderer::RegisterPlugins(void)
bool __fastcall CCarFXRenderer::RegisterPlugins(CCarFXRenderer *this)
{
  return CCustomCarEnvMapPipeline::RegisterPlugin(this) != 0;
}


// ============================================================

// Address: 0x2c9f94
// Original: _ZN14CCarFXRenderer15PreRenderUpdateEv
// Demangled: CCarFXRenderer::PreRenderUpdate(void)
// attributes: thunk
int __fastcall CCarFXRenderer::PreRenderUpdate(CCustomCarEnvMapPipeline *this)
{
  return j_CCustomCarEnvMapPipeline::PreRenderUpdate(this);
}


// ============================================================

// Address: 0x2c9f98
// Original: _ZN14CCarFXRenderer24CustomCarPipeAtomicSetupEP8RpAtomic
// Demangled: CCarFXRenderer::CustomCarPipeAtomicSetup(RpAtomic *)
// attributes: thunk
int CCarFXRenderer::CustomCarPipeAtomicSetup(void)
{
  return j_CCustomCarEnvMapPipeline::CustomPipeAtomicSetup();
}


// ============================================================

// Address: 0x2c9f9c
// Original: _ZN14CCarFXRenderer23CustomCarPipeClumpSetupEP7RpClump
// Demangled: CCarFXRenderer::CustomCarPipeClumpSetup(RpClump *)
int __fastcall CCarFXRenderer::CustomCarPipeClumpSetup(int a1)
{
  RpClumpForAllAtomics(a1, j_j_j__ZN24CCustomCarEnvMapPipeline21CustomPipeAtomicSetupEP8RpAtomic, 0);
  return a1;
}


// ============================================================

// Address: 0x2c9fb8
// Original: _ZN14CCarFXRenderer37SetCustomFXAtomicRenderPipelinesVMICBEP8RpAtomicPv
// Demangled: CCarFXRenderer::SetCustomFXAtomicRenderPipelinesVMICB(RpAtomic *,void *)
int __fastcall CCarFXRenderer::SetCustomFXAtomicRenderPipelinesVMICB(int a1)
{
  CCustomCarEnvMapPipeline::CustomPipeAtomicSetup();
  return a1;
}


// ============================================================

// Address: 0x2c9fc6
// Original: _ZN14CCarFXRenderer22IsCCPCPipelineAttachedEP8RpAtomic
// Demangled: CCarFXRenderer::IsCCPCPipelineAttached(RpAtomic *)
bool CCarFXRenderer::IsCCPCPipelineAttached()
{
  return GetPipelineID() == 1408368794;
}


// ============================================================

// Address: 0x2c9fe0
// Original: _ZN14CCarFXRenderer20SetFxEnvMapLightMultEf
// Demangled: CCarFXRenderer::SetFxEnvMapLightMult(float)
int __fastcall CCarFXRenderer::SetFxEnvMapLightMult(int this, float a2)
{
  CCustomCarEnvMapPipeline::m_EnvMapLightingMult = this;
  return this;
}


// ============================================================

// Address: 0x2c9ff0
// Original: _ZN14CCarFXRenderer20GetFxEnvMapLightMultEv
// Demangled: CCarFXRenderer::GetFxEnvMapLightMult(void)
int __fastcall CCarFXRenderer::GetFxEnvMapLightMult(CCarFXRenderer *this)
{
  return CCustomCarEnvMapPipeline::m_EnvMapLightingMult;
}


// ============================================================

// Address: 0x2ca000
// Original: _ZN14CCarFXRenderer21InitialiseDirtTextureEv
// Demangled: CCarFXRenderer::InitialiseDirtTexture(void)
int __fastcall CCarFXRenderer::InitialiseDirtTexture(CCarFXRenderer *this, const char *a2)
{
  CTxdStore *TxdSlot; // r4
  int v3; // r5
  const char *v4; // r2
  int v5; // r0
  int v6; // r2
  __int64 v7; // kr00_8
  int v8; // r0
  unsigned __int8 *v9; // r12
  int v10; // lr
  unsigned int v11; // r1
  unsigned __int8 *v12; // r3
  int v13; // r4
  int v14; // r0
  int v15; // r2
  CTxdStore *v16; // r0
  int v18; // [sp+8h] [bp-20h]

  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"vehicle", a2);
  CTxdStore::PushCurrentTxd(TxdSlot);
  v3 = 0;
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v4);
  v5 = RwTextureRead("vehiclegrunge256", 0);
  v6 = *(_DWORD *)v5;
  *(_BYTE *)(v5 + 80) = 2;
  v7 = *(_QWORD *)(v6 + 12);
  do
  {
    CCarFXRenderer::ms_aDirtTextures[v3] = CClothesBuilder::CopyTexture();
    RwTextureSetName();
    v18 = *(_DWORD *)CCarFXRenderer::ms_aDirtTextures[v3];
    v8 = RwRasterLock();
    if ( SHIDWORD(v7) >= 1 )
    {
      v9 = (unsigned __int8 *)(v8 + 1);
      v10 = 0;
      v11 = (unsigned int)(255 * (16 - v3)) >> 4;
      do
      {
        v12 = v9;
        v13 = v7;
        if ( (int)v7 >= 1 )
        {
          do
          {
            --v13;
            v14 = v3 * *v12;
            v15 = v3 * v12[1];
            *(v12 - 1) = v11 + v3 * *(v12 - 1) / 16;
            *v12 = v11 + v14 / 16;
            v12[1] = v11 + v15 / 16;
            v12 += 4;
          }
          while ( v13 );
        }
        ++v10;
        v9 += 4 * v7;
      }
      while ( v10 != HIDWORD(v7) );
    }
    v16 = (CTxdStore *)RwRasterUnlock(v18);
    ++v3;
  }
  while ( v3 != 16 );
  CTxdStore::PopCurrentTxd(v16);
  return 1;
}


// ============================================================

// Address: 0x2ca10c
// Original: _ZN14CCarFXRenderer19MaterialRemapDirtCBEP10RpMaterialPv
// Demangled: CCarFXRenderer::MaterialRemapDirtCB(RpMaterial *,void *)
int *__fastcall CCarFXRenderer::MaterialRemapDirtCB(int *a1, int a2)
{
  int v4; // r0

  v4 = *a1;
  if ( !v4 || (*((int (__fastcall **)(int, const char *))RwEngineInstance + 68))(v4 + 16, "vehiclegrunge256") )
    return a1;
  RpMaterialSetTexture(a1, CCarFXRenderer::ms_aDirtTextures[a2]);
  return a1;
}


// ============================================================

// Address: 0x2ca154
// Original: _ZN14CCarFXRenderer17AtomicRemapDirtCBEP8RpAtomicPv
// Demangled: CCarFXRenderer::AtomicRemapDirtCB(RpAtomic *,void *)
int __fastcall CCarFXRenderer::AtomicRemapDirtCB(int a1, int a2)
{
  RpGeometryForAllMaterials(*(_DWORD *)(a1 + 24), CCarFXRenderer::MaterialRemapDirtCB, a2);
  return a1;
}


// ============================================================

// Address: 0x2ca170
// Original: _ZN14CCarFXRenderer9RemapDirtEP17CVehicleModelInfoj
// Demangled: CCarFXRenderer::RemapDirt(CVehicleModelInfo *,uint)
int __fastcall CCarFXRenderer::RemapDirt(CCarFXRenderer *this, CVehicleModelInfo *a2, unsigned int a3)
{
  char *v3; // r5
  int i; // r6
  int result; // r0

  v3 = (char *)this + 584;
  for ( i = 0; i != 64; ++i )
  {
    result = *(_DWORD *)&v3[4 * i];
    if ( result )
      result = RpMaterialSetTexture(result, CCarFXRenderer::ms_aDirtTextures[(_DWORD)a2]);
  }
  return result;
}


// ============================================================
