
// Address: 0x194fc4
// Original: j__ZN27CTaskComplexMoveBackAndJumpC2Ev
// Demangled: CTaskComplexMoveBackAndJump::CTaskComplexMoveBackAndJump(void)
// attributes: thunk
void __fastcall CTaskComplexMoveBackAndJump::CTaskComplexMoveBackAndJump(CTaskComplexMoveBackAndJump *this)
{
  _ZN27CTaskComplexMoveBackAndJumpC2Ev(this);
}


// ============================================================

// Address: 0x50e564
// Original: _ZN27CTaskComplexMoveBackAndJumpC2Ev
// Demangled: CTaskComplexMoveBackAndJump::CTaskComplexMoveBackAndJump(void)
void __fastcall CTaskComplexMoveBackAndJump::CTaskComplexMoveBackAndJump(CTaskComplexMoveBackAndJump *this)
{
  _DWORD *v1; // r0

  CTaskComplex::CTaskComplex(this);
  *v1 = &off_66B8AC;
}


// ============================================================

// Address: 0x50e57c
// Original: _ZN27CTaskComplexMoveBackAndJumpD2Ev
// Demangled: CTaskComplexMoveBackAndJump::~CTaskComplexMoveBackAndJump()
// attributes: thunk
void __fastcall CTaskComplexMoveBackAndJump::~CTaskComplexMoveBackAndJump(CTaskComplexMoveBackAndJump *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x50e580
// Original: _ZN27CTaskComplexMoveBackAndJumpD0Ev
// Demangled: CTaskComplexMoveBackAndJump::~CTaskComplexMoveBackAndJump()
void __fastcall CTaskComplexMoveBackAndJump::~CTaskComplexMoveBackAndJump(CTaskComplexMoveBackAndJump *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x50e590
// Original: _ZN27CTaskComplexMoveBackAndJump17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexMoveBackAndJump::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexMoveBackAndJump::CreateNextSubTask(CTaskComplexMoveBackAndJump *this, CPed *a2)
{
  CTaskComplexJump *v2; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 411 )
  {
    v2 = (CTaskComplexJump *)CTask::operator new((CTask *)&dword_14, 0x19Bu);
    CTaskComplexJump::CTaskComplexJump(v2, 0);
  }
}


// ============================================================

// Address: 0x50e5b8
// Original: _ZNK27CTaskComplexMoveBackAndJump13CreateSubTaskEi
// Demangled: CTaskComplexMoveBackAndJump::CreateSubTask(int)
CTaskComplexJump *__fastcall CTaskComplexMoveBackAndJump::CreateSubTask(CTaskComplexMoveBackAndJump *this, int a2)
{
  CTaskComplexJump *v2; // r4
  int v3; // r0

  v2 = 0;
  if ( a2 == 411 )
  {
    v3 = CTask::operator new((CTask *)&dword_20, 0x19Bu);
    v2 = (CTaskComplexJump *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v3, 0, 38, 1082130432, 411, (int)"HitWall", 0);
    *(_DWORD *)v2 = &off_668818;
  }
  else if ( a2 == 211 )
  {
    v2 = (CTaskComplexJump *)CTask::operator new((CTask *)&dword_14, 0xD3u);
    CTaskComplexJump::CTaskComplexJump(v2, 0);
  }
  return v2;
}


// ============================================================

// Address: 0x50e614
// Original: _ZN27CTaskComplexMoveBackAndJump18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexMoveBackAndJump::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexMoveBackAndJump::CreateFirstSubTask(CTaskComplexMoveBackAndJump *this, CPed *a2)
{
  int v2; // r0
  _DWORD *result; // r0

  v2 = CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  result = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v2, 0, 38, 1082130432, 411, (int)"HitWall", 0);
  *result = &off_668818;
  return result;
}


// ============================================================

// Address: 0x50e654
// Original: _ZN27CTaskComplexMoveBackAndJump14ControlSubTaskEP4CPed
// Demangled: CTaskComplexMoveBackAndJump::ControlSubTask(CPed *)
int __fastcall CTaskComplexMoveBackAndJump::ControlSubTask(CTaskComplexMoveBackAndJump *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x50fe44
// Original: _ZNK27CTaskComplexMoveBackAndJump5CloneEv
// Demangled: CTaskComplexMoveBackAndJump::Clone(void)
_DWORD *__fastcall CTaskComplexMoveBackAndJump::Clone(CTaskComplexMoveBackAndJump *this, unsigned int a2)
{
  CTaskComplex *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], a2);
  CTaskComplex::CTaskComplex(v2);
  *result = &off_66B8AC;
  return result;
}


// ============================================================

// Address: 0x50fe64
// Original: _ZNK27CTaskComplexMoveBackAndJump11GetTaskTypeEv
// Demangled: CTaskComplexMoveBackAndJump::GetTaskType(void)
int __fastcall CTaskComplexMoveBackAndJump::GetTaskType(CTaskComplexMoveBackAndJump *this)
{
  return 511;
}


// ============================================================

// Address: 0x50fe6c
// Original: _ZN27CTaskComplexMoveBackAndJump9SerializeEv
// Demangled: CTaskComplexMoveBackAndJump::Serialize(void)
int __fastcall CTaskComplexMoveBackAndJump::Serialize(CTaskComplexMoveBackAndJump *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexMoveBackAndJump *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskComplexMoveBackAndJump *))(*(_DWORD *)this + 20))(this);
  if ( result != 511 )
  {
    v6 = (*(int (__fastcall **)(CTaskComplexMoveBackAndJump *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(511, v6);
  }
  return result;
}


// ============================================================
