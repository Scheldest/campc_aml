
// Address: 0x192e0c
// Original: j__ZN26CTaskComplexCarDriveWanderC2EP8CVehicleif
// Demangled: CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(CVehicle *,int,float)
// attributes: thunk
void __fastcall CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(
        CTaskComplexCarDriveWander *this,
        CVehicle *a2,
        int a3,
        float a4)
{
  _ZN26CTaskComplexCarDriveWanderC2EP8CVehicleif(this, a2, a3, a4);
}


// ============================================================

// Address: 0x199734
// Original: j__ZN26CTaskComplexCarDriveWander10CreateTaskEv
// Demangled: CTaskComplexCarDriveWander::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexCarDriveWander::CreateTask(CTaskComplexCarDriveWander *this)
{
  return _ZN26CTaskComplexCarDriveWander10CreateTaskEv(this);
}


// ============================================================

// Address: 0x493670
// Original: _ZN26CTaskComplexCarDriveWander10CreateTaskEv
// Demangled: CTaskComplexCarDriveWander::CreateTask(void)
void __fastcall CTaskComplexCarDriveWander::CreateTask(CTaskComplexCarDriveWander *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  unsigned int v9; // r1
  CTaskComplexCarDriveWander *v10; // r0
  _BYTE v11[4]; // [sp+4h] [bp-1Ch] BYREF
  int v12; // [sp+8h] [bp-18h] BYREF
  CPools *v13[5]; // [sp+Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v13, byte_4, a3);
  if ( v13[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v13[0], (int)v13[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v11, byte_4, v7);
  v10 = (CTaskComplexCarDriveWander *)CTask::operator new((CTask *)&dword_24, v9);
  CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(v10, Vehicle, v12, (float)v12);
}


// ============================================================

// Address: 0x4fb6b4
// Original: _ZN26CTaskComplexCarDriveWanderD2Ev
// Demangled: CTaskComplexCarDriveWander::~CTaskComplexCarDriveWander()
void __fastcall CTaskComplexCarDriveWander::~CTaskComplexCarDriveWander(CTaskComplexCarDriveWander *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AD4C;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      *((_BYTE *)v2 + 957) = *((_BYTE *)this + 29);
      *(_BYTE *)(*((_DWORD *)this + 3) + 958) = *((_BYTE *)this + 30);
      *(_BYTE *)(*((_DWORD *)this + 3) + 980) = *((_BYTE *)this + 31);
      v4 = (CEntity *)*((_DWORD *)this + 3);
      if ( v4 )
        CEntity::CleanUpOldReference(v4, v3);
    }
    else
    {
      CEntity::CleanUpOldReference(v2, v3);
    }
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4fbfa8
// Original: _ZN26CTaskComplexCarDriveWanderC2EP8CVehicleif
// Demangled: CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(CVehicle *,int,float)
void __fastcall CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(
        CTaskComplexCarDriveWander *this,
        CVehicle *a2,
        int a3,
        float a4)
{
  CTaskComplex::CTaskComplex(this);
  *((float *)this + 4) = a4;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 6) = a3;
  *((_BYTE *)this + 28) = 1;
  *((_BYTE *)this + 32) = 0;
  *(_DWORD *)this = &off_66AD4C;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
  *(_DWORD *)this = &off_66AD94;
}


// ============================================================

// Address: 0x4fc008
// Original: _ZN26CTaskComplexCarDriveWanderD0Ev
// Demangled: CTaskComplexCarDriveWander::~CTaskComplexCarDriveWander()
void __fastcall CTaskComplexCarDriveWander::~CTaskComplexCarDriveWander(CTaskComplexCarDriveWander *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AD4C;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 32) )
    {
      *((_BYTE *)v2 + 957) = *((_BYTE *)this + 29);
      *(_BYTE *)(*((_DWORD *)this + 3) + 958) = *((_BYTE *)this + 30);
      *(_BYTE *)(*((_DWORD *)this + 3) + 980) = *((_BYTE *)this + 31);
      v4 = (CEntity *)*((_DWORD *)this + 3);
      if ( v4 )
        CEntity::CleanUpOldReference(v4, v3);
    }
    else
    {
      CEntity::CleanUpOldReference(v2, v3);
    }
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4fc060
// Original: _ZNK26CTaskComplexCarDriveWander8SetUpCarEv
// Demangled: CTaskComplexCarDriveWander::SetUpCar(void)
int __fastcall CTaskComplexCarDriveWander::SetUpCar(CTaskComplexCarDriveWander *this)
{
  int v2; // r0
  char v3; // r2
  int v4; // r2
  unsigned int v5; // r5
  int result; // r0

  v2 = *((_DWORD *)this + 3);
  *((_BYTE *)this + 29) = *(_BYTE *)(v2 + 957);
  *((_BYTE *)this + 30) = *(_BYTE *)(v2 + 958);
  v3 = *(_BYTE *)(v2 + 980);
  *((_BYTE *)this + 32) = 1;
  *((_BYTE *)this + 31) = v3;
  if ( !CCarCtrl::bCarIsBeingCreated )
  {
    CCarCtrl::JoinCarWithRoadSystem((CCarCtrl *)v2, 0);
    *(_BYTE *)(*((_DWORD *)this + 3) + 58) = *(_BYTE *)(*((_DWORD *)this + 3) + 58) & 7 | 0x18;
    *(_BYTE *)(*((_DWORD *)this + 3) + 958) = 1;
    *(_BYTE *)(*((_DWORD *)this + 3) + 980) = (unsigned int)*((float *)this + 4);
    *(float *)(*((_DWORD *)this + 3) + 972) = (float)*(unsigned __int8 *)(*((_DWORD *)this + 3) + 980);
    *(_BYTE *)(*((_DWORD *)this + 3) + 957) = *((_DWORD *)this + 6);
    v2 = *((_DWORD *)this + 3);
  }
  v4 = *(_DWORD *)(v2 + 1068);
  v5 = v4 & 0xFFFFFFEF;
  if ( (*(_DWORD *)(v2 + 1072) & 0x200) == 0 )
    v5 = v4 | 0x10;
  *(_DWORD *)(v2 + 1068) = v5;
  result = *((_DWORD *)this + 3);
  *(_DWORD *)(result + 944) = CTimer::m_snTimeInMilliseconds;
  return result;
}


// ============================================================

// Address: 0x4fc104
// Original: _ZNK26CTaskComplexCarDriveWander27CreateSubTaskCannotGetInCarEP4CPed
// Demangled: CTaskComplexCarDriveWander::CreateSubTaskCannotGetInCar(CPed *)
int __fastcall CTaskComplexCarDriveWander::CreateSubTaskCannotGetInCar(CTaskComplexCarDriveWander *this, CPed *a2)
{
  return sub_190354(a2, a2);
}


// ============================================================

// Address: 0x4fee28
// Original: _ZNK26CTaskComplexCarDriveWander5CloneEv
// Demangled: CTaskComplexCarDriveWander::Clone(void)
CTaskComplex *__fastcall CTaskComplexCarDriveWander::Clone(CTaskComplexCarDriveWander *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  __int64 v4; // kr00_8
  CTaskComplex *v5; // r4
  int v6; // r6

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  v6 = *((_DWORD *)this + 6);
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
  *(_DWORD *)v5 = &off_66AD94;
  return v5;
}


// ============================================================

// Address: 0x4fee90
// Original: _ZNK26CTaskComplexCarDriveWander11GetTaskTypeEv
// Demangled: CTaskComplexCarDriveWander::GetTaskType(void)
int __fastcall CTaskComplexCarDriveWander::GetTaskType(CTaskComplexCarDriveWander *this)
{
  return 711;
}


// ============================================================

// Address: 0x4fee98
// Original: _ZN26CTaskComplexCarDriveWander9SerializeEv
// Demangled: CTaskComplexCarDriveWander::Serialize(void)
void __fastcall CTaskComplexCarDriveWander::Serialize(CVehicle **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r5
  CGenericGameStorage *v6; // r6
  int v7; // r2
  CGenericGameStorage *v8; // r5
  int v9; // r2
  CGenericGameStorage *v10; // r5
  int v11; // r2
  int v12; // r0

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 711 )
  {
    v5 = GettPoolVehicleRef(this[3]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    free(v6);
    if ( UseDataFence )
      AddDataFence();
    v8 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v8 = this[6];
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = this[4];
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    j_free(v10);
  }
  else
  {
    v12 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    sub_1941D4(711, v12);
  }
}


// ============================================================
