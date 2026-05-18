
// Address: 0x19864c
// Original: j__ZN24CTaskComplexShuffleSeats33CreateTaskUtilityLineUpPedWithCarEP4CPed
// Demangled: CTaskComplexShuffleSeats::CreateTaskUtilityLineUpPedWithCar(CPed *)
// attributes: thunk
int __fastcall CTaskComplexShuffleSeats::CreateTaskUtilityLineUpPedWithCar(CTaskComplexShuffleSeats *this, CPed *a2)
{
  return _ZN24CTaskComplexShuffleSeats33CreateTaskUtilityLineUpPedWithCarEP4CPed(this, a2);
}


// ============================================================

// Address: 0x1a0f64
// Original: j__ZN24CTaskComplexShuffleSeatsC2EP8CVehicle
// Demangled: CTaskComplexShuffleSeats::CTaskComplexShuffleSeats(CVehicle *)
// attributes: thunk
void __fastcall CTaskComplexShuffleSeats::CTaskComplexShuffleSeats(CTaskComplexShuffleSeats *this, CVehicle *a2)
{
  _ZN24CTaskComplexShuffleSeatsC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x4fcb24
// Original: _ZN24CTaskComplexShuffleSeatsC2EP8CVehicle
// Demangled: CTaskComplexShuffleSeats::CTaskComplexShuffleSeats(CVehicle *)
void __fastcall CTaskComplexShuffleSeats::CTaskComplexShuffleSeats(CTaskComplexShuffleSeats *this, CVehicle *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 40) = 0;
  *(_DWORD *)this = &off_66AEE4;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4fcb5c
// Original: _ZN24CTaskComplexShuffleSeatsD2Ev
// Demangled: CTaskComplexShuffleSeats::~CTaskComplexShuffleSeats()
void __fastcall CTaskComplexShuffleSeats::~CTaskComplexShuffleSeats(CTaskComplexShuffleSeats *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CTaskUtilityLineUpPedWithCar *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AEE4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 9);
  if ( v4 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v4);
    operator delete(v5);
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4fcb94
// Original: _ZN24CTaskComplexShuffleSeatsD0Ev
// Demangled: CTaskComplexShuffleSeats::~CTaskComplexShuffleSeats()
void __fastcall CTaskComplexShuffleSeats::~CTaskComplexShuffleSeats(CTaskComplexShuffleSeats *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CTaskUtilityLineUpPedWithCar *v4; // r0
  void *v5; // r0
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AEE4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 9);
  if ( v4 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v4);
    operator delete(v5);
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x4fcbd0
// Original: _ZN24CTaskComplexShuffleSeats13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexShuffleSeats::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexShuffleSeats::MakeAbortable(
        CTaskComplexShuffleSeats *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x4fcbe4
// Original: _ZN24CTaskComplexShuffleSeats13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexShuffleSeats::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexShuffleSeats::CreateSubTask(
        CTaskComplexShuffleSeats *this,
        unsigned int a2,
        CCarEnterExit **a3)
{
  CTaskSimpleCarShuffle *v5; // r0
  CPed **v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r1
  CTaskSimpleCarSetPedInAsDriver *v9; // r0
  int v10; // r4
  unsigned int v11; // r1
  CTaskSimpleCarSetPedOut *v12; // r0
  CTaskSimpleCarSetPedInAsPassenger *v13; // r0

  switch ( a2 )
  {
    case 0x328u:
      v5 = (CTaskSimpleCarShuffle *)CTask::operator new((CTask *)&dword_1C, a2);
      CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(
        v5,
        *((CVehicle **)this + 3),
        *((_DWORD *)this + 4),
        *((CTaskUtilityLineUpPedWithCar **)this + 9));
      break;
    case 0x329u:
    case 0x32Au:
    case 0x32Du:
    case 0x32Eu:
    case 0x32Fu:
      return;
    case 0x32Bu:
      v6 = (CPed **)*((_DWORD *)this + 3);
      if ( v6[281] == (CPed *)a3 )
        CVehicle::RemoveDriver((CVehicle *)v6, 1);
      else
        CVehicle::RemovePassenger((CVehicle *)v6, (CPed *)a3);
      v13 = (CTaskSimpleCarSetPedInAsPassenger *)CTask::operator new((CTask *)&dword_20, v7);
      CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
        v13,
        *((CVehicle **)this + 3),
        *((_DWORD *)this + 5),
        *((CTaskUtilityLineUpPedWithCar **)this + 9));
      break;
    case 0x32Cu:
      CVehicle::RemovePassenger(*((CVehicle **)this + 3), (CPed *)a3);
      v9 = (CTaskSimpleCarSetPedInAsDriver *)CTask::operator new((CTask *)&dword_1C, v8);
      CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(
        v9,
        *((CVehicle **)this + 3),
        *((CTaskUtilityLineUpPedWithCar **)this + 9));
      break;
    case 0x330u:
      v10 = CCarEnterExit::ComputeTargetDoorToExit(a3[356], (const CVehicle *)a3, (const CPed *)(a2 - 808));
      v12 = (CTaskSimpleCarSetPedOut *)CTask::operator new((CTask *)&off_18, v11);
      CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(v12, a3[356], v10, 1);
      break;
    default:
      if ( a2 == 1302 && a3 && !(*((unsigned __int8 *)a3 + 1157) << 31) )
        a3[7] = (CCarEnterExit *)((unsigned int)a3[7] | 1);
      break;
  }
}


// ============================================================

// Address: 0x4fcca0
// Original: _ZN24CTaskComplexShuffleSeats17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexShuffleSeats::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexShuffleSeats::CreateNextSubTask(CTaskComplexShuffleSeats *this, CCarEnterExit **a2)
{
  int v4; // r6
  int v5; // r1
  const CPed *v6; // r2
  int v7; // r5
  unsigned int v8; // r1
  CTaskSimpleCarSetPedOut *v9; // r0
  unsigned int v10; // r0
  const CVehicle *v11; // r1
  CVehicle *v12; // r0
  unsigned int v13; // r1
  CTaskSimpleCarSetPedInAsDriver *v14; // r0
  int v15; // r0
  unsigned int v16; // r1

  v4 = *((unsigned __int8 *)this + 40);
  v5 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = (const CPed *)(v5 - 808);
  if ( v4 )
  {
    switch ( v5 )
    {
      case 808:
      case 811:
      case 812:
        v7 = CCarEnterExit::ComputeTargetDoorToExit(a2[356], (const CVehicle *)a2, v6);
        v9 = (CTaskSimpleCarSetPedOut *)CTask::operator new((CTask *)&off_18, v8);
        CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(v9, a2[356], v7, 1);
        break;
      case 809:
      case 810:
      case 813:
      case 814:
      case 815:
        return;
      case 816:
        goto LABEL_8;
      default:
        goto LABEL_7;
    }
  }
  else
  {
    switch ( v5 )
    {
      case 808:
        v10 = *((_DWORD *)this + 4) - 8;
        if ( v10 >= 4 )
        {
          v11 = (const CVehicle *)*((_DWORD *)this + 5);
        }
        else
        {
          v11 = (const CVehicle *)dword_4FCD90[v10];
          *((_DWORD *)this + 5) = v11;
        }
        v12 = (CVehicle *)*((_DWORD *)this + 3);
        if ( v11 == (const CVehicle *)&byte_9[1] )
        {
          if ( *((_DWORD *)v12 + 281) )
            goto LABEL_8;
          CVehicle::RemovePassenger(v12, (CPed *)a2);
          v14 = (CTaskSimpleCarSetPedInAsDriver *)CTask::operator new((CTask *)&dword_1C, v13);
          CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(
            v14,
            *((CVehicle **)this + 3),
            *((CTaskUtilityLineUpPedWithCar **)this + 9));
        }
        else
        {
          v15 = CCarEnterExit::ComputePassengerIndexFromCarDoor(v12, v11, (int)v6);
          v16 = 1302;
          if ( !*(_DWORD *)(*((_DWORD *)this + 3) + 4 * v15 + 1128) )
            v16 = 811;
          CTaskComplexShuffleSeats::CreateSubTask(this, v16, a2);
        }
        break;
      case 809:
      case 810:
      case 813:
      case 814:
      case 815:
        return;
      case 811:
      case 812:
      case 816:
        goto LABEL_8;
      default:
LABEL_7:
        if ( v5 == 200 )
        {
LABEL_8:
          if ( a2 )
          {
            if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
              a2[7] = (CCarEnterExit *)((unsigned int)a2[7] | 1);
          }
        }
        break;
    }
  }
}


// ============================================================

// Address: 0x4fcda0
// Original: _ZN24CTaskComplexShuffleSeats18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexShuffleSeats::CreateFirstSubTask(CPed *)
void __fastcall CTaskComplexShuffleSeats::CreateFirstSubTask(CTaskComplexShuffleSeats *this, CPed *a2)
{
  CCarEnterExit *v4; // r0
  const CPed *v5; // r1
  unsigned int v6; // r1
  CTaskSimpleCarShuffle *v7; // r0

  v4 = (CCarEnterExit *)*((_DWORD *)this + 3);
  if ( v4 && CCarEnterExit::IsVehicleHealthy(v4, a2) == 1 && CCarEnterExit::IsPedHealthy(a2, v5) == 1 )
  {
    CTaskComplexShuffleSeats::CreateTaskUtilityLineUpPedWithCar(this, a2);
    v7 = (CTaskSimpleCarShuffle *)CTask::operator new((CTask *)&dword_1C, v6);
    CTaskSimpleCarShuffle::CTaskSimpleCarShuffle(
      v7,
      *((CVehicle **)this + 3),
      *((_DWORD *)this + 4),
      *((CTaskUtilityLineUpPedWithCar **)this + 9));
  }
}


// ============================================================

// Address: 0x4fcddc
// Original: _ZN24CTaskComplexShuffleSeats33CreateTaskUtilityLineUpPedWithCarEP4CPed
// Demangled: CTaskComplexShuffleSeats::CreateTaskUtilityLineUpPedWithCar(CPed *)
void __fastcall CTaskComplexShuffleSeats::CreateTaskUtilityLineUpPedWithCar(CTaskComplexShuffleSeats *this, CPed *a2)
{
  CPed **v4; // r1
  int v5; // r2
  int v6; // r0
  float *v7; // r1
  float v8; // s8
  float v9; // s10
  CTaskUtilityLineUpPedWithCar *v10; // r0
  int v11; // r0
  float v12[3]; // [sp+8h] [bp-20h] BYREF
  float v13[5]; // [sp+14h] [bp-14h] BYREF

  v4 = (CPed **)*((_DWORD *)this + 3);
  if ( v4[281] == a2 )
  {
    v5 = 10;
  }
  else if ( v4[282] == a2 )
  {
    v5 = 8;
  }
  else
  {
    v5 = 9;
    if ( v4[283] == a2 )
      v5 = 11;
  }
  *((_DWORD *)this + 4) = v5;
  CCarEnterExit::GetPositionToOpenCarDoor((CCarEnterExit *)v12, (const CVehicle *)v4, v5);
  v6 = *((_DWORD *)a2 + 5);
  v7 = (float *)(v6 + 48);
  if ( !v6 )
    v7 = (float *)((char *)a2 + 4);
  v8 = v7[1];
  v9 = v7[2];
  v13[0] = v12[0] - *v7;
  v13[1] = v12[1] - v8;
  v13[2] = v12[2] - v9;
  v10 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
  CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(v10, (const CVector *)v13, 600, 0, *((_DWORD *)this + 4));
  *((_DWORD *)this + 9) = v11;
}


// ============================================================

// Address: 0x4fce6e
// Original: _ZN24CTaskComplexShuffleSeats14ControlSubTaskEP4CPed
// Demangled: CTaskComplexShuffleSeats::ControlSubTask(CPed *)
int __fastcall CTaskComplexShuffleSeats::ControlSubTask(CTaskComplexShuffleSeats *this, CPed *a2)
{
  int v4; // r4
  const CVehicle *v5; // r1
  CCarEnterExit *v6; // r0
  const CPed *v7; // r1
  int v8; // r0

  v4 = *((_DWORD *)this + 2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  v6 = (CCarEnterExit *)*((_DWORD *)this + 3);
  if ( !v6 || CCarEnterExit::IsVehicleHealthy(v6, v5) != 1 || !CCarEnterExit::IsPedHealthy(a2, v7) )
  {
    v8 = *((_DWORD *)this + 2);
    *((_BYTE *)this + 40) = 1;
    (*(void (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v8 + 28))(v8, a2, 0, 0);
  }
  return v4;
}


// ============================================================

// Address: 0x4ff72c
// Original: _ZNK24CTaskComplexShuffleSeats5CloneEv
// Demangled: CTaskComplexShuffleSeats::Clone(void)
int __fastcall CTaskComplexShuffleSeats::Clone(CTaskComplexShuffleSeats *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&word_2C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 36) = 0;
  *(_BYTE *)(v3 + 40) = 0;
  *(_DWORD *)v3 = &off_66AEE4;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x4ff76c
// Original: _ZNK24CTaskComplexShuffleSeats11GetTaskTypeEv
// Demangled: CTaskComplexShuffleSeats::GetTaskType(void)
int __fastcall CTaskComplexShuffleSeats::GetTaskType(CTaskComplexShuffleSeats *this)
{
  return 720;
}


// ============================================================

// Address: 0x4ff774
// Original: _ZN24CTaskComplexShuffleSeats9SerializeEv
// Demangled: CTaskComplexShuffleSeats::Serialize(void)
void __fastcall CTaskComplexShuffleSeats::Serialize(CTaskComplexShuffleSeats *this)
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

  v2 = (*(int (__fastcall **)(CTaskComplexShuffleSeats *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexShuffleSeats *))(*(_DWORD *)this + 20))(this) == 720 )
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
    j_free(v9);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexShuffleSeats *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(720, v10);
  }
}


// ============================================================
