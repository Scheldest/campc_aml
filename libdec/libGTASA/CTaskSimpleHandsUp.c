
// Address: 0x357708
// Original: _ZN18CTaskSimpleHandsUpD0Ev
// Demangled: CTaskSimpleHandsUp::~CTaskSimpleHandsUp()
void __fastcall CTaskSimpleHandsUp::~CTaskSimpleHandsUp(CTaskSimpleHandsUp *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x357718
// Original: _ZNK18CTaskSimpleHandsUp5CloneEv
// Demangled: CTaskSimpleHandsUp::Clone(void)
_DWORD *__fastcall CTaskSimpleHandsUp::Clone(CTaskSimpleHandsUp *this, unsigned int a2)
{
  int v3; // r0
  _DWORD *result; // r0

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  result = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                       v3,
                       0,
                       142,
                       1082130432,
                       -4.0,
                       *((_DWORD *)this + 8),
                       413,
                       (int)"HandsUp",
                       0);
  *result = &off_665800;
  return result;
}


// ============================================================

// Address: 0x35776c
// Original: _ZN18CTaskSimpleHandsUp9SerializeEv
// Demangled: CTaskSimpleHandsUp::Serialize(void)
void __fastcall CTaskSimpleHandsUp::Serialize(CTaskSimpleHandsUp *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CGenericGameStorage *v5; // r5
  int v6; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleHandsUp *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleHandsUp *))(*(_DWORD *)this + 20))(this) == 413 )
  {
    if ( UseDataFence )
      AddDataFence();
    v5 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v5 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v5, &byte_4, v6);
    j_free(v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskSimpleHandsUp *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(413, v7);
  }
}


// ============================================================

// Address: 0x35780c
// Original: _ZNK18CTaskSimpleHandsUp15IsInterruptableEPK4CPed
// Demangled: CTaskSimpleHandsUp::IsInterruptable(CPed const*)
int __fastcall CTaskSimpleHandsUp::IsInterruptable(CTaskSimpleHandsUp *this, const CPed *a2)
{
  return 0;
}


// ============================================================
