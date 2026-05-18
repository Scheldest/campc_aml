
// Address: 0x18efdc
// Original: j__ZN25CEventPedCollisionWithPedC2EtfPK4CPedRK7CVectorS5_ii
// Demangled: CEventPedCollisionWithPed::CEventPedCollisionWithPed(ushort,float,CPed const*,CVector const&,CVector const&,int,int)
// attributes: thunk
void __fastcall CEventPedCollisionWithPed::CEventPedCollisionWithPed(
        CEventPedCollisionWithPed *this,
        unsigned __int16 a2,
        float a3,
        const CPed *a4,
        const CVector *a5,
        const CVector *a6,
        int a7,
        int a8)
{
  _ZN25CEventPedCollisionWithPedC2EtfPK4CPedRK7CVectorS5_ii(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x18f6ac
// Original: j__ZN25CEventPedCollisionWithPedC2EtfPK4CPedRK7CVectorS5_ii_0
// Demangled: CEventPedCollisionWithPed::CEventPedCollisionWithPed(ushort,float,CPed const*,CVector const&,CVector const&,int,int)
// attributes: thunk
void __fastcall CEventPedCollisionWithPed::CEventPedCollisionWithPed(
        CEventPedCollisionWithPed *this,
        unsigned __int16 a2,
        float a3,
        const CPed *a4,
        const CVector *a5,
        const CVector *a6,
        int a7,
        int a8)
{
  _ZN25CEventPedCollisionWithPedC2EtfPK4CPedRK7CVectorS5_ii(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x1970d4
// Original: j__ZN25CEventPedCollisionWithPedD2Ev
// Demangled: CEventPedCollisionWithPed::~CEventPedCollisionWithPed()
// attributes: thunk
void __fastcall CEventPedCollisionWithPed::~CEventPedCollisionWithPed(CEventPedCollisionWithPed *this)
{
  _ZN25CEventPedCollisionWithPedD2Ev(this);
}


// ============================================================

// Address: 0x19e0c4
// Original: j__ZN25CEventPedCollisionWithPedD2Ev_0
// Demangled: CEventPedCollisionWithPed::~CEventPedCollisionWithPed()
// attributes: thunk
void __fastcall CEventPedCollisionWithPed::~CEventPedCollisionWithPed(CEventPedCollisionWithPed *this)
{
  _ZN25CEventPedCollisionWithPedD2Ev(this);
}


// ============================================================

// Address: 0x371274
// Original: _ZN25CEventPedCollisionWithPedC2EtfPK4CPedRK7CVectorS5_ii
// Demangled: CEventPedCollisionWithPed::CEventPedCollisionWithPed(ushort,float,CPed const*,CVector const&,CVector const&,int,int)
void __fastcall CEventPedCollisionWithPed::CEventPedCollisionWithPed(
        CEventPedCollisionWithPed *this,
        unsigned __int16 a2,
        float a3,
        const CPed *a4,
        const CVector *a5,
        const CVector *a6,
        __int16 a7,
        __int16 a8)
{
  __int64 v8; // d16
  __int64 v9; // d16

  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_WORD *)this + 5) = a2;
  *((float *)this + 3) = a3;
  *(_DWORD *)this = &off_665EBC;
  *((_DWORD *)this + 4) = a4;
  v8 = *(_QWORD *)a5;
  *((_DWORD *)this + 7) = *((_DWORD *)a5 + 2);
  *(_QWORD *)((char *)this + 20) = v8;
  v9 = *(_QWORD *)a6;
  *((_DWORD *)this + 10) = *((_DWORD *)a6 + 2);
  *((_WORD *)this + 22) = a7;
  *((_WORD *)this + 23) = a8;
  *((_QWORD *)this + 4) = v9;
  if ( a4 )
    CEntity::RegisterReference(a4, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x3712d4
// Original: _ZN25CEventPedCollisionWithPedD2Ev
// Demangled: CEventPedCollisionWithPed::~CEventPedCollisionWithPed()
void __fastcall CEventPedCollisionWithPed::~CEventPedCollisionWithPed(CEventPedCollisionWithPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_665EBC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x3712fc
// Original: _ZN25CEventPedCollisionWithPedD0Ev
// Demangled: CEventPedCollisionWithPed::~CEventPedCollisionWithPed()
void __fastcall CEventPedCollisionWithPed::~CEventPedCollisionWithPed(CEventPedCollisionWithPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_665EBC;
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

// Address: 0x371350
// Original: _ZNK25CEventPedCollisionWithPed17TakesPriorityOverERK6CEvent
// Demangled: CEventPedCollisionWithPed::TakesPriorityOver(CEvent const&)
bool __fastcall CEventPedCollisionWithPed::TakesPriorityOver(CEventPedCollisionWithPed *this, const CEvent *a2)
{
  int v5; // r5

  if ( CEventHandler::IsTemporaryEvent(a2, a2) )
    return 1;
  v5 = (*(int (__fastcall **)(CEventPedCollisionWithPed *))(*(_DWORD *)this + 12))(this);
  return v5 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
}


// ============================================================

// Address: 0x371384
// Original: _ZNK25CEventPedCollisionWithPed10AffectsPedEP4CPed
// Demangled: CEventPedCollisionWithPed::AffectsPed(CPed *)
bool __fastcall CEventPedCollisionWithPed::AffectsPed(CEventPedCollisionWithPed *this, CPedIntelligence **a2)
{
  int IsAlive; // r0
  bool v5; // zf
  int v7; // r1
  bool v8; // zf
  const CPed *v9; // r1
  int PedsGroup; // r0
  int ActiveTaskByType; // r8
  int v12; // r6
  int v13; // r8
  int ActiveTask; // r0
  int v15; // r0

  IsAlive = CPed::IsAlive((CPed *)a2);
  v5 = IsAlive == 1;
  if ( IsAlive == 1 )
    v5 = a2[64] == 0;
  if ( !v5 )
    return 0;
  v7 = *((_DWORD *)this + 4);
  if ( !v7 )
    return 0;
  v8 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
    v8 = *(unsigned __int8 *)(v7 + 1157) << 31 == 0;
  if ( !v8 )
    return 0;
  if ( *(int *)(*(_DWORD *)(v7 + 1088) + 632) > 30 )
    return 0;
  if ( CPedIntelligence::IsThreatenedBy(a2[272], (const CPed *)v7) )
    return 0;
  if ( *((__int16 *)this + 22) <= 3 )
  {
    PedsGroup = CPedGroups::GetPedsGroup(*((CPedGroups **)this + 4), v9);
    if ( !PedsGroup
      || CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), *((const CPed **)this + 4)) != 1 )
    {
      return 0;
    }
  }
  if ( (float)((float)((float)(*((float *)this + 5) * *((float *)a2[5] + 4))
                     + (float)(*((float *)this + 6) * *((float *)a2[5] + 5)))
             + (float)(*((float *)this + 7) * *((float *)a2[5] + 6))) > -0.5 )
    return 0;
  ActiveTaskByType = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1202);
  if ( ActiveTaskByType
    || (ActiveTaskByType = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1203)) != 0 )
  {
    v12 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 1202);
    if ( v12
      || (v12 = CTaskManager::FindActiveTaskByType(
                  (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4),
                  1203)) != 0 )
    {
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTaskByType + 20))(ActiveTaskByType);
      if ( v13 == (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 20))(v12) )
        return 0;
    }
  }
  if ( CTaskManager::GetActiveTask((CPedIntelligence *)((char *)a2[272] + 4)) )
  {
    ActiveTask = CTaskManager::GetActiveTask((CPedIntelligence *)((char *)a2[272] + 4));
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 917
      && *(_DWORD *)(CTaskManager::GetActiveTask((CPedIntelligence *)((char *)a2[272] + 4)) + 12) == *((_DWORD *)this + 4) )
    {
      return 0;
    }
  }
  v15 = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1000);
  return !v15
      || *(_DWORD *)(v15 + 16) != *((_DWORD *)this + 4)
      || !CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1019);
}


// ============================================================

// Address: 0x379610
// Original: _ZNK25CEventPedCollisionWithPed12GetEventTypeEv
// Demangled: CEventPedCollisionWithPed::GetEventType(void)
int __fastcall CEventPedCollisionWithPed::GetEventType(CEventPedCollisionWithPed *this)
{
  return 2;
}


// ============================================================

// Address: 0x379614
// Original: _ZNK25CEventPedCollisionWithPed16GetEventPriorityEv
// Demangled: CEventPedCollisionWithPed::GetEventPriority(void)
int __fastcall CEventPedCollisionWithPed::GetEventPriority(CEventPedCollisionWithPed *this)
{
  return 60;
}


// ============================================================

// Address: 0x379618
// Original: _ZNK25CEventPedCollisionWithPed11GetLifeTimeEv
// Demangled: CEventPedCollisionWithPed::GetLifeTime(void)
int __fastcall CEventPedCollisionWithPed::GetLifeTime(CEventPedCollisionWithPed *this)
{
  return 0;
}


// ============================================================

// Address: 0x37961c
// Original: _ZNK25CEventPedCollisionWithPed5CloneEv
// Demangled: CEventPedCollisionWithPed::Clone(void)
int __fastcall CEventPedCollisionWithPed::Clone(CEventPedCollisionWithPed *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr08_8
  __int16 v8; // r1
  int v9; // r12
  __int64 v10; // d16
  __int64 v11; // d16

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
  v7 = *(_QWORD *)((char *)this + 12);
  v8 = *((_WORD *)this + 5);
  v9 = *((_DWORD *)this + 11);
  *(_BYTE *)(v3 + 8) = 0;
  *(_WORD *)(v3 + 10) = v8;
  *(_DWORD *)(v3 + 12) = v7;
  *(_DWORD *)v3 = &off_665EBC;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 16) = HIDWORD(v7);
  v10 = *(_QWORD *)((char *)this + 20);
  *(_DWORD *)(v3 + 28) = *((_DWORD *)this + 7);
  *(_QWORD *)(v3 + 20) = v10;
  v11 = *((_QWORD *)this + 4);
  *(_DWORD *)(v3 + 40) = *((_DWORD *)this + 10);
  *(_DWORD *)(v3 + 44) = v9;
  *(_QWORD *)(v3 + 32) = v11;
  if ( HIDWORD(v7) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v7), (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
