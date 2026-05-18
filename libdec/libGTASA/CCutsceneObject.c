
// Address: 0x19e43c
// Original: j__ZN15CCutsceneObjectC2Ev
// Demangled: CCutsceneObject::CCutsceneObject(void)
// attributes: thunk
void __fastcall CCutsceneObject::CCutsceneObject(CCutsceneObject *this)
{
  _ZN15CCutsceneObjectC2Ev(this);
}


// ============================================================

// Address: 0x41078c
// Original: _ZN15CCutsceneObject13SetupLightingEv
// Demangled: CCutsceneObject::SetupLighting(void)
int __fastcall CCutsceneObject::SetupLighting(CCutsceneObject *this)
{
  float v2; // r1
  CEntity *v3; // r3
  int v4; // r0
  char *v5; // r1
  double v6; // d16
  float v7; // r6
  int v8; // r5
  float v9; // r4
  float v10; // r1
  double v12; // [sp+0h] [bp-20h] BYREF
  int v13; // [sp+8h] [bp-18h]

  ActivateDirectional();
  CCarFXRenderer::SetFxEnvMapLightMult((CCarFXRenderer *)0x3F800000, v2);
  if ( (*((_BYTE *)this + 71) & 0x20) != 0 )
  {
    WorldReplaceNormalLightsWithScorched();
    return 0;
  }
  else
  {
    v4 = *((_DWORD *)this + 5);
    v5 = (char *)(v4 + 48);
    if ( !v4 )
      v5 = (char *)this + 4;
    v6 = *(double *)v5;
    v13 = *((_DWORD *)v5 + 2);
    v12 = v6;
    *((_DWORD *)this + 77) = 0;
    v7 = COERCE_FLOAT(
           CPointLights::GenerateLightsAffectingObject(
             (CPointLights *)&v12,
             (CCutsceneObject *)((char *)this + 308),
             (float *)this,
             v3));
    v8 = 1;
    v9 = v7 * (float)((float)(COERCE_FLOAT(CPhysical::GetLightingFromCol(this, 1)) * 0.95) + 0.05);
    CCarFXRenderer::SetFxEnvMapLightMult((CCarFXRenderer *)LODWORD(v9), v10);
    SetLightColoursForPedsCarsAndObjects(v9);
  }
  return v8;
}


// ============================================================

// Address: 0x41083c
// Original: _ZN15CCutsceneObject14RemoveLightingEb
// Demangled: CCutsceneObject::RemoveLighting(bool)
int __fastcall CCutsceneObject::RemoveLighting(CCutsceneObject *this, bool a2)
{
  CPointLights *v2; // r0

  v2 = (CPointLights *)(*((unsigned __int8 *)this + 71) << 26);
  if ( (int)v2 >= 0 )
    CPointLights::RemoveLightsAffectingObject(v2);
  SetAmbientColours();
  return sub_18FE0C();
}


// ============================================================

// Address: 0x465980
// Original: _ZN15CCutsceneObjectC2Ev
// Demangled: CCutsceneObject::CCutsceneObject(void)
void __fastcall CCutsceneObject::CCutsceneObject(CCutsceneObject *this)
{
  char v2; // r2
  int v3; // r3
  int v4; // r0

  CObject::CObject(this);
  *((_DWORD *)this + 103) = 0;
  *((_DWORD *)this + 104) = 0;
  *(_QWORD *)((char *)this + 396) = 0LL;
  *(_QWORD *)((char *)this + 404) = 0LL;
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  v2 = *((_BYTE *)this + 58);
  *((_BYTE *)this + 320) = 4;
  v3 = *((_DWORD *)this + 7);
  *((_BYTE *)this + 58) = v2 & 7 | 0x10;
  *((_DWORD *)this + 7) = v3 & 0xEFFFFBFE | 0x10000400;
  *(_DWORD *)this = &off_668458;
  CObject::SetIsStatic(this, 0);
  v4 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 76) = 1056964608;
  *((_DWORD *)this + 7) = v4 & 0xF7FFFFFF;
}


// ============================================================

// Address: 0x4659f4
// Original: _ZN15CCutsceneObjectD2Ev
// Demangled: CCutsceneObject::~CCutsceneObject()
void __fastcall CCutsceneObject::~CCutsceneObject(CCutsceneObject *this)
{
  *(_DWORD *)this = &off_668458;
  j_CObject::~CObject(this);
}


// ============================================================

// Address: 0x465a08
// Original: _ZN15CCutsceneObjectD0Ev
// Demangled: CCutsceneObject::~CCutsceneObject()
void __fastcall CCutsceneObject::~CCutsceneObject(CCutsceneObject *this)
{
  void *v1; // r0

  *(_DWORD *)this = &off_668458;
  CObject::~CObject(this);
  j_CObject::operator delete(v1);
}


// ============================================================

// Address: 0x465a28
// Original: _ZN15CCutsceneObject13SetModelIndexEj
// Demangled: CCutsceneObject::SetModelIndex(uint)
int __fastcall CCutsceneObject::SetModelIndex(CCutsceneObject *this, unsigned int a2)
{
  int v4; // r0
  _BYTE *v5; // r0
  int v6; // r5
  int UppercaseKey; // r0
  float *v8; // r4
  const char *v9; // r1
  const char *v10; // r1
  const char *v11; // r1
  const char *v12; // r1
  const char *v13; // r1
  float v14; // r1
  int v15; // r1
  bool v16; // zf
  bool v17; // zf
  int result; // r0

  CEntity::SetModelIndex(this, a2);
  if ( **((_BYTE **)this + 6) == 2 )
  {
    RpAnimBlendClumpInit();
    v4 = ClumpOffset;
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 6) + ClumpOffset) + 12) = (char *)this + 72;
    v5 = *(_BYTE **)(*(_DWORD *)(*((_DWORD *)this + 6) + v4) + 16);
    *v5 |= 0x10u;
    v6 = *((_DWORD *)this + 6);
    if ( byte_9AE234 == 1 )
    {
      UppercaseKey = dword_9AE24C;
    }
    else
    {
      byte_9AE234 = (unsigned __int8)&stderr + 1;
      dword_9AE238 = CKeyGen::GetUppercaseKey((CKeyGen *)"cscopcarla92", (const char *)&stderr + 1);
      dword_9AE23C = CKeyGen::GetUppercaseKey((CKeyGen *)"cscopcarsf", v9);
      dword_9AE240 = CKeyGen::GetUppercaseKey((CKeyGen *)"csbravura", v10);
      dword_9AE244 = CKeyGen::GetUppercaseKey((CKeyGen *)"CsFireLa", v11);
      dword_9AE248 = CKeyGen::GetUppercaseKey((CKeyGen *)"csmothership", v12);
      UppercaseKey = CKeyGen::GetUppercaseKey((CKeyGen *)"CsVoodoo", v13);
      dword_9AE24C = UppercaseKey;
    }
    v14 = CModelInfo::ms_modelInfoPtrs[a2];
    v8 = &CModelInfo::ms_modelInfoPtrs[a2];
    v15 = *(_DWORD *)(LODWORD(v14) + 4);
    if ( v15 == dword_9AE238 )
      goto LABEL_14;
    v16 = v15 == dword_9AE23C;
    if ( v15 != dword_9AE23C )
      v16 = v15 == dword_9AE240;
    if ( v16 )
      goto LABEL_14;
    v17 = v15 == dword_9AE244;
    if ( v15 != dword_9AE244 )
      v17 = v15 == dword_9AE248;
    if ( v17 || v15 == UppercaseKey )
LABEL_14:
      RpClumpForAllAtomics(v6, sub_465F40, 0);
  }
  else
  {
    v8 = &CModelInfo::ms_modelInfoPtrs[a2];
  }
  result = *(_DWORD *)v8;
  *(_BYTE *)(*(_DWORD *)v8 + 34) = -1;
  return result;
}


// ============================================================

// Address: 0x465b84
// Original: _ZN15CCutsceneObject14ProcessControlEv
// Demangled: CCutsceneObject::ProcessControl(void)
void __fastcall CCutsceneObject::ProcessControl(CCutsceneObject *this)
{
  int v2; // r0
  bool v3; // zf
  int v4; // r1
  int v5; // r2
  float v6; // s0
  float v7; // s2
  __int16 v8; // r0
  float v9; // s4
  float v10; // s6
  float v11; // s2
  float v12; // s4
  float v13; // s6
  float v14; // s0
  float v15; // s10
  int v16; // r0
  float v17; // s12
  float v18; // s2
  float v19; // s4
  float v20; // s0
  float v21; // s6
  _BYTE v22[80]; // [sp+0h] [bp-50h] BYREF

  v2 = *((_DWORD *)this + 97);
  v3 = v2 == 0;
  if ( v2 )
    v3 = *((_DWORD *)this + 98) == 0;
  if ( v3 || (v4 = *((_DWORD *)this + 7), (v4 & 0x40) != 0) )
  {
    CPhysical::ProcessControl(this);
    if ( *((_DWORD *)this + 97) )
    {
      if ( *((_DWORD *)this + 98) )
      {
        CEntity::UpdateRpHAnim(*((CEntity **)this + 98));
        GetAnimHierarchyFromClump(*(_DWORD *)(*((_DWORD *)this + 98) + 24));
        RpHAnimHierarchyGetMatrixArray();
        CMatrix::CMatrix();
        CMatrix::operator=();
        CMatrix::~CMatrix((CMatrix *)v22);
        *((_DWORD *)this + 7) &= ~0x40u;
      }
      else
      {
        RwFrameGetLTM();
        CMatrix::CMatrix();
        CMatrix::operator=();
        CMatrix::~CMatrix((CMatrix *)v22);
      }
    }
    else
    {
      v6 = *(float *)&CTimer::ms_fTimeStep;
      v7 = 1.0 / *(float *)&CTimer::ms_fTimeStep;
      if ( *(float *)&CTimer::ms_fTimeStep < 0.01 )
        v7 = 100.0;
      v8 = *((_WORD *)this + 34);
      v9 = *((float *)this + 18) * v7;
      v10 = v7 * *((float *)this + 19);
      v11 = v7 * *((float *)this + 20);
      *((float *)this + 18) = v9;
      *((float *)this + 19) = v10;
      *((float *)this + 20) = v11;
      if ( (v8 & 0x2020) != 0 )
      {
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 19) = 0;
        *((_DWORD *)this + 20) = 0;
      }
      else
      {
        v12 = v6 * v9;
        v13 = v6 * v10;
        v14 = v6 * v11;
        v15 = *((float *)this + 100);
        v16 = *((_DWORD *)this + 5);
        v17 = *((float *)this + 101);
        v18 = v12 + *((float *)this + 102);
        v19 = v13 + *((float *)this + 103);
        v20 = v14 + *((float *)this + 104);
        v21 = *((float *)this + 99) + v18;
        *((float *)this + 102) = v18;
        *((float *)this + 103) = v19;
        *((float *)this + 104) = v20;
        *(float *)(v16 + 48) = v21;
        *(float *)(*((_DWORD *)this + 5) + 52) = v15 + v19;
        *(float *)(*((_DWORD *)this + 5) + 56) = v20 + v17;
      }
    }
  }
  else
  {
    v5 = *((_DWORD *)this + 8);
    *((_DWORD *)this + 7) = v4 | 0x40;
    *((_DWORD *)this + 8) = v5;
  }
}


// ============================================================

// Address: 0x465d00
// Original: _ZN15CCutsceneObject9PreRenderEv
// Demangled: CCutsceneObject::PreRender(void)
int *__fastcall CCutsceneObject::PreRender(CCutsceneObject *this)
{
  int v2; // r1
  _BYTE **v3; // r9
  _BYTE *v4; // r5
  int v5; // r0
  int v6; // r1
  __int64 v7; // d16
  int v8; // r0
  float *v9; // r1
  double v10; // d16
  int v11; // s2
  int *result; // r0
  float v13; // [sp+Ch] [bp-8Ch]
  _BYTE v14[4]; // [sp+1Ch] [bp-7Ch] BYREF
  double v15; // [sp+20h] [bp-78h] BYREF
  float v16; // [sp+28h] [bp-70h]
  _BYTE v17[37]; // [sp+30h] [bp-68h] BYREF
  unsigned __int8 v18; // [sp+55h] [bp-43h]

  if ( *((_DWORD *)this + 97) )
  {
    v2 = *((_DWORD *)this + 98);
    if ( v2 )
    {
      GetAnimHierarchyFromClump(*(_DWORD *)(v2 + 24));
      RpHAnimHierarchyGetMatrixArray();
    }
    else
    {
      RwFrameGetLTM();
    }
    CMatrix::CMatrix();
    CMatrix::operator=();
    CMatrix::~CMatrix((CMatrix *)v17);
    v3 = (_BYTE **)((char *)this + 24);
    v4 = (_BYTE *)*((_DWORD *)this + 6);
    if ( *v4 == 2 && GetFirstAtomic() && j_RpSkinGeometryGetSkin() )
    {
      v5 = *(_DWORD *)(*(_DWORD *)(GetFirstAtomic() + 24) + 96);
      v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v4[ClumpOffset] + 16) + 16);
      v7 = *(_QWORD *)(v6 + 16);
      *(_DWORD *)(v5 + 12) = *(_DWORD *)(v6 + 24);
      *(_QWORD *)(v5 + 4) = v7;
    }
  }
  else
  {
    v3 = (_BYTE **)((char *)this + 24);
  }
  if ( **v3 == 2 )
    CEntity::UpdateRpHAnim(this);
  CRealTimeShadowManager::DoShadowThisFrame((CRealTimeShadowManager *)g_realTimeShadowMan, this);
  if ( !*((_DWORD *)this + 78) )
    CShadows::StoreShadowForPedObject(
      this,
      *((CEntity **)&CTimeCycle::m_fShadowDisplacementX + CTimeCycle::m_CurrentStoredValue),
      CTimeCycle::m_fShadowDisplacementY[CTimeCycle::m_CurrentStoredValue],
      CTimeCycle::m_fShadowFrontX[CTimeCycle::m_CurrentStoredValue],
      CTimeCycle::m_fShadowFrontY[CTimeCycle::m_CurrentStoredValue],
      CTimeCycle::m_fShadowSideX[CTimeCycle::m_CurrentStoredValue],
      CTimeCycle::m_fShadowSideY[CTimeCycle::m_CurrentStoredValue],
      v13);
  if ( *((_WORD *)this + 19) == 1 )
  {
    CPed::ShoulderBoneRotation();
    *((_DWORD *)this + 7) |= 0x800000u;
  }
  v8 = *((_DWORD *)this + 5);
  v9 = (float *)(v8 + 48);
  if ( !v8 )
    v9 = (float *)((char *)this + 4);
  v10 = *(double *)v9;
  v16 = v9[2];
  v15 = v10;
  *(float *)&v11 = (float)(v16 + 0.5) + -5.0;
  v16 = v16 + 0.5;
  result = (int *)CWorld::ProcessVerticalLine((CVector *)&v15, v11, (int)v17, (int)v14, 1, 0, 0, 0, 0, 0, 0);
  if ( result == (int *)((char *)&stderr + 1) )
  {
    result = &CTimer::ms_fTimeStep;
    *((float *)this + 76) = (float)(*((float *)this + 76) * (float)(1.0 - (float)(*(float *)&CTimer::ms_fTimeStep * 0.1)))
                          + (float)((float)(*(float *)&CTimer::ms_fTimeStep * 0.1)
                                  * (float)((float)(*(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam
                                                  * (float)((float)((float)(v18 >> 4) * 0.5) / 15.0))
                                          + (float)((float)(1.0 - *(float *)&CCustomBuildingDNPipeline::m_fDNBalanceParam)
                                                  * (float)((float)((float)(v18 & 0xF) * 0.5) / 15.0))));
  }
  return result;
}


// ============================================================
