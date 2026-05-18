
// Address: 0x18c1b8
// Original: j__ZN15CEventAttractorD2Ev
// Demangled: CEventAttractor::~CEventAttractor()
// attributes: thunk
void __fastcall CEventAttractor::~CEventAttractor(CEventAttractor *this)
{
  _ZN15CEventAttractorD2Ev(this);
}


// ============================================================

// Address: 0x19116c
// Original: j__ZN15CEventAttractorC2EP9C2dEffectP7CEntityh
// Demangled: CEventAttractor::CEventAttractor(C2dEffect *,CEntity *,uchar)
// attributes: thunk
int __fastcall CEventAttractor::CEventAttractor(int a1, int a2, CEntity *this)
{
  return _ZN15CEventAttractorC2EP9C2dEffectP7CEntityh(a1, a2, this);
}


// ============================================================

// Address: 0x192900
// Original: j__ZN15CEventAttractorD2Ev_0
// Demangled: CEventAttractor::~CEventAttractor()
// attributes: thunk
void __fastcall CEventAttractor::~CEventAttractor(CEventAttractor *this)
{
  _ZN15CEventAttractorD2Ev(this);
}


// ============================================================

// Address: 0x192ad4
// Original: j__ZN15CEventAttractor14IsEffectActiveEPK7CEntityPK9C2dEffect
// Demangled: CEventAttractor::IsEffectActive(CEntity const*,C2dEffect const*)
// attributes: thunk
int __fastcall CEventAttractor::IsEffectActive(CEventAttractor *this, const CEntity *a2, const C2dEffect *a3)
{
  return _ZN15CEventAttractor14IsEffectActiveEPK7CEntityPK9C2dEffect(this, a2, a3);
}


// ============================================================

// Address: 0x197870
// Original: j__ZN15CEventAttractorC2EP9C2dEffectP7CEntityh_0
// Demangled: CEventAttractor::CEventAttractor(C2dEffect *,CEntity *,uchar)
// attributes: thunk
int __fastcall CEventAttractor::CEventAttractor(int a1, int a2, CEntity *this)
{
  return _ZN15CEventAttractorC2EP9C2dEffectP7CEntityh(a1, a2, this);
}


// ============================================================

// Address: 0x374bac
// Original: _ZN15CEventAttractorC2EP9C2dEffectP7CEntityh
// Demangled: CEventAttractor::CEventAttractor(C2dEffect *,CEntity *,uchar)
int __fastcall CEventAttractor::CEventAttractor(int a1, int a2, CEntity *this, char a4)
{
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 13107456;
  *(_WORD *)(a1 + 12) = -1;
  *(_DWORD *)(a1 + 16) = a2;
  *(_BYTE *)(a1 + 24) = a4;
  *(_DWORD *)a1 = &off_6664D0;
  *(_DWORD *)(a1 + 20) = this;
  if ( this )
    CEntity::RegisterReference(this, (CEntity **)(a1 + 20));
  return a1;
}


// ============================================================

// Address: 0x374bf4
// Original: _ZN15CEventAttractorD2Ev
// Demangled: CEventAttractor::~CEventAttractor()
void __fastcall CEventAttractor::~CEventAttractor(CEventAttractor *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_6664D0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x374c1c
// Original: _ZN15CEventAttractorD0Ev
// Demangled: CEventAttractor::~CEventAttractor()
void __fastcall CEventAttractor::~CEventAttractor(CEventAttractor *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_6664D0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x374c70
// Original: _ZN15CEventAttractor14IsEffectActiveEPK7CEntityPK9C2dEffect
// Demangled: CEventAttractor::IsEffectActive(CEntity const*,C2dEffect const*)
int __fastcall CEventAttractor::IsEffectActive(int a1, int a2)
{
  char v3; // r4
  CBaseModelInfo *v4; // r5
  int v5; // r6
  __int64 v6; // r0

  v3 = 0;
  v4 = (CBaseModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(a1 + 38)]);
  if ( *((_BYTE *)v4 + 35) )
  {
    v5 = 0;
    do
    {
      LODWORD(v6) = CBaseModelInfo::Get2dEffect(v4, v5);
      HIDWORD(v6) = *(unsigned __int8 *)(a2 + 12) ^ 3;
      LODWORD(v6) = v6 == a2;
      v3 |= v6;
      if ( (_DWORD)v6 )
        break;
      ++v5;
    }
    while ( v5 < *((unsigned __int8 *)v4 + 35) );
  }
  return v3 & 1;
}


// ============================================================

// Address: 0x374ccc
// Original: _ZNK15CEventAttractor10AffectsPedEP4CPed
// Demangled: CEventAttractor::AffectsPed(CPed *)
int __fastcall CEventAttractor::AffectsPed(CEventAttractor *this, CPedIntelligence **a2)
{
  int v4; // r0
  bool v5; // zf
  int v6; // r6
  float v7; // r10
  int v8; // r4
  int v9; // r5
  __int64 v10; // r0
  char *v12; // r2
  int v13; // r1
  int ActiveTask; // r0
  unsigned __int16 v15; // r0
  int v16; // r4
  int v17; // r5
  _BYTE v18[52]; // [sp+24h] [bp-34h] BYREF

  if ( CPed::IsAlive((CPed *)a2) != 1 )
    return 0;
  v4 = (*(int (__fastcall **)(CEventAttractor *))(*(_DWORD *)this + 8))(this);
  v5 = v4 == 27;
  if ( v4 == 27 )
    v5 = *((_DWORD *)this + 5) == 0;
  if ( v5 )
    return 0;
  if ( (*(int (__fastcall **)(CEventAttractor *))(*(_DWORD *)this + 8))(this) == 27 )
  {
    v6 = 0;
    v7 = CModelInfo::ms_modelInfoPtrs[*(__int16 *)(*((_DWORD *)this + 5) + 38)];
    if ( !*(_BYTE *)(LODWORD(v7) + 35) )
      return v6;
    v8 = *((_DWORD *)this + 4);
    v9 = 0;
    do
    {
      LODWORD(v10) = CBaseModelInfo::Get2dEffect((CBaseModelInfo *)LODWORD(v7), v9);
      HIDWORD(v10) = *(unsigned __int8 *)(v8 + 12) ^ 3;
      LODWORD(v10) = v10 == v8;
      v6 |= v10;
      if ( (_DWORD)v10 )
        break;
      ++v9;
    }
    while ( v9 < *(unsigned __int8 *)(LODWORD(v7) + 35) );
    if ( !(v6 << 31) )
      return 0;
  }
  if ( CPedIntelligence::FindTaskByType(a2[272], 1215) )
    return 0;
  if ( a2[359] == (CPedIntelligence *)byte_6
    && (*(int (__fastcall **)(CEventAttractor *))(*(_DWORD *)this + 8))(this) == 27 )
  {
    if ( *(_DWORD *)(FindPlayerWanted(-1) + 44) )
      return 0;
    v13 = *((_DWORD *)this + 4);
    if ( *(_BYTE *)(v13 + 52) != 5
      || CPopulation::PedMICanBeCreatedAtThisAttractor((CPopulation *)*((__int16 *)a2 + 19), (char *)(v13 + 56), v12) != 1 )
    {
      return 0;
    }
  }
  ActiveTask = CTaskManager::GetActiveTask((CPedIntelligence *)((char *)a2[272] + 4));
  if ( ActiveTask )
  {
    if ( !*((_BYTE *)this + 24) && (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 233 )
      return 0;
  }
  if ( *(_BYTE *)(*((_DWORD *)this + 4) + 52) == 4 && *(float *)&CWeather::Rain < 0.2 )
    return 0;
  if ( *((_BYTE *)this + 24) )
    return 1;
  if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= *(unsigned __int8 *)(*((_DWORD *)this + 4) + 53) )
    return 0;
  if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) >= *(unsigned __int8 *)(*((_DWORD *)this + 4) + 54) )
    return 1;
  if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
    return 0;
  v15 = rand();
  v16 = *((_DWORD *)this + 5);
  v17 = (int)(float)((float)((float)v15 * 0.000015259) * 2000.0) + 2000;
  if ( !*(_DWORD *)(v16 + 20) )
  {
    CPlaceable::AllocateMatrix(*((CPlaceable **)this + 5));
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v16 + 4), *(CMatrix **)(v16 + 20));
  }
  operator*();
  v6 = 0;
  IKChainManager_c::LookAt(
    (int)&g_ikChainMan,
    (int)"CEventAttractor",
    (CPed *)a2,
    0,
    v17,
    -1,
    (int)v18,
    0,
    0.25,
    500,
    3,
    0);
  return v6;
}


// ============================================================

// Address: 0x37a364
// Original: _ZNK15CEventAttractor12GetEventTypeEv
// Demangled: CEventAttractor::GetEventType(void)
int __fastcall CEventAttractor::GetEventType(CEventAttractor *this)
{
  return 27;
}


// ============================================================

// Address: 0x37a368
// Original: _ZNK15CEventAttractor16GetEventPriorityEv
// Demangled: CEventAttractor::GetEventPriority(void)
int __fastcall CEventAttractor::GetEventPriority(CEventAttractor *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a36c
// Original: _ZNK15CEventAttractor11GetLifeTimeEv
// Demangled: CEventAttractor::GetLifeTime(void)
int __fastcall CEventAttractor::GetLifeTime(CEventAttractor *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a370
// Original: _ZNK15CEventAttractor13CloneEditableEv
// Demangled: CEventAttractor::CloneEditable(void)
int __fastcall CEventAttractor::CloneEditable(CEventAttractor *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr08_8
  char v8; // r0

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = *((_QWORD *)this + 2);
  v8 = *((_BYTE *)this + 24);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)(v3 + 16) = v7;
  *(_BYTE *)(v3 + 24) = v8;
  *(_DWORD *)v3 = &off_6664D0;
  *(_DWORD *)(v3 + 20) = HIDWORD(v7);
  if ( HIDWORD(v7) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v7), (CEntity **)(v3 + 20));
  return v3;
}


// ============================================================
