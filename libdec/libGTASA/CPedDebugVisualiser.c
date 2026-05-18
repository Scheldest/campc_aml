
// Address: 0x19e6d0
// Original: j__ZNK19CPedDebugVisualiser28VisualiseAttractorsInPtrListER8CPtrListRK4CPed
// Demangled: CPedDebugVisualiser::VisualiseAttractorsInPtrList(CPtrList &,CPed const&)
// attributes: thunk
int __fastcall CPedDebugVisualiser::VisualiseAttractorsInPtrList(
        CPedDebugVisualiser *this,
        CPtrList *a2,
        const CPed *a3)
{
  return _ZNK19CPedDebugVisualiser28VisualiseAttractorsInPtrListER8CPtrListRK4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x4ac9c0
// Original: _ZN19CPedDebugVisualiser23VisualisePedsNearPlayerEv
// Demangled: CPedDebugVisualiser::VisualisePedsNearPlayer(void)
int __fastcall CPedDebugVisualiser::VisualisePedsNearPlayer(CPedDebugVisualiser *this)
{
  int result; // r0

  result = (unsigned __int8)byte_951FFC;
  if ( !byte_951FFC )
    return j_FindPlayerPed(-1);
  return result;
}


// ============================================================

// Address: 0x4ac9dc
// Original: _ZNK19CPedDebugVisualiser25VisualiseNearbyAttractorsERK4CPed
// Demangled: CPedDebugVisualiser::VisualiseNearbyAttractors(CPed const&)
int *__fastcall CPedDebugVisualiser::VisualiseNearbyAttractors(CPedDebugVisualiser *this, const CPed *a2)
{
  int v3; // r2
  float *v4; // r3
  float v5; // s16
  float v6; // s18
  float v7; // s26
  float v8; // r5
  float v9; // r6
  float v10; // r0
  const CPed *v11; // r2
  int v12; // r1
  int v13; // r11
  int v14; // r3
  int *result; // r0
  int v16; // r0
  int v17; // r10
  int v18; // r8
  int v19; // r0
  const CPed *v20; // r2
  int v22; // [sp+4h] [bp-5Ch]
  const CPed *v23; // [sp+8h] [bp-58h]
  int v24; // [sp+Ch] [bp-54h]
  int v25; // [sp+10h] [bp-50h] BYREF

  v3 = *((_DWORD *)a2 + 5);
  v4 = (float *)(v3 + 48);
  if ( !v3 )
    v4 = (float *)((char *)a2 + 4);
  v5 = *v4;
  v6 = v4[1];
  v7 = floorf((float)((float)(*v4 - 15.0) / 50.0) + 60.0);
  v8 = floorf((float)((float)(v6 - 15.0) / 50.0) + 60.0);
  v9 = floorf((float)((float)(v5 + 15.0) / 50.0) + 60.0);
  v10 = floorf((float)((float)(v6 + 15.0) / 50.0) + 60.0);
  v11 = 0;
  v12 = (int)v10;
  v13 = (int)v9;
  v14 = (int)v8;
  if ( (int)v10 >= 119 )
    v12 = 119;
  if ( v13 >= 119 )
    v13 = 119;
  if ( v14 <= 0 )
    v14 = 0;
  if ( (int)v7 > 0 )
    v11 = (const CPed *)(int)v7;
  v22 = v12;
  v23 = v11;
  v24 = v14;
  result = &v25;
  if ( v14 <= v12 )
  {
    do
    {
      if ( (int)v23 <= v13 )
      {
        v16 = 119;
        if ( v24 < 119 )
          v16 = v24;
        v17 = (int)v23;
        v18 = 120 * v16;
        do
        {
          v19 = 119;
          if ( v17 < 119 )
            v19 = v17;
          CPedDebugVisualiser::VisualiseAttractorsInPtrList(
            this,
            (CPtrList *)&CWorld::ms_aSectors[2 * v19 + 2 * v18],
            v11);
          CPedDebugVisualiser::VisualiseAttractorsInPtrList(
            this,
            (CPtrList *)&CWorld::ms_aRepeatSectors[3 * (v17 & 0xF | (unsigned __int8)(16 * v24)) + 2],
            v20);
        }
        while ( v17++ < v13 );
      }
      v11 = (const CPed *)v24;
      result = (int *)++v24;
    }
    while ( (int)v11 < v22 );
  }
  return result;
}


// ============================================================

// Address: 0x4acb58
// Original: _ZNK19CPedDebugVisualiser28VisualiseAttractorsInPtrListER8CPtrListRK4CPed
// Demangled: CPedDebugVisualiser::VisualiseAttractorsInPtrList(CPtrList &,CPed const&)
int __fastcall CPedDebugVisualiser::VisualiseAttractorsInPtrList(
        CPedDebugVisualiser *this,
        CPtrList *a2,
        const CPed *a3)
{
  _DWORD *v3; // r1
  __int64 v4; // kr00_8
  int result; // r0
  CBaseModelInfo *v6; // r6
  int v7; // r9
  int v8; // r10
  double v9; // d16
  double v10; // d16
  const CMatrix *v11; // r1
  double v12; // d16
  _DWORD *v13; // [sp+4h] [bp-64h]
  double v14; // [sp+8h] [bp-60h] BYREF
  int v15; // [sp+10h] [bp-58h]
  double v16; // [sp+18h] [bp-50h] BYREF
  int v17; // [sp+20h] [bp-48h]
  double v18; // [sp+28h] [bp-40h] BYREF
  int v19; // [sp+30h] [bp-38h]
  _BYTE v20[12]; // [sp+34h] [bp-34h] BYREF
  _BYTE v21[40]; // [sp+40h] [bp-28h] BYREF

  v3 = *(_DWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = *(_QWORD *)v3;
      v13 = (_DWORD *)v3[1];
      if ( (*(_BYTE *)(*v3 + 58) & 7) != 4
        || (result = *(_DWORD *)(v4 + 28), (result & 0x40004) != 0)
        && (result = *(unsigned __int8 *)(v4 + 324) << 25, (*(_BYTE *)(v4 + 324) & 0x40) == 0) )
      {
        v6 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]);
        result = *((unsigned __int8 *)v6 + 35);
        if ( *((_BYTE *)v6 + 35) )
        {
          v7 = 0;
          do
          {
            v8 = CBaseModelInfo::Get2dEffect(v6, v7);
            if ( *(_BYTE *)(v8 + 12) == 3 )
            {
              if ( !*(_DWORD *)(v4 + 20) )
              {
                CPlaceable::AllocateMatrix((CPlaceable *)v4);
                CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v4 + 4), *(CMatrix **)(v4 + 20));
              }
              CVector::FromMultiply((CVector *)v21, (const CMatrix *)HIDWORD(v4), (const CVector *)v8);
              if ( !*(_DWORD *)(v4 + 20) )
              {
                CPlaceable::AllocateMatrix((CPlaceable *)v4);
                CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v4 + 4), *(CMatrix **)(v4 + 20));
              }
              v9 = *(double *)(v8 + 16);
              v19 = *(_DWORD *)(v8 + 24);
              v18 = v9;
              CVector::FromMultiply3X3((CVector *)v20, (const CMatrix *)HIDWORD(v4), (const CVector *)&v18);
              if ( !*(_DWORD *)(v4 + 20) )
              {
                CPlaceable::AllocateMatrix((CPlaceable *)v4);
                CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v4 + 4), *(CMatrix **)(v4 + 20));
              }
              v10 = *(double *)(v8 + 28);
              v17 = *(_DWORD *)(v8 + 36);
              v16 = v10;
              CVector::FromMultiply3X3((CVector *)&v18, (const CMatrix *)HIDWORD(v4), (const CVector *)&v16);
              v11 = *(const CMatrix **)(v4 + 20);
              if ( !v11 )
              {
                CPlaceable::AllocateMatrix((CPlaceable *)v4);
                CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v4 + 4), *(CMatrix **)(v4 + 20));
                v11 = *(const CMatrix **)(v4 + 20);
              }
              v12 = *(double *)(v8 + 40);
              v15 = *(_DWORD *)(v8 + 48);
              v14 = v12;
              CVector::FromMultiply3X3((CVector *)&v16, v11, (const CVector *)&v14);
            }
            result = *((unsigned __int8 *)v6 + 35);
            ++v7;
          }
          while ( v7 < result );
        }
      }
      v3 = v13;
    }
    while ( v13 );
  }
  return result;
}


// ============================================================

// Address: 0x4acc80
// Original: _ZNK19CPedDebugVisualiser21VisualiseOneAttractorERK7CVectorS2_S2_S2_
// Demangled: CPedDebugVisualiser::VisualiseOneAttractor(CVector const&,CVector const&,CVector const&,CVector const&)
void __fastcall CPedDebugVisualiser::VisualiseOneAttractor(
        CPedDebugVisualiser *this,
        const CVector *a2,
        const CVector *a3,
        const CVector *a4,
        const CVector *a5)
{
  ;
}


// ============================================================

// Address: 0x4acc82
// Original: _ZN19CPedDebugVisualiser15SetRenderStatesEv
// Demangled: CPedDebugVisualiser::SetRenderStates(void)
int __fastcall CPedDebugVisualiser::SetRenderStates(CPedDebugVisualiser *this)
{
  unsigned __int8 v1; // r1
  unsigned __int8 v2; // r2
  float v3; // r1
  unsigned __int8 v4; // r1
  unsigned __int8 v5; // r1
  signed __int8 v6; // r1
  _BYTE v8[4]; // [sp+8h] [bp-10h] BYREF
  _BYTE v9[12]; // [sp+Ch] [bp-Ch] BYREF

  RwRenderStateSet(2, 1);
  RwRenderStateSet(5, 0);
  RwRenderStateSet(6, 0);
  RwRenderStateSet(8, 0);
  RwRenderStateSet(6, 0);
  RwRenderStateSet(7, 1);
  RwRenderStateSet(9, 2);
  RwRenderStateSet(12, 0);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(13, -16777216);
  RwRenderStateSet(14, 0);
  RwRenderStateSet(20, 1);
  RwRenderStateSet(29, 5);
  RwRenderStateSet(30, 2);
  CFont::SetFontStyle((CFont *)((char *)&stderr + 1), v1);
  CFont::SetBackground(0, 0, v2);
  CFont::SetWrapx((CFont *)0x44200000, v3);
  CFont::SetOrientation(0, v4);
  CFont::SetProportional((CFont *)((char *)&stderr + 1), v5);
  CRGBA::CRGBA((CRGBA *)v9, 0xFFu, 0xFFu, 0, 0xC8u);
  CFont::SetColor();
  CFont::SetEdge((CFont *)((char *)&stderr + 1), v6);
  CRGBA::CRGBA((CRGBA *)v8, 0, 0, 0, 0xFFu);
  return CFont::SetDropColor();
}


// ============================================================

// Address: 0x4acd58
// Original: _ZNK19CPedDebugVisualiser13VisualiseTextERK4CPed
// Demangled: CPedDebugVisualiser::VisualiseText(CPed const&)
char *__fastcall CPedDebugVisualiser::VisualiseText(CPedDebugVisualiser *this, const CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  int v5; // r1
  float *v6; // r2
  char *result; // r0
  float v8; // s0
  float *v9; // r1
  float v10; // s4
  float v11; // r1
  float v12; // [sp+8h] [bp-28h] BYREF
  _BYTE v13[4]; // [sp+Ch] [bp-24h] BYREF
  float v14[3]; // [sp+10h] [bp-20h] BYREF
  _BYTE v15[20]; // [sp+1Ch] [bp-14h] BYREF

  if ( !byte_951FFC )
    FindPlayerPed(-1);
  v5 = *((_DWORD *)a2 + 5);
  v6 = (float *)(v5 + 48);
  result = (char *)&TheCamera;
  if ( !v5 )
    v6 = (float *)((char *)a2 + 4);
  v8 = *v6;
  v9 = (float *)(dword_951FBC + 48);
  v10 = v6[2];
  if ( !dword_951FBC )
    v9 = (float *)&qword_951FAC;
  if ( (float)((float)((float)((float)(v8 - *v9) * (float)(v8 - *v9))
                     + (float)((float)(v6[1] - v9[1]) * (float)(v6[1] - v9[1])))
             + (float)((float)(v10 - v9[2]) * (float)(v10 - v9[2]))) <= 900.0 )
  {
    v14[1] = v6[1];
    v14[0] = v8;
    v14[2] = v10 + 2.0;
    result = (char *)CSprite::CalcScreenCoors((int)v14, (int)v15, (int)v13, (int)&v12, 1, 1);
    if ( result == (_BYTE *)&stderr + 1 )
    {
      v2.n64_f32[0] = v12 / 60.0;
      v3.n64_u32[0] = 1060320051;
      CFont::SetScale((CFont *)vmin_f32(v2, v3).n64_u32[0], v11);
      return (char *)CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    }
  }
  return result;
}


// ============================================================

// Address: 0x4ace44
// Original: _ZNK19CPedDebugVisualiser20VisualiseTextViaMenuERK4CPed
// Demangled: CPedDebugVisualiser::VisualiseTextViaMenu(CPed const&)
void __fastcall CPedDebugVisualiser::VisualiseTextViaMenu(CPedDebugVisualiser *this, const CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x4ace46
// Original: _ZNK19CPedDebugVisualiser24VisualiseBoundingVolumesER4CPed
// Demangled: CPedDebugVisualiser::VisualiseBoundingVolumes(CPed &)
int __fastcall CPedDebugVisualiser::VisualiseBoundingVolumes(CPedDebugVisualiser *this, CPed *a2, int a3, CVector *a4)
{
  CPedGeometryAnalyser **v5; // r5
  int v6; // r0
  CPedGeometryAnalyser **v7; // r1
  CVector *v8; // r3
  int v9; // r0
  _BYTE v11[12]; // [sp+4h] [bp-44h] BYREF
  _BYTE v12[56]; // [sp+10h] [bp-38h] BYREF

  v5 = (CPedGeometryAnalyser **)((char *)a2 + 4);
  v6 = *((_DWORD *)a2 + 5);
  v7 = (CPedGeometryAnalyser **)((char *)a2 + 4);
  if ( v6 )
    v7 = (CPedGeometryAnalyser **)(v6 + 48);
  CPedGeometryAnalyser::ComputeEntityBoundingBoxCorners(v7[2], *(float *)&a2, (CEntity *)v12, a4);
  v9 = *((_DWORD *)a2 + 5);
  if ( v9 )
    v5 = (CPedGeometryAnalyser **)(v9 + 48);
  return CPedGeometryAnalyser::ComputeEntityBoundingBoxCentre(v5[2], *(float *)&a2, (CEntity *)v11, v8);
}


// ============================================================

// Address: 0x4ace7e
// Original: _ZNK19CPedDebugVisualiser25VisualiseHitSidesToPlayerER4CPed
// Demangled: CPedDebugVisualiser::VisualiseHitSidesToPlayer(CPed &)
int __fastcall CPedDebugVisualiser::VisualiseHitSidesToPlayer(CPedDebugVisualiser *this, CPed *a2)
{
  CPedGeometryAnalyser *PlayerPed; // r0
  CEntity *v4; // r2
  const CPed *v5; // r1
  bool v6; // zf
  CVector *v7; // r2
  CPedGeometryAnalyser *v8; // r0
  int v10; // [sp+0h] [bp-38h] BYREF

  PlayerPed = (CPedGeometryAnalyser *)FindPlayerPed(-1);
  v5 = (const CPed *)*((_DWORD *)a2 + 356);
  v6 = v5 == 0;
  if ( v5 )
  {
    v4 = (CEntity *)(*((unsigned __int8 *)a2 + 1157) << 31);
    v6 = v4 == 0;
  }
  if ( v6 )
  {
    CPedGeometryAnalyser::ComputeEntityHitSide(PlayerPed, a2, v4);
    v8 = a2;
  }
  else
  {
    CPedGeometryAnalyser::ComputeEntityHitSide(PlayerPed, v5, v4);
    v8 = (CPedGeometryAnalyser *)*((_DWORD *)a2 + 356);
  }
  return CPedGeometryAnalyser::ComputeEntityDirs(v8, (const CEntity *)&v10, v7);
}


// ============================================================

// Address: 0x4acebe
// Original: _ZNK19CPedDebugVisualiser15VisualiseEventsERK4CPed
// Demangled: CPedDebugVisualiser::VisualiseEvents(CPed const&)
void __fastcall CPedDebugVisualiser::VisualiseEvents(CPedDebugVisualiser *this, const CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x4acec0
// Original: _ZNK19CPedDebugVisualiser14VisualiseTasksERK4CPed
// Demangled: CPedDebugVisualiser::VisualiseTasks(CPed const&)
void __fastcall CPedDebugVisualiser::VisualiseTasks(CPedDebugVisualiser *this, const CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x4acec2
// Original: _ZNK19CPedDebugVisualiser12VisualiseFOVERK4CPed
// Demangled: CPedDebugVisualiser::VisualiseFOV(CPed const&)
void __fastcall CPedDebugVisualiser::VisualiseFOV(CPedDebugVisualiser *this, const CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x4acec4
// Original: _ZNK19CPedDebugVisualiser17VisualisePositionERK4CPed
// Demangled: CPedDebugVisualiser::VisualisePosition(CPed const&)
void __fastcall CPedDebugVisualiser::VisualisePosition(CPedDebugVisualiser *this, const CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x4acec6
// Original: _ZN19CPedDebugVisualiser17CTextDisplayFlagsC2Ev
// Demangled: CPedDebugVisualiser::CTextDisplayFlags::CTextDisplayFlags(void)
_DWORD *__fastcall CPedDebugVisualiser::CTextDisplayFlags::CTextDisplayFlags(_DWORD *this)
{
  *this = 0;
  return this;
}


// ============================================================
