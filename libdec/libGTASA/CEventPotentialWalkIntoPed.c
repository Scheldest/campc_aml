
// Address: 0x18aa78
// Original: j__ZN26CEventPotentialWalkIntoPedD2Ev
// Demangled: CEventPotentialWalkIntoPed::~CEventPotentialWalkIntoPed()
// attributes: thunk
void __fastcall CEventPotentialWalkIntoPed::~CEventPotentialWalkIntoPed(CEventPotentialWalkIntoPed *this)
{
  _ZN26CEventPotentialWalkIntoPedD2Ev(this);
}


// ============================================================

// Address: 0x18df9c
// Original: j__ZN26CEventPotentialWalkIntoPedC2EP4CPedRK7CVectori
// Demangled: CEventPotentialWalkIntoPed::CEventPotentialWalkIntoPed(CPed *,CVector const&,int)
// attributes: thunk
void __fastcall CEventPotentialWalkIntoPed::CEventPotentialWalkIntoPed(
        CEventPotentialWalkIntoPed *this,
        CPed *a2,
        const CVector *a3,
        int a4)
{
  _ZN26CEventPotentialWalkIntoPedC2EP4CPedRK7CVectori(this, a2, a3, a4);
}


// ============================================================

// Address: 0x3742a8
// Original: _ZN26CEventPotentialWalkIntoPedC2EP4CPedRK7CVectori
// Demangled: CEventPotentialWalkIntoPed::CEventPotentialWalkIntoPed(CPed *,CVector const&,int)
void __fastcall CEventPotentialWalkIntoPed::CEventPotentialWalkIntoPed(
        CEventPotentialWalkIntoPed *this,
        CPed *a2,
        const CVector *a3,
        int a4)
{
  __int64 v4; // d16

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_666218;
  v4 = *(_QWORD *)a3;
  *((_DWORD *)this + 6) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 8) = a4;
  *((_QWORD *)this + 2) = v4;
  *((_DWORD *)this + 7) = a2;
  CEntity::RegisterReference(a2, (CEntity **)this + 7);
}


// ============================================================

// Address: 0x3742f8
// Original: _ZN26CEventPotentialWalkIntoPedD2Ev
// Demangled: CEventPotentialWalkIntoPed::~CEventPotentialWalkIntoPed()
void __fastcall CEventPotentialWalkIntoPed::~CEventPotentialWalkIntoPed(CEventPotentialWalkIntoPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 28);
  v2 = (CEntity *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_666218;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x374320
// Original: _ZN26CEventPotentialWalkIntoPedD0Ev
// Demangled: CEventPotentialWalkIntoPed::~CEventPotentialWalkIntoPed()
void __fastcall CEventPotentialWalkIntoPed::~CEventPotentialWalkIntoPed(CEventPotentialWalkIntoPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 28);
  v2 = (CEntity *)*((_DWORD *)this + 7);
  *(_DWORD *)this = &off_666218;
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

// Address: 0x374374
// Original: _ZNK26CEventPotentialWalkIntoPed10AffectsPedEP4CPed
// Demangled: CEventPotentialWalkIntoPed::AffectsPed(CPed *)
bool __fastcall CEventPotentialWalkIntoPed::AffectsPed(CEventPotentialWalkIntoPed *this, CPedIntelligence **a2)
{
  int v4; // r0
  bool v5; // zf
  int ActiveTaskByType; // r8
  int v7; // r6
  int v8; // r8
  int v9; // r0
  int TaskByType; // r0
  CTask *SimplestActiveTask; // r0
  const CTask *v12; // r1

  if ( CPed::IsAlive((CPed *)a2) != 1 )
    return 0;
  v4 = *((_DWORD *)this + 7);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((_DWORD *)this + 8) == 1;
  if ( v5 )
    return 0;
  ActiveTaskByType = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1202);
  if ( ActiveTaskByType
    || (ActiveTaskByType = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1215)) != 0
    || (ActiveTaskByType = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 1203)) != 0 )
  {
    v7 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 7) + 1088) + 4), 1202);
    if ( v7
      || (v7 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 7) + 1088) + 4), 1215)) != 0
      || (v7 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 7) + 1088) + 4), 1203)) != 0 )
    {
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTaskByType + 20))(ActiveTaskByType);
      if ( v8 == (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) )
        return 0;
    }
  }
  v9 = CTaskManager::FindActiveTaskByType((CPedIntelligence *)((char *)a2[272] + 4), 936);
  if ( v9 )
  {
    if ( *(_DWORD *)(v9 + 12) == *((_DWORD *)this + 7) )
      return 0;
  }
  TaskByType = CPedIntelligence::FindTaskByType(a2[272], 1000);
  if ( TaskByType )
  {
    if ( *(_DWORD *)(TaskByType + 16) == *((_DWORD *)this + 7) )
      return 0;
  }
  SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CPedIntelligence *)((char *)a2[272] + 4));
  return SimplestActiveTask && CTask::IsGoToTask(SimplestActiveTask, v12) != 0;
}


// ============================================================

// Address: 0x37447e
// Original: _ZNK26CEventPotentialWalkIntoPed17TakesPriorityOverERK6CEvent
// Demangled: CEventPotentialWalkIntoPed::TakesPriorityOver(CEvent const&)
bool __fastcall CEventPotentialWalkIntoPed::TakesPriorityOver(CEventPotentialWalkIntoPed *this, const CEvent *a2)
{
  int v5; // r5

  if ( CEventHandler::IsTemporaryEvent(a2, a2) )
    return 1;
  v5 = (*(int (__fastcall **)(CEventPotentialWalkIntoPed *))(*(_DWORD *)this + 12))(this);
  return v5 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
}


// ============================================================

// Address: 0x379d48
// Original: _ZNK26CEventPotentialWalkIntoPed12GetEventTypeEv
// Demangled: CEventPotentialWalkIntoPed::GetEventType(void)
int __fastcall CEventPotentialWalkIntoPed::GetEventType(CEventPotentialWalkIntoPed *this)
{
  return 13;
}


// ============================================================

// Address: 0x379d4c
// Original: _ZNK26CEventPotentialWalkIntoPed16GetEventPriorityEv
// Demangled: CEventPotentialWalkIntoPed::GetEventPriority(void)
int __fastcall CEventPotentialWalkIntoPed::GetEventPriority(CEventPotentialWalkIntoPed *this)
{
  return 28;
}


// ============================================================

// Address: 0x379d50
// Original: _ZNK26CEventPotentialWalkIntoPed11GetLifeTimeEv
// Demangled: CEventPotentialWalkIntoPed::GetLifeTime(void)
int __fastcall CEventPotentialWalkIntoPed::GetLifeTime(CEventPotentialWalkIntoPed *this)
{
  return 0;
}


// ============================================================

// Address: 0x379d54
// Original: _ZNK26CEventPotentialWalkIntoPed15GetSourceEntityEv
// Demangled: CEventPotentialWalkIntoPed::GetSourceEntity(void)
int __fastcall CEventPotentialWalkIntoPed::GetSourceEntity(CEventPotentialWalkIntoPed *this)
{
  return *((_DWORD *)this + 7);
}


// ============================================================

// Address: 0x379d58
// Original: _ZNK26CEventPotentialWalkIntoPed13CloneEditableEv
// Demangled: CEventPotentialWalkIntoPed::CloneEditable(void)
int __fastcall CEventPotentialWalkIntoPed::CloneEditable(CEventPotentialWalkIntoPed *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr08_8
  __int64 v8; // d16

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
  v7 = *(_QWORD *)((char *)this + 28);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)v3 = &off_666218;
  v8 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6);
  *(_DWORD *)(v3 + 32) = HIDWORD(v7);
  *(_QWORD *)(v3 + 16) = v8;
  *(_DWORD *)(v3 + 28) = v7;
  CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 28));
  return v3;
}


// ============================================================
