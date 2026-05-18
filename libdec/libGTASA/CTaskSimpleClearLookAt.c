
// Address: 0x18f2f8
// Original: j__ZN22CTaskSimpleClearLookAtC2Ev
// Demangled: CTaskSimpleClearLookAt::CTaskSimpleClearLookAt(void)
// attributes: thunk
void __fastcall CTaskSimpleClearLookAt::CTaskSimpleClearLookAt(CTaskSimpleClearLookAt *this)
{
  _ZN22CTaskSimpleClearLookAtC2Ev(this);
}


// ============================================================

// Address: 0x4f0998
// Original: _ZN22CTaskSimpleClearLookAtC2Ev
// Demangled: CTaskSimpleClearLookAt::CTaskSimpleClearLookAt(void)
void __fastcall CTaskSimpleClearLookAt::CTaskSimpleClearLookAt(CTaskSimpleClearLookAt *this)
{
  _DWORD *v1; // r0

  CTaskSimple::CTaskSimple(this);
  *v1 = &off_66A57C;
}


// ============================================================

// Address: 0x4f09b0
// Original: _ZN22CTaskSimpleClearLookAtD2Ev
// Demangled: CTaskSimpleClearLookAt::~CTaskSimpleClearLookAt()
// attributes: thunk
void __fastcall CTaskSimpleClearLookAt::~CTaskSimpleClearLookAt(CTaskSimpleClearLookAt *this)
{
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4f09b4
// Original: _ZN22CTaskSimpleClearLookAtD0Ev
// Demangled: CTaskSimpleClearLookAt::~CTaskSimpleClearLookAt()
void __fastcall CTaskSimpleClearLookAt::~CTaskSimpleClearLookAt(CTaskSimpleClearLookAt *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f09c4
// Original: _ZN22CTaskSimpleClearLookAt13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleClearLookAt::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleClearLookAt::MakeAbortable(CTaskSimpleClearLookAt *this, CPed *a2, int a3, const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x4f09c8
// Original: _ZN22CTaskSimpleClearLookAt10ProcessPedEP4CPed
// Demangled: CTaskSimpleClearLookAt::ProcessPed(CPed *)
int __fastcall CTaskSimpleClearLookAt::ProcessPed(CTaskSimpleClearLookAt *this, CPed *a2)
{
  if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
    IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 500);
  return 1;
}


// ============================================================

// Address: 0x4f3e80
// Original: _ZNK22CTaskSimpleClearLookAt5CloneEv
// Demangled: CTaskSimpleClearLookAt::Clone(void)
_DWORD *__fastcall CTaskSimpleClearLookAt::Clone(CTaskSimpleClearLookAt *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, a2);
  CTaskSimple::CTaskSimple(v2);
  *result = &off_66A57C;
  return result;
}


// ============================================================

// Address: 0x4f3ea0
// Original: _ZNK22CTaskSimpleClearLookAt11GetTaskTypeEv
// Demangled: CTaskSimpleClearLookAt::GetTaskType(void)
int __fastcall CTaskSimpleClearLookAt::GetTaskType(CTaskSimpleClearLookAt *this)
{
  return 270;
}


// ============================================================

// Address: 0x4f3ea8
// Original: _ZN22CTaskSimpleClearLookAt9SerializeEv
// Demangled: CTaskSimpleClearLookAt::Serialize(void)
int __fastcall CTaskSimpleClearLookAt::Serialize(CTaskSimpleClearLookAt *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleClearLookAt *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleClearLookAt *))(*(_DWORD *)this + 20))(this);
  if ( result != 270 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleClearLookAt *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(270, v6);
  }
  return result;
}


// ============================================================
