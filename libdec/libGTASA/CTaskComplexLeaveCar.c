
// Address: 0x18de84
// Original: j__ZN20CTaskComplexLeaveCar24PrepareVehicleForPedExitEP4CPed
// Demangled: CTaskComplexLeaveCar::PrepareVehicleForPedExit(CPed *)
// attributes: thunk
int __fastcall CTaskComplexLeaveCar::PrepareVehicleForPedExit(CTaskComplexLeaveCar *this, CPed *a2)
{
  return _ZN20CTaskComplexLeaveCar24PrepareVehicleForPedExitEP4CPed(this, a2);
}


// ============================================================

// Address: 0x192570
// Original: j__ZN20CTaskComplexLeaveCar10CreateTaskEv
// Demangled: CTaskComplexLeaveCar::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexLeaveCar::CreateTask(CTaskComplexLeaveCar *this)
{
  return _ZN20CTaskComplexLeaveCar10CreateTaskEv(this);
}


// ============================================================

// Address: 0x194028
// Original: j__ZN20CTaskComplexLeaveCarD2Ev
// Demangled: CTaskComplexLeaveCar::~CTaskComplexLeaveCar()
// attributes: thunk
void __fastcall CTaskComplexLeaveCar::~CTaskComplexLeaveCar(CTaskComplexLeaveCar *this)
{
  _ZN20CTaskComplexLeaveCarD2Ev(this);
}


// ============================================================

// Address: 0x1940b4
// Original: j__ZN20CTaskComplexLeaveCarC2EP8CVehicleiibb
// Demangled: CTaskComplexLeaveCar::CTaskComplexLeaveCar(CVehicle *,int,int,bool,bool)
// attributes: thunk
void __fastcall CTaskComplexLeaveCar::CTaskComplexLeaveCar(
        CTaskComplexLeaveCar *this,
        CVehicle *a2,
        int a3,
        int a4,
        bool a5,
        bool a6)
{
  _ZN20CTaskComplexLeaveCarC2EP8CVehicleiibb(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1966f0
// Original: j__ZN20CTaskComplexLeaveCarD2Ev_0
// Demangled: CTaskComplexLeaveCar::~CTaskComplexLeaveCar()
// attributes: thunk
void __fastcall CTaskComplexLeaveCar::~CTaskComplexLeaveCar(CTaskComplexLeaveCar *this)
{
  _ZN20CTaskComplexLeaveCarD2Ev(this);
}


// ============================================================

// Address: 0x19f3cc
// Original: j__ZN20CTaskComplexLeaveCarC2EP8CVehicleiibb_0
// Demangled: CTaskComplexLeaveCar::CTaskComplexLeaveCar(CVehicle *,int,int,bool,bool)
// attributes: thunk
void __fastcall CTaskComplexLeaveCar::CTaskComplexLeaveCar(
        CTaskComplexLeaveCar *this,
        CVehicle *a2,
        int a3,
        int a4,
        bool a5,
        bool a6)
{
  _ZN20CTaskComplexLeaveCarC2EP8CVehicleiibb(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1a0884
// Original: j__ZN20CTaskComplexLeaveCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexLeaveCar::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexLeaveCar::CreateSubTask(CTaskComplexLeaveCar *this, int a2, CPed *a3)
{
  return _ZN20CTaskComplexLeaveCar13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x493044
// Original: _ZN20CTaskComplexLeaveCar10CreateTaskEv
// Demangled: CTaskComplexLeaveCar::CreateTask(void)
void __fastcall CTaskComplexLeaveCar::CreateTask(CTaskComplexLeaveCar *this, int a2, int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r4
  char v6; // r5
  int v7; // r2
  char v8; // r5
  int v9; // r2
  char v10; // r5
  int v11; // r2
  char v12; // r5
  unsigned int v13; // r1
  CTaskComplexLeaveCar *v14; // r0
  bool v15; // [sp+Fh] [bp-21h] BYREF
  int v16; // [sp+10h] [bp-20h] BYREF
  int v17; // [sp+14h] [bp-1Ch] BYREF
  CPools *v18; // [sp+18h] [bp-18h] BYREF
  bool v19[18]; // [sp+1Eh] [bp-12h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v18, byte_4, a3);
  if ( v18 == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v18, (int)v18 + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v17, byte_4, v4);
  v8 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, (char *)&stderr + 2, v7);
    UseDataFence = v8;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v16, byte_4, v7);
  v10 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 2, v9);
    UseDataFence = v10;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 1, v9);
  v12 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 2, v11);
    UseDataFence = v12;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v19, (char *)&stderr + 1, v11);
  v14 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v13);
  CTaskComplexLeaveCar::CTaskComplexLeaveCar(v14, Vehicle, v17, v16, v15, v19[0]);
}


// ============================================================

// Address: 0x4f8904
// Original: _ZN20CTaskComplexLeaveCarC2EP8CVehicleiibb
// Demangled: CTaskComplexLeaveCar::CTaskComplexLeaveCar(CVehicle *,int,int,bool,bool)
void __fastcall CTaskComplexLeaveCar::CTaskComplexLeaveCar(
        CTaskComplexLeaveCar *this,
        CVehicle *a2,
        int a3,
        int a4,
        bool a5,
        bool a6)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_BYTE *)this + 24) = a5;
  *((_BYTE *)this + 25) = a6;
  *((_BYTE *)this + 26) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 32) = 0;
  *((_BYTE *)this + 33) = 0;
  *((_DWORD *)this + 9) = 15;
  *((_DWORD *)this + 10) = 1082130432;
  *((_DWORD *)this + 11) = 1065353216;
  *((_BYTE *)this + 48) = 0;
  *(_DWORD *)this = &off_66ABEC;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x4f8974
// Original: _ZN20CTaskComplexLeaveCarD0Ev
// Demangled: CTaskComplexLeaveCar::~CTaskComplexLeaveCar()
void __fastcall CTaskComplexLeaveCar::~CTaskComplexLeaveCar(CTaskComplexLeaveCar *this)
{
  void *v1; // r0

  CTaskComplexLeaveCar::~CTaskComplexLeaveCar(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f8984
// Original: _ZN20CTaskComplexLeaveCar13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexLeaveCar::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexLeaveCar::MakeAbortable(CTaskComplexLeaveCar *this, CPed *a2, int a3, const CEvent *a4)
{
  int v7; // r2
  CTaskSimpleCarCloseDoorFromOutside *v8; // r0
  CTaskSimpleCarSetPedOut *v9; // r0
  int v10; // r0
  char v11; // r1
  int v12; // r5
  int v13; // r5
  int v14; // r0
  int v15; // r0
  char v16; // r1
  bool v17; // zf
  int v18; // r0
  bool v19; // zf
  int v20; // r0
  int v22; // r0
  CVector *v23; // r0
  int v24; // r1
  _BYTE v25[44]; // [sp+1Ch] [bp-5Ch] BYREF
  _BYTE v26[48]; // [sp+48h] [bp-30h] BYREF

  if ( !*((_DWORD *)this + 3) )
    return 1;
  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      (*(void (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
        *((_DWORD *)this + 2),
        a2,
        2,
        a4);
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      {
        v7 = *((_DWORD *)this + 4);
        if ( !v7 )
        {
          v7 = CCarEnterExit::ComputeTargetDoorToExit(*((CCarEnterExit **)this + 3), a2, 0);
          *((_DWORD *)this + 4) = v7;
        }
        CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
          (CTaskSimpleCarCloseDoorFromOutside *)v25,
          *((CVehicle **)this + 3),
          v7,
          0);
        CTaskSimpleCarCloseDoorFromOutside::MakeAbortable(v8, a2, 2, a4);
        CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
          (CTaskSimpleCarSetPedOut *)v26,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          *((_BYTE *)this + 24));
        CTaskSimpleCarSetPedOut::ProcessPed(v9, a2);
        CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v26);
        CTaskSimpleCarCloseDoorFromOutside::~CTaskSimpleCarCloseDoorFromOutside((CTaskSimpleCarCloseDoorFromOutside *)v25);
      }
      CVehicle::ClearGettingOutFlags(*((CVehicle **)this + 3), *((_BYTE *)this + 32));
      v10 = *((_DWORD *)this + 3);
      v11 = *((_BYTE *)this + 33);
      v12 = 1;
      *((_BYTE *)this + 32) = 0;
      *(_BYTE *)(v10 + 1161) -= v11;
      *((_BYTE *)this + 33) = 0;
      return v12;
    }
    return 0;
  }
  v13 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v14 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v13 == 212 )
  {
    if ( v14 != 719 )
    {
LABEL_12:
      v12 = 0;
      if ( (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             1,
             a4) == 1 )
      {
        CVehicle::ClearGettingOutFlags(*((CVehicle **)this + 3), *((_BYTE *)this + 32));
        v15 = *((_DWORD *)this + 3);
        v16 = *((_BYTE *)this + 33);
        *((_BYTE *)this + 32) = 0;
        *(_BYTE *)(v15 + 1161) -= v16;
        *((_BYTE *)this + 33) = 0;
        return 1;
      }
      return v12;
    }
    return 0;
  }
  if ( a4 && v14 == 809 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v17 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v17 = *((_BYTE *)a4 + 9) == 0;
    if ( !v17 )
      goto LABEL_12;
  }
  v18 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( a4 && v18 == 206 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v19 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v19 = *((_BYTE *)a4 + 9) == 0;
    if ( !v19 )
      goto LABEL_12;
  }
  v20 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( !a4
    || v20 != 814
    || (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 33
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 66 )
  {
    if ( a4 && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 719 )
      return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
               *((_DWORD *)this + 2),
               a2,
               1,
               a4);
    return 0;
  }
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 33 )
    *((_BYTE *)this + 48) = 1;
  if ( (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
         *((_DWORD *)this + 2),
         a2,
         1,
         a4) != 1 )
    return 0;
  if ( *((_DWORD *)a2 + 7 * *((char *)a2 + 1820) + 361) == 46
    && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 33
    && !(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 3) + 224))(*((_DWORD *)this + 3)) )
  {
    v22 = *((_DWORD *)this + 3);
    if ( *(_DWORD *)(v22 + 1444) != 4
      || sqrtf(
           (float)((float)(*(float *)(v22 + 72) * *(float *)(v22 + 72))
                 + (float)(*(float *)(v22 + 76) * *(float *)(v22 + 76)))
         + (float)(*(float *)(v22 + 80) * *(float *)(v22 + 80))) <= 0.2 )
    {
      if ( CPed::IsPlayer(a2) != 1 )
        return 0;
      v24 = *((_DWORD *)a2 + 5);
      v17 = v24 == 0;
      v23 = (CVector *)(v24 + 48);
      LOWORD(v24) = 0;
      if ( v17 )
        v23 = (CPed *)((char *)a2 + 4);
      HIWORD(v24) = -16096;
      if ( CWorld::ProcessVerticalLine(v23, v24, (int)v25, (int)v26, 1, 0, 0, 0, 1, 0, 0) )
        return 0;
    }
  }
  else if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 66 || *((float *)a2 + 20) >= -0.3 )
  {
    return 0;
  }
  v12 = 0;
  CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x7Du);
  return v12;
}


// ============================================================

// Address: 0x4f8c50
// Original: _ZN20CTaskComplexLeaveCar17ComputeTargetDoorEP4CPed
// Demangled: CTaskComplexLeaveCar::ComputeTargetDoor(CPed *)
int __fastcall CTaskComplexLeaveCar::ComputeTargetDoor(CTaskComplexLeaveCar *this, CPed *a2, const CPed *a3)
{
  int result; // r0

  result = *((_DWORD *)this + 4);
  if ( !result )
  {
    result = CCarEnterExit::ComputeTargetDoorToExit(*((CCarEnterExit **)this + 3), a2, a3);
    *((_DWORD *)this + 4) = result;
  }
  return result;
}


// ============================================================

// Address: 0x4f8c68
// Original: _ZN20CTaskComplexLeaveCar13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexLeaveCar::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexLeaveCar::CreateSubTask(CTaskComplexLeaveCar *this, int a2, CPed *a3)
{
  int v4; // r4
  CEntity *v5; // r6
  int v6; // r8
  char v7; // r0
  char v8; // r0
  char *v9; // r0
  CTaskSimpleCarWaitToSlowDown *v10; // r0
  CVehicle *v11; // r1
  int v12; // r2
  CEntity *v13; // r5
  int IsPlayer; // r6
  unsigned int v15; // r1

  v4 = 0;
  if ( a2 < 716 )
  {
    switch ( a2 )
    {
      case 202:
        v4 = CTask::operator new((CTask *)&off_18, 0xCAu);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_WORD *)(v4 + 16) = 0;
        *(_DWORD *)(v4 + 20) = -1;
        *(_DWORD *)(v4 + 8) = 0;
        *(_DWORD *)(v4 + 12) = 0;
        v9 = (char *)&`vtable for'CTaskSimplePause;
LABEL_14:
        *(_DWORD *)v4 = v9 + 8;
        break;
      case 206:
        v4 = CTask::operator new((CTask *)&byte_9[3], 0xCEu);
        CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill((CTaskComplexGetUpAndStandStill *)v4);
        break;
      case 212:
        v4 = CTask::operator new((CTask *)&word_28, 0xD4u);
        CTaskSimpleDie::CTaskSimpleDie(v4, 0, *((_DWORD *)this + 9), *((_DWORD *)this + 10), *((float *)this + 11));
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 806:
        v4 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
          (CTaskSimpleCarCloseDoorFromOutside *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          *((CTaskUtilityLineUpPedWithCar **)this + 7));
        break;
      case 807:
      case 808:
      case 811:
      case 812:
      case 817:
      case 818:
      case 819:
      case 820:
      case 821:
      case 822:
        return v4;
      case 809:
        if ( *((_BYTE *)this + 26) || !*((_BYTE *)this + 24) )
        {
          v10 = (CTaskSimpleCarWaitToSlowDown *)CTask::operator new((CTask *)&dword_14, a2);
          v11 = (CVehicle *)*((_DWORD *)this + 3);
          v12 = 2;
        }
        else
        {
          IsPlayer = CPed::IsPlayer(a3);
          v10 = (CTaskSimpleCarWaitToSlowDown *)CTask::operator new((CTask *)&dword_14, v15);
          v11 = (CVehicle *)*((_DWORD *)this + 3);
          v12 = IsPlayer != 1;
        }
        v4 = (int)v10;
        CTaskSimpleCarWaitToSlowDown::CTaskSimpleCarWaitToSlowDown(v10, v11, v12);
        break;
      case 810:
        v4 = CTask::operator new((CTask *)&dword_14, a2);
        CTaskSimpleCarWaitForDoorNotToBeInUse::CTaskSimpleCarWaitForDoorNotToBeInUse(
          (CTaskSimpleCarWaitForDoorNotToBeInUse *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          0);
        break;
      case 813:
        v4 = CTask::operator new((CTask *)&dword_20, a2);
        CTaskSimpleCarGetOut::CTaskSimpleCarGetOut(
          (CTaskSimpleCarGetOut *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          *((CTaskUtilityLineUpPedWithCar **)this + 7));
        break;
      case 814:
        v4 = CTask::operator new((CTask *)&dword_24, a2);
        CTaskSimpleCarJumpOut::CTaskSimpleCarJumpOut(
          (CTaskSimpleCarJumpOut *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          *((CTaskUtilityLineUpPedWithCar **)this + 7));
        break;
      case 815:
        v4 = CTask::operator new((CTask *)&word_10, a2);
        CTaskSimpleCarForcePedOut::CTaskSimpleCarForcePedOut(
          (CTaskSimpleCarForcePedOut *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4));
        break;
      case 816:
        v4 = CTask::operator new((CTask *)&off_18, a2);
        CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
          (CTaskSimpleCarSetPedOut *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          *((_BYTE *)this + 24));
        break;
      case 823:
        v4 = CTask::operator new((CTask *)&dword_1C, a2);
        CTaskComplexCarSlowBeDraggedOut::CTaskComplexCarSlowBeDraggedOut(
          (CTaskComplexCarSlowBeDraggedOut *)v4,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          1);
        break;
      default:
        if ( a2 == 716 )
        {
          v4 = CTask::operator new((CTask *)&dword_14, 0x2CCu);
          v13 = (CEntity *)*((_DWORD *)this + 3);
          CTaskComplex::CTaskComplex((CTaskComplex *)v4);
          *(_DWORD *)(v4 + 16) = 0;
          *(_DWORD *)v4 = &off_66AC28;
          *(_DWORD *)(v4 + 12) = v13;
          if ( v13 )
            CEntity::RegisterReference(v13, (CEntity **)(v4 + 12));
        }
        else if ( a2 == 719 )
        {
          v4 = CTask::operator new((CTask *)&dword_70, 0x2CFu);
          v5 = (CEntity *)*((_DWORD *)this + 3);
          v6 = *((_DWORD *)this + 5);
          CTaskSimple::CTaskSimple((CTaskSimple *)v4);
          *(_QWORD *)(v4 + 12) = 0LL;
          *(_QWORD *)(v4 + 20) = 0LL;
          *(_WORD *)(v4 + 28) = 0;
          *(_DWORD *)(v4 + 86) = 0;
          *(_DWORD *)(v4 + 82) = 0;
          *(_DWORD *)(v4 + 76) = 0;
          *(_DWORD *)(v4 + 80) = 0;
          v7 = *(_BYTE *)(v4 + 92);
          *(_DWORD *)v4 = &off_66AD18;
          v8 = v7 & 0xC3 | 8;
          *(_BYTE *)(v4 + 92) = v8;
          *(_DWORD *)(v4 + 8) = v5;
          if ( v5 )
          {
            CEntity::RegisterReference(v5, (CEntity **)(v4 + 8));
            v8 = *(_BYTE *)(v4 + 92);
          }
          *(_DWORD *)(v4 + 32) = -1;
          *(_BYTE *)(v4 + 92) = v8 & 0xFC;
          *(_DWORD *)(v4 + 60) = 0;
          *(_DWORD *)(v4 + 64) = 0;
          *(_DWORD *)(v4 + 68) = 0;
          *(_DWORD *)(v4 + 96) = v6;
          *(_WORD *)(v4 + 108) = 0;
          v9 = (char *)&`vtable for'CTaskSimpleCarDriveTimed;
          *(_DWORD *)(v4 + 100) = 0;
          *(_DWORD *)(v4 + 104) = 0;
          goto LABEL_14;
        }
        break;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4f8eac
// Original: _ZN20CTaskComplexLeaveCar17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCar::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexLeaveCar::CreateNextSubTask(CTaskComplexLeaveCar *this, CVehicle **a2)
{
  signed int v4; // r1
  int v5; // r2
  const CPed *v6; // r2
  const CVehicle *v7; // r1
  int v8; // r1
  CVector *v9; // r3
  CVector *v10; // r3
  unsigned int v11; // r1
  CTaskComplexCarSlowBeDraggedOut *v12; // r0
  CCarEnterExit *v13; // r0
  unsigned int v14; // r1
  CTaskSimpleCarCloseDoorFromOutside *v15; // r0
  int v16; // r0
  int v17; // r0
  unsigned int v18; // r1
  CTaskSimpleCarJumpOut *v19; // r0
  CVehicle *v20; // r0
  int v21; // r1
  bool v22; // zf
  int v23; // r0
  int v24; // r1
  unsigned int v25; // r1
  CTaskComplexGetUpAndStandStill *v26; // r0
  int DoorStatus; // r0
  CTaskSimpleCarSetPedOut *v28; // r0
  int v29; // r0
  int v30; // r1
  bool v31; // zf
  int v32; // r6
  CTaskUtilityLineUpPedWithCar *v33; // r0
  int v34; // r0
  unsigned int v35; // r1
  CTaskSimpleCarGetOut *v36; // r0
  int v37; // r0
  CTaskUtilityLineUpPedWithCar *v38; // r0
  int v39; // r0
  CTaskUtilityLineUpPedWithCar *v40; // r0
  int v41; // r0
  bool *v42; // [sp+0h] [bp-28h]
  bool v43; // [sp+Bh] [bp-1Dh] BYREF
  int v44; // [sp+Ch] [bp-1Ch] BYREF
  int v45; // [sp+10h] [bp-18h]
  int v46; // [sp+14h] [bp-14h]

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  v5 = 805;
  if ( v4 <= 805 )
  {
    if ( v4 == 206 )
    {
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
      {
LABEL_48:
        v28 = (CTaskSimpleCarSetPedOut *)CTask::operator new((CTask *)&off_18, v4);
        CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
          v28,
          *((CVehicle **)this + 3),
          *((_DWORD *)this + 4),
          *((_BYTE *)this + 24));
      }
    }
    else if ( v4 == 716 )
    {
LABEL_15:
      if ( *((_BYTE *)this + 26) )
      {
LABEL_31:
        v17 = CTask::operator new((CTask *)&word_28, v4);
        CTaskSimpleDie::CTaskSimpleDie(v17, 0, *((_DWORD *)this + 9), *((_DWORD *)this + 10), *((float *)this + 11));
      }
    }
    else if ( v4 == 719 && *((unsigned __int8 *)a2 + 1157) << 31 )
    {
      if ( CVehicle::IsPassenger(a2[356], (const CPed *)a2) || CVehicle::IsDriver(a2[356], (const CPed *)a2) )
      {
        v7 = (const CVehicle *)*((_DWORD *)this + 4);
        if ( !v7 )
        {
          v7 = (const CVehicle *)CCarEnterExit::ComputeTargetDoorToExit(
                                   *((CCarEnterExit **)this + 3),
                                   (const CVehicle *)a2,
                                   v6);
          *((_DWORD *)this + 4) = v7;
        }
        LOBYTE(v44) = 0;
        v43 = 0;
        CTaskSimpleCarWaitForDoorNotToBeInUse::CheckDoorsFreeOfPeds(
          *((CTaskSimpleCarWaitForDoorNotToBeInUse **)this + 3),
          v7,
          (int)&v44,
          &v43,
          v42);
        if ( *((_BYTE *)this + 25) || !v43 )
        {
          v8 = 1302;
          if ( !(_BYTE)v44 )
            v8 = 809;
          if ( *((_BYTE *)this + 25) )
            v8 = 809;
        }
        else
        {
          v8 = 810;
        }
LABEL_84:
        CTaskComplexLeaveCar::CreateSubTask(this, v8, (CPed *)a2);
      }
      else
      {
        a2[289] = (CVehicle *)((unsigned int)a2[289] & 0xFFFFFEFF);
      }
    }
  }
  else
  {
    v4 -= 806;
    switch ( v4 )
    {
      case 0:
        *((_DWORD *)this + 9) = 15;
        goto LABEL_48;
      case 3:
        if ( (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 3) + 232))(*((_DWORD *)this + 3), 0) != 1 )
        {
          CTaskComplexLeaveCar::PrepareVehicleForPedExit(this, (CPed *)a2);
          CPed::SetPedState((CPed *)a2);
          v19 = (CTaskSimpleCarJumpOut *)CTask::operator new((CTask *)&dword_24, v18);
          CTaskSimpleCarJumpOut::CTaskSimpleCarJumpOut(
            v19,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 4),
            *((CTaskUtilityLineUpPedWithCar **)this + 7));
          return;
        }
        if ( CCarEnterExit::IsRoomForPedToLeaveCar(*((CCarEnterExit **)this + 3), *((const CVehicle **)this + 4), 0, v9) )
        {
          CTaskComplexLeaveCar::PrepareVehicleForPedExit(this, (CPed *)a2);
          CPed::SetPedState((CPed *)a2);
          if ( *((_BYTE *)this + 26) )
          {
            v12 = (CTaskComplexCarSlowBeDraggedOut *)CTask::operator new((CTask *)&dword_1C, v11);
            CTaskComplexCarSlowBeDraggedOut::CTaskComplexCarSlowBeDraggedOut(
              v12,
              *((CVehicle **)this + 3),
              *((_DWORD *)this + 4),
              1);
          }
          else
          {
            v44 = 0;
            v45 = 0;
            v46 = 0;
            v33 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
            CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
              v33,
              (const CVector *)&v44,
              0,
              0,
              *((_DWORD *)this + 4));
            *((_DWORD *)this + 7) = v34;
            v36 = (CTaskSimpleCarGetOut *)CTask::operator new((CTask *)&dword_20, v35);
            CTaskSimpleCarGetOut::CTaskSimpleCarGetOut(
              v36,
              *((CVehicle **)this + 3),
              *((_DWORD *)this + 4),
              *((CTaskUtilityLineUpPedWithCar **)this + 7));
          }
          return;
        }
        switch ( *((_DWORD *)this + 4) )
        {
          case 8:
            v29 = *((_DWORD *)this + 3);
            v30 = *(_DWORD *)(v29 + 1124);
            v31 = v30 == 0;
            if ( !v30 )
              v31 = *(unsigned __int8 *)(v29 + 1162) << 31 == 0;
            if ( !v31 )
              goto LABEL_83;
            v32 = (int)&byte_9[1];
            break;
          case 9:
            v29 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v29 + 1132) || (*(_BYTE *)(v29 + 1162) & 2) != 0 )
              goto LABEL_83;
            v32 = 11;
            break;
          case 0xA:
            v29 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v29 + 1440) != 9
              && (*(_BYTE *)(*(_DWORD *)(v29 + 904) + 205) & 2) == 0
              && (*(_DWORD *)(v29 + 1128) || (*(_BYTE *)(v29 + 1162) & 4) != 0) )
            {
              goto LABEL_83;
            }
            v32 = 8;
            break;
          case 0xB:
            v29 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v29 + 1440) != 9
              && (*(_BYTE *)(*(_DWORD *)(v29 + 904) + 205) & 2) == 0
              && (*(_DWORD *)(v29 + 1136) || (*(_BYTE *)(v29 + 1162) & 8) != 0) )
            {
              goto LABEL_83;
            }
            v32 = 9;
            break;
          default:
            v29 = *((_DWORD *)this + 3);
            v32 = 0;
            break;
        }
        if ( CCarEnterExit::IsRoomForPedToLeaveCar((CCarEnterExit *)v29, (const CVehicle *)v32, 0, v10)
          && ((v37 = *((_DWORD *)this + 3), (*(_BYTE *)(*(_DWORD *)(v37 + 904) + 205) & 0x80) == 0)
           || *(_DWORD *)(v37 + 1440)
           || *(_DWORD *)(v37 + 4 * v32 + 1628)) )
        {
          *((_DWORD *)this + 4) = v32;
          CTaskComplexLeaveCar::PrepareVehicleForPedExit(this, (CPed *)a2);
          CPed::SetPedState((CPed *)a2);
          if ( *((_BYTE *)this + 26) )
          {
            v8 = 823;
          }
          else
          {
            v44 = 0;
            v45 = 0;
            v46 = 0;
            v40 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
            CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
              v40,
              (const CVector *)&v44,
              0,
              0,
              *((_DWORD *)this + 4));
            *((_DWORD *)this + 7) = v41;
            v8 = 813;
          }
        }
        else
        {
LABEL_83:
          CTaskComplexLeaveCar::PrepareVehicleForPedExit(this, (CPed *)a2);
          CPed::SetPedState((CPed *)a2);
          v45 = 0;
          v44 = 0;
          v46 = 0;
          v38 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
          CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
            v38,
            (const CVector *)&v44,
            0,
            0,
            *((_DWORD *)this + 4));
          *((_DWORD *)this + 7) = v39;
          v8 = 815;
        }
        goto LABEL_84;
      case 4:
        CTaskComplexLeaveCar::CreateSubTask(this, 809, (CPed *)a2);
        return;
      case 7:
        *(_DWORD *)(*((_DWORD *)this + 7) + 20) = 2;
        v13 = (CCarEnterExit *)*((_DWORD *)this + 3);
        if ( *((_BYTE *)this + 25) && *((_DWORD *)v13 + 322) == 1 )
          goto LABEL_43;
        if ( CCarEnterExit::CarHasDoorToClose(v13, *((const CVehicle **)this + 4), 805) )
        {
          v15 = (CTaskSimpleCarCloseDoorFromOutside *)CTask::operator new((CTask *)&dword_1C, v14);
          CTaskSimpleCarCloseDoorFromOutside::CTaskSimpleCarCloseDoorFromOutside(
            v15,
            *((CVehicle **)this + 3),
            *((_DWORD *)this + 4),
            *((CTaskUtilityLineUpPedWithCar **)this + 7));
          return;
        }
        v13 = (CCarEnterExit *)*((_DWORD *)this + 3);
LABEL_43:
        v4 = *((_DWORD *)v13 + 360);
        if ( !v4
          && CCarEnterExit::CarHasDoorToClose(v13, *((const CVehicle **)this + 4), v5) == 1
          && (!CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 3) + 1460), *((_DWORD *)this + 4))
           || CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 3) + 1460), *((_DWORD *)this + 4)) == 2) )
        {
          DoorStatus = CDamageManager::GetDoorStatus(
                         (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
                         *((_DWORD *)this + 4));
          CDamageManager::SetDoorStatus(
            (CDamageManager *)(*((_DWORD *)this + 3) + 1460),
            *((_DWORD *)this + 4),
            DoorStatus + 1);
        }
        goto LABEL_48;
      case 8:
        if ( *((_BYTE *)this + 26) )
        {
          v4 = 15;
          *((_DWORD *)this + 9) = 15;
          *((_DWORD *)this + 10) = 1148846080;
          *((_DWORD *)this + 11) = 1056964608;
          goto LABEL_31;
        }
        v20 = (CVehicle *)*((_DWORD *)this + 3);
        if ( !v20 )
          return;
        v21 = *((_DWORD *)v20 + 360);
        v22 = v21 == 9;
        if ( v21 != 9 )
          v22 = *((_DWORD *)v20 + 361) == 2;
        if ( v22 )
          return;
        v4 = *((unsigned __int8 *)this + 48);
        if ( *((_BYTE *)this + 48) )
          goto LABEL_48;
        v4 = *((unsigned __int8 *)a2 + 1162) << 28;
        if ( (*((_BYTE *)a2 + 1162) & 8) != 0 )
          goto LABEL_48;
        CVehicle::ClearGettingOutFlags(v20, *((_BYTE *)this + 32));
        v23 = *((_DWORD *)this + 3);
        v24 = *((unsigned __int8 *)this + 33);
        *((_BYTE *)this + 32) = 0;
        v25 = *(unsigned __int8 *)(v23 + 1161) - v24;
        *(_BYTE *)(v23 + 1161) = v25;
        *((_BYTE *)this + 33) = 0;
        v26 = (CTaskComplexGetUpAndStandStill *)CTask::operator new((CTask *)&byte_9[3], v25);
        CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill(v26);
        break;
      case 9:
        goto LABEL_48;
      case 10:
        goto LABEL_15;
      case 17:
        v16 = *((_DWORD *)this + 3);
        v4 = 1148846080;
        *((_DWORD *)this + 9) = 36;
        *((_DWORD *)this + 10) = 1148846080;
        *((_DWORD *)this + 11) = 1056964608;
        if ( v16 )
        {
          v4 = *(_DWORD *)(v16 + 1288);
          if ( v4 == 5 )
          {
            v4 = 1;
            *(_DWORD *)(v16 + 1288) = 1;
          }
        }
        goto LABEL_31;
      default:
        return;
    }
  }
}


// ============================================================

// Address: 0x4f92e8
// Original: _ZN20CTaskComplexLeaveCar24PrepareVehicleForPedExitEP4CPed
// Demangled: CTaskComplexLeaveCar::PrepareVehicleForPedExit(CPed *)
int __fastcall CTaskComplexLeaveCar::PrepareVehicleForPedExit(CCarEnterExit **this, CPed *a2, int a3, bool a4)
{
  unsigned __int8 v6; // r0
  CCarEnterExit *v7; // r0
  CPed *v8; // r0
  CCarEnterExit *v9; // r0
  int result; // r0

  v6 = CCarEnterExit::ComputeDoorFlag(this[3], this[4], 1, a4);
  *((_BYTE *)this + 32) = v6;
  CVehicle::SetGettingOutFlags(this[3], v6);
  v7 = this[3];
  *((_BYTE *)this + 33) = 1;
  ++*((_BYTE *)v7 + 1161);
  v8 = (CPed *)*((_DWORD *)this[3] + 281);
  if ( v8 )
  {
    if ( !CPed::IsPlayer(v8) )
    {
      v9 = this[3];
      if ( *((CPed **)v9 + 281) == a2 )
      {
        if ( *((_BYTE *)this + 24) )
        {
          *((_BYTE *)v9 + 980) = 0;
          *((_BYTE *)this[3] + 958) = 0;
        }
      }
    }
  }
  result = CPed::IsPlayer(a2);
  if ( result == 1 )
  {
    result = (int)this[3];
    if ( *(CPed **)(result + 1124) == a2 )
      *(_BYTE *)(result + 58) = *(_BYTE *)(result + 58) & 7 | 0x48;
  }
  return result;
}


// ============================================================

// Address: 0x4f9376
// Original: _ZN20CTaskComplexLeaveCar24PreparePedForVehicleExitEP4CPed
// Demangled: CTaskComplexLeaveCar::PreparePedForVehicleExit(CPed *)
int __fastcall CTaskComplexLeaveCar::PreparePedForVehicleExit(CTaskComplexLeaveCar *this, CPed *a2)
{
  return sub_18D928(a2);
}


// ============================================================

// Address: 0x4f937e
// Original: _ZN20CTaskComplexLeaveCar33CreateTaskUtilityLineUpPedWithCarEP4CPed
// Demangled: CTaskComplexLeaveCar::CreateTaskUtilityLineUpPedWithCar(CPed *)
void __fastcall CTaskComplexLeaveCar::CreateTaskUtilityLineUpPedWithCar(CTaskComplexLeaveCar *this, CPed *a2)
{
  CTaskUtilityLineUpPedWithCar *v3; // r0
  int v4; // r0
  _DWORD v5[5]; // [sp+4h] [bp-14h] BYREF

  memset(v5, 0, 12);
  v3 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
  CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(v3, (const CVector *)v5, 0, 0, *((_DWORD *)this + 4));
  *((_DWORD *)this + 7) = v4;
}


// ============================================================

// Address: 0x4f93a8
// Original: _ZN20CTaskComplexLeaveCar18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCar::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexLeaveCar::CreateFirstSubTask(CTaskComplexLeaveCar *this, CPed *a2)
{
  int v4; // r1
  int PedsGroup; // r0
  int v6; // r6
  unsigned int v7; // r1
  CEventEditableResponse *v8; // r8
  int v9; // r0
  _BYTE v11[44]; // [sp+4h] [bp-2Ch] BYREF

  if ( (*((_DWORD *)a2 + 275) == 63 || (*((_DWORD *)a2 + 291) & 0x40) != 0) && CPed::IsPlayer(a2)
    || (*((_DWORD *)a2 + 289) & 0x100) == 0 )
  {
    v4 = 202;
  }
  else
  {
    if ( *(CPed **)(*((_DWORD *)this + 3) + 1124) == a2 )
    {
      PedsGroup = CPedGroups::GetPedsGroup(a2, a2);
      v6 = PedsGroup;
      if ( PedsGroup && CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), a2) == 1 )
      {
        v8 = (CEventEditableResponse *)CEvent::operator new((CEvent *)&word_10, v7);
        CEventEditableResponse::CEventEditableResponse(v8);
        *(_DWORD *)v8 = &off_666EA8;
        CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v11, a2, v8);
        CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v6 + 48), (CEvent *)v11);
        CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v11);
      }
      if ( CPed::IsPlayer(a2) )
      {
        v9 = *((_DWORD *)a2 + 356);
        if ( v9 )
          CAEVehicleAudioEntity::PlayerAboutToExitVehicleAsDriver((CAEVehicleAudioEntity *)(v9 + 316));
      }
      else
      {
        CPed::SetRadioStation(a2);
      }
    }
    v4 = 719;
    if ( *(_DWORD *)(*((_DWORD *)this + 3) + 1440) == 5 )
      v4 = 716;
  }
  return CTaskComplexLeaveCar::CreateSubTask(this, v4, a2);
}


// ============================================================

// Address: 0x4f947c
// Original: _ZN20CTaskComplexLeaveCar14ControlSubTaskEP4CPed
// Demangled: CTaskComplexLeaveCar::ControlSubTask(CPed *)
void __fastcall CTaskComplexLeaveCar::ControlSubTask(CTaskComplexLeaveCar *this, CPed *a2)
{
  unsigned int v4; // r1
  CTaskSimpleCarSetPedOut *v5; // r0

  if ( *((_DWORD *)this + 3) )
  {
    if ( *((unsigned __int8 *)a2 + 1157) << 31
      || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 816
      || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 814
      || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 206
      || (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 212 )
    {
      if ( !*((_BYTE *)this + 24)
        && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 809 )
      {
        (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
          *((_DWORD *)this + 2),
          a2,
          0,
          0);
      }
    }
    else
    {
      v5 = (CTaskSimpleCarSetPedOut *)CTask::operator new((CTask *)&off_18, v4);
      CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut(
        v5,
        *((CVehicle **)this + 3),
        *((_DWORD *)this + 4),
        *((_BYTE *)this + 24));
    }
  }
}


// ============================================================

// Address: 0x4fd018
// Original: _ZN20CTaskComplexLeaveCarD2Ev
// Demangled: CTaskComplexLeaveCar::~CTaskComplexLeaveCar()
void __fastcall CTaskComplexLeaveCar::~CTaskComplexLeaveCar(CTaskComplexLeaveCar *this)
{
  CVehicle *v2; // r0
  CEntity **v3; // r5
  CTaskUtilityLineUpPedWithCar *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CVehicle *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66ABEC;
  if ( v2 )
  {
    CVehicle::ClearGettingOutFlags(v2, *((_BYTE *)this + 32));
    *(_BYTE *)(*((_DWORD *)this + 3) + 1161) -= *((_BYTE *)this + 33);
    CEntity::CleanUpOldReference(*((CEntity **)this + 3), v3);
  }
  v4 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 7);
  if ( v4 )
  {
    CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v4);
    operator delete(v5);
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4fe33c
// Original: _ZNK20CTaskComplexLeaveCar5CloneEv
// Demangled: CTaskComplexLeaveCar::Clone(void)
int __fastcall CTaskComplexLeaveCar::Clone(CTaskComplexLeaveCar *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5
  __int64 v5; // r8

  v3 = CTask::operator new((CTask *)&dword_34, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  v5 = *((_QWORD *)this + 2);
  LOWORD(this) = *((_WORD *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_QWORD *)(v3 + 16) = v5;
  *(_WORD *)(v3 + 24) = (_WORD)this;
  *(_BYTE *)(v3 + 26) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 32) = 0;
  *(_BYTE *)(v3 + 33) = 0;
  *(_DWORD *)(v3 + 36) = 15;
  *(_DWORD *)(v3 + 40) = 1082130432;
  *(_DWORD *)(v3 + 44) = 1065353216;
  *(_BYTE *)(v3 + 48) = 0;
  *(_DWORD *)v3 = &off_66ABEC;
  *(_DWORD *)(v3 + 12) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================

// Address: 0x4fe3b0
// Original: _ZNK20CTaskComplexLeaveCar11GetTaskTypeEv
// Demangled: CTaskComplexLeaveCar::GetTaskType(void)
int __fastcall CTaskComplexLeaveCar::GetTaskType(CTaskComplexLeaveCar *this)
{
  return 704;
}


// ============================================================

// Address: 0x4fe3b8
// Original: _ZN20CTaskComplexLeaveCar9SerializeEv
// Demangled: CTaskComplexLeaveCar::Serialize(void)
int __fastcall CTaskComplexLeaveCar::Serialize(CVehicle **this)
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
  int v12; // r2
  int v13; // r2
  int v15; // r0

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 704 )
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
    *(_DWORD *)v8 = this[4];
    CGenericGameStorage::_SaveDataToWorkBuffer(v8, byte_4, v9);
    free(v8);
    if ( UseDataFence )
      AddDataFence();
    v10 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v10 = this[5];
    CGenericGameStorage::_SaveDataToWorkBuffer(v10, byte_4, v11);
    free(v10);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)(this + 6), (char *)&stderr + 1, v12);
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CGenericGameStorage *)((char *)this + 25), (char *)&stderr + 1, v13);
  }
  else
  {
    v15 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    return sub_1941D4(704, v15);
  }
}


// ============================================================
