
// Address: 0x1999a4
// Original: j__ZN23CTaskSimpleDoHandSignalC2Ev
// Demangled: CTaskSimpleDoHandSignal::CTaskSimpleDoHandSignal(void)
// attributes: thunk
void __fastcall CTaskSimpleDoHandSignal::CTaskSimpleDoHandSignal(CTaskSimpleDoHandSignal *this)
{
  _ZN23CTaskSimpleDoHandSignalC2Ev(this);
}


// ============================================================

// Address: 0x519d88
// Original: _ZN23CTaskSimpleDoHandSignalC2Ev
// Demangled: CTaskSimpleDoHandSignal::CTaskSimpleDoHandSignal(void)
void __fastcall CTaskSimpleDoHandSignal::CTaskSimpleDoHandSignal(CTaskSimpleDoHandSignal *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v1 + 8) = 0;
  *(_DWORD *)v1 = &off_66BF1C;
}


// ============================================================

// Address: 0x519da4
// Original: _ZN23CTaskSimpleDoHandSignalD2Ev
// Demangled: CTaskSimpleDoHandSignal::~CTaskSimpleDoHandSignal()
// attributes: thunk
void __fastcall CTaskSimpleDoHandSignal::~CTaskSimpleDoHandSignal(CTaskSimpleDoHandSignal *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x519da8
// Original: _ZN23CTaskSimpleDoHandSignalD0Ev
// Demangled: CTaskSimpleDoHandSignal::~CTaskSimpleDoHandSignal()
void __fastcall CTaskSimpleDoHandSignal::~CTaskSimpleDoHandSignal(CTaskSimpleDoHandSignal *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x519db8
// Original: _ZNK23CTaskSimpleDoHandSignal5CloneEv
// Demangled: CTaskSimpleDoHandSignal::Clone(void)
int __fastcall CTaskSimpleDoHandSignal::Clone(CTaskSimpleDoHandSignal *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  int result; // r0

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskSimple::CTaskSimple(v3);
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)result = &off_66BF1C;
  *(_BYTE *)(result + 8) = *((_BYTE *)this + 8);
  return result;
}


// ============================================================

// Address: 0x519de0
// Original: _ZN23CTaskSimpleDoHandSignal13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleDoHandSignal::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleDoHandSignal::MakeAbortable(
        CTaskSimpleDoHandSignal *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x519de4
// Original: _ZN23CTaskSimpleDoHandSignal10ProcessPedEP4CPed
// Demangled: CTaskSimpleDoHandSignal::ProcessPed(CPed *)
bool __fastcall CTaskSimpleDoHandSignal::ProcessPed(CTaskSimpleDoHandSignal *this, CPed *a2)
{
  unsigned int v4; // r1
  int TaskSecondary; // r6
  int v7; // r6
  CTask *v8; // r5

  if ( CEntity::GetIsOnScreen(a2) != 1 )
    return 1;
  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4);
  if ( *((_BYTE *)this + 8) )
    return !TaskSecondary || (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) != 426;
  if ( TaskSecondary )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) == 426 )
      return 1;
    (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)TaskSecondary + 28))(TaskSecondary, a2, 1, 0);
  }
  else
  {
    v7 = *((_DWORD *)a2 + 272);
    v8 = (CTask *)CTask::operator new((CTask *)&off_18, v4);
    CTaskComplexPlayHandSignalAnim::CTaskComplexPlayHandSignalAnim();
    CTaskManager::SetTaskSecondary((CTaskManager *)(v7 + 4), v8, 4);
    *((_BYTE *)this + 8) = 1;
  }
  return 0;
}


// ============================================================

// Address: 0x51c4ac
// Original: _ZNK23CTaskSimpleDoHandSignal11GetTaskTypeEv
// Demangled: CTaskSimpleDoHandSignal::GetTaskType(void)
int __fastcall CTaskSimpleDoHandSignal::GetTaskType(CTaskSimpleDoHandSignal *this)
{
  return 1214;
}


// ============================================================
