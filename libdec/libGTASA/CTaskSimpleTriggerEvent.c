
// Address: 0x4efaa0
// Original: _ZN23CTaskSimpleTriggerEvent10ProcessPedEP4CPed
// Demangled: CTaskSimpleTriggerEvent::ProcessPed(CPed *)
int __fastcall CTaskSimpleTriggerEvent::ProcessPed(CEvent **this, CPed *a2)
{
  CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), this[2], 0);
  return 1;
}


// ============================================================

// Address: 0x4f1fe8
// Original: _ZN23CTaskSimpleTriggerEventD2Ev
// Demangled: CTaskSimpleTriggerEvent::~CTaskSimpleTriggerEvent()
void __fastcall CTaskSimpleTriggerEvent::~CTaskSimpleTriggerEvent(CTaskSimpleTriggerEvent *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66A7F0;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4f2014
// Original: _ZN23CTaskSimpleTriggerEventD0Ev
// Demangled: CTaskSimpleTriggerEvent::~CTaskSimpleTriggerEvent()
void __fastcall CTaskSimpleTriggerEvent::~CTaskSimpleTriggerEvent(CTaskSimpleTriggerEvent *this)
{
  int v2; // r0
  void *v3; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66A7F0;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4f2044
// Original: _ZNK23CTaskSimpleTriggerEvent5CloneEv
// Demangled: CTaskSimpleTriggerEvent::Clone(void)
CTaskSimple *__fastcall CTaskSimpleTriggerEvent::Clone(CTaskSimpleTriggerEvent *this, unsigned int a2)
{
  CTaskSimple *v3; // r5
  int v4; // r4

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&byte_9[3], a2);
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  CTaskSimple::CTaskSimple(v3);
  *((_DWORD *)v3 + 2) = v4;
  *(_DWORD *)v3 = &off_66A7F0;
  return v3;
}


// ============================================================

// Address: 0x4f2078
// Original: _ZNK23CTaskSimpleTriggerEvent11GetTaskTypeEv
// Demangled: CTaskSimpleTriggerEvent::GetTaskType(void)
int __fastcall CTaskSimpleTriggerEvent::GetTaskType(CTaskSimpleTriggerEvent *this)
{
  return 252;
}


// ============================================================

// Address: 0x4f207c
// Original: _ZN23CTaskSimpleTriggerEvent13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleTriggerEvent::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleTriggerEvent::MakeAbortable(
        CTaskSimpleTriggerEvent *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================
