
// Address: 0x1911cc
// Original: j__ZN30CTaskSimpleWaitUntilPedIsInCarC2EP4CPed
// Demangled: CTaskSimpleWaitUntilPedIsInCar::CTaskSimpleWaitUntilPedIsInCar(CPed *)
// attributes: thunk
void __fastcall CTaskSimpleWaitUntilPedIsInCar::CTaskSimpleWaitUntilPedIsInCar(
        CTaskSimpleWaitUntilPedIsInCar *this,
        CPed *a2)
{
  _ZN30CTaskSimpleWaitUntilPedIsInCarC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x506754
// Original: _ZN30CTaskSimpleWaitUntilPedIsInCarC2EP4CPed
// Demangled: CTaskSimpleWaitUntilPedIsInCar::CTaskSimpleWaitUntilPedIsInCar(CPed *)
void __fastcall CTaskSimpleWaitUntilPedIsInCar::CTaskSimpleWaitUntilPedIsInCar(
        CTaskSimpleWaitUntilPedIsInCar *this,
        CPed *a2)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 12) = 0;
  *(_DWORD *)this = &off_66B60C;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x506788
// Original: _ZN30CTaskSimpleWaitUntilPedIsInCarD2Ev
// Demangled: CTaskSimpleWaitUntilPedIsInCar::~CTaskSimpleWaitUntilPedIsInCar()
void __fastcall CTaskSimpleWaitUntilPedIsInCar::~CTaskSimpleWaitUntilPedIsInCar(CTaskSimpleWaitUntilPedIsInCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B60C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x5067b4
// Original: _ZN30CTaskSimpleWaitUntilPedIsInCarD0Ev
// Demangled: CTaskSimpleWaitUntilPedIsInCar::~CTaskSimpleWaitUntilPedIsInCar()
void __fastcall CTaskSimpleWaitUntilPedIsInCar::~CTaskSimpleWaitUntilPedIsInCar(CTaskSimpleWaitUntilPedIsInCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B60C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x5067e4
// Original: _ZN30CTaskSimpleWaitUntilPedIsInCar10ProcessPedEP4CPed
// Demangled: CTaskSimpleWaitUntilPedIsInCar::ProcessPed(CPed *)
int __fastcall CTaskSimpleWaitUntilPedIsInCar::ProcessPed(CTaskSimpleWaitUntilPedIsInCar *this, CPed *a2)
{
  int v3; // r0

  CPed::SetMoveState(a2, 1);
  v3 = *((_DWORD *)this + 2);
  if ( v3 )
  {
    if ( CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v3 + 1088) + 4), 800) )
    {
      *((_BYTE *)this + 12) = 1;
      return *(_BYTE *)(*((_DWORD *)this + 2) + 1157) & 1;
    }
    if ( !*((_BYTE *)this + 12)
      && !CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 2) + 1088) + 4), 807)
      && (CPed::IsPlayer(*((CPed **)this + 2)) || (*(_BYTE *)(*((_DWORD *)this + 2) + 1168) & 8) == 0) )
    {
      return *(_BYTE *)(*((_DWORD *)this + 2) + 1157) & 1;
    }
  }
  return 1;
}


// ============================================================

// Address: 0x5074a8
// Original: _ZNK30CTaskSimpleWaitUntilPedIsInCar5CloneEv
// Demangled: CTaskSimpleWaitUntilPedIsInCar::Clone(void)
int __fastcall CTaskSimpleWaitUntilPedIsInCar::Clone(CTaskSimpleWaitUntilPedIsInCar *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 12) = 0;
  *(_DWORD *)v3 = &off_66B60C;
  *(_DWORD *)(v3 + 8) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x5074e4
// Original: _ZNK30CTaskSimpleWaitUntilPedIsInCar11GetTaskTypeEv
// Demangled: CTaskSimpleWaitUntilPedIsInCar::GetTaskType(void)
int __fastcall CTaskSimpleWaitUntilPedIsInCar::GetTaskType(CTaskSimpleWaitUntilPedIsInCar *this)
{
  return 833;
}


// ============================================================

// Address: 0x5074ea
// Original: _ZN30CTaskSimpleWaitUntilPedIsInCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleWaitUntilPedIsInCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleWaitUntilPedIsInCar::MakeAbortable(
        CTaskSimpleWaitUntilPedIsInCar *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================
