
// Address: 0x18d158
// Original: j__ZN19CTaskSimpleCarDriveC2EP8CVehicleP28CTaskUtilityLineUpPedWithCarb
// Demangled: CTaskSimpleCarDrive::CTaskSimpleCarDrive(CVehicle *,CTaskUtilityLineUpPedWithCar *,bool)
// attributes: thunk
void __fastcall CTaskSimpleCarDrive::CTaskSimpleCarDrive(
        CTaskSimpleCarDrive *this,
        CVehicle *a2,
        CTaskUtilityLineUpPedWithCar *a3,
        bool a4)
{
  _ZN19CTaskSimpleCarDriveC2EP8CVehicleP28CTaskUtilityLineUpPedWithCarb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x190540
// Original: j__ZN19CTaskSimpleCarDrive13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarDrive::MakeAbortable(CPed *,int,CEvent const*)
// attributes: thunk
int __fastcall CTaskSimpleCarDrive::MakeAbortable(CTaskSimpleCarDrive *this, CPed *a2, int a3, const CEvent *a4)
{
  return _ZN19CTaskSimpleCarDrive13MakeAbortableEP4CPediPK6CEvent(this, a2, a3, a4);
}


// ============================================================

// Address: 0x190854
// Original: j__ZN19CTaskSimpleCarDrive9TriggerIKEP4CPed
// Demangled: CTaskSimpleCarDrive::TriggerIK(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarDrive::TriggerIK(CTaskSimpleCarDrive *this, CPed *a2)
{
  return _ZN19CTaskSimpleCarDrive9TriggerIKEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19099c
// Original: j__ZN19CTaskSimpleCarDrive14ProcessBoppingEP4CPedh
// Demangled: CTaskSimpleCarDrive::ProcessBopping(CPed *,uchar)
// attributes: thunk
int __fastcall CTaskSimpleCarDrive::ProcessBopping(CTaskSimpleCarDrive *this, CPed *a2, unsigned __int8 a3)
{
  return _ZN19CTaskSimpleCarDrive14ProcessBoppingEP4CPedh(this, a2, a3);
}


// ============================================================

// Address: 0x193f80
// Original: j__ZN19CTaskSimpleCarDrive18ProcessHeadBoppingEP4CPedhf
// Demangled: CTaskSimpleCarDrive::ProcessHeadBopping(CPed *,uchar,float)
// attributes: thunk
int __fastcall CTaskSimpleCarDrive::ProcessHeadBopping(
        CTaskSimpleCarDrive *this,
        CPed *a2,
        unsigned __int8 a3,
        float a4)
{
  return _ZN19CTaskSimpleCarDrive18ProcessHeadBoppingEP4CPedhf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x194f70
// Original: j__ZN19CTaskSimpleCarDrive10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarDrive::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarDrive::ProcessPed(CTaskSimpleCarDrive *this, CPed *a2)
{
  return _ZN19CTaskSimpleCarDrive10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x196e08
// Original: j__ZN19CTaskSimpleCarDrive12StartBoppingEP4CPed
// Demangled: CTaskSimpleCarDrive::StartBopping(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarDrive::StartBopping(CTaskSimpleCarDrive *this, CPed *a2)
{
  return _ZN19CTaskSimpleCarDrive12StartBoppingEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19d088
// Original: j__ZN19CTaskSimpleCarDriveC2EP8CVehicleP28CTaskUtilityLineUpPedWithCarb_0
// Demangled: CTaskSimpleCarDrive::CTaskSimpleCarDrive(CVehicle *,CTaskUtilityLineUpPedWithCar *,bool)
// attributes: thunk
void __fastcall CTaskSimpleCarDrive::CTaskSimpleCarDrive(
        CTaskSimpleCarDrive *this,
        CVehicle *a2,
        CTaskUtilityLineUpPedWithCar *a3,
        bool a4)
{
  _ZN19CTaskSimpleCarDriveC2EP8CVehicleP28CTaskUtilityLineUpPedWithCarb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19fd20
// Original: j__ZN19CTaskSimpleCarDrive17ProcessArmBoppingEP4CPedhf
// Demangled: CTaskSimpleCarDrive::ProcessArmBopping(CPed *,uchar,float)
// attributes: thunk
int __fastcall CTaskSimpleCarDrive::ProcessArmBopping(
        CTaskSimpleCarDrive *this,
        CPed *a2,
        unsigned __int8 a3,
        float a4)
{
  return _ZN19CTaskSimpleCarDrive17ProcessArmBoppingEP4CPedhf(this, a2, a3, a4);
}


// ============================================================

// Address: 0x4f9f00
// Original: _ZN19CTaskSimpleCarDriveC2EP8CVehicleP28CTaskUtilityLineUpPedWithCarb
// Demangled: CTaskSimpleCarDrive::CTaskSimpleCarDrive(CVehicle *,CTaskUtilityLineUpPedWithCar *,bool)
void __fastcall CTaskSimpleCarDrive::CTaskSimpleCarDrive(
        CTaskSimpleCarDrive *this,
        CVehicle *a2,
        CTaskUtilityLineUpPedWithCar *a3,
        bool a4)
{
  char v8; // r2
  CTaskUtilityLineUpPedWithCar *v9; // r0
  int v10; // r0
  char v11; // r0
  _DWORD v12[7]; // [sp+4h] [bp-1Ch] BYREF

  CTaskSimple::CTaskSimple(this);
  *((_WORD *)this + 14) = 0;
  *(_DWORD *)((char *)this + 86) = 0;
  *((_DWORD *)this + 20) = 0;
  v8 = *((_BYTE *)this + 92);
  *(_QWORD *)((char *)this + 12) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_DWORD *)((char *)this + 82) = 0;
  *((_DWORD *)this + 19) = 0;
  *(_DWORD *)this = &off_66AD18;
  *((_BYTE *)this + 92) = v8 & 0xC3 | (4 * a4) | 8;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
  if ( a3 )
  {
    v9 = (CTaskUtilityLineUpPedWithCar *)operator new(0x1Cu);
    memset(v12, 0, 12);
    CTaskUtilityLineUpPedWithCar::CTaskUtilityLineUpPedWithCar(
      v9,
      (const CVector *)v12,
      0,
      *((_DWORD *)a3 + 5),
      *((_DWORD *)a3 + 6));
    *((_DWORD *)this + 4) = v10;
  }
  *((_DWORD *)this + 8) = -1;
  v11 = *((_BYTE *)this + 92);
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_BYTE *)this + 92) = v11 & 0xFC;
}


// ============================================================

// Address: 0x4f9fac
// Original: _ZN19CTaskSimpleCarDriveD0Ev
// Demangled: CTaskSimpleCarDrive::~CTaskSimpleCarDrive()
void __fastcall CTaskSimpleCarDrive::~CTaskSimpleCarDrive(CTaskSimpleCarDrive *this)
{
  void *v1; // r0

  CTaskSimpleCarSetTempAction::~CTaskSimpleCarSetTempAction(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4f9fbc
// Original: _ZN19CTaskSimpleCarDrive9TriggerIKEP4CPed
// Demangled: CTaskSimpleCarDrive::TriggerIK(CPed *)
int __fastcall CTaskSimpleCarDrive::TriggerIK(CTaskSimpleCarDrive *this, CPed *a2)
{
  int result; // r0
  int v5; // r0
  int PlayerPed; // r3
  int v7; // r5
  int v8; // [sp+4h] [bp-2Ch]

  result = *((_DWORD *)this + 2);
  if ( result )
  {
    v5 = *(unsigned __int8 *)(result + 958);
    if ( (unsigned int)(v5 - 2) >= 5 )
    {
      result = v5 - 15;
      if ( (unsigned int)result < 2 )
      {
        result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
        if ( !result )
        {
          result = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
          if ( result <= 4 )
          {
            result = *((_DWORD *)this + 2);
            PlayerPed = *(_DWORD *)(result + 1056);
            if ( PlayerPed )
            {
              result = *(_BYTE *)(PlayerPed + 58) & 7;
              if ( result == 2 )
              {
                v7 = *(_DWORD *)(PlayerPed + 1124);
                if ( !v7 )
                {
                  v8 = -1;
                  return IKChainManager_c::LookAt(
                           (int)&g_ikChainMan,
                           (int)"DriveCar",
                           a2,
                           PlayerPed,
                           3000,
                           v8,
                           0,
                           0,
                           0.25,
                           500,
                           3,
                           0);
                }
                return IKChainManager_c::LookAt(
                         (int)&g_ikChainMan,
                         (int)"DriveCar",
                         a2,
                         v7,
                         3000,
                         5,
                         0,
                         0,
                         0.25,
                         500,
                         3,
                         0);
              }
            }
          }
        }
      }
    }
    else
    {
      result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
      if ( !result )
      {
        result = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0);
        if ( result <= 4 )
        {
          PlayerPed = FindPlayerPed(0);
          v8 = 5;
          return IKChainManager_c::LookAt(
                   (int)&g_ikChainMan,
                   (int)"DriveCar",
                   a2,
                   PlayerPed,
                   3000,
                   v8,
                   0,
                   0,
                   0.25,
                   500,
                   3,
                   0);
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4fa144
// Original: _ZN19CTaskSimpleCarDrive7AbortIKEP4CPed
// Demangled: CTaskSimpleCarDrive::AbortIK(CPed *)
int __fastcall CTaskSimpleCarDrive::AbortIK(CTaskSimpleCarDrive *this, CPed *a2)
{
  int result; // r0

  result = IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2);
  if ( result )
    return sub_1A0F0C((IKChainManager_c *)&g_ikChainMan, a2, 250);
  return result;
}


// ============================================================

// Address: 0x4fa174
// Original: _ZN19CTaskSimpleCarDrive13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarDrive::MakeAbortable(CPed *,int,CEvent const*)
bool __fastcall CTaskSimpleCarDrive::MakeAbortable(CVehicle **this, CPed *a2, int a3, const CEvent *a4)
{
  bool v7; // zf
  CCarEnterExit *v8; // r0
  int v9; // r0
  char v11; // r1
  _BYTE v12[40]; // [sp+0h] [bp-28h] BYREF

  if ( a3 == 2 )
  {
    v8 = (CCarEnterExit *)(*((unsigned __int8 *)a2 + 1157) << 31);
    v7 = v8 == 0;
    if ( v8 )
    {
      v8 = (CCarEnterExit *)*((_DWORD *)a2 + 356);
      v7 = v8 == 0;
    }
    if ( !v7 )
    {
      v9 = CCarEnterExit::ComputeTargetDoorToExit(v8, a2, (const CPed *)((char *)&stderr + 2));
      CTaskSimpleCarSetPedOut::CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v12, this[2], v9, 0);
      if ( a4 && *(_DWORD *)(*((_DWORD *)a2 + 356) + 1440) == 9 )
        v12[18] = 1;
      CTaskSimpleCarSetPedOut::ProcessPed((CTaskSimpleCarSetPedOut *)v12, a2);
      CTaskSimpleCarSetPedOut::~CTaskSimpleCarSetPedOut((CTaskSimpleCarSetPedOut *)v12);
    }
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    return 1;
  }
  else
  {
    v11 = *((_BYTE *)this + 92);
    *((_BYTE *)this + 92) = v11 | 8;
    return (v11 & 0x20) == 0;
  }
}


// ============================================================

// Address: 0x4fa214
// Original: _ZN19CTaskSimpleCarDrive10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarDrive::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarDrive::ProcessPed(CTaskSimpleCarDrive *this, CPed *a2)
{
  CEntity **v2; // r6
  CEntity *v5; // r1
  int HasRadioRetuneJustStarted; // r9
  CEntity *v7; // r0
  bool v8; // zf
  int v9; // r0
  const CPed *v10; // r1
  int v11; // r2
  int v12; // r6
  bool v13; // zf
  int v14; // r6
  int PedsGroup; // r6
  unsigned int v16; // r0
  __int64 v17; // r0
  CEventGroup *EventGlobalGroup; // r0
  int v19; // r0
  int v20; // r1
  bool v21; // zf
  int IsPlayer; // r1
  CVehicle *v23; // r0
  bool v24; // zf
  CPed *v25; // r2
  CPad *PadFromPlayer; // r8
  bool v27; // zf
  unsigned int v28; // r1
  CTaskSimpleGangDriveBy *v29; // r6
  int v30; // r0
  int Association; // r6
  CVehicle *v32; // r0
  bool v33; // zf
  int Group; // r0
  CTaskSimpleCarDrive *v35; // r0
  CPed *v36; // r1
  unsigned __int8 v37; // r2
  int v38; // r6
  int *v39; // r0
  bool v40; // r5
  CTaskSimpleGangDriveBy *v41; // r6
  int IsHolding; // r0
  const CPed *v43; // r1
  int v44; // r0
  int v45; // r1
  bool v46; // zf
  CPed *v48; // r0
  bool v49; // zf
  int v50; // r0
  float v51; // s0
  float v52; // s2
  int v53; // r0
  int v54; // r0
  unsigned int v55; // r0
  unsigned int v56; // r1
  unsigned int v57; // r1
  CTaskComplexSequence *v58; // r8
  unsigned int v59; // r1
  int v60; // r6
  CEntity *v61; // r9
  unsigned int v62; // r1
  int v63; // r6
  CEntity *v64; // r9
  int v65; // r0
  CAnimBlendAssociation *v66; // r0
  _BYTE v67[52]; // [sp+Ch] [bp-34h] BYREF

  HasRadioRetuneJustStarted = CAudioEngine::HasRadioRetuneJustStarted((CAudioEngine *)&AudioEngine);
  if ( (*((_BYTE *)this + 92) & 4) != 0 && *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v7 = (CEntity *)*((_DWORD *)a2 + 356);
    v8 = v7 == 0;
    if ( v7 )
    {
      v2 = (CEntity **)((char *)this + 8);
      v5 = (CEntity *)*((_DWORD *)this + 2);
      v8 = v7 == v5;
    }
    if ( !v8 )
    {
      if ( v5 )
      {
        CEntity::CleanUpOldReference(v5, v2);
        v7 = (CEntity *)*((_DWORD *)a2 + 356);
        *v2 = v7;
        if ( !v7 )
          goto LABEL_11;
      }
      else
      {
        *v2 = v7;
      }
      CEntity::RegisterReference(v7, v2);
    }
  }
LABEL_11:
  v9 = *((_DWORD *)a2 + 290);
  v10 = (const CPed *)*((_DWORD *)a2 + 291);
  v11 = *((_DWORD *)a2 + 292);
  v12 = *((_DWORD *)this + 2);
  v13 = v12 == 0;
  if ( v12 )
    v13 = (*((_DWORD *)a2 + 289) & 0x100) == 0;
  if ( v13 )
  {
    *((_DWORD *)a2 + 289) &= ~0x100u;
    *((_DWORD *)a2 + 290) = v9;
    *((_DWORD *)a2 + 291) = v10;
    *((_DWORD *)a2 + 292) = v11;
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    return 1;
  }
  PedsGroup = CPedGroups::GetPedsGroup(a2, v10);
  if ( CUpsideDownCarCheck::IsCarUpsideDown(
         (CUpsideDownCarCheck *)&CTheScripts::UpsideDownCars,
         *((const CVehicle **)this + 2)) )
  {
    if ( (CPed *)FindPlayerPed(-1) != a2
      && *(unsigned __int8 *)(FindPlayerPed(-1) + 1157) << 31
      && *(_DWORD *)(FindPlayerPed(-1) + 1424) == *((_DWORD *)this + 2) )
    {
      CPed::Say(a2, 0x22u, 0, 1.0, 0, 0, 0);
    }
    if ( !PedsGroup || CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), a2) == 1 )
    {
      v16 = *((_DWORD *)this + 19) + (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
      *((_DWORD *)this + 19) = v16;
      if ( v16 > 0x7D0 )
      {
        CEventCarUpsideDown::CEventCarUpsideDown((CEventCarUpsideDown *)v67, *((CVehicle **)this + 2));
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v67, 0);
        CEventCarUpsideDown::~CEventCarUpsideDown((CEventCarUpsideDown *)v67);
      }
    }
  }
  else
  {
    *((_DWORD *)this + 19) = 0;
  }
  if ( CPed::IsPlayer(a2) == 1 && CVehicle::IsLawEnforcementVehicle(*((CVehicle **)this + 2)) )
  {
    if ( !*((_BYTE *)this + 88) )
    {
      LODWORD(v17) = CTimer::m_snTimeInMilliseconds;
LABEL_37:
      HIDWORD(v17) = 2000;
      *((_QWORD *)this + 10) = v17;
      *((_BYTE *)this + 88) = 1;
      CEventCopCarBeingStolen::CEventCopCarBeingStolen((CEventCopCarBeingStolen *)v67, a2, *((CVehicle **)this + 2));
      EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
      CEventGroup::Add(EventGlobalGroup, (CEvent *)v67, 0);
      CEventCopCarBeingStolen::~CEventCopCarBeingStolen((CEventCopCarBeingStolen *)v67);
      goto LABEL_38;
    }
    if ( *((_BYTE *)this + 89) )
    {
      LODWORD(v17) = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 89) = 0;
      *((_DWORD *)this + 20) = v17;
      HIDWORD(v17) = v17;
    }
    else
    {
      HIDWORD(v17) = *((_DWORD *)this + 20);
      LODWORD(v17) = CTimer::m_snTimeInMilliseconds;
    }
    if ( HIDWORD(v17) + *((_DWORD *)this + 21) <= (unsigned int)v17 )
      goto LABEL_37;
  }
LABEL_38:
  v19 = *((_DWORD *)this + 2);
  v20 = *(_DWORD *)(v19 + 1440);
  v21 = v20 == 9;
  if ( v20 != 9 )
    v21 = *(_DWORD *)(v19 + 1444) == 2;
  if ( v21 || *(_WORD *)(v19 + 38) == 531 )
    *((_DWORD *)a2 + 292) |= 0x100000u;
  IsPlayer = CPed::IsPlayer(a2);
  v23 = (CVehicle *)*((_DWORD *)this + 2);
  v24 = IsPlayer == 1;
  v25 = (CPed *)*((_DWORD *)v23 + 281);
  if ( IsPlayer == 1 )
    v24 = v25 == a2;
  if ( !v24 )
  {
    if ( v25 != a2 )
    {
      if ( CVehicle::IsPassenger(v23, a2) == 1 )
      {
        if ( (*((_BYTE *)this + 92) & 0x18) == 0 )
        {
          if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 192))(*((_DWORD *)this + 2)) )
          {
            v38 = *((_DWORD *)a2 + 6);
            v39 = (int *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 192))(*((_DWORD *)this + 2));
            CAnimManager::BlendAnimation(v38, *v39, 0xCDu);
          }
          *((_BYTE *)this + 92) |= 0x10u;
        }
        CTaskSimpleCarDrive::ProcessBopping(this, a2, 1u);
        if ( CPed::IsPlayer(a2) == 1
          && CGameLogic::IsCoopGameGoingOn((CGameLogic *)((char *)&stderr + 1)) == 1
          && *((_DWORD *)a2 + 389)
          && *((int *)a2 + 392) >= 1
          && CVehicle::CanPedLeanOut(*((CVehicle **)this + 2), a2) == 1
          && *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) == 49 )
        {
          v40 = *(_DWORD *)(*((_DWORD *)this + 2) + 1132) != (_DWORD)a2;
          v41 = (CTaskSimpleGangDriveBy *)CTask::operator new((CTask *)&dword_44, 33 * (unsigned __int8)byte_951FFF);
          CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(v41, 0, 0, 100.0, 100, 8, v40);
          CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)v67, 3, v41, 0);
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v67, 0);
          CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)v67);
        }
      }
      goto LABEL_88;
    }
    goto LABEL_86;
  }
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
  v27 = byte_796845 == 0;
  if ( byte_796845 )
    v27 = *((_DWORD *)a2 + 389) == 0;
  if ( !v27 && *((int *)a2 + 392) >= 1 && CVehicle::CanPedLeanOut(*((CVehicle **)this + 2), a2) == 1 )
  {
    v29 = (CTaskSimpleGangDriveBy *)CTask::operator new((CTask *)&dword_44, v28);
    CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(v29, 0, 0, 100.0, 100, 8, 0);
    CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)v67, 3, v29, 0);
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v67, 0);
    CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)v67);
  }
  v30 = *((_DWORD *)a2 + 356);
  if ( *(_WORD *)(v30 + 38) == 570 || *(_DWORD *)(v30 + 1440) != 6 )
  {
LABEL_57:
    if ( *(_DWORD *)(v30 + 1440) || CDamageManager::GetDoorStatus() != 1 )
    {
      v23 = (CVehicle *)*((_DWORD *)this + 2);
LABEL_86:
      (*(void (__fastcall **)(CVehicle *, CPed *, int))(*(_DWORD *)v23 + 188))(v23, a2, HasRadioRetuneJustStarted);
      v35 = this;
      v36 = a2;
      v37 = 1;
LABEL_87:
      CTaskSimpleCarDrive::ProcessBopping(v35, v36, v37);
      goto LABEL_88;
    }
    if ( (*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)a2 + 356) + 136))(*((_DWORD *)a2 + 356), 2) )
      goto LABEL_88;
    Association = RpAnimBlendClumpGetAssociation();
    v32 = (CVehicle *)*((_DWORD *)a2 + 356);
    if ( *((unsigned __int8 *)v32 + 1163) << 31 )
      goto LABEL_69;
    v33 = Association == 0;
    if ( !Association )
      v33 = (*((_BYTE *)v32 + 1162) & 1) == 0;
    if ( !v33 )
    {
LABEL_69:
      if ( Association )
      {
        Group = CVehicleAnimGroup::GetGroup(
                  (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                                 * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 2) + 904) + 222)],
                  *(__int16 *)(Association + 44));
        (*(void (__fastcall **)(_DWORD, CPed *, int, int, int, _DWORD))(**((_DWORD **)a2 + 356) + 116))(
          *((_DWORD *)a2 + 356),
          a2,
          10,
          Group,
          386,
          *(_DWORD *)(Association + 32));
      }
      v35 = this;
      v36 = a2;
      v37 = 0;
      goto LABEL_87;
    }
    if ( PadFromPlayer )
    {
      if ( CPad::GetAccelerate(PadFromPlayer)
        || CPad::GetSteeringLeftRight(PadFromPlayer)
        || CPad::GetBrake(PadFromPlayer) )
      {
        goto LABEL_69;
      }
      v32 = (CVehicle *)*((_DWORD *)a2 + 356);
    }
    CVehicle::SetGettingOutFlags(v32, 1u);
    *((_BYTE *)this + 92) |= 0x20u;
    v65 = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)a2 + 356) + 904)
                                                                                                + 222)],
            386);
    v66 = (CAnimBlendAssociation *)CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), v65, 0x182u);
    *((_DWORD *)this + 3) = v66;
    CAnimBlendAssociation::SetFinishCallback(
      v66,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarDrive::FinishAnimCloseDoorRollingCB,
      this);
    return 0;
  }
  if ( CDoor::IsClosed((CDoor *)(v30 + 1564)) == 1 )
  {
    v30 = *((_DWORD *)a2 + 356);
    goto LABEL_57;
  }
  if ( !PadFromPlayer
    || !CPad::GetAccelerate(PadFromPlayer)
    && !CPad::GetSteeringLeftRight(PadFromPlayer)
    && !CPad::GetBrake(PadFromPlayer) )
  {
    v54 = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 2) + 904)
                                                                                                + 222)],
            386);
    (*(void (__fastcall **)(_DWORD, CPed *, int, int, int, int))(**((_DWORD **)a2 + 356) + 116))(
      *((_DWORD *)a2 + 356),
      a2,
      10,
      v54,
      386,
      1065353216);
  }
LABEL_88:
  IsHolding = CPed::GetEntityThatThisPedIsHolding(a2);
  if ( IsHolding
    && *(__int16 *)(IsHolding + 38) == (unsigned __int16)MI_GANG_SMOKE
    && !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
    && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 60.0) == 15
    && CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 307) )
  {
    CVehicle::IsPassenger(*((CVehicle **)this + 2), a2);
    CTaskSimpleHoldEntity::PlayAnim();
  }
  if ( RpAnimBlendClumpGetAssociation() )
  {
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2) )
      IKChainManager_c::AbortLookAt((IKChainManager_c *)&g_ikChainMan, a2, 250);
    if ( *((_DWORD *)this + 8) != -1 )
      *((_DWORD *)this + 8) = -1;
  }
  else
  {
    CTaskSimpleCarDrive::TriggerIK(this, a2);
  }
  if ( *((_BYTE *)a2 + 1096) == 1 && !CPedGroups::GetPedsGroup(a2, v43) )
  {
    v44 = *((_DWORD *)this + 2);
    v45 = *(_DWORD *)(v44 + 1124);
    v46 = v45 == 0;
    if ( !v45 )
      v46 = *(_DWORD *)(v44 + 1128) == (_DWORD)a2;
    if ( v46 )
    {
      if ( !*((_BYTE *)this + 28) )
      {
        *(_QWORD *)((char *)this + 20) = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xFA000000000LL;
        *((_BYTE *)this + 28) = 1;
      }
      if ( *((_BYTE *)this + 29) )
      {
        v55 = CTimer::m_snTimeInMilliseconds;
        *((_BYTE *)this + 29) = 0;
        *((_DWORD *)this + 5) = v55;
        v56 = v55;
      }
      else
      {
        v56 = *((_DWORD *)this + 5);
        v55 = CTimer::m_snTimeInMilliseconds;
      }
      v57 = v56 + *((_DWORD *)this + 6);
      if ( v57 <= v55 )
      {
        v58 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v57);
        CTaskComplexSequence::CTaskComplexSequence(v58);
        v60 = CTask::operator new((CTask *)&dword_34, v59);
        v61 = (CEntity *)*((_DWORD *)this + 2);
        CTaskComplex::CTaskComplex((CTaskComplex *)v60);
        *(_DWORD *)v60 = &off_66ABEC;
        *(_DWORD *)(v60 + 16) = 0;
        *(_DWORD *)(v60 + 20) = 0;
        *(_WORD *)(v60 + 24) = 1;
        *(_BYTE *)(v60 + 26) = 0;
        *(_DWORD *)(v60 + 28) = 0;
        *(_BYTE *)(v60 + 32) = 0;
        *(_BYTE *)(v60 + 33) = 0;
        *(_DWORD *)(v60 + 36) = 15;
        *(_DWORD *)(v60 + 40) = 1082130432;
        *(_DWORD *)(v60 + 44) = 1065353216;
        *(_BYTE *)(v60 + 48) = 0;
        *(_DWORD *)(v60 + 12) = v61;
        if ( v61 )
          CEntity::RegisterReference(v61, (CEntity **)(v60 + 12));
        CTaskComplexSequence::AddTask(v58, (CTask *)v60);
        v63 = CTask::operator new((CTask *)&dword_24, v62);
        v64 = (CEntity *)*((_DWORD *)this + 2);
        CTaskComplex::CTaskComplex((CTaskComplex *)v63);
        *(_DWORD *)v63 = &off_66AD4C;
        *(_DWORD *)(v63 + 16) = 1092616192;
        *(_DWORD *)(v63 + 20) = -1;
        *(_DWORD *)(v63 + 24) = 0;
        *(_BYTE *)(v63 + 28) = 1;
        *(_BYTE *)(v63 + 32) = 0;
        *(_DWORD *)(v63 + 12) = v64;
        if ( v64 )
          CEntity::RegisterReference(v64, (CEntity **)(v63 + 12));
        *(_DWORD *)v63 = &off_66AD94;
        CTaskComplexSequence::AddTask(v58, (CTask *)v63);
        CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)v67, 3, v58, 0);
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v67, 0);
        CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)v67);
      }
    }
    else
    {
      *((_BYTE *)this + 28) = 0;
    }
  }
  if ( (CTimer::m_FrameCounter + *((unsigned __int16 *)a2 + 18)) << 18 )
    return 0;
  v14 = 0;
  v48 = *(CPed **)(*((_DWORD *)this + 2) + 1124);
  v49 = v48 == 0;
  if ( v48 )
    v49 = v48 == a2;
  if ( !v49 )
  {
    if ( CPed::IsPlayer(v48) == 1 )
    {
      v50 = *((_DWORD *)this + 2);
      v51 = *(float *)(v50 + 72);
      v52 = *(float *)(v50 + 76);
      if ( sqrtf((float)(v51 * v51) + (float)(v52 * v52)) > 0.7 )
      {
        CPed::Say(a2, 0x20u, 0, 1.0, 0, 0, 0);
        v53 = *((_DWORD *)this + 2);
        v51 = *(float *)(v53 + 72);
        v52 = *(float *)(v53 + 76);
      }
      if ( sqrtf((float)(v51 * v51) + (float)(v52 * v52)) < 0.1 )
        CPed::Say(a2, 0x27u, 0, 1.0, 0, 0, 0);
      v14 = 0;
      CPed::Say(a2, 0x29u, 0, 1.0, 0, 0, 0);
      return v14;
    }
    return 0;
  }
  return v14;
}


// ============================================================

// Address: 0x4fab0c
// Original: _ZN19CTaskSimpleCarDrive25StartAnimDoorCloseRollingEPK4CPed
// Demangled: CTaskSimpleCarDrive::StartAnimDoorCloseRolling(CPed const*)
int __fastcall CTaskSimpleCarDrive::StartAnimDoorCloseRolling(CTaskSimpleCarDrive *this, const CPed *a2)
{
  int Group; // r0
  CAnimBlendAssociation *v5; // r0

  Group = CVehicleAnimGroup::GetGroup(
            (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                           * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)a2 + 356) + 904)
                                                                                                + 222)],
            386);
  v5 = (CAnimBlendAssociation *)CAnimManager::AddAnimation(*((_DWORD *)a2 + 6), Group, 0x182u);
  *((_DWORD *)this + 3) = v5;
  return sub_18C20C(
           v5,
           (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleCarDrive::FinishAnimCloseDoorRollingCB,
           this);
}


// ============================================================

// Address: 0x4fab5c
// Original: _ZN19CTaskSimpleCarDrive14ProcessBoppingEP4CPedh
// Demangled: CTaskSimpleCarDrive::ProcessBopping(CPed *,uchar)
int __fastcall CTaskSimpleCarDrive::ProcessBopping(CTaskSimpleCarDrive *this, CPed *a2, unsigned __int8 a3)
{
  int v6; // r4
  int result; // r0
  bool v8; // zf
  bool v9; // zf
  int v10; // r0
  int v11; // r8
  int v12; // r0
  int v13; // r1
  float *v14; // r2
  float *v15; // r1
  float v16; // s0

  v6 = *(_DWORD *)(*((_DWORD *)a2 + 356) + 1124);
  result = FindPlayerPed(0);
  v8 = v6 == result;
  if ( v6 != result )
  {
    result = *((_DWORD *)a2 + 359);
    v8 = result == 6;
  }
  if ( !v8 )
  {
    result = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 824);
    if ( !result )
    {
      result = *((_DWORD *)a2 + 356);
      if ( !*(_DWORD *)(result + 1440) )
      {
        result = *(_DWORD *)(result + 1444);
        v9 = result == 2;
        if ( result != 2 )
        {
          result = *((unsigned __int8 *)a2 + 1096);
          v9 = result == 2;
        }
        if ( !v9 )
        {
          v10 = *((_DWORD *)this + 8);
          if ( v10 != -1 )
          {
            v11 = *((_DWORD *)this + 10);
            v12 = CTimer::m_snTimeInMilliseconds - v10;
            *((_DWORD *)this + 12) = v12 / v11 % 2;
            *((float *)this + 11) = (float)(v12 % v11) / (float)v11;
          }
          v13 = *((_DWORD *)a2 + 5);
          v14 = (float *)(v13 + 48);
          if ( !v13 )
            v14 = (float *)((char *)a2 + 4);
          v15 = (float *)(dword_951FBC + 48);
          if ( !dword_951FBC )
            v15 = (float *)&qword_951FAC;
          v16 = (float)((float)((float)(*v14 - *v15) * (float)(*v14 - *v15))
                      + (float)((float)(v14[1] - v15[1]) * (float)(v14[1] - v15[1])))
              + (float)((float)(v14[2] - v15[2]) * (float)(v14[2] - v15[2]));
          CTaskSimpleCarDrive::ProcessHeadBopping(this, a2, a3, v16);
          CTaskSimpleCarDrive::ProcessArmBopping(this, a2, a3, v16);
          result = *((_DWORD *)this + 8) + 1;
          if ( *((_DWORD *)this + 8) != -1 )
          {
            result = *((unsigned __int8 *)this + 92) << 30;
            if ( !result )
            {
              result = -1;
              *((_DWORD *)this + 8) = -1;
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4fac8c
// Original: _ZN19CTaskSimpleCarDrive9IsBoppingEv
// Demangled: CTaskSimpleCarDrive::IsBopping(void)
bool __fastcall CTaskSimpleCarDrive::IsBopping(CTaskSimpleCarDrive *this)
{
  return *((_DWORD *)this + 8) != -1;
}


// ============================================================

// Address: 0x4fac9a
// Original: _ZN19CTaskSimpleCarDrive11StopBoppingEv
// Demangled: CTaskSimpleCarDrive::StopBopping(void)
int __fastcall CTaskSimpleCarDrive::StopBopping(int this)
{
  *(_DWORD *)(this + 32) = -1;
  return this;
}


// ============================================================

// Address: 0x4faca4
// Original: _ZN19CTaskSimpleCarDrive14SetPedPositionEP4CPed
// Demangled: CTaskSimpleCarDrive::SetPedPosition(CPed *)
int __fastcall CTaskSimpleCarDrive::SetPedPosition(CTaskSimpleCarDrive *this, CPed *a2)
{
  CTaskSimpleCarDrive *TaskByType; // r0
  bool v5; // zf
  int v6; // r1
  CAnimBlendAssociation *Association; // r3
  CTaskUtilityLineUpPedWithCar *v8; // r0
  void *v9; // r0
  int v11; // r0

  if ( (*((_BYTE *)this + 92) & 8) != 0 )
  {
    TaskByType = (CTaskSimpleCarDrive *)CTaskManager::FindTaskByType(
                                          (CTaskManager *)(*((_DWORD *)a2 + 272) + 4),
                                          4,
                                          709);
    v5 = TaskByType == 0;
    if ( TaskByType )
      v5 = TaskByType == this;
    if ( !v5 )
    {
      v6 = *((_DWORD *)TaskByType + 4);
      if ( v6 )
      {
        *((_DWORD *)this + 4) = v6;
        *((_DWORD *)TaskByType + 4) = 0;
      }
    }
    *((_BYTE *)this + 92) &= ~8u;
  }
  if ( *((_DWORD *)this + 4) )
  {
    Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
    if ( !Association )
    {
      Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
      if ( !Association )
      {
        Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
        if ( !Association )
        {
          Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
          if ( !Association )
          {
            Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
            if ( !Association )
            {
              Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
              if ( !Association )
              {
                Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
                if ( !Association )
                {
                  Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
                  if ( !Association )
                  {
                    Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
                    if ( !Association )
                    {
                      Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
                      if ( !Association )
                      {
                        Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
                        if ( !Association )
                          Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    CTaskUtilityLineUpPedWithCar::ProcessPed(
      *((CTaskUtilityLineUpPedWithCar **)this + 4),
      a2,
      *((CVehicle **)this + 2),
      Association);
    v8 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 4);
    if ( v8 )
    {
      CTaskUtilityLineUpPedWithCar::~CTaskUtilityLineUpPedWithCar(v8);
      operator delete(v9);
    }
    *((_DWORD *)this + 4) = 0;
    return 1;
  }
  else
  {
    v11 = *((_DWORD *)this + 2);
    if ( v11 && *((_DWORD *)a2 + 356) == v11 )
    {
      if ( *((unsigned __int8 *)a2 + 1157) << 31 )
        CPed::SetPedPositionInCar(a2);
      return 1;
    }
    else
    {
      return 1;
    }
  }
}


// ============================================================

// Address: 0x4fae38
// Original: _ZN19CTaskSimpleCarDrive28FinishAnimCloseDoorRollingCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleCarDrive::FinishAnimCloseDoorRollingCB(CAnimBlendAssociation *,void *)
CVehicle *__fastcall CTaskSimpleCarDrive::FinishAnimCloseDoorRollingCB(
        CTaskSimpleCarDrive *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  char v4; // r1
  CVehicle *result; // r0
  int Group; // r0

  v4 = *((_BYTE *)a2 + 92);
  *((_DWORD *)a2 + 3) = 0;
  result = (CVehicle *)*((_DWORD *)a2 + 2);
  *((_BYTE *)a2 + 92) = v4 & 0xDF;
  if ( result )
  {
    CVehicle::ClearGettingOutFlags(result, 1u);
    result = (CVehicle *)*((_DWORD *)a2 + 2);
    if ( *((_DWORD *)result + 281) )
    {
      Group = CVehicleAnimGroup::GetGroup(
                (CVehicleAnimGroup *)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                                               * *(unsigned __int8 *)(*((_DWORD *)result + 226) + 222)],
                386);
      return (CVehicle *)(*(int (__fastcall **)(_DWORD, _DWORD, int, int, int, int))(**((_DWORD **)a2 + 2) + 116))(
                           *((_DWORD *)a2 + 2),
                           *(_DWORD *)(*((_DWORD *)a2 + 2) + 1124),
                           10,
                           Group,
                           386,
                           1065353216);
    }
  }
  return result;
}


// ============================================================

// Address: 0x4faea4
// Original: _ZN19CTaskSimpleCarDrive14GetPedsBopInfoEP4CPedPiS2_
// Demangled: CTaskSimpleCarDrive::GetPedsBopInfo(CPed *,int *,int *)
int __fastcall CTaskSimpleCarDrive::GetPedsBopInfo(CTaskSimpleCarDrive *this, CPed *a2, int *a3, int *a4)
{
  int result; // r0

  result = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 709);
  if ( result )
  {
    *a4 = *(_DWORD *)(result + 40);
    result = *(_DWORD *)(result + 32);
    *a3 = result;
  }
  return result;
}


// ============================================================

// Address: 0x4faec8
// Original: _ZN19CTaskSimpleCarDrive12StartBoppingEP4CPed
// Demangled: CTaskSimpleCarDrive::StartBopping(CPed *)
int __fastcall CTaskSimpleCarDrive::StartBopping(CTaskSimpleCarDrive *this, CPed *a2)
{
  CPed *v4; // r0
  bool v5; // zf
  int ActiveTaskByType; // r0
  int v7; // r1
  bool v8; // zf
  _DWORD *v9; // r0
  CPed *v10; // r1
  bool v11; // zf
  bool v12; // zf
  CPed *v13; // r1
  bool v14; // zf
  bool v15; // zf
  CPed *v16; // r0
  bool v17; // zf
  bool v18; // zf
  int v19; // s0
  int result; // r0
  int v21; // r5
  int v22; // s2

  v4 = *(CPed **)(*((_DWORD *)a2 + 356) + 1124);
  v5 = v4 == 0;
  if ( v4 )
    v5 = v4 == a2;
  if ( !v5 )
  {
    ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v4 + 272) + 4), 709);
    v8 = ActiveTaskByType == 0;
    if ( ActiveTaskByType )
    {
      v7 = *(_DWORD *)(ActiveTaskByType + 32);
      v8 = v7 == -1;
    }
    if ( !v8 )
      goto LABEL_32;
  }
  v9 = (_DWORD *)*((_DWORD *)a2 + 356);
  v10 = (CPed *)v9[282];
  v11 = v10 == 0;
  if ( v10 )
    v11 = v10 == a2;
  if ( !v11 )
  {
    ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v10 + 272) + 4), 709);
    v12 = ActiveTaskByType == 0;
    if ( ActiveTaskByType )
    {
      v7 = *(_DWORD *)(ActiveTaskByType + 32);
      v12 = v7 == -1;
    }
    if ( !v12 )
      goto LABEL_32;
    v9 = (_DWORD *)*((_DWORD *)a2 + 356);
  }
  v13 = (CPed *)v9[283];
  v14 = v13 == 0;
  if ( v13 )
    v14 = v13 == a2;
  if ( !v14 )
  {
    ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v13 + 272) + 4), 709);
    v15 = ActiveTaskByType == 0;
    if ( ActiveTaskByType )
    {
      v7 = *(_DWORD *)(ActiveTaskByType + 32);
      v15 = v7 == -1;
    }
    if ( !v15 )
      goto LABEL_32;
    v9 = (_DWORD *)*((_DWORD *)a2 + 356);
  }
  v16 = (CPed *)v9[284];
  v17 = v16 == 0;
  if ( v16 )
    v17 = v16 == a2;
  if ( v17 )
    goto LABEL_31;
  ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v16 + 272) + 4), 709);
  v18 = ActiveTaskByType == 0;
  if ( ActiveTaskByType )
  {
    v7 = *(_DWORD *)(ActiveTaskByType + 32);
    v18 = v7 == -1;
  }
  if ( v18 )
  {
LABEL_31:
    *((_DWORD *)this + 8) = CTimer::m_snTimeInMilliseconds;
    v19 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 60.0) + 60;
    result = 0;
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 10) = (int)(float)((float)(1.0 / (float)((float)v19 / 60.0)) * 1000.0);
    return result;
  }
LABEL_32:
  v21 = *(_DWORD *)(ActiveTaskByType + 40);
  *((_DWORD *)this + 10) = v21;
  *((_DWORD *)this + 8) = v7;
  v22 = (CTimer::m_snTimeInMilliseconds - v7) % v21;
  result = (CTimer::m_snTimeInMilliseconds - v7) / v21 % 2;
  *((_DWORD *)this + 12) = result;
  *((float *)this + 11) = (float)v22 / (float)v21;
  return result;
}


// ============================================================

// Address: 0x4fb028
// Original: _ZN19CTaskSimpleCarDrive13UpdateBoppingEv
// Demangled: CTaskSimpleCarDrive::UpdateBopping(void)
int __fastcall CTaskSimpleCarDrive::UpdateBopping(CTaskSimpleCarDrive *this)
{
  int v2; // r5
  int v3; // r0
  int v4; // r1
  int result; // r0

  v2 = *((_DWORD *)this + 10);
  v3 = CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 8);
  v4 = v3 % v2;
  result = v3 / v2 % 2;
  *((_DWORD *)this + 12) = result;
  *((float *)this + 11) = (float)v4 / (float)v2;
  return result;
}


// ============================================================

// Address: 0x4fb06c
// Original: _ZN19CTaskSimpleCarDrive18ProcessHeadBoppingEP4CPedhf
// Demangled: CTaskSimpleCarDrive::ProcessHeadBopping(CPed *,uchar,float)
int __fastcall CTaskSimpleCarDrive::ProcessHeadBopping(CTaskSimpleCarDrive *this, CPed *a2, int a3, float a4)
{
  float v4; // s16
  char v5; // r4
  int *v9; // r9
  unsigned __int16 v10; // r0
  int v11; // r0
  float v12; // s2
  int result; // r0
  float v14; // s2
  float v15; // s16
  int v16; // r4
  float v17; // r2
  unsigned int v18; // r2

  v4 = 0.0;
  v5 = a3;
  if ( !a3 )
    goto LABEL_7;
  if ( !(*((unsigned __int8 *)this + 92) << 31) )
  {
    if ( *((float *)this + 17) == 0.0
      && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) >= 996 )
    {
      v9 = (int *)((char *)this + 32);
      if ( *((_DWORD *)this + 8) == -1 )
        CTaskSimpleCarDrive::StartBopping(this, a2);
      else
        v9 = &CTimer::m_snTimeInMilliseconds;
      *((_DWORD *)this + 13) = *v9;
      v10 = rand();
      *((_DWORD *)this + 14) = (int)(float)((float)((float)v10 * 0.000015259) + (float)((float)v10 * 0.000015259)) + 1;
      v11 = rand();
      *((_DWORD *)this + 17) = 0;
      *((_DWORD *)this + 15) = 0;
      *((float *)this + 16) = (float)((float)((float)v11 * 4.6566e-10) * 5.0) + 3.0;
      goto LABEL_14;
    }
LABEL_7:
    v5 = 0;
    goto LABEL_14;
  }
  v4 = sinf(*((float *)this + 11) * 3.1416);
  if ( (unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 13)) >= 0x1389
    && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0) >= 996 )
  {
    v5 = 0;
  }
LABEL_14:
  v12 = *((float *)this + 17);
  result = *((_BYTE *)this + 92) & 0xFE | v5 & 1;
  *((_BYTE *)this + 92) = result;
  if ( (v5 & 1) != 0 )
  {
    if ( v12 < 1.0 )
    {
      v12 = v12 + 0.05;
      *((float *)this + 17) = v12;
    }
    if ( v12 > 1.0 )
    {
      result = 1065353216;
      *((_DWORD *)this + 17) = 1065353216;
      v12 = 1.0;
    }
  }
  else
  {
    if ( v12 > 0.0 )
    {
      v12 = v12 + -0.05;
      *((float *)this + 17) = v12;
    }
    if ( v12 < 0.0 )
    {
      result = 0;
      v12 = 0.0;
      *((_DWORD *)this + 17) = 0;
    }
    v12 = 1.0 - v12;
  }
  v14 = (float)((float)(v4 - *((float *)this + 15)) * v12) + *((float *)this + 15);
  *((float *)this + 15) = v14;
  if ( a4 < 64.0 && v14 > 0.0 )
  {
    v15 = v14 * *((float *)this + 16);
    v16 = *(_DWORD *)(*((_DWORD *)a2 + 295) + 16);
    if ( *((int *)this + 14) > 0
      && (!*((_DWORD *)this + 12) ? (v17 = v14 * *((float *)this + 16)) : (v17 = -(float)(v14 * *((float *)this + 16))),
          RtQuatRotate(*(_DWORD *)(*((_DWORD *)a2 + 295) + 16), &unk_61E664, LODWORD(v17), 1),
          *((_DWORD *)this + 14) == 2) )
    {
      v18 = LODWORD(v15);
    }
    else
    {
      v18 = LODWORD(v15) ^ 0x80000000;
    }
    RtQuatRotate(v16, &unk_61E670, v18, 1);
    result = *((_DWORD *)a2 + 290) | 0x4000;
    *((_DWORD *)a2 + 290) = result;
  }
  return result;
}


// ============================================================

// Address: 0x4fb2ec
// Original: _ZN19CTaskSimpleCarDrive17ProcessArmBoppingEP4CPedhf
// Demangled: CTaskSimpleCarDrive::ProcessArmBopping(CPed *,uchar,float)
int __fastcall CTaskSimpleCarDrive::ProcessArmBopping(CTaskSimpleCarDrive *this, CPed *a2, int a3, float a4)
{
  int result; // r0
  CPed **v9; // r0
  unsigned __int8 v10; // r1
  int v11; // r0
  CPed *v12; // r1
  bool v13; // zf
  unsigned int v14; // r8
  int Association; // r0
  int v16; // r6
  char v17; // r0
  const CPed *v18; // r2
  CCarEnterExit *v19; // r0
  int *v20; // r4
  float v21; // s2
  int v22; // r0
  float v23; // s0
  const CVehicle *v24; // r4
  int v25; // r2
  int v26; // r1
  float *v27; // r2
  float v28; // s0
  float v29; // s0
  float v30; // s2
  int v31; // r0

  result = CPed::IsPlayer(a2);
  if ( result )
    return result;
  v9 = (CPed **)*((_DWORD *)a2 + 356);
  if ( *(float *)&CWeather::Rain > 0.0 )
  {
    CVehicle::ClearWindowOpenFlag((CVehicle *)v9, 0xAu);
    CVehicle::ClearWindowOpenFlag(*((CVehicle **)a2 + 356), 8u);
    CVehicle::ClearWindowOpenFlag(*((CVehicle **)a2 + 356), 0xBu);
    CVehicle::ClearWindowOpenFlag(*((CVehicle **)a2 + 356), 9u);
    a3 = 0;
    goto LABEL_13;
  }
  if ( v9[281] == a2 )
  {
    v10 = 10;
  }
  else if ( v9[282] == a2 )
  {
    v10 = 8;
  }
  else if ( v9[283] == a2 )
  {
    v10 = 11;
  }
  else
  {
    if ( v9[284] != a2 )
      goto LABEL_13;
    v10 = 9;
  }
  CVehicle::SetWindowOpenFlag((CVehicle *)v9, v10);
LABEL_13:
  v11 = *((_DWORD *)a2 + 356);
  v12 = *(CPed **)(v11 + 1128);
  v13 = v12 == a2;
  if ( v12 != a2 )
    v13 = *(_DWORD *)(v11 + 1136) == (_DWORD)a2;
  if ( v13 )
    v14 = 163;
  else
    v14 = 162;
  Association = RpAnimBlendClumpGetAssociation();
  v16 = Association;
  if ( !a3 )
  {
    if ( !Association )
    {
LABEL_26:
      v17 = *((_BYTE *)this + 92);
LABEL_37:
      result = v17 & 0xFD;
LABEL_38:
      *((_BYTE *)this + 92) = result;
      return result;
    }
LABEL_25:
    *(_DWORD *)(v16 + 28) = -1065353216;
    goto LABEL_26;
  }
  v17 = *((_BYTE *)this + 92);
  if ( (v17 & 2) != 0 )
  {
    if ( !v16 )
      goto LABEL_37;
    if ( a4 < 64.0 )
    {
      v21 = *((float *)this + 11);
      v22 = 24;
      v23 = (float)(v21 + -0.75) * -45.0;
      if ( v21 < 0.75 )
        v23 = -0.0;
      if ( v14 == 162 )
        v22 = 20;
      RtQuatRotate(*(_DWORD *)(*(_DWORD *)((char *)a2 + v22 + 1172) + 16), &unk_61E67C, LODWORD(v23), 1);
      *((_DWORD *)a2 + 290) |= 0x4000u;
    }
    result = CTimer::m_snTimeInMilliseconds - *((_DWORD *)this + 18);
    if ( (unsigned int)result < 0x1389 )
      return result;
    result = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0);
    if ( result < 996 )
      return result;
    goto LABEL_25;
  }
  result = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0);
  if ( result < 996 )
    return result;
  v19 = (CCarEnterExit *)*((_DWORD *)this + 2);
  if ( *((_DWORD *)v19 + 361) )
    goto LABEL_22;
  v24 = (const CVehicle *)CCarEnterExit::ComputeTargetDoorToExit(v19, a2, v18);
  if ( CDamageManager::GetDoorStatus((CDamageManager *)(*((_DWORD *)this + 2) + 1460), (int)v24)
    || CCarEnterExit::CarHasDoorToClose(*((CCarEnterExit **)this + 2), v24, v25) )
  {
    result = 0;
  }
  else
  {
    result = CVehicle::CanPedLeanOut(*((CVehicle **)this + 2), a2);
  }
  v26 = *((_DWORD *)this + 2);
  v27 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v26 + 38)]) + 116);
  v28 = v27[32];
  if ( (v27[30] != 0.0 || v28 != 0.0 || v27[31] != 0.0) && (*(_BYTE *)(v26 + 1069) & 8) == 0 )
  {
    v29 = v28 - v27[14];
    if ( (CVehicleAnimGroupData::m_vehicleAnimGroups[74 * *(unsigned __int8 *)(*(_DWORD *)(v26 + 904) + 222) + 4] & 8) != 0 )
    {
      if ( result && v29 >= 0.4 )
      {
        v30 = 0.44;
LABEL_56:
        if ( v29 > v30 )
          return result;
LABEL_22:
        CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v14);
        v20 = (int *)((char *)this + 32);
        if ( *((_DWORD *)this + 8) == -1 )
          CTaskSimpleCarDrive::StartBopping(this, a2);
        else
          v20 = &CTimer::m_snTimeInMilliseconds;
        v31 = *((unsigned __int8 *)this + 92);
        *((_DWORD *)this + 18) = *v20;
        result = v31 | 2;
        goto LABEL_38;
      }
    }
    else if ( result && v29 >= 0.39 )
    {
      v30 = 0.46;
      goto LABEL_56;
    }
  }
  return result;
}


// ============================================================

// Address: 0x4feb24
// Original: _ZNK19CTaskSimpleCarDrive5CloneEv
// Demangled: CTaskSimpleCarDrive::Clone(void)
int __fastcall CTaskSimpleCarDrive::Clone(CTaskSimpleCarDrive *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  char v5; // r0
  char v6; // r0

  v3 = CTask::operator new((CTask *)&dword_60, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_QWORD *)(v3 + 12) = 0LL;
  *(_QWORD *)(v3 + 20) = 0LL;
  *(_WORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 86) = 0;
  *(_DWORD *)(v3 + 82) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  v5 = *(_BYTE *)(v3 + 92);
  *(_DWORD *)v3 = &off_66AD18;
  v6 = v5 & 0xC3 | 8;
  *(_BYTE *)(v3 + 92) = v6;
  *(_DWORD *)(v3 + 8) = v4;
  if ( v4 )
  {
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 8));
    v6 = *(_BYTE *)(v3 + 92);
  }
  *(_DWORD *)(v3 + 32) = -1;
  *(_BYTE *)(v3 + 92) = v6 & 0xFC;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_BYTE *)(v3 + 92) = v6 & 0xF8 | *((_BYTE *)this + 92) & 4;
  return v3;
}


// ============================================================

// Address: 0x4febbc
// Original: _ZNK19CTaskSimpleCarDrive11GetTaskTypeEv
// Demangled: CTaskSimpleCarDrive::GetTaskType(void)
int __fastcall CTaskSimpleCarDrive::GetTaskType(CTaskSimpleCarDrive *this)
{
  return 709;
}


// ============================================================

// Address: 0x4febc4
// Original: _ZN19CTaskSimpleCarDrive9SerializeEv
// Demangled: CTaskSimpleCarDrive::Serialize(void)
void __fastcall CTaskSimpleCarDrive::Serialize(CVehicle **this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r4
  CGenericGameStorage *v6; // r5
  int v7; // r2
  int v8; // r0

  v2 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*((int (__fastcall **)(CVehicle **))*this + 5))(this) == 709 )
  {
    v5 = GettPoolVehicleRef(this[2]);
    if ( UseDataFence )
      AddDataFence();
    v6 = (CGenericGameStorage *)malloc(4u);
    *(_DWORD *)v6 = v5;
    CGenericGameStorage::_SaveDataToWorkBuffer(v6, byte_4, v7);
    j_free(v6);
  }
  else
  {
    v8 = (*((int (__fastcall **)(CVehicle **))*this + 5))(this);
    sub_1941D4(709, v8);
  }
}


// ============================================================
