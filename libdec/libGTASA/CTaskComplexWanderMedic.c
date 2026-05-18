
// Address: 0x512828
// Original: _ZN23CTaskComplexWanderMedicD0Ev
// Demangled: CTaskComplexWanderMedic::~CTaskComplexWanderMedic()
void __fastcall CTaskComplexWanderMedic::~CTaskComplexWanderMedic(CTaskComplexWanderMedic *this)
{
  void *v1; // r0

  CTaskComplexWander::~CTaskComplexWander(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x512838
// Original: _ZNK23CTaskComplexWanderMedic5CloneEv
// Demangled: CTaskComplexWanderMedic::Clone(void)
_DWORD *__fastcall CTaskComplexWanderMedic::Clone(CTaskComplexWanderMedic *this, unsigned int a2)
{
  CTaskComplexWander *v3; // r0
  _DWORD *result; // r0

  v3 = (CTaskComplexWander *)CTask::operator new((CTask *)&word_28, a2);
  CTaskComplexWander::CTaskComplexWander(
    v3,
    *((_DWORD *)this + 3),
    *((_BYTE *)this + 16),
    *((_BYTE *)this + 36) & 1,
    0.5);
  *result = &off_66BB7C;
  return result;
}


// ============================================================

// Address: 0x512882
// Original: _ZNK23CTaskComplexWanderMedic13GetWanderTypeEv
// Demangled: CTaskComplexWanderMedic::GetWanderType(void)
int __fastcall CTaskComplexWanderMedic::GetWanderType(CTaskComplexWanderMedic *this)
{
  return 2;
}


// ============================================================

// Address: 0x512886
// Original: _ZN23CTaskComplexWanderMedic12ScanForStuffEP4CPed
// Demangled: CTaskComplexWanderMedic::ScanForStuff(CPed *)
void __fastcall CTaskComplexWanderMedic::ScanForStuff(CTaskComplexWanderMedic *this, CPed *a2)
{
  ;
}


// ============================================================
