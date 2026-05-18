
// Address: 0x18b8a4
// Original: j__ZN31CTaskComplexEnterCarAsPassenger10CreateTaskEv
// Demangled: CTaskComplexEnterCarAsPassenger::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexEnterCarAsPassenger::CreateTask(CTaskComplexEnterCarAsPassenger *this)
{
  return _ZN31CTaskComplexEnterCarAsPassenger10CreateTaskEv(this);
}


// ============================================================

// Address: 0x18f024
// Original: j__ZN31CTaskComplexEnterCarAsPassengerC2EP8CVehicleib
// Demangled: CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(CVehicle *,int,bool)
// attributes: thunk
void __fastcall CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(
        CTaskComplexEnterCarAsPassenger *this,
        CVehicle *a2,
        int a3,
        bool a4)
{
  _ZN31CTaskComplexEnterCarAsPassengerC2EP8CVehicleib(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19083c
// Original: j__ZN31CTaskComplexEnterCarAsPassengerD2Ev
// Demangled: CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger()
// attributes: thunk
void __fastcall CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger(CEntity **this)
{
  _ZN31CTaskComplexEnterCarAsPassengerD2Ev(this);
}


// ============================================================

// Address: 0x196868
// Original: j__ZN31CTaskComplexEnterCarAsPassengerD2Ev_0
// Demangled: CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger()
// attributes: thunk
void __fastcall CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger(CEntity **this)
{
  _ZN31CTaskComplexEnterCarAsPassengerD2Ev(this);
}


// ============================================================

// Address: 0x492ee8
// Original: _ZN31CTaskComplexEnterCarAsPassenger10CreateTaskEv
// Demangled: CTaskComplexEnterCarAsPassenger::CreateTask(void)
void __fastcall CTaskComplexEnterCarAsPassenger::CreateTask(CTaskComplexEnterCarAsPassenger *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  unsigned int v9; // r1
  CTaskComplexEnterCarAsPassenger *v10; // r0
  bool v11; // r3
  bool v12; // [sp+7h] [bp-21h] BYREF
  int v13; // [sp+8h] [bp-20h] BYREF
  CPools *v14; // [sp+Ch] [bp-1Ch] BYREF
  _BYTE v15[2]; // [sp+12h] [bp-16h] BYREF
  _BYTE v16[2]; // [sp+14h] [bp-14h] BYREF
  _BYTE v17[18]; // [sp+16h] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v15, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, byte_4, a3);
  if ( v14 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v14, (int)v14 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v13, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 1, v7);
  v10 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_50, v9);
  v11 = v12;
  if ( v12 )
    v11 = 1;
  CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v10, Vehicle, v13, v11);
}


// ============================================================

// Address: 0x4f46f4
// Original: _ZN31CTaskComplexEnterCarAsPassengerD2Ev
// Demangled: CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger()
void __fastcall CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  CTaskUtilityLineUpPedWithCar *v4; // r0
  void *v5; // r0

  v3 = this + 3;
  v2 = this[3];
  *this = (CEntity *)&off_66A904;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = this[14];
  if ( v4 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v4);
    operator delete(v5);
  }
  if ( *v3 )
  {
    *((_BYTE *)*v3 + 1161) -= *((_BYTE *)this + 40);
    CVehicle::ClearGettingInFlags(this[3], *((_BYTE *)this + 68));
  }
  sub_18EDE8((CTaskComplex *)this);
}


// ============================================================

// Address: 0x4f6ff4
// Original: _ZN31CTaskComplexEnterCarAsPassengerC2EP8CVehicleib
// Demangled: CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(CVehicle *,int,bool)
void __fastcall CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(
        CTaskComplexEnterCarAsPassenger *this,
        CVehicle *a2,
        int a3,
        bool a4)
{
  char v8; // r1

  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 9) = 6;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_BYTE *)this + 60) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 68) = 0;
  v8 = *((_BYTE *)this + 16);
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 18) = -1082130432;
  *((_BYTE *)this + 16) = v8 & 0xF0 | (8 * a4);
  *(_DWORD *)this = &off_66A904;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *((_DWORD *)this + 7) = a3;
  *(_DWORD *)this = &off_66A984;
}


// ============================================================

// Address: 0x4f7078
// Original: _ZN31CTaskComplexEnterCarAsPassengerD0Ev
// Demangled: CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger()
void __fastcall CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger(CEntity **this)
{
  void *v1; // r0

  CTaskComplexEnterCarAsPassenger::~CTaskComplexEnterCarAsPassenger(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4fd590
// Original: _ZNK31CTaskComplexEnterCarAsPassenger5CloneEv
// Demangled: CTaskComplexEnterCarAsPassenger::Clone(void)
int __fastcall CTaskComplexEnterCarAsPassenger::Clone(CTaskComplexEnterCarAsPassenger *this, unsigned int a2)
{
  int v3; // r5
  int v4; // r8
  CEntity *v5; // r6
  char v6; // r9
  char v7; // r1

  v3 = CTask::operator new((CTask *)&dword_50, a2);
  v4 = *((_DWORD *)this + 7);
  v5 = (CEntity *)*((_DWORD *)this + 3);
  v6 = *((_BYTE *)this + 16);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 20) = 0LL;
  *(_QWORD *)(v3 + 28) = 0LL;
  *(_DWORD *)(v3 + 36) = 6;
  *(_WORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  *(_BYTE *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_BYTE *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = -1082130432;
  v7 = *(_BYTE *)(v3 + 16);
  *(_DWORD *)v3 = &off_66A904;
  *(_BYTE *)(v3 + 16) = v6 & 8 | v7 & 0xF0;
  *(_DWORD *)(v3 + 12) = v5;
  if ( v5 )
    CEntity::RegisterReference(v5, (CEntity **)(v3 + 12));
  *(_DWORD *)(v3 + 28) = v4;
  *(_DWORD *)v3 = &off_66A984;
  *(_DWORD *)(v3 + 36) = *((_DWORD *)this + 9);
  return v3;
}


// ============================================================

// Address: 0x4fd62c
// Original: _ZNK31CTaskComplexEnterCarAsPassenger11GetTaskTypeEv
// Demangled: CTaskComplexEnterCarAsPassenger::GetTaskType(void)
int __fastcall CTaskComplexEnterCarAsPassenger::GetTaskType(CTaskComplexEnterCarAsPassenger *this)
{
  return 700;
}


// ============================================================

// Address: 0x4fd634
// Original: _ZN31CTaskComplexEnterCarAsPassenger9SerializeEv
// Demangled: CTaskComplexEnterCarAsPassenger::Serialize(void)
int __fastcall CTaskComplexEnterCarAsPassenger::Serialize(CTaskComplexEnterCarAsPassenger *this)
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
  CGenericGameStorage *v12; // r5
  int v13; // r2
  CGenericGameStorage *v14; // r5
  int v15; // r2
  int v16; // r2
  bool v17[17]; // [sp+7h] [bp-11h] BYREF

  v2 = (*(int (__fastcall **)(CTaskComplexEnterCarAsPassenger *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexEnterCarAsPassenger *))(*(_DWORD *)this + 20))(this) == 700 )
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
      v12 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v12 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v12, byte_4, v13);
      v9 = v12;
    }
    free(v9);
    if ( UseDataFence )
      AddDataFence();
    v14 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v14 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v14, byte_4, v15);
    free(v14);
    v17[0] = (*((_BYTE *)this + 16) & 8) != 0;
    if ( UseDataFence )
      AddDataFence();
    return CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 1, v16);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexEnterCarAsPassenger *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(700, v10);
  }
}


// ============================================================
