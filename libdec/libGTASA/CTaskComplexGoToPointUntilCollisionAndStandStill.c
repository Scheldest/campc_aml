
// Address: 0x51da40
// Original: _ZN48CTaskComplexGoToPointUntilCollisionAndStandStill13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGoToPointUntilCollisionAndStandStill::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGoToPointUntilCollisionAndStandStill::MakeAbortable(
        CTaskComplexGoToPointUntilCollisionAndStandStill *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  int v5; // r8
  unsigned int v8; // r0
  int v10; // r0
  const CEvent *v11; // r3

  v5 = a3;
  if ( a4 )
  {
    v8 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4);
    if ( v8 <= 6 && ((1 << v8) & 0x62) != 0 || v8 == 60 )
    {
      (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, const CEvent *))(**((_DWORD **)this + 2) + 28))(
        *((_DWORD *)this + 2),
        a2,
        0,
        a4);
      return 0;
    }
    v10 = *((_DWORD *)this + 2);
    a3 = v5;
    v11 = a4;
  }
  else
  {
    v10 = *((_DWORD *)this + 2);
    v11 = 0;
  }
  return (*(int (__fastcall **)(int, CPed *, int, const CEvent *))(*(_DWORD *)v10 + 28))(v10, a2, a3, v11);
}


// ============================================================

// Address: 0x526bd8
// Original: _ZN48CTaskComplexGoToPointUntilCollisionAndStandStillD0Ev
// Demangled: CTaskComplexGoToPointUntilCollisionAndStandStill::~CTaskComplexGoToPointUntilCollisionAndStandStill()
void __fastcall CTaskComplexGoToPointUntilCollisionAndStandStill::~CTaskComplexGoToPointUntilCollisionAndStandStill(
        CTaskComplexGoToPointUntilCollisionAndStandStill *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x526be8
// Original: _ZNK48CTaskComplexGoToPointUntilCollisionAndStandStill5CloneEv
// Demangled: CTaskComplexGoToPointUntilCollisionAndStandStill::Clone(void)
int __fastcall CTaskComplexGoToPointUntilCollisionAndStandStill::Clone(
        CTaskComplexGoToPointUntilCollisionAndStandStill *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  float v4; // s16
  int v5; // r5
  int v6; // r6
  int result; // r0
  char v8; // r2
  float v9; // s0
  __int64 v10; // d16

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *((float *)this + 8);
  v5 = *((_DWORD *)this + 7);
  v6 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v6;
  v8 = *(_BYTE *)(result + 36);
  v9 = *(float *)(result + 16);
  *(_DWORD *)result = &off_66C14C;
  *(_BYTE *)(result + 36) = v8 & 0xE4;
  if ( v9 != *((float *)this + 4)
    || *(float *)(result + 20) != *((float *)this + 5)
    || *(float *)(result + 24) != *((float *)this + 6)
    || *(float *)(result + 32) != v4 )
  {
    v10 = *((_QWORD *)this + 2);
    *(_DWORD *)(result + 24) = *((_DWORD *)this + 6);
    *(_QWORD *)(result + 16) = v10;
    *(float *)(result + 32) = v4;
    *(_DWORD *)(result + 28) = v5;
    *(_BYTE *)(result + 36) = v8 & 0xE0 | 4;
  }
  *(_DWORD *)result = &off_66C560;
  return result;
}


// ============================================================
