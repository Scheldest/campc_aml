
// Address: 0x18a22c
// Original: j__ZN32CTaskComplexMedicTreatInjuredPed10CreateTaskEv
// Demangled: CTaskComplexMedicTreatInjuredPed::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexMedicTreatInjuredPed::CreateTask(CTaskComplexMedicTreatInjuredPed *this)
{
  return _ZN32CTaskComplexMedicTreatInjuredPed10CreateTaskEv(this);
}


// ============================================================

// Address: 0x19f2d0
// Original: j__ZN32CTaskComplexMedicTreatInjuredPedC2EP8CVehicleP4CPedb
// Demangled: CTaskComplexMedicTreatInjuredPed::CTaskComplexMedicTreatInjuredPed(CVehicle *,CPed *,bool)
// attributes: thunk
void __fastcall CTaskComplexMedicTreatInjuredPed::CTaskComplexMedicTreatInjuredPed(
        CTaskComplexMedicTreatInjuredPed *this,
        CVehicle *a2,
        CPed *a3,
        bool a4)
{
  _ZN32CTaskComplexMedicTreatInjuredPedC2EP8CVehicleP4CPedb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x490d78
// Original: _ZN32CTaskComplexMedicTreatInjuredPed10CreateTaskEv
// Demangled: CTaskComplexMedicTreatInjuredPed::CreateTask(void)
void __fastcall CTaskComplexMedicTreatInjuredPed::CreateTask(CTaskComplexMedicTreatInjuredPed *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r8
  char v6; // r5
  int v7; // r2
  CPed *Ped; // r5
  char v9; // r6
  unsigned int v10; // r1
  CTaskComplexMedicTreatInjuredPed *v11; // r0
  bool v12; // [sp+7h] [bp-21h] BYREF
  CPools *v13; // [sp+8h] [bp-20h] BYREF
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
  if ( v13 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v13, (int)v13 + 1);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v17, (char *)&stderr + 2, v7);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v12, (char *)&stderr + 1, v7);
  v11 = (CTaskComplexMedicTreatInjuredPed *)CTask::operator new((CTask *)&word_2C, v10);
  CTaskComplexMedicTreatInjuredPed::CTaskComplexMedicTreatInjuredPed(v11, Vehicle, Ped, v12);
}


// ============================================================

// Address: 0x510808
// Original: _ZN32CTaskComplexMedicTreatInjuredPedC2EP8CVehicleP4CPedb
// Demangled: CTaskComplexMedicTreatInjuredPed::CTaskComplexMedicTreatInjuredPed(CVehicle *,CPed *,bool)
void __fastcall CTaskComplexMedicTreatInjuredPed::CTaskComplexMedicTreatInjuredPed(
        CTaskComplexMedicTreatInjuredPed *this,
        CVehicle *a2,
        CPed *a3,
        bool a4)
{
  CTaskComplex::CTaskComplex(this);
  *((_BYTE *)this + 20) = a4;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 40) = 0;
  *(_DWORD *)this = &off_66BA0C;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
    a3 = (CPed *)*((_DWORD *)this + 4);
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x510864
// Original: _ZN32CTaskComplexMedicTreatInjuredPedD2Ev
// Demangled: CTaskComplexMedicTreatInjuredPed::~CTaskComplexMedicTreatInjuredPed()
void __fastcall CTaskComplexMedicTreatInjuredPed::~CTaskComplexMedicTreatInjuredPed(
        CTaskComplexMedicTreatInjuredPed *this)
{
  int v2; // r0
  bool v3; // zf
  CEntity *v4; // r0
  CEntity *v5; // r0

  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66BA0C;
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)v2 == 0;
  if ( !v3 && !*(_BYTE *)(v2 + 5) )
    *(_BYTE *)(v2 + 4) = 0;
  v4 = (CEntity *)*((_DWORD *)this + 3);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 3);
  v5 = (CEntity *)*((_DWORD *)this + 4);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 4);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x5108b4
// Original: _ZN32CTaskComplexMedicTreatInjuredPedD0Ev
// Demangled: CTaskComplexMedicTreatInjuredPed::~CTaskComplexMedicTreatInjuredPed()
void __fastcall CTaskComplexMedicTreatInjuredPed::~CTaskComplexMedicTreatInjuredPed(
        CTaskComplexMedicTreatInjuredPed *this)
{
  int v2; // r0
  bool v3; // zf
  CEntity *v4; // r0
  CEntity *v5; // r0
  void *v6; // r0

  v2 = *((_DWORD *)this + 6);
  *(_DWORD *)this = &off_66BA0C;
  v3 = v2 == 0;
  if ( v2 )
    v3 = *(_DWORD *)v2 == 0;
  if ( !v3 && !*(_BYTE *)(v2 + 5) )
    *(_BYTE *)(v2 + 4) = 0;
  v4 = (CEntity *)*((_DWORD *)this + 3);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 3);
  v5 = (CEntity *)*((_DWORD *)this + 4);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 4);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x510908
// Original: _ZN32CTaskComplexMedicTreatInjuredPed17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexMedicTreatInjuredPed::CreateNextSubTask(CPed *)
CTaskComplexWander *__fastcall CTaskComplexMedicTreatInjuredPed::CreateNextSubTask(
        CTaskComplexMedicTreatInjuredPed *this,
        CPed *a2)
{
  int v4; // r0
  unsigned int v5; // r1
  CTaskComplexWander *v6; // r5
  unsigned __int16 v7; // r0
  _DWORD *v8; // r0
  int v9; // r0
  CEntity *v10; // r5
  bool v11; // zf
  unsigned int v12; // r1
  int v13; // r0
  const CVector *v14; // r5
  CAccidentManager *AccidentManager; // r0
  int NearestFreeAccident; // r0
  int v17; // r6
  CTaskComplexEnterCarAsPassenger *v18; // r0
  unsigned int v19; // r1
  _QWORD *v20; // r0
  float *v21; // r0
  float32x2_t v22; // d17
  float32x2_t v23; // d16
  unsigned __int64 v24; // d0
  int v25; // r4
  int v27; // r0
  const CVector *v28; // r5
  CAccidentManager *v29; // r0
  unsigned int v30; // r1
  int v31; // r0
  const CVector *v32; // r5
  CAccidentManager *v33; // r0
  unsigned int v34; // r1
  CEntity *v35; // r5
  unsigned int v36; // r1
  float v37; // [sp+10h] [bp-28h]
  float v38; // [sp+14h] [bp-24h]
  float v39; // [sp+18h] [bp-20h]
  float v40; // [sp+1Ch] [bp-1Ch]
  float v41; // [sp+20h] [bp-18h]
  float v42; // [sp+24h] [bp-14h]

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v6 = 0;
  if ( v4 <= 700 )
  {
    if ( v4 != 101 )
    {
      if ( v4 != 203 )
      {
        if ( v4 == 700 )
        {
          if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
          {
LABEL_6:
            v6 = (CTaskComplexWander *)CTask::operator new((CTask *)&word_28, v5);
            v7 = rand();
            CTaskComplexWander::CTaskComplexWander(v6, 4, (int)(float)((float)((float)v7 * 0.000015259) * 8.0), 1, 0.5);
            v8 = &`vtable for'CTaskComplexWanderMedic;
LABEL_27:
            *(_DWORD *)v6 = *v8 + 8;
            return v6;
          }
LABEL_28:
          v6 = (CTaskComplexWander *)CTask::operator new((CTask *)&dword_60, v5);
          CTaskSimpleCarDrive::CTaskSimpleCarDrive(v6, *((CVehicle **)this + 3), 0, 0);
          return v6;
        }
        return v6;
      }
      goto LABEL_18;
    }
    v13 = *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 6) = 0;
    v14 = (const CVector *)(v13 + 48);
    if ( !v13 )
      v14 = (CPed *)((char *)a2 + 4);
    AccidentManager = (CAccidentManager *)GetAccidentManager();
    NearestFreeAccident = CAccidentManager::GetNearestFreeAccident(AccidentManager, v14, 1);
    *((_DWORD *)this + 6) = NearestFreeAccident;
    if ( !NearestFreeAccident )
    {
LABEL_18:
      v17 = *((unsigned __int8 *)this + 20);
      v18 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_50, v5);
      v6 = v18;
      if ( !v17 )
      {
        CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v18, *((CVehicle **)this + 3), 11, 0);
        return v6;
      }
      goto LABEL_19;
    }
LABEL_38:
    *(_BYTE *)(NearestFreeAccident + 4) = 1;
    v35 = (CEntity *)**((_DWORD **)this + 6);
    CPed::GetBonePosition(v35);
    CPed::GetBonePosition(v35);
    *((float *)this + 7) = (float)(v40 + v37) * 0.5;
    *((float *)this + 8) = (float)(v41 + v38) * 0.5;
    *((float *)this + 9) = (float)(v42 + v39) * 0.5;
    v6 = (CTaskComplexWander *)CTask::operator new((CTask *)&word_28, v36);
    CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
      v6,
      6,
      (CTaskComplexMedicTreatInjuredPed *)((char *)this + 28),
      0.125,
      2.0,
      0,
      0);
    return v6;
  }
  v5 = 701;
  switch ( v4 )
  {
    case 701:
      if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
        goto LABEL_6;
      goto LABEL_28;
    case 903:
      v19 = *((_DWORD *)a2 + 5);
      v20 = (_QWORD *)(v19 + 48);
      if ( !v19 )
        v20 = (_QWORD *)((char *)a2 + 4);
      v22.n64_u64[0] = *v20;
      v21 = (float *)(v20 + 1);
      v23.n64_u64[0] = vsub_f32(v22, *(float32x2_t *)((char *)this + 28)).n64_u64[0];
      v24 = vmul_f32(v23, v23).n64_u64[0];
      if ( sqrtf(*(float *)&v24 + *((float *)&v24 + 1)) > 1.0 || fabsf(*v21 - *((float *)this + 9)) > 2.0 )
        return (CTaskComplexWander *)CTaskComplexMedicTreatInjuredPed::CreateDealWithNextAccidentTask(
                                       this,
                                       a2,
                                       *((CAccident **)this + 6));
      v6 = (CTaskComplexWander *)CTask::operator new((CTask *)&word_10, v19);
      v25 = *((_DWORD *)this + 6);
      CTaskComplex::CTaskComplex(v6);
      *((_DWORD *)v6 + 3) = v25;
      v8 = &`vtable for'CTaskComplexTreatAccident;
      goto LABEL_27;
    case 704:
      CInterestingEvents::Add();
      if ( *((_BYTE *)this + 20) )
      {
        v9 = *((_DWORD *)this + 6);
        v10 = *(CEntity **)v9;
        v11 = *(_DWORD *)v9 == 0;
        if ( *(_DWORD *)v9 )
          v11 = *(_BYTE *)(v9 + 4) == 0;
        if ( !v11 )
        {
          CPed::GetBonePosition(v10);
          CPed::GetBonePosition(v10);
          *((float *)this + 7) = (float)(v40 + v37) * 0.5;
          *((float *)this + 8) = (float)(v41 + v38) * 0.5;
          *((float *)this + 9) = (float)(v42 + v39) * 0.5;
          v6 = (CTaskComplexWander *)CTask::operator new((CTask *)&word_28, v12);
          CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
            v6,
            6,
            (CTaskComplexMedicTreatInjuredPed *)((char *)this + 28),
            0.125,
            2.0,
            0,
            0);
          return v6;
        }
        v31 = *((_DWORD *)a2 + 5);
        *((_DWORD *)this + 6) = 0;
        v32 = (const CVector *)(v31 + 48);
        if ( !v31 )
          v32 = (CPed *)((char *)a2 + 4);
        v33 = (CAccidentManager *)GetAccidentManager();
        NearestFreeAccident = CAccidentManager::GetNearestFreeAccident(v33, v32, 1);
        *((_DWORD *)this + 6) = NearestFreeAccident;
        if ( !NearestFreeAccident )
        {
          v6 = (CTaskComplexWander *)CTask::operator new((CTask *)&dword_50, v34);
LABEL_19:
          CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v6, *((CVehicle **)this + 3));
          return v6;
        }
      }
      else
      {
        v27 = *((_DWORD *)a2 + 5);
        *((_DWORD *)this + 6) = 0;
        v28 = (const CVector *)(v27 + 48);
        if ( !v27 )
          v28 = (CPed *)((char *)a2 + 4);
        v29 = (CAccidentManager *)GetAccidentManager();
        NearestFreeAccident = CAccidentManager::GetNearestFreeAccident(v29, v28, 1);
        *((_DWORD *)this + 6) = NearestFreeAccident;
        if ( !NearestFreeAccident )
        {
          v6 = (CTaskComplexWander *)CTask::operator new((CTask *)&dword_20, v30);
          CTaskSimpleStandStill::CTaskSimpleStandStill(v6, 10000, 0, 0, 8.0);
          return v6;
        }
      }
      goto LABEL_38;
  }
  return v6;
}


// ============================================================

// Address: 0x510d94
// Original: _ZN32CTaskComplexMedicTreatInjuredPed23CalcTargetPosWithOffsetEP4CPedS1_
// Demangled: CTaskComplexMedicTreatInjuredPed::CalcTargetPosWithOffset(CPed *,CPed *)
int __fastcall CTaskComplexMedicTreatInjuredPed::CalcTargetPosWithOffset(
        CTaskComplexMedicTreatInjuredPed *this,
        CPed *a2,
        CPed *a3)
{
  int result; // r0
  float v6; // [sp+0h] [bp-20h]
  float v7; // [sp+4h] [bp-1Ch]
  float v8; // [sp+8h] [bp-18h]
  float v9; // [sp+Ch] [bp-14h]
  float v10; // [sp+10h] [bp-10h]
  float v11; // [sp+14h] [bp-Ch]

  CPed::GetBonePosition(a3);
  result = CPed::GetBonePosition(a3);
  *((float *)this + 7) = (float)(v9 + v6) * 0.5;
  *((float *)this + 8) = (float)(v10 + v7) * 0.5;
  *((float *)this + 9) = (float)(v11 + v8) * 0.5;
  return result;
}


// ============================================================

// Address: 0x510dfc
// Original: _ZN32CTaskComplexMedicTreatInjuredPed13CreateSubTaskEi
// Demangled: CTaskComplexMedicTreatInjuredPed::CreateSubTask(int)
CTaskComplex *__fastcall CTaskComplexMedicTreatInjuredPed::CreateSubTask(
        CTaskComplexMedicTreatInjuredPed *this,
        int a2)
{
  CTaskComplex *v3; // r4
  unsigned __int16 v4; // r0
  _DWORD *v5; // r0
  int v6; // r5

  v3 = 0;
  if ( a2 < 700 )
  {
    if ( a2 == 101 )
    {
      v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, 0x65u);
      v6 = *((_DWORD *)this + 6);
      CTaskComplex::CTaskComplex(v3);
      *((_DWORD *)v3 + 3) = v6;
      v5 = &`vtable for'CTaskComplexTreatAccident;
LABEL_16:
      *(_DWORD *)v3 = *v5 + 8;
    }
    else if ( a2 == 203 )
    {
      v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_20, 0xCBu);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v3, 10000, 0, 0, 8.0);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 700:
        v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_50, a2);
        CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v3, *((CVehicle **)this + 3), 11, 0);
        break;
      case 701:
        v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_50, a2);
        CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v3, *((CVehicle **)this + 3));
        break;
      case 702:
      case 703:
      case 705:
      case 706:
      case 707:
      case 708:
        return v3;
      case 704:
        *((_BYTE *)this + 40) = 1;
        v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_34, a2);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar(v3, *((CVehicle **)this + 3), 0, 0, 1, 0);
        break;
      case 709:
        v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_60, a2);
        CTaskSimpleCarDrive::CTaskSimpleCarDrive(v3, *((CVehicle **)this + 3), 0, 0);
        break;
      case 710:
        v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_3C, a2);
        CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(
          v3,
          *((CVehicle **)this + 3),
          (CTaskComplexMedicTreatInjuredPed *)((char *)this + 28),
          30.0,
          0,
          -1,
          -1.0,
          2);
        break;
      case 711:
        v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
        CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(v3, *((CVehicle **)this + 3), 2, 30.0);
        break;
      default:
        if ( a2 == 903 )
        {
          v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, 0x387u);
          CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
            v3,
            6,
            (CTaskComplexMedicTreatInjuredPed *)((char *)this + 28),
            0.125,
            2.0,
            0,
            0);
        }
        else if ( a2 == 912 )
        {
          v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_28, 0x390u);
          v4 = rand();
          CTaskComplexWander::CTaskComplexWander(v3, 4, (int)(float)((float)((float)v4 * 0.000015259) * 8.0), 1, 0.5);
          v5 = &`vtable for'CTaskComplexWanderMedic;
          goto LABEL_16;
        }
        break;
    }
  }
  return v3;
}


// ============================================================

// Address: 0x510fc0
// Original: _ZN32CTaskComplexMedicTreatInjuredPed18GetNearestAccidentERK7CVector
// Demangled: CTaskComplexMedicTreatInjuredPed::GetNearestAccident(CVector const&)
int __fastcall CTaskComplexMedicTreatInjuredPed::GetNearestAccident(
        CTaskComplexMedicTreatInjuredPed *this,
        const CVector *a2)
{
  CAccidentManager *AccidentManager; // r0
  int result; // r0

  *((_DWORD *)this + 6) = 0;
  AccidentManager = (CAccidentManager *)GetAccidentManager();
  result = CAccidentManager::GetNearestFreeAccident(AccidentManager, a2, 1);
  *((_DWORD *)this + 6) = result;
  return result;
}


// ============================================================

// Address: 0x510fdc
// Original: _ZN32CTaskComplexMedicTreatInjuredPed30CreateDealWithNextAccidentTaskEP4CPedP9CAccident
// Demangled: CTaskComplexMedicTreatInjuredPed::CreateDealWithNextAccidentTask(CPed *,CAccident *)
CTaskComplexEnterCarAsDriver *__fastcall CTaskComplexMedicTreatInjuredPed::CreateDealWithNextAccidentTask(
        CTaskComplexMedicTreatInjuredPed *this,
        CPed *a2,
        CAccident *a3)
{
  int v4; // r0
  const CVector *v6; // r6
  CAccidentManager *AccidentManager; // r0
  int NearestFreeAccidentExceptThisOne; // r0
  unsigned int v9; // r1
  bool v10; // zf
  CTaskComplexEnterCarAsDriver *v11; // r4
  CEntity *v12; // r6
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r0
  __int64 v16; // d16
  char v17; // r1
  int v18; // r6
  CTaskComplexEnterCarAsDriver *v19; // r0
  CTaskComplexGoToPointAndStandStill *v20; // r0
  float v22; // [sp+10h] [bp-28h]
  float v23; // [sp+14h] [bp-24h]
  float v24; // [sp+18h] [bp-20h]
  float v25; // [sp+1Ch] [bp-1Ch]
  float v26; // [sp+20h] [bp-18h]
  float v27; // [sp+24h] [bp-14h]

  v4 = *((_DWORD *)a2 + 5);
  v6 = (const CVector *)(v4 + 48);
  *((_DWORD *)this + 6) = 0;
  if ( !v4 )
    v6 = (CPed *)((char *)a2 + 4);
  AccidentManager = (CAccidentManager *)GetAccidentManager();
  NearestFreeAccidentExceptThisOne = CAccidentManager::GetNearestFreeAccidentExceptThisOne(AccidentManager, v6, a3, 1);
  *((_DWORD *)this + 6) = NearestFreeAccidentExceptThisOne;
  v10 = NearestFreeAccidentExceptThisOne == 0;
  if ( NearestFreeAccidentExceptThisOne )
  {
    v9 = *(_DWORD *)NearestFreeAccidentExceptThisOne;
    v10 = *(_DWORD *)NearestFreeAccidentExceptThisOne == 0;
  }
  if ( v10 )
  {
    v18 = *((unsigned __int8 *)this + 20);
    v19 = (CTaskComplexEnterCarAsDriver *)CTask::operator new((CTask *)&dword_50, v9);
    v11 = v19;
    if ( v18 )
      CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v19, *((CVehicle **)this + 3));
    else
      CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v19, *((CVehicle **)this + 3), 11, 0);
  }
  else
  {
    *(_BYTE *)(NearestFreeAccidentExceptThisOne + 4) = 1;
    v11 = 0;
    v12 = (CEntity *)**((_DWORD **)this + 6);
    CPed::GetBonePosition(v12);
    CPed::GetBonePosition(v12);
    *((float *)this + 7) = (float)(v25 + v22) * 0.5;
    *((float *)this + 8) = (float)(v26 + v23) * 0.5;
    *((float *)this + 9) = (float)(v27 + v24) * 0.5;
    v14 = *((_DWORD *)this + 2);
    if ( v14 && (v15 = (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 20))(v14), v13 = 903, v15 == 903) )
    {
      v11 = (CTaskComplexEnterCarAsDriver *)*((_DWORD *)this + 2);
      if ( *((float *)v11 + 4) != *((float *)this + 7)
        || *((float *)v11 + 5) != *((float *)this + 8)
        || *((float *)v11 + 6) != *((float *)this + 9)
        || *((float *)v11 + 8) != 2.0 )
      {
        v16 = *(_QWORD *)((char *)this + 28);
        *((_DWORD *)v11 + 6) = *((_DWORD *)this + 9);
        *((_QWORD *)v11 + 2) = v16;
        v17 = *((_BYTE *)v11 + 36);
        *((_DWORD *)v11 + 7) = 1056964608;
        *((_DWORD *)v11 + 8) = 0x40000000;
        *((_BYTE *)v11 + 36) = v17 | 4;
      }
      *((_DWORD *)v11 + 3) = 6;
    }
    else
    {
      v20 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v13);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
        v20,
        6,
        (CTaskComplexMedicTreatInjuredPed *)((char *)this + 28),
        0.125,
        2.0,
        0,
        0);
    }
  }
  return v11;
}


// ============================================================

// Address: 0x511170
// Original: _ZN32CTaskComplexMedicTreatInjuredPed18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexMedicTreatInjuredPed::CreateFirstSubTask(CPed *)
CTaskComplex *__fastcall CTaskComplexMedicTreatInjuredPed::CreateFirstSubTask(
        CTaskComplexMedicTreatInjuredPed *this,
        CPed *a2)
{
  int v2; // r1

  if ( *((_DWORD *)this + 3) )
  {
    v2 = 711;
    if ( !*((_BYTE *)this + 20) )
      v2 = 709;
  }
  else
  {
    v2 = 912;
  }
  return CTaskComplexMedicTreatInjuredPed::CreateSubTask(this, v2);
}


// ============================================================

// Address: 0x51118c
// Original: _ZN32CTaskComplexMedicTreatInjuredPed31GetNearestAccidentExceptThisOneERK7CVectorP9CAccident
// Demangled: CTaskComplexMedicTreatInjuredPed::GetNearestAccidentExceptThisOne(CVector const&,CAccident *)
int __fastcall CTaskComplexMedicTreatInjuredPed::GetNearestAccidentExceptThisOne(
        CTaskComplexMedicTreatInjuredPed *this,
        const CVector *a2,
        CAccident *a3)
{
  CAccidentManager *AccidentManager; // r0
  int result; // r0

  *((_DWORD *)this + 6) = 0;
  AccidentManager = (CAccidentManager *)GetAccidentManager();
  result = CAccidentManager::GetNearestFreeAccidentExceptThisOne(AccidentManager, a2, a3, 1);
  *((_DWORD *)this + 6) = result;
  return result;
}


// ============================================================

// Address: 0x5111b4
// Original: _ZN32CTaskComplexMedicTreatInjuredPed14ControlSubTaskEP4CPed
// Demangled: CTaskComplexMedicTreatInjuredPed::ControlSubTask(CPed *)
CTaskComplexEnterCarAsDriver *__fastcall CTaskComplexMedicTreatInjuredPed::ControlSubTask(
        CTaskComplexMedicTreatInjuredPed *this,
        CPed *a2)
{
  CTaskComplexDriveToPoint *v4; // r4
  int v5; // r0
  float v6; // r3
  unsigned int v7; // r1
  _DWORD *v8; // r0
  bool v9; // zf
  int v10; // r0
  const CVector *v11; // r5
  CAccidentManager *AccidentManager; // r0
  int NearestFreeAccident; // r0
  CEntity *v14; // r4
  unsigned int v15; // r1
  _DWORD *v16; // r0
  bool v17; // zf
  int v18; // r11
  int v19; // r0
  char *v20; // r1
  float32x2_t v21; // d16
  unsigned __int64 v22; // d1
  int i; // r5
  CPedGeometryAnalyser *v24; // r0
  CEntity *v26; // r6
  float v27; // s2
  __int64 v28; // d16
  char v29; // r2
  int v31; // r0
  int v32; // r1
  int v33; // r2
  float32x2_t v34; // d16
  unsigned __int64 v35; // d1
  unsigned int v36; // r1
  int v37; // r0
  int ActiveTask; // r0
  int v39; // r8
  _DWORD *v40; // r0
  bool v41; // zf
  __int64 v42; // d16
  float v43; // [sp+14h] [bp-34h]
  float v44; // [sp+18h] [bp-30h]
  float v45; // [sp+1Ch] [bp-2Ch]
  float v46; // [sp+20h] [bp-28h]
  float v47; // [sp+24h] [bp-24h]
  float v48; // [sp+28h] [bp-20h]

  v4 = (CTaskComplexDriveToPoint *)*((_DWORD *)this + 2);
  v5 = (*(int (__fastcall **)(CTaskComplexDriveToPoint *))(*(_DWORD *)v4 + 20))(v4);
  if ( v5 > 710 )
  {
    if ( v5 == 903 )
    {
      v16 = (_DWORD *)*((_DWORD *)this + 6);
      v17 = v16 == 0;
      if ( v16 )
        v17 = *v16 == 0;
      if ( !v17 )
      {
        v18 = *((_DWORD *)this + 2);
        if ( *(_DWORD *)(v18 + 12) == 4 )
          return v4;
        v19 = *((_DWORD *)a2 + 5);
        v20 = (char *)(v19 + 48);
        if ( !v19 )
          v20 = (char *)a2 + 4;
        v21.n64_u64[0] = vsub_f32(*((float32x2_t *)this + 4), *(float32x2_t *)(v20 + 4)).n64_u64[0];
        v22 = vmul_f32(v21, v21).n64_u64[0];
        if ( (float)((float)((float)((float)(*((float *)this + 7) - *(float *)v20)
                                   * (float)(*((float *)this + 7) - *(float *)v20))
                           + *(float *)&v22)
                   + *((float *)&v22 + 1)) >= 25.0 )
          return v4;
        for ( i = 56; ; ++i )
        {
          v24 = *(CPedGeometryAnalyser **)(*((_DWORD *)a2 + 272) + 4 * i);
          if ( v24 )
          {
            if ( CPedGeometryAnalyser::IsEntityBlockingTarget(
                   v24,
                   (CTaskComplexMedicTreatInjuredPed *)((char *)this + 28),
                   (const CVector *)0x3E000000,
                   v6) )
            {
              break;
            }
          }
          if ( i - 56 >= 15 )
          {
            v26 = (CEntity *)**((_DWORD **)this + 6);
            CPed::GetBonePosition(v26);
            CPed::GetBonePosition(v26);
            *((float *)this + 7) = (float)(v46 + v43) * 0.5;
            *((float *)this + 8) = (float)(v47 + v44) * 0.5;
            *((float *)this + 9) = (float)(v48 + v45) * 0.5;
            v27 = *(float *)(v18 + 16);
            *(_DWORD *)(v18 + 12) = 4;
            if ( v27 != *((float *)this + 7)
              || *(float *)(v18 + 20) != *((float *)this + 8)
              || *(float *)(v18 + 24) != *((float *)this + 9)
              || *(float *)(v18 + 32) != 2.0 )
            {
              v28 = *(_QWORD *)((char *)this + 28);
              v29 = *(_BYTE *)(v18 + 36);
              *(_DWORD *)(v18 + 24) = *((_DWORD *)this + 9);
              *(_DWORD *)(v18 + 28) = 1056964608;
              *(_DWORD *)(v18 + 32) = 0x40000000;
              *(_BYTE *)(v18 + 36) = v29 | 4;
              *(_QWORD *)(v18 + 16) = v28;
            }
            return v4;
          }
        }
      }
      return CTaskComplexMedicTreatInjuredPed::CreateDealWithNextAccidentTask(this, a2, 0);
    }
    if ( v5 == 711 && *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      v10 = *((_DWORD *)a2 + 5);
      *((_DWORD *)this + 6) = 0;
      v11 = (const CVector *)(v10 + 48);
      if ( !v10 )
        v11 = (CPed *)((char *)a2 + 4);
      AccidentManager = (CAccidentManager *)GetAccidentManager();
      NearestFreeAccident = CAccidentManager::GetNearestFreeAccident(AccidentManager, v11, 1);
      *((_DWORD *)this + 6) = NearestFreeAccident;
      if ( NearestFreeAccident )
      {
        *(_BYTE *)(NearestFreeAccident + 4) = 1;
        v14 = (CEntity *)**((_DWORD **)this + 6);
        CPed::GetBonePosition(v14);
        CPed::GetBonePosition(v14);
        *((float *)this + 7) = (float)(v46 + v43) * 0.5;
        *((float *)this + 8) = (float)(v47 + v44) * 0.5;
        *((float *)this + 9) = (float)(v48 + v45) * 0.5;
        v4 = (CTaskComplexDriveToPoint *)CTask::operator new((CTask *)&off_3C, v15);
        CTaskComplexDriveToPoint::CTaskComplexDriveToPoint(
          v4,
          *((CVehicle **)this + 3),
          (CTaskComplexMedicTreatInjuredPed *)((char *)this + 28),
          30.0,
          0,
          -1,
          -1.0,
          2);
      }
    }
  }
  else
  {
    if ( v5 != 709 )
    {
      v7 = 710;
      if ( v5 != 710 || !(*((unsigned __int8 *)a2 + 1157) << 31) )
        return v4;
      v8 = (_DWORD *)*((_DWORD *)this + 6);
      v9 = v8 == 0;
      if ( v8 )
        v9 = *v8 == 0;
      if ( !v9 )
      {
        v31 = *((_DWORD *)this + 3);
LABEL_38:
        v32 = *(_DWORD *)(v31 + 20);
        v33 = v32 + 48;
        if ( !v32 )
          v33 = v31 + 4;
        v34.n64_u64[0] = vsub_f32(*(float32x2_t *)(v33 + 4), *((float32x2_t *)this + 4)).n64_u64[0];
        v35 = vmul_f32(v34, v34).n64_u64[0];
        if ( (float)((float)((float)((float)(*(float *)v33 - *((float *)this + 7))
                                   * (float)(*(float *)v33 - *((float *)this + 7)))
                           + *(float *)&v35)
                   + *((float *)&v35 + 1)) < 100.0 )
        {
          CPed::Say(a2, 0xE7u, 0, 1.0, 0, 0, 0);
          *((_BYTE *)this + 40) = 1;
          v4 = (CTaskComplexDriveToPoint *)CTask::operator new((CTask *)&dword_34, v36);
          CTaskComplexLeaveCar::CTaskComplexLeaveCar(v4, *((CVehicle **)this + 3), 0, 0, 1, 0);
        }
        return v4;
      }
      *((_DWORD *)this + 6) = 0;
      goto LABEL_20;
    }
    if ( *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      if ( !*((_BYTE *)this + 20) )
      {
        if ( *((_BYTE *)this + 40) )
          return v4;
        v37 = *((_DWORD *)this + 4);
        if ( !v37 )
          return v4;
        ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v37 + 1088) + 4));
        v39 = ActiveTask;
        if ( !ActiveTask || (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) != 100 )
          return v4;
        v40 = *(_DWORD **)(v39 + 24);
        v41 = v40 == 0;
        if ( v40 )
          v41 = *v40 == 0;
        if ( v41 )
          return v4;
        v31 = *((_DWORD *)this + 3);
        v42 = *(_QWORD *)(v39 + 28);
        *((_DWORD *)this + 9) = *(_DWORD *)(v39 + 36);
        *(_QWORD *)((char *)this + 28) = v42;
        goto LABEL_38;
      }
      if ( CVehicle::IsPassenger(*((CVehicle **)this + 3), *((const CPed **)this + 4)) == 1 )
      {
LABEL_20:
        v4 = (CTaskComplexDriveToPoint *)CTask::operator new((CTask *)&dword_24, v7);
        CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(v4, *((CVehicle **)this + 3), 2, 30.0);
      }
    }
  }
  return v4;
}


// ============================================================

// Address: 0x51244c
// Original: _ZNK32CTaskComplexMedicTreatInjuredPed5CloneEv
// Demangled: CTaskComplexMedicTreatInjuredPed::Clone(void)
CTaskComplex *__fastcall CTaskComplexMedicTreatInjuredPed::Clone(
        CTaskComplexMedicTreatInjuredPed *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r5
  CEntity *v5; // r8
  CTaskComplex *v6; // r4

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_2C, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = (CEntity *)*((_DWORD *)this + 3);
  v6 = v3;
  LOBYTE(this) = *((_BYTE *)this + 20);
  CTaskComplex::CTaskComplex(v3);
  *((_BYTE *)v6 + 20) = (_BYTE)this;
  *((_DWORD *)v6 + 6) = 0;
  *((_BYTE *)v6 + 40) = 0;
  *(_DWORD *)v6 = &off_66BA0C;
  *(_QWORD *)((char *)v6 + 12) = __PAIR64__((unsigned int)v4, (unsigned int)v5);
  if ( v5 )
  {
    CEntity::RegisterReference(v5, (CEntity **)v6 + 3);
    v4 = (CEntity *)*((_DWORD *)v6 + 4);
  }
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)v6 + 4);
  return v6;
}


// ============================================================

// Address: 0x5124b0
// Original: _ZNK32CTaskComplexMedicTreatInjuredPed11GetTaskTypeEv
// Demangled: CTaskComplexMedicTreatInjuredPed::GetTaskType(void)
int __fastcall CTaskComplexMedicTreatInjuredPed::GetTaskType(CTaskComplexMedicTreatInjuredPed *this)
{
  return 100;
}


// ============================================================

// Address: 0x5124b4
// Original: _ZN32CTaskComplexMedicTreatInjuredPed9SerializeEv
// Demangled: CTaskComplexMedicTreatInjuredPed::Serialize(void)
int __fastcall CTaskComplexMedicTreatInjuredPed::Serialize(CTaskComplexMedicTreatInjuredPed *this)
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
  CPed *v14; // r0
  int v15; // r5
  CGenericGameStorage *v16; // r6
  int v17; // r2
  CGenericGameStorage *v18; // r0
  CGenericGameStorage *v19; // r5
  int v20; // r2
  int v21; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexMedicTreatInjuredPed *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexMedicTreatInjuredPed *))(*(_DWORD *)this + 20))(this) == 100 )
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
    v14 = (CPed *)*((_DWORD *)this + 4);
    if ( v14 )
    {
      v15 = GettPoolPedRef(v14);
      if ( UseDataFence )
        AddDataFence();
      v16 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v16 = v15;
      CGenericGameStorage::_SaveDataToWorkBuffer(v16, byte_4, v17);
      v18 = v16;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v19 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v19 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v19, byte_4, v20);
      v18 = v19;
    }
    free(v18);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexMedicTreatInjuredPed *)((char *)this + 20), (char *)&stderr + 1, v21);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexMedicTreatInjuredPed *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(100, v10);
  }
}


// ============================================================
