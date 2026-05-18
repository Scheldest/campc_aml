
// Address: 0x3578d0
// Original: _ZN22CTaskSimpleScratchHeadD0Ev
// Demangled: CTaskSimpleScratchHead::~CTaskSimpleScratchHead()
void __fastcall CTaskSimpleScratchHead::~CTaskSimpleScratchHead(CTaskSimpleScratchHead *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x3578e0
// Original: _ZNK22CTaskSimpleScratchHead5CloneEv
// Demangled: CTaskSimpleScratchHead::Clone(void)
_DWORD *__fastcall CTaskSimpleScratchHead::Clone(CTaskSimpleScratchHead *this, unsigned int a2)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = CTask::operator new((CTask *)&dword_20, a2);
  result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v2, 0, 135, 1082130432, 421, (int)"ScratchHead", 0);
  *result = &off_665870;
  return result;
}


// ============================================================

// Address: 0x357920
// Original: _ZN22CTaskSimpleScratchHead9SerializeEv
// Demangled: CTaskSimpleScratchHead::Serialize(void)
int __fastcall CTaskSimpleScratchHead::Serialize(CTaskSimpleScratchHead *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleScratchHead *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleScratchHead *))(*(_DWORD *)this + 20))(this);
  if ( result != 421 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleScratchHead *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(421, v6);
  }
  return result;
}


// ============================================================

// Address: 0x357990
// Original: _ZNK22CTaskSimpleScratchHead15IsInterruptableEPK4CPed
// Demangled: CTaskSimpleScratchHead::IsInterruptable(CPed const*)
int __fastcall CTaskSimpleScratchHead::IsInterruptable(CTaskSimpleScratchHead *this, const CPed *a2)
{
  return 0;
}


// ============================================================
