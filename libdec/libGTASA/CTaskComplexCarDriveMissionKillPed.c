
// Address: 0x18e2a4
// Original: j__ZN34CTaskComplexCarDriveMissionKillPed10CreateTaskEv
// Demangled: CTaskComplexCarDriveMissionKillPed::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexCarDriveMissionKillPed::CreateTask(CTaskComplexCarDriveMissionKillPed *this)
{
  return _ZN34CTaskComplexCarDriveMissionKillPed10CreateTaskEv(this);
}


// ============================================================

// Address: 0x3846cc
// Original: _ZN34CTaskComplexCarDriveMissionKillPedD0Ev
// Demangled: CTaskComplexCarDriveMissionKillPed::~CTaskComplexCarDriveMissionKillPed()
void __fastcall CTaskComplexCarDriveMissionKillPed::~CTaskComplexCarDriveMissionKillPed(
        CTaskComplexCarDriveMissionKillPed *this)
{
  void *v1; // r0

  CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x3846dc
// Original: _ZNK34CTaskComplexCarDriveMissionKillPed5CloneEv
// Demangled: CTaskComplexCarDriveMissionKillPed::Clone(void)
_DWORD *__fastcall CTaskComplexCarDriveMissionKillPed::Clone(CVehicle **this, unsigned int a2)
{
  CTaskComplexCarDriveMission *v3; // r0
  _DWORD *result; // r0

  v3 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, a2);
  CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v3, this[3], this[9], 54, 3, 40.0);
  *result = &off_667354;
  return result;
}


// ============================================================

// Address: 0x384714
// Original: _ZNK34CTaskComplexCarDriveMissionKillPed11GetTaskTypeEv
// Demangled: CTaskComplexCarDriveMissionKillPed::GetTaskType(void)
int __fastcall CTaskComplexCarDriveMissionKillPed::GetTaskType(CTaskComplexCarDriveMissionKillPed *this)
{
  return 729;
}


// ============================================================

// Address: 0x38471c
// Original: _ZN34CTaskComplexCarDriveMissionKillPed9SerializeEv
// Demangled: CTaskComplexCarDriveMissionKillPed::Serialize(void)
void __fastcall CTaskComplexCarDriveMissionKillPed::Serialize(CTaskComplexCarDriveMissionKillPed *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  CVehicle *v5; // r0
  int v6; // r5
  CGenericGameStorage *v7; // r6
  int v8; // r2
  CGenericGameStorage *v9; // r0
  int v10; // r0
  CGenericGameStorage *v11; // r5
  int v12; // r2
  int v13; // r0
  int v14; // r6
  CGenericGameStorage *v15; // r5
  int v16; // r2
  CVehicle *v17; // r0
  int v18; // r1
  int v19; // r4
  CGenericGameStorage *v20; // r4
  int v21; // r2
  CGenericGameStorage *v22; // r5
  int v23; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexCarDriveMissionKillPed *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexCarDriveMissionKillPed *))(*(_DWORD *)this + 20))(this) != 729 )
  {
    v10 = (*(int (__fastcall **)(CTaskComplexCarDriveMissionKillPed *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(729, v10);
    return;
  }
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
  free(v9);
  v13 = *((_DWORD *)this + 9);
  if ( v13 )
  {
    v14 = *(_BYTE *)(v13 + 58) & 7;
    if ( UseDataFence )
      AddDataFence();
    v15 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v15 = v14;
    CGenericGameStorage::_SaveDataToWorkBuffer(v15, &byte_4, v16);
    free(v15);
    v17 = (CVehicle *)*((_DWORD *)this + 9);
    v18 = *((_BYTE *)v17 + 58) & 7;
    switch ( v18 )
    {
      case 2:
        v19 = GettPoolVehicleRef(v17);
        break;
      case 4:
        v19 = GettPoolObjRef(v17);
        break;
      case 3:
        v19 = GettPoolPedRef(v17);
        break;
      default:
        return;
    }
    if ( UseDataFence )
      AddDataFence();
    v22 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v22 = v19;
    CGenericGameStorage::_SaveDataToWorkBuffer(v22, &byte_4, v23);
    j_free(v22);
  }
  else
  {
    if ( UseDataFence )
      AddDataFence();
    v20 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v20 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v20, &byte_4, v21);
    j_free(v20);
  }
}


// ============================================================

// Address: 0x494074
// Original: _ZN34CTaskComplexCarDriveMissionKillPed10CreateTaskEv
// Demangled: CTaskComplexCarDriveMissionKillPed::CreateTask(void)
_DWORD *__fastcall CTaskComplexCarDriveMissionKillPed::CreateTask(
        CTaskComplexCarDriveMissionKillPed *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  char *v7; // r1
  int v8; // r2
  char v9; // r5
  int Object; // r0
  char v11; // r5
  char v12; // r5
  CEntity *v13; // r5
  CTaskComplexCarDriveMission *v14; // r0
  _DWORD *result; // r0
  CPools *v16; // [sp+Ch] [bp-1Ch] BYREF
  int v17; // [sp+10h] [bp-18h] BYREF
  CPools *v18[5]; // [sp+14h] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v18, byte_4, a3);
  if ( v18[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v18[0], (int)v18[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, byte_4, v4);
  if ( v17 == 2 )
  {
    v11 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v8);
      UseDataFence = v11;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v8);
    v7 = (char *)v16 + 1;
    if ( v16 != (CPools *)-1 )
    {
      Object = CPools::GetVehicle(v16, (int)v7);
      goto LABEL_23;
    }
LABEL_24:
    v13 = 0;
    goto LABEL_25;
  }
  if ( v17 == 4 )
  {
    v12 = UseDataFence;
    if ( UseDataFence )
    {
      UseDataFence = 0;
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v8);
      UseDataFence = v12;
    }
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v8);
    v7 = (char *)v16 + 1;
    if ( v16 != (CPools *)-1 )
    {
      Object = CPools::GetObject(v16, (int)v7);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
  if ( v17 != 3 )
    goto LABEL_24;
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v8);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v8);
  v7 = (char *)v16 + 1;
  if ( v16 == (CPools *)-1 )
    goto LABEL_24;
  Object = CPools::GetPed(v16, (int)v7);
LABEL_23:
  v13 = (CEntity *)Object;
LABEL_25:
  v14 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, (unsigned int)v7);
  CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v14, Vehicle, v13, 54, 3, 40.0);
  *result = &off_667354;
  return result;
}


// ============================================================
