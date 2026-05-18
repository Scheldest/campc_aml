
// Address: 0x191d68
// Original: j__ZN19CTaskSimpleDieInCar10CreateTaskEv
// Demangled: CTaskSimpleDieInCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleDieInCar::CreateTask(CTaskSimpleDieInCar *this)
{
  return _ZN19CTaskSimpleDieInCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19dcf0
// Original: j__ZN19CTaskSimpleDieInCarC2E12AssocGroupId11AnimationId
// Demangled: CTaskSimpleDieInCar::CTaskSimpleDieInCar(AssocGroupId,AnimationId)
// attributes: thunk
int CTaskSimpleDieInCar::CTaskSimpleDieInCar()
{
  return _ZN19CTaskSimpleDieInCarC2E12AssocGroupId11AnimationId();
}


// ============================================================

// Address: 0x49104c
// Original: _ZN19CTaskSimpleDieInCar10CreateTaskEv
// Demangled: CTaskSimpleDieInCar::CreateTask(void)
int __fastcall CTaskSimpleDieInCar::CreateTask(CTaskSimpleDieInCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  char v5; // r4
  unsigned int v6; // r1
  int v8; // [sp+4h] [bp-14h] BYREF
  int v9; // [sp+8h] [bp-10h] BYREF
  _BYTE v10[2]; // [sp+Ch] [bp-Ch] BYREF
  _BYTE v11[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v10, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, a3);
  v5 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v4);
    UseDataFence = v5;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, v4);
  CTask::operator new((CTask *)&word_28, v6);
  return CTaskSimpleDieInCar::CTaskSimpleDieInCar();
}


// ============================================================

// Address: 0x4ead4c
// Original: _ZN19CTaskSimpleDieInCarD2Ev
// Demangled: CTaskSimpleDieInCar::~CTaskSimpleDieInCar()
void __fastcall CTaskSimpleDieInCar::~CTaskSimpleDieInCar(CTaskSimpleDieInCar *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 9);
  *(_DWORD *)this = &off_669CDC;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4eafa0
// Original: _ZN19CTaskSimpleDieInCarC2E12AssocGroupId11AnimationId
// Demangled: CTaskSimpleDieInCar::CTaskSimpleDieInCar(AssocGroupId,AnimationId)
int __fastcall CTaskSimpleDieInCar::CTaskSimpleDieInCar(CTaskSimple *a1, int a2, int a3)
{
  int result; // r0
  char v6; // r3

  CTaskSimple::CTaskSimple(a1);
  v6 = *(_BYTE *)(result + 32);
  *(_DWORD *)(result + 8) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 1082130432;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_BYTE *)(result + 32) = v6 & 0xFC;
  *(_DWORD *)result = &off_669D10;
  return result;
}


// ============================================================

// Address: 0x4eafe0
// Original: _ZN19CTaskSimpleDieInCarD0Ev
// Demangled: CTaskSimpleDieInCar::~CTaskSimpleDieInCar()
void __fastcall CTaskSimpleDieInCar::~CTaskSimpleDieInCar(CTaskSimpleDieInCar *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 9);
  *(_DWORD *)this = &off_669CDC;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x4eb018
// Original: _ZN19CTaskSimpleDieInCar10ProcessPedEP4CPed
// Demangled: CTaskSimpleDieInCar::ProcessPed(CPed *)
int __fastcall CTaskSimpleDieInCar::ProcessPed(CTaskSimpleDieInCar *this, CPed *a2)
{
  CTaskSimpleDie::ProcessPed(this, a2);
  return 0;
}


// ============================================================

// Address: 0x4f2648
// Original: _ZNK19CTaskSimpleDieInCar5CloneEv
// Demangled: CTaskSimpleDieInCar::Clone(void)
int __fastcall CTaskSimpleDieInCar::Clone(CTaskSimpleDieInCar *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  int result; // r0
  char v6; // r2

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&word_28, a2);
  v4 = *((_QWORD *)this + 1);
  CTaskSimple::CTaskSimple(v3);
  *(_QWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 1082130432;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 36) = 0;
  v6 = *(_BYTE *)(result + 32);
  *(_DWORD *)result = &off_669D10;
  *(_BYTE *)(result + 32) = v6 & 0xFC;
  return result;
}


// ============================================================

// Address: 0x4f268c
// Original: _ZNK19CTaskSimpleDieInCar11GetTaskTypeEv
// Demangled: CTaskSimpleDieInCar::GetTaskType(void)
int __fastcall CTaskSimpleDieInCar::GetTaskType(CTaskSimpleDieInCar *this)
{
  return 214;
}


// ============================================================

// Address: 0x4f2690
// Original: _ZN19CTaskSimpleDieInCar9SerializeEv
// Demangled: CTaskSimpleDieInCar::Serialize(void)
void __fastcall CTaskSimpleDieInCar::Serialize(CTaskSimpleDieInCar *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r6
  CGenericGameStorage *v6; // r5
  int v7; // r2
  int v8; // r5
  CGenericGameStorage *v9; // r4
  int v10; // r2
  int v11; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleDieInCar *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleDieInCar *))(*(_DWORD *)this + 20))(this) == 214 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    v8 = *((_DWORD *)this + 3);
    if ( UseDataFence )
      AddDataFence();
    v9 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v9 = v8;
    CGenericGameStorage::_SaveDataToWorkBuffer(v9, byte_4, v10);
    j_free(v9);
  }
  else
  {
    v11 = (*(int (__fastcall **)(CTaskSimpleDieInCar *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(214, v11);
  }
}


// ============================================================
