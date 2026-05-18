
// Address: 0x18e78c
// Original: j__ZN35CTaskSimpleAffectSecondaryBehaviourC2EbiP5CTask
// Demangled: CTaskSimpleAffectSecondaryBehaviour::CTaskSimpleAffectSecondaryBehaviour(bool,int,CTask *)
// attributes: thunk
void __fastcall CTaskSimpleAffectSecondaryBehaviour::CTaskSimpleAffectSecondaryBehaviour(
        CTaskSimpleAffectSecondaryBehaviour *this,
        bool a2,
        int a3,
        CTask *a4)
{
  _ZN35CTaskSimpleAffectSecondaryBehaviourC2EbiP5CTask(this, a2, a3, a4);
}


// ============================================================

// Address: 0x5411d8
// Original: _ZN35CTaskSimpleAffectSecondaryBehaviourC2EbiP5CTask
// Demangled: CTaskSimpleAffectSecondaryBehaviour::CTaskSimpleAffectSecondaryBehaviour(bool,int,CTask *)
void __fastcall CTaskSimpleAffectSecondaryBehaviour::CTaskSimpleAffectSecondaryBehaviour(
        CTaskSimpleAffectSecondaryBehaviour *this,
        bool a2,
        int a3,
        CTask *a4)
{
  int v7; // r0

  CTaskSimple::CTaskSimple(this);
  *(_BYTE *)(v7 + 8) = a2;
  *(_DWORD *)(v7 + 12) = a3;
  *(_DWORD *)(v7 + 16) = a4;
  *(_DWORD *)v7 = &off_66D168;
}


// ============================================================

// Address: 0x541204
// Original: _ZN35CTaskSimpleAffectSecondaryBehaviourD2Ev
// Demangled: CTaskSimpleAffectSecondaryBehaviour::~CTaskSimpleAffectSecondaryBehaviour()
void __fastcall CTaskSimpleAffectSecondaryBehaviour::~CTaskSimpleAffectSecondaryBehaviour(
        CTaskSimpleAffectSecondaryBehaviour *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D168;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x541230
// Original: _ZN35CTaskSimpleAffectSecondaryBehaviourD0Ev
// Demangled: CTaskSimpleAffectSecondaryBehaviour::~CTaskSimpleAffectSecondaryBehaviour()
void __fastcall CTaskSimpleAffectSecondaryBehaviour::~CTaskSimpleAffectSecondaryBehaviour(
        CTaskSimpleAffectSecondaryBehaviour *this)
{
  int v2; // r0
  void *v3; // r0

  v2 = *((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66D168;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x541260
// Original: _ZN35CTaskSimpleAffectSecondaryBehaviour10ProcessPedEP4CPed
// Demangled: CTaskSimpleAffectSecondaryBehaviour::ProcessPed(CPed *)
int __fastcall CTaskSimpleAffectSecondaryBehaviour::ProcessPed(CTaskSimpleAffectSecondaryBehaviour *this, CPed *a2)
{
  int TaskSecondary; // r0
  int v5; // r6
  int v6; // r4
  CTask *v7; // r0

  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), *((_DWORD *)this + 3));
  if ( *((_BYTE *)this + 8) )
  {
    if ( !TaskSecondary
      || (v5 = 0,
          (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)TaskSecondary + 28))(TaskSecondary, a2, 1, 0) == 1) )
    {
      v6 = *((_DWORD *)a2 + 272);
      v7 = (CTask *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 4) + 8))(*((_DWORD *)this + 4));
      CTaskManager::SetTaskSecondary((CTaskManager *)(v6 + 4), v7, *((_DWORD *)this + 3));
      return 1;
    }
  }
  else
  {
    if ( !TaskSecondary )
      return 1;
    v5 = 0;
    (*(void (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)TaskSecondary + 28))(TaskSecondary, a2, 0, 0);
  }
  return v5;
}


// ============================================================

// Address: 0x543b94
// Original: _ZNK35CTaskSimpleAffectSecondaryBehaviour5CloneEv
// Demangled: CTaskSimpleAffectSecondaryBehaviour::Clone(void)
int __fastcall CTaskSimpleAffectSecondaryBehaviour::Clone(CTaskSimpleAffectSecondaryBehaviour *this, unsigned int a2)
{
  int v3; // r0
  int v4; // r5
  CTaskSimple *v5; // r0
  int v6; // r6
  char v7; // r4
  int result; // r0

  v3 = *((_DWORD *)this + 4);
  if ( v3 )
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    v4 = 0;
  v5 = (CTaskSimple *)CTask::operator new((CTask *)&dword_14, a2);
  v6 = *((_DWORD *)this + 3);
  v7 = *((_BYTE *)this + 8);
  CTaskSimple::CTaskSimple(v5);
  *(_BYTE *)(result + 8) = v7;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 16) = v4;
  *(_DWORD *)result = &off_66D168;
  return result;
}


// ============================================================

// Address: 0x543bd8
// Original: _ZNK35CTaskSimpleAffectSecondaryBehaviour11GetTaskTypeEv
// Demangled: CTaskSimpleAffectSecondaryBehaviour::GetTaskType(void)
int __fastcall CTaskSimpleAffectSecondaryBehaviour::GetTaskType(CTaskSimpleAffectSecondaryBehaviour *this)
{
  return 306;
}


// ============================================================

// Address: 0x543bde
// Original: _ZN35CTaskSimpleAffectSecondaryBehaviour13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleAffectSecondaryBehaviour::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleAffectSecondaryBehaviour::MakeAbortable(
        CTaskSimpleAffectSecondaryBehaviour *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================
