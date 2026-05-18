
// Address: 0x18a550
// Original: j__ZN29CTaskComplexOpenPassengerDoor10CreateTaskEv
// Demangled: CTaskComplexOpenPassengerDoor::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexOpenPassengerDoor::CreateTask(CTaskComplexOpenPassengerDoor *this)
{
  return _ZN29CTaskComplexOpenPassengerDoor10CreateTaskEv(this);
}


// ============================================================

// Address: 0x18e2bc
// Original: j__ZN29CTaskComplexOpenPassengerDoorC2EP8CVehiclei
// Demangled: CTaskComplexOpenPassengerDoor::CTaskComplexOpenPassengerDoor(CVehicle *,int)
// attributes: thunk
void __fastcall CTaskComplexOpenPassengerDoor::CTaskComplexOpenPassengerDoor(
        CTaskComplexOpenPassengerDoor *this,
        CVehicle *a2,
        int a3)
{
  _ZN29CTaskComplexOpenPassengerDoorC2EP8CVehiclei(this, a2, a3);
}


// ============================================================

// Address: 0x493fe4
// Original: _ZN29CTaskComplexOpenPassengerDoor10CreateTaskEv
// Demangled: CTaskComplexOpenPassengerDoor::CreateTask(void)
void __fastcall CTaskComplexOpenPassengerDoor::CreateTask(CTaskComplexOpenPassengerDoor *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  unsigned int v7; // r1
  CTaskComplexOpenPassengerDoor *v8; // r0
  int v9; // [sp+4h] [bp-1Ch] BYREF
  CPools *v10; // [sp+8h] [bp-18h] BYREF
  _BYTE v11[2]; // [sp+Ch] [bp-14h] BYREF
  _BYTE v12[18]; // [sp+Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v10, byte_4, a3);
  if ( v10 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v10, (int)v10 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v9, byte_4, v4);
  v8 = (CTaskComplexOpenPassengerDoor *)CTask::operator new((CTask *)&dword_50, v7);
  CTaskComplexOpenPassengerDoor::CTaskComplexOpenPassengerDoor(v8, Vehicle, v9);
}


// ============================================================

// Address: 0x4f7110
// Original: _ZN29CTaskComplexOpenPassengerDoorC2EP8CVehiclei
// Demangled: CTaskComplexOpenPassengerDoor::CTaskComplexOpenPassengerDoor(CVehicle *,int)
void __fastcall CTaskComplexOpenPassengerDoor::CTaskComplexOpenPassengerDoor(
        CTaskComplexOpenPassengerDoor *this,
        CVehicle *a2,
        int a3)
{
  char v6; // r1

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 9) = 6;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 68) = 0;
  v6 = *((_BYTE *)this + 16);
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 18) = -1082130432;
  *((_BYTE *)this + 16) = v6 & 0xF0 | 2;
  *(_DWORD *)this = &off_66A904;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *((_DWORD *)this + 7) = a3;
  *(_DWORD *)this = &off_66AA04;
}


// ============================================================

// Address: 0x4f7190
// Original: _ZN29CTaskComplexOpenPassengerDoorD0Ev
// Demangled: CTaskComplexOpenPassengerDoor::~CTaskComplexOpenPassengerDoor()
void __fastcall CTaskComplexOpenPassengerDoor::~CTaskComplexOpenPassengerDoor(CEntity **this)
{
  void *v1; // r0

  CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4fd8cc
// Original: _ZNK29CTaskComplexOpenPassengerDoor5CloneEv
// Demangled: CTaskComplexOpenPassengerDoor::Clone(void)
int __fastcall CTaskComplexOpenPassengerDoor::Clone(CTaskComplexOpenPassengerDoor *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  int v5; // r8
  char v6; // r2

  v3 = CTask::operator new((CTask *)&dword_50, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_DWORD *)this + 7);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 20) = 0LL;
  *(_QWORD *)(v3 + 28) = 0LL;
  *(_DWORD *)(v3 + 36) = 6;
  *(_WORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_BYTE *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_BYTE *)(v3 + 68) = 0;
  v6 = *(_BYTE *)(v3 + 16);
  *(_DWORD *)(v3 + 72) = -1082130432;
  *(_DWORD *)v3 = &off_66A904;
  *(_BYTE *)(v3 + 16) = v6 & 0xF0 | 2;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  *(_DWORD *)(v3 + 28) = v5;
  *(_DWORD *)v3 = &off_66AA04;
  *(_DWORD *)(v3 + 36) = *((_DWORD *)this + 9);
  return v3;
}


// ============================================================

// Address: 0x4fd960
// Original: _ZNK29CTaskComplexOpenPassengerDoor11GetTaskTypeEv
// Demangled: CTaskComplexOpenPassengerDoor::GetTaskType(void)
int __fastcall CTaskComplexOpenPassengerDoor::GetTaskType(CTaskComplexOpenPassengerDoor *this)
{
  return 728;
}


// ============================================================

// Address: 0x4fd968
// Original: _ZN29CTaskComplexOpenPassengerDoor9SerializeEv
// Demangled: CTaskComplexOpenPassengerDoor::Serialize(void)
void __fastcall CTaskComplexOpenPassengerDoor::Serialize(CTaskComplexOpenPassengerDoor *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexOpenPassengerDoor *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexOpenPassengerDoor *))(*(_DWORD *)this + 20))(this) == 728 )
  {
    v5 = (CVehicle *)*((_DWORD *)this + 3);
    if ( v5 )
    {
      v6 = GettPoolVehicleRef(v5);
      if ( UseDataFence )
        AddDataFence();
      v7 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v7 = v6;
      CGenericGameStorage::_SaveDataToWorkBuffer(v7, byte_4, v8);
      v9 = v7;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v11 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v11 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v11, byte_4, v12);
      v9 = v11;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v13 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v13 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v13, byte_4, v14);
    j_free(v13);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexOpenPassengerDoor *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(728, v10);
  }
}


// ============================================================
