
// Address: 0x18c5b0
// Original: j__ZN27CTaskComplexWaitAtAttractorC2EP13CPedAttractori
// Demangled: CTaskComplexWaitAtAttractor::CTaskComplexWaitAtAttractor(CPedAttractor *,int)
// attributes: thunk
void __fastcall CTaskComplexWaitAtAttractor::CTaskComplexWaitAtAttractor(
        CTaskComplexWaitAtAttractor *this,
        CPedAttractor *a2,
        int a3)
{
  _ZN27CTaskComplexWaitAtAttractorC2EP13CPedAttractori(this, a2, a3);
}


// ============================================================

// Address: 0x4edee4
// Original: _ZN27CTaskComplexWaitAtAttractorC2EP13CPedAttractori
// Demangled: CTaskComplexWaitAtAttractor::CTaskComplexWaitAtAttractor(CPedAttractor *,int)
void __fastcall CTaskComplexWaitAtAttractor::CTaskComplexWaitAtAttractor(
        CTaskComplexWaitAtAttractor *this,
        CPedAttractor *a2,
        int a3)
{
  _DWORD *v5; // r0

  CTaskComplex::CTaskComplex(this);
  v5[3] = a2;
  v5[4] = a3;
  *v5 = &off_66A13C;
}


// ============================================================

// Address: 0x4edf04
// Original: _ZN27CTaskComplexWaitAtAttractorD2Ev
// Demangled: CTaskComplexWaitAtAttractor::~CTaskComplexWaitAtAttractor()
// attributes: thunk
void __fastcall CTaskComplexWaitAtAttractor::~CTaskComplexWaitAtAttractor(CTaskComplexWaitAtAttractor *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4edf08
// Original: _ZN27CTaskComplexWaitAtAttractorD0Ev
// Demangled: CTaskComplexWaitAtAttractor::~CTaskComplexWaitAtAttractor()
void __fastcall CTaskComplexWaitAtAttractor::~CTaskComplexWaitAtAttractor(CTaskComplexWaitAtAttractor *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4edf18
// Original: _ZN27CTaskComplexWaitAtAttractor17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexWaitAtAttractor::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexWaitAtAttractor::CreateNextSubTask(CTaskComplexWaitAtAttractor *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x4edf1c
// Original: _ZN27CTaskComplexWaitAtAttractor18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexWaitAtAttractor::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexWaitAtAttractor::CreateFirstSubTask(CTaskComplexWaitAtAttractor *this, CPed *a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  CTaskSimple::CTaskSimple(v2);
  *(_DWORD *)(result + 8) = 10000;
  *(_WORD *)(result + 20) = 0;
  *(_DWORD *)(result + 28) = 1090519040;
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)result = &off_669C0C;
  return result;
}


// ============================================================

// Address: 0x4edf50
// Original: _ZN27CTaskComplexWaitAtAttractor14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWaitAtAttractor::ControlSubTask(CPed *)
int __fastcall CTaskComplexWaitAtAttractor::ControlSubTask(CTaskComplexWaitAtAttractor *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f35f4
// Original: _ZNK27CTaskComplexWaitAtAttractor5CloneEv
// Demangled: CTaskComplexWaitAtAttractor::Clone(void)
int __fastcall CTaskComplexWaitAtAttractor::Clone(CTaskComplexWaitAtAttractor *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *(_QWORD *)(result + 12) = v4;
  *(_DWORD *)result = &off_66A13C;
  return result;
}


// ============================================================

// Address: 0x4f361c
// Original: _ZNK27CTaskComplexWaitAtAttractor11GetTaskTypeEv
// Demangled: CTaskComplexWaitAtAttractor::GetTaskType(void)
int __fastcall CTaskComplexWaitAtAttractor::GetTaskType(CTaskComplexWaitAtAttractor *this)
{
  return 234;
}


// ============================================================
