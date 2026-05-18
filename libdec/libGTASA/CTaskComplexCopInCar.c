
// Address: 0x1902e4
// Original: j__ZN20CTaskComplexCopInCarC2EP8CVehicleP4CPedS3_b
// Demangled: CTaskComplexCopInCar::CTaskComplexCopInCar(CVehicle *,CPed *,CPed *,bool)
// attributes: thunk
void __fastcall CTaskComplexCopInCar::CTaskComplexCopInCar(
        CTaskComplexCopInCar *this,
        CVehicle *a2,
        CPed *a3,
        CPed *a4,
        bool a5)
{
  _ZN20CTaskComplexCopInCarC2EP8CVehicleP4CPedS3_b(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x53fbbc
// Original: _ZN20CTaskComplexCopInCarC2EP8CVehicleP4CPedS3_b
// Demangled: CTaskComplexCopInCar::CTaskComplexCopInCar(CVehicle *,CPed *,CPed *,bool)
void __fastcall CTaskComplexCopInCar::CTaskComplexCopInCar(
        CTaskComplexCopInCar *this,
        CVehicle *a2,
        CPed *a3,
        CPed *a4,
        bool a5)
{
  char v9; // r3
  CEntity **v10; // r6

  CTaskComplex::CTaskComplex(this);
  *((_WORD *)this + 16) = 0;
  *((_WORD *)this + 22) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  v9 = *((_BYTE *)this + 48);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &off_66D088;
  *((_BYTE *)this + 48) = v9 & 0xFA | a5 | 4;
  *((_DWORD *)this + 5) = a4;
  v10 = (CEntity **)((char *)this + 20);
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
    a3 = (CPed *)*((_DWORD *)this + 4);
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
  if ( *v10 )
    CEntity::RegisterReference(*v10, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x53fc48
// Original: _ZN20CTaskComplexCopInCarD2Ev
// Demangled: CTaskComplexCopInCar::~CTaskComplexCopInCar()
void __fastcall CTaskComplexCopInCar::~CTaskComplexCopInCar(CTaskComplexCopInCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  CEntity *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D088;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
  v5 = (CEntity *)*((_DWORD *)this + 5);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 5);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x53fc90
// Original: _ZN20CTaskComplexCopInCarD0Ev
// Demangled: CTaskComplexCopInCar::~CTaskComplexCopInCar()
void __fastcall CTaskComplexCopInCar::~CTaskComplexCopInCar(CTaskComplexCopInCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  CEntity *v5; // r0
  void *v6; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66D088;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
  v5 = (CEntity *)*((_DWORD *)this + 5);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 5);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x53fcdc
// Original: _ZN20CTaskComplexCopInCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexCopInCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexCopInCar::MakeAbortable(CTaskComplexCopInCar *this, CVehicle **a2, int a3, const CEvent *a4)
{
  int v6; // r0
  int result; // r0
  bool v9; // zf
  CVehicle *v10; // r2

  v6 = *((_DWORD *)this + 2);
  if ( !v6 )
    return 1;
  result = (*(int (__fastcall **)(int, CVehicle **, int, const CEvent *))(*(_DWORD *)v6 + 28))(v6, a2, a3, a4);
  if ( a4 && result == 1 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 9 || !*((_BYTE *)a4 + 60) )
      return 1;
    v9 = *((_BYTE *)a4 + 9) == 0;
    if ( *((_BYTE *)a4 + 9) )
      v9 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
    if ( v9 )
      return 1;
    v10 = (CVehicle *)*((_DWORD *)this + 3);
    result = 1;
    if ( a2[356] == v10 )
    {
      if ( v10 )
      {
        if ( CVehicle::IsDriver(a2[356], (const CPed *)a2) == 1 )
        {
          *(_BYTE *)(*((_DWORD *)this + 3) + 58) = *(_BYTE *)(*((_DWORD *)this + 3) + 58) & 7 | 0x20;
          *(_BYTE *)(*((_DWORD *)this + 3) + 958) = 0;
          *(_BYTE *)(*((_DWORD *)this + 3) + 980) = 0;
        }
        return 1;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x53fd64
// Original: _ZN20CTaskComplexCopInCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexCopInCar::CreateFirstSubTask(CPed *)
CTaskSimpleCarDrive *__fastcall CTaskComplexCopInCar::CreateFirstSubTask(
        CTaskComplexCopInCar *this,
        CPedIntelligence **a2)
{
  unsigned int v3; // r1
  CTaskSimpleCarDrive *v4; // r0

  CPedIntelligence::SetPedDecisionMakerType(a2[272], 6);
  if ( !*((_DWORD *)this + 4) )
    *((_BYTE *)this + 48) |= 1u;
  v4 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, v3);
  return j_CTaskSimpleCarDrive::CTaskSimpleCarDrive(v4, *((CVehicle **)this + 3), 0, 0);
}


// ============================================================

// Address: 0x53fd9c
// Original: _ZNK20CTaskComplexCopInCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexCopInCar::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexCopInCar::CreateSubTask(CVehicle **this, int a2, CPedIntelligence **a3)
{
  int v4; // r4
  unsigned int v5; // r1
  char v6; // r2
  unsigned int v7; // r1
  unsigned int v8; // r1
  CVehicle *v9; // r1
  CCarAI *v10; // r0
  CVehicle **v11; // r6
  int PoliceCarMissionForWantedLevel; // r8
  float PoliceCarSpeedForWantedLevel; // s16
  unsigned __int16 v14; // r0
  CTaskComplexCarDriveMission *v15; // r0
  CVehicle *v16; // r2

  v4 = 0;
  if ( a2 >= 912 )
  {
    if ( a2 == 912 )
    {
      v4 = CTask::operator new((CTask *)&dword_50, 0x390u);
      v14 = rand();
      CTaskComplexWander::CTaskComplexWander(
        (CTaskComplexWander *)v4,
        4,
        (int)(float)((float)((float)v14 * 0.000015259) * 8.0),
        1,
        0.5);
      *(_QWORD *)(v4 + 56) = 0LL;
      *(_QWORD *)(v4 + 64) = 0LL;
      *(_DWORD *)(v4 + 50) = 0;
      *(_DWORD *)(v4 + 46) = 0;
      *(_DWORD *)v4 = &off_66C5E8;
      *(_DWORD *)(v4 + 74) = 0;
      *(_DWORD *)(v4 + 70) = 0;
      *(_DWORD *)(v4 + 40) = 0;
      *(_DWORD *)(v4 + 44) = 0;
    }
    else if ( a2 == 1103 )
    {
      v4 = CTask::operator new((CTask *)&off_18, 0x44Fu);
      CTaskComplex::CTaskComplex((CTaskComplex *)v4);
      v6 = *(_BYTE *)(v4 + 12);
      *(_DWORD *)(v4 + 16) = 0;
      *(_DWORD *)(v4 + 20) = 0;
      *(_DWORD *)v4 = &off_66D010;
      *(_BYTE *)(v4 + 12) = v6 & 0xF8 | 4;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 700:
        CPedIntelligence::SetPedDecisionMakerType(a3[272], 6);
        v4 = CTask::operator new((CTask *)&dword_50, v5);
        CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(
          (CTaskComplexEnterCarAsPassenger *)v4,
          this[3],
          0,
          0);
        break;
      case 701:
        CPedIntelligence::SetPedDecisionMakerType(a3[272], 6);
        v4 = CTask::operator new((CTask *)&dword_50, v7);
        CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver((CTaskComplexEnterCarAsDriver *)v4, this[3]);
        break;
      case 702:
      case 703:
      case 705:
      case 706:
      case 707:
      case 708:
      case 710:
      case 711:
      case 712:
      case 713:
      case 714:
      case 715:
      case 716:
      case 717:
      case 718:
      case 719:
      case 720:
      case 721:
      case 722:
      case 723:
        return v4;
      case 704:
        CPedIntelligence::SetPedDecisionMakerType(a3[272], 1);
        v4 = CTask::operator new((CTask *)&dword_34, v8);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v4, this[3], 0, 0, 1, 0);
        break;
      case 709:
        v4 = CTask::operator new((CTask *)&dword_60, a2);
        CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v4, this[3], 0, 0);
        break;
      case 724:
        if ( CPed::IsPlayer(this[5]) == 1 )
        {
          v10 = (CCarAI *)(*((unsigned __int8 *)this[5] + 1157) << 31);
          if ( v10 )
          {
            PoliceCarMissionForWantedLevel = CCarAI::FindPoliceCarMissionForWantedLevel(v10);
            v11 = this + 3;
          }
          else
          {
            v11 = this + 3;
            PoliceCarMissionForWantedLevel = 43;
          }
          PoliceCarSpeedForWantedLevel = (float)CCarAI::FindPoliceCarSpeedForWantedLevel(this[3], v9);
        }
        else
        {
          v11 = this + 3;
          PoliceCarSpeedForWantedLevel = (float)(*(float *)(*((_DWORD *)this[3] + 226) + 136) * 60.0) * 0.9;
          if ( *((unsigned __int8 *)this[5] + 1157) << 31 )
          {
            PoliceCarMissionForWantedLevel = 2;
            if ( (rand() & 2u) < 2 )
              PoliceCarMissionForWantedLevel = 4;
          }
          else
          {
            PoliceCarMissionForWantedLevel = 55;
          }
        }
        v15 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, (unsigned int)v9);
        v16 = this[5];
        v4 = (int)v15;
        if ( *((unsigned __int8 *)v16 + 1157) << 31 )
          v16 = (CVehicle *)*((_DWORD *)v16 + 356);
        CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
          v15,
          *v11,
          v16,
          PoliceCarMissionForWantedLevel,
          (int)PoliceCarSpeedForWantedLevel,
          10.0);
        break;
      default:
        if ( a2 == 203 )
        {
          v4 = CTask::operator new((CTask *)&dword_20, 0xCBu);
          CTaskSimpleStandStill::CTaskSimpleStandStill((CTaskSimpleStandStill *)v4, 1000, 1, 0, 8.0);
        }
        break;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x540014
// Original: _ZN20CTaskComplexCopInCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexCopInCar::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexCopInCar::CreateNextSubTask(CTaskComplexCopInCar *this, CPed *a2)
{
  int v4; // r0
  int v5; // r5
  int result; // r0
  int v7; // r0
  unsigned int v8; // r1
  bool v9; // zf
  CVehicle *v10; // r0
  int v11; // r5
  CWanted *PlayerWanted; // r0
  __int64 v13; // r0
  unsigned __int16 v14; // r0
  char v15; // r2
  unsigned int v16; // r1
  char v17; // r1
  int v18; // r0
  CVehicle **v19; // r0
  int v20; // r1
  _DWORD *v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  float *v25; // r0
  float *v26; // r1
  int v27; // r0

  v4 = *((_DWORD *)this + 5);
  if ( v4 && *(_DWORD *)(v4 + 1100) != 55 )
  {
    v7 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
    v8 = v7 - 700;
    v5 = 0;
    switch ( v7 )
    {
      case 700:
      case 701:
        v10 = (CVehicle *)(*((unsigned __int8 *)a2 + 1157) << 31);
        v9 = v10 == 0;
        if ( v10 )
        {
          v10 = (CVehicle *)*((_DWORD *)a2 + 356);
          v9 = v10 == 0;
        }
        if ( v9 )
          goto LABEL_16;
        CVehicle::ChangeLawEnforcerState(v10, 1u);
        v17 = *((_BYTE *)this + 48);
        v18 = *((_DWORD *)this + 5);
        *((_BYTE *)this + 48) = v17 & 0xFB;
        *((_BYTE *)this + 48) = (*(_DWORD *)(v18 + 1156) >> 5) & 8 | v17 & 0xF3;
        v19 = (CVehicle **)this;
        v20 = 724;
        goto LABEL_19;
      case 702:
      case 703:
      case 705:
      case 706:
      case 707:
      case 708:
      case 710:
      case 711:
      case 712:
      case 713:
      case 714:
      case 715:
      case 716:
      case 717:
      case 718:
      case 719:
      case 720:
      case 721:
      case 722:
      case 723:
        return v5;
      case 704:
LABEL_16:
        v5 = CTask::operator new((CTask *)&off_18, v8);
        CTaskComplex::CTaskComplex((CTaskComplex *)v5);
        v15 = *(_BYTE *)(v5 + 12);
        *(_DWORD *)(v5 + 16) = 0;
        *(_DWORD *)(v5 + 20) = 0;
        *(_DWORD *)v5 = &off_66D010;
        *(_BYTE *)(v5 + 12) = v15 & 0xF8 | 4;
        return v5;
      case 709:
        *(_BYTE *)(*((_DWORD *)this + 3) + 958) = 0;
        CPedIntelligence::SetPedDecisionMakerType(*((CPedIntelligence **)a2 + 272), 1);
        v5 = CTask::operator new((CTask *)&dword_34, v16);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar((CTaskComplexLeaveCar *)v5, *((CVehicle **)this + 3), 0, 0, 1, 0);
        return v5;
      case 724:
        *((_BYTE *)this + 48) |= 2u;
        v5 = CTask::operator new((CTask *)&dword_60, v8);
        CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, *((CVehicle **)this + 3), 0, 0);
        return v5;
      default:
        if ( v7 != 1103 )
          return v5;
        v11 = *((_DWORD *)this + 2);
        PlayerWanted = (CWanted *)FindPlayerWanted(-1);
        if ( !*((_DWORD *)PlayerWanted + 11) )
          return 0;
        if ( CWanted::CanCopJoinPursuit(PlayerWanted, a2) != 1 || (*(_BYTE *)(v11 + 12) & 4) == 0 )
          goto LABEL_15;
        v21 = (_DWORD *)*((_DWORD *)this + 5);
        if ( (v21[291] & 0x40) != 0 )
          return 0;
        if ( (v21[289] & 0x100) == 0 || (v22 = *((_DWORD *)this + 3), v21[356] == v22) || !v22 )
        {
LABEL_15:
          v13 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xBB800000000LL;
          *((_BYTE *)this + 44) = 1;
          *(_QWORD *)((char *)this + 36) = v13;
          v5 = CTask::operator new((CTask *)&dword_50, HIDWORD(v13));
          v14 = rand();
          CTaskComplexWander::CTaskComplexWander(
            (CTaskComplexWander *)v5,
            4,
            (int)(float)((float)((float)v14 * 0.000015259) * 8.0),
            1,
            0.5);
          *(_QWORD *)(v5 + 56) = 0LL;
          *(_QWORD *)(v5 + 64) = 0LL;
          *(_DWORD *)(v5 + 50) = 0;
          *(_DWORD *)(v5 + 46) = 0;
          *(_DWORD *)v5 = &off_66C5E8;
          *(_DWORD *)(v5 + 40) = 0;
          *(_DWORD *)(v5 + 44) = 0;
          *(_DWORD *)(v5 + 74) = 0;
          *(_DWORD *)(v5 + 70) = 0;
          return v5;
        }
        v23 = *(_DWORD *)(v22 + 20);
        v24 = *((_DWORD *)a2 + 5);
        v25 = (float *)(v23 + 48);
        if ( !v23 )
          v25 = (float *)(v22 + 4);
        v26 = (float *)(v24 + 48);
        if ( !v24 )
          v26 = (float *)((char *)a2 + 4);
        if ( !(*((unsigned __int8 *)this + 48) << 31) )
          goto LABEL_35;
        if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        {
          v20 = 709;
        }
        else if ( (float)((float)((float)((float)(*v26 - *v25) * (float)(*v26 - *v25))
                                + (float)((float)(v26[1] - v25[1]) * (float)(v26[1] - v25[1])))
                        + (float)((float)(v26[2] - v25[2]) * (float)(v26[2] - v25[2]))) >= 16.0 )
        {
LABEL_35:
          v27 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 44) = 1;
          *((_DWORD *)this + 9) = v27;
          *((_DWORD *)this + 10) = 3000;
          v20 = 912;
        }
        else
        {
          v20 = 701;
        }
        v19 = (CVehicle **)this;
LABEL_19:
        result = CTaskComplexCopInCar::CreateSubTask(v19, v20, (CPedIntelligence **)a2);
        break;
    }
  }
  else
  {
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x5403bc
// Original: _ZN20CTaskComplexCopInCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexCopInCar::ControlSubTask(CPed *)
int __fastcall CTaskComplexCopInCar::ControlSubTask(CTaskComplexCopInCar *this, CPed *a2)
{
  int v4; // r0
  int v5; // r4
  bool v6; // zf
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r0
  unsigned int v12; // r0
  unsigned int v13; // r0
  char v14; // r1
  int v15; // r0
  int v16; // r1
  bool v17; // zf
  bool v18; // zf
  int v19; // r2
  int v20; // r12
  int v21; // r1
  float *v22; // r3
  int v23; // r0
  float v24; // s4
  int v25; // r2
  float v26; // s2
  float v27; // s6
  float v28; // s0
  float v29; // s8
  float v30; // s10
  float *v31; // r3
  float *v32; // r1
  float v33; // s4
  float v34; // s0
  unsigned int v35; // r1
  int v36; // r8
  int v37; // r0
  char v38; // r1
  unsigned int v39; // r0
  unsigned int v40; // r1
  unsigned int v41; // r1
  int v42; // r0
  int v43; // r0
  bool v44; // zf
  int v45; // r1
  int v46; // r2
  char *v47; // r3
  int v48; // r1
  float32x2_t v49; // d16
  unsigned __int64 v50; // d1
  char v51; // r1
  int v52; // r0
  unsigned int v53; // r1
  char v54; // r1
  unsigned __int16 v55; // r0
  int *v56; // r2
  float v57; // s2
  int v58; // r2
  unsigned int v59; // r0
  unsigned int v60; // r1

  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 2);
  v6 = v4 == 0;
  if ( v4 )
    v6 = *(_DWORD *)(v4 + 1100) == 55;
  if ( v6 )
  {
    if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) )
      return 0;
    return v5;
  }
  v8 = *((_DWORD *)this + 3);
  if ( v8 && !*(_DWORD *)(v8 + 1124) && *(_BYTE *)(v8 + 958) )
    *(_BYTE *)(v8 + 958) = 0;
  if ( (*((_BYTE *)this + 48) & 1) == 0 )
  {
    v9 = *((_DWORD *)this + 4);
    v10 = v9 == 0;
    if ( v9 )
      v10 = *(_DWORD *)(v9 + 1100) == 55;
    if ( v10 )
      *((_BYTE *)this + 48) |= 1u;
  }
  v11 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v11 >= 912 )
  {
    if ( v11 == 912 )
    {
      if ( *((_BYTE *)this + 44) )
      {
        if ( *((_BYTE *)this + 45) )
        {
          v39 = CTimer::m_snTimeInMilliseconds;
          *((_BYTE *)this + 45) = 0;
          *((_DWORD *)this + 9) = v39;
          v40 = v39;
        }
        else
        {
          v40 = *((_DWORD *)this + 9);
          v39 = CTimer::m_snTimeInMilliseconds;
        }
        if ( v40 + *((_DWORD *)this + 10) <= v39
          && (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) == 1 )
        {
          v5 = CTask::operator new((CTask *)&off_18, v53);
          CTaskComplex::CTaskComplex((CTaskComplex *)v5);
          v54 = *(_BYTE *)(v5 + 12);
          *(_DWORD *)(v5 + 16) = 0;
          *(_DWORD *)(v5 + 20) = 0;
          *(_DWORD *)v5 = &off_66D010;
          *(_BYTE *)(v5 + 12) = v54 & 0xF8 | 4;
        }
      }
    }
    else if ( v11 == 1103 )
    {
      v15 = *((_DWORD *)this + 5);
      if ( *(unsigned __int8 *)(v15 + 1157) << 31 )
      {
        v16 = *(_DWORD *)(v15 + 1424);
        v17 = v16 == 0;
        if ( v16 )
        {
          v15 = *((_DWORD *)this + 3);
          v17 = v16 == v15;
        }
        if ( !v17 )
        {
          v18 = v15 == 0;
          if ( v15 )
            v18 = *((unsigned __int8 *)this + 48) << 31 == 0;
          if ( !v18
            && *(float *)(v15 + 1228) > 0.0
            && !*(_DWORD *)(v15 + 1172)
            && !CVehicle::IsUpsideDown((CVehicle *)v15)
            && !CVehicle::IsOnItsSide(*((CVehicle **)this + 3)) )
          {
            v19 = *((_DWORD *)a2 + 5);
            v20 = *((_DWORD *)this + 3);
            v21 = *(_DWORD *)(*((_DWORD *)this + 5) + 1424);
            v22 = (float *)(v19 + 48);
            v23 = *(_DWORD *)(v20 + 20);
            v24 = *(float *)(v21 + 80);
            if ( !v19 )
              v22 = (float *)((char *)a2 + 4);
            v25 = *(_DWORD *)(v21 + 20);
            v26 = *(float *)(v21 + 76) * *(float *)(v21 + 76);
            v27 = *v22;
            v28 = *(float *)(v21 + 72) * *(float *)(v21 + 72);
            v29 = v22[1];
            v30 = v22[2];
            v31 = (float *)(v25 + 48);
            if ( !v25 )
              v31 = (float *)(v21 + 4);
            v32 = (float *)(v23 + 48);
            v33 = v24 * v24;
            if ( !v23 )
              v32 = (float *)(v20 + 4);
            v34 = (float)(*(float *)&CTimer::ms_fTimeStep * (float)((float)(v28 + v26) + v33)) * 50.0;
            if ( (float)((float)((float)((float)(*v32 - v27) * (float)(*v32 - v27))
                               + (float)((float)(v32[1] - v29) * (float)(v32[1] - v29)))
                       + (float)((float)(v32[2] - v30) * (float)(v32[2] - v30))) < 16.0
              && (v34 > 1.0
               || (float)((float)((float)((float)(*v31 - v27) * (float)(*v31 - v27))
                                + (float)((float)(v31[1] - v29) * (float)(v31[1] - v29)))
                        + (float)((float)(v31[2] - v30) * (float)(v31[2] - v30))) > 100.0)
              && (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) == 1 )
            {
              CPedIntelligence::SetPedDecisionMakerType(*((CPedIntelligence **)a2 + 272), 6);
              v5 = CTask::operator new((CTask *)&dword_50, v35);
              CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(
                (CTaskComplexEnterCarAsDriver *)v5,
                *((CVehicle **)this + 3));
            }
          }
        }
      }
    }
    return v5;
  }
  if ( v11 != 709 )
  {
    if ( v11 == 724 )
    {
      v12 = *((unsigned __int8 *)this + 48);
      if ( ((*(_DWORD *)(*((_DWORD *)this + 5) + 1156) >> 8) & 1) != ((v12 >> 3) & 1) )
      {
        if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) )
        {
          v13 = *(_DWORD *)(*((_DWORD *)this + 5) + 1156);
          v14 = *((_BYTE *)this + 48) & 0xF7;
LABEL_24:
          *((_BYTE *)this + 48) = (v13 >> 5) & 8 | v14;
          return CTaskComplexCopInCar::CreateSubTask((CVehicle **)this, 724, (CPedIntelligence **)a2);
        }
        LOBYTE(v12) = *((_BYTE *)this + 48);
      }
      if ( (v12 & 2) != 0 && (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) == 1 )
      {
        v5 = CTask::operator new((CTask *)&dword_60, v41);
        CTaskSimpleCarDrive::CTaskSimpleCarDrive((CTaskSimpleCarDrive *)v5, *((CVehicle **)this + 3), 0, 0);
      }
    }
    return v5;
  }
  v36 = *((unsigned __int8 *)this + 48);
  if ( (v36 & 2) == 0 )
    return v5;
  if ( v36 << 31 )
  {
    if ( !*((_BYTE *)this + 32) )
    {
      v55 = rand();
      v56 = dword_540908;
      if ( (v36 & 4) != 0 )
        v56 = &dword_540908[1];
      v57 = *(float *)v56;
      *((_DWORD *)this + 6) = CTimer::m_snTimeInMilliseconds;
      v58 = 250;
      *((_BYTE *)this + 32) = 1;
      if ( (v36 & 4) != 0 )
        v58 = 3000;
      *((_DWORD *)this + 7) = (int)(float)(v57 * (float)((float)v55 * 0.000015259)) + v58;
      return v5;
    }
    v42 = *((_DWORD *)this + 5);
    if ( *(unsigned __int8 *)(v42 + 1157) << 31 )
    {
      v43 = *(_DWORD *)(v42 + 1424);
      v44 = v43 == 0;
      if ( v43 )
        v44 = v43 == *((_DWORD *)this + 3);
      if ( !v44 )
      {
        v45 = *((_DWORD *)a2 + 5);
        v46 = *(_DWORD *)(v43 + 20);
        v47 = (char *)(v45 + 48);
        if ( !v45 )
          v47 = (char *)a2 + 4;
        v48 = v46 + 48;
        if ( !v46 )
          v48 = v43 + 4;
        v49.n64_u64[0] = vsub_f32(*(float32x2_t *)(v48 + 4), *(float32x2_t *)(v47 + 4)).n64_u64[0];
        v50 = vmul_f32(v49, v49).n64_u64[0];
        if ( (float)((float)((float)((float)(*(float *)v48 - *(float *)v47) * (float)(*(float *)v48 - *(float *)v47))
                           + *(float *)&v50)
                   + *((float *)&v50 + 1)) > 100.0
          || (float)((float)(*(float *)&CTimer::ms_fTimeStep
                           * (float)((float)((float)(*(float *)(v43 + 72) * *(float *)(v43 + 72))
                                           + (float)(*(float *)(v43 + 76) * *(float *)(v43 + 76)))
                                   + (float)(*(float *)(v43 + 80) * *(float *)(v43 + 80))))
                   * 50.0) > 1.0 )
        {
          if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) == 1 )
          {
            v51 = *((_BYTE *)this + 48);
            v52 = *((_DWORD *)this + 5);
            *((_BYTE *)this + 32) = 0;
            *((_BYTE *)this + 48) = v51 & 0xF9;
            v13 = *(_DWORD *)(v52 + 1156);
            v14 = v51 & 0xF1;
            goto LABEL_24;
          }
          if ( !*((_BYTE *)this + 32) )
            return v5;
        }
      }
    }
    if ( *((_BYTE *)this + 33) )
    {
      v59 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 33) = 0;
      *((_DWORD *)this + 6) = v59;
      v60 = v59;
    }
    else
    {
      v60 = *((_DWORD *)this + 6);
      v59 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v60 + *((_DWORD *)this + 7) > v59
      || (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) != 1 )
    {
      return v5;
    }
    v37 = *(_DWORD *)this;
    v38 = *((_BYTE *)this + 48);
    *((_BYTE *)this + 32) = 0;
  }
  else
  {
    if ( (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v5 + 28))(v5, a2, 1, 0) != 1 )
      return v5;
    v37 = *(_DWORD *)this;
    v38 = *((_BYTE *)this + 48);
  }
  *((_BYTE *)this + 48) = v38 & 0xFD;
  return (*(int (__fastcall **)(CTaskComplexCopInCar *, CPed *))(v37 + 40))(this, a2);
}


// ============================================================

// Address: 0x540a60
// Original: _ZNK20CTaskComplexCopInCar5CloneEv
// Demangled: CTaskComplexCopInCar::Clone(void)
int __fastcall CTaskComplexCopInCar::Clone(CTaskComplexCopInCar *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r8
  CEntity *v5; // r9
  int v6; // r10
  char v7; // r1
  CEntity **v8; // r6

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = (CEntity *)*((_DWORD *)this + 4);
  v6 = *((_DWORD *)this + 5);
  LOBYTE(this) = *((_BYTE *)this + 48);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_WORD *)(v3 + 32) = 0;
  *(_WORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 36) = 0;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  v7 = *(_BYTE *)(v3 + 48);
  *(_DWORD *)v3 = &off_66D088;
  *(_BYTE *)(v3 + 48) = (unsigned __int8)this & 1 | v7 & 0xFA | 4;
  *(_DWORD *)(v3 + 20) = v6;
  v8 = (CEntity **)(v3 + 20);
  *(_DWORD *)(v3 + 16) = v5;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
    v5 = *(CEntity **)(v3 + 16);
  }
  if ( v5 )
    CEntity::RegisterReference(v5, (CEntity **)(v3 + 16));
  if ( *v8 )
    CEntity::RegisterReference(*v8, (CEntity **)(v3 + 20));
  return v3;
}


// ============================================================

// Address: 0x540afc
// Original: _ZNK20CTaskComplexCopInCar11GetTaskTypeEv
// Demangled: CTaskComplexCopInCar::GetTaskType(void)
int __fastcall CTaskComplexCopInCar::GetTaskType(CTaskComplexCopInCar *this)
{
  return 1106;
}


// ============================================================
