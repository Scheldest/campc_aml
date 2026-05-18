
// Address: 0x192260
// Original: j__ZN24CTaskSimpleCarDriveTimed10CreateTaskEv
// Demangled: CTaskSimpleCarDriveTimed::CreateTask(void)
// attributes: thunk
int __fastcall CTaskSimpleCarDriveTimed::CreateTask(CTaskSimpleCarDriveTimed *this)
{
  return _ZN24CTaskSimpleCarDriveTimed10CreateTaskEv(this);
}


// ============================================================

// Address: 0x334c18
// Original: _ZN24CTaskSimpleCarDriveTimedD0Ev
// Demangled: CTaskSimpleCarDriveTimed::~CTaskSimpleCarDriveTimed()
void __fastcall CTaskSimpleCarDriveTimed::~CTaskSimpleCarDriveTimed(CTaskSimpleCarDriveTimed *this)
{
  void *v1; // r0

  CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x334c28
// Original: _ZNK24CTaskSimpleCarDriveTimed5CloneEv
// Demangled: CTaskSimpleCarDriveTimed::Clone(void)
int __fastcall CTaskSimpleCarDriveTimed::Clone(CTaskSimpleCarDriveTimed *this, unsigned int a2)
{
  CTaskSimpleCarDrive *v3; // r0
  CVehicle *v4; // r1
  int v5; // r4
  int result; // r0

  v3 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_70, a2);
  v4 = (CVehicle *)*((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 24);
  CTaskSimpleCarDrive::CTaskSimpleCarDrive(v3, v4, 0, 0);
  *(_DWORD *)(result + 96) = v5;
  *(_WORD *)(result + 108) = 0;
  *(_DWORD *)(result + 100) = 0;
  *(_DWORD *)(result + 104) = 0;
  *(_DWORD *)result = &off_66572C;
  return result;
}


// ============================================================

// Address: 0x334c5c
// Original: _ZNK24CTaskSimpleCarDriveTimed11GetTaskTypeEv
// Demangled: CTaskSimpleCarDriveTimed::GetTaskType(void)
int __fastcall CTaskSimpleCarDriveTimed::GetTaskType(CTaskSimpleCarDriveTimed *this)
{
  return 719;
}


// ============================================================

// Address: 0x334c64
// Original: _ZN24CTaskSimpleCarDriveTimed9SerializeEv
// Demangled: CTaskSimpleCarDriveTimed::Serialize(void)
void __fastcall CTaskSimpleCarDriveTimed::Serialize(CTaskSimpleCarDriveTimed *this)
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
  CGenericGameStorage *v13; // r5
  int v14; // r2

  v2 = (*(int (__fastcall **)(CTaskSimpleCarDriveTimed *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, &byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskSimpleCarDriveTimed *))(*(_DWORD *)this + 20))(this) == 719 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 2);
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
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 24);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, &byte_4, v14);
    j_free(v13);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskSimpleCarDriveTimed *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(719, v10);
  }
}


// ============================================================

// Address: 0x334d64
// Original: _ZN24CTaskSimpleCarDriveTimed10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarDriveTimed::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarDriveTimed::ProcessPed(CTaskSimpleCarDriveTimed *this, CPed *a2)
{
  __int64 v2; // r2
  unsigned int v3; // r2
  unsigned int v4; // r12

  if ( !*((_BYTE *)this + 108) )
  {
    HIDWORD(v2) = *((_DWORD *)this + 24);
    LODWORD(v2) = CTimer::m_snTimeInMilliseconds;
    *(_QWORD *)((char *)this + 100) = v2;
    *((_BYTE *)this + 108) = 1;
  }
  if ( *((_BYTE *)this + 109) )
  {
    v3 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 109) = 0;
    *((_DWORD *)this + 25) = v3;
    v4 = v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 25);
    v3 = CTimer::m_snTimeInMilliseconds;
  }
  if ( *((_DWORD *)this + 26) + v4 <= v3 )
    return 1;
  else
    return sub_194F6C(this, a2);
}


// ============================================================

// Address: 0x493a00
// Original: _ZN24CTaskSimpleCarDriveTimed10CreateTaskEv
// Demangled: CTaskSimpleCarDriveTimed::CreateTask(void)
int __fastcall CTaskSimpleCarDriveTimed::CreateTask(CTaskSimpleCarDriveTimed *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskSimpleCarDrive *v8; // r0
  int v9; // r5
  int result; // r0
  int v11; // [sp+4h] [bp-1Ch] BYREF
  CPools *v12; // [sp+8h] [bp-18h] BYREF
  _BYTE v13[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v14[18]; // [sp+Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, a3);
  if ( v12 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v12, (int)v12 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v14, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v11, byte_4, v4);
  v8 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_70, v7);
  v9 = v11;
  CTaskSimpleCarDrive::CTaskSimpleCarDrive(v8, Vehicle, 0, 0);
  *(_DWORD *)(result + 96) = v9;
  *(_DWORD *)result = &off_66572C;
  *(_WORD *)(result + 108) = 0;
  *(_DWORD *)(result + 100) = 0;
  *(_DWORD *)(result + 104) = 0;
  return result;
}


// ============================================================
