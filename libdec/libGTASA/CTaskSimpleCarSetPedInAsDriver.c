
// Address: 0x18bd44
// Original: j__ZN30CTaskSimpleCarSetPedInAsDriverD2Ev
// Demangled: CTaskSimpleCarSetPedInAsDriver::~CTaskSimpleCarSetPedInAsDriver()
// attributes: thunk
void __fastcall CTaskSimpleCarSetPedInAsDriver::~CTaskSimpleCarSetPedInAsDriver(CTaskSimpleCarSetPedInAsDriver *this)
{
  _ZN30CTaskSimpleCarSetPedInAsDriverD2Ev(this);
}


// ============================================================

// Address: 0x18f0b8
// Original: j__ZN30CTaskSimpleCarSetPedInAsDriverC2EP8CVehicleP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(CVehicle *,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(
        CTaskSimpleCarSetPedInAsDriver *this,
        CVehicle *a2,
        CTaskUtilityLineUpPedWithCar *a3)
{
  _ZN30CTaskSimpleCarSetPedInAsDriverC2EP8CVehicleP28CTaskUtilityLineUpPedWithCar(this, a2, a3);
}


// ============================================================

// Address: 0x193b7c
// Original: j__ZN30CTaskSimpleCarSetPedInAsDriver10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedInAsDriver::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarSetPedInAsDriver::ProcessPed(CTaskSimpleCarSetPedInAsDriver *this, CPed *a2)
{
  return _ZN30CTaskSimpleCarSetPedInAsDriver10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x502cb8
// Original: _ZN30CTaskSimpleCarSetPedInAsDriverC2EP8CVehicleP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(CVehicle *,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarSetPedInAsDriver::CTaskSimpleCarSetPedInAsDriver(
        CTaskSimpleCarSetPedInAsDriver *this,
        CVehicle *a2,
        CTaskUtilityLineUpPedWithCar *a3)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_BYTE *)this + 24) = 0;
  *((_BYTE *)this + 25) = 0;
  *((_BYTE *)this + 26) = 0;
  *(_DWORD *)this = &off_66B278;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x502d00
// Original: _ZN30CTaskSimpleCarSetPedInAsDriverD2Ev
// Demangled: CTaskSimpleCarSetPedInAsDriver::~CTaskSimpleCarSetPedInAsDriver()
void __fastcall CTaskSimpleCarSetPedInAsDriver::~CTaskSimpleCarSetPedInAsDriver(CTaskSimpleCarSetPedInAsDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B278;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x502d2c
// Original: _ZN30CTaskSimpleCarSetPedInAsDriverD0Ev
// Demangled: CTaskSimpleCarSetPedInAsDriver::~CTaskSimpleCarSetPedInAsDriver()
void __fastcall CTaskSimpleCarSetPedInAsDriver::~CTaskSimpleCarSetPedInAsDriver(CTaskSimpleCarSetPedInAsDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B278;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x502d5c
// Original: _ZN30CTaskSimpleCarSetPedInAsDriver10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedInAsDriver::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarSetPedInAsDriver::ProcessPed(CTaskSimpleCarSetPedInAsDriver *this, CPed *a2)
{
  CEntity *v4; // r0
  CEntity **v5; // r6
  CEntity *v6; // r0
  const CPed *v7; // r1
  CPed *v8; // r0
  bool v9; // zf
  const CPed *v10; // r2
  const CVehicle **v11; // r6
  CEntity *v12; // r8
  int v13; // r0
  int v14; // r1
  int v15; // r2
  __int64 *v16; // r6
  __int64 v17; // kr00_8
  int v18; // r0
  int PedsGroup; // r0
  int v20; // r6
  int IsLeader; // r0
  unsigned int v22; // r1
  bool v23; // zf
  CPedGroupIntelligence *v24; // r8
  CEntity **v25; // r9
  CEntity *v26; // r6
  int v27; // r1
  int v28; // r0
  int v29; // r2
  int *v30; // r1
  int v31; // r0
  int v32; // r1
  unsigned int v33; // r3
  int IsPlayer; // r0
  int v35; // r1
  char v36; // r2
  char v37; // r0
  char v38; // r0
  const CPed *v39; // r1
  unsigned int *v40; // r6
  bool v41; // r3
  int v42; // r0
  int v43; // r0
  unsigned int v44; // r1
  int v45; // r2
  unsigned int v46; // r3
  int v47; // r8
  int v48; // r5
  CTaskSimpleCarDrive *v49; // r0
  CTask *v50; // r6
  CTaskUtilityLineUpPedWithCar *v51; // r2
  CVehicle *v52; // r0
  CEventGroup *EventGlobalGroup; // r0
  _DWORD v55[2]; // [sp+4h] [bp-34h] BYREF
  CEntity *v56[2]; // [sp+Ch] [bp-2Ch] BYREF
  char v57; // [sp+14h] [bp-24h]
  int v58; // [sp+15h] [bp-23h]
  char v59; // [sp+19h] [bp-1Fh]

  v4 = (CEntity *)*((_DWORD *)a2 + 356);
  v5 = (CEntity **)((char *)a2 + 1424);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)a2 + 356);
  v6 = (CEntity *)*((_DWORD *)this + 4);
  *((_DWORD *)a2 + 356) = v6;
  CEntity::RegisterReference(v6, v5);
  v8 = *(CPed **)(*((_DWORD *)this + 4) + 1124);
  v9 = v8 == a2;
  if ( v8 != a2 )
    v9 = v8 == 0;
  if ( !v9
    && !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v8 + 272) + 4), 704)
    && !CTaskManager::FindActiveTaskByType(
          (CTaskManager *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1124) + 1088) + 4),
          824)
    && !CTaskManager::FindActiveTaskByType(
          (CTaskManager *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1124) + 1088) + 4),
          705)
    && !CTaskManager::FindActiveTaskByType(
          (CTaskManager *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1124) + 1088) + 4),
          826) )
  {
    v11 = (const CVehicle **)*((_DWORD *)this + 4);
    v12 = (CEntity *)CCarEnterExit::ComputeTargetDoorToExit((CCarEnterExit *)v11, v11[281], v10);
    CTaskSimple::CTaskSimple((CTaskSimple *)v55);
    v56[0] = (CEntity *)v11;
    v55[0] = &off_66B348;
    v56[1] = v12;
    v57 = 1;
    v59 = 0;
    v58 = 0;
    CEntity::RegisterReference((CEntity *)v11, v56);
    LOBYTE(v58) = 1;
    CTaskSimpleCarSetPedOut::ProcessPed((CTaskSimpleCarSetPedOut *)v55, *(CPed **)(*((_DWORD *)this + 4) + 1124));
    v55[0] = &off_66B348;
    if ( v56[0] )
      CEntity::CleanUpOldReference(v56[0], v56);
    CTask::~CTask((CTask *)v55);
  }
  *((_DWORD *)a2 + 344) = *((_DWORD *)a2 + 343);
  if ( *((_BYTE *)this + 24) )
  {
    v13 = *((_DWORD *)this + 4);
    v14 = *((_DWORD *)a2 + 5);
    v15 = *(_DWORD *)(v13 + 20);
    v16 = (__int64 *)(v15 + 48);
    if ( !v15 )
      v16 = (__int64 *)(v13 + 4);
    v17 = *v16;
    v18 = *((_DWORD *)v16 + 2);
    if ( v14 )
    {
      *(_DWORD *)(v14 + 48) = v17;
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v17);
      v7 = (const CPed *)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      v7 = (CPed *)((char *)a2 + 12);
      *(_QWORD *)((char *)a2 + 4) = v17;
    }
    *(_DWORD *)v7 = v18;
  }
  PedsGroup = CPedGroups::GetPedsGroup(a2, v7);
  v20 = PedsGroup;
  if ( PedsGroup )
  {
    IsLeader = CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), a2);
    v23 = IsLeader == 1;
    if ( IsLeader == 1 )
      v23 = *(_DWORD *)(v20 + 52) == 0;
    if ( v23 )
    {
      v24 = (CPedGroupIntelligence *)(v20 + 48);
      v25 = (CEntity **)CEvent::operator new((CEvent *)&dword_14, v22);
      v26 = (CEntity *)*((_DWORD *)this + 4);
      CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v25);
      *v25 = (CEntity *)&off_666E58;
      v25[4] = v26;
      if ( v26 )
        CEntity::RegisterReference(v26, v25 + 4);
      CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v55, a2, (CEvent *)v25);
      CPedGroupIntelligence::AddEvent(v24, (CEvent *)v55);
      CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v55);
    }
  }
  CVehicle::SetDriver(*((CVehicle **)this + 4), a2);
  *((_DWORD *)a2 + 289) |= 0x100u;
  if ( CPed::IsPlayer(a2) == 1 )
  {
    *(_BYTE *)(*((_DWORD *)a2 + 273) + 141) = 1;
    CPlayerPed::ClearAdrenaline(a2);
  }
  if ( CPed::IsPlayer(a2) == 1 )
  {
    v27 = *((_DWORD *)this + 4);
    v28 = *(_DWORD *)(v27 + 1068);
    if ( (v28 & 0x20000) == 0 )
    {
      v29 = *(_DWORD *)(v27 + 1072);
      v30 = (int *)(v27 + 1068);
      *v30 = v28 | 0x20000;
      v30[1] = v29;
      FindPlayerPed(-1);
      CCrime::ReportCrime();
    }
  }
  CPed::UpdateStatEnteringVehicle(a2);
  CPed::SetMoveState(a2, 0);
  (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  *((_DWORD *)a2 + 7) &= ~1u;
  v31 = *((_DWORD *)this + 4);
  if ( *(unsigned __int16 *)(v31 + 1120) == 0xFFFF )
  {
    *(_WORD *)(v31 + 1120) = 15000;
    v31 = *((_DWORD *)this + 4);
  }
  v32 = *(_DWORD *)(v31 + 1068);
  v33 = v32 & 0xFFFFFFEF;
  if ( (*(_DWORD *)(v31 + 1072) & 0x200) == 0 )
    v33 = v32 | 0x10;
  *(_DWORD *)(v31 + 1068) = v33;
  CPed::SetPedState(a2);
  IsPlayer = CPed::IsPlayer(a2);
  v35 = *((_DWORD *)this + 4);
  v36 = *(_BYTE *)(v35 + 58);
  if ( IsPlayer == 1 )
  {
    v37 = v36 & 7;
LABEL_44:
    *(_BYTE *)(v35 + 58) = v37;
    goto LABEL_45;
  }
  if ( (v36 & 0xF8) != 0x10 || *((_BYTE *)a2 + 1096) == 2 )
  {
    v38 = *(_BYTE *)(v35 + 58) & 7;
    if ( *(_DWORD *)(v35 + 1444) == 6 )
      v37 = v38 | 0x38;
    else
      v37 = v38 | 0x18;
    goto LABEL_44;
  }
LABEL_45:
  v39 = (const CPed *)*((unsigned __int8 *)this + 25);
  if ( *((_BYTE *)this + 25) )
    CVehicle::ClearGettingInFlags(*((CVehicle **)this + 4), (unsigned __int8)v39);
  v40 = (unsigned int *)((char *)a2 + 1156);
  if ( *((_BYTE *)this + 26) )
  {
    v39 = (const CPed *)*((_DWORD *)this + 4);
    *((_BYTE *)v39 + 1161) -= *((_BYTE *)this + 26);
  }
  CCarEnterExit::RemoveGetInAnims(a2, v39);
  CCarEnterExit::AddInCarAnim(*((CCarEnterExit **)this + 4), a2, (CPed *)((char *)&stderr + 1), v41);
  CPed::RemoveWeaponWhenEnteringVehicle(a2, 0);
  v42 = *((_DWORD *)this + 4);
  if ( (*(_BYTE *)(v42 + 1069) & 2) != 0 && *(_WORD *)(v42 + 38) != 431 )
  {
    v43 = *((_DWORD *)a2 + 290);
    v45 = *((_DWORD *)a2 + 292);
    v44 = *((_DWORD *)a2 + 291);
    v46 = *v40 & 0xFFFFDFFF;
  }
  else
  {
    v43 = *((_DWORD *)a2 + 290);
    v45 = *((_DWORD *)a2 + 292);
    v44 = *((_DWORD *)a2 + 291);
    v46 = *v40 | 0x2000;
  }
  *v40 = v46;
  *((_DWORD *)a2 + 290) = v43;
  *((_DWORD *)a2 + 291) = v44;
  *((_DWORD *)a2 + 292) = v45;
  v47 = *((_DWORD *)a2 + 272);
  v48 = *((unsigned __int8 *)this + 24);
  v49 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, v44);
  v50 = v49;
  if ( v48 )
    v51 = 0;
  else
    v51 = (CTaskUtilityLineUpPedWithCar *)*((_DWORD *)this + 5);
  CTaskSimpleCarDrive::CTaskSimpleCarDrive(v49, *((CVehicle **)this + 4), v51, 0);
  CTaskManager::SetTask((CTaskManager *)(v47 + 4), v50, 4, 0);
  if ( CPed::IsPlayer(a2) == 1 )
  {
    v52 = (CVehicle *)*((_DWORD *)this + 4);
    if ( v52 )
    {
      if ( CVehicle::IsLawEnforcementVehicle(v52) )
      {
        CEventCopCarBeingStolen::CEventCopCarBeingStolen((CEventCopCarBeingStolen *)v55, a2, *((CVehicle **)this + 4));
        EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
        CEventGroup::Add(EventGlobalGroup, (CEvent *)v55, 0);
        CEventCopCarBeingStolen::~CEventCopCarBeingStolen((CEventCopCarBeingStolen *)v55);
      }
    }
  }
  return 1;
}


// ============================================================

// Address: 0x506ea0
// Original: _ZNK30CTaskSimpleCarSetPedInAsDriver5CloneEv
// Demangled: CTaskSimpleCarSetPedInAsDriver::Clone(void)
int __fastcall CTaskSimpleCarSetPedInAsDriver::Clone(CTaskSimpleCarSetPedInAsDriver *this, unsigned int a2)
{
  int v3; // r5
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_1C, a2);
  v4 = *((_QWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 20) = HIDWORD(v4);
  *(_BYTE *)(v3 + 24) = 0;
  *(_BYTE *)(v3 + 25) = 0;
  *(_BYTE *)(v3 + 26) = 0;
  *(_DWORD *)v3 = &off_66B278;
  *(_DWORD *)(v3 + 16) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 16));
  *(_BYTE *)(v3 + 24) = *((_BYTE *)this + 24);
  *(_BYTE *)(v3 + 25) = *((_BYTE *)this + 25);
  *(_BYTE *)(v3 + 26) = *((_BYTE *)this + 26);
  return v3;
}


// ============================================================

// Address: 0x506f00
// Original: _ZNK30CTaskSimpleCarSetPedInAsDriver11GetTaskTypeEv
// Demangled: CTaskSimpleCarSetPedInAsDriver::GetTaskType(void)
int __fastcall CTaskSimpleCarSetPedInAsDriver::GetTaskType(CTaskSimpleCarSetPedInAsDriver *this)
{
  return 812;
}


// ============================================================

// Address: 0x506f06
// Original: _ZN30CTaskSimpleCarSetPedInAsDriver13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarSetPedInAsDriver::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarSetPedInAsDriver::MakeAbortable(
        CTaskSimpleCarSetPedInAsDriver *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================
