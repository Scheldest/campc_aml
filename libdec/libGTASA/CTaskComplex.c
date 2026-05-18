
// Address: 0x18edec
// Original: j__ZN12CTaskComplexD2Ev
// Demangled: CTaskComplex::~CTaskComplex()
// attributes: thunk
void __fastcall CTaskComplex::~CTaskComplex(CTaskComplex *this)
{
  _ZN12CTaskComplexD2Ev(this);
}


// ============================================================

// Address: 0x199e90
// Original: j__ZN12CTaskComplexC2Ev
// Demangled: CTaskComplex::CTaskComplex(void)
// attributes: thunk
void __fastcall CTaskComplex::CTaskComplex(CTaskComplex *this)
{
  _ZN12CTaskComplexC2Ev(this);
}


// ============================================================

// Address: 0x333db4
// Original: _ZNK12CTaskComplex10GetSubTaskEv
// Demangled: CTaskComplex::GetSubTask(void)
int __fastcall CTaskComplex::GetSubTask(CTaskComplex *this)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x333db8
// Original: _ZNK12CTaskComplex12IsSimpleTaskEv
// Demangled: CTaskComplex::IsSimpleTask(void)
int __fastcall CTaskComplex::IsSimpleTask(CTaskComplex *this)
{
  return 0;
}


// ============================================================

// Address: 0x35f5ee
// Original: _ZN12CTaskComplex13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplex::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplex::MakeAbortable(CTaskComplex *this, CPed *a2, int a3, const CEvent *a4)
{
  return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4d6aa0
// Original: _ZN12CTaskComplexC2Ev
// Demangled: CTaskComplex::CTaskComplex(void)
void __fastcall CTaskComplex::CTaskComplex(CTaskComplex *this)
{
  *(_DWORD *)this = &off_66945C;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x4d6ab8
// Original: _ZN12CTaskComplexD2Ev
// Demangled: CTaskComplex::~CTaskComplex()
void __fastcall CTaskComplex::~CTaskComplex(CTaskComplex *this)
{
  int v2; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66945C;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x4d6ae0
// Original: _ZN12CTaskComplexD0Ev
// Demangled: CTaskComplex::~CTaskComplex()
void __fastcall __noreturn CTaskComplex::~CTaskComplex(CTaskComplex *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x4d6ae2
// Original: _ZN12CTaskComplex10SetSubTaskEP5CTask
// Demangled: CTaskComplex::SetSubTask(CTask *)
CTask *__fastcall CTaskComplex::SetSubTask(CTaskComplex *this, CTask *a2)
{
  CTask *result; // r0

  result = (CTask *)*((_DWORD *)this + 2);
  if ( result != a2 )
  {
    if ( result )
      result = (CTask *)(*(int (__fastcall **)(CTask *))(*(_DWORD *)result + 4))(result);
    *((_DWORD *)this + 2) = a2;
    if ( a2 )
      *((_DWORD *)a2 + 1) = this;
  }
  return result;
}


// ============================================================
