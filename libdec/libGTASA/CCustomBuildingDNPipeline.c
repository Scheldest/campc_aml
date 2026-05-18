
// Address: 0x18a928
// Original: j__ZN25CCustomBuildingDNPipeline27ExtraVertColourPluginAttachEv
// Demangled: CCustomBuildingDNPipeline::ExtraVertColourPluginAttach(void)
// attributes: thunk
int __fastcall CCustomBuildingDNPipeline::ExtraVertColourPluginAttach(CCustomBuildingDNPipeline *this)
{
  return _ZN25CCustomBuildingDNPipeline27ExtraVertColourPluginAttachEv(this);
}


// ============================================================

// Address: 0x18ad5c
// Original: j__ZN25CCustomBuildingDNPipeline11DestroyPipeEv
// Demangled: CCustomBuildingDNPipeline::DestroyPipe(void)
// attributes: thunk
int __fastcall CCustomBuildingDNPipeline::DestroyPipe(CCustomBuildingDNPipeline *this)
{
  return _ZN25CCustomBuildingDNPipeline11DestroyPipeEv(this);
}


// ============================================================

// Address: 0x18be3c
// Original: j__ZN25CCustomBuildingDNPipeline21CustomPipeAtomicSetupEP8RpAtomic
// Demangled: CCustomBuildingDNPipeline::CustomPipeAtomicSetup(RpAtomic *)
// attributes: thunk
int CCustomBuildingDNPipeline::CustomPipeAtomicSetup(void)
{
  return _ZN25CCustomBuildingDNPipeline21CustomPipeAtomicSetupEP8RpAtomic();
}


// ============================================================

// Address: 0x19663c
// Original: j__ZN25CCustomBuildingDNPipeline21GetExtraVertColourPtrEP10RpGeometry
// Demangled: CCustomBuildingDNPipeline::GetExtraVertColourPtr(RpGeometry *)
// attributes: thunk
int CCustomBuildingDNPipeline::GetExtraVertColourPtr()
{
  return _ZN25CCustomBuildingDNPipeline21GetExtraVertColourPtrEP10RpGeometry();
}


// ============================================================

// Address: 0x196d54
// Original: j__ZN25CCustomBuildingDNPipeline19CreateCustomObjPipeEv
// Demangled: CCustomBuildingDNPipeline::CreateCustomObjPipe(void)
// attributes: thunk
int __fastcall CCustomBuildingDNPipeline::CreateCustomObjPipe(CCustomBuildingDNPipeline *this)
{
  return _ZN25CCustomBuildingDNPipeline19CreateCustomObjPipeEv(this);
}


// ============================================================

// Address: 0x1a0440
// Original: j__ZN25CCustomBuildingDNPipeline10CreatePipeEv
// Demangled: CCustomBuildingDNPipeline::CreatePipe(void)
// attributes: thunk
int __fastcall CCustomBuildingDNPipeline::CreatePipe(CCustomBuildingDNPipeline *this)
{
  return _ZN25CCustomBuildingDNPipeline10CreatePipeEv(this);
}


// ============================================================

// Address: 0x2ca408
// Original: _ZN25CCustomBuildingDNPipelineC2Ev
// Demangled: CCustomBuildingDNPipeline::CCustomBuildingDNPipeline(void)
void __fastcall CCustomBuildingDNPipeline::CCustomBuildingDNPipeline(CCustomBuildingDNPipeline *this)
{
  ;
}


// ============================================================

// Address: 0x2ca40a
// Original: _ZN25CCustomBuildingDNPipelineD2Ev
// Demangled: CCustomBuildingDNPipeline::~CCustomBuildingDNPipeline()
void __fastcall CCustomBuildingDNPipeline::~CCustomBuildingDNPipeline(CCustomBuildingDNPipeline *this)
{
  ;
}


// ============================================================

// Address: 0x2ca40c
// Original: _ZN25CCustomBuildingDNPipeline10CreatePipeEv
// Demangled: CCustomBuildingDNPipeline::CreatePipe(void)
bool __fastcall CCustomBuildingDNPipeline::CreatePipe(CCustomBuildingDNPipeline *this)
{
  CCustomBuildingDNPipeline::ObjPipeline = CCustomBuildingDNPipeline::CreateCustomObjPipe((CCustomBuildingDNPipeline *)CCustomBuildingDNPipeline::ObjPipeline);
  return CCustomBuildingDNPipeline::ObjPipeline != 0;
}


// ============================================================

// Address: 0x2ca428
// Original: _ZN25CCustomBuildingDNPipeline19CreateCustomObjPipeEv
// Demangled: CCustomBuildingDNPipeline::CreateCustomObjPipe(void)
int __fastcall CCustomBuildingDNPipeline::CreateCustomObjPipe(CCustomBuildingDNPipeline *this)
{
  int v1; // r4

  v1 = RxPipelineCreate();
  RxNodeDefinitionGetOpenGLAtomicAllInOne();
  if ( !v1 )
    return 0;
  if ( !RxPipelineLock() || !RxLockedPipeAddFragment() || !RxLockedPipeUnlock() )
  {
    _rxPipelineDestroy();
    return 0;
  }
  RxPipelineFindNodeByName();
  RxOpenGLAllInOneSetInstanceCallBack();
  RxOpenGLAllInOneSetRenderCallBack();
  *(_DWORD *)(v1 + 44) = 1408368792;
  *(_DWORD *)(v1 + 48) = 1408368792;
  return v1;
}


// ============================================================

// Address: 0x2ca4a8
// Original: _ZN25CCustomBuildingDNPipeline11DestroyPipeEv
// Demangled: CCustomBuildingDNPipeline::DestroyPipe(void)
int *__fastcall CCustomBuildingDNPipeline::DestroyPipe(CCustomBuildingDNPipeline *this)
{
  int *result; // r0

  result = (int *)CCustomBuildingDNPipeline::ObjPipeline;
  if ( CCustomBuildingDNPipeline::ObjPipeline )
  {
    _rxPipelineDestroy();
    result = &CCustomBuildingDNPipeline::ObjPipeline;
    CCustomBuildingDNPipeline::ObjPipeline = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2ca4d8
// Original: _ZN25CCustomBuildingDNPipeline23CustomPipeMaterialSetupEP10RpMaterialPv
// Demangled: CCustomBuildingDNPipeline::CustomPipeMaterialSetup(RpMaterial *,void *)
int __fastcall CCustomBuildingDNPipeline::CustomPipeMaterialSetup(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r0
  _BOOL4 v5; // r0

  *(_DWORD *)(a1 + 16) = 0;
  if ( RpMatFXMaterialGetEffects() == 2 )
  {
    v2 = CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData();
    if ( v2 )
    {
      v3 = *(_DWORD *)(*(_DWORD *)(a1 + MatFXMaterialDataOffset) + 4);
      *(_DWORD *)(v2 + 8) = v3;
      if ( v3 )
        *(_WORD *)(v3 + 80) = 4354;
    }
  }
  v4 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  v5 = v4 && (float)((float)*(unsigned __int8 *)(v4 + 4) * 0.0039216) != 0.0 && *(_DWORD *)(v4 + 8) != 0;
  *(_DWORD *)(a1 + 16) = v5 | *(_DWORD *)(a1 + 16) & 0xFFFFFFF8;
  return a1;
}


// ============================================================

// Address: 0x2ca568
// Original: _ZN25CCustomBuildingDNPipeline15SetFxEnvTextureEP10RpMaterialP9RwTexture
// Demangled: CCustomBuildingDNPipeline::SetFxEnvTexture(RpMaterial *,RwTexture *)
int __fastcall CCustomBuildingDNPipeline::SetFxEnvTexture(int a1, int a2)
{
  int result; // r0

  result = CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData();
  if ( result )
  {
    if ( a2 )
    {
      *(_DWORD *)(result + 8) = a2;
    }
    else
    {
      if ( !a1 )
      {
        *(_DWORD *)(result + 8) = 0;
        return result;
      }
      a2 = *(_DWORD *)(*(_DWORD *)(a1 + MatFXMaterialDataOffset) + 4);
      *(_DWORD *)(result + 8) = a2;
      if ( !a2 )
        return result;
    }
    result = 4354;
    *(_WORD *)(a2 + 80) = 4354;
  }
  return result;
}


// ============================================================

// Address: 0x2ca5b4
// Original: _ZN25CCustomBuildingDNPipeline17GetFxEnvShininessEP10RpMaterial
// Demangled: CCustomBuildingDNPipeline::GetFxEnvShininess(RpMaterial *)
float __fastcall CCustomBuildingDNPipeline::GetFxEnvShininess(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(unsigned __int8 *)(v1 + 4) * 0.0039216;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2ca5f0
// Original: _ZN25CCustomBuildingDNPipeline15GetFxEnvTextureEP10RpMaterial
// Demangled: CCustomBuildingDNPipeline::GetFxEnvTexture(RpMaterial *)
int __fastcall CCustomBuildingDNPipeline::GetFxEnvTexture(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return *(_DWORD *)(v1 + 8);
  else
    return 0;
}


// ============================================================

// Address: 0x2ca608
// Original: _ZN25CCustomBuildingDNPipeline21CustomPipeAtomicSetupEP8RpAtomic
// Demangled: CCustomBuildingDNPipeline::CustomPipeAtomicSetup(RpAtomic *)
int __fastcall CCustomBuildingDNPipeline::CustomPipeAtomicSetup(int a1)
{
  RpGeometryForAllMaterials(*(_DWORD *)(a1 + 24), CCustomBuildingDNPipeline::CustomPipeMaterialSetup, 0);
  *(_DWORD *)(a1 + 108) = CCustomBuildingDNPipeline::ObjPipeline;
  SetPipelineID();
  return a1;
}


// ============================================================

// Address: 0x2ca640
// Original: _ZN25CCustomBuildingDNPipeline16UsesThisPipelineEP8RpAtomic
// Demangled: CCustomBuildingDNPipeline::UsesThisPipeline(RpAtomic *)
bool __fastcall CCustomBuildingDNPipeline::UsesThisPipeline(int a1)
{
  return CCustomBuildingDNPipeline::ObjPipeline == *(_DWORD *)(a1 + 108);
}


// ============================================================

// Address: 0x2ca658
// Original: _ZN25CCustomBuildingDNPipeline20CustomPipeInstanceCBEPvP24RxOpenGLMeshInstanceDataii
// Demangled: CCustomBuildingDNPipeline::CustomPipeInstanceCB(void *,RxOpenGLMeshInstanceData *,int,int)
int __fastcall CCustomBuildingDNPipeline::CustomPipeInstanceCB(
        CCustomBuildingDNPipeline *this,
        _DWORD *a2,
        RxOpenGLMeshInstanceData *a3,
        int a4,
        int a5)
{
  int v7; // r5
  int v9; // r9
  int v10; // r10
  int v11; // r11
  unsigned int v12; // r0
  size_t v13; // r0
  int v14; // r1
  char v15; // r3
  int v16; // r2
  int v17; // r1
  void *v18; // r11
  void *v19; // r0
  int v20; // r5
  unsigned int v21; // r2
  int v23; // [sp+18h] [bp-28h]
  int v24; // [sp+1Ch] [bp-24h]

  v7 = *((_DWORD *)this + 6);
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(_DWORD *)(v7 + 28);
  a2[1] = v9;
  if ( !a4 || (*(_WORD *)(v7 + 12) & 0xFFF) != 0 )
  {
    if ( *(unsigned __int8 *)(v7 + 11) << 31 )
    {
      a2[7] = *(_DWORD *)(v7 + 84);
    }
    else
    {
      v11 = *(_DWORD *)(v7 + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset);
      v23 = *(_DWORD *)(CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset + v7 + 4);
      if ( a4 )
      {
        v12 = a2[5];
        if ( v12 )
          emu_ArraysDelete(v12);
      }
      v24 = v11;
      if ( a4 )
      {
        v13 = a2[4];
      }
      else
      {
        v14 = 24;
        v15 = 3;
        if ( (v9 & 0x10) == 0 )
          v14 = 12;
        v16 = a2[3];
        if ( (v9 & 8) != 0 )
          v14 += 8;
        if ( !RwHackNoCompressedTexCoords )
          v15 = 2;
        v17 = v14 + (v10 << v15);
        a2[2] = v17;
        v13 = v17 * v16;
        a2[4] = v17 * v16;
      }
      v18 = malloc(v13);
      _rxOpenGLAllInOneAtomicInstanceVertexArray((int)a2, (int)this, v7, v9, v10, a4, (int)v18, v23, v24);
      emu_ArraysReset();
      v19 = (void *)a2[11];
      if ( v19 )
        emu_ArraysIndices(v19, 0x1403u, a2[10]);
      emu_ArraysVertex(v18, a2[4], a2[3], a2[2]);
      emu_ArraysVertexAttrib(0, 3, 0x1406u, 0, 0);
      v20 = 12;
      if ( (v9 & 0x10) != 0 )
      {
        emu_ArraysVertexAttrib(2u, 3, 0x1406u, 0, 12);
        v20 = 24;
      }
      if ( (v9 & 8) != 0 )
      {
        emu_ArraysVertexAttrib(3u, 4, 0x1401u, 1u, v20);
        emu_ArraysVertexAttrib(6u, 4, 0x1401u, 1u, v20 + 4);
        v20 += 8;
      }
      if ( v10 >= 1 )
      {
        if ( RwHackNoCompressedTexCoords )
          v21 = 5126;
        else
          v21 = 5123;
        emu_ArraysVertexAttrib(1u, 2, v21, 0, v20);
      }
      a2[5] = emu_ArraysStore(a4 != 0, 1u);
    }
  }
  return 1;
}


// ============================================================

// Address: 0x2ca7ec
// Original: _ZN25CCustomBuildingDNPipeline18CustomPipeRenderCBEP10RwResEntryPvhj
// Demangled: CCustomBuildingDNPipeline::CustomPipeRenderCB(RwResEntry *,void *,uchar,uint)
int __fastcall CCustomBuildingDNPipeline::CustomPipeRenderCB(int a1, int a2, int a3, char a4)
{
  int v4; // r9
  int v6; // r11
  _QWORD *v7; // r5
  int v8; // r4
  __int64 v9; // r0
  bool v10; // zf
  unsigned int v11; // r0
  int v12; // r6
  int v13; // r0
  int v14; // r8
  int v15; // r0
  float v16; // s0
  int *v17; // r2
  int v18; // r0
  bool v19; // zf

  emu_SetSecondVertexColor(1u, *(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam);
  v6 = *(unsigned __int16 *)(a1 + 26);
  if ( *(_WORD *)(a1 + 26) )
  {
    v7 = (_QWORD *)(a1 + 28);
    v8 = a4 & 0x84;
    while ( 1 )
    {
      v9 = v7[6];
      --v6;
      v10 = HIDWORD(v9) == 0;
      v11 = *(unsigned __int8 *)(v9 + 7);
      if ( !HIDWORD(v9) )
        v10 = v11 == 255;
      if ( v10 )
        break;
      if ( v11 )
      {
        emu_EnableAlphaModulate((float)v11 / 255.0);
        v12 = 1;
LABEL_10:
        _rwOpenGLSetRenderState();
        if ( rwOpenGLLightingEnabled )
        {
          _rwOpenGLLightsSetMaterialProperties();
        }
        else
        {
          if ( rwOpenGLColorMaterialEnabled )
          {
            emu_glDisable(0xB57u);
            rwOpenGLColorMaterialEnabled = 0;
          }
          if ( (a4 & 8) == 0 )
            emu_glColor4fv(rwOpenGLOpaqueBlack);
        }
        v13 = *((_DWORD *)v7 + 12);
        v14 = *(_DWORD *)(v13 + 16) & 1;
        if ( v14 )
        {
          v4 = v12;
          v15 = *(_DWORD *)(v13 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
          v16 = (float)*(unsigned __int8 *)(v15 + 4);
          v17 = *(int **)(v15 + 8);
          v18 = *v17;
          *((_BYTE *)v17 + 81) = 17;
          emu_SetEnvMap(*(void **)(v18 + RasterExtOffset), (float)(v16 * 0.0039216) * 1.5, 0);
          v8 = a4 & 0x84;
          SetNormalMatrix();
          byte_70BF3C = 0;
        }
        v19 = v8 == 0;
        if ( v8 )
        {
          v4 = **((_DWORD **)v7 + 12);
          v19 = v4 == 0;
        }
        if ( v19 || !*(_DWORD *)v4 )
          goto LABEL_24;
        if ( *(unsigned __int8 *)(*(_DWORD *)v4 + 48) << 31 )
        {
          if ( v12 )
            emu_DisableAlphaModulate();
          v7 += 7;
          if ( !(v6 << 16) )
            return j_emu_SetSecondVertexColor(0, 0.0);
        }
        else
        {
          _rwOpenGLSetRenderStateNoExtras();
LABEL_24:
          _rwOpenGLSetRenderState();
          RxOpenGLMeshInstanceData::DrawStored((RxOpenGLMeshInstanceData *)v7);
          v7 += 7;
          if ( v12 )
            emu_DisableAlphaModulate();
          if ( v14 )
          {
            emu_ResetEnvMap();
            if ( !byte_70BF3C )
            {
              emu_glPopMatrix();
              emu_glMatrixMode(0x1700u);
            }
          }
          if ( !(v6 << 16) )
            return j_emu_SetSecondVertexColor(0, 0.0);
        }
      }
      else
      {
        v7 += 7;
        if ( !(v6 << 16) )
          return j_emu_SetSecondVertexColor(0, 0.0);
      }
    }
    v12 = 0;
    goto LABEL_10;
  }
  return j_emu_SetSecondVertexColor(0, 0.0);
}


// ============================================================

// Address: 0x2caa9c
// Original: _ZN25CCustomBuildingDNPipeline27ExtraVertColourPluginAttachEv
// Demangled: CCustomBuildingDNPipeline::ExtraVertColourPluginAttach(void)
bool __fastcall CCustomBuildingDNPipeline::ExtraVertColourPluginAttach(CCustomBuildingDNPipeline *this)
{
  int v1; // r4

  v1 = 0;
  CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset = -1;
  CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset = RpGeometryRegisterPlugin(
                                                                12,
                                                                0x253F2F9u,
                                                                (void *(*)(void *, int, int))CCustomBuildingDNPipeline::pluginExtraVertColourConstructorCB,
                                                                (void *(*)(void *, int, int))CCustomBuildingDNPipeline::pluginExtraVertColourDestructorCB,
                                                                0);
  if ( CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset != -1 )
  {
    if ( RpGeometryRegisterPluginStream() < 0 )
    {
      v1 = 0;
      CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset = -1;
    }
    else
    {
      return CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset != -1;
    }
  }
  return v1;
}


// ============================================================

// Address: 0x2cab40
// Original: _ZN25CCustomBuildingDNPipeline34pluginExtraVertColourConstructorCBEPvii
// Demangled: CCustomBuildingDNPipeline::pluginExtraVertColourConstructorCB(void *,int,int)
int __fastcall CCustomBuildingDNPipeline::pluginExtraVertColourConstructorCB(int this, void *a2, int a3, int a4)
{
  int v4; // r1
  int v5; // r1

  v4 = CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset;
  if ( CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset >= 1 )
  {
    *(_DWORD *)(this + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset) = 0;
    v5 = v4 + this;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x2cab5c
// Original: _ZN25CCustomBuildingDNPipeline33pluginExtraVertColourDestructorCBEPvii
// Demangled: CCustomBuildingDNPipeline::pluginExtraVertColourDestructorCB(void *,int,int)
CCustomBuildingDNPipeline *__fastcall CCustomBuildingDNPipeline::pluginExtraVertColourDestructorCB(
        CCustomBuildingDNPipeline *this,
        void *a2,
        int a3,
        int a4)
{
  char *v5; // r1
  void *v6; // r0
  void *v7; // r0

  v5 = (char *)CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset;
  v6 = *(void **)((char *)this + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset);
  if ( v6 )
  {
    CMemoryMgr::Free(v6, (void *)CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset);
    *(_DWORD *)((char *)this + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset) = 0;
    v5 = (char *)CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset;
  }
  v7 = *(void **)&v5[(_DWORD)this + 4];
  if ( v7 )
  {
    CMemoryMgr::Free(v7, v5);
    *(_DWORD *)((char *)this + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset + 4) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x2caba8
// Original: _ZN25CCustomBuildingDNPipeline33pluginExtraVertColourStreamReadCBEP8RwStreamiPvii
// Demangled: CCustomBuildingDNPipeline::pluginExtraVertColourStreamReadCB(RwStream *,int,void *,int,int)
int __fastcall CCustomBuildingDNPipeline::pluginExtraVertColourStreamReadCB(int a1, int a2, _DWORD *a3)
{
  int v6; // r6
  char *v7; // r6
  unsigned int v8; // r1
  unsigned int v9; // r1
  unsigned int v10; // r6
  int v11; // r1
  char *v12; // r12
  int v13; // r5
  unsigned int v14; // r0
  bool v15; // cf
  char *v16; // r2
  unsigned int v17; // r0
  int v18; // r1
  int v19; // r3
  char *v20; // r4
  _BYTE *v21; // r6
  int v22; // r6
  int v24; // r3
  char *v25; // r2
  const char *v26; // r0
  const char *v27; // r0
  char *v28; // r2
  _DWORD v29[7]; // [sp+4h] [bp-1Ch] BYREF
  int8x8x4_t v30; // 0:d16.8,8:d18.8,16:d20.8,24:d22.8
  int8x8x4_t v31; // 0:d17.8,8:d19.8,16:d21.8,24:d23.8

  v6 = CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset;
  RwStreamRead(a1, v29, 4u);
  if ( v29[0] )
  {
    v7 = (char *)a3 + v6;
    v8 = a3[5];
    a3[2] |= 0x200u;
    *(_DWORD *)v7 = CMemoryMgr::Malloc(4 * v8, v8);
    *(_QWORD *)(v7 + 4) = (unsigned int)CMemoryMgr::Malloc(4 * a3[5], v9) | 0x3F80000000000000LL;
    RwStreamRead(a1, *(void **)v7, 4 * a3[5]);
    v10 = a3[12];
    if ( v10 )
    {
      v11 = a3[5];
      if ( v11 >= 1 )
      {
        v12 = *(char **)((char *)a3 + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset + 4);
        if ( (unsigned int)v11 < 0x10 )
          goto LABEL_9;
        v13 = v11 & 0x7FFFFFF0;
        if ( (v11 & 0xFFFFFFF0) == 0 )
          goto LABEL_9;
        v14 = v10 + 4 * v11;
        v15 = (unsigned int)v12 >= v14;
        if ( (unsigned int)v12 < v14 )
          v15 = v10 >= (unsigned int)&v12[4 * v11];
        if ( !v15 )
        {
LABEL_9:
          v13 = 0;
LABEL_10:
          v16 = &v12[4 * v13];
          v17 = v10 + 4 * v13;
          v18 = v11 - v13;
          v19 = 0;
          do
          {
            v20 = &v16[v19];
            v16[v19] = *(_BYTE *)(v17 + v19);
            v21 = (_BYTE *)(v17 + v19);
            v19 += 4;
            --v18;
            v20[2] = v21[2];
            v20[1] = v21[1];
            v20[3] = v21[3];
          }
          while ( v18 );
          return a1;
        }
        v24 = v11 & 0x7FFFFFF0;
        v25 = v12;
        v26 = (const char *)v10;
        do
        {
          v30 = vld4_s8(v26);
          v27 = v26 + 32;
          v24 -= 16;
          v31 = vld4_s8(v27);
          v26 = v27 + 32;
          vst4_s8(v25, v30);
          v28 = v25 + 32;
          vst4_s8(v28, v31);
          v25 = v28 + 32;
        }
        while ( v24 );
        if ( v11 != v13 )
          goto LABEL_10;
      }
    }
  }
  else if ( a2 >= 5 )
  {
    v22 = 4 - a2;
    do
    {
      RwStreamRead(a1, v29, 4u);
      v22 += 4;
    }
    while ( v22 );
  }
  return a1;
}


// ============================================================

// Address: 0x2caca8
// Original: _ZN25CCustomBuildingDNPipeline34pluginExtraVertColourStreamWriteCBEP8RwStreamiPKvii
// Demangled: CCustomBuildingDNPipeline::pluginExtraVertColourStreamWriteCB(RwStream *,int,void const*,int,int)
int __fastcall CCustomBuildingDNPipeline::pluginExtraVertColourStreamWriteCB(int a1, int a2, int a3)
{
  void *v5; // r6

  v5 = *(void **)(a3 + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset);
  RwStreamWrite(a1, v5, 4u);
  if ( v5 )
    RwStreamWrite(a1, v5, 4 * *(_DWORD *)(a3 + 20));
  return a1;
}


// ============================================================

// Address: 0x2cace4
// Original: _ZN25CCustomBuildingDNPipeline36pluginExtraVertColourStreamGetSizeCBEPKvii
// Demangled: CCustomBuildingDNPipeline::pluginExtraVertColourStreamGetSizeCB(void const*,int,int)
int __fastcall CCustomBuildingDNPipeline::pluginExtraVertColourStreamGetSizeCB(
        CCustomBuildingDNPipeline *this,
        const void *a2,
        int a3,
        int a4)
{
  int result; // r0

  result = 0;
  if ( this )
  {
    if ( *(_DWORD *)((char *)this + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset) )
      return 4 * *((_DWORD *)this + 5) + 4;
  }
  return result;
}


// ============================================================

// Address: 0x2cad5c
// Original: _ZN25CCustomBuildingDNPipeline21GetExtraVertColourPtrEP10RpGeometry
// Demangled: CCustomBuildingDNPipeline::GetExtraVertColourPtr(RpGeometry *)
int __fastcall CCustomBuildingDNPipeline::GetExtraVertColourPtr(int a1)
{
  return *(_DWORD *)(a1 + CCustomBuildingDNPipeline::ms_extraVertColourPluginOffset);
}


// ============================================================

// Address: 0x2cad7c
// Original: _ZN25CCustomBuildingDNPipeline13SetFxEnvScaleEP10RpMaterialff
// Demangled: CCustomBuildingDNPipeline::SetFxEnvScale(RpMaterial *,float,float)
_BYTE *__fastcall CCustomBuildingDNPipeline::SetFxEnvScale(int a1, float a2, float a3)
{
  _BYTE *result; // r0

  result = (_BYTE *)CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData();
  if ( result )
  {
    result[1] = (int)(float)(a3 * 8.0);
    *result = (int)(float)(a2 * 8.0);
  }
  return result;
}


// ============================================================

// Address: 0x2cadc8
// Original: _ZN25CCustomBuildingDNPipeline14GetFxEnvScaleXEP10RpMaterial
// Demangled: CCustomBuildingDNPipeline::GetFxEnvScaleX(RpMaterial *)
float __fastcall CCustomBuildingDNPipeline::GetFxEnvScaleX(int a1)
{
  char *v1; // r0

  v1 = *(char **)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*v1 * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cae04
// Original: _ZN25CCustomBuildingDNPipeline14GetFxEnvScaleYEP10RpMaterial
// Demangled: CCustomBuildingDNPipeline::GetFxEnvScaleY(RpMaterial *)
float __fastcall CCustomBuildingDNPipeline::GetFxEnvScaleY(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 1) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cae40
// Original: _ZN25CCustomBuildingDNPipeline16SetFxEnvTransSclEP10RpMaterialff
// Demangled: CCustomBuildingDNPipeline::SetFxEnvTransScl(RpMaterial *,float,float)
int __fastcall CCustomBuildingDNPipeline::SetFxEnvTransScl(int a1, float a2, float a3)
{
  int result; // r0

  result = CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData();
  if ( result )
  {
    *(_BYTE *)(result + 3) = (int)(float)(a3 * 8.0);
    *(_BYTE *)(result + 2) = (int)(float)(a2 * 8.0);
  }
  return result;
}


// ============================================================

// Address: 0x2cae8c
// Original: _ZN25CCustomBuildingDNPipeline17GetFxEnvTransSclXEP10RpMaterial
// Demangled: CCustomBuildingDNPipeline::GetFxEnvTransSclX(RpMaterial *)
float __fastcall CCustomBuildingDNPipeline::GetFxEnvTransSclX(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 2) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2caec8
// Original: _ZN25CCustomBuildingDNPipeline17GetFxEnvTransSclYEP10RpMaterial
// Demangled: CCustomBuildingDNPipeline::GetFxEnvTransSclY(RpMaterial *)
float __fastcall CCustomBuildingDNPipeline::GetFxEnvTransSclY(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 3) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2caf04
// Original: _ZN25CCustomBuildingDNPipeline17SetFxEnvShininessEP10RpMaterialf
// Demangled: CCustomBuildingDNPipeline::SetFxEnvShininess(RpMaterial *,float)
int __fastcall CCustomBuildingDNPipeline::SetFxEnvShininess(int a1, float a2)
{
  int result; // r0

  result = CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData();
  if ( result )
    *(_BYTE *)(result + 4) = (unsigned int)(float)(a2 * 255.0);
  return result;
}


// ============================================================
