
// Address: 0x1965f4
// Original: j__ZN26CTaskComplexDriveFireTruckC2EP8CVehicleP4CPedb
// Demangled: CTaskComplexDriveFireTruck::CTaskComplexDriveFireTruck(CVehicle *,CPed *,bool)
// attributes: thunk
void __fastcall CTaskComplexDriveFireTruck::CTaskComplexDriveFireTruck(
        CTaskComplexDriveFireTruck *this,
        CVehicle *a2,
        CPed *a3,
        bool a4)
{
  _ZN26CTaskComplexDriveFireTruckC2EP8CVehicleP4CPedb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x5117cc
// Original: _ZN26CTaskComplexDriveFireTruckC2EP8CVehicleP4CPedb
// Demangled: CTaskComplexDriveFireTruck::CTaskComplexDriveFireTruck(CVehicle *,CPed *,bool)
void __fastcall CTaskComplexDriveFireTruck::CTaskComplexDriveFireTruck(
        CTaskComplexDriveFireTruck *this,
        CVehicle *a2,
        CPed *a3,
        bool a4)
{
  CTaskComplex::CTaskComplex(this);
  *((_BYTE *)this + 16) = a4;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_66BA84;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
    a3 = (CPed *)*((_DWORD *)this + 5);
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x511824
// Original: _ZN26CTaskComplexDriveFireTruckD2Ev
// Demangled: CTaskComplexDriveFireTruck::~CTaskComplexDriveFireTruck()
void __fastcall CTaskComplexDriveFireTruck::~CTaskComplexDriveFireTruck(CTaskComplexDriveFireTruck *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BA84;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x511860
// Original: _ZN26CTaskComplexDriveFireTruckD0Ev
// Demangled: CTaskComplexDriveFireTruck::~CTaskComplexDriveFireTruck()
void __fastcall CTaskComplexDriveFireTruck::~CTaskComplexDriveFireTruck(CTaskComplexDriveFireTruck *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66BA84;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x5118a0
// Original: _ZN26CTaskComplexDriveFireTruck17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexDriveFireTruck::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexDriveFireTruck::CreateNextSubTask(CTaskComplexDriveFireTruck *this, CPed *a2)
{
  int v4; // r0
  CTaskComplex *v5; // r0
  int v6; // r4
  _DWORD *v7; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 == 109 )
  {
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      (*(void (__fastcall **)(CTaskComplexDriveFireTruck *, CPed *))(*(_DWORD *)this + 44))(this, a2);
  }
  else if ( v4 == 710 )
  {
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      v5 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, 0x2C6u);
      v6 = *((_DWORD *)this + 6);
      CTaskComplex::CTaskComplex(v5);
      v7[3] = v6;
      *v7 = &off_66BB04;
    }
  }
}


// ============================================================

// Address: 0x511900
// Original: _ZNK26CTaskComplexDriveFireTruck13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexDriveFireTruck::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexDriveFireTruck::CreateSubTask(CVehicle **this, int a2, CPed *a3)
{
  CTaskSimpleCarDrive *v4; // r0
  CTaskComplexDriveToPoint *v5; // r0
  CTaskComplex *v6; // r0
  CVehicle *v7; // r4
  _DWORD *v8; // r0
  CTaskComplexCarDriveWander *v9; // r0

  if ( a2 > 709 )
  {
    if ( a2 == 711 )
    {
      v9 = (CTaskComplexCarDriveWander *)CTask::operator new((CTask *)&dword_24, 0x2C7u);
      CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(v9, this[3], 0, 10.0);
    }
    else if ( a2 == 710 )
    {
      v5 = (CTaskComplexDriveToPoint *)CTask::operator new((CTask *)&off_3C, 0x2C6u);
      CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(
        v5,
        this[3],
        (CVehicle *)((char *)this[6] + 4),
        30.0,
        0,
        -1,
        25.0,
        2);
    }
  }
  else if ( a2 == 109 )
  {
    v6 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, 0x6Du);
    v7 = this[6];
    CTaskComplex::CTaskComplex(v6);
    v8[3] = v7;
    *v8 = &off_66BB04;
  }
  else if ( a2 == 709 )
  {
    v4 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, 0x2C5u);
    CTaskSimpleCarDrive::CTaskSimpleCarDrive(v4, this[3], 0, 0);
  }
}


// ============================================================

// Address: 0x5119b0
// Original: _ZN26CTaskComplexDriveFireTruck18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexDriveFireTruck::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexDriveFireTruck::CreateFirstSubTask(CTaskComplexDriveFireTruck *this, CPed *a2, CPed *a3)
{
  int v4; // r2
  int v5; // r3
  const CVector *v6; // r1
  int NearestFire; // r0
  int v8; // r1

  if ( *((unsigned __int8 *)a2 + 1157) << 31 && *((_DWORD *)a2 + 356) )
  {
    if ( *((_BYTE *)this + 16) )
    {
      v4 = *((_DWORD *)this + 3);
      v5 = *(_DWORD *)(v4 + 20);
      v6 = (const CVector *)(v5 + 48);
      if ( !v5 )
        v6 = (const CVector *)(v4 + 4);
      NearestFire = CFireManager::FindNearestFire((CFireManager *)gFireManager, v6, 1, 1);
      v8 = 710;
      *((_DWORD *)this + 6) = NearestFire;
      if ( !NearestFire )
        v8 = 711;
    }
    else
    {
      v8 = 709;
    }
  }
  else
  {
    v8 = 1302;
  }
  CTaskComplexDriveFireTruck::CreateSubTask((CVehicle **)this, v8, a3);
}


// ============================================================

// Address: 0x511a0c
// Original: _ZN26CTaskComplexDriveFireTruck14ControlSubTaskEP4CPed
// Demangled: CTaskComplexDriveFireTruck::ControlSubTask(CPed *)
int __fastcall CTaskComplexDriveFireTruck::ControlSubTask(CTaskComplexCarDriveWander **this, CPed *a2)
{
  bool v4; // zf
  CTaskComplexCarDriveWander *v6; // r4
  CTaskComplexCarDriveWander *v7; // r2
  int v8; // r3
  const CVector *v9; // r1
  int NearestFire; // r0
  unsigned int v11; // r1
  CTaskComplexCarDriveWander *v12; // r1
  __int64 v13; // d16
  CTaskComplexCarDriveWander *v14; // r2
  int v15; // r3
  const CVector *v16; // r1

  v4 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    v4 = *((_DWORD *)a2 + 356) == 0;
  if ( v4 )
    return (*((int (__fastcall **)(CTaskComplexCarDriveWander **, CPed *))*this + 11))(this, a2);
  v6 = this[2];
  if ( (*(int (__fastcall **)(CTaskComplexCarDriveWander *))(*(_DWORD *)v6 + 20))(this[2]) != 710 )
  {
    if ( (*(int (__fastcall **)(CTaskComplexCarDriveWander *))(*(_DWORD *)this[2] + 20))(this[2]) != 711
      || !*((_BYTE *)this + 16) )
    {
      return (int)v6;
    }
    v14 = this[3];
    v15 = *((_DWORD *)v14 + 5);
    v16 = (const CVector *)(v15 + 48);
    if ( !v15 )
      v16 = (CTaskComplexCarDriveWander *)((char *)v14 + 4);
    if ( !CFireManager::FindNearestFire((CFireManager *)gFireManager, v16, 1, 1) )
      return (int)v6;
    return (*((int (__fastcall **)(CTaskComplexCarDriveWander **, CPed *))*this + 11))(this, a2);
  }
  if ( *((_BYTE *)this + 16) && (*(_BYTE *)this[6] & 8) != 0 )
  {
    v7 = this[3];
    v8 = *((_DWORD *)v7 + 5);
    v9 = (const CVector *)(v8 + 48);
    if ( !v8 )
      v9 = (CTaskComplexCarDriveWander *)((char *)v7 + 4);
    NearestFire = CFireManager::FindNearestFire((CFireManager *)gFireManager, v9, 1, 1);
    if ( NearestFire )
    {
      if ( (CTaskComplexCarDriveWander *)NearestFire != this[6] )
      {
        v12 = this[2];
        this[6] = (CTaskComplexCarDriveWander *)NearestFire;
        v13 = *(_QWORD *)(NearestFire + 4);
        *((_DWORD *)v12 + 11) = *(_DWORD *)(NearestFire + 12);
        *(_QWORD *)((char *)v12 + 36) = v13;
      }
    }
    else
    {
      v6 = (CTaskComplexCarDriveWander *)CTask::operator new((CTask *)&dword_24, v11);
      CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(v6, this[3], 0, 10.0);
    }
  }
  return (int)v6;
}


// ============================================================

// Address: 0x512638
// Original: _ZNK26CTaskComplexDriveFireTruck5CloneEv
// Demangled: CTaskComplexDriveFireTruck::Clone(void)
int __fastcall CTaskComplexDriveFireTruck::Clone(CTaskComplexDriveFireTruck *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r8
  CEntity *v5; // r5

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = (CEntity *)*((_DWORD *)this + 5);
  LOBYTE(this) = *((_BYTE *)this + 16);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_BYTE *)(v3 + 16) = (_BYTE)this;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)v3 = &off_66BA84;
  *(_DWORD *)(v3 + 20) = v5;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
    v5 = *(CEntity **)(v3 + 20);
  }
  if ( v5 )
    CEntity::RegisterReference(v5, (CEntity **)(v3 + 20));
  return v3;
}


// ============================================================

// Address: 0x51269c
// Original: _ZNK26CTaskComplexDriveFireTruck11GetTaskTypeEv
// Demangled: CTaskComplexDriveFireTruck::GetTaskType(void)
int __fastcall CTaskComplexDriveFireTruck::GetTaskType(CTaskComplexDriveFireTruck *this)
{
  return 107;
}


// ============================================================
