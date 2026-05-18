
// Address: 0x18e93c
// Original: j__ZN35CTaskComplexEnterCarAsPassengerWaitC2EP8CVehicleP4CPedbi
// Demangled: CTaskComplexEnterCarAsPassengerWait::CTaskComplexEnterCarAsPassengerWait(CVehicle *,CPed *,bool,int)
// attributes: thunk
void __fastcall CTaskComplexEnterCarAsPassengerWait::CTaskComplexEnterCarAsPassengerWait(
        CTaskComplexEnterCarAsPassengerWait *this,
        CVehicle *a2,
        CPed *a3,
        bool a4,
        int a5)
{
  _ZN35CTaskComplexEnterCarAsPassengerWaitC2EP8CVehicleP4CPedbi(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1a0630
// Original: j__ZN35CTaskComplexEnterCarAsPassengerWait10CreateTaskEv
// Demangled: CTaskComplexEnterCarAsPassengerWait::CreateTask(void)
// attributes: thunk
int __fastcall CTaskComplexEnterCarAsPassengerWait::CreateTask(CTaskComplexEnterCarAsPassengerWait *this)
{
  return _ZN35CTaskComplexEnterCarAsPassengerWait10CreateTaskEv(this);
}


// ============================================================

// Address: 0x1a0c38
// Original: j__ZN35CTaskComplexEnterCarAsPassengerWaitD2Ev
// Demangled: CTaskComplexEnterCarAsPassengerWait::~CTaskComplexEnterCarAsPassengerWait()
// attributes: thunk
void __fastcall CTaskComplexEnterCarAsPassengerWait::~CTaskComplexEnterCarAsPassengerWait(
        CTaskComplexEnterCarAsPassengerWait *this)
{
  _ZN35CTaskComplexEnterCarAsPassengerWaitD2Ev(this);
}


// ============================================================

// Address: 0x4938fc
// Original: _ZN35CTaskComplexEnterCarAsPassengerWait10CreateTaskEv
// Demangled: CTaskComplexEnterCarAsPassengerWait::CreateTask(void)
void __fastcall CTaskComplexEnterCarAsPassengerWait::CreateTask(
        CTaskComplexEnterCarAsPassengerWait *this,
        int a2,
        int a3)
{
  char v3; // r4
  int v4; // r2
  CVehicle *Vehicle; // r8
  char v6; // r5
  int v7; // r2
  CPed *Ped; // r5
  char v9; // r6
  int v10; // r2
  char v11; // r6
  unsigned int v12; // r1
  CTaskComplexEnterCarAsPassengerWait *v13; // r0
  bool v14; // [sp+7h] [bp-19h] BYREF
  CPools *v15; // [sp+8h] [bp-18h] BYREF
  CPools *v16[5]; // [sp+Ch] [bp-14h] BYREF

  v3 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, (char *)&stderr + 2, a3);
    UseDataFence = v3;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)v16, byte_4, a3);
  if ( v16[0] == (CPools *)-1 )
    Vehicle = 0;
  else
    Vehicle = (CVehicle *)CPools::GetVehicle(v16[0], (int)v16[0] + 1);
  v6 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v4);
    UseDataFence = v6;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v4);
  if ( v15 == (CPools *)-1 )
    Ped = 0;
  else
    Ped = (CPed *)CPools::GetPed(v15, (int)v15 + 1);
  v9 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v7);
    UseDataFence = v9;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v14, (char *)&stderr + 1, v7);
  v11 = UseDataFence;
  if ( UseDataFence )
  {
    UseDataFence = 0;
    CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, (char *)&stderr + 2, v10);
    UseDataFence = v11;
  }
  CGenericGameStorage::_LoadDataFromWorkBuffer((CGenericGameStorage *)&v15, byte_4, v10);
  v13 = (CTaskComplexEnterCarAsPassengerWait *)CTask::operator new((CTask *)&dword_24, v12);
  CTaskComplexEnterCarAsPassengerWait::CTaskComplexEnterCarAsPassengerWait(v13, Vehicle, Ped, v14, (int)v15);
}


// ============================================================

// Address: 0x4f78c0
// Original: _ZN35CTaskComplexEnterCarAsPassengerWaitC2EP8CVehicleP4CPedbi
// Demangled: CTaskComplexEnterCarAsPassengerWait::CTaskComplexEnterCarAsPassengerWait(CVehicle *,CPed *,bool,int)
void __fastcall CTaskComplexEnterCarAsPassengerWait::CTaskComplexEnterCarAsPassengerWait(
        CTaskComplexEnterCarAsPassengerWait *this,
        CVehicle *a2,
        CPed *a3,
        bool a4,
        int a5)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 24) = a4;
  *((_DWORD *)this + 7) = a5;
  *((_BYTE *)this + 32) = 0;
  *(_DWORD *)this = &off_66AAFC;
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

// Address: 0x4f7920
// Original: _ZN35CTaskComplexEnterCarAsPassengerWaitD2Ev
// Demangled: CTaskComplexEnterCarAsPassengerWait::~CTaskComplexEnterCarAsPassengerWait()
void __fastcall CTaskComplexEnterCarAsPassengerWait::~CTaskComplexEnterCarAsPassengerWait(
        CTaskComplexEnterCarAsPassengerWait *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AAFC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f795c
// Original: _ZN35CTaskComplexEnterCarAsPassengerWaitD0Ev
// Demangled: CTaskComplexEnterCarAsPassengerWait::~CTaskComplexEnterCarAsPassengerWait()
void __fastcall CTaskComplexEnterCarAsPassengerWait::~CTaskComplexEnterCarAsPassengerWait(
        CTaskComplexEnterCarAsPassengerWait *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66AAFC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4f799c
// Original: _ZN35CTaskComplexEnterCarAsPassengerWait17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsPassengerWait::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexEnterCarAsPassengerWait::CreateNextSubTask(
        CTaskComplexEnterCarAsPassengerWait *this,
        CPed *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r0

  if ( !*((_DWORD *)this + 3) )
    goto LABEL_11;
  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 <= 718 )
  {
    if ( v4 == 244 )
      goto LABEL_12;
    if ( v4 != 712 )
      return 0;
    if ( !(*((unsigned __int8 *)a2 + 1157) << 31) )
    {
      v7 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 5) = v7 + 1;
      if ( v7 <= 14 )
      {
        v5 = *((_DWORD *)this + 3);
        v6 = 244;
LABEL_13:
        if ( !v5 )
          v6 = 1302;
        return CTaskComplexEnterCarAsPassengerWait::CreateSubTask(this, v6, a2);
      }
    }
LABEL_11:
    v6 = 1302;
    return CTaskComplexEnterCarAsPassengerWait::CreateSubTask(this, v6, a2);
  }
  switch ( v4 )
  {
    case 719:
      goto LABEL_11;
    case 833:
LABEL_12:
      v5 = *((_DWORD *)this + 3);
      v6 = 712;
      goto LABEL_13;
    case 903:
      v5 = *((_DWORD *)this + 4);
      v6 = 833;
      goto LABEL_13;
  }
  return 0;
}


// ============================================================

// Address: 0x4f7a20
// Original: _ZNK35CTaskComplexEnterCarAsPassengerWait13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexEnterCarAsPassengerWait::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexEnterCarAsPassengerWait::CreateSubTask(
        CTaskComplexEnterCarAsPassengerWait *this,
        int a2,
        CPed *a3)
{
  int v4; // r4
  CEntity *v5; // r5
  char v6; // r0
  char v7; // r0
  int v8; // r8
  unsigned int v9; // r1
  CEntity *v10; // r6
  unsigned int v11; // r1
  unsigned int v12; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v13; // r6
  unsigned int v14; // r1
  CTaskSimpleStandStill *v15; // r5
  unsigned int v16; // r1
  float v17; // s2
  CTaskComplexGoToPointAndStandStill *v18; // r0
  int v19; // r6
  int v20; // r1
  int v21; // r5
  const CVector *v22; // r2
  _BYTE v24[44]; // [sp+Ch] [bp-2Ch] BYREF

  v4 = 0;
  if ( a2 <= 718 )
  {
    if ( a2 == 244 )
    {
      v4 = CTask::operator new((CTask *)&dword_40, 0xF4u);
      CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v4);
      v13 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v12);
      CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v13, *((CEntity **)this + 3), 0.5, 0.2);
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v4, v13);
      v15 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v14);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v15, 1000, 0, 0, 8.0);
      CTaskComplexSequence::AddTask((CTaskComplexSequence *)v4, v15);
    }
    else if ( a2 == 712 )
    {
      if ( *((_BYTE *)this + 24) )
      {
        v8 = CCarEnterExit::ComputeTargetDoorToEnterAsPassenger(*((CCarEnterExit **)this + 3), 0, (int)a3);
        v4 = CTask::operator new((CTask *)&word_2C, v9);
        v10 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v4);
        *(_DWORD *)v4 = &off_66AAC0;
        *(_DWORD *)(v4 + 16) = -1;
        *(_DWORD *)(v4 + 20) = v8;
        *(_BYTE *)(v4 + 24) = 1;
        *(_DWORD *)(v4 + 28) = 6;
        *(_WORD *)(v4 + 40) = 0;
        *(_DWORD *)(v4 + 32) = 0;
        *(_DWORD *)(v4 + 36) = 0;
      }
      else
      {
        v4 = CTask::operator new((CTask *)&word_2C, 0x2C8u);
        v10 = (CEntity *)*((_DWORD *)this + 3);
        CTaskComplex::CTaskComplex((CTaskComplex *)v4);
        *(_DWORD *)(v4 + 16) = -1;
        *(_DWORD *)(v4 + 20) = 0;
        *(_BYTE *)(v4 + 24) = 1;
        *(_DWORD *)(v4 + 28) = 6;
        *(_WORD *)(v4 + 40) = 0;
        *(_DWORD *)(v4 + 32) = 0;
        *(_DWORD *)(v4 + 36) = 0;
        *(_DWORD *)v4 = &off_66AAC0;
      }
      *(_DWORD *)(v4 + 12) = v10;
      if ( v10 )
        CEntity::RegisterReference(v10, (CEntity **)(v4 + 12));
      *(_DWORD *)(v4 + 28) = *((_DWORD *)this + 7);
    }
  }
  else
  {
    switch ( a2 )
    {
      case 903:
        if ( CPedGeometryAnalyser::ComputeClosestSurfacePoint(
               a3,
               *((const CPed **)this + 3),
               (CEntity *)v24,
               (CVector *)v24) == 1 )
        {
          v4 = CTask::operator new((CTask *)&word_28, v11);
          CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(
            (CTaskComplexGoToPointAndStandStill *)v4,
            *((_DWORD *)this + 7),
            (const CVector *)v24,
            1.5,
            2.0,
            0,
            0);
        }
        else
        {
          v16 = *(__int16 *)(*((_DWORD *)this + 3) + 38);
          v17 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v16]) + 44) + 36);
          v18 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, v16);
          v4 = (int)v18;
          v19 = *((_DWORD *)this + 3);
          v20 = *((_DWORD *)this + 7);
          v21 = *(_DWORD *)(v19 + 20);
          v22 = (const CVector *)(v21 + 48);
          if ( !v21 )
            v22 = (const CVector *)(v19 + 4);
          CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(v18, v20, v22, v17 + 1.5, 2.0, 0, 0);
        }
        break;
      case 833:
        v4 = CTask::operator new((CTask *)&word_10, 0x341u);
        CTaskSimpleWaitUntilPedIsInCar::CTaskSimpleWaitUntilPedIsInCar(
          (CTaskSimpleWaitUntilPedIsInCar *)v4,
          *((CPed **)this + 4));
        break;
      case 719:
        v4 = CTask::operator new((CTask *)&dword_70, 0x2CFu);
        v5 = (CEntity *)*((_DWORD *)this + 3);
        CTaskSimple::CTaskSimple((CTaskSimple *)v4);
        *(_QWORD *)(v4 + 12) = 0LL;
        *(_QWORD *)(v4 + 20) = 0LL;
        *(_WORD *)(v4 + 28) = 0;
        *(_DWORD *)(v4 + 86) = 0;
        *(_DWORD *)(v4 + 82) = 0;
        *(_DWORD *)(v4 + 76) = 0;
        *(_DWORD *)(v4 + 80) = 0;
        v6 = *(_BYTE *)(v4 + 92);
        *(_DWORD *)v4 = &off_66AD18;
        v7 = v6 & 0xC3 | 8;
        *(_BYTE *)(v4 + 92) = v7;
        *(_DWORD *)(v4 + 8) = v5;
        if ( v5 )
        {
          CEntity::RegisterReference(v5, (CEntity **)(v4 + 8));
          v7 = *(_BYTE *)(v4 + 92);
        }
        *(_DWORD *)(v4 + 32) = -1;
        *(_BYTE *)(v4 + 92) = v7 & 0xFC;
        *(_DWORD *)(v4 + 60) = 0;
        *(_DWORD *)(v4 + 64) = 0;
        *(_DWORD *)(v4 + 68) = 0;
        *(_DWORD *)(v4 + 106) = 0;
        *(_DWORD *)(v4 + 102) = 0;
        *(_DWORD *)(v4 + 96) = 0;
        *(_DWORD *)(v4 + 100) = 0;
        *(_DWORD *)v4 = &off_66572C;
        break;
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4f7ca4
// Original: _ZN35CTaskComplexEnterCarAsPassengerWait18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsPassengerWait::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexEnterCarAsPassengerWait::CreateFirstSubTask(
        CTaskComplexEnterCarAsPassengerWait *this,
        CPed *a2)
{
  bool v4; // zf
  CVehicle *v5; // r0
  int v6; // r1
  __int64 v7; // r0

  v5 = (CVehicle *)(*((unsigned __int8 *)a2 + 1157) << 31);
  v4 = v5 == 0;
  if ( v5 )
  {
    v5 = (CVehicle *)*((_DWORD *)a2 + 356);
    v4 = v5 == 0;
  }
  if ( !v4 && v5 == *((CVehicle **)this + 3) && CVehicle::IsPassenger(v5, a2) )
  {
    v6 = 719;
  }
  else
  {
    v7 = *(_QWORD *)((char *)this + 12);
    if ( HIDWORD(v7) )
    {
      v6 = 903;
      if ( !(_DWORD)v7 )
        v6 = 1302;
    }
    else if ( (_DWORD)v7 )
    {
      v6 = 712;
    }
    else
    {
      v6 = 1302;
    }
  }
  return CTaskComplexEnterCarAsPassengerWait::CreateSubTask(this, v6, a2);
}


// ============================================================

// Address: 0x4f7cfc
// Original: _ZN35CTaskComplexEnterCarAsPassengerWait14ControlSubTaskEP4CPed
// Demangled: CTaskComplexEnterCarAsPassengerWait::ControlSubTask(CPed *)
int __fastcall CTaskComplexEnterCarAsPassengerWait::ControlSubTask(CTaskComplexEnterCarAsPassengerWait *this, CPed *a2)
{
  CVector *v4; // r3
  int v5; // r0
  int v6; // r1
  double *v7; // lr
  float v8; // s2
  float v9; // s4
  float v10; // s12
  double v11; // d16
  char v12; // r0
  CPed *v13; // r0
  unsigned __int16 v14; // r1
  int v15; // r3
  int v16; // r5
  float v17; // s8
  __int64 *v18; // r0
  __int64 v19; // d16
  bool v21; // zf
  int PedsGroup; // r0
  CPed *Leader; // r0
  double v24; // [sp+10h] [bp-18h] BYREF
  float v25; // [sp+18h] [bp-10h]

  if ( *((_BYTE *)this + 32) )
    goto LABEL_2;
  v13 = (CPed *)*((_DWORD *)this + 4);
  if ( !v13 )
    goto LABEL_27;
  if ( CPed::IsPlayer(v13) == 1 )
  {
    if ( !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 807) )
      goto LABEL_2;
    v14 = 35;
    goto LABEL_32;
  }
  v21 = *((_BYTE *)this + 32) == 0;
  if ( !*((_BYTE *)this + 32) )
    v21 = *((_DWORD *)this + 4) == 0;
  if ( v21 )
  {
LABEL_27:
    PedsGroup = CPedGroups::GetPedsGroup(a2, a2);
    if ( !PedsGroup )
      goto LABEL_2;
    Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8));
    if ( !Leader
      || CPed::IsPlayer(Leader) != 1
      || !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 807) )
    {
      goto LABEL_2;
    }
    v14 = 40;
LABEL_32:
    *((_BYTE *)this + 32) = 1;
    CPed::Say(a2, v14, 0, 1.0, 0, 0, 0);
  }
LABEL_2:
  if ( *((_DWORD *)this + 3)
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 903 )
  {
    v5 = CPedGeometryAnalyser::ComputeClosestSurfacePoint(a2, *((const CPed **)this + 3), (CEntity *)&v24, v4);
    v6 = *((_DWORD *)this + 2);
    v7 = (double *)(v6 + 16);
    v8 = *(float *)(v6 + 16);
    v9 = *(float *)(v6 + 20);
    v10 = (float)((float)((float)(*(float *)&v24 - v8) * (float)(*(float *)&v24 - v8))
                + (float)((float)(*((float *)&v24 + 1) - v9) * (float)(*((float *)&v24 + 1) - v9)))
        + (float)((float)(v25 - *(float *)(v6 + 24)) * (float)(v25 - *(float *)(v6 + 24)));
    if ( v5 == 1 )
    {
      if ( v10 > 0.025 && (v9 != *((float *)&v24 + 1) || v8 != *(float *)&v24 || *(float *)(v6 + 32) != 2.0) )
      {
        v11 = v24;
        *(float *)(v6 + 24) = v25;
        *v7 = v11;
        *(_DWORD *)(v6 + 32) = 0x40000000;
        v12 = *(_BYTE *)(v6 + 36);
        *(_DWORD *)(v6 + 28) = 1069547520;
LABEL_21:
        *(_BYTE *)(v6 + 36) = v12 | 4;
      }
    }
    else if ( v10 > 0.025 )
    {
      v15 = *((_DWORD *)this + 3);
      v16 = *(_DWORD *)(v15 + 20);
      v17 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v15 + 38)]) + 44) + 36);
      v18 = (__int64 *)(v16 + 48);
      if ( !v16 )
        v18 = (__int64 *)(v15 + 4);
      if ( v8 != *(float *)v18 || v9 != *((float *)v18 + 1) || *(float *)(v6 + 32) != 2.0 )
      {
        v19 = *v18;
        *(_DWORD *)(v6 + 24) = *((_DWORD *)v18 + 2);
        *(_QWORD *)v7 = v19;
        v12 = *(_BYTE *)(v6 + 36);
        *(float *)(v6 + 28) = v17 + 1.5;
        *(_DWORD *)(v6 + 32) = 0x40000000;
        goto LABEL_21;
      }
    }
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4fde00
// Original: _ZNK35CTaskComplexEnterCarAsPassengerWait5CloneEv
// Demangled: CTaskComplexEnterCarAsPassengerWait::Clone(void)
CTaskComplex *__fastcall CTaskComplexEnterCarAsPassengerWait::Clone(
        CTaskComplexEnterCarAsPassengerWait *this,
        unsigned int a2)
{
  CTaskComplex *v3; // r0
  CEntity *v4; // r5
  CEntity *v5; // r8
  CTaskComplex *v6; // r4
  int v7; // r9

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = (CEntity *)*((_DWORD *)this + 3);
  v6 = v3;
  v7 = *((_DWORD *)this + 7);
  LOBYTE(this) = *((_BYTE *)this + 24);
  CTaskComplex::CTaskComplex(v3);
  *((_DWORD *)v6 + 5) = 0;
  *((_BYTE *)v6 + 24) = (_BYTE)this;
  *((_DWORD *)v6 + 7) = v7;
  *((_BYTE *)v6 + 32) = 0;
  *(_DWORD *)v6 = &off_66AAFC;
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

// Address: 0x4fde6c
// Original: _ZNK35CTaskComplexEnterCarAsPassengerWait11GetTaskTypeEv
// Demangled: CTaskComplexEnterCarAsPassengerWait::GetTaskType(void)
int __fastcall CTaskComplexEnterCarAsPassengerWait::GetTaskType(CTaskComplexEnterCarAsPassengerWait *this)
{
  return 718;
}


// ============================================================

// Address: 0x4fde74
// Original: _ZN35CTaskComplexEnterCarAsPassengerWait9SerializeEv
// Demangled: CTaskComplexEnterCarAsPassengerWait::Serialize(void)
void __fastcall CTaskComplexEnterCarAsPassengerWait::Serialize(CTaskComplexEnterCarAsPassengerWait *this)
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
  CPed *v13; // r0
  int v14; // r5
  CGenericGameStorage *v15; // r6
  int v16; // r2
  CGenericGameStorage *v17; // r0
  CGenericGameStorage *v18; // r5
  int v19; // r2
  int v20; // r2
  CGenericGameStorage *v21; // r5
  int v22; // r2

  v2 = (*(int (__fastcall **)(CTaskComplexEnterCarAsPassengerWait *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexEnterCarAsPassengerWait *))(*(_DWORD *)this + 20))(this) == 718 )
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
    v13 = (CPed *)*((_DWORD *)this + 4);
    if ( v13 )
    {
      v14 = GettPoolPedRef(v13);
      if ( UseDataFence )
        AddDataFence();
      v15 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v15 = v14;
      CGenericGameStorage::_SaveDataToWorkBuffer(v15, byte_4, v16);
      v17 = v15;
    }
    else
    {
      if ( UseDataFence )
        AddDataFence();
      v18 = (CGenericGameStorage *)malloc(4u);
      *(_DWORD *)v18 = -1;
      CGenericGameStorage::_SaveDataToWorkBuffer(v18, byte_4, v19);
      v17 = v18;
    }
    free(v17);
    if ( UseDataFence )
      AddDataFence();
    CGenericGameStorage::_SaveDataToWorkBuffer(
      (CTaskComplexEnterCarAsPassengerWait *)((char *)this + 24),
      (char *)&stderr + 1,
      v20);
    if ( UseDataFence )
      AddDataFence();
    v21 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v21 = *((_DWORD *)this + 7);
    CGenericGameStorage::_SaveDataToWorkBuffer(v21, byte_4, v22);
    j_free(v21);
  }
  else
  {
    v10 = (*(int (__fastcall **)(CTaskComplexEnterCarAsPassengerWait *))(*(_DWORD *)this + 20))(this);
    sub_1941D4(718, v10);
  }
}


// ============================================================
