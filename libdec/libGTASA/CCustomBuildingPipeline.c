
// Address: 0x196318
// Original: j__ZN23CCustomBuildingPipeline21CustomPipeAtomicSetupEP8RpAtomic
// Demangled: CCustomBuildingPipeline::CustomPipeAtomicSetup(RpAtomic *)
// attributes: thunk
int CCustomBuildingPipeline::CustomPipeAtomicSetup(void)
{
  return _ZN23CCustomBuildingPipeline21CustomPipeAtomicSetupEP8RpAtomic();
}


// ============================================================

// Address: 0x19909c
// Original: j__ZN23CCustomBuildingPipeline11DestroyPipeEv
// Demangled: CCustomBuildingPipeline::DestroyPipe(void)
// attributes: thunk
int __fastcall CCustomBuildingPipeline::DestroyPipe(CCustomBuildingPipeline *this)
{
  return _ZN23CCustomBuildingPipeline11DestroyPipeEv(this);
}


// ============================================================

// Address: 0x19d9c8
// Original: j__ZN23CCustomBuildingPipeline19CreateCustomObjPipeEv
// Demangled: CCustomBuildingPipeline::CreateCustomObjPipe(void)
// attributes: thunk
int __fastcall CCustomBuildingPipeline::CreateCustomObjPipe(CCustomBuildingPipeline *this)
{
  return _ZN23CCustomBuildingPipeline19CreateCustomObjPipeEv(this);
}


// ============================================================

// Address: 0x19ec34
// Original: j__ZN23CCustomBuildingPipeline10CreatePipeEv
// Demangled: CCustomBuildingPipeline::CreatePipe(void)
// attributes: thunk
int __fastcall CCustomBuildingPipeline::CreatePipe(CCustomBuildingPipeline *this)
{
  return _ZN23CCustomBuildingPipeline10CreatePipeEv(this);
}


// ============================================================

// Address: 0x2cb054
// Original: _ZN23CCustomBuildingPipelineC2Ev
// Demangled: CCustomBuildingPipeline::CCustomBuildingPipeline(void)
void __fastcall CCustomBuildingPipeline::CCustomBuildingPipeline(CCustomBuildingPipeline *this)
{
  ;
}


// ============================================================

// Address: 0x2cb056
// Original: _ZN23CCustomBuildingPipelineD2Ev
// Demangled: CCustomBuildingPipeline::~CCustomBuildingPipeline()
void __fastcall CCustomBuildingPipeline::~CCustomBuildingPipeline(CCustomBuildingPipeline *this)
{
  ;
}


// ============================================================

// Address: 0x2cb058
// Original: _ZN23CCustomBuildingPipeline10CreatePipeEv
// Demangled: CCustomBuildingPipeline::CreatePipe(void)
bool __fastcall CCustomBuildingPipeline::CreatePipe(CCustomBuildingPipeline *this)
{
  CCustomBuildingPipeline::ObjPipeline = CCustomBuildingPipeline::CreateCustomObjPipe((CCustomBuildingPipeline *)&CCustomBuildingPipeline::ObjPipeline);
  return CCustomBuildingPipeline::ObjPipeline != 0;
}


// ============================================================

// Address: 0x2cb074
// Original: _ZN23CCustomBuildingPipeline19CreateCustomObjPipeEv
// Demangled: CCustomBuildingPipeline::CreateCustomObjPipe(void)
int __fastcall CCustomBuildingPipeline::CreateCustomObjPipe(CCustomBuildingPipeline *this)
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
  RxOpenGLAllInOneSetRenderCallBack();
  *(_DWORD *)(v1 + 44) = 1408368796;
  *(_DWORD *)(v1 + 48) = 1408368796;
  return v1;
}


// ============================================================

// Address: 0x2cb0e0
// Original: _ZN23CCustomBuildingPipeline11DestroyPipeEv
// Demangled: CCustomBuildingPipeline::DestroyPipe(void)
int *__fastcall CCustomBuildingPipeline::DestroyPipe(CCustomBuildingPipeline *this)
{
  int *result; // r0

  result = (int *)CCustomBuildingPipeline::ObjPipeline;
  if ( CCustomBuildingPipeline::ObjPipeline )
  {
    _rxPipelineDestroy();
    result = &CCustomBuildingPipeline::ObjPipeline;
    CCustomBuildingPipeline::ObjPipeline = 0;
  }
  return result;
}


// ============================================================

// Address: 0x2cb110
// Original: _ZN23CCustomBuildingPipeline23CustomPipeMaterialSetupEP10RpMaterialPv
// Demangled: CCustomBuildingPipeline::CustomPipeMaterialSetup(RpMaterial *,void *)
int __fastcall CCustomBuildingPipeline::CustomPipeMaterialSetup(int a1)
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

// Address: 0x2cb1a0
// Original: _ZN23CCustomBuildingPipeline15SetFxEnvTextureEP10RpMaterialP9RwTexture
// Demangled: CCustomBuildingPipeline::SetFxEnvTexture(RpMaterial *,RwTexture *)
int __fastcall CCustomBuildingPipeline::SetFxEnvTexture(int a1, int a2)
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

// Address: 0x2cb1ec
// Original: _ZN23CCustomBuildingPipeline17GetFxEnvShininessEP10RpMaterial
// Demangled: CCustomBuildingPipeline::GetFxEnvShininess(RpMaterial *)
float __fastcall CCustomBuildingPipeline::GetFxEnvShininess(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(unsigned __int8 *)(v1 + 4) * 0.0039216;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cb228
// Original: _ZN23CCustomBuildingPipeline15GetFxEnvTextureEP10RpMaterial
// Demangled: CCustomBuildingPipeline::GetFxEnvTexture(RpMaterial *)
int __fastcall CCustomBuildingPipeline::GetFxEnvTexture(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return *(_DWORD *)(v1 + 8);
  else
    return 0;
}


// ============================================================

// Address: 0x2cb240
// Original: _ZN23CCustomBuildingPipeline21CustomPipeAtomicSetupEP8RpAtomic
// Demangled: CCustomBuildingPipeline::CustomPipeAtomicSetup(RpAtomic *)
int __fastcall CCustomBuildingPipeline::CustomPipeAtomicSetup(int a1)
{
  RpGeometryForAllMaterials(*(_DWORD *)(a1 + 24), CCustomBuildingPipeline::CustomPipeMaterialSetup, 0);
  *(_DWORD *)(a1 + 108) = CCustomBuildingPipeline::ObjPipeline;
  SetPipelineID();
  return a1;
}


// ============================================================

// Address: 0x2cb278
// Original: _ZN23CCustomBuildingPipeline18CustomPipeRenderCBEP10RwResEntryPvhj
// Demangled: CCustomBuildingPipeline::CustomPipeRenderCB(RwResEntry *,void *,uchar,uint)
int __fastcall CCustomBuildingPipeline::CustomPipeRenderCB(int result, int a2, int a3, char a4)
{
  int v4; // r11
  int v5; // r4
  _QWORD *v6; // r5
  int v7; // r10
  __int64 v8; // r0
  bool v9; // zf
  unsigned int v10; // r0
  int v11; // r6
  bool v12; // zf
  int v13; // [sp+Ch] [bp-2Ch]

  v5 = *(unsigned __int16 *)(result + 26);
  if ( *(_WORD *)(result + 26) )
  {
    v6 = (_QWORD *)(result + 28);
    v7 = a4 & 0x84;
    v13 = a4 & 8;
    while ( 1 )
    {
      v8 = v6[6];
      --v5;
      v9 = HIDWORD(v8) == 0;
      v10 = *(unsigned __int8 *)(v8 + 7);
      if ( !HIDWORD(v8) )
        v9 = v10 == 255;
      if ( v9 )
        break;
      if ( v10 )
      {
        emu_EnableAlphaModulate((float)v10 / 255.0);
        v11 = 1;
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
          if ( !v13 )
            emu_glColor4fv(rwOpenGLOpaqueBlack);
        }
        v12 = v7 == 0;
        if ( v7 )
        {
          v4 = **((_DWORD **)v6 + 12);
          v12 = v4 == 0;
        }
        if ( v12 || !*(_DWORD *)v4 )
          goto LABEL_22;
        if ( *(unsigned __int8 *)(*(_DWORD *)v4 + 48) << 31 )
        {
          if ( v11 )
            emu_DisableAlphaModulate();
          v6 += 7;
          result = v5 << 16;
          if ( !(v5 << 16) )
            return result;
        }
        else
        {
          _rwOpenGLSetRenderStateNoExtras();
LABEL_22:
          _rwOpenGLSetRenderState();
          RxOpenGLMeshInstanceData::DrawStored((RxOpenGLMeshInstanceData *)v6);
          v6 += 7;
          if ( v11 )
            emu_DisableAlphaModulate();
          result = v5 << 16;
          if ( !(v5 << 16) )
            return result;
        }
      }
      else
      {
        v6 += 7;
        result = v5 << 16;
        if ( !(v5 << 16) )
          return result;
      }
    }
    v11 = 0;
    goto LABEL_10;
  }
  return result;
}


// ============================================================

// Address: 0x2cb3ac
// Original: _ZN23CCustomBuildingPipeline13SetFxEnvScaleEP10RpMaterialff
// Demangled: CCustomBuildingPipeline::SetFxEnvScale(RpMaterial *,float,float)
_BYTE *__fastcall CCustomBuildingPipeline::SetFxEnvScale(int a1, float a2, float a3)
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

// Address: 0x2cb3f8
// Original: _ZN23CCustomBuildingPipeline14GetFxEnvScaleXEP10RpMaterial
// Demangled: CCustomBuildingPipeline::GetFxEnvScaleX(RpMaterial *)
float __fastcall CCustomBuildingPipeline::GetFxEnvScaleX(int a1)
{
  char *v1; // r0

  v1 = *(char **)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*v1 * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cb434
// Original: _ZN23CCustomBuildingPipeline14GetFxEnvScaleYEP10RpMaterial
// Demangled: CCustomBuildingPipeline::GetFxEnvScaleY(RpMaterial *)
float __fastcall CCustomBuildingPipeline::GetFxEnvScaleY(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 1) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cb470
// Original: _ZN23CCustomBuildingPipeline16SetFxEnvTransSclEP10RpMaterialff
// Demangled: CCustomBuildingPipeline::SetFxEnvTransScl(RpMaterial *,float,float)
int __fastcall CCustomBuildingPipeline::SetFxEnvTransScl(int a1, float a2, float a3)
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

// Address: 0x2cb4bc
// Original: _ZN23CCustomBuildingPipeline17GetFxEnvTransSclXEP10RpMaterial
// Demangled: CCustomBuildingPipeline::GetFxEnvTransSclX(RpMaterial *)
float __fastcall CCustomBuildingPipeline::GetFxEnvTransSclX(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 2) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cb4f8
// Original: _ZN23CCustomBuildingPipeline17GetFxEnvTransSclYEP10RpMaterial
// Demangled: CCustomBuildingPipeline::GetFxEnvTransSclY(RpMaterial *)
float __fastcall CCustomBuildingPipeline::GetFxEnvTransSclY(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(a1 + CCustomCarEnvMapPipeline::ms_envMapPluginOffset);
  if ( v1 )
    return (float)*(char *)(v1 + 3) * 0.125;
  else
    return 0.0;
}


// ============================================================

// Address: 0x2cb534
// Original: _ZN23CCustomBuildingPipeline17SetFxEnvShininessEP10RpMaterialf
// Demangled: CCustomBuildingPipeline::SetFxEnvShininess(RpMaterial *,float)
int __fastcall CCustomBuildingPipeline::SetFxEnvShininess(int a1, float a2)
{
  int result; // r0

  result = CCustomCarEnvMapPipeline::DuplicateCustomEnvMapPipeMaterialData();
  if ( result )
    *(_BYTE *)(result + 4) = (unsigned int)(float)(a2 * 255.0);
  return result;
}


// ============================================================
