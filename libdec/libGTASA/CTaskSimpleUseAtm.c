
// Address: 0x357810
// Original: _ZN17CTaskSimpleUseAtmD0Ev
// Demangled: CTaskSimpleUseAtm::~CTaskSimpleUseAtm()
void __fastcall CTaskSimpleUseAtm::~CTaskSimpleUseAtm(CTaskSimpleUseAtm *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x357820
// Original: _ZNK17CTaskSimpleUseAtm5CloneEv
// Demangled: CTaskSimpleUseAtm::Clone(void)
_DWORD *__fastcall CTaskSimpleUseAtm::Clone(CTaskSimpleUseAtm *this, unsigned int a2)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = CTask::operator new((CTask *)&dword_20, a2);
  result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v2, 0, 151, 1082130432, 420, (int)"UseAtm", 0);
  *result = &off_665838;
  return result;
}


// ============================================================

// Address: 0x357860
// Original: _ZN17CTaskSimpleUseAtm9SerializeEv
// Demangled: CTaskSimpleUseAtm::Serialize(void)
int __fastcall CTaskSimpleUseAtm::Serialize(CTaskSimpleUseAtm *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleUseAtm *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleUseAtm *))(*(_DWORD *)this + 20))(this);
  if ( result != 420 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleUseAtm *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(420, v6);
  }
  return result;
}


// ============================================================

// Address: 0x3578cc
// Original: _ZNK17CTaskSimpleUseAtm15IsInterruptableEPK4CPed
// Demangled: CTaskSimpleUseAtm::IsInterruptable(CPed const*)
int __fastcall CTaskSimpleUseAtm::IsInterruptable(CTaskSimpleUseAtm *this, const CPed *a2)
{
  return 0;
}


// ============================================================
