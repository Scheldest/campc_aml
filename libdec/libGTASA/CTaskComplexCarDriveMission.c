
// Address: 0x193ce8
// Original: j__ZN27CTaskComplexCarDriveMission10CreateTaskEv
// Demangled: CTaskComplexCarDriveMission::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexCarDriveMission::CreateTask(CTaskComplexCarDriveMission *this)
{
  return _ZN27CTaskComplexCarDriveMission10CreateTaskEv(this);
}


// ============================================================

// Address: 0x194530
// Original: j__ZN27CTaskComplexCarDriveMissionD2Ev
// Demangled: CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission()
// attributes: thunk
void __fastcall CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission(CTaskComplexCarDriveMission *this)
{
  _ZN27CTaskComplexCarDriveMissionD2Ev(this);
}


// ============================================================

// Address: 0x19e89c
// Original: j__ZN27CTaskComplexCarDriveMissionC2EP8CVehicleP7CEntityiif
// Demangled: CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(CVehicle *,CEntity *,int,int,float)
// attributes: thunk
void __fastcall CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
        CTaskComplexCarDriveMission *this,
        CVehicle *a2,
        CEntity *a3,
        int a4,
        int a5,
        float a6)
{
  _ZN27CTaskComplexCarDriveMissionC2EP8CVehicleP7CEntityiif(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19f2a0
// Original: j__ZN27CTaskComplexCarDriveMissionC2EP8CVehicleP7CEntityiif_0
// Demangled: CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(CVehicle *,CEntity *,int,int,float)
// attributes: thunk
void __fastcall CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
        CTaskComplexCarDriveMission *this,
        CVehicle *a2,
        CEntity *a3,
        int a4,
        int a5,
        float a6)
{
  _ZN27CTaskComplexCarDriveMissionC2EP8CVehicleP7CEntityiif(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x493cf4
// Original: _ZN27CTaskComplexCarDriveMission10CreateTaskEv
// Demangled: CTaskComplexCarDriveMission::CreateTask(void)
void __fastcall CTaskComplexCarDriveMission::CreateTask(CTaskComplexCarDriveMission *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r8
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int Object; // r0
  char v10; // r5
  char v11; // r5
  CEntity *v12; // r5
  char v13; // r6
  unsigned int v14; // r1
  CTaskComplexCarDriveMission *v15; // r0
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
  switch ( v17 )
  {
    case 2:
      v10 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v7);
        UseDataFence = v10;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v7);
      if ( v16 != (CPools *)-1 )
      {
        Object = CPools::GetVehicle(v16, (int)v16 + 1);
        goto LABEL_23;
      }
      break;
    case 4:
      v11 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v7);
        UseDataFence = v11;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v7);
      if ( v16 != (CPools *)-1 )
      {
        Object = CPools::GetObject(v16, (int)v16 + 1);
        goto LABEL_23;
      }
      break;
    case 3:
      v8 = UseDataFence;
      if ( UseDataFence )
      {
        UseDataFence = 0;
        CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v7);
        UseDataFence = v8;
      }
      CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v7);
      if ( v16 != (CPools *)-1 )
      {
        Object = CPools::GetPed(v16, (int)v16 + 1);
LABEL_23:
        v12 = (CEntity *)Object;
        goto LABEL_25;
      }
      break;
  }
  v12 = 0;
LABEL_25:
  v13 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v7);
    UseDataFence = v13;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v7);
  v15 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v14);
  CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v15, Vehicle, v12, (int)v16, 0, 10.0);
}


// ============================================================

// Address: 0x4fc10c
// Original: _ZN27CTaskComplexCarDriveMissionC2EP8CVehicleP7CEntityiif
// Demangled: CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(CVehicle *,CEntity *,int,int,float)
void __fastcall CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
        CTaskComplexCarDriveMission *this,
        CVehicle *a2,
        CEntity *a3,
        int a4,
        int a5,
        float a6)
{
  CTaskComplex::CTaskComplex(this);
  *((float *)this + 4) = a6;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 6) = a5;
  *((_BYTE *)this + 28) = 1;
  *((_BYTE *)this + 32) = 0;
  *(_DWORD *)this = &off_66AD4C;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *((_DWORD *)this + 10) = a4;
  *(_DWORD *)this = &off_66ADDC;
  *((_DWORD *)this + 9) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 9);
}


// ============================================================

// Address: 0x4fc18c
// Original: _ZN27CTaskComplexCarDriveMissionD0Ev
// Demangled: CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission()
void __fastcall CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission(CTaskComplexCarDriveMission *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  CEntity **v5; // r1
  CEntity *v6; // r0
  void *v7; // r0

  v3 = (CEntity **)((char *)this + 36);
  v2 = (CEntity *)*((_DWORD *)this + 9);
  *(_DWORD *)this = &off_66ADDC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v5 = (CEntity **)((char *)this + 12);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AD4C;
  if ( v4 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      *((_BYTE *)v4 + 957) = *((_BYTE *)this + 29);
      *(_BYTE *)(*((_DWORD *)this + 3) + 958) = *((_BYTE *)this + 30);
      *(_BYTE *)(*((_DWORD *)this + 3) + 980) = *((_BYTE *)this + 31);
      v6 = (CEntity *)*((_DWORD *)this + 3);
      if ( v6 )
        CEntity::CleanUpOldReference(v6, v5);
    }
    else
    {
      CEntity::CleanUpOldReference(v4, v5);
    }
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v7);
}


// ============================================================

// Address: 0x4fc200
// Original: _ZNK27CTaskComplexCarDriveMission8SetUpCarEv
// Demangled: CTaskComplexCarDriveMission::SetUpCar(void)
int __fastcall CTaskComplexCarDriveMission::SetUpCar(CTaskComplexCarDriveMission *this)
{
  CCarCtrl *v2; // r0
  CVehicle *v3; // r1
  CEntity *v4; // r0
  int result; // r0
  int v6; // r1
  int v7; // r2
  unsigned int v8; // r3

  v2 = (CCarCtrl *)*((_DWORD *)this + 3);
  *((_BYTE *)this + 29) = *((_BYTE *)v2 + 957);
  *((_BYTE *)this + 30) = *((_BYTE *)v2 + 958);
  v3 = (CVehicle *)*((unsigned __int8 *)v2 + 980);
  *((_BYTE *)this + 32) = 1;
  *((_BYTE *)this + 31) = (_BYTE)v3;
  CCarCtrl::JoinCarWithRoadSystem(v2, v3);
  *(_BYTE *)(*((_DWORD *)this + 3) + 58) = *(_BYTE *)(*((_DWORD *)this + 3) + 58) & 7 | 0x18;
  *(_BYTE *)(*((_DWORD *)this + 3) + 958) = *((_DWORD *)this + 10);
  *(_BYTE *)(*((_DWORD *)this + 3) + 980) = (unsigned int)*((float *)this + 4);
  *(float *)(*((_DWORD *)this + 3) + 972) = (float)*(unsigned __int8 *)(*((_DWORD *)this + 3) + 980);
  *(_BYTE *)(*((_DWORD *)this + 3) + 957) = *((_DWORD *)this + 6);
  *(_DWORD *)(*((_DWORD *)this + 3) + 1056) = *((_DWORD *)this + 9);
  *(_DWORD *)(*((_DWORD *)this + 3) + 944) = CTimer::m_snTimeInMilliseconds;
  v4 = (CEntity *)*((_DWORD *)this + 9);
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(*((_DWORD *)this + 3) + 1056));
  result = *((_DWORD *)this + 3);
  v6 = *(_DWORD *)(result + 1068);
  v7 = *(_DWORD *)(result + 1072);
  v8 = v6 & 0xFFFFFFEF;
  if ( (v7 & 0x200) == 0 )
    v8 = v6 | 0x10;
  *(_DWORD *)(result + 1068) = v8;
  *(_DWORD *)(result + 1072) = v7;
  return result;
}


// ============================================================

// Address: 0x4fd0d0
// Original: _ZN27CTaskComplexCarDriveMissionD2Ev
// Demangled: CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission()
void __fastcall CTaskComplexCarDriveMission::~CTaskComplexCarDriveMission(CTaskComplexCarDriveMission *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  CEntity **v5; // r1
  CEntity *v6; // r0

  v3 = (CEntity **)((char *)this + 36);
  v2 = (CEntity *)*((_DWORD *)this + 9);
  *(_DWORD *)this = &off_66ADDC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v5 = (CEntity **)((char *)this + 12);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AD4C;
  if ( v4 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      *((_BYTE *)v4 + 957) = *((_BYTE *)this + 29);
      *(_BYTE *)(*((_DWORD *)this + 3) + 958) = *((_BYTE *)this + 30);
      *(_BYTE *)(*((_DWORD *)this + 3) + 980) = *((_BYTE *)this + 31);
      v6 = (CEntity *)*((_DWORD *)this + 3);
      if ( v6 )
        CEntity::CleanUpOldReference(v6, v5);
    }
    else
    {
      CEntity::CleanUpOldReference(v4, v5);
    }
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4fef98
// Original: _ZNK27CTaskComplexCarDriveMission5CloneEv
// Demangled: CTaskComplexCarDriveMission::Clone(void)
CTaskComplex *__fastcall CTaskComplexCarDriveMission::Clone(CTaskComplexCarDriveMission *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  int v6; // r10
  __int64 v7; // kr08_8

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_2C, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_DWORD *)this + 6);
  v7 = *(_QWORD *)((char *)this + 36);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  *((_DWORD *)v5 + 5) = -1;
  *((_DWORD *)v5 + 6) = v6;
  *((_BYTE *)v5 + 28) = 1;
  *((_BYTE *)v5 + 32) = 0;
  *(_DWORD *)v5 = &off_66AD4C;
  *((_DWORD *)v5 + 3) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 3);
  *((_DWORD *)v5 + 10) = HIDWORD(v7);
  *(_DWORD *)v5 = &off_66ADDC;
  *((_DWORD *)v5 + 9) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)v5 + 9);
  return v5;
}


// ============================================================

// Address: 0x4ff01c
// Original: _ZNK27CTaskComplexCarDriveMission11GetTaskTypeEv
// Demangled: CTaskComplexCarDriveMission::GetTaskType(void)
int __fastcall CTaskComplexCarDriveMission::GetTaskType(CTaskComplexCarDriveMission *this)
{
  return 724;
}


// ============================================================

// Address: 0x4ff024
// Original: _ZN27CTaskComplexCarDriveMission9SerializeEv
// Demangled: CTaskComplexCarDriveMission::Serialize(void)
void __fastcall CTaskComplexCarDriveMission::Serialize(CVehicle **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CVehicle *v8; // r0
  int v9; // r6
  CGenericGameStorage *v10; // r5
  int v11; // r2
  CVehicle *v12; // r0
  int v13; // r1
  int v14; // r5
  int v15; // r0
  CGenericGameStorage *v16; // r5
  int v17; // r2
  CGenericGameStorage *v18; // r0
  CGenericGameStorage *v19; // r6
  int v20; // r2
  CGenericGameStorage *v21; // r5
  int v22; // r2

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) != 724 )
  {
    v15 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    sub_1941D4(724, v15);
    return;
  }
  v5 = GettPoolVehicleRef(this[3]);
  if ( UseDataFence )
    AddDataFence();
  v6 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v6 = v5;
  CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
  free(v6);
  v8 = this[9];
  if ( !v8 )
  {
    if ( UseDataFence )
      AddDataFence();
    v16 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v16 = 0;
    CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
    v18 = v16;
    goto LABEL_22;
  }
  v9 = *((_BYTE *)v8 + 58) & 7;
  if ( UseDataFence )
    AddDataFence();
  v10 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v10 = v9;
  CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
  free(v10);
  v12 = this[9];
  v13 = *((_BYTE *)v12 + 58) & 7;
  switch ( v13 )
  {
    case 2:
      v14 = GettPoolVehicleRef(v12);
      goto LABEL_19;
    case 4:
      v14 = GettPoolObjRef(v12);
      goto LABEL_19;
    case 3:
      v14 = GettPoolPedRef(v12);
LABEL_19:
      if ( UseDataFence )
        AddDataFence();
      v19 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v19 = v14;
      CGenericGameStorage::_SaveDataToWorkBuffer(v19, byte_4, v20);
      v18 = v19;
LABEL_22:
      free(v18);
      break;
  }
  if ( UseDataFence )
    AddDataFence();
  v21 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v21 = this[10];
  CGenericGameStorage::_SaveDataToWorkBuffer(v21, byte_4, v22);
  j_free(v21);
}


// ============================================================
