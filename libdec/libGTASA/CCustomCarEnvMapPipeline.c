
// Address: 0x194724
// Original: j__ZN24CCustomCarEnvMapPipeline37DuplicateCustomEnvMapPipeMaterialDataEPP28CustomEnvMapPipeMaterialData
// Demangled: CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData(CustomEnvMapPipeMaterialData **)
// attributes: thunk
int CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData()
{
  return _ZN24CCustomCarEnvMapPipeline37DuplicateCustomEnvMapPipeMaterialDataEPP28CustomEnvMapPipeMaterialData();
}


// ============================================================

// Address: 0x194998
// Original: j__ZN24CCustomCarEnvMapPipeline25CreateCustomOpenGLObjPipeEv
// Demangled: CCustomCarEnvMapPipeline::CreateCustomOpenGLObjPipe(void)
// attributes: thunk
int __fastcall CCustomCarEnvMapPipeline::CreateCustomOpenGLObjPipe(CCustomCarEnvMapPipeline *this)
{
  return _ZN24CCustomCarEnvMapPipeline25CreateCustomOpenGLObjPipeEv(this);
}


// ============================================================

// Address: 0x198d24
// Original: j__ZN24CCustomCarEnvMapPipeline15PreRenderUpdateEv
// Demangled: CCustomCarEnvMapPipeline::PreRenderUpdate(void)
// attributes: thunk
int __fastcall CCustomCarEnvMapPipeline::PreRenderUpdate(CCustomCarEnvMapPipeline *this)
{
  return _ZN24CCustomCarEnvMapPipeline15PreRenderUpdateEv(this);
}


// ============================================================

// Address: 0x19a330
// Original: j__ZN24CCustomCarEnvMapPipeline21CustomPipeAtomicSetupEP8RpAtomic
// Demangled: CCustomCarEnvMapPipeline::CustomPipeAtomicSetup(RpAtomic *)
// attributes: thunk
int CCustomCarEnvMapPipeline::CustomPipeAtomicSetup(void)
{
  return _ZN24CCustomCarEnvMapPipeline21CustomPipeAtomicSetupEP8RpAtomic();
}


// ============================================================

// Address: 0x19ab8c
// Original: j__ZN24CCustomCarEnvMapPipeline11DestroyPipeEv
// Demangled: CCustomCarEnvMapPipeline::DestroyPipe(void)
// attributes: thunk
int __fastcall CCustomCarEnvMapPipeline::DestroyPipe(CCustomCarEnvMapPipeline *this)
{
  return _ZN24CCustomCarEnvMapPipeline11DestroyPipeEv(this);
}


// ============================================================

// Address: 0x19dde4
// Original: j__ZN24CCustomCarEnvMapPipeline15SetFxEnvTextureEP10RpMaterialP9RwTexture
// Demangled: CCustomCarEnvMapPipeline::SetFxEnvTexture(RpMaterial *,RwTexture *)
// attributes: thunk
int CCustomCarEnvMapPipeline::SetFxEnvTexture()
{
  return _ZN24CCustomCarEnvMapPipeline15SetFxEnvTextureEP10RpMaterialP9RwTexture();
}


// ============================================================

// Address: 0x1a0928
// Original: j__ZN24CCustomCarEnvMapPipeline10CreatePipeEv
// Demangled: CCustomCarEnvMapPipeline::CreatePipe(void)
// attributes: thunk
int __fastcall CCustomCarEnvMapPipeline::CreatePipe(CCustomCarEnvMapPipeline *this)
{
  return _ZN24CCustomCarEnvMapPipeline10CreatePipeEv(this);
}


// ============================================================

// Address: 0x1a0dd8
// Original: j__ZN24CCustomCarEnvMapPipeline14RegisterPluginEv
// Demangled: CCustomCarEnvMapPipeline::RegisterPlugin(void)
// attributes: thunk
int __fastcall CCustomCarEnvMapPipeline::RegisterPlugin(CCustomCarEnvMapPipeline *this)
{
  return _ZN24CCustomCarEnvMapPipeline14RegisterPluginEv(this);
}


// ============================================================

// Address: 0x2cb570
// Original: _ZN24CCustomCarEnvMapPipelineC2Ev
// Demangled: CCustomCarEnvMapPipeline::CCustomCarEnvMapPipeline(void)
void __fastcall CCustomCarEnvMapPipeline::CCustomCarEnvMapPipeline(CCustomCarEnvMapPipeline *this)
{
  ;
}


// ============================================================

// Address: 0x2cb572
// Original: _ZN24CCustomCarEnvMapPipelineD2Ev
// Demangled: CCustomCarEnvMapPipeline::~CCustomCarEnvMapPipeline()
void __fastcall CCustomCarEnvMapPipeline::~CCustomCarEnvMapPipeline(CCustomCarEnvMapPipeline *this)
{
  ;
}


// ============================================================

// Address: 0x2cb574
// Original: _ZN24CCustomCarEnvMapPipeline23CustomPipeMaterialSetupEP10RpMaterialPv
// Demangled: CCustomCarEnvMapPipeline::CustomPipeMaterialSetup(RpMaterial *,void *)
int __fastcall CCustomCarEnvMapPipeline::CustomPipeMaterialSetup(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r1

  *(_DWORD *)(a1 + 16) = 0;
  if ( RpMatFXMaterialGetEffects() == 2 )
    CCustomCarEnvMapPipeline::SetFxEnvTexture();
  v2 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v2 && (float)((float)*(unsigned __int8 *)(v2 + 4) * 0.0039216) != 0.0 && (v3 = *(_DWORD *)(v2 + 8)) != 0 )
  {
    v4 = *(unsigned __int8 *)(v3 + 16);
    v5 = 1;
    if ( v4 == 120 )
      v5 = 2;
  }
  else
  {
    v5 = 0;
  }
  v6 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
  if ( v6 && *(_DWORD *)(v6 + 4) )
    v5 |= 4u;
  *(_DWORD *)(a1 + 16) = v5 | *(_DWORD *)(a1 + 16) & 0xFFFFFFF8;
  return a1;
}


// ============================================================

// Address: 0x2cb60c
// Original: _ZN24CCustomCarEnvMapPipeline15SetFxEnvTextureEP10RpMaterialP9RwTexture
// Demangled: CCustomCarEnvMapPipeline::SetFxEnvTexture(RpMaterial *,RwTexture *)
int __fastcall CCustomCarEnvMapPipeline::SetFxEnvTexture(int result, int a2)
{
  int v2; // r12
  int v3; // r3
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r2
  int v7; // lr
  int v8; // r5
  int v9; // r6
  __int64 v10; // d16
  int v11; // r1
  int v12; // r2

  v2 = CCustomCarEnvMapPipeline::ms_envMapPluginOffset;
  v3 = *(_DWORD *)(result + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( (int *)v3 == &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData )
  {
    v4 = 0;
    v5 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
    v6 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 12);
    v7 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8);
    do
    {
      v5[3] = ++v6;
      if ( v6 == v7 )
      {
        v6 = 0;
        v5[3] = 0;
        if ( v4 << 31 )
        {
          *(_DWORD *)(result + v2) = 0;
          return result;
        }
        v4 = 1;
      }
      v8 = v5[1];
      v9 = *(char *)(v8 + v6);
    }
    while ( v9 > -1 );
    *(_BYTE *)(v8 + v6) = v9 & 0x7F;
    *(_BYTE *)(v5[1] + v5[3]) = (*(_BYTE *)(v5[1] + v5[3]) + 1) & 0x7F | *(_BYTE *)(v5[1] + v5[3]) & 0x80;
    v3 = *v5 + 12 * v5[3];
    *(_DWORD *)(result + v2) = v3;
    if ( !v3 )
      return result;
    v10 = *(_QWORD *)&CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
    *(_DWORD *)(v3 + 8) = dword_70BF6C;
    *(_QWORD *)v3 = v10;
  }
  else if ( !v3 )
  {
    return result;
  }
  if ( a2 )
  {
    *(_DWORD *)(v3 + 8) = a2;
LABEL_5:
    result = 4354;
    *(_WORD *)(a2 + 80) = 4354;
    return result;
  }
  a2 = *(_DWORD *)(*(_DWORD *)(result + MatFXMaterialDataOffset) + 4);
  *(_DWORD *)(v3 + 8) = a2;
  if ( a2 && (float)((float)*(unsigned __int8 *)(v3 + 4) * 0.0039216) != 0.0 )
    goto LABEL_5;
  v11 = CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
  v12 = -1431655765 * ((v3 - *(_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 4) + v12) = *(_BYTE *)(*(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 4) - 1431655765 * ((v3 - *(_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool) >> 2)) | 0x80;
  if ( v12 < *(_DWORD *)(v11 + 12) )
    *(_DWORD *)(v11 + 12) = v12;
  *(_DWORD *)(result + CCustomCarEnvMapPipeline::ms_envMapPluginOffset) = &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
  a2 = dword_70BF6C;
  if ( dword_70BF6C )
    goto LABEL_5;
  return result;
}


// ============================================================

// Address: 0x2cb750
// Original: _ZN24CCustomCarEnvMapPipeline17GetFxEnvShininessEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxEnvShininess(RpMaterial *)
float __fastcall CCustomCarEnvMapPipeline::GetFxEnvShininess(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(unsigned __int8 *)(v1 + 4) * 0.0039216;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cb78c
// Original: _ZN24CCustomCarEnvMapPipeline15GetFxEnvTextureEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxEnvTexture(RpMaterial *)
int __fastcall CCustomCarEnvMapPipeline::GetFxEnvTexture(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return *(_DWORD *)(v1 + 8);
  else
    return 0;
}


// ============================================================

// Address: 0x2cb7a4
// Original: _ZN24CCustomCarEnvMapPipeline20GetFxSpecSpecularityEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxSpecSpecularity(RpMaterial *)
int __fastcall CCustomCarEnvMapPipeline::GetFxSpecSpecularity(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
  if ( v1 )
    return *(_DWORD *)v1;
  else
    return 0;
}


// ============================================================

// Address: 0x2cb7c8
// Original: _ZN24CCustomCarEnvMapPipeline16GetFxSpecTextureEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxSpecTexture(RpMaterial *)
int __fastcall CCustomCarEnvMapPipeline::GetFxSpecTexture(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
  if ( v1 )
    return *(_DWORD *)(v1 + 4);
  else
    return 0;
}


// ============================================================

// Address: 0x2cb7e0
// Original: _ZN24CCustomCarEnvMapPipeline21CustomPipeAtomicSetupEP8RpAtomic
// Demangled: CCustomCarEnvMapPipeline::CustomPipeAtomicSetup(RpAtomic *)
int __fastcall CCustomCarEnvMapPipeline::CustomPipeAtomicSetup(int a1)
{
  int v2; // r5

  v2 = 0;
  RpGeometryForAllMaterials(*(_DWORD *)(a1 + 24), CCustomCarEnvMapPipeline::CustomPipeMaterialSetup, 0);
  *(_DWORD *)(a1 + 108) = CCustomCarEnvMapPipeline::ObjPipeline;
  if ( a1 )
  {
    SetPipelineID();
    return a1;
  }
  return v2;
}


// ============================================================

// Address: 0x2cb820
// Original: _ZN24CCustomCarEnvMapPipeline20CustomPipeInstanceCBEPvP24RxOpenGLMeshInstanceDataii
// Demangled: CCustomCarEnvMapPipeline::CustomPipeInstanceCB(void *,RxOpenGLMeshInstanceData *,int,int)
int __fastcall CCustomCarEnvMapPipeline::CustomPipeInstanceCB(
        CCustomCarEnvMapPipeline *this,
        _DWORD *a2,
        RxOpenGLMeshInstanceData *a3,
        int a4,
        int a5)
{
  int v7; // r5
  int v9; // r9
  int v10; // r11
  unsigned int v11; // r0
  size_t v12; // r0
  int v13; // r1
  char v14; // r3
  int v15; // r2
  int v16; // r1
  void *v17; // r10
  void *v18; // r0
  int v19; // r5
  unsigned int v20; // r2

  v7 = *((_DWORD *)this + 6);
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(_DWORD *)(v7 + 28);
  a2[1] = v9;
  if ( !a4 || (*(_WORD *)(v7 + 12) & 0xFFF) != 0 )
  {
    if ( !(*(unsigned __int8 *)(v7 + 11) << 31) )
    {
      if ( a4 )
      {
        v11 = a2[5];
        if ( v11 )
          emu_ArraysDelete(v11);
      }
      if ( a4 )
      {
        v12 = a2[4];
      }
      else
      {
        v13 = 24;
        v14 = 3;
        if ( (v9 & 0x10) == 0 )
          v13 = 12;
        v15 = a2[3];
        if ( (v9 & 8) != 0 )
          v13 += 4;
        if ( !RwHackNoCompressedTexCoords )
          v14 = 2;
        v16 = v13 + (v10 << v14);
        a2[2] = v16;
        v12 = v16 * v15;
        a2[4] = v16 * v15;
      }
      v17 = malloc(v12);
      _rxOpenGLAllInOneAtomicInstanceVertexArray((int)a2, (int)this, v7, v9, v10, a4, (int)v17, 0, 0);
      emu_ArraysReset();
      v18 = (void *)a2[11];
      if ( v18 )
        emu_ArraysIndices(v18, 0x1403u, a2[10]);
      emu_ArraysVertex(v17, a2[4], a2[3], a2[2]);
      emu_ArraysVertexAttrib(0, 3, 0x1406u, 0, 0);
      v19 = 12;
      if ( (v9 & 0x10) != 0 )
      {
        emu_ArraysVertexAttrib(2u, 3, 0x1406u, 0, 12);
        v19 = 24;
        if ( (v9 & 8) == 0 )
        {
LABEL_21:
          if ( v10 >= 1 )
          {
LABEL_22:
            if ( RwHackNoCompressedTexCoords )
              v20 = 5126;
            else
              v20 = 5123;
            emu_ArraysVertexAttrib(1u, 2, v20, 0, v19);
          }
LABEL_26:
          a2[5] = emu_ArraysStore(a4 != 0, 1u);
          return 1;
        }
      }
      else if ( (v9 & 8) == 0 )
      {
        goto LABEL_21;
      }
      emu_ArraysVertexAttrib(3u, 4, 0x1401u, 1u, v19);
      v19 += 4;
      if ( v10 >= 1 )
        goto LABEL_22;
      goto LABEL_26;
    }
    a2[7] = *(_DWORD *)(v7 + 84);
  }
  return 1;
}


// ============================================================

// Address: 0x2cb98c
// Original: _ZN24CCustomCarEnvMapPipeline15PreRenderUpdateEv
// Demangled: CCustomCarEnvMapPipeline::PreRenderUpdate(void)
void __fastcall CCustomCarEnvMapPipeline::PreRenderUpdate(CCustomCarEnvMapPipeline *this)
{
  ;
}


// ============================================================

// Address: 0x2cb990
// Original: _ZN24CCustomCarEnvMapPipeline18CustomPipeRenderCBEP10RwResEntryPvhj
// Demangled: CCustomCarEnvMapPipeline::CustomPipeRenderCB(RwResEntry *,void *,uchar,uint)
unsigned int __fastcall CCustomCarEnvMapPipeline::CustomPipeRenderCB(int a1, int a2, int a3, char a4)
{
  float32x2_t v4; // d6
  float32x2_t v5; // d7
  float32x2_t v6; // d8
  float32x2_t v7; // d11
  int v8; // s29
  int v9; // s31
  unsigned int result; // r0
  __int16 AtomicId; // r6
  int v13; // r8
  _BOOL4 v14; // r2
  int v15; // r6
  RxOpenGLMeshInstanceData *v16; // r9
  int v17; // r5
  unsigned int v18; // r1
  int v19; // r0
  __int64 v20; // r0
  int v21; // r4
  float v22; // s20
  int *v23; // r0
  int v24; // r10
  int v25; // r2
  char *v26; // r11
  int v27; // r4
  int v28; // r0
  int v29; // r0
  unsigned __int8 v30; // r6
  int v31; // r4
  int v32; // r8
  int LTM; // r0
  float v34; // s6
  float v35; // s12
  float v36; // s2
  float v37; // s0
  int v38; // r0
  float v39; // s14
  float v40; // s0
  unsigned __int8 v41; // r10
  int v42; // r0
  int v43; // r6
  int *v44; // r4
  int v45; // r1
  bool v46; // zf
  bool v47; // zf
  int v48; // [sp+20h] [bp-A0h]
  int *v50; // [sp+4Ch] [bp-74h]
  _BOOL4 v51; // [sp+50h] [bp-70h]
  int v52; // [sp+54h] [bp-6Ch]
  int v53; // [sp+58h] [bp-68h]
  int v54; // [sp+5Ch] [bp-64h]

  result = *(unsigned __int8 *)(*(_DWORD *)(a2 + 24) + 9) << 29;
  if ( (*(_BYTE *)(*(_DWORD *)(a2 + 24) + 9) & 4) != 0 )
    return result;
  AtomicId = CVisibilityPlugins::GetAtomicId();
  result = CVisibilityPlugins::GetAtomicId() & 0x4000;
  if ( (AtomicId & 0x6000) != 0 && !result )
  {
    v13 = (unsigned __int8)byte_A48210;
    v14 = 0;
LABEL_8:
    v51 = v14;
    goto LABEL_9;
  }
  v13 = (unsigned __int8)byte_A48210;
  v51 = 0;
  if ( dword_6E04DC >= 1 && !byte_A48210 )
  {
    v13 = 0;
    v14 = CMirrors::TypeOfMirror != 3;
    goto LABEL_8;
  }
LABEL_9:
  v15 = *(unsigned __int16 *)(a1 + 26);
  if ( *(_WORD *)(a1 + 26) )
  {
    v54 = (*(unsigned __int8 *)(pDirect + 2) << 31 == 0) & (result >> 14);
    v7.n64_u32[0] = 1.0;
    v16 = (RxOpenGLMeshInstanceData *)(a1 + 28);
    v6.n64_u32[0] = 0;
    v48 = v13;
    v50 = &carLodLerp;
    while ( 1 )
    {
      v17 = *((_DWORD *)v16 + 12);
      if ( v54 == 1 )
      {
        v18 = *(unsigned __int8 *)(v17 + 6);
        v19 = *(unsigned __int8 *)(v17 + 5) >> 3;
        v50 = *(int **)(v17 + 4);
        *(_BYTE *)(v17 + 4) = (unsigned __int8)v50 >> 3;
        *(_BYTE *)(v17 + 5) = v19;
        *(_BYTE *)(v17 + 6) = v18 >> 3;
        v8 = *(_DWORD *)(v17 + 20);
        v9 = *(_DWORD *)(v17 + 12);
        *(_DWORD *)(*((_DWORD *)v16 + 12) + 20) = 0;
        *(_DWORD *)(*((_DWORD *)v16 + 12) + 12) = 0;
      }
      HIDWORD(v20) = *((_DWORD *)v16 + 13);
      --v15;
      LODWORD(v20) = *(unsigned __int8 *)(v17 + 7);
      if ( v20 == 255 )
        break;
      if ( *(_BYTE *)(v17 + 7) )
      {
        emu_EnableAlphaModulate((float)(unsigned int)v20 / 255.0);
        v21 = 1;
LABEL_20:
        _rwOpenGLSetRenderState();
        v53 = v21;
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
        v22 = 0.0;
        v23 = (int *)*((_DWORD *)v16 + 12);
        v24 = v23[4];
        v25 = v24 & 3;
        if ( (v24 & 3) != 0 )
          v25 = 1;
        v26 = *(char **)((char *)v23 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
        v27 = v51 & v25;
        if ( v26 )
          v22 = (float)(unsigned __int8)v26[4] * 0.0039216;
        v52 = v15;
        if ( dword_6E04DC >= 2 && v22 < 0.9 && v24 == 4 && v51 )
        {
          if ( *(unsigned __int8 *)(v17 + 4) >= 0xF0u )
          {
            if ( *(unsigned __int8 *)(v17 + 5) >= 0xF0u && *(unsigned __int8 *)(v17 + 6) >= 0xF0u )
              goto LABEL_40;
          }
          else if ( !*(_BYTE *)(v17 + 4) )
          {
            goto LABEL_40;
          }
          v28 = *v23;
          if ( !v28 || !strstr((const char *)(v28 + 16), "interior") )
          {
            v22 = 0.2;
            v27 = 1;
          }
        }
LABEL_40:
        v29 = (int)v26;
        if ( v26 )
          v29 = 1;
        v30 = v27 & v29;
        if ( (v27 & v29) == 1 && *(float *)&carLodLerp < 1.0 )
        {
          v31 = v26[2];
          v32 = v26[3];
          LTM = RwFrameGetLTM();
          v34 = *(float *)(LTM + 52);
          v35 = 0.05;
          v36 = *(float *)(LTM + 48);
          v37 = (float)((float)v32 * 0.125) * 50.0;
          if ( !v54 )
          {
            if ( v24 == 2 )
            {
              v35 = v22 * 0.125;
            }
            else if ( v53 )
            {
              v35 = v22;
            }
            else
            {
              v38 = *(unsigned __int8 *)(v17 + 4);
              v39 = (float)(*(unsigned __int8 *)(v17 + 5) + v38 + *(unsigned __int8 *)(v17 + 6));
              v4.n64_f32[0] = (float)((float)(255.0 - v39) + (float)(255.0 - v39)) / 255.0;
              v4.n64_u64[0] = vmax_f32(v4, v7).n64_u64[0];
              if ( v38 != 255 && v4.n64_f32[0] == 1.0 )
              {
                v4.n64_f32[0] = (float)(v39 / 600.0) * (float)(v39 / 600.0);
                v4.n64_u64[0] = vmax_f32(v4, v7).n64_u64[0];
              }
              v35 = v22 * v4.n64_f32[0];
            }
          }
          if ( *(float *)&carLodLerp > 0.0 )
          {
            v5.n64_f32[0] = 1.0 - *(float *)&carLodLerp;
            v5.n64_u64[0] = vmax_f32(v5, v6).n64_u64[0];
            v35 = v35 * v5.n64_f32[0];
          }
          v13 = v48;
          if ( dword_6E04DC < 2 )
          {
            SetEnvMapTexture(
              *((_DWORD *)v26 + 2),
              SLODWORD(v35),
              COERCE_INT((float)*v26 * 0.125),
              COERCE_INT((float)v26[1] * 0.125),
              COERCE_INT(-(float)((float)(v36
                                        - (float)((float)((float)((float)v31 * 0.125) * 50.0)
                                                * (float)(int)(float)(v36 / (float)((float)((float)v31 * 0.125) * 50.0))))
                                / (float)((float)((float)v31 * 0.125) * 50.0))),
              COERCE_INT(-(float)((float)(v34 - (float)(v37 * (float)(int)(float)(v34 / v37))) / v37)));
          }
          else
          {
            v40 = v35 * 5.0;
            if ( !v53 )
              v40 = v35;
            SetReflMap(v40);
          }
        }
        if ( v54 == 1 )
        {
          *(_DWORD *)(v17 + 4) = v50;
          *(_DWORD *)(*((_DWORD *)v16 + 12) + 20) = v8;
          *(_DWORD *)(*((_DWORD *)v16 + 12) + 12) = v9;
        }
        v41 = v30;
        if ( (a4 & 0x84) != 0 )
        {
          v42 = *((_DWORD *)v16 + 12);
          v43 = v53;
          v44 = *(int **)v42;
          if ( v13 )
          {
            if ( !v44 )
              goto LABEL_77;
            v45 = *v44;
            v46 = *v44 == 0;
            if ( *v44 )
            {
              v42 = *(_DWORD *)(v45 + 44);
              v46 = v42 == 0;
            }
            if ( v46 || (*(_BYTE *)(v42 + 8) & 0xF0) == 0 )
              goto LABEL_77;
          }
          else
          {
            if ( !v44 )
            {
LABEL_77:
              _rwOpenGLSetRenderState();
              goto LABEL_78;
            }
            v45 = *v44;
            if ( !*v44 )
              goto LABEL_11;
          }
          if ( *(unsigned __int8 *)(v45 + 48) << 31 )
          {
LABEL_11:
            if ( v53 )
              emu_DisableAlphaModulate();
            v16 = (RxOpenGLMeshInstanceData *)((char *)v16 + 56);
            goto LABEL_88;
          }
          _rwOpenGLSetRenderStateNoExtras();
          goto LABEL_77;
        }
        _rwOpenGLSetRenderState();
        v43 = v53;
LABEL_78:
        v47 = v13 == 0;
        if ( v13 )
          v47 = v43 == 0;
        if ( v47 && (*(unsigned __int8 *)(v17 + 7) > 0xC0u) | v54 ^ 1 )
          RxOpenGLMeshInstanceData::DrawStored(v16);
        v16 = (RxOpenGLMeshInstanceData *)((char *)v16 + 56);
        if ( v43 )
          emu_DisableAlphaModulate();
        if ( ((*(float *)&carLodLerp < 1.0) & v41) == 1 )
          ResetEnvMap();
LABEL_88:
        v15 = v52;
        result = v52 << 16;
        if ( !(v52 << 16) )
          return result;
      }
      else
      {
        v16 = (RxOpenGLMeshInstanceData *)((char *)v16 + 56);
        result = v15 << 16;
        if ( !(v15 << 16) )
          return result;
      }
    }
    v21 = 0;
    goto LABEL_20;
  }
  return result;
}


// ============================================================

// Address: 0x2cbf10
// Original: _ZN24CCustomCarEnvMapPipeline25CreateCustomOpenGLObjPipeEv
// Demangled: CCustomCarEnvMapPipeline::CreateCustomOpenGLObjPipe(void)
int __fastcall CCustomCarEnvMapPipeline::CreateCustomOpenGLObjPipe(CCustomCarEnvMapPipeline *this)
{
  int v1; // r4

  v1 = RxPipelineCreate();
  if ( !v1 )
    return 0;
  if ( !RxPipelineLock()
    || (RxNodeDefinitionGetOpenGLAtomicAllInOne(), RxLockedPipeAddFragment(), !RxLockedPipeUnlock()) )
  {
    _rxPipelineDestroy();
    return 0;
  }
  RxPipelineFindNodeByName();
  RxOpenGLAllInOneSetInstanceCallBack();
  RxOpenGLAllInOneSetRenderCallBack();
  *(_DWORD *)(v1 + 44) = 1408368794;
  *(_DWORD *)(v1 + 48) = 1408368794;
  return v1;
}


// ============================================================

// Address: 0x2cbf8c
// Original: _ZN24CCustomCarEnvMapPipeline10CreatePipeEv
// Demangled: CCustomCarEnvMapPipeline::CreatePipe(void)
int __fastcall CCustomCarEnvMapPipeline::CreatePipe(CCustomCarEnvMapPipeline *this)
{
  int v1; // r4
  _BYTE *v2; // r0
  char v3; // r1
  int i; // r0
  int v5; // r4
  _BYTE *v6; // r0
  char v7; // r1
  int j; // r0
  int v9; // r4
  _BYTE *v10; // r0
  char v11; // r1
  int k; // r0

  CCustomCarEnvMapPipeline::ObjPipeline = CCustomCarEnvMapPipeline::CreateCustomOpenGLObjPipe((CCustomCarEnvMapPipeline *)&CCustomCarEnvMapPipeline::ObjPipeline);
  if ( !CCustomCarEnvMapPipeline::ObjPipeline )
    return 0;
  v1 = operator new(0x14u);
  *(_DWORD *)v1 = operator new[](0xC000u);
  v2 = (_BYTE *)operator new[](0x1000u);
  *(_BYTE *)(v1 + 16) = 1;
  *(_DWORD *)(v1 + 4) = v2;
  *(_DWORD *)(v1 + 8) = 4096;
  *(_DWORD *)(v1 + 12) = -1;
  v3 = v2[1];
  *v2 = 0x80;
  v2[1] = v3 | 0x80;
  *(_BYTE *)(*(_DWORD *)(v1 + 4) + 1) &= 0x80u;
  for ( i = 2; i != 4096; ++i )
  {
    *(_BYTE *)(*(_DWORD *)(v1 + 4) + i) |= 0x80u;
    *(_BYTE *)(*(_DWORD *)(v1 + 4) + i) &= 0x80u;
  }
  CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool = v1;
  v5 = operator new(0x14u);
  *(_DWORD *)v5 = operator new[](0x3000u);
  v6 = (_BYTE *)operator new[](0x400u);
  *(_BYTE *)(v5 + 16) = 1;
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = 1024;
  *(_DWORD *)(v5 + 12) = -1;
  v7 = v6[1];
  *v6 = 0x80;
  v6[1] = v7 | 0x80;
  *(_BYTE *)(*(_DWORD *)(v5 + 4) + 1) &= 0x80u;
  for ( j = 2; j != 1024; ++j )
  {
    *(_BYTE *)(*(_DWORD *)(v5 + 4) + j) |= 0x80u;
    *(_BYTE *)(*(_DWORD *)(v5 + 4) + j) &= 0x80u;
  }
  CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool = v5;
  v9 = operator new(0x14u);
  *(_DWORD *)v9 = operator new[](0x8000u);
  v10 = (_BYTE *)operator new[](0x1000u);
  *(_BYTE *)(v9 + 16) = 1;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = 4096;
  *(_DWORD *)(v9 + 12) = -1;
  v11 = v10[1];
  *v10 = 0x80;
  v10[1] = v11 | 0x80;
  *(_BYTE *)(*(_DWORD *)(v9 + 4) + 1) &= 0x80u;
  for ( k = 2; k != 4096; ++k )
  {
    *(_BYTE *)(*(_DWORD *)(v9 + 4) + k) |= 0x80u;
    *(_BYTE *)(*(_DWORD *)(v9 + 4) + k) &= 0x80u;
  }
  CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool = v9;
  return 1;
}


// ============================================================

// Address: 0x2cc0f4
// Original: _ZN24CCustomCarEnvMapPipeline11DestroyPipeEv
// Demangled: CCustomCarEnvMapPipeline::DestroyPipe(void)
int *__fastcall CCustomCarEnvMapPipeline::DestroyPipe(CCustomCarEnvMapPipeline *this)
{
  _DWORD *v1; // r4
  void *v2; // r0
  _DWORD *v3; // r5
  _DWORD *v4; // r4
  void *v5; // r0
  _DWORD *v6; // r6
  _DWORD *v7; // r4
  void *v8; // r0
  _DWORD *v9; // r5
  int *result; // r0

  v1 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
  if ( CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool )
  {
    if ( *(int *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8) >= 1 )
    {
      if ( *(_BYTE *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 16) )
      {
        if ( *(_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool )
          operator delete[](*(void **)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool);
        v3 = v1 + 1;
        v2 = (void *)v1[1];
        if ( v2 )
          operator delete[](v2);
      }
      else
      {
        v3 = (_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 4);
      }
      *v1 = 0;
      *v3 = 0;
    }
    operator delete(v1);
  }
  v4 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool;
  CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool = 0;
  if ( CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool )
  {
    if ( *(int *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 8) >= 1 )
    {
      if ( *(_BYTE *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 16) )
      {
        if ( *(_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool )
          operator delete[](*(void **)CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool);
        v6 = v4 + 1;
        v5 = (void *)v4[1];
        if ( v5 )
          operator delete[](v5);
      }
      else
      {
        v6 = (_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 4);
      }
      *v4 = 0;
      *v6 = 0;
    }
    operator delete(v4);
  }
  v7 = (_DWORD *)CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool;
  CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool = 0;
  if ( CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool )
  {
    if ( *(int *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 8) >= 1 )
    {
      if ( *(_BYTE *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 16) )
      {
        if ( *(_DWORD *)CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool )
          operator delete[](*(void **)CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool);
        v9 = v7 + 1;
        v8 = (void *)v7[1];
        if ( v8 )
          operator delete[](v8);
      }
      else
      {
        v9 = (_DWORD *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 4);
      }
      *v7 = 0;
      *v9 = 0;
    }
    operator delete(v7);
  }
  result = (int *)CCustomCarEnvMapPipeline::ObjPipeline;
  CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool = 0;
  if ( CCustomCarEnvMapPipeline::ObjPipeline )
  {
    _rxPipelineDestroy();
    result = &CCustomCarEnvMapPipeline::ObjPipeline;
    CCustomCarEnvMapPipeline::ObjPipeline = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2cc208
// Original: _ZN24CCustomCarEnvMapPipeline37DuplicateCustomEnvMapPipeMaterialDataEPP28CustomEnvMapPipeMaterialData
// Demangled: CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData(CustomEnvMapPipeMaterialData **)
int *__fastcall CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData(int **a1)
{
  int *result; // r0
  int v3; // r1
  _DWORD *v4; // r2
  int *v5; // lr
  int v6; // r3
  int v7; // r4
  __int64 v8; // d16

  result = *a1;
  if ( result == &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData )
  {
    v3 = 0;
    v4 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
    result = *(int **)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 12);
    v5 = *(int **)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8);
    do
    {
      result = (int *)((char *)result + 1);
      v4[3] = result;
      if ( result == v5 )
      {
        result = 0;
        v4[3] = 0;
        if ( v3 << 31 )
        {
          *a1 = 0;
          return result;
        }
        v3 = 1;
      }
      v6 = v4[1];
      v7 = *((char *)result + v6);
    }
    while ( v7 > -1 );
    *((_BYTE *)result + v6) = v7 & 0x7F;
    *(_BYTE *)(v4[1] + v4[3]) = (*(_BYTE *)(v4[1] + v4[3]) + 1) & 0x7F | *(_BYTE *)(v4[1] + v4[3]) & 0x80;
    result = (int *)(*v4 + 12 * v4[3]);
    *a1 = result;
    if ( result )
    {
      v8 = *(_QWORD *)&CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
      result[2] = dword_70BF6C;
      *(_QWORD *)result = v8;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x2cc2a0
// Original: _ZN24CCustomCarEnvMapPipeline13SetFxEnvScaleEP10RpMaterialff
// Demangled: CCustomCarEnvMapPipeline::SetFxEnvScale(RpMaterial *,float,float)
int __fastcall CCustomCarEnvMapPipeline::SetFxEnvScale(int result, float a2, float a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // r5
  _DWORD *v6; // lr
  int v7; // r3
  int v8; // r8
  int v9; // r6
  int v10; // r4
  __int64 v11; // d16

  v3 = CCustomCarEnvMapPipeline::ms_envMapPluginOffset;
  v4 = *(_DWORD *)(result + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( (int *)v4 == &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData )
  {
    v5 = 0;
    v6 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
    v7 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 12);
    v8 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8);
    do
    {
      v6[3] = ++v7;
      if ( v7 == v8 )
      {
        v7 = 0;
        v6[3] = 0;
        if ( v5 << 31 )
        {
          *(_DWORD *)(result + v3) = 0;
          return result;
        }
        v5 = 1;
      }
      v9 = v6[1];
      v10 = *(char *)(v9 + v7);
    }
    while ( v10 > -1 );
    *(_BYTE *)(v9 + v7) = v10 & 0x7F;
    *(_BYTE *)(v6[1] + v6[3]) = (*(_BYTE *)(v6[1] + v6[3]) + 1) & 0x7F | *(_BYTE *)(v6[1] + v6[3]) & 0x80;
    v4 = *v6 + 12 * v6[3];
    *(_DWORD *)(result + v3) = v4;
    if ( !v4 )
      return result;
    v11 = *(_QWORD *)&CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
    *(_DWORD *)(v4 + 8) = dword_70BF6C;
    *(_QWORD *)v4 = v11;
  }
  else if ( !v4 )
  {
    return result;
  }
  *(_BYTE *)(v4 + 1) = (int)(float)(a3 * 8.0);
  result = (int)(float)(a2 * 8.0);
  *(_BYTE *)v4 = result;
  return result;
}


// ============================================================

// Address: 0x2cc38c
// Original: _ZN24CCustomCarEnvMapPipeline14GetFxEnvScaleXEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxEnvScaleX(RpMaterial *)
float __fastcall CCustomCarEnvMapPipeline::GetFxEnvScaleX(int a1)
{
  char *v1; // r0

  v1 = *(char **)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*v1 * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cc3c8
// Original: _ZN24CCustomCarEnvMapPipeline14GetFxEnvScaleYEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxEnvScaleY(RpMaterial *)
float __fastcall CCustomCarEnvMapPipeline::GetFxEnvScaleY(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 1) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cc404
// Original: _ZN24CCustomCarEnvMapPipeline16SetFxEnvTransSclEP10RpMaterialff
// Demangled: CCustomCarEnvMapPipeline::SetFxEnvTransScl(RpMaterial *,float,float)
int __fastcall CCustomCarEnvMapPipeline::SetFxEnvTransScl(int result, float a2, float a3)
{
  int v3; // r12
  int v4; // r3
  int v5; // r5
  _DWORD *v6; // lr
  int v7; // r3
  int v8; // r8
  int v9; // r6
  int v10; // r4
  __int64 v11; // d16

  v3 = CCustomCarEnvMapPipeline::ms_envMapPluginOffset;
  v4 = *(_DWORD *)(result + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( (int *)v4 == &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData )
  {
    v5 = 0;
    v6 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
    v7 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 12);
    v8 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8);
    do
    {
      v6[3] = ++v7;
      if ( v7 == v8 )
      {
        v7 = 0;
        v6[3] = 0;
        if ( v5 << 31 )
        {
          *(_DWORD *)(result + v3) = 0;
          return result;
        }
        v5 = 1;
      }
      v9 = v6[1];
      v10 = *(char *)(v9 + v7);
    }
    while ( v10 > -1 );
    *(_BYTE *)(v9 + v7) = v10 & 0x7F;
    *(_BYTE *)(v6[1] + v6[3]) = (*(_BYTE *)(v6[1] + v6[3]) + 1) & 0x7F | *(_BYTE *)(v6[1] + v6[3]) & 0x80;
    v4 = *v6 + 12 * v6[3];
    *(_DWORD *)(result + v3) = v4;
    if ( !v4 )
      return result;
    v11 = *(_QWORD *)&CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
    *(_DWORD *)(v4 + 8) = dword_70BF6C;
    *(_QWORD *)v4 = v11;
  }
  else if ( !v4 )
  {
    return result;
  }
  *(_BYTE *)(v4 + 3) = (int)(float)(a3 * 8.0);
  result = (int)(float)(a2 * 8.0);
  *(_BYTE *)(v4 + 2) = result;
  return result;
}


// ============================================================

// Address: 0x2cc4f0
// Original: _ZN24CCustomCarEnvMapPipeline17GetFxEnvTransSclXEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxEnvTransSclX(RpMaterial *)
float __fastcall CCustomCarEnvMapPipeline::GetFxEnvTransSclX(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 2) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cc52c
// Original: _ZN24CCustomCarEnvMapPipeline17GetFxEnvTransSclYEP10RpMaterial
// Demangled: CCustomCarEnvMapPipeline::GetFxEnvTransSclY(RpMaterial *)
float __fastcall CCustomCarEnvMapPipeline::GetFxEnvTransSclY(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 3) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cc568
// Original: _ZN24CCustomCarEnvMapPipeline17SetFxEnvShininessEP10RpMaterialf
// Demangled: CCustomCarEnvMapPipeline::SetFxEnvShininess(RpMaterial *,float)
unsigned int __fastcall CCustomCarEnvMapPipeline::SetFxEnvShininess(unsigned int result, float a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r4
  _DWORD *v5; // r3
  int v6; // r2
  int v7; // lr
  int v8; // r5
  int v9; // r6
  __int64 v10; // d16

  v2 = CCustomCarEnvMapPipeline::ms_envMapPluginOffset;
  v3 = *(_DWORD *)(result + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( (int *)v3 == &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData )
  {
    v4 = 0;
    v5 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
    v6 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 12);
    v7 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8);
    do
    {
      v5[3] = ++v6;
      if ( v6 == v7 )
      {
        v6 = 0;
        v5[3] = 0;
        if ( v4 << 31 )
        {
          *(_DWORD *)(result + v2) = 0;
          return result;
        }
        v4 = 1;
      }
      v8 = v5[1];
      v9 = *(char *)(v8 + v6);
    }
    while ( v9 > -1 );
    *(_BYTE *)(v8 + v6) = v9 & 0x7F;
    *(_BYTE *)(v5[1] + v5[3]) = (*(_BYTE *)(v5[1] + v5[3]) + 1) & 0x7F | *(_BYTE *)(v5[1] + v5[3]) & 0x80;
    v3 = *v5 + 12 * v5[3];
    *(_DWORD *)(result + v2) = v3;
    if ( !v3 )
      return result;
    v10 = *(_QWORD *)&CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
    result = dword_70BF6C;
    *(_DWORD *)(v3 + 8) = dword_70BF6C;
    *(_QWORD *)v3 = v10;
  }
  if ( v3 )
  {
    result = (unsigned int)(float)(a2 * 255.0);
    *(_BYTE *)(v3 + 4) = result;
  }
  return result;
}


// ============================================================

// Address: 0x2cc630
// Original: _ZN24CCustomCarEnvMapPipeline16SetFxSpecTextureEP10RpMaterialP9RwTexture
// Demangled: CCustomCarEnvMapPipeline::SetFxSpecTexture(RpMaterial *,RwTexture *)
int __fastcall CCustomCarEnvMapPipeline::SetFxSpecTexture(int result, int a2)
{
  int v3; // r5
  int v4; // r0

  v3 = *(_DWORD *)(result + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
  if ( v3 )
  {
    if ( a2 )
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        RwTextureDestroy(v4);
        *(_DWORD *)(v3 + 4) = 0;
      }
      *(_DWORD *)(v3 + 4) = a2;
      ++*(_DWORD *)(a2 + 84);
    }
    result = *(_DWORD *)(v3 + 4);
    if ( result )
      *(_WORD *)(result + 80) = 4354;
  }
  return result;
}


// ============================================================

// Address: 0x2cc670
// Original: _ZN24CCustomCarEnvMapPipeline20SetFxSpecSpecularityEP10RpMaterialf
// Demangled: CCustomCarEnvMapPipeline::SetFxSpecSpecularity(RpMaterial *,float)
_DWORD *__fastcall CCustomCarEnvMapPipeline::SetFxSpecSpecularity(int a1, int a2)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
  if ( result )
    *result = a2;
  return result;
}


// ============================================================

// Address: 0x2cc68c
// Original: _ZN24CCustomCarEnvMapPipeline14RegisterPluginEv
// Demangled: CCustomCarEnvMapPipeline::RegisterPlugin(void)
int __fastcall CCustomCarEnvMapPipeline::RegisterPlugin(CCustomCarEnvMapPipeline *this)
{
  int v1; // r5
  int **v2; // r0

  CCustomCarEnvMapPipeline::ms_envMapPluginOffset = RpMaterialRegisterPlugin(
                                                      4,
                                                      0x253F2FCu,
                                                      (void *(*)(void *, int, int))CCustomCarEnvMapPipeline::pluginEnvMatConstructorCB,
                                                      (void *(*)(void *, int, int))CCustomCarEnvMapPipeline::pluginEnvMatDestructorCB,
                                                      (void *(*)(void *, const void *, int, int))CCustomCarEnvMapPipeline::pluginEnvMatCopyConstructorCB);
  if ( CCustomCarEnvMapPipeline::ms_envMapPluginOffset < 0 )
    return 0;
  if ( RpMaterialRegisterPluginStream() <= -1 )
  {
    v2 = CCustomCarEnvMapPipeline::ms_envMapPluginOffset;
    goto LABEL_9;
  }
  byte_70BF68 = -1;
  v1 = 0;
  CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData = 134744072;
  dword_70BF6C = 0;
  word_70BF6A = 0;
  CCustomCarEnvMapPipeline::ms_envMapAtmPluginOffset = RpAtomicRegisterPlugin(
                                                         4,
                                                         0x253F2F4u,
                                                         (void *(*)(void *, int, int))CCustomCarEnvMapPipeline::pluginEnvAtmConstructorCB,
                                                         (void *(*)(void *, int, int))CCustomCarEnvMapPipeline::pluginEnvAtmDestructorCB,
                                                         (void *(*)(void *, const void *, int, int))CCustomCarEnvMapPipeline::pluginEnvAtmCopyConstructorCB);
  if ( CCustomCarEnvMapPipeline::ms_envMapAtmPluginOffset >= 0 )
  {
    CCustomCarEnvMapPipeline::ms_specularMapPluginOffset = RpMaterialRegisterPlugin(
                                                             4,
                                                             0x253F2F6u,
                                                             (void *(*)(void *, int, int))CCustomCarEnvMapPipeline::pluginSpecMatConstructorCB,
                                                             (void *(*)(void *, int, int))CCustomCarEnvMapPipeline::pluginSpecMatDestructorCB,
                                                             (void *(*)(void *, const void *, int, int))CCustomCarEnvMapPipeline::pluginSpecMatCopyConstructorCB);
    if ( CCustomCarEnvMapPipeline::ms_specularMapPluginOffset < 0 )
      return 0;
    if ( RpMaterialRegisterPluginStream() > -1 )
      return 1;
    v2 = &CCustomCarEnvMapPipeline::ms_specularMapPluginOffset;
LABEL_9:
    **v2 = -1;
    return 0;
  }
  return v1;
}


// ============================================================

// Address: 0x2cc7e0
// Original: _ZN24CCustomCarEnvMapPipeline25pluginEnvMatConstructorCBEPvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvMatConstructorCB(void *,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginEnvMatConstructorCB(int this, char *a2, int a3, int a4)
{
  *(_DWORD *)&a2[this] = &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
  return this;
}


// ============================================================

// Address: 0x2cc7f0
// Original: _ZN24CCustomCarEnvMapPipeline24pluginEnvMatDestructorCBEPvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvMatDestructorCB(void *,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginEnvMatDestructorCB(int this, char *a2, int a3, int a4)
{
  int *v4; // r3
  bool v5; // zf
  int v6; // r4
  int v7; // r12

  v4 = *(int **)&a2[this];
  v5 = v4 == &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
  if ( v4 != &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData )
    v5 = v4 == 0;
  if ( !v5 )
  {
    v6 = CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
    v7 = ((int)v4 - *(_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool) >> 2;
    *(_BYTE *)(*(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 4) - 1431655765 * v7) |= 0x80u;
    if ( -1431655765 * v7 < *(_DWORD *)(v6 + 12) )
      *(_DWORD *)(v6 + 12) = -1431655765 * v7;
    *(_DWORD *)&a2[this] = 0;
  }
  return this;
}


// ============================================================

// Address: 0x2cc84c
// Original: _ZN24CCustomCarEnvMapPipeline29pluginEnvMatCopyConstructorCBEPvPKvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvMatCopyConstructorCB(void *,void const*,int,int)
CCustomCarEnvMapPipeline *__fastcall CCustomCarEnvMapPipeline::pluginEnvMatCopyConstructorCB(
        CCustomCarEnvMapPipeline *this,
        void *a2,
        char *a3,
        size_t a4,
        int a5)
{
  const void *v5; // r1
  void *v7; // r0
  int v8; // lr
  _DWORD *v9; // r0
  int v10; // r4
  int v11; // r12
  int v12; // r5
  int v13; // r6

  v5 = *(const void **)&a3[(_DWORD)a2];
  if ( v5 )
  {
    v7 = *(void **)&a3[(_DWORD)this];
    if ( v7 )
    {
LABEL_9:
      memcpy_0(v7, v5, a4);
    }
    else
    {
      v8 = 0;
      v9 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
      v10 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 12);
      v11 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8);
      do
      {
        v9[3] = ++v10;
        if ( v10 == v11 )
        {
          v10 = 0;
          v9[3] = 0;
          if ( v8 << 31 )
          {
            *(_DWORD *)&a3[(_DWORD)this] = 0;
            goto LABEL_11;
          }
          v8 = 1;
        }
        v12 = v9[1];
        v13 = *(char *)(v12 + v10);
      }
      while ( v13 > -1 );
      *(_BYTE *)(v12 + v10) = v13 & 0x7F;
      *(_BYTE *)(v9[1] + v9[3]) = (*(_BYTE *)(v9[1] + v9[3]) + 1) & 0x7F | *(_BYTE *)(v9[1] + v9[3]) & 0x80;
      v7 = (void *)(*v9 + 12 * v9[3]);
      *(_DWORD *)&a3[(_DWORD)this] = v7;
      if ( v7 )
        goto LABEL_9;
LABEL_11:
      *(_DWORD *)&a3[(_DWORD)this] = &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
    }
  }
  return this;
}


// ============================================================

// Address: 0x2cc8e4
// Original: _ZN24CCustomCarEnvMapPipeline24pluginEnvMatStreamReadCBEP8RwStreamiPvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvMatStreamReadCB(RwStream *,int,void *,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginEnvMatStreamReadCB(int a1, size_t a2, int a3, int a4)
{
  float v7; // s0
  int v8; // r3
  _DWORD *v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r5
  int v13; // r6
  int v14; // r0
  double v15; // d16
  double v17; // [sp+0h] [bp-40h] BYREF
  int v18; // [sp+8h] [bp-38h]
  float v19[4]; // [sp+10h] [bp-30h] BYREF
  float v20; // [sp+20h] [bp-20h]
  int v21; // [sp+24h] [bp-1Ch]

  v21 = 0;
  RwStreamRead(a1, v19, a2);
  v7 = v20;
  if ( (int)v20 )
  {
    v7 = v20 - (float)(int)v20;
    v20 = v7;
  }
  v18 = v21;
  LOBYTE(v17) = (int)(float)(v19[0] * 8.0);
  BYTE1(v17) = (int)(float)(v19[1] * 8.0);
  BYTE2(v17) = (int)(float)(v19[2] * 8.0);
  BYTE3(v17) = (int)(float)(v19[3] * 8.0);
  BYTE4(v17) = (unsigned int)(float)(v7 * 255.0);
  HIWORD(v17) = 0;
  if ( !memcmp(&v17, &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData, 0xCu) )
  {
LABEL_13:
    *(_DWORD *)(a3 + a4) = &CCustomCarEnvMapPipeline::fakeEnvMapPipeMatData;
  }
  else
  {
    v8 = 0;
    v9 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool;
    v10 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 12);
    v11 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeMatDataPool + 8);
    do
    {
      v9[3] = ++v10;
      if ( v10 == v11 )
      {
        v10 = 0;
        v9[3] = 0;
        if ( v8 << 31 )
        {
          *(_DWORD *)(a3 + a4) = 0;
          goto LABEL_13;
        }
        v8 = 1;
      }
      v12 = v9[1];
      v13 = *(char *)(v12 + v10);
    }
    while ( v13 > -1 );
    *(_BYTE *)(v12 + v10) = v13 & 0x7F;
    *(_BYTE *)(v9[1] + v9[3]) = (*(_BYTE *)(v9[1] + v9[3]) + 1) & 0x7F | *(_BYTE *)(v9[1] + v9[3]) & 0x80;
    v14 = *v9 + 12 * v9[3];
    *(_DWORD *)(a3 + a4) = v14;
    if ( !v14 )
      goto LABEL_13;
    v15 = v17;
    *(_DWORD *)(v14 + 8) = v18;
    *(double *)v14 = v15;
  }
  return a1;
}


// ============================================================

// Address: 0x2cca40
// Original: _ZN24CCustomCarEnvMapPipeline25pluginEnvMatStreamWriteCBEP8RwStreamiPKvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvMatStreamWriteCB(RwStream *,int,void const*,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginEnvMatStreamWriteCB(int a1, size_t a2, int a3, int a4)
{
  float *v5; // r0
  float v7[8]; // [sp+0h] [bp-20h] BYREF

  v5 = *(float **)(a3 + a4);
  v7[0] = (float)*(char *)v5 * 0.125;
  v7[1] = (float)*((char *)v5 + 1) * 0.125;
  v7[2] = (float)*((char *)v5 + 2) * 0.125;
  v7[3] = (float)*((char *)v5 + 3) * 0.125;
  v7[4] = (float)*((unsigned __int8 *)v5 + 4) * 0.0039216;
  v7[5] = v5[2];
  RwStreamWrite(a1, v7, a2);
  return a1;
}


// ============================================================

// Address: 0x2ccad0
// Original: _ZN24CCustomCarEnvMapPipeline27pluginEnvMatStreamGetSizeCBEPKvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvMatStreamGetSizeCB(void const*,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginEnvMatStreamGetSizeCB(int this, const void *a2, int a3, int a4)
{
  if ( this )
    return 24;
  return this;
}


// ============================================================

// Address: 0x2ccad8
// Original: _ZN24CCustomCarEnvMapPipeline39SetCustomEnvMapPipeMaterialDataDefaultsEP28CustomEnvMapPipeMaterialData
// Demangled: CCustomCarEnvMapPipeline::SetCustomEnvMapPipeMaterialDataDefaults(CustomEnvMapPipeMaterialData *)
int __fastcall CCustomCarEnvMapPipeline::SetCustomEnvMapPipeMaterialDataDefaults(int result)
{
  *(_BYTE *)(result + 4) = -1;
  *(_DWORD *)result = 134744072;
  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 6) = 0;
  return result;
}


// ============================================================

// Address: 0x2ccaea
// Original: _ZN24CCustomCarEnvMapPipeline25pluginEnvAtmConstructorCBEPvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvAtmConstructorCB(void *,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginEnvAtmConstructorCB(int this, char *a2, int a3, int a4)
{
  *(_DWORD *)&a2[this] = 0;
  return this;
}


// ============================================================

// Address: 0x2ccaf0
// Original: _ZN24CCustomCarEnvMapPipeline24pluginEnvAtmDestructorCBEPvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvAtmDestructorCB(void *,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginEnvAtmDestructorCB(int this, char *a2, int a3, int a4)
{
  int v4; // r3
  int v5; // r4
  int v6; // r12

  v4 = *(_DWORD *)&a2[this];
  if ( v4 )
  {
    v5 = CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool;
    v6 = (v4 - *(_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool) >> 2;
    *(_BYTE *)(*(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 4) - 1431655765 * v6) |= 0x80u;
    if ( -1431655765 * v6 < *(_DWORD *)(v5 + 12) )
      *(_DWORD *)(v5 + 12) = -1431655765 * v6;
    *(_DWORD *)&a2[this] = 0;
  }
  return this;
}


// ============================================================

// Address: 0x2ccb40
// Original: _ZN24CCustomCarEnvMapPipeline29pluginEnvAtmCopyConstructorCBEPvPKvii
// Demangled: CCustomCarEnvMapPipeline::pluginEnvAtmCopyConstructorCB(void *,void const*,int,int)
CCustomCarEnvMapPipeline *__fastcall CCustomCarEnvMapPipeline::pluginEnvAtmCopyConstructorCB(
        CCustomCarEnvMapPipeline *this,
        void *a2,
        char *a3,
        size_t a4,
        int a5)
{
  const void *v5; // r1
  void *v7; // r0
  int v8; // lr
  _DWORD *v9; // r0
  int v10; // r4
  int v11; // r12
  int v12; // r5
  int v13; // r6

  v5 = *(const void **)&a3[(_DWORD)a2];
  if ( v5 )
  {
    v7 = *(void **)&a3[(_DWORD)this];
    if ( !v7 )
    {
      v8 = 0;
      v9 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool;
      v10 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 12);
      v11 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 8);
      do
      {
        v9[3] = ++v10;
        if ( v10 == v11 )
        {
          v10 = 0;
          v9[3] = 0;
          if ( v8 << 31 )
          {
            *(_DWORD *)&a3[(_DWORD)this] = 0;
            return this;
          }
          v8 = 1;
        }
        v12 = v9[1];
        v13 = *(char *)(v12 + v10);
      }
      while ( v13 > -1 );
      *(_BYTE *)(v12 + v10) = v13 & 0x7F;
      *(_BYTE *)(v9[1] + v9[3]) = (*(_BYTE *)(v9[1] + v9[3]) + 1) & 0x7F | *(_BYTE *)(v9[1] + v9[3]) & 0x80;
      v7 = (void *)(*v9 + 12 * v9[3]);
      *(_DWORD *)&a3[(_DWORD)this] = v7;
      if ( !v7 )
        return this;
    }
    memcpy_0(v7, v5, a4);
  }
  return this;
}


// ============================================================

// Address: 0x2ccbcc
// Original: _ZN24CCustomCarEnvMapPipeline26pluginSpecMatConstructorCBEPvii
// Demangled: CCustomCarEnvMapPipeline::pluginSpecMatConstructorCB(void *,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginSpecMatConstructorCB(int this, void *a2, int a3, int a4)
{
  *(_DWORD *)(this + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset) = 0;
  return this;
}


// ============================================================

// Address: 0x2ccbe0
// Original: _ZN24CCustomCarEnvMapPipeline25pluginSpecMatDestructorCBEPvii
// Demangled: CCustomCarEnvMapPipeline::pluginSpecMatDestructorCB(void *,int,int)
CCustomCarEnvMapPipeline *__fastcall CCustomCarEnvMapPipeline::pluginSpecMatDestructorCB(
        CCustomCarEnvMapPipeline *this,
        void *a2,
        int a3,
        int a4)
{
  int v5; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r0
  int v9; // r1

  v5 = CCustomCarEnvMapPipeline::ms_specularMapPluginOffset;
  v6 = *(_DWORD *)((char *)this + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    if ( v7 )
    {
      RwTextureDestroy(v7);
      *(_DWORD *)(v6 + 4) = 0;
    }
    v8 = CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool;
    v9 = (v6 - *(_DWORD *)CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool) >> 3;
    *(_BYTE *)(*(_DWORD *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 4) + v9) |= 0x80u;
    if ( v9 < *(_DWORD *)(v8 + 12) )
      *(_DWORD *)(v8 + 12) = v9;
    *(_DWORD *)((char *)this + v5) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x2ccc38
// Original: _ZN24CCustomCarEnvMapPipeline30pluginSpecMatCopyConstructorCBEPvPKvii
// Demangled: CCustomCarEnvMapPipeline::pluginSpecMatCopyConstructorCB(void *,void const*,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginSpecMatCopyConstructorCB(
        int this,
        char *a2,
        const void *a3,
        int a4,
        int a5)
{
  int v5; // lr
  _DWORD *v6; // r12
  _DWORD *v7; // r1
  int v8; // r4
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r5
  int v13; // r6
  int v14; // r2

  v5 = CCustomCarEnvMapPipeline::ms_specularMapPluginOffset;
  v6 = *(_DWORD **)&a2[CCustomCarEnvMapPipeline::ms_specularMapPluginOffset];
  if ( v6 )
  {
    v7 = *(_DWORD **)(this + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
    if ( !v7 )
    {
      v8 = 0;
      v9 = (_DWORD *)CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool;
      v10 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 12);
      v11 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 8);
      do
      {
        v9[3] = ++v10;
        if ( v10 == v11 )
        {
          v10 = 0;
          v9[3] = 0;
          if ( v8 << 31 )
          {
            *(_DWORD *)(this + v5) = 0;
            return this;
          }
          v8 = 1;
        }
        v12 = v9[1];
        v13 = *(char *)(v12 + v10);
      }
      while ( v13 > -1 );
      *(_BYTE *)(v12 + v10) = v13 & 0x7F;
      *(_BYTE *)(v9[1] + v9[3]) = (*(_BYTE *)(v9[1] + v9[3]) + 1) & 0x7F | *(_BYTE *)(v9[1] + v9[3]) & 0x80;
      v7 = (_DWORD *)(*v9 + 8 * v9[3]);
      *(_DWORD *)(this + v5) = v7;
      if ( !v7 )
        return this;
    }
    *v7 = *v6;
    v14 = v6[1];
    v7[1] = v14;
    if ( v14 )
      ++*(_DWORD *)(v14 + 84);
  }
  return this;
}


// ============================================================

// Address: 0x2cccdc
// Original: _ZN24CCustomCarEnvMapPipeline25pluginSpecMatStreamReadCBEP8RwStreamiPvii
// Demangled: CCustomCarEnvMapPipeline::pluginSpecMatStreamReadCB(RwStream *,int,void *,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginSpecMatStreamReadCB(int a1, size_t a2, int a3)
{
  int v5; // r9
  const char *v6; // r1
  TextureDatabaseRuntime *Database; // r0
  TextureDatabaseRuntime *v8; // r1
  int v9; // r0
  int v10; // r6
  int *v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int v15; // r4
  int v16; // r2
  int v17; // r1
  int v18; // r3
  float v20; // [sp+0h] [bp-38h] BYREF
  char v21[24]; // [sp+4h] [bp-34h] BYREF

  v5 = CCustomCarEnvMapPipeline::ms_specularMapPluginOffset;
  RwStreamRead(a1, &v20, a2);
  Database = (TextureDatabaseRuntime *)TextureDatabaseRuntime::GetDatabase((TextureDatabaseRuntime *)&off_2CCDB4, v6);
  TextureDatabaseRuntime::Register(Database, v8);
  if ( v20 != 0.0 )
  {
    v9 = RwTextureRead(v21, 0);
    if ( v9 )
    {
      v10 = 0;
      v11 = (int *)CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool;
      v12 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 12);
      v13 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gSpecMapPipeMatDataPool + 8);
      do
      {
        v11[3] = ++v12;
        if ( v12 == v13 )
        {
          v12 = 0;
          v11[3] = 0;
          if ( v10 << 31 )
          {
            *(_DWORD *)(a3 + v5) = 0;
            return a1;
          }
          v10 = 1;
        }
        v14 = v11[1];
        v15 = *(char *)(v14 + v12);
      }
      while ( v15 > -1 );
      *(_BYTE *)(v14 + v12) = v15 & 0x7F;
      *(_BYTE *)(v11[1] + v11[3]) = (*(_BYTE *)(v11[1] + v11[3]) + 1) & 0x7F | *(_BYTE *)(v11[1] + v11[3]) & 0x80;
      v16 = *v11;
      v17 = v11[3];
      v18 = v16 + 8 * v17;
      *(_DWORD *)(a3 + v5) = v18;
      if ( v18 )
      {
        *(_DWORD *)(v18 + 4) = v9;
        *(float *)(v16 + 8 * v17) = v20;
      }
    }
  }
  return a1;
}


// ============================================================

// Address: 0x2ccdc0
// Original: _ZN24CCustomCarEnvMapPipeline26pluginSpecMatStreamWriteCBEP8RwStreamiPKvii
// Demangled: CCustomCarEnvMapPipeline::pluginSpecMatStreamWriteCB(RwStream *,int,void const*,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginSpecMatStreamWriteCB(int a1, size_t a2, int a3)
{
  _DWORD *v5; // r1
  int v6; // r1
  _DWORD v8[5]; // [sp+0h] [bp-28h] BYREF
  __int64 v9; // [sp+14h] [bp-14h]

  v5 = *(_DWORD **)(a3 + CCustomCarEnvMapPipeline::ms_specularMapPluginOffset);
  v9 = 0LL;
  memset(v8, 0, sizeof(v8));
  if ( v5 )
  {
    v8[0] = *v5;
    v6 = v5[1];
    if ( v6 )
      strncpy((char *)&v8[1], (const char *)(v6 + 16), 0x18u);
  }
  RwStreamWrite(a1, v8, a2);
  return a1;
}


// ============================================================

// Address: 0x2cce38
// Original: _ZN24CCustomCarEnvMapPipeline28pluginSpecMatStreamGetSizeCBEPKvii
// Demangled: CCustomCarEnvMapPipeline::pluginSpecMatStreamGetSizeCB(void const*,int,int)
int __fastcall CCustomCarEnvMapPipeline::pluginSpecMatStreamGetSizeCB(
        CCustomCarEnvMapPipeline *this,
        const void *a2,
        int a3,
        int a4)
{
  int result; // r0

  result = CCustomCarEnvMapPipeline::ms_specularMapPluginOffset;
  if ( CCustomCarEnvMapPipeline::ms_specularMapPluginOffset != -1 )
    return 28;
  return result;
}


// ============================================================

// Address: 0x2cce4c
// Original: _ZN24CCustomCarEnvMapPipeline37SetCustomEnvMapPipeAtomicDataDefaultsEP26CustomEnvMapPipeAtomicData
// Demangled: CCustomCarEnvMapPipeline::SetCustomEnvMapPipeAtomicDataDefaults(CustomEnvMapPipeAtomicData *)
_DWORD *__fastcall CCustomCarEnvMapPipeline::SetCustomEnvMapPipeAtomicDataDefaults(_DWORD *result)
{
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  return result;
}


// ============================================================

// Address: 0x2cce58
// Original: _ZN24CCustomCarEnvMapPipeline25AllocEnvMapPipeAtomicDataEP8RpAtomic
// Demangled: CCustomCarEnvMapPipeline::AllocEnvMapPipeAtomicData(RpAtomic *)
_DWORD *__fastcall CCustomCarEnvMapPipeline::AllocEnvMapPipeAtomicData(int a1)
{
  int v1; // r12
  int v3; // r2
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // lr
  int v7; // r4
  int v8; // r5
  _DWORD *v9; // r2
  int v10; // r1

  v1 = CCustomCarEnvMapPipeline::ms_envMapAtmPluginOffset;
  if ( *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapAtmPluginOffset) )
    return *(_DWORD **)(a1 + CCustomCarEnvMapPipeline::ms_envMapAtmPluginOffset);
  v3 = 0;
  v4 = (_DWORD *)CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool;
  v5 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 12);
  v6 = *(_DWORD *)(CCustomCarEnvMapPipeline::m_gEnvMapPipeAtmDataPool + 8);
  do
  {
    v4[3] = ++v5;
    if ( v5 == v6 )
    {
      v5 = 0;
      v4[3] = 0;
      if ( v3 << 31 )
      {
        *(_DWORD *)(a1 + v1) = 0;
        return 0;
      }
      v3 = 1;
    }
    v7 = v4[1];
    v8 = *(char *)(v7 + v5);
  }
  while ( v8 > -1 );
  *(_BYTE *)(v7 + v5) = v8 & 0x7F;
  *(_BYTE *)(v4[1] + v4[3]) = (*(_BYTE *)(v4[1] + v4[3]) + 1) & 0x7F | *(_BYTE *)(v4[1] + v4[3]) & 0x80;
  v9 = (_DWORD *)(*v4 + 12 * v4[3]);
  v10 = 0;
  *(_DWORD *)(a1 + v1) = v9;
  if ( v9 )
  {
    *v9 = 0;
    v9[1] = 0;
    v9[2] = 0;
    return v9;
  }
  return (_DWORD *)v10;
}


// ============================================================
