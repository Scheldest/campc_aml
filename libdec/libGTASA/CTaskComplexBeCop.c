
// Address: 0x35f544
// Original: _ZN17CTaskComplexBeCopD0Ev
// Demangled: CTaskComplexBeCop::~CTaskComplexBeCop()
void __fastcall CTaskComplexBeCop::~CTaskComplexBeCop(CTaskComplexBeCop *this)
{
  int v2; // r0
  void *v3; // r0

  v2 = *((_DWORD *)this + 10);
  *(_DWORD *)this = &off_66C5E8;
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  CTaskComplexWander::~CTaskComplexWander(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x35f574
// Original: _ZNK17CTaskComplexBeCop5CloneEv
// Demangled: CTaskComplexBeCop::Clone(void)
int __fastcall CTaskComplexBeCop::Clone(CTaskComplexBeCop *this, unsigned int a2)
{
  int v3; // r0
  int v4; // r4
  CTaskComplexWander *v5; // r0
  int result; // r0

  v3 = *((_DWORD *)this + 10);
  if ( v3 )
    v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  else
    v4 = 0;
  v5 = (CTaskComplexWander *)CTask::operator new((CTask *)&dword_50, a2);
  CTaskComplexWander::CTaskComplexWander(v5, *((_DWORD *)this + 3), *((_BYTE *)this + 16), 1, 0.5);
  *(_QWORD *)(result + 56) = 0LL;
  *(_QWORD *)(result + 64) = 0LL;
  *(_DWORD *)(result + 70) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_WORD *)(result + 52) = 0;
  *(_DWORD *)(result + 74) = 0;
  *(_DWORD *)result = &off_66591C;
  *(_DWORD *)(result + 40) = v4;
  return result;
}


// ============================================================

// Address: 0x35f5e8
// Original: _ZNK17CTaskComplexBeCop11GetTaskTypeEv
// Demangled: CTaskComplexBeCop::GetTaskType(void)
int __fastcall CTaskComplexBeCop::GetTaskType(CTaskComplexBeCop *this)
{
  return 1104;
}


// ============================================================
