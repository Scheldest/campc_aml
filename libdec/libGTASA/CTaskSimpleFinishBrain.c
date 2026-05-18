
// Address: 0x32ec02
// Original: _ZN22CTaskSimpleFinishBrainD0Ev
// Demangled: CTaskSimpleFinishBrain::~CTaskSimpleFinishBrain()
void __fastcall CTaskSimpleFinishBrain::~CTaskSimpleFinishBrain(CTaskSimpleFinishBrain *this)
{
  void *v1; // r0

  CTask::~CTask(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x32ec14
// Original: _ZNK22CTaskSimpleFinishBrain5CloneEv
// Demangled: CTaskSimpleFinishBrain::Clone(void)
_DWORD *__fastcall CTaskSimpleFinishBrain::Clone(CTaskSimpleFinishBrain *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  _DWORD *result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, a2);
  CTaskSimple::CTaskSimple(v2);
  *result = &off_665674;
  return result;
}


// ============================================================

// Address: 0x32ec34
// Original: _ZNK22CTaskSimpleFinishBrain11GetTaskTypeEv
// Demangled: CTaskSimpleFinishBrain::GetTaskType(void)
int __fastcall CTaskSimpleFinishBrain::GetTaskType(CTaskSimpleFinishBrain *this)
{
  return 1801;
}


// ============================================================

// Address: 0x32ec40
// Original: _ZN22CTaskSimpleFinishBrain9SerializeEv
// Demangled: CTaskSimpleFinishBrain::Serialize(void)
int __fastcall CTaskSimpleFinishBrain::Serialize(CTaskSimpleFinishBrain *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleFinishBrain *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleFinishBrain *))(*(_DWORD *)this + 20))(this);
  if ( result != 1801 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleFinishBrain *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(1801, v6);
  }
  return result;
}


// ============================================================
