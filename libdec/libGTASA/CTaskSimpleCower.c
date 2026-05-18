
// Address: 0x357644
// Original: _ZN16CTaskSimpleCowerD0Ev
// Demangled: CTaskSimpleCower::~CTaskSimpleCower()
void __fastcall CTaskSimpleCower::~CTaskSimpleCower(CTaskSimpleCower *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x357654
// Original: _ZNK16CTaskSimpleCower5CloneEv
// Demangled: CTaskSimpleCower::Clone(void)
_DWORD *__fastcall CTaskSimpleCower::Clone(CTaskSimpleCower *this, unsigned int a2)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = CTask::operator new((CTask *)&dword_20, a2);
  result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v2, 0, 143, 1082130432, 412, (int)"Cower", 0);
  *result = &off_6657C8;
  return result;
}


// ============================================================

// Address: 0x357698
// Original: _ZN16CTaskSimpleCower9SerializeEv
// Demangled: CTaskSimpleCower::Serialize(void)
int __fastcall CTaskSimpleCower::Serialize(CTaskSimpleCower *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleCower *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleCower *))(*(_DWORD *)this + 20))(this);
  if ( result != 412 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleCower *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(412, v6);
  }
  return result;
}


// ============================================================

// Address: 0x357704
// Original: _ZNK16CTaskSimpleCower15IsInterruptableEPK4CPed
// Demangled: CTaskSimpleCower::IsInterruptable(CPed const*)
int __fastcall CTaskSimpleCower::IsInterruptable(CTaskSimpleCower *this, const CPed *a2)
{
  return 0;
}


// ============================================================
