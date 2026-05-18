
// Address: 0x3076d0
// Original: _ZN26CTaskSimpleUninterruptableD0Ev
// Demangled: CTaskSimpleUninterruptable::~CTaskSimpleUninterruptable()
void __fastcall CTaskSimpleUninterruptable::~CTaskSimpleUninterruptable(CTaskSimpleUninterruptable *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x3076e0
// Original: _ZNK26CTaskSimpleUninterruptable5CloneEv
// Demangled: CTaskSimpleUninterruptable::Clone(void)
_DWORD *__fastcall CTaskSimpleUninterruptable::Clone(CTaskSimpleUninterruptable *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, a2);
  CTaskSimple::CTaskSimple(v2);
  *result = &off_6653F4;
  return result;
}


// ============================================================

// Address: 0x307708
// Original: _ZNK26CTaskSimpleUninterruptable11GetTaskTypeEv
// Demangled: CTaskSimpleUninterruptable::GetTaskType(void)
int __fastcall CTaskSimpleUninterruptable::GetTaskType(CTaskSimpleUninterruptable *this)
{
  return 201;
}


// ============================================================

// Address: 0x30770e
// Original: _ZN26CTaskSimpleUninterruptable13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleUninterruptable::MakeAbortable(CPed *,int,CEvent const*)
bool __fastcall CTaskSimpleUninterruptable::MakeAbortable(
        CTaskSimpleUninterruptable *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return a3 == 2;
}


// ============================================================

// Address: 0x307718
// Original: _ZN26CTaskSimpleUninterruptable10ProcessPedEP4CPed
// Demangled: CTaskSimpleUninterruptable::ProcessPed(CPed *)
int __fastcall CTaskSimpleUninterruptable::ProcessPed(CTaskSimpleUninterruptable *this, CPed *a2)
{
  return 0;
}


// ============================================================
