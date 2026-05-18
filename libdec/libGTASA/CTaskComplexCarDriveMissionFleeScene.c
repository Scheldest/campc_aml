
// Address: 0x18d998
// Original: j__ZN36CTaskComplexCarDriveMissionFleeScene10CreateTaskEv
// Demangled: CTaskComplexCarDriveMissionFleeScene::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexCarDriveMissionFleeScene::CreateTask(CTaskComplexCarDriveMissionFleeScene *this)
{
  return _ZN36CTaskComplexCarDriveMissionFleeScene10CreateTaskEv(this);
}


// ============================================================

// Address: 0x384454
// Original: _ZN36CTaskComplexCarDriveMissionFleeSceneD0Ev
// Demangled: CTaskComplexCarDriveMissionFleeScene::~CTaskComplexCarDriveMissionFleeScene()
void __fastcall CTaskComplexCarDriveMissionFleeScene::~CTaskComplexCarDriveMissionFleeScene(
        CTaskComplexCarDriveMissionFleeScene *this)
{
  void *v1; // r0

  CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x384464
// Original: _ZNK36CTaskComplexCarDriveMissionFleeScene5CloneEv
// Demangled: CTaskComplexCarDriveMissionFleeScene::Clone(void)
_DWORD *__fastcall CTaskComplexCarDriveMissionFleeScene::Clone(CVehicle **this, unsigned int a2)
{
  CTaskComplexCarDriveMission *v3; // r0
  _DWORD *result; // r0

  v3 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, a2);
  CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v3, this[3], 0, 1, 2, 40.0);
  *result = &off_667294;
  return result;
}


// ============================================================

// Address: 0x38449c
// Original: _ZNK36CTaskComplexCarDriveMissionFleeScene11GetTaskTypeEv
// Demangled: CTaskComplexCarDriveMissionFleeScene::GetTaskType(void)
int __fastcall CTaskComplexCarDriveMissionFleeScene::GetTaskType(CTaskComplexCarDriveMissionFleeScene *this)
{
  return 726;
}


// ============================================================

// Address: 0x3844a4
// Original: _ZN36CTaskComplexCarDriveMissionFleeScene9SerializeEv
// Demangled: CTaskComplexCarDriveMissionFleeScene::Serialize(void)
void __fastcall CTaskComplexCarDriveMissionFleeScene::Serialize(CTaskComplexCarDriveMissionFleeScene *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r4
  CGenericGameStorage *v7; // r5
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r4
  int v12; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexCarDriveMissionFleeScene *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexCarDriveMissionFleeScene *))(*(_DWORD *)this + 20))(this) == 726 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = GettPoolVehicleRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, &byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, &byte_4, v12);
      v9 = v11;
    }
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexCarDriveMissionFleeScene *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(726, v10);
  }
}


// ============================================================

// Address: 0x493f70
// Original: _ZN36CTaskComplexCarDriveMissionFleeScene10CreateTaskEv
// Demangled: CTaskComplexCarDriveMissionFleeScene::CreateTask(void)
_DWORD *__fastcall CTaskComplexCarDriveMissionFleeScene::CreateTask(
        CTaskComplexCarDriveMissionFleeScene *this,
        int a2,
        int a3)
{
  char v3; // r4
  char *v4; // r1
  CVehicle *Vehicle; // r4
  CTaskComplexCarDriveMission *v6; // r0
  _DWORD *result; // r0
  CPools *v8; // [sp+8h] [bp-10h] BYREF
  _BYTE v9[10]; // [sp+Eh] [bp-Ah] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v9, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v8, byte_4, a3);
  v4 = (char *)v8 + 1;
  if ( v8 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v8, (int)v4);
  v6 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, (unsigned int)v4);
  CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v6, Vehicle, 0, 1, 2, 40.0);
  *result = &off_667294;
  return result;
}


// ============================================================
