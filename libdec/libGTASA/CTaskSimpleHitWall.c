
// Address: 0x497c40
// Original: _ZN18CTaskSimpleHitWallD0Ev
// Demangled: CTaskSimpleHitWall::~CTaskSimpleHitWall()
void __fastcall CTaskSimpleHitWall::~CTaskSimpleHitWall(CTaskSimpleHitWall *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x497c50
// Original: _ZNK18CTaskSimpleHitWall5CloneEv
// Demangled: CTaskSimpleHitWall::Clone(void)
_DWORD *__fastcall CTaskSimpleHitWall::Clone(CTaskSimpleHitWall *this, unsigned int a2)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = CTask::operator new((CTask *)&dword_20, a2);
  result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v2, 0, 38, 1082130432, 411, (int)"HitWall", 0);
  *result = &off_668818;
  return result;
}


// ============================================================

// Address: 0x497c90
// Original: _ZN18CTaskSimpleHitWall9SerializeEv
// Demangled: CTaskSimpleHitWall::Serialize(void)
int __fastcall CTaskSimpleHitWall::Serialize(CTaskSimpleHitWall *this)
{
  int v2; // r8
  char v3; // r5
  __int16 v4; // r2
  __int16 v5; // r10
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CGenericGameStorage *v8; // r6
  int v9; // r2
  int v10; // r0
  _BYTE v12[128]; // [sp+4h] [bp-9Ch] BYREF
  int v13; // [sp+84h] [bp-1Ch]

  v2 = (*(int (__fastcall **)(CTaskSimpleHitWall *))(*(_DWORD *)this + 20))(this);
  v3 = UseDataFence;
  if ( UseDataFence )
  {
    v4 = currentSaveFenceCount;
    UseDataFence = 0;
    ++currentSaveFenceCount;
    v5 = v4 + DataFence;
    v6 = (CGenericGameStorage *)malloc(2u);
    *(_WORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, (char *)&stderr + 2, v7);
    free(v6);
    UseDataFence = v3;
  }
  v8 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v8 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
  free(v8);
  if ( (*(int (__fastcall **)(CTaskSimpleHitWall *))(*(_DWORD *)this + 20))(this) != 411 )
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleHitWall *))(*(_DWORD *)this + 20))(this);
    sub_5E6BC0(v12, "ERROR - class %d is not type %d serialize is not this class expected", v10, 411);
  }
  return _stack_chk_guard - v13;
}


// ============================================================

// Address: 0x497d74
// Original: _ZNK18CTaskSimpleHitWall15IsInterruptableEPK4CPed
// Demangled: CTaskSimpleHitWall::IsInterruptable(CPed const*)
int __fastcall CTaskSimpleHitWall::IsInterruptable(CTaskSimpleHitWall *this, const CPed *a2)
{
  return 0;
}


// ============================================================
