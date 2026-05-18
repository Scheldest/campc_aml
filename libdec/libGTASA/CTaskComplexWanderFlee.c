
// Address: 0x512888
// Original: _ZN22CTaskComplexWanderFleeC2Eih
// Demangled: CTaskComplexWanderFlee::CTaskComplexWanderFlee(int,uchar)
void __fastcall CTaskComplexWanderFlee::CTaskComplexWanderFlee(
        CTaskComplexWanderFlee *this,
        int a2,
        unsigned __int8 a3)
{
  _DWORD *v3; // r0

  CTaskComplexWander::CTaskComplexWander(this, a2, a3, 0, 0.5);
  *v3 = &off_66BBC8;
}


// ============================================================

// Address: 0x5128b8
// Original: _ZN22CTaskComplexWanderFleeD2Ev
// Demangled: CTaskComplexWanderFlee::~CTaskComplexWanderFlee()
// attributes: thunk
void __fastcall CTaskComplexWanderFlee::~CTaskComplexWanderFlee(CTaskComplexWanderFlee *this)
{
  j_CTaskComplexWander::~CTaskComplexWander(this);
}


// ============================================================

// Address: 0x5128bc
// Original: _ZN22CTaskComplexWanderFleeD0Ev
// Demangled: CTaskComplexWanderFlee::~CTaskComplexWanderFlee()
void __fastcall CTaskComplexWanderFlee::~CTaskComplexWanderFlee(CTaskComplexWanderFlee *this)
{
  void *v1; // r0

  CTaskComplexWander::~CTaskComplexWander(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5128cc
// Original: _ZN22CTaskComplexWanderFlee14ControlSubTaskEP4CPed
// Demangled: CTaskComplexWanderFlee::ControlSubTask(CPed *)
// attributes: thunk
int __fastcall CTaskComplexWanderFlee::ControlSubTask(CTaskComplexWander *this, CPed *a2)
{
  return sub_18E4D4(this, a2);
}


// ============================================================

// Address: 0x514b08
// Original: _ZNK22CTaskComplexWanderFlee5CloneEv
// Demangled: CTaskComplexWanderFlee::Clone(void)
_DWORD *__fastcall CTaskComplexWanderFlee::Clone(CTaskComplexWanderFlee *this, unsigned int a2)
{
  CTaskComplexWander *v3; // r0
  _DWORD *result; // r0

  v3 = (CTaskComplexWander *)CTask::operator new((CTask *)&word_28, a2);
  CTaskComplexWander::CTaskComplexWander(v3, *((_DWORD *)this + 3), *((_BYTE *)this + 16), 0, 0.5);
  *result = &off_66BBC8;
  return result;
}


// ============================================================

// Address: 0x514b44
// Original: _ZNK22CTaskComplexWanderFlee13GetWanderTypeEv
// Demangled: CTaskComplexWanderFlee::GetWanderType(void)
int __fastcall CTaskComplexWanderFlee::GetWanderType(CTaskComplexWanderFlee *this)
{
  return 6;
}


// ============================================================

// Address: 0x514b48
// Original: _ZN22CTaskComplexWanderFlee12ScanForStuffEP4CPed
// Demangled: CTaskComplexWanderFlee::ScanForStuff(CPed *)
void __fastcall CTaskComplexWanderFlee::ScanForStuff(CTaskComplexWanderFlee *this, CPed *a2)
{
  ;
}


// ============================================================
