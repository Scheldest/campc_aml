
// Address: 0x498088
// Original: _ZN19CTaskSimpleDetonateD0Ev
// Demangled: CTaskSimpleDetonate::~CTaskSimpleDetonate()
void __fastcall CTaskSimpleDetonate::~CTaskSimpleDetonate(CTaskSimpleDetonate *this)
{
  void *v1; // r0

  CTaskSimpleAnim::~CTaskSimpleAnim(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x498098
// Original: _ZNK19CTaskSimpleDetonate5CloneEv
// Demangled: CTaskSimpleDetonate::Clone(void)
_DWORD *__fastcall CTaskSimpleDetonate::Clone(CTaskSimpleDetonate *this, unsigned int a2)
{
  int v3; // r0
  _DWORD *result; // r0

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  result = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                       v3,
                       0,
                       48,
                       1082130432,
                       -4.0,
                       *((_DWORD *)this + 8),
                       419,
                       (int)"Detonate",
                       0);
  *result = &off_6688C0;
  return result;
}


// ============================================================

// Address: 0x4980e8
// Original: _ZN19CTaskSimpleDetonate9SerializeEv
// Demangled: CTaskSimpleDetonate::Serialize(void)
void __fastcall CTaskSimpleDetonate::Serialize(CTaskSimpleDetonate *this)
{
  int v2; // r8
  char v3; // r5
  __int16 v4; // r2
  __int16 v5; // r10
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CGenericGameStorage *v8; // r6
  int v9; // r2
  char v10; // r6
  __int16 v11; // r2
  __int16 v12; // r9
  CGenericGameStorage *v13; // r5
  int v14; // r2
  CGenericGameStorage *v15; // r5
  int v16; // r2
  int v17; // r0
  _BYTE v18[128]; // [sp+4h] [bp-9Ch] BYREF

  v2 = (*(int (__fastcall **)(CTaskSimpleDetonate *))(*(_DWORD *)this + 20))(this);
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
  if ( (*(int (__fastcall **)(CTaskSimpleDetonate *))(*(_DWORD *)this + 20))(this) == 419 )
  {
    v10 = UseDataFence;
    if ( UseDataFence )
    {
      v11 = currentSaveFenceCount;
      UseDataFence = 0;
      ++currentSaveFenceCount;
      v12 = v11 + DataFence;
      v13 = (CGenericGameStorage *)malloc(2u);
      *(_WORD *)v13 = v12;
      CGenericGameStorage::_SaveDataToWorkBuffer(v13, (char *)&stderr + 2, v14);
      free(v13);
      UseDataFence = v10;
    }
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = *((_DWORD *)this + 8);
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
    j_free(v15);
  }
  else
  {
    v17 = (*(int (__fastcall **)(CTaskSimpleDetonate *))(*(_DWORD *)this + 20))(this);
    sub_5E6BC0(v18, "ERROR - class %d is not type %d serialize is not this class expected", v17, 419);
  }
}


// ============================================================

// Address: 0x498264
// Original: _ZNK19CTaskSimpleDetonate15IsInterruptableEPK4CPed
// Demangled: CTaskSimpleDetonate::IsInterruptable(CPed const*)
int __fastcall CTaskSimpleDetonate::IsInterruptable(CTaskSimpleDetonate *this, const CPed *a2)
{
  return 0;
}


// ============================================================
