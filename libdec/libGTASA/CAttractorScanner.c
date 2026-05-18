
// Address: 0x18a18c
// Original: j__ZN17CAttractorScanner24ScanForAttractorsInRangeERK4CPed
// Demangled: CAttractorScanner::ScanForAttractorsInRange(CPed const&)
// attributes: thunk
int __fastcall CAttractorScanner::ScanForAttractorsInRange(CAttractorScanner *this, const CPed *a2)
{
  return _ZN17CAttractorScanner24ScanForAttractorsInRangeERK4CPed(this, a2);
}


// ============================================================

// Address: 0x18d124
// Original: j__ZN17CAttractorScanner26ScanForAttractorsInPtrListER8CPtrListRK4CPed
// Demangled: CAttractorScanner::ScanForAttractorsInPtrList(CPtrList &,CPed const&)
// attributes: thunk
int __fastcall CAttractorScanner::ScanForAttractorsInPtrList(CAttractorScanner *this, CPtrList *a2, const CPed *a3)
{
  return _ZN17CAttractorScanner26ScanForAttractorsInPtrListER8CPtrListRK4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x18d334
// Original: j__ZN17CAttractorScanner9AddEffectEP9C2dEffectP7CEntityRK4CPed
// Demangled: CAttractorScanner::AddEffect(C2dEffect *,CEntity *,CPed const&)
// attributes: thunk
int __fastcall CAttractorScanner::AddEffect(CAttractorScanner *this, C2dEffect *a2, CEntity *a3, const CPed *a4)
{
  return _ZN17CAttractorScanner9AddEffectEP9C2dEffectP7CEntityRK4CPed(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1961d0
// Original: j__ZNK17CAttractorScanner26GetNearestAttractorInRangeERP9C2dEffectRP7CEntity
// Demangled: CAttractorScanner::GetNearestAttractorInRange(C2dEffect *&,CEntity *&)
// attributes: thunk
int __fastcall CAttractorScanner::GetNearestAttractorInRange(CAttractorScanner *a1, C2dEffect **a2, CEntity **a3)
{
  return _ZNK17CAttractorScanner26GetNearestAttractorInRangeERP9C2dEffectRP7CEntity(a1, a2, a3);
}


// ============================================================

// Address: 0x19a448
// Original: j__ZN17CAttractorScanner25GetClosestAttractorOfTypeERK7CVectorfiiPKcbPK9C2dEffectRPS5_RP7CEntity
// Demangled: CAttractorScanner::GetClosestAttractorOfType(CVector const&,float,int,int,char const*,bool,C2dEffect const*,C2dEffect*&,CEntity *&)
// attributes: thunk
int __fastcall CAttractorScanner::GetClosestAttractorOfType(
        CAttractorScanner *this,
        const CVector *a2,
        int a3,
        int a4,
        int a5,
        const char *a6,
        int a7,
        const C2dEffect *a8,
        C2dEffect **a9,
        CEntity **a10)
{
  return _ZN17CAttractorScanner25GetClosestAttractorOfTypeERK7CVectorfiiPKcbPK9C2dEffectRPS5_RP7CEntity(
           this,
           (int)a2,
           a3,
           a4,
           a5,
           (int)a6,
           a7,
           (int)a8,
           (int)a9);
}


// ============================================================

// Address: 0x19a688
// Original: j__ZN17CAttractorScanner30GetNearestPedNotUsingAttractorERK9C2dEffect
// Demangled: CAttractorScanner::GetNearestPedNotUsingAttractor(C2dEffect const&)
// attributes: thunk
int __fastcall CAttractorScanner::GetNearestPedNotUsingAttractor(CAttractorScanner *this, const C2dEffect *a2)
{
  return _ZN17CAttractorScanner30GetNearestPedNotUsingAttractorERK9C2dEffect(this, a2);
}


// ============================================================

// Address: 0x4baeac
// Original: _ZN17CAttractorScannerC2Ev
// Demangled: CAttractorScanner::CAttractorScanner(void)
void __fastcall CAttractorScanner::CAttractorScanner(CAttractorScanner *this)
{
  __int64 v1; // d16
  __int64 v2; // d17

  *((_WORD *)this + 6) = 0;
  *(_BYTE *)this = 1;
  *(float *)&v1 = 25.0;
  *((float *)&v1 + 1) = 25.0;
  *(float *)&v2 = 25.0;
  *((float *)&v2 + 1) = 25.0;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 13) = v1;
  *((_QWORD *)this + 14) = v2;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 31) = 1103626240;
  *((_DWORD *)this + 32) = 1103626240;
  *((float *)this + 30) = 15.0 * 15.0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 52) = 0LL;
  *((float *)this + 33) = 15.0 * 15.0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 34) = 1103626240;
  *((_DWORD *)this + 35) = 1103626240;
}


// ============================================================

// Address: 0x4baf20
// Original: _ZN17CAttractorScanner5ClearEv
// Demangled: CAttractorScanner::Clear(void)
int __fastcall CAttractorScanner::Clear(int this)
{
  __int64 v1; // d16
  __int64 v2; // d17

  *(float *)&v1 = 25.0;
  *((float *)&v1 + 1) = 25.0;
  *(float *)&v2 = 25.0;
  *((float *)&v2 + 1) = 25.0;
  *(_QWORD *)(this + 24) = 0LL;
  *(_QWORD *)(this + 32) = 0LL;
  *(_QWORD *)(this + 104) = v1;
  *(_QWORD *)(this + 112) = v2;
  *(_QWORD *)(this + 64) = 0LL;
  *(_QWORD *)(this + 72) = 0LL;
  *(_DWORD *)(this + 80) = 0;
  *(float *)(this + 120) = 15.0 * 15.0;
  *(_QWORD *)(this + 84) = 0LL;
  *(_QWORD *)(this + 92) = 0LL;
  *(_QWORD *)(this + 48) = 0LL;
  *(_QWORD *)(this + 56) = 0LL;
  *(float *)(this + 132) = 15.0 * 15.0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_DWORD *)(this + 124) = 1103626240;
  *(_DWORD *)(this + 128) = 1103626240;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 136) = 1103626240;
  *(_DWORD *)(this + 140) = 1103626240;
  return this;
}


// ============================================================

// Address: 0x4baf84
// Original: _ZN17CAttractorScannerD2Ev
// Demangled: CAttractorScanner::~CAttractorScanner()
void __fastcall CAttractorScanner::~CAttractorScanner(CAttractorScanner *this)
{
  ;
}


// ============================================================

// Address: 0x4baf88
// Original: _ZN17CAttractorScanner24ScanForAttractorsInRangeERK4CPed
// Demangled: CAttractorScanner::ScanForAttractorsInRange(CPed const&)
void __fastcall CAttractorScanner::ScanForAttractorsInRange(CAttractorScanner *this, const CPed *a2)
{
  int ActiveTask; // r0
  __int64 v5; // r0
  unsigned int v6; // r0
  unsigned int v7; // r1
  __int64 v8; // d16
  __int64 v9; // d17
  int v10; // r6
  int v11; // r0
  float *v12; // r1
  float v13; // s18
  float v14; // s20
  float v15; // s0
  float v16; // s2
  float v17; // s20
  float v18; // r9
  int v19; // r4
  int v20; // r1
  int v21; // r3
  int v22; // r0
  int v23; // r10
  int v24; // r9
  int v25; // r0
  int v27; // r6
  int v28; // r5
  int (**v29)[1024]; // r1
  char *v30; // r4
  C2dEffect *v31; // r6
  int v32; // r12
  int v33; // r0
  bool v34; // zf
  int v35; // r3
  int v36; // r10
  int v37; // lr
  const C2dEffect *v38; // r1
  CAttractorScanner *v39; // r6
  CEntity *v40; // r8
  CEntity *v41; // r8
  int v42; // [sp+Ch] [bp-84h]
  CPed *v43; // [sp+10h] [bp-80h]
  int v44; // [sp+14h] [bp-7Ch]
  CAttractorScanner *v45; // [sp+18h] [bp-78h]
  int v46; // [sp+1Ch] [bp-74h]
  _DWORD v47[7]; // [sp+24h] [bp-6Ch] BYREF
  CEntity *v48; // [sp+40h] [bp-50h] BYREF
  CAttractorScanner *v49; // [sp+44h] [bp-4Ch] BYREF

  if ( *(_BYTE *)this && !(*((unsigned __int8 *)a2 + 1157) << 31) )
  {
    ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    if ( ActiveTask && (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 233 )
    {
      v5 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xBB800000000LL;
      *((_BYTE *)this + 12) = 1;
      *(_QWORD *)((char *)this + 4) = v5;
    }
    else
    {
      if ( !*((_BYTE *)this + 12) )
      {
        *(_QWORD *)((char *)this + 4) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x5DC00000000LL;
        *((_BYTE *)this + 12) = 1;
      }
      if ( *((_BYTE *)this + 13) )
      {
        v6 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 13) = 0;
        *((_DWORD *)this + 1) = v6;
        v7 = v6;
      }
      else
      {
        v7 = *((_DWORD *)this + 1);
        v6 = CTimer::m_snTimeInMilliseconds;
      }
      if ( v7 + *((_DWORD *)this + 2) <= v6 )
      {
        *(float *)&v8 = 25.0;
        *((float *)&v8 + 1) = 25.0;
        *(float *)&v9 = 25.0;
        *((float *)&v9 + 1) = 25.0;
        *((_BYTE *)this + 12) = 1;
        v10 = 0;
        *((_DWORD *)this + 1) = v6;
        *((_DWORD *)this + 2) = 1500;
        *((_QWORD *)this + 8) = 0LL;
        *((_QWORD *)this + 9) = 0LL;
        *((_QWORD *)this + 13) = v8;
        *((_QWORD *)this + 14) = v9;
        *((_QWORD *)this + 3) = 0LL;
        *((_QWORD *)this + 4) = 0LL;
        *((_DWORD *)this + 10) = 0;
        *((_DWORD *)this + 31) = 1103626240;
        *((_DWORD *)this + 32) = 1103626240;
        *((float *)this + 30) = 15.0 * 15.0;
        *((_QWORD *)this + 10) = 0LL;
        *((_QWORD *)this + 11) = 0LL;
        *(_QWORD *)((char *)this + 44) = 0LL;
        *(_QWORD *)((char *)this + 52) = 0LL;
        *((float *)this + 33) = 15.0 * 15.0;
        *((_DWORD *)this + 15) = 0;
        *((_DWORD *)this + 24) = 0;
        *((_DWORD *)this + 25) = 0;
        *((_DWORD *)this + 34) = 1103626240;
        v45 = this;
        *((_DWORD *)this + 35) = 1103626240;
        v11 = *((_DWORD *)a2 + 5);
        v43 = a2;
        v12 = (float *)(v11 + 48);
        if ( !v11 )
          v12 = (float *)((char *)a2 + 4);
        v13 = *v12;
        v14 = v12[1];
        v15 = v14 - 15.0;
        v16 = v14 + 15.0;
        v17 = floorf((float)((float)(*v12 - 15.0) / 50.0) + 60.0);
        v18 = floorf((float)(v15 / 50.0) + 60.0);
        v19 = (int)floorf((float)((float)(v13 + 15.0) / 50.0) + 60.0);
        v20 = (int)floorf((float)(v16 / 50.0) + 60.0);
        v21 = (int)v18;
        if ( v20 >= 119 )
          v20 = 119;
        if ( v19 >= 119 )
          v19 = 119;
        if ( v21 <= 0 )
          v21 = 0;
        if ( (int)v17 > 0 )
          v10 = (int)v17;
        v44 = v10;
        v42 = v20;
        v46 = v21;
        if ( v21 <= v20 )
        {
          do
          {
            if ( v44 <= v19 )
            {
              v22 = 119;
              if ( v46 < 119 )
                v22 = v46;
              v23 = v44;
              v24 = 120 * v22;
              do
              {
                v25 = 119;
                if ( v23 < 119 )
                  v25 = v23;
                CAttractorScanner::ScanForAttractorsInPtrList(
                  v45,
                  (CPtrList *)&CWorld::ms_aSectors[2 * v25 + 2 * v24],
                  a2);
                CAttractorScanner::ScanForAttractorsInPtrList(
                  v45,
                  (CPtrList *)&CWorld::ms_aRepeatSectors[3 * (v23 & 0xF | (unsigned __int8)(16 * v46)) + 2],
                  a2);
              }
              while ( v23++ < v19 );
            }
            v27 = v46++;
          }
          while ( v27 < v42 );
        }
        v28 = 0;
        v29 = &CScripted2dEffects::ms_effects;
        v30 = CScripted2dEffects::ms_activated;
        v31 = (C2dEffect *)CScripted2dEffects::ms_effects;
        do
        {
          if ( *v30 )
          {
            v33 = LOBYTE(CScripted2dEffects::ms_userLists[v28 + 8]);
            v34 = v33 == 0;
            if ( LOBYTE(CScripted2dEffects::ms_userLists[v28 + 8]) )
            {
              v29 = (int (**)[1024])*((__int16 *)v43 + 19);
              v33 = CScripted2dEffects::ms_userLists[v28];
              v34 = v33 == (_DWORD)v29;
            }
            if ( v34
              || (v35 = CScripted2dEffects::ms_userLists[v28 + 1], (int (**)[1024])v35 == v29)
              || (v36 = CScripted2dEffects::ms_userLists[v28 + 2], (int (**)[1024])v36 == v29)
              || (v37 = CScripted2dEffects::ms_userLists[v28 + 3], (int (**)[1024])v37 == v29)
              || (v32 = *((_DWORD *)v43 + 359), v33 == -2) && CScripted2dEffects::ms_userLists[v28 + 4] == v32
              || v35 == -2 && CScripted2dEffects::ms_userLists[v28 + 5] == v32
              || v36 == -2 && CScripted2dEffects::ms_userLists[v28 + 6] == v32
              || v37 == -2 && CScripted2dEffects::ms_userLists[v28 + 7] == v32 )
            {
              CAttractorScanner::AddEffect(v45, v31, 0, v43);
            }
          }
          v28 += 9;
          v31 = (C2dEffect *)((char *)v31 + 64);
          ++v30;
        }
        while ( v28 != 576 );
        v48 = 0;
        v49 = 0;
        CAttractorScanner::GetNearestAttractorInRange(v45, &v49, &v48);
        v39 = v49;
        if ( v49 )
        {
          if ( v49 != *((CAttractorScanner **)v45 + 4) || (v38 = (const C2dEffect *)*((_DWORD *)v45 + 5), v38 != v48) )
          {
            if ( *((_BYTE *)v49 + 52) == 7 )
            {
              if ( (CPed *)CAttractorScanner::GetNearestPedNotUsingAttractor(v49, v38) == v43 )
              {
                v40 = v48;
                CEventAttractor::CEventAttractor((int)v47, (int)v39, v48);
                v47[0] = &off_66908C;
                if ( CEventGroup::Add((CEventGroup *)(*((_DWORD *)v43 + 272) + 104), (CEvent *)v47, 0) )
                {
                  *((_DWORD *)v45 + 4) = v39;
                  *((_DWORD *)v45 + 5) = v40;
                }
                CEventAttractor::~CEventAttractor((CEventAttractor *)v47);
              }
            }
            else
            {
              v41 = v48;
              CEventAttractor::CEventAttractor((int)v47, (int)v49, v48);
              if ( CEventGroup::Add((CEventGroup *)(*((_DWORD *)v43 + 272) + 104), (CEvent *)v47, 0) )
              {
                *((_DWORD *)v45 + 4) = v39;
                *((_DWORD *)v45 + 5) = v41;
              }
              CEventAttractor::~CEventAttractor((CEventAttractor *)v47);
            }
          }
        }
      }
    }
  }
}


// ============================================================

// Address: 0x4bb3d0
// Original: _ZN17CAttractorScanner26ScanForAttractorsInPtrListER8CPtrListRK4CPed
// Demangled: CAttractorScanner::ScanForAttractorsInPtrList(CPtrList &,CPed const&)
int __fastcall CAttractorScanner::ScanForAttractorsInPtrList(int this, __int64 **a2, const CPed *a3)
{
  __int64 *v3; // r10
  CAttractorScanner *v5; // r9
  int v6; // r11
  __int64 v7; // kr00_8
  CBaseModelInfo *v8; // r4
  int v9; // r5
  C2dEffect *v10; // r1

  v3 = *a2;
  v5 = (CAttractorScanner *)this;
  if ( *a2 )
  {
    v6 = 0;
    do
    {
      v7 = *v3;
      v3 = (__int64 *)*((_DWORD *)v3 + 1);
      if ( (*(_BYTE *)(v7 + 58) & 7) == 4 )
      {
        this = *(_DWORD *)(v7 + 324);
        v6 = HIBYTE(this) & 1;
        if ( (this & 0x40) != 0 )
          continue;
        this = *(_DWORD *)(v7 + 28) & 0x40004;
        if ( !this )
          continue;
      }
      v8 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v7 + 38)]);
      this = *((unsigned __int8 *)v8 + 35);
      if ( *((_BYTE *)v8 + 35) )
      {
        v9 = 0;
        do
        {
          v10 = (C2dEffect *)CBaseModelInfo::Get2dEffect(v8, v9);
          if ( *((_BYTE *)v10 + 12) == 3 )
          {
            if ( ((*((unsigned __int8 *)v10 + 55) << 31 == 0) | v6) << 31 )
              CAttractorScanner::AddEffect(v5, v10, (CEntity *)v7, a3);
          }
          this = *((unsigned __int8 *)v8 + 35);
          ++v9;
        }
        while ( v9 < this );
      }
    }
    while ( v3 );
  }
  return this;
}


// ============================================================

// Address: 0x4bb478
// Original: _ZN17CAttractorScanner9AddEffectEP9C2dEffectP7CEntityRK4CPed
// Demangled: CAttractorScanner::AddEffect(C2dEffect *,CEntity *,CPed const&)
void __fastcall CAttractorScanner::AddEffect(CAttractorScanner *this, C2dEffect *a2, CEntity *a3, const CPed *a4)
{
  int v7; // r4
  double v9; // d16
  double v10; // d16
  int v11; // r0
  int v12; // r0
  char *v13; // r6
  char *v14; // r1
  float32x2_t v15; // d16
  unsigned __int64 v16; // d1
  float v17; // s16
  CPedAttractorManager *PedAttractorManager; // r0
  double v19; // [sp+0h] [bp-88h] BYREF
  int v20; // [sp+8h] [bp-80h]
  int v21; // [sp+40h] [bp-48h]
  int v22; // [sp+44h] [bp-44h]
  _BYTE v23[12]; // [sp+48h] [bp-40h] BYREF
  double v24; // [sp+58h] [bp-30h]
  int v25; // [sp+60h] [bp-28h]

  v7 = *((unsigned __int8 *)a2 + 52);
  if ( (v7 != 4 || *(float *)&CWeather::Rain < 0.2) && (v7 == 4 || *(float *)&CWeather::Rain >= 0.2) )
    return;
  if ( a3 )
  {
    if ( !*((_DWORD *)a3 + 5) )
    {
      TransformPoint(v23, (char *)a3 + 4, a2);
      goto LABEL_11;
    }
    v9 = *(double *)a2;
    v25 = *((_DWORD *)a2 + 2);
    v24 = v9;
    operator*();
    v10 = v19;
    v11 = v20;
  }
  else
  {
    v11 = *((_DWORD *)a2 + 2);
    v10 = *(double *)a2;
  }
  *(_DWORD *)&v23[8] = v11;
  *(double *)v23 = v10;
LABEL_11:
  v12 = *((_DWORD *)a4 + 5);
  v13 = (char *)this + 4 * v7;
  v14 = (char *)(v12 + 48);
  if ( !v12 )
    v14 = (char *)a4 + 4;
  v15.n64_u64[0] = vsub_f32(*(float32x2_t *)(v14 + 4), *(float32x2_t *)&v23[4]).n64_u64[0];
  v16 = vmul_f32(v15, v15).n64_u64[0];
  v17 = (float)((float)((float)(*(float *)v14 - *(float *)v23) * (float)(*(float *)v14 - *(float *)v23)) + *(float *)&v16)
      + *((float *)&v16 + 1);
  if ( v17 < *((float *)v13 + 26)
    && (*((_BYTE *)a2 + 52) != 7
     || CScripted2dEffects::ms_radii[CScripted2dEffects::GetIndex(a2, (const C2dEffect *)v14)] < 0.0) )
  {
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    if ( CPedAttractorManager::HasEmptySlot(PedAttractorManager, a2, a3) == 1 )
    {
      v21 = 0;
      v22 = 0;
      if ( a3 )
      {
        if ( !*((_DWORD *)a3 + 5) )
        {
          CPlaceable::AllocateMatrix(a3);
          CSimpleTransform::UpdateMatrix((CEntity *)((char *)a3 + 4), *((CMatrix **)a3 + 5));
        }
        CMatrix::operator=();
      }
      else
      {
        CMatrix::SetScale((CMatrix *)&v19, 1.0);
      }
      if ( CPedAttractorManager::IsApproachable(a2, (C2dEffect *)&v19, 0, (int)a4, (CPed *)LODWORD(v19)) == 1 )
      {
        *((_DWORD *)v13 + 16) = a2;
        *((_DWORD *)v13 + 6) = a3;
        *((float *)v13 + 26) = v17;
      }
      CMatrix::~CMatrix((CMatrix *)&v19);
    }
  }
}


// ============================================================

// Address: 0x4bb60c
// Original: _ZNK17CAttractorScanner26GetNearestAttractorInRangeERP9C2dEffectRP7CEntity
// Demangled: CAttractorScanner::GetNearestAttractorInRange(C2dEffect *&,CEntity *&)
int __fastcall CAttractorScanner::GetNearestAttractorInRange(int result, _DWORD *a2, _DWORD *a3)
{
  float v3; // s0
  float v4; // s2
  int v5; // r3
  float v6; // s2
  int v7; // r3
  float v8; // s2
  int v9; // r3
  float v10; // s2
  int v11; // r3
  float v12; // s2
  int v13; // r3
  float v14; // s2
  int v15; // r3
  float v16; // s2
  int v17; // r3
  float v18; // s2
  int v19; // r3
  float v20; // s2
  int v21; // r3
  int v22; // r3

  *a2 = 0;
  *a3 = 0;
  if ( *(_DWORD *)(result + 40) )
  {
    *a2 = *(_DWORD *)(result + 80);
    result = *(_DWORD *)(result + 40);
LABEL_33:
    *a3 = result;
    return result;
  }
  v3 = 3.4028e38;
  v4 = *(float *)(result + 104);
  if ( v4 < 3.4028e38 )
  {
    v5 = *(_DWORD *)(result + 64);
    if ( v5 )
    {
      *a2 = v5;
      *a3 = *(_DWORD *)(result + 24);
      v3 = v4;
    }
  }
  v6 = *(float *)(result + 108);
  if ( v6 < v3 )
  {
    v7 = *(_DWORD *)(result + 68);
    if ( v7 )
    {
      *a2 = v7;
      *a3 = *(_DWORD *)(result + 28);
      v3 = v6;
    }
  }
  v8 = *(float *)(result + 112);
  if ( v8 < v3 )
  {
    v9 = *(_DWORD *)(result + 72);
    if ( v9 )
    {
      *a2 = v9;
      *a3 = *(_DWORD *)(result + 32);
      v3 = v8;
    }
  }
  v10 = *(float *)(result + 116);
  if ( v10 < v3 )
  {
    v11 = *(_DWORD *)(result + 76);
    if ( v11 )
    {
      *a2 = v11;
      *a3 = *(_DWORD *)(result + 36);
      v3 = v10;
    }
  }
  v12 = *(float *)(result + 120);
  if ( v12 < v3 )
  {
    v13 = *(_DWORD *)(result + 80);
    if ( v13 )
    {
      *a2 = v13;
      *a3 = *(_DWORD *)(result + 40);
      v3 = v12;
    }
  }
  v14 = *(float *)(result + 124);
  if ( v14 < v3 )
  {
    v15 = *(_DWORD *)(result + 84);
    if ( v15 )
    {
      *a2 = v15;
      *a3 = *(_DWORD *)(result + 44);
      v3 = v14;
    }
  }
  v16 = *(float *)(result + 128);
  if ( v16 < v3 )
  {
    v17 = *(_DWORD *)(result + 88);
    if ( v17 )
    {
      *a2 = v17;
      *a3 = *(_DWORD *)(result + 48);
      v3 = v16;
    }
  }
  v18 = *(float *)(result + 132);
  if ( v18 < v3 )
  {
    v19 = *(_DWORD *)(result + 92);
    if ( v19 )
    {
      *a2 = v19;
      *a3 = *(_DWORD *)(result + 52);
      v3 = v18;
    }
  }
  v20 = *(float *)(result + 136);
  if ( v20 < v3 )
  {
    v21 = *(_DWORD *)(result + 96);
    if ( v21 )
    {
      *a2 = v21;
      *a3 = *(_DWORD *)(result + 56);
      v3 = v20;
    }
  }
  if ( *(float *)(result + 140) < v3 )
  {
    v22 = *(_DWORD *)(result + 100);
    if ( v22 )
    {
      *a2 = v22;
      result = *(_DWORD *)(result + 60);
      goto LABEL_33;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4bb754
// Original: _ZN17CAttractorScanner30GetNearestPedNotUsingAttractorERK9C2dEffect
// Demangled: CAttractorScanner::GetNearestPedNotUsingAttractor(C2dEffect const&)
int __fastcall CAttractorScanner::GetNearestPedNotUsingAttractor(CAttractorScanner *this, const C2dEffect *a2)
{
  int v2; // lr
  int *v4; // r8
  int v5; // r5
  float v6; // s16
  int result; // r0
  int v8; // r0
  int i; // r4
  int v10; // r6
  int v11; // r10
  int ActiveTask; // r0
  int v13; // r0
  int v14; // r1
  float32x2_t v15; // d16
  unsigned __int64 v16; // d1
  float v17; // s18
  int v18; // r0
  int v19; // r2
  int v20; // r1
  bool v21; // zf
  int v22; // r11
  bool v23; // zf
  int v24; // r12
  int v25; // r11
  int IsApproachable; // r10
  CPed *v27; // [sp+0h] [bp-A8h]
  int v28; // [sp+14h] [bp-94h]
  float32x2_t *v29; // [sp+2Ch] [bp-7Ch]
  _BYTE v30[64]; // [sp+30h] [bp-78h] BYREF
  int v31; // [sp+70h] [bp-38h]
  int v32; // [sp+74h] [bp-34h]

  v4 = (int *)CPools::ms_pPedPool;
  v5 = *(_DWORD *)(CPools::ms_pPedPool + 8);
  if ( !v5 )
    return 0;
  v29 = (float32x2_t *)((char *)this + 4);
  v6 = 3.4028e38;
  result = 0;
  do
  {
    v28 = result;
    v8 = 1996 * v5--;
    for ( i = v8 - 908; ; i -= 1996 )
    {
      if ( *(char *)(v4[1] + v5) >= 0 )
      {
        v10 = *v4;
        v11 = *v4 + i;
        if ( v11 != 1088 )
        {
          ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v10 + i) + 4));
          if ( !ActiveTask || (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) != 233 )
          {
            v13 = *(_DWORD *)(v11 - 1068);
            v14 = v13 + 48;
            if ( !v13 )
              v14 = v11 - 1084;
            v15.n64_u64[0] = vsub_f32((float32x2_t)v29->n64_u64[0], *(float32x2_t *)(v14 + 4)).n64_u64[0];
            v16 = vmul_f32(v15, v15).n64_u64[0];
            v17 = (float)((float)((float)(*(float *)this - *(float *)v14) * (float)(*(float *)this - *(float *)v14))
                        + *(float *)&v16)
                + *((float *)&v16 + 1);
            if ( v17 < v6 )
            {
              v18 = 9 * CScripted2dEffects::GetIndex(this, (const C2dEffect *)v14);
              if ( !LOBYTE(CScripted2dEffects::ms_userLists[v18 + 8]) )
                break;
              v19 = *(__int16 *)(v10 - 1992 + i + 942);
              v20 = CScripted2dEffects::ms_userLists[v18];
              v21 = v20 == v19;
              if ( v20 != v19 )
              {
                v10 = CScripted2dEffects::ms_userLists[v18 + 1];
                v21 = v10 == v19;
              }
              if ( v21 )
                break;
              v22 = CScripted2dEffects::ms_userLists[v18 + 2];
              v23 = v22 == v19;
              if ( v22 != v19 )
              {
                v2 = CScripted2dEffects::ms_userLists[v18 + 3];
                v23 = v2 == v19;
              }
              if ( v23 )
                break;
              v24 = *(_DWORD *)(v11 + 348);
              if ( v20 == -2 && CScripted2dEffects::ms_userLists[v18 + 4] == v24 )
                break;
              if ( v10 == -2 && CScripted2dEffects::ms_userLists[v18 + 5] == v24
                || v22 == -2 && CScripted2dEffects::ms_userLists[v18 + 6] == v24
                || v2 == -2 && CScripted2dEffects::ms_userLists[v18 + 7] == v24 )
              {
                break;
              }
            }
          }
        }
      }
      if ( --v5 == -1 )
        return v28;
    }
    v31 = 0;
    v32 = 0;
    CMatrix::SetScale((CMatrix *)v30, 1.0);
    v25 = v11 - 1088;
    IsApproachable = CPedAttractorManager::IsApproachable(this, (C2dEffect *)v30, 0, v11 - 1088, v27);
    CMatrix::~CMatrix((CMatrix *)v30);
    if ( IsApproachable )
      v6 = v17;
    result = v28;
    if ( IsApproachable )
      result = v25;
  }
  while ( v5 );
  return result;
}


// ============================================================

// Address: 0x4bb9a0
// Original: _ZN17CAttractorScanner25GetClosestAttractorOfTypeERK7CVectorfiiPKcbPK9C2dEffectRPS5_RP7CEntity
// Demangled: CAttractorScanner::GetClosestAttractorOfType(CVector const&,float,int,int,char const*,bool,C2dEffect const*,C2dEffect*&,CEntity *&)
int __fastcall CAttractorScanner::GetClosestAttractorOfType(
        CWorld *this,
        const CVector *a2,
        int a3,
        int a4,
        const char *a5,
        int a6,
        int a7,
        const C2dEffect **a8,
        _DWORD *a9)
{
  __int16 v11; // r0
  int v12; // r8
  float v13; // s16
  bool v14; // zf
  int v15; // r1
  CBaseModelInfo *v16; // r9
  int v17; // r10
  int v18; // r0
  const C2dEffect *v19; // r11
  CPedAttractorManager *PedAttractorManager; // r0
  int v21; // r0
  double v22; // d16
  float32x2_t v23; // d16
  unsigned __int64 v24; // d1
  bool v26; // [sp+1Ch] [bp-1074h]
  char v27; // [sp+1Ch] [bp-1074h]
  float32x2_t *v28; // [sp+24h] [bp-106Ch]
  float *v29; // [sp+2Ch] [bp-1064h]
  _DWORD v31[1024]; // [sp+34h] [bp-105Ch] BYREF
  __int16 v32; // [sp+1036h] [bp-5Ah] BYREF
  _BYTE v33[12]; // [sp+1038h] [bp-58h] BYREF
  double v34; // [sp+1048h] [bp-48h]
  int v35; // [sp+1050h] [bp-40h]
  double v36; // [sp+1058h] [bp-38h]
  int v37; // [sp+1060h] [bp-30h]

  *a8 = 0;
  *a9 = 0;
  v32 = -1;
  CWorld::FindObjectsInRange(
    this,
    a2,
    0.0,
    (bool)&v32,
    (__int16 *)&elf_hash_bucket[193],
    (__int16)v31,
    (CEntity **)((char *)&stderr + 1),
    0,
    0,
    (bool)&stderr + 1,
    0,
    v26);
  v11 = v32;
  if ( v32 < 1 )
  {
    v27 = 0;
  }
  else
  {
    v29 = (float *)this;
    v28 = (float32x2_t *)((char *)this + 4);
    v27 = 0;
    v12 = 0;
    v13 = 100000000.0;
    do
    {
      v14 = a3 == -1;
      v15 = *(__int16 *)(v31[v12] + 38);
      if ( a3 != -1 )
        v14 = v15 == a3;
      if ( v14 )
      {
        v16 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[v15]);
        if ( *((_BYTE *)v16 + 35) )
        {
          v17 = 0;
          do
          {
            v18 = CBaseModelInfo::Get2dEffect(v16, v17);
            v19 = (const C2dEffect *)v18;
            if ( (!a7 || v18 != a7)
              && *(_BYTE *)(v18 + 12) == 3
              && *(unsigned __int8 *)(v18 + 52) == a4
              && (!a5 || !strcasecmp(a5, (const char *)(v18 + 56))) )
            {
              if ( a6 != 1
                || (PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager(),
                    CPedAttractorManager::HasEmptySlot(PedAttractorManager, v19, (const CEntity *)v31[v12]) == 1) )
              {
                v21 = v31[v12];
                if ( *(_DWORD *)(v21 + 20) )
                {
                  v22 = *(double *)v19;
                  v35 = *((_DWORD *)v19 + 2);
                  v34 = v22;
                  operator*();
                  *(_DWORD *)&v33[8] = v37;
                  *(double *)v33 = v36;
                }
                else
                {
                  TransformPoint(v33, v21 + 4, v19);
                }
                v23.n64_u64[0] = vsub_f32((float32x2_t)v28->n64_u64[0], *(float32x2_t *)&v33[4]).n64_u64[0];
                v24 = vmul_f32(v23, v23).n64_u64[0];
                if ( (float)((float)((float)((float)(*v29 - *(float *)v33) * (float)(*v29 - *(float *)v33))
                                   + *(float *)&v24)
                           + *((float *)&v24 + 1)) < v13 )
                {
                  v13 = (float)((float)((float)(*v29 - *(float *)v33) * (float)(*v29 - *(float *)v33)) + *(float *)&v24)
                      + *((float *)&v24 + 1);
                  *a8 = v19;
                  *a9 = v31[v12];
                  v27 = 1;
                }
              }
            }
            ++v17;
          }
          while ( v17 < *((unsigned __int8 *)v16 + 35) );
          v11 = v32;
        }
      }
      ++v12;
    }
    while ( v12 < v11 );
  }
  return v27 & 1;
}


// ============================================================
