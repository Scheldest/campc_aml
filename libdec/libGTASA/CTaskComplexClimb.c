
// Address: 0x333d84
// Original: _ZN17CTaskComplexClimbD0Ev
// Demangled: CTaskComplexClimb::~CTaskComplexClimb()
void __fastcall CTaskComplexClimb::~CTaskComplexClimb(CTaskComplexClimb *this)
{
  void *v1; // r0

  CTaskComplexJump::~CTaskComplexJump(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x333d94
// Original: _ZNK17CTaskComplexClimb5CloneEv
// Demangled: CTaskComplexClimb::Clone(void)
_DWORD *__fastcall CTaskComplexClimb::Clone(CTaskComplexClimb *this, unsigned int a2)
{
  CTaskComplexJump *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplexJump *)CTask::operator new((CTask *)&dword_14, a2);
  CTaskComplexJump::CTaskComplexJump(v2, 1);
  *result = &off_6656A8;
  return result;
}


// ============================================================

// Address: 0x333dbc
// Original: _ZNK17CTaskComplexClimb11GetTaskTypeEv
// Demangled: CTaskComplexClimb::GetTaskType(void)
int __fastcall CTaskComplexClimb::GetTaskType(CTaskComplexClimb *this)
{
  return 267;
}


// ============================================================

// Address: 0x333dc4
// Original: _ZN17CTaskComplexClimb9SerializeEv
// Demangled: CTaskComplexClimb::Serialize(void)
int __fastcall CTaskComplexClimb::Serialize(CTaskComplexClimb *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexClimb *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexClimb *))(*(_DWORD *)this + 20))(this);
  if ( result != 267 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexClimb *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(267, v6);
  }
  return result;
}


// ============================================================
