
// Address: 0x32ec3a
// Original: _ZN15CTaskSimpleNone13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleNone::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleNone::MakeAbortable(CTaskSimpleNone *this, CPed *a2, int a3, const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x32ecb0
// Original: _ZN15CTaskSimpleNone10ProcessPedEP4CPed
// Demangled: CTaskSimpleNone::ProcessPed(CPed *)
int __fastcall CTaskSimpleNone::ProcessPed(CTaskSimpleNone *this, CPed *a2)
{
  return 1;
}


// ============================================================

// Address: 0x4b8ccc
// Original: _ZN15CTaskSimpleNoneD0Ev
// Demangled: CTaskSimpleNone::~CTaskSimpleNone()
void __fastcall CTaskSimpleNone::~CTaskSimpleNone(CTaskSimpleNone *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4b8cdc
// Original: _ZNK15CTaskSimpleNone5CloneEv
// Demangled: CTaskSimpleNone::Clone(void)
_DWORD *__fastcall CTaskSimpleNone::Clone(CTaskSimpleNone *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, a2);
  CTaskSimple::CTaskSimple(v2);
  *result = &off_669000;
  return result;
}


// ============================================================

// Address: 0x4b8cfc
// Original: _ZNK15CTaskSimpleNone11GetTaskTypeEv
// Demangled: CTaskSimpleNone::GetTaskType(void)
int __fastcall CTaskSimpleNone::GetTaskType(CTaskSimpleNone *this)
{
  return 200;
}


// ============================================================
