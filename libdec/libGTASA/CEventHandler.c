
// Address: 0x18b21c
// Original: j__ZN13CEventHandlerD2Ev
// Demangled: CEventHandler::~CEventHandler()
// attributes: thunk
void __fastcall CEventHandler::~CEventHandler(CEventHandler *this)
{
  _ZN13CEventHandlerD2Ev(this);
}


// ============================================================

// Address: 0x18cdf8
// Original: j__ZN13CEventHandler16IsTemporaryEventERK6CEvent
// Demangled: CEventHandler::IsTemporaryEvent(CEvent const&)
// attributes: thunk
int __fastcall CEventHandler::IsTemporaryEvent(CEventHandler *this, const CEvent *a2)
{
  return _ZN13CEventHandler16IsTemporaryEventERK6CEvent(this, a2);
}


// ============================================================

// Address: 0x18dbbc
// Original: j__ZN13CEventHandler34ComputePersonalityResponseToDamageEP12CEventDamageP7CEntity
// Demangled: CEventHandler::ComputePersonalityResponseToDamage(CEventDamage *,CEntity *)
// attributes: thunk
int __fastcall CEventHandler::ComputePersonalityResponseToDamage(CEventHandler *this, CEventDamage *a2, CEntity *a3)
{
  return _ZN13CEventHandler34ComputePersonalityResponseToDamageEP12CEventDamageP7CEntity(this, a2, a3);
}


// ============================================================

// Address: 0x18f54c
// Original: j__ZN13CEventHandlerC2EP4CPed
// Demangled: CEventHandler::CEventHandler(CPed *)
// attributes: thunk
void __fastcall CEventHandler::CEventHandler(CEventHandler *this, CPed *a2)
{
  _ZN13CEventHandlerC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x18f9c4
// Original: j__ZN13CEventHandler24ComputeEventResponseTaskERK4CPedRK6CEvent
// Demangled: CEventHandler::ComputeEventResponseTask(CPed const&,CEvent const&)
// attributes: thunk
int __fastcall CEventHandler::ComputeEventResponseTask(CEventHandler *this, const CPed *a2, const CEvent *a3)
{
  return _ZN13CEventHandler24ComputeEventResponseTaskERK4CPedRK6CEvent(this, a2, a3);
}


// ============================================================

// Address: 0x191160
// Original: j__ZN13CEventHandler12RegisterKillEPK4CPedPK7CEntity11eWeaponTypeb
// Demangled: CEventHandler::RegisterKill(CPed const*,CEntity const*,eWeaponType,bool)
// attributes: thunk
int __fastcall CEventHandler::RegisterKill(int a1, CPed *this)
{
  return _ZN13CEventHandler12RegisterKillEPK4CPedPK7CEntity11eWeaponTypeb(a1, this);
}


// ============================================================

// Address: 0x193fc8
// Original: j__ZN13CEventHandler21ComputeDamageResponseEP6CEventP5CTaskS3_S3_
// Demangled: CEventHandler::ComputeDamageResponse(CEvent *,CTask *,CTask *,CTask *)
// attributes: thunk
int __fastcall CEventHandler::ComputeDamageResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4, CTask *a5)
{
  return _ZN13CEventHandler21ComputeDamageResponseEP6CEventP5CTaskS3_S3_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1947c0
// Original: j__ZN13CEventHandler16FlushImmediatelyEv
// Demangled: CEventHandler::FlushImmediately(void)
// attributes: thunk
int __fastcall CEventHandler::FlushImmediately(CEventHandler *this)
{
  return _ZN13CEventHandler16FlushImmediatelyEv(this);
}


// ============================================================

// Address: 0x198c38
// Original: j__ZNK13CEventHandler19GetCurrentEventTypeEv
// Demangled: CEventHandler::GetCurrentEventType(void)
// attributes: thunk
int __fastcall CEventHandler::GetCurrentEventType(CEventHandler *this)
{
  return _ZNK13CEventHandler19GetCurrentEventTypeEv(this);
}


// ============================================================

// Address: 0x19c598
// Original: j__ZN13CEventHandler24ComputeEventResponseTaskEP6CEventP5CTask
// Demangled: CEventHandler::ComputeEventResponseTask(CEvent *,CTask *)
// attributes: thunk
int __fastcall CEventHandler::ComputeEventResponseTask(CEventHandler *this, CEvent *a2, CTask *a3)
{
  return _ZN13CEventHandler24ComputeEventResponseTaskEP6CEventP5CTask(this, a2, a3);
}


// ============================================================

// Address: 0x19edec
// Original: j__ZN13CEventHandler12HandleEventsEv
// Demangled: CEventHandler::HandleEvents(void)
// attributes: thunk
int __fastcall CEventHandler::HandleEvents(CEventHandler *this)
{
  return _ZN13CEventHandler12HandleEventsEv(this);
}


// ============================================================

// Address: 0x19f1d4
// Original: j__ZNK13CEventHandler20SetEventResponseTaskERK6CEvent
// Demangled: CEventHandler::SetEventResponseTask(CEvent const&)
// attributes: thunk
int __fastcall CEventHandler::SetEventResponseTask(CEventHandler *this, const CEvent *a2)
{
  return _ZNK13CEventHandler20SetEventResponseTaskERK6CEvent(this, a2);
}


// ============================================================

// Address: 0x19f374
// Original: j__ZN13CEventHandler27ComputeKnockOffBikeResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeKnockOffBikeResponse(CEvent *,CTask *,CTask *)
// attributes: thunk
int __fastcall CEventHandler::ComputeKnockOffBikeResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  return _ZN13CEventHandler27ComputeKnockOffBikeResponseEP6CEventP5CTaskS3_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x37b400
// Original: _ZN13CEventHandler16IsTemporaryEventERK6CEvent
// Demangled: CEventHandler::IsTemporaryEvent(CEvent const&)
int __fastcall CEventHandler::IsTemporaryEvent(CEventHandler *this, const CEvent *a2)
{
  int v2; // r1
  int result; // r0

  v2 = (*(int (__fastcall **)(CEventHandler *))(*(_DWORD *)this + 8))(this) - 1;
  result = 1;
  switch ( v2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 11:
    case 12:
    case 32:
    case 43:
    case 45:
    case 55:
    case 58:
    case 59:
    case 66:
    case 73:
    case 92:
      return result;
    default:
      result = 0;
      break;
  }
  return result;
}


// ============================================================

// Address: 0x37b59c
// Original: _ZN13CEventHandlerC2EP4CPed
// Demangled: CEventHandler::CEventHandler(CPed *)
void __fastcall CEventHandler::CEventHandler(CEventHandler *this, CPed *a2)
{
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)((char *)this + 14) = 0LL;
  *(_QWORD *)((char *)this + 22) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
}


// ============================================================

// Address: 0x37b5be
// Original: _ZN13CEventHandlerD2Ev
// Demangled: CEventHandler::~CEventHandler()
void __fastcall CEventHandler::~CEventHandler(CEventHandler *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = 0;
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 2) = 0;
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    *((_DWORD *)this + 4) = 0;
  }
}


// ============================================================

// Address: 0x37b5f4
// Original: _ZNK13CEventHandler19GetCurrentEventTypeEv
// Demangled: CEventHandler::GetCurrentEventType(void)
int __fastcall CEventHandler::GetCurrentEventType(CEventHandler *this)
{
  int v2; // r0
  bool v3; // zf

  v2 = *((_DWORD *)this + 3);
  v3 = v2 == 0;
  if ( !v2 )
  {
    v2 = *((_DWORD *)this + 2);
    v3 = v2 == 0;
  }
  if ( v3 )
    return -1;
  else
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
}


// ============================================================

// Address: 0x37b610
// Original: _ZNK13CEventHandler20SetEventResponseTaskERK6CEvent
// Demangled: CEventHandler::SetEventResponseTask(CEvent const&)
int __fastcall CEventHandler::SetEventResponseTask(CEventHandler *this, const CEvent *a2)
{
  int v2; // r5
  CTask *v5; // r1
  int v6; // r6
  int TaskSecondary; // r0
  CTask *v8; // r1
  CTask *v9; // r1
  int result; // r0
  bool v11; // zf
  CTaskComplexFacial *v12; // r0

  v5 = (CTask *)*((_DWORD *)this + 8);
  v6 = *(_DWORD *)(*(_DWORD *)this + 1088);
  if ( v5 )
    CPedIntelligence::AddTaskPhysResponse(*(CPedIntelligence **)(*(_DWORD *)this + 1088), v5, 1);
  if ( *((_DWORD *)this + 9) )
  {
    switch ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 12:
      case 13:
      case 33:
      case 44:
      case 46:
      case 56:
      case 59:
      case 60:
      case 67:
      case 74:
      case 93:
        CPedIntelligence::AddTaskEventResponseTemp((CPedIntelligence *)v6, *((CTask **)this + 9), 0);
        break;
      default:
        CPedIntelligence::AddTaskEventResponseTemp((CPedIntelligence *)v6, 0, 0);
        CPedIntelligence::AddTaskEventResponseNonTemp((CPedIntelligence *)v6, *((CTask **)this + 9), 0);
        break;
    }
  }
  if ( *((_DWORD *)this + 10) )
  {
    v2 = v6 + 4;
    if ( CTaskManager::GetTaskSecondary((CTaskManager *)(v6 + 4), 0) )
    {
      TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(v6 + 4), 0);
      (*(void (__fastcall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)TaskSecondary + 28))(
        TaskSecondary,
        *(_DWORD *)this,
        1,
        0);
    }
    CTaskManager::SetTaskSecondary((CTaskManager *)(v6 + 4), *((CTask **)this + 10), 0);
  }
  v8 = (CTask *)*((_DWORD *)this + 11);
  if ( v8 )
    CTaskManager::SetTaskSecondary((CTaskManager *)(v6 + 4), v8, 2);
  v9 = (CTask *)*((_DWORD *)this + 12);
  if ( v9 )
    CTaskManager::SetTaskSecondary((CTaskManager *)(v6 + 4), v9, 4);
  result = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 40))(a2);
  if ( result == 1 )
  {
    result = CTaskManager::GetTaskSecondary((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4), 3);
    v11 = result == 0;
    if ( result )
    {
      v2 = *((__int16 *)a2 + 6);
      result = v2 + 1;
      v11 = v2 == -1;
    }
    if ( !v11 )
    {
      v12 = (CTaskComplexFacial *)CTaskManager::GetTaskSecondary(
                                    (CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4),
                                    3);
      return CTaskComplexFacial::SetRequest(v12, v2, 10000, -1, 0);
    }
  }
  return result;
}


// ============================================================

// Address: 0x37b7c8
// Original: _ZN13CEventHandler12HandleEventsEv
// Demangled: CEventHandler::HandleEvents(void)
int __fastcall CEventHandler::HandleEvents(CEventHandler *this)
{
  int v1; // r2
  __int64 v2; // r8
  _DWORD *v3; // r3
  int v4; // r4
  int v5; // r6
  int v6; // r5
  CEventGroup *v7; // r10
  CEvent *HighestPriorityEvent; // r11
  CEventGroup *v9; // r0
  CEventHandlerHistory *v10; // r10
  int v11; // r0
  int result; // r0
  CEvent *v13; // r6
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  int v17; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r5
  int v24; // r0
  int ActiveTask; // r0
  int v26; // r11
  int v27; // r0
  CPed *v28; // r1
  int v29; // r0
  int v30; // [sp+0h] [bp-28h]
  CEventGroup *v31; // [sp+4h] [bp-24h]

  v1 = *((_DWORD *)this + 4);
  if ( v1 && !*((_DWORD *)this + 3) )
  {
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 2) = v1;
  }
  HIDWORD(v2) = *((_DWORD *)this + 1);
  LODWORD(v2) = (char *)this + 4;
  v3 = *(_DWORD **)(*(_DWORD *)this + 1088);
  v5 = v3[2];
  v4 = v3[1];
  v6 = v4;
  if ( !v4 )
  {
    v4 = v3[3];
    v6 = v4;
  }
  v7 = (CEventGroup *)(v3 + 26);
  v30 = *(_DWORD *)(*(_DWORD *)this + 1088);
  HighestPriorityEvent = (CEvent *)CEventGroup::GetHighestPriorityEvent((CEventGroup *)(v3 + 26));
  v9 = v7;
  v31 = v7;
  v10 = (CEventHandlerHistory *)v2;
  LODWORD(v2) = v4;
  CEventGroup::TickEvents(v9);
  if ( HIDWORD(v2) )
  {
    v11 = HIDWORD(v2);
    if ( HIDWORD(v2) != v4 )
      v11 = 0;
    if ( !v4 )
      v11 = 0;
    *(_DWORD *)v10 = v11;
  }
  result = v5 | v6;
  if ( !(v5 | v6) )
  {
    result = 0;
    *(_DWORD *)v10 = 0;
  }
  v15 = v5 == 0;
  v13 = HighestPriorityEvent;
  if ( v15 )
  {
    v19 = *((_DWORD *)this + 3);
    if ( v19 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 4))(v19);
    result = 0;
    *((_DWORD *)this + 3) = 0;
    if ( v6 )
    {
LABEL_16:
      if ( HighestPriorityEvent )
        goto LABEL_17;
      goto LABEL_41;
    }
  }
  else if ( v6 )
  {
    goto LABEL_16;
  }
  v20 = *((_DWORD *)this + 2);
  if ( v20 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 4))(v20);
  result = 0;
  *((_DWORD *)this + 2) = 0;
  if ( HighestPriorityEvent )
  {
LABEL_17:
    if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)HighestPriorityEvent + 8))(HighestPriorityEvent) == 9 )
      (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)this + 20))(*(_DWORD *)this, 0);
    v14 = *((_DWORD *)this + 3);
    v15 = v14 == 0;
    if ( !v14 )
    {
      v14 = *((_DWORD *)this + 2);
      v15 = v14 == 0;
    }
    if ( !v15 && !(*(int (__fastcall **)(int))(*(_DWORD *)v14 + 64))(v14) )
    {
      v16 = *((_DWORD *)this + 3);
      if ( !v16 )
        v16 = *((_DWORD *)this + 2);
      v17 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( v17 == (*(int (__fastcall **)(CEvent *))(*(_DWORD *)HighestPriorityEvent + 8))(HighestPriorityEvent) )
      {
        CEventGroup::Remove(v31, HighestPriorityEvent);
        CEventGroup::RemoveInvalidEvents(v31, 0);
        result = CEventGroup::Reorganise(v31);
        if ( !v4 )
        {
          v18 = *((_DWORD *)this + 3);
          *((_DWORD *)this + 1) = 0;
          if ( v18 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
          result = *((_DWORD *)this + 2);
          *((_DWORD *)this + 3) = 0;
          if ( result )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
          *((_DWORD *)this + 2) = 0;
        }
        return result;
      }
    }
    if ( !*((_DWORD *)this + 2) )
    {
      if ( !*((_DWORD *)this + 3) )
        goto LABEL_55;
      v23 = 1;
      switch ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)HighestPriorityEvent + 8))(HighestPriorityEvent) )
      {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 12:
        case 13:
        case 33:
        case 44:
        case 46:
        case 56:
        case 59:
        case 60:
        case 67:
        case 74:
        case 93:
          break;
        default:
          v23 = 0;
          break;
      }
      v24 = (*(int (__fastcall **)(CEvent *, _DWORD))(*(_DWORD *)HighestPriorityEvent + 48))(
              HighestPriorityEvent,
              *((_DWORD *)this + 3));
      if ( v23 || !v24 )
      {
        if ( (v24 & v23) != 1 )
          goto LABEL_70;
LABEL_55:
        ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(v30 + 4));
        v26 = ActiveTask;
        if ( ActiveTask
          && (*(int (__fastcall **)(int, _DWORD, int, CEvent *))(*(_DWORD *)ActiveTask + 28))(
               ActiveTask,
               *(_DWORD *)this,
               1,
               v13) != 1 )
        {
          v27 = 0;
          if ( v2 )
            goto LABEL_58;
        }
        else
        {
          CTaskManager::StopTimers((CTaskManager *)(v30 + 4), v13);
          v27 = 1;
          if ( v2 )
          {
LABEL_58:
            if ( HIDWORD(v2) && !v4 || v27 == 1 )
            {
              CEventHandler::ComputeEventResponseTask(this, v13, (CTask *)HIDWORD(v2));
              v28 = 0;
              v29 = *((_DWORD *)this + 9);
              *((_DWORD *)this + 1) = 0;
LABEL_65:
              if ( v29 )
                CEventHandlerHistory::RecordCurrentEvent(v10, v28, v13);
              CEventHandler::SetEventResponseTask(this, v13);
              CEventGroup::Remove(v31, v13);
              goto LABEL_70;
            }
            --*((_DWORD *)v13 + 1);
            (*(void (__fastcall **)(int, _DWORD, _DWORD, CEvent *))(*(_DWORD *)v26 + 28))(v26, *(_DWORD *)this, 0, v13);
            *((_DWORD *)this + 1) = v4;
            goto LABEL_70;
          }
        }
        if ( v27 )
        {
          CEventHandler::ComputeEventResponseTask(this, v13, 0);
          v29 = *((_DWORD *)this + 9);
          goto LABEL_65;
        }
        --*((_DWORD *)v13 + 1);
LABEL_70:
        CEventGroup::RemoveInvalidEvents(v31, 0);
        return sub_19F474(v31);
      }
      if ( !*((_DWORD *)this + 4) )
        goto LABEL_55;
    }
    if ( !(*(int (__fastcall **)(CEvent *))(*(_DWORD *)HighestPriorityEvent + 48))(HighestPriorityEvent) )
      goto LABEL_70;
    goto LABEL_55;
  }
LABEL_41:
  if ( !v4 )
  {
    v21 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 1) = 0;
    if ( v21 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 4))(v21);
    v22 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 3) = 0;
    if ( v22 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 4))(v22);
    result = 0;
    *((_DWORD *)this + 2) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x37bb10
// Original: _ZN13CEventHandler24ComputeEventResponseTaskEP6CEventP5CTask
// Demangled: CEventHandler::ComputeEventResponseTask(CEvent *,CTask *)
void __fastcall CEventHandler::ComputeEventResponseTask(CEventHandler *this, CEvent *a2, CTask *a3)
{
  int SimplestActiveTask; // r6
  int v6; // r0
  int ActiveTask; // r4
  const CTask *v8; // r1
  CTask *v9; // r2
  CTask *v10; // r3
  __int64 v11; // kr00_8
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  CPedAttractorManager *PedAttractorManager; // r0
  unsigned int v16; // r1
  CTaskComplexUseEffect *v17; // r0
  CTaskComplexUseEffect *v18; // r0
  int IsGoToTask; // r0
  bool v20; // zf
  CEntity *v21; // r9
  unsigned int v22; // r1
  CTaskComplexWalkRoundObject *v23; // r0
  char v24; // r4
  int v25; // r5
  CTaskSimpleDead *v26; // r0
  CPed *v27; // r4
  bool v28; // zf
  CEvent *v29; // r1
  CTaskComplexLeaveCar *v30; // r0
  int v31; // r0
  CWanted **v32; // r0
  CWanted *v33; // r0
  CPed *v34; // r4
  int v35; // r0
  CTaskGangHasslePed *v36; // r0
  int v37; // r4
  unsigned int v38; // r1
  CTaskSimpleStandStill *v39; // r0
  CPed *v40; // r2
  int v41; // r0
  CEntity *v42; // r4
  int v43; // r5
  char v44; // r2
  CEntity *v45; // r4
  unsigned int v46; // r1
  CTaskComplexSmartFleeEntity *v47; // r0
  CVehicle *v48; // r4
  CTaskComplexStealCar *v49; // r0
  CTaskComplexInAirAndLand *v50; // r0
  CEntity *v51; // r4
  bool v52; // zf
  unsigned int v53; // r1
  CTaskComplexWalkRoundObject *v54; // r0
  int v55; // r0
  bool v56; // zf
  unsigned int v57; // r1
  CTaskComplexLeaveCar *v58; // r4
  CVehicle *v59; // r5
  unsigned __int16 v60; // r0
  int v61; // r0
  CTaskComplexEvasiveDiveAndGetUp *v62; // r0
  _DWORD *v63; // r1
  int v64; // r0
  unsigned int v65; // r1
  unsigned int v66; // r1
  CTaskSimplePlayerOnFire *v67; // r0
  int v68; // r0
  int v69; // r0
  CTaskComplexInvestigateDisturbance *v70; // r4
  CEntity *v71; // r0
  CEntity *v72; // r4
  int v73; // r0
  CTaskComplexInvestigateDisturbance *v74; // r0
  CPed *v75; // r4
  CTaskSimpleWaitUntilAreaCodesMatch *v76; // r0
  CTaskComplexPolicePursuit *v77; // r0
  CPed *v78; // r6
  int v79; // r0
  CTaskComplexSmartFleeEntity *v80; // r0
  CTaskComplexGangJoinRespond *v81; // r0
  unsigned int v82; // r1
  int v83; // r0
  CTaskComplexExtinguishFires *v84; // r0
  CTaskComplexInWater *v85; // r0
  CTaskSimpleStandStill *v86; // r0
  int v87; // r0
  CTaskComplexSignalAtPed *v88; // r0
  CTaskComplexPassObject *v89; // r0
  CTaskComplexStuckInAir *v90; // r0
  CTaskComplexOnFire *v91; // r0
  CTaskComplexKillPedOnFoot *v92; // r0
  CTask *v93; // [sp+0h] [bp-48h]
  _DWORD v94[9]; // [sp+24h] [bp-24h] BYREF

  SimplestActiveTask = 0;
  *((_DWORD *)this + 12) = 0;
  v6 = *(_DWORD *)this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(_DWORD *)(v6 + 1088) + 4));
  if ( ActiveTask )
    SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4));
  (*(void (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2);
  switch ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2) )
  {
    case 1:
      CEventHandler::ComputeVehicleCollisionResponse(this, a2, v9, (CTask *)SimplestActiveTask);
      return;
    case 2:
      CEventHandler::ComputePedCollisionWithPedResponse(this, a2, v9, (CTask *)SimplestActiveTask);
      return;
    case 3:
      CEventHandler::ComputePedCollisionWithPlayerResponse(this, a2, (CTask *)ActiveTask, (CTask *)SimplestActiveTask);
      return;
    case 4:
      CEventHandler::ComputePlayerCollisionWithPedResponse(this, a2, v9, v10);
      return;
    case 5:
      if ( SimplestActiveTask )
      {
        IsGoToTask = CTask::IsGoToTask((CTask *)SimplestActiveTask, v8);
        v20 = IsGoToTask == 0;
        if ( IsGoToTask )
        {
          ActiveTask = *((__int16 *)a2 + 6);
          v20 = ActiveTask == 1;
        }
        if ( !v20 )
        {
          v21 = (CEntity *)*((_DWORD *)a2 + 5);
          CEventObjectCollision::IsHeadOnCollision(a2, *(const CPed **)this);
          if ( v21 )
          {
            v23 = (CTaskComplexWalkRoundObject *)CTask::operator new((CTask *)&dword_54, v22);
            CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(
              v23,
              ActiveTask,
              (const CVector *)(SimplestActiveTask + 12),
              v21);
            goto LABEL_130;
          }
        }
      }
      return;
    case 6:
      CEventHandler::ComputeBuildingCollisionResponse(this, a2, (CTask *)ActiveTask, (CTask *)SimplestActiveTask);
      return;
    case 7:
      CEventHandler::ComputeDraggedOutCarResponse(this, a2, v9, v10);
      return;
    case 8:
      CEventHandler::ComputeKnockOffBikeResponse(this, a2, v9, v10);
      return;
    case 9:
      CEventHandler::ComputeDamageResponse(this, a2, (CTask *)ActiveTask, (CTask *)SimplestActiveTask, v93);
      return;
    case 10:
      v24 = *((_BYTE *)a2 + 9);
      v25 = *((_DWORD *)a2 + 3);
      v26 = (CTaskSimpleDead *)CTask::operator new((CTask *)&word_10, (unsigned int)v8);
      CTaskSimpleDead::CTaskSimpleDead(v26, v25, v24);
      goto LABEL_130;
    case 11:
      CEventHandler::ComputeDeadPedResponse(this, a2, v9, v10);
      return;
    case 12:
      CEventHandler::ComputeVehiclePotentialCollisionResponse(this, a2, v9, v10);
      return;
    case 13:
      CEventHandler::ComputePotentialPedCollideResponse(this, a2, v9, (CTask *)SimplestActiveTask);
      return;
    case 15:
      CEventHandler::ComputeShotFiredResponse(this, a2, v9, v10);
      return;
    case 16:
      v27 = (CPed *)*((_DWORD *)a2 + 3);
      v28 = v27 == 0;
      if ( v27 )
      {
        a2 = (CEvent *)*((_DWORD *)a2 + 4);
        v28 = a2 == 0;
      }
      if ( !v28 )
      {
        v29 = *(CEvent **)(*(_DWORD *)this + 1424);
        if ( v29 == a2 )
        {
          if ( *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 )
          {
            v30 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, (unsigned int)v29);
            CTaskComplexLeaveCar::CTaskComplexLeaveCar(v30, a2, 0, 0, 1, 0);
            *((_DWORD *)this + 9) = v31;
            if ( CPed::IsPlayer(v27) == 1 )
            {
              v32 = (CWanted **)*((_DWORD *)v27 + 273);
              if ( v32 )
                v33 = *v32;
              else
                v33 = 0;
              sub_18AA34(v33, 1);
            }
          }
        }
      }
      return;
    case 17:
      CEventHandler::ComputePedEnteredVehicleResponse(this, a2, v9, v10);
      return;
    case 18:
      CEventHandler::ComputeReviveResponse(this, v8, v9, v10);
      return;
    case 19:
      if ( !*((_DWORD *)a2 + 3)
        || CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*(_DWORD *)this + 1088), 1204) )
      {
        goto LABEL_116;
      }
      rand();
      CTask::operator new((CTask *)&dword_78, v82);
      v18 = (CTaskComplexUseEffect *)CTaskComplexPartnerChat::CTaskComplexPartnerChat();
      goto LABEL_130;
    case 20:
      v34 = (CPed *)*((_DWORD *)a2 + 4);
      if ( !v34 )
        return;
      v35 = *((__int16 *)a2 + 5);
      if ( v35 == 200 )
        goto LABEL_116;
      if ( v35 != 1212 )
        return;
      v36 = (CTaskGangHasslePed *)CTask::operator new((CTask *)&word_2C, 0x4BCu);
      CTaskGangHasslePed::CTaskGangHasslePed(v36, v34, 0, 10000, 30000);
      goto LABEL_130;
    case 21:
      v37 = *((_DWORD *)a2 + 3);
      if ( v37 )
      {
        CInterestingEvents::Add();
        v39 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v38);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v39, 5000, 0, 0, 8.0);
        v40 = *(CPed **)this;
        *((_DWORD *)this + 9) = v41;
        IKChainManager_c::LookAt((int)&g_ikChainMan, (int)"CompSexyVhclResp", v40, v37, 5000, -1, 0, 1, 0.25, 500, 3, 0);
      }
      return;
    case 25:
      v42 = (CEntity *)*((_DWORD *)a2 + 3);
      if ( v42 )
      {
        v43 = CTask::operator new((CTask *)&dword_4C, (unsigned int)v8);
        CTaskComplex::CTaskComplex((CTaskComplex *)v43);
        *(_QWORD *)(v43 + 24) = 0x400000003F800000LL;
        *(_QWORD *)(v43 + 32) = 0x4000000000000000LL;
        *(_QWORD *)(v43 + 16) = 0x3E800007530LL;
        *(_WORD *)(v43 + 48) = 0;
        *(_WORD *)(v43 + 60) = 0;
        *(_DWORD *)(v43 + 40) = 0;
        *(_DWORD *)(v43 + 44) = 0;
        *(_DWORD *)(v43 + 52) = 0;
        *(_DWORD *)(v43 + 56) = 0;
        *(_DWORD *)(v43 + 68) = 6;
        v44 = *(_BYTE *)(v43 + 72);
        *(_DWORD *)v43 = &off_6656E4;
        *(_DWORD *)(v43 + 64) = &off_665720;
        *(_BYTE *)(v43 + 72) = v44 & 0xF0 | 3;
        *(_DWORD *)(v43 + 12) = v42;
        CEntity::RegisterReference(v42, (CEntity **)(v43 + 12));
        *((_DWORD *)this + 9) = v43;
      }
      return;
    case 26:
      v45 = (CEntity *)*((_DWORD *)a2 + 3);
      if ( !v45 )
        return;
      CPed::Say(*(CPed **)this, 0x45u, 0, 1.0, 0, 0, 0);
      v47 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v46);
      CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v47, v45, 1, 100.0, -1, 1000, 1.0);
      goto LABEL_130;
    case 27:
    case 48:
      v11 = *((_QWORD *)a2 + 2);
      v12 = (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2);
      v13 = HIDWORD(v11) == 0;
      if ( !HIDWORD(v11) )
        v13 = v12 == 27;
      if ( v13 )
        return;
      v14 = *((__int16 *)a2 + 5);
      if ( v14 == 200 )
        goto LABEL_116;
      if ( v14 != 233 )
        return;
      PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
      if ( CPedAttractorManager::HasEmptySlot(
             PedAttractorManager,
             (const C2dEffect *)v11,
             (const CEntity *)HIDWORD(v11)) == 1 )
      {
        v17 = (CTaskComplexUseEffect *)CTask::operator new((CTask *)&dword_24, v16);
        v18 = CTaskComplexUseEffect::CTaskComplexUseEffect(v17, (C2dEffect *)v11, (CEntity *)HIDWORD(v11));
      }
      else
      {
LABEL_116:
        v18 = 0;
      }
      goto LABEL_130;
    case 28:
      if ( *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 )
        return;
      v48 = (CVehicle *)*((_DWORD *)a2 + 3);
      if ( !v48 )
        return;
      v49 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_20, (unsigned int)v8);
      CTaskComplexStealCar::CTaskComplexStealCar(v49, v48);
      goto LABEL_130;
    case 31:
      CEventHandler::ComputeGunAimedAtResponse(this, a2, (CTask *)ActiveTask, v10);
      return;
    case 32:
      CEventHandler::ComputeScriptCommandResponse(this, a2, v9, v10);
      return;
    case 33:
      if ( *(unsigned __int8 *)(*(_DWORD *)this + 1156) << 31 )
        return;
      v50 = (CTaskComplexInAirAndLand *)CTask::operator new((CTask *)&word_10, (unsigned int)v8);
      CTaskComplexInAirAndLand::CTaskComplexInAirAndLand(v50, 0, 0);
      goto LABEL_130;
    case 35:
      CEventHandler::ComputeVehicleDiedResponse(this, a2, v9, v10);
      return;
    case 36:
    case 37:
      CEventHandler::ComputePedThreatResponse(this, a2, v9, v10);
      return;
    case 38:
    case 39:
      CEventHandler::ComputePedFriendResponse(this, a2, v9, v10);
      return;
    case 41:
    case 73:
      CEventHandler::ComputeVehicleDamageResponse(this, a2, v9, v10);
      return;
    case 42:
      CEventHandler::ComputeSpecialResponse(this, a2, v9, v10);
      return;
    case 43:
      CEventHandler::ComputeGotKnockedOverByCarResponse(this, a2, v9, v10);
      return;
    case 44:
      v51 = (CEntity *)*((_DWORD *)a2 + 4);
      if ( !v51 || *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 )
        return;
      v52 = SimplestActiveTask == 0;
      if ( SimplestActiveTask )
      {
        a2 = (CEvent *)*((_DWORD *)a2 + 5);
        v52 = a2 == (CEvent *)((char *)&stderr + 1);
      }
      if ( v52 || !CTask::IsGoToTask((CTask *)SimplestActiveTask, v8) )
        return;
      v54 = (CTaskComplexWalkRoundObject *)CTask::operator new((CTask *)&dword_54, v53);
      CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(
        v54,
        (int)a2,
        (const CVector *)(SimplestActiveTask + 12),
        v51);
      goto LABEL_130;
    case 45:
      v55 = *(_DWORD *)this;
      v56 = *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 == 0;
      if ( *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 )
      {
        v55 = *(_DWORD *)(v55 + 1424);
        v56 = v55 == 0;
      }
      if ( !v56 )
      {
        v57 = *((_DWORD *)a2 + 3);
        if ( v55 == v57 )
        {
          v58 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v57);
          v59 = *(CVehicle **)(*(_DWORD *)this + 1424);
          v60 = rand();
          CTaskComplexLeaveCar::CTaskComplexLeaveCar(
            v58,
            v59,
            0,
            (int)(float)((float)((float)v60 * 0.000015259) * 300.0) + 100,
            1,
            0);
          *((_DWORD *)this + 9) = v58;
        }
      }
      return;
    case 46:
      CEventHandler::ComputePotentialWalkIntoFireResponse(this, a2, v9, (CTask *)SimplestActiveTask);
      return;
    case 49:
      CEventHandler::ComputeShotFiredWhizzedByResponse(this, a2, v9, (CTask *)SimplestActiveTask);
      return;
    case 50:
      CEventHandler::ComputeLowAngerAtPlayerResponse(this, a2, v9, v10);
      return;
    case 51:
      CEventHandler::ComputeHighAngerAtPlayerResponse(this, a2, v9, v10);
      return;
    case 52:
      v61 = *((__int16 *)a2 + 5);
      if ( v61 == 200 )
        goto LABEL_116;
      if ( v61 == 513 )
        goto LABEL_81;
      return;
    case 53:
      v64 = *((__int16 *)a2 + 5);
      if ( v64 == 200 )
        goto LABEL_116;
      if ( v64 != 513 )
        return;
LABEL_81:
      v62 = (CTaskComplexEvasiveDiveAndGetUp *)CTask::operator new((CTask *)&dword_24, 0x201u);
      memset(v94, 0, 12);
      CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(v62, 0, 0, (const CVector *)v94, 1);
      v63 = &`vtable for'CTaskComplexDiveFromAttachedEntityAndGetUp;
LABEL_121:
      *(_DWORD *)v18 = *v63 + 8;
      goto LABEL_130;
    case 56:
      CEventHandler::ComputeVehiclePotentialPassiveCollisionResponse(this, a2, v9, (CTask *)SimplestActiveTask);
      return;
    case 58:
      if ( CPed::IsPlayer(*(CPed **)this) != 1 )
      {
        v91 = (CTaskComplexOnFire *)CTask::operator new((CTask *)&byte_9[3], v65);
        CTaskComplexOnFire::CTaskComplexOnFire(v91);
        goto LABEL_130;
      }
      if ( !CTaskManager::GetTaskSecondary((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4), 4) )
      {
        v67 = (CTaskSimplePlayerOnFire *)CTask::operator new((CTask *)&off_18, v66);
        CTaskSimplePlayerOnFire::CTaskSimplePlayerOnFire(v67);
        *((_DWORD *)this + 12) = v68;
      }
      return;
    case 59:
      v83 = *((__int16 *)a2 + 5);
      if ( v83 == 200 )
        goto LABEL_116;
      if ( v83 != 604 )
        return;
      v84 = (CTaskComplexExtinguishFires *)CTask::operator new((CTask *)&word_10, (unsigned int)v8);
      CTaskComplexExtinguishFires::CTaskComplexExtinguishFires(v84);
      goto LABEL_130;
    case 62:
      if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 44))(a2) )
      {
        v69 = *((__int16 *)a2 + 5);
        if ( v69 == 200 )
        {
          *((_DWORD *)this + 9) = 0;
        }
        else if ( v69 == 935 )
        {
          v70 = (CTaskComplexInvestigateDisturbance *)CTask::operator new((CTask *)&dword_1C, 0x3A7u);
          v71 = (CEntity *)(*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 44))(a2);
          CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(v70, (CEvent *)((char *)a2 + 28), v71);
          *((_DWORD *)this + 9) = v70;
        }
      }
      return;
    case 63:
      v72 = (CEntity *)*((_DWORD *)a2 + 4);
      if ( !v72 )
        return;
      v73 = *((__int16 *)a2 + 5);
      if ( v73 == 200 )
        goto LABEL_116;
      if ( v73 != 935 )
        return;
      v74 = (CTaskComplexInvestigateDisturbance *)CTask::operator new((CTask *)&dword_1C, 0x3A7u);
      CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(v74, (CEvent *)((char *)a2 + 24), v72);
      goto LABEL_130;
    case 64:
      CEventHandler::ComputeWaterCannonResponse(this, a2, v9, v10);
      return;
    case 65:
      CEventHandler::ComputeSeenPanickedPedResponse(this, a2, v9, v10);
      return;
    case 66:
      v85 = (CTaskComplexInWater *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)v8);
      CTaskComplexInWater::CTaskComplexInWater(v85);
      goto LABEL_130;
    case 67:
      v75 = (CPed *)*((_DWORD *)a2 + 3);
      if ( !v75 )
        return;
      v76 = (CTaskSimpleWaitUntilAreaCodesMatch *)CTask::operator new((CTask *)&dword_24, (unsigned int)v8);
      CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(v76, v75);
      goto LABEL_130;
    case 69:
      v77 = (CTaskComplexPolicePursuit *)CTask::operator new((CTask *)&off_18, (unsigned int)v8);
      CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(v77);
      goto LABEL_130;
    case 70:
      CEventHandler::ComputeCreatePartnerTaskResponse(this, a2, v9, v10);
      return;
    case 72:
      v78 = (CPed *)*((_DWORD *)a2 + 4);
      if ( !v78 )
        return;
      v79 = *((__int16 *)a2 + 5);
      switch ( v79 )
      {
        case 200:
          goto LABEL_116;
        case 1000:
          v92 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, (unsigned int)v8);
          CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v92, v78, -1, 0, 0, 0, 1);
          break;
        case 911:
          v80 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v80, v78, 0, 60.0, 1000000, 1000, 1.0);
          break;
        default:
          return;
      }
LABEL_130:
      *((_DWORD *)this + 9) = v18;
      return;
    case 74:
      v86 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v8);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v86, 0, 1, 0, 8.0);
      v63 = &`vtable for'CTaskSimpleOnEscalator;
      goto LABEL_121;
    case 75:
      CEventHandler::ComputeDangerResponse(this, a2, v9, v10);
      return;
    case 79:
      CEventHandler::ComputeVehicleOnFireResponse(this, a2, v9, v10);
      return;
    case 81:
      v87 = CTask::operator new((CTask *)&dword_1C, (unsigned int)v8);
      v18 = (CTaskComplexUseEffect *)CTaskInteriorUseInfo::CTaskInteriorUseInfo(
                                       v87,
                                       *((_DWORD *)a2 + 3),
                                       *((_DWORD *)a2 + 4),
                                       *((_DWORD *)a2 + 5),
                                       *((unsigned __int8 *)a2 + 24));
      goto LABEL_130;
    case 88:
      v88 = (CTaskComplexSignalAtPed *)CTask::operator new((CTask *)&off_18, (unsigned int)v8);
      CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(
        v88,
        *((CPed **)a2 + 3),
        *((_DWORD *)a2 + 4),
        *((_BYTE *)a2 + 20));
      goto LABEL_130;
    case 89:
      v89 = (CTaskComplexPassObject *)CTask::operator new((CTask *)&word_30, (unsigned int)v8);
      CTaskComplexPassObject::CTaskComplexPassObject(v89, *((CPed **)a2 + 3), *((_BYTE *)a2 + 16));
      goto LABEL_130;
    case 93:
      v90 = (CTaskComplexStuckInAir *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)v8);
      CTaskComplexStuckInAir::CTaskComplexStuckInAir(v90);
      goto LABEL_130;
    case 94:
      v81 = (CTaskComplexGangJoinRespond *)CTask::operator new((CTask *)&dword_14, (unsigned int)v8);
      CTaskComplexGangJoinRespond::CTaskComplexGangJoinRespond(v81, 0);
      goto LABEL_130;
    default:
      return;
  }
}


// ============================================================

// Address: 0x37c50c
// Original: _ZN13CEventHandler24ComputeEventResponseTaskERK4CPedRK6CEvent
// Demangled: CEventHandler::ComputeEventResponseTask(CPed const&,CEvent const&)
int __fastcall CEventHandler::ComputeEventResponseTask(CEventHandler *this, const CPed *a2, const CEvent *a3)
{
  int v3; // r4
  int v4; // r0
  CEventHandler *v6; // [sp+0h] [bp-40h] BYREF
  __int64 v7; // [sp+4h] [bp-3Ch]
  __int64 v8; // [sp+Ch] [bp-34h]
  __int16 v9; // [sp+14h] [bp-2Ch]
  __int64 v10; // [sp+16h] [bp-2Ah]
  __int64 v11; // [sp+20h] [bp-20h]
  __int64 v12; // [sp+28h] [bp-18h]
  int v13; // [sp+30h] [bp-10h]

  v3 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v6 = this;
  v13 = 0;
  CEventHandler::ComputeEventResponseTask((CEventHandler *)&v6, a2, 0);
  v4 = HIDWORD(v11);
  if ( HIDWORD(v11) )
  {
    HIDWORD(v11) = 0;
    v3 = v4;
  }
  if ( (_DWORD)v11 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v11 + 4))(v11);
    LODWORD(v11) = 0;
    if ( HIDWORD(v11) )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 4))(HIDWORD(v11));
  }
  else
  {
    LODWORD(v11) = 0;
  }
  HIDWORD(v11) = 0;
  if ( (_DWORD)v12 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v12 + 4))(v12);
  LODWORD(v12) = 0;
  if ( HIDWORD(v12) )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v12) + 4))(HIDWORD(v12));
  HIDWORD(v12) = 0;
  if ( v13 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
  v13 = 0;
  if ( (_DWORD)v8 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v8 + 4))(v8);
  LODWORD(v8) = 0;
  if ( HIDWORD(v7) )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 4))(HIDWORD(v7));
  HIDWORD(v7) = 0;
  if ( HIDWORD(v8) )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 4))(HIDWORD(v8));
    HIDWORD(v8) = 0;
  }
  if ( (_DWORD)v8 )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v8 + 4))(v8);
  LODWORD(v8) = 0;
  if ( HIDWORD(v7) )
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 4))(HIDWORD(v7));
  HIDWORD(v7) = 0;
  if ( HIDWORD(v8) )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v8) + 4))(HIDWORD(v8));
    HIDWORD(v8) = 0;
  }
  return v3;
}


// ============================================================

// Address: 0x37c5f6
// Original: _ZN13CEventHandler5FlushEv
// Demangled: CEventHandler::Flush(void)
int __fastcall CEventHandler::Flush(CEventHandler *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 8) = 0;
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 9) = 0;
  if ( v4 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 10) = 0;
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v6 = *((_DWORD *)this + 12);
  *((_DWORD *)this + 11) = 0;
  if ( v6 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 12) = 0;
  if ( v7 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  v8 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = 0;
  if ( v8 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  result = *((_DWORD *)this + 4);
  *((_DWORD *)this + 2) = 0;
  if ( result )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    *((_DWORD *)this + 4) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x37c678
// Original: _ZN13CEventHandler16FlushImmediatelyEv
// Demangled: CEventHandler::FlushImmediately(void)
int __fastcall CEventHandler::FlushImmediately(CEventHandler *this)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 3) = 0;
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  result = *((_DWORD *)this + 4);
  *((_DWORD *)this + 2) = 0;
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    result = 0;
    *((_DWORD *)this + 4) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x37c6b0
// Original: _ZN13CEventHandler31ComputeVehicleCollisionResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehicleCollisionResponse(CEvent *,CTask *,CTask *)
const CPed *__fastcall CEventHandler::ComputeVehicleCollisionResponse(
        const CPed *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d1
  float32x2_t v6; // d8
  int v9; // r10
  const CPed *v10; // r8
  unsigned int v11; // r1
  CTaskComplexEvasiveStep *v12; // r4
  float v13; // s18
  int IsPlayer; // r1
  const CPed *v15; // r0
  int v16; // r1
  float v17; // s0
  float v18; // s2
  unsigned int v19; // r1
  CTaskComplexHitPedWithCar *v20; // r0
  CVehicle *v21; // r1
  float v22; // r2
  const CTask *v23; // r1
  int v24; // r0
  const CEntity *v25; // r2
  const CPed *v26; // r1
  int v27; // r9
  int PedsGroup; // r5
  char IsPedGoingForCarDoor; // r11
  unsigned int v30; // r1
  CTaskComplexWalkRoundCar *v31; // r0
  int v32; // r0
  unsigned int v33; // r1
  const CPed *v34; // r4
  unsigned int v35; // r1
  CTaskSimpleShakeFist *v36; // r0
  int v37; // r0
  const CPed *v38; // r1
  int v39; // r0
  CTaskComplexHitPedWithCar *v40; // r0
  unsigned int v41; // r1
  CTaskComplexJump *v42; // r0
  unsigned int v43; // r1
  unsigned int v44; // r2
  char v45; // r1
  _BYTE v46[60]; // [sp+24h] [bp-3Ch] BYREF

  v9 = *((_DWORD *)a2 + 5);
  v10 = this;
  if ( !v9 )
    return this;
  v11 = *(_DWORD *)(*(_DWORD *)this + 1160) & 0xF7FFFFFF;
  *(_DWORD *)(*(_DWORD *)this + 1160) = v11;
  if ( *((_WORD *)a2 + 6) == 1 )
  {
    v12 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&dword_1C, v11);
    CTaskComplexHitPedWithCar::ComputeEvasiveStepMoveDir(
      (CTaskComplexHitPedWithCar *)v46,
      *(const CPed **)v10,
      (CVehicle *)v9);
    CTaskComplexEvasiveStep::CTaskComplexEvasiveStep(v12, (CEntity *)v9, (const CVector *)v46);
    *((_DWORD *)v10 + 9) = v12;
    goto LABEL_43;
  }
  v6.n64_u32[0] = *((_DWORD *)a2 + 4);
  v13 = sqrtf(
          (float)((float)(*(float *)(v9 + 72) * *(float *)(v9 + 72)) + (float)(*(float *)(v9 + 76) * *(float *)(v9 + 76)))
        + (float)(*(float *)(v9 + 80) * *(float *)(v9 + 80)));
  IsPlayer = CPed::IsPlayer(*(CPed **)this);
  v15 = *(const CPed **)v10;
  if ( v13 > 0.05 )
  {
    if ( IsPlayer == 1 )
    {
      if ( *((unsigned __int8 *)v15 + 1156) << 31 )
      {
        v16 = *((_DWORD *)v15 + 5);
        v17 = *((float *)v15 + 314);
        v18 = v17 * *(float *)(v16 + 16);
        v4.n64_u64[0] = vmul_f32(vmul_n_f32(*(float32x2_t *)(v16 + 20), v17), *(float32x2_t *)((char *)a2 + 28)).n64_u64[0];
        v4.n64_f32[0] = (float)((float)(v18 * *((float *)a2 + 6)) + v4.n64_f32[0]) + v4.n64_f32[1];
        if ( v4.n64_f32[0] < 0.0 )
        {
          v5.n64_u32[0] = 0;
          v4.n64_f32[0] = v6.n64_f32[0] + (float)(v4.n64_f32[0] * *((float *)v15 + 36));
          v6.n64_u64[0] = vmax_f32(v4, v5).n64_u64[0];
        }
      }
    }
    if ( CPed::IsPlayer(v15) == 1 )
    {
      v4.n64_u32[0] = 1101004800;
      v20 = (CTaskComplexHitPedWithCar *)CTask::operator new((CTask *)&word_28, v19);
      v21 = (CVehicle *)v9;
      LODWORD(v22) = vmin_f32(v6, v4).n64_u32[0];
    }
    else
    {
      v20 = (CTaskComplexHitPedWithCar *)CTask::operator new((CTask *)&word_28, v19);
      v22 = *((float *)a2 + 4);
      v21 = (CVehicle *)v9;
    }
    CTaskComplexHitPedWithCar::CTaskComplexHitPedWithCar(v20, v21, v22);
    v38 = *(const CPed **)v10;
    *((_DWORD *)v10 + 9) = v39;
    if ( *((_DWORD *)v38 + 75) != v9 )
      *((_DWORD *)v38 + 290) |= 0x8000000u;
    goto LABEL_43;
  }
  if ( IsPlayer == 1 && (v23 = *(const CTask **)(*((_DWORD *)v15 + 272) + 16)) != 0 )
  {
    if ( !a4 )
      goto LABEL_23;
  }
  else
  {
    v24 = CPed::IsPlayer(v15);
    if ( !a4 || v24 )
    {
LABEL_23:
      if ( CPed::IsPlayer(*(CPed **)v10) == 1 )
      {
        v34 = *(const CPed **)v10;
        if ( (*(_BYTE *)(*(_DWORD *)v10 + 1157) & 2) == 0 )
        {
          if ( *(float *)(*((_DWORD *)v34 + 273) + 20) == 0.0 && *(_DWORD *)(v9 + 1124) )
          {
            CPlayerPed::AnnoyPlayerPed(*(CPlayerPed **)v10, 0);
            IKChainManager_c::LookAt(
              (int)&g_ikChainMan,
              (int)"CompVehicleCollResp",
              *(CPed **)v10,
              v9,
              1300,
              -1,
              0,
              1,
              0.25,
              500,
              3,
              0);
            v35 = *((_DWORD *)v34 + 7 * *((char *)v34 + 1820) + 361);
            if ( !v35 || CPed::GetWeaponSlot() == 2 || CPed::GetWeaponSlot() == 4 || CPed::GetWeaponSlot() == 1 )
            {
              v36 = (CTaskSimpleShakeFist *)CTask::operator new((CTask *)&word_10, v35);
              CTaskSimpleShakeFist::CTaskSimpleShakeFist(v36);
              *((_DWORD *)v10 + 12) = v37;
            }
          }
          else
          {
            IKChainManager_c::LookAt(
              (int)&g_ikChainMan,
              (int)"CompVehicleCollResp",
              v34,
              v9,
              800,
              -1,
              0,
              1,
              0.25,
              500,
              3,
              0);
          }
          goto LABEL_43;
        }
      }
      if ( v13 > 0.001 )
      {
        v40 = (CTaskComplexHitPedWithCar *)CTask::operator new((CTask *)&word_28, v33);
        CTaskComplexHitPedWithCar::CTaskComplexHitPedWithCar(v40, (CVehicle *)v9, *((float *)a2 + 4));
LABEL_38:
        *((_DWORD *)v10 + 9) = v32;
        goto LABEL_43;
      }
      goto LABEL_43;
    }
  }
  if ( !CTask::IsGoToTask(a4, v23) )
    goto LABEL_23;
  this = *(const CPed **)v10;
  v26 = *(const CPed **)(*(_DWORD *)v10 + 1388);
  if ( (const CPed *)v9 != v26 )
  {
    v27 = *((char *)a2 + 48);
    if ( v27 == 1 )
      return this;
    PedsGroup = CPedGroups::GetPedsGroup(this, v26);
    IsPedGoingForCarDoor = CPedIntelligence::IsPedGoingForCarDoor(*(CPedIntelligence **)(*(_DWORD *)v10 + 1088));
    v31 = (CTaskComplexWalkRoundCar *)CTask::operator new((CTask *)&dword_58, v30);
    if ( PedsGroup )
      v27 = 6;
    CTaskComplexWalkRoundCar::CTaskComplexWalkRoundCar(
      v31,
      v27,
      (CTask *)((char *)a4 + 12),
      (const CVehicle *)v9,
      IsPedGoingForCarDoor,
      *((_BYTE *)a2 + 49));
    goto LABEL_38;
  }
  if ( fabsf(*((float *)this + 343) - *((float *)this + 344)) < 0.01
    && CPedGeometryAnalyser::CanPedJumpObstacle(this, (const CPed *)v9, v25) == 1 )
  {
    v42 = (CTaskComplexJump *)CTask::operator new((CTask *)&dword_14, v41);
    CTaskComplexJump::CTaskComplexJump(v42, 0);
    goto LABEL_38;
  }
LABEL_43:
  this = (const CPed *)*((_DWORD *)v10 + 9);
  if ( this )
  {
    this = (const CPed *)(*(int (__fastcall **)(const CPed *))(*(_DWORD *)this + 20))(this);
    if ( this == (const CPed *)((char *)&elf_hash_bucket[63] + 1) )
    {
      this = *(const CPed **)(v9 + 1124);
      if ( this )
      {
        this = (const CPed *)CPed::IsPlayer(this);
        if ( this == (const CPed *)((char *)&stderr + 1) )
        {
          this = *(const CPed **)(*(_DWORD *)v10 + 1088);
          if ( *((_BYTE *)this + 384) )
          {
            if ( *((_BYTE *)this + 385) )
            {
              v43 = CTimer::m_snTimeInMilliseconds;
              *((_BYTE *)this + 385) = 0;
              *((_DWORD *)this + 94) = v43;
              v44 = v43;
            }
            else
            {
              v44 = *((_DWORD *)this + 94);
              v43 = CTimer::m_snTimeInMilliseconds;
            }
            if ( v44 + *((_DWORD *)this + 95) <= v43 )
            {
              *((_DWORD *)this + 94) = v43;
              *((_DWORD *)this + 95) = 3000;
              v45 = *((_BYTE *)this + 372);
              *((_BYTE *)this + 384) = 1;
              *((_BYTE *)this + 372) = v45 + 2;
            }
          }
        }
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x37caac
// Original: _ZN13CEventHandler34ComputePedCollisionWithPedResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedCollisionWithPedResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedCollisionWithPedResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  float *v6; // r10
  CPedGroups *v8; // r0
  float *v9; // r1
  float *v10; // r2
  float *v11; // r3
  float *v12; // r5
  float v13; // s22
  float v14; // s26
  float v15; // s24
  float v16; // s28
  float v17; // s17
  float v18; // s30
  float v19; // s16
  float v20; // s20
  float v21; // s18
  float v22; // s19
  float v23; // s23
  float v24; // s21
  unsigned int v25; // r11
  unsigned int v26; // r8
  int PedsGroup; // r0
  const CTask *v28; // r1
  int v29; // r5
  int Leader; // r4
  const CPed *v31; // r1
  int v32; // r0
  int v33; // r6
  int v34; // r9
  int v35; // r5
  float v36; // s2
  CTaskComplexEvasiveStep *v37; // r6
  CPed **v38; // r11
  unsigned int v39; // r1
  CTaskComplexFollowPointRoute *v40; // r0
  CTaskComplexEvasiveStep *v41; // r0
  unsigned int v42; // r1
  CTaskSimple *v43; // r0
  int v44; // r0
  int v45; // r0
  bool v46; // zf
  float v47; // s0
  unsigned int v48; // r1
  unsigned int v49; // r1
  CTaskSimple *v50; // r0
  int v51; // r0
  int v52; // r3
  const CPed *v53; // r1
  bool v54; // zf
  const CPed *v55; // r1
  float *v56; // r2
  float v57; // s0
  float v58; // s4
  CTaskSimple *v59; // r0
  int v60; // r0
  CPed *v61; // r2
  CEntity *v62; // r2
  int v63; // r4
  unsigned int v64; // r1
  unsigned int v65; // r1
  CTaskSimple *v66; // r0
  int v67; // r0
  unsigned int v68; // r1
  float v69; // s0
  CTaskSimple *v70; // r0
  unsigned int v71; // r1
  CTaskSimple *v72; // r0
  bool v73; // cc
  float *v74; // r2
  float v75; // s0
  float v76; // s4
  CTaskSimple *v77; // r0
  int v78; // r0
  CPed *v79; // r2
  CTaskSimple *v80; // r0
  int v81; // r0
  bool v82; // cc
  CTaskSimple *v83; // r0
  int v84; // r0
  CPed *v85; // r2
  CTaskSimple *v86; // r0
  int v87; // r0
  int TaskByType; // r4
  int ActiveTaskByType; // r6
  int v90; // r9
  int v91; // r0
  int v92; // r1
  int v93; // r1
  bool v94; // zf
  int v95; // r3
  int v96; // r5
  float *v97; // r2
  float *v98; // r1
  float v99; // s2
  float v100; // s0
  float v101; // s4
  float v102; // s6
  float v103; // s2
  float v104; // s0
  float v105; // s4
  float v106; // s6
  int v107; // r0
  int v108; // r1
  unsigned int v109; // r1
  int v110; // r0
  unsigned int v111; // r1
  unsigned int v112; // r2
  char v113; // r1
  CTaskSimple *v114; // r0
  CPed *v115; // r2
  int v116; // r4
  unsigned int v117; // r1
  int v118; // r4
  unsigned int v119; // r1
  int v120; // [sp+4h] [bp-ECh]
  CEventHandler *v121; // [sp+24h] [bp-CCh]
  int v122; // [sp+28h] [bp-C8h] BYREF
  float v123; // [sp+2Ch] [bp-C4h]
  int v124; // [sp+30h] [bp-C0h]

  v6 = (float *)*((_DWORD *)a2 + 4);
  if ( !v6 )
    return;
  CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)v6 + 272) + 4));
  v121 = this;
  v8 = *(CPedGroups **)this;
  v9 = (float *)*((_DWORD *)v6 + 5);
  v10 = *(float **)(*(_DWORD *)this + 20);
  v11 = v9 + 12;
  if ( !v9 )
    v11 = v6 + 1;
  v12 = v10 + 12;
  v13 = *v11;
  v14 = v11[1];
  v15 = v11[2];
  if ( !v10 )
    v12 = (float *)((char *)v8 + 4);
  v16 = *v12;
  v17 = v12[1];
  v18 = v12[2];
  v19 = v9[4];
  v20 = v9[5];
  v21 = v9[6];
  v22 = v10[4];
  v23 = v10[5];
  v24 = v10[6];
  v25 = *((unsigned __int16 *)a2 + 23);
  v26 = *((unsigned __int16 *)a2 + 22);
  PedsGroup = CPedGroups::GetPedsGroup(v8, (const CPed *)v9);
  v29 = PedsGroup;
  if ( PedsGroup )
  {
    Leader = CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8));
    v32 = CPedGroups::GetPedsGroup((CPedGroups *)v6, v31);
    v33 = v32;
    if ( v32 )
    {
      v34 = CPedGroupMembership::GetLeader((CPedGroupMembership *)(v32 + 8));
      if ( v29 != v33 )
      {
LABEL_9:
        v35 = 0;
LABEL_21:
        if ( CPed::IsPlayer((CPed *)v6) == 1 )
        {
          v43 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v42);
          CTaskSimple::CTaskSimple(v43);
          *(_WORD *)(v44 + 24) = 0;
          *(_DWORD *)(v44 + 16) = 0;
          *(_DWORD *)(v44 + 20) = 0;
          *(_DWORD *)(v44 + 8) = 28;
          *(_DWORD *)(v44 + 12) = -1;
          *(_DWORD *)v44 = &off_665794;
          v38 = (CPed **)v121;
          *((_DWORD *)v121 + 11) = v44;
LABEL_121:
          v38[9] = 0;
          return;
        }
        if ( v25 != 1 )
          v25 = 0;
        if ( v26 != 1 )
          v26 = 0;
        v45 = v26 | v25;
        if ( v33 )
        {
          v38 = (CPed **)v121;
          if ( v45 != 1 )
            goto LABEL_121;
          if ( v35 )
          {
            if ( v6 != (float *)v34
              && (!Leader || CPedIntelligence::GetMoveStateFromGoToTask(*(CPedIntelligence **)(Leader + 1088)) != 1) )
            {
              goto LABEL_121;
            }
          }
          else if ( (float)((float)((float)rand() * 4.6566e-10) + 0.0) < 0.25 )
          {
            v69 = (float)((float)rand() * 4.6566e-10) + 0.0;
            if ( v69 >= 0.33 )
            {
              if ( v69 < 0.66 )
              {
                v86 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v68);
                CTaskSimple::CTaskSimple(v86);
                *(_WORD *)(v87 + 24) = 0;
                *(_DWORD *)(v87 + 16) = 0;
                *(_DWORD *)(v87 + 20) = 0;
                *(_DWORD *)(v87 + 8) = 28;
                *(_DWORD *)(v87 + 12) = -1;
                *(_DWORD *)v87 = &off_665794;
                *((_DWORD *)v121 + 11) = v87;
              }
            }
            else
            {
              IKChainManager_c::LookAt(
                (int)&g_ikChainMan,
                (int)"CompPedCollPedResp",
                *(CPed **)v121,
                (int)v6,
                2000,
                5,
                0,
                1,
                0.25,
                500,
                3,
                0);
            }
          }
          TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*(_DWORD *)v121 + 1088), 1207);
          ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                               (CTaskManager *)(*(_DWORD *)(*(_DWORD *)v121 + 1088) + 4),
                               917);
          v90 = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*(_DWORD *)v121 + 1088), 900);
          v91 = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*(_DWORD *)v121 + 1088), 907);
          v92 = TaskByType;
          if ( TaskByType )
            v92 = 1;
          if ( (v92 & v35) == 1 )
          {
            if ( v91 )
            {
              v93 = *(_DWORD *)(TaskByType + 16);
              v94 = v93 == 0;
              if ( v93 )
                v94 = (ActiveTaskByType | v90) == 0;
              if ( !v94 )
              {
                v95 = *(_DWORD *)(v93 + 20);
                v96 = *(_DWORD *)(*(_DWORD *)v121 + 20);
                v97 = (float *)(v95 + 48);
                if ( !v95 )
                  v97 = (float *)(v93 + 4);
                v98 = (float *)(v96 + 48);
                v99 = *v97;
                v100 = v97[1];
                if ( !v96 )
                  v98 = (float *)(*(_DWORD *)v121 + 4);
                v101 = *v98;
                v102 = v98[1];
                if ( ActiveTaskByType )
                  *(_BYTE *)(ActiveTaskByType + 92) |= 2u;
                v103 = v101 - v99;
                v104 = v102 - v100;
                v105 = sqrtf((float)((float)(v103 * v103) + (float)(v104 * v104)) + 0.0);
                v106 = v105 + 0.1;
                if ( v90 )
                  *(float *)(v90 + 24) = v106;
                if ( *(float *)(v91 + 24) != v106 )
                {
                  *(float *)(v91 + 24) = v106;
                  *(_DWORD *)(v91 + 40) = CTimer::m_snTimeInMilliseconds;
                  *(_DWORD *)(v91 + 44) = 0;
                  *(_BYTE *)(v91 + 48) = 1;
                }
                if ( v105 < 8.0 )
                {
                  *(float *)(TaskByType + 32) = v103;
                  *(float *)(TaskByType + 36) = v104;
                  *(_DWORD *)(TaskByType + 40) = 0;
                }
              }
            }
            goto LABEL_121;
          }
        }
        else
        {
          v38 = (CPed **)v121;
          if ( v45 != 1 )
            goto LABEL_121;
        }
        v107 = *((_DWORD *)*v38 + 5);
        v108 = *(_DWORD *)(v107 + 16);
        v123 = *(float *)(v107 + 20);
        v122 = v108;
        v124 = 0;
        v123 = -v123;
        CVector::Normalise((CVector *)&v122);
        v37 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&dword_1C, v109);
        CTaskComplexEvasiveStep::CTaskComplexEvasiveStep(v37, (CEntity *)v6, (const CVector *)&v122);
        goto LABEL_110;
      }
    }
    else
    {
      v34 = 0;
      if ( v29 )
        goto LABEL_9;
    }
    if ( v6 == (float *)Leader )
      *((_DWORD *)v6 + 291) |= 0x80000000;
    v35 = 1;
    if ( *(_DWORD *)v121 == Leader )
      *(_DWORD *)(Leader + 1164) |= 0x80000000;
    goto LABEL_21;
  }
  v36 = (float)((float)((float)(v13 - v16) * v22) + (float)((float)(v14 - v17) * v23))
      + (float)((float)(v15 - v18) * v24);
  if ( v26 == 4 && v25 <= 1 )
  {
    if ( v36 < 0.0 )
    {
      v38 = (CPed **)v121;
      v37 = 0;
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CompPedCollPedResp",
        *(CPed **)v121,
        (int)v6,
        2000,
        5,
        0,
        1,
        0.25,
        500,
        3,
        0);
      v50 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v49);
      CTaskSimple::CTaskSimple(v50);
      *(_DWORD *)(v51 + 8) = 28;
      *(_DWORD *)v51 = &off_665794;
      *(_DWORD *)(v51 + 12) = -1;
      *(_WORD *)(v51 + 24) = 0;
      *(_DWORD *)(v51 + 16) = 0;
      *(_DWORD *)(v51 + 20) = 0;
LABEL_66:
      v38[11] = (CPed *)v51;
      goto LABEL_110;
    }
    if ( a4 )
    {
      v37 = 0;
      if ( CTask::IsGoToTask(a4, v28) )
      {
        v38 = (CPed **)v121;
        v122 = 0;
        CPedGeometryAnalyser::ComputeRouteRoundEntityBoundingBox(
          *(CPedGeometryAnalyser **)v121,
          (const CPed *)v6,
          (CTask *)((char *)a4 + 12),
          (const CVector *)&v122,
          0,
          v120);
        v40 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, v39);
        CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
          v40,
          4,
          (const CPointRoute *)&v122,
          0,
          0.5,
          5.0,
          0,
          1,
          1);
        v37 = v41;
LABEL_62:
        v70 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v28);
        CTaskSimple::CTaskSimple(v70);
        *(_DWORD *)(v51 + 8) = 28;
        *(_DWORD *)(v51 + 12) = -1;
        *(_WORD *)(v51 + 24) = 0;
        *(_DWORD *)(v51 + 16) = 0;
        *(_DWORD *)(v51 + 20) = 0;
LABEL_65:
        *(_DWORD *)v51 = &off_665794;
        goto LABEL_66;
      }
    }
    else
    {
      v37 = 0;
    }
    v38 = (CPed **)v121;
    goto LABEL_62;
  }
  v46 = v26 == 4;
  if ( v26 == 4 )
    v46 = v25 == 4;
  v47 = (float)((float)((float)(v13 - v16) * v19) + (float)((float)(v14 - v17) * v20))
      + (float)((float)(v15 - v18) * v21);
  if ( v46 )
  {
    v38 = (CPed **)v121;
    if ( v36 < 0.0 )
    {
      if ( v47 <= 0.0 )
      {
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"CompPedCollPedResp",
          *(CPed **)v121,
          (int)v6,
          2000,
          5,
          0,
          1,
          0.25,
          500,
          3,
          0);
        v66 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v65);
        CTaskSimple::CTaskSimple(v66);
        *(_WORD *)(v67 + 24) = 0;
        *(_DWORD *)(v67 + 8) = 28;
        *(_DWORD *)(v67 + 12) = -1;
        *(_DWORD *)(v67 + 16) = 0;
        *(_DWORD *)(v67 + 20) = 0;
        *(_DWORD *)v67 = &off_665794;
        *((_DWORD *)v121 + 11) = v67;
      }
      goto LABEL_121;
    }
    if ( CTask::IsGoToTask(a4, v28) )
    {
      v122 = 0;
      CPedGeometryAnalyser::ComputeRouteRoundEntityBoundingBox(
        *(CPedGeometryAnalyser **)v121,
        (const CPed *)v6,
        (CTask *)((char *)a4 + 12),
        (const CVector *)&v122,
        0,
        v120);
      v37 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&off_3C, v48);
      CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
        v37,
        4,
        (const CPointRoute *)&v122,
        0,
        0.5,
        5.0,
        0,
        1,
        1);
    }
    else
    {
      v37 = 0;
    }
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"CompPedCollPedResp",
      *(CPed **)v121,
      (int)v6,
      2000,
      5,
      0,
      1,
      0.25,
      500,
      3,
      0);
    v72 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v71);
    CTaskSimple::CTaskSimple(v72);
    *(_WORD *)(v51 + 24) = 0;
    *(_DWORD *)(v51 + 8) = 28;
    *(_DWORD *)(v51 + 12) = -1;
    *(_DWORD *)(v51 + 16) = 0;
    *(_DWORD *)(v51 + 20) = 0;
    goto LABEL_65;
  }
  v52 = (__int16)v26 | 1;
  v53 = (const CPed *)((__int16)v25 | 1);
  v54 = v52 == 7;
  if ( v52 == 7 )
    v54 = v53 == (const CPed *)&byte_7;
  if ( v54 )
  {
    if ( v36 < 0.0 || v47 > 0.0 )
    {
      if ( v36 < 0.0 )
      {
        v38 = (CPed **)v121;
        if ( v47 > 0.0 )
          goto LABEL_121;
        v114 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v53);
        CTaskSimple::CTaskSimple(v114);
        *(_WORD *)(v81 + 24) = 0;
        *(_DWORD *)(v81 + 16) = 0;
        *(_DWORD *)(v81 + 20) = 0;
        *(_DWORD *)(v81 + 8) = 28;
        *(_DWORD *)(v81 + 12) = -1;
        *(_DWORD *)v81 = &off_665794;
      }
      else
      {
        v80 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v53);
        CTaskSimple::CTaskSimple(v80);
        *(_WORD *)(v81 + 24) = 0;
        *(_DWORD *)(v81 + 16) = 0;
        *(_DWORD *)(v81 + 20) = 0;
        *(_DWORD *)(v81 + 8) = 28;
        *(_DWORD *)(v81 + 12) = -1;
        *(_DWORD *)v81 = &off_665794;
        v38 = (CPed **)v121;
      }
      v115 = *v38;
      v38[11] = (CPed *)v81;
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CompPedCollPedResp",
        v115,
        (int)v6,
        2000,
        5,
        0,
        1,
        0.25,
        500,
        3,
        0);
      goto LABEL_121;
    }
    v38 = (CPed **)v121;
    v55 = *(const CPed **)v121;
    v56 = *(float **)(*(_DWORD *)v121 + 1440);
    v57 = v56[11];
    if ( v57 > 1.5 )
    {
      v58 = *(float *)(*((_DWORD *)v6 + 360) + 44);
      if ( v58 <= 1.5 || v57 > v58 )
      {
        v116 = CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)v6, v55, (CEntity *)v56);
        v37 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&off_18, v117);
        CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(v37, v116, 0);
        goto LABEL_110;
      }
    }
    v59 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v55);
    CTaskSimple::CTaskSimple(v59);
    *(_WORD *)(v60 + 24) = 0;
    *(_DWORD *)(v60 + 16) = 0;
    *(_DWORD *)(v60 + 20) = 0;
    *(_DWORD *)(v60 + 8) = 28;
    *(_DWORD *)(v60 + 12) = -1;
    *(_DWORD *)v60 = &off_665794;
    v61 = *(CPed **)v121;
    *((_DWORD *)v121 + 11) = v60;
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"CompPedCollPedResp",
      v61,
      (int)v6,
      2000,
      5,
      0,
      1,
      0.25,
      500,
      3,
      0);
LABEL_54:
    v63 = CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)v6, *v38, v62);
    v37 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&word_10, v64);
    CTaskComplexHitResponse::CTaskComplexHitResponse(v37, v63);
    goto LABEL_110;
  }
  v73 = v26 > 1;
  if ( v26 <= 1 )
    v73 = (unsigned int)(__int16)v25 > 7;
  if ( v73 || ((1 << v25) & 0xD0) == 0 || v47 > 0.0 )
  {
    v82 = v25 > 1;
    v38 = (CPed **)v121;
    if ( !v82 )
      v82 = (unsigned int)(__int16)v26 > 7;
    if ( v82 )
      goto LABEL_121;
    if ( ((1 << v26) & 0xD0) == 0 )
      goto LABEL_121;
    if ( v47 > 0.0 )
      goto LABEL_121;
    v83 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, 1u);
    CTaskSimple::CTaskSimple(v83);
    *(_WORD *)(v84 + 24) = 0;
    *(_DWORD *)(v84 + 16) = 0;
    *(_DWORD *)(v84 + 20) = 0;
    *(_DWORD *)(v84 + 8) = 28;
    *(_DWORD *)(v84 + 12) = -1;
    *(_DWORD *)v84 = &off_665794;
    v85 = *(CPed **)v121;
    *((_DWORD *)v121 + 11) = v84;
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"CompPedCollPedResp",
      v85,
      (int)v6,
      2000,
      5,
      0,
      1,
      0.25,
      500,
      3,
      0);
    if ( v26 == 4 )
      goto LABEL_121;
    goto LABEL_54;
  }
  if ( v53 != (const CPed *)&byte_7
    || (v53 = *(const CPed **)v121, v74 = *(float **)(*(_DWORD *)v121 + 1440), v75 = v74[11], v75 <= 1.5)
    || (v76 = *(float *)(*((_DWORD *)v6 + 360) + 44), v76 > 1.5) && v75 <= v76 )
  {
    v77 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v53);
    CTaskSimple::CTaskSimple(v77);
    *(_WORD *)(v78 + 24) = 0;
    *(_DWORD *)(v78 + 16) = 0;
    *(_DWORD *)(v78 + 20) = 0;
    *(_DWORD *)(v78 + 8) = 28;
    *(_DWORD *)(v78 + 12) = -1;
    *(_DWORD *)v78 = &off_665794;
    v79 = *(CPed **)v121;
    *((_DWORD *)v121 + 11) = v78;
    IKChainManager_c::LookAt(
      (int)&g_ikChainMan,
      (int)"CompPedCollPedResp",
      v79,
      (int)v6,
      2000,
      5,
      0,
      1,
      0.25,
      500,
      3,
      0);
    v46 = v25 == 4;
    v38 = (CPed **)v121;
    if ( v46 )
      goto LABEL_121;
    goto LABEL_54;
  }
  v118 = CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)v6, v53, (CEntity *)v74);
  v37 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&off_18, v119);
  CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(v37, v118, 0);
  v38 = (CPed **)v121;
LABEL_110:
  v38[9] = v37;
  if ( v37 )
  {
    if ( CPed::IsPlayer((CPed *)v6) == 1 )
    {
      v110 = *((_DWORD *)*v38 + 272);
      if ( *(_BYTE *)(v110 + 384) )
      {
        if ( *(_BYTE *)(v110 + 385) )
        {
          v111 = CTimer::m_snTimeInMilliseconds;
          *(_BYTE *)(v110 + 385) = 0;
          *(_DWORD *)(v110 + 376) = v111;
          v112 = v111;
        }
        else
        {
          v112 = *(_DWORD *)(v110 + 376);
          v111 = CTimer::m_snTimeInMilliseconds;
        }
        if ( v112 + *(_DWORD *)(v110 + 380) <= v111 )
        {
          *(_DWORD *)(v110 + 376) = v111;
          *(_DWORD *)(v110 + 380) = 3000;
          v113 = *(_BYTE *)(v110 + 372);
          *(_BYTE *)(v110 + 384) = 1;
          *(_BYTE *)(v110 + 372) = v113 + 1;
        }
      }
    }
  }
}


// ============================================================

// Address: 0x37d560
// Original: _ZN13CEventHandler37ComputePedCollisionWithPlayerResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedCollisionWithPlayerResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedCollisionWithPlayerResponse(CPed **this, CEvent *a2, CPed **a3, CTask *a4)
{
  int v4; // r4
  float *v7; // r1
  CPed *v8; // r2
  float *v9; // r3
  unsigned int v10; // r6
  CPedIntelligence *v11; // r0
  float *v12; // r5
  float v13; // s16
  float v14; // s26
  float v15; // s24
  float *v16; // r1
  float v17; // s28
  float v18; // s17
  float v19; // s30
  float v20; // s18
  float v21; // s22
  float v22; // s20
  float v23; // s19
  float v24; // s23
  float v25; // s21
  int TaskByType; // r4
  _BOOL4 v27; // r5
  _BOOL4 v28; // r11
  int v29; // r6
  int v30; // r0
  float v31; // s17
  float v32; // s28
  float v33; // s30
  float v34; // s16
  unsigned int v35; // r1
  CPed **v36; // r10
  int v37; // r0
  CPed *v38; // r11
  unsigned int v39; // r1
  CTaskSimple *v40; // r0
  int v41; // r0
  int v42; // r9
  int v43; // r4
  int v44; // r3
  float v45; // s0
  bool v46; // zf
  int v47; // r1
  int v48; // r1
  __int64 v49; // r0
  CTaskComplexEvasiveStep *v50; // r6
  int v51; // r8
  bool v52; // zf
  int v53; // r1
  int v54; // r1
  int ActiveTask; // r0
  unsigned int v56; // r1
  float v57; // s0
  CTask *v58; // r5
  CTaskSimple *v59; // r0
  int v60; // r0
  CPed *v61; // r2
  unsigned int v62; // r1
  CTaskComplexFollowPointRoute *v63; // r0
  int v64; // r0
  int v65; // r2
  int v66; // r3
  float *v67; // r6
  float *v68; // r0
  float v69; // s2
  float v70; // s0
  float v71; // s4
  int v72; // r2
  CTaskSimple *v73; // r0
  int v74; // r0
  CPed *v75; // r2
  CTaskSimple *v76; // r0
  int v77; // r0
  CTaskSimple *v78; // r0
  int v79; // r0
  CPed *v80; // r2
  bool v81; // zf
  int v82; // r0
  int v83; // r0
  float v84; // s0
  unsigned int v85; // r1
  int v86; // r0
  int v87; // r2
  int v88; // r3
  float *v89; // r5
  float *v90; // r0
  float v91; // s2
  float v92; // s0
  float v93; // s4
  int v94; // r0
  int v95; // r2
  int v96; // r3
  float *v97; // r6
  float *v98; // r0
  float v99; // s2
  float v100; // s0
  float v101; // s4
  int v102; // r2
  int v103; // [sp+4h] [bp-104h]
  int v104; // [sp+24h] [bp-E4h]
  unsigned int v106; // [sp+2Ch] [bp-DCh]
  __int64 v107; // [sp+30h] [bp-D8h]
  unsigned int v108; // [sp+38h] [bp-D0h]
  int v109; // [sp+3Ch] [bp-CCh]
  CPed *v110; // [sp+40h] [bp-C8h]
  _DWORD v111[49]; // [sp+44h] [bp-C4h] BYREF

  v4 = *((_DWORD *)a2 + 4);
  if ( v4 )
  {
    v106 = *((__int16 *)a2 + 22);
    v7 = *(float **)(v4 + 20);
    v8 = *this;
    v9 = v7 + 12;
    v10 = *(_DWORD *)(v4 + 1104);
    v11 = (CPedIntelligence *)*((_DWORD *)*this + 272);
    v110 = (CPed *)v4;
    if ( !v7 )
      v9 = (float *)(v4 + 4);
    v12 = (float *)*((_DWORD *)v8 + 5);
    v13 = v7[4];
    v14 = v7[5];
    v15 = v7[6];
    v16 = v12 + 12;
    v17 = *v9;
    v18 = v9[1];
    v19 = v9[2];
    v20 = v12[4];
    v21 = v12[5];
    v22 = v12[6];
    if ( !v12 )
      v16 = (float *)((char *)v8 + 4);
    v23 = *v16;
    v24 = v16[1];
    v25 = v16[2];
    TaskByType = CPedIntelligence::FindTaskByType(v11, 1207);
    v27 = (v10 | 2) == 6;
    v108 = v10;
    v28 = v10 == 7;
    HIDWORD(v107) = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)*this + 272) + 4), 917);
    LODWORD(v107) = CPedIntelligence::FindTaskByType(*((CPedIntelligence **)*this + 272), 900);
    v29 = CPedIntelligence::FindTaskByType(*((CPedIntelligence **)*this + 272), 907);
    v30 = CPedIntelligence::FindTaskByType(*((CPedIntelligence **)*this + 272), 243);
    if ( v30 && !*(_DWORD *)(v30 + 12) )
    {
      if ( CPedGroupMembership::CountMembers((CPedGroupMembership *)&dword_9EE300) < 3 )
        return;
      v109 = 1;
    }
    else
    {
      v109 = 0;
    }
    v31 = v18 - v24;
    v32 = v17 - v23;
    v33 = v19 - v25;
    v34 = (float)((float)(v32 * v13) + (float)(v31 * v14)) + (float)(v33 * v15);
    CPed::Say(*this, 0x1Cu, 0, 1.0, 0, 0, 0);
    v36 = this;
    v104 = v29;
    if ( a3 )
    {
      v37 = (*((int (__fastcall **)(CPed **))*a3 + 5))(a3);
      v35 = 913;
      if ( v37 == 913 )
      {
        v38 = v110;
        if ( CPed::IsPlayer(v110) == 1 )
        {
          v40 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v39);
          CTaskSimple::CTaskSimple(v40);
          *(_WORD *)(v41 + 24) = 0;
          *(_DWORD *)(v41 + 16) = 0;
          *(_DWORD *)(v41 + 20) = 0;
          *(_DWORD *)(v41 + 8) = 28;
          *(_DWORD *)(v41 + 12) = -1;
          *(_DWORD *)v41 = &off_665794;
          this[11] = (CPed *)v41;
          v42 = TaskByType;
          v43 = v109;
        }
        else
        {
          v42 = TaskByType;
          v43 = v109;
          if ( CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)v110 + 272) + 4)) )
          {
            ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)v110 + 272) + 4));
            if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 913
              && (float)((float)((float)rand() * 4.6566e-10) + 0.0) < 0.25 )
            {
              v57 = (float)((float)rand() * 4.6566e-10) + 0.0;
              if ( v57 >= 0.33 )
              {
                if ( v57 < 0.66 )
                {
                  v76 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v56);
                  CTaskSimple::CTaskSimple(v76);
                  *(_WORD *)(v77 + 24) = 0;
                  *(_DWORD *)(v77 + 16) = 0;
                  *(_DWORD *)(v77 + 20) = 0;
                  *(_DWORD *)(v77 + 8) = 28;
                  *(_DWORD *)(v77 + 12) = -1;
                  *(_DWORD *)v77 = &off_665794;
                  v36[11] = (CPed *)v77;
                }
              }
              else
              {
                v43 = v109;
                IKChainManager_c::LookAt(
                  (int)&g_ikChainMan,
                  (int)"CompPedCollPlayerResp",
                  *v36,
                  (int)v110,
                  2000,
                  5,
                  0,
                  1,
                  0.25,
                  500,
                  3,
                  0);
              }
            }
          }
        }
        if ( v34 <= 0.0 )
        {
          v50 = 0;
          if ( !((v110 == a3[4]) | v43) )
            goto LABEL_99;
LABEL_87:
          v81 = v42 == 0;
          if ( v42 )
            v81 = v104 == 0;
          if ( !v81 )
          {
            v82 = HIDWORD(v107) | v107;
            if ( v107 )
              v82 = 1;
            if ( (v82 & v43) == 1 && (v108 > 7 || ((1 << v108) & 0xD0) == 0) )
            {
              v86 = *(_DWORD *)(v42 + 16);
              v87 = *(_DWORD *)(v86 + 20);
              v88 = *((_DWORD *)*v36 + 5);
              v89 = (float *)(v87 + 48);
              if ( !v87 )
                v89 = (float *)(v86 + 4);
              v90 = (float *)(v88 + 48);
              if ( !v88 )
                v90 = (float *)((char *)*v36 + 4);
              v91 = *v90 - *v89;
              v92 = v90[1] - v89[1];
              v93 = sqrtf((float)((float)(v91 * v91) + (float)(v92 * v92)) + 0.0);
              if ( HIDWORD(v107) )
              {
                *(_BYTE *)(HIDWORD(v107) + 92) |= 2u;
              }
              else if ( (_DWORD)v107 )
              {
                *(float *)(v107 + 24) = v93 + 0.1;
              }
              if ( *(float *)(v104 + 24) != (float)(v93 + 0.1) )
              {
                *(float *)(v104 + 24) = v93 + 0.1;
                *(_QWORD *)(v104 + 40) = (unsigned int)CTimer::m_snTimeInMilliseconds;
                *(_BYTE *)(v104 + 48) = 1;
              }
              if ( v93 < 8.0 )
              {
                *(float *)(v42 + 32) = v91;
                *(float *)(v42 + 36) = v92;
                *(_DWORD *)(v42 + 40) = 0;
              }
              goto LABEL_99;
            }
          }
          if ( ((v42 != 0) & (unsigned __int8)v43) != 1 || v108 <= 7 && ((1 << v108) & 0xD0) != 0 )
            goto LABEL_98;
LABEL_99:
          v36[9] = v50;
          return;
        }
LABEL_82:
        v50 = 0;
        if ( v43 != 1 )
          goto LABEL_99;
        goto LABEL_87;
      }
    }
    v44 = v28 || v27;
    v45 = (float)((float)(v32 * v20) + (float)(v31 * v21)) + (float)(v33 * v22);
    if ( v45 >= 0.0 && v34 <= 0.0 )
    {
      v42 = TaskByType;
      v38 = v110;
      if ( v106 <= 7 )
      {
        v35 = 1 << v106;
        if ( ((1 << v106) & 0xD0) != 0 )
        {
          v43 = v109;
          v46 = v42 == 0;
          if ( v42 )
            v46 = v29 == 0;
          if ( v46 )
            goto LABEL_25;
          v47 = HIDWORD(v107) | v107;
          if ( v107 )
            v47 = 1;
          if ( (v47 & v109) != 1 || v108 <= 7 && ((1 << v108) & 0xD0) != 0 )
          {
LABEL_25:
            v48 = v42;
            if ( v42 )
              v48 = 1;
            HIDWORD(v49) = v48 & v109;
            if ( HIDWORD(v49) == 1 )
            {
              LODWORD(v49) = a4;
              HIDWORD(v49) = a4;
              if ( a4 )
                HIDWORD(v49) = 1;
              if ( (HIDWORD(v49) & v44) == 0 )
              {
                v50 = 0;
                v51 = 1;
                goto LABEL_86;
              }
            }
            else
            {
              LODWORD(v49) = a4;
              if ( !a4 )
              {
                v50 = 0;
                goto LABEL_65;
              }
            }
            v58 = (CTask *)v49;
            v50 = 0;
            if ( CTask::IsGoToTask((CTask *)v49, (const CTask *)HIDWORD(v49)) )
              goto LABEL_68;
LABEL_65:
            v51 = v109;
            goto LABEL_86;
          }
          v64 = *(_DWORD *)(v42 + 16);
          v65 = *(_DWORD *)(v64 + 20);
          v66 = *((_DWORD *)*v36 + 5);
          v67 = (float *)(v65 + 48);
          if ( !v65 )
            v67 = (float *)(v64 + 4);
          v68 = (float *)(v66 + 48);
          if ( !v66 )
            v68 = (float *)((char *)*v36 + 4);
          v69 = *v68 - *v67;
          HIDWORD(v49) = HIDWORD(v107);
          v70 = v68[1] - v67[1];
          v71 = sqrtf((float)((float)(v69 * v69) + (float)(v70 * v70)) + 0.0);
          if ( HIDWORD(v107) )
          {
            *(_BYTE *)(HIDWORD(v107) + 92) |= 2u;
            v72 = v104;
          }
          else
          {
            v72 = v104;
            if ( (_DWORD)v107 )
              *(float *)(v107 + 24) = v71 + 0.1;
          }
          if ( *(float *)(v72 + 24) != (float)(v71 + 0.1) )
          {
            *(float *)(v72 + 24) = v71 + 0.1;
            v49 = (unsigned int)CTimer::m_snTimeInMilliseconds;
            *(_QWORD *)(v72 + 40) = (unsigned int)CTimer::m_snTimeInMilliseconds;
            *(_BYTE *)(v72 + 48) = 1;
          }
          v50 = 0;
          if ( v71 >= 8.0 )
          {
            v51 = 1;
          }
          else
          {
            *(float *)(v42 + 32) = v69;
            v51 = 1;
            *(float *)(v42 + 36) = v70;
            *(_DWORD *)(v42 + 40) = 0;
          }
LABEL_86:
          v78 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, HIDWORD(v49));
          CTaskSimple::CTaskSimple(v78);
          *(_WORD *)(v79 + 24) = 0;
          *(_DWORD *)(v79 + 20) = 0;
          *(_DWORD *)(v79 + 16) = 0;
          *(_DWORD *)(v79 + 12) = -1;
          *(_DWORD *)(v79 + 8) = 28;
          *(_DWORD *)v79 = &off_665794;
          v80 = *v36;
          v36[11] = (CPed *)v79;
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"CompPedCollPlayerResp",
            v80,
            (int)v38,
            2000,
            5,
            0,
            1,
            0.25,
            500,
            3,
            0);
          if ( !v51 )
            goto LABEL_99;
          goto LABEL_87;
        }
      }
      goto LABEL_62;
    }
    v38 = v110;
    v42 = TaskByType;
    if ( v34 <= 0.0 )
    {
LABEL_62:
      v59 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v35);
      CTaskSimple::CTaskSimple(v59);
      v50 = 0;
      *(_WORD *)(v60 + 24) = 0;
      *(_DWORD *)(v60 + 20) = 0;
      *(_DWORD *)(v60 + 16) = 0;
      *(_DWORD *)(v60 + 12) = -1;
      *(_DWORD *)(v60 + 8) = 28;
      *(_DWORD *)v60 = &off_665794;
      v61 = *v36;
      v36[11] = (CPed *)v60;
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CompPedCollPlayerResp",
        v61,
        (int)v38,
        2000,
        5,
        0,
        1,
        0.25,
        500,
        3,
        0);
      v43 = v109;
      if ( v109 )
        goto LABEL_87;
      goto LABEL_98;
    }
    v43 = v109;
    if ( v45 < 0.0 )
      goto LABEL_82;
    if ( v106 > 7 || (v35 = 1 << v106, ((1 << v106) & 0xD0) == 0) )
    {
      v73 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v35);
      CTaskSimple::CTaskSimple(v73);
      v50 = 0;
      *(_WORD *)(v74 + 24) = 0;
      *(_DWORD *)(v74 + 16) = 0;
      *(_DWORD *)(v74 + 20) = 0;
      *(_DWORD *)(v74 + 8) = 28;
      *(_DWORD *)(v74 + 12) = -1;
      *(_DWORD *)v74 = &off_665794;
      v75 = *v36;
      v36[11] = (CPed *)v74;
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CompPedCollPlayerResp",
        v75,
        (int)v110,
        2000,
        5,
        0,
        1,
        0.25,
        500,
        3,
        0);
      if ( v109 )
        goto LABEL_87;
LABEL_98:
      v83 = *((_DWORD *)v38 + 5);
      v84 = -*(float *)(v83 + 20);
      v111[1] = *(_DWORD *)(v83 + 16);
      v111[2] = 0;
      *(float *)v111 = v84;
      CVector::Normalise((CVector *)v111);
      v50 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&dword_1C, v85);
      CTaskComplexEvasiveStep::CTaskComplexEvasiveStep(v50, v38, (const CVector *)v111);
      goto LABEL_99;
    }
    v52 = v42 == 0;
    if ( v42 )
      v52 = v29 == 0;
    if ( !v52 )
    {
      v53 = HIDWORD(v107) | v107;
      if ( v107 )
        v53 = 1;
      if ( (v53 & v109) == 1 && (v108 > 7 || ((1 << v108) & 0xD0) == 0) )
      {
        v94 = *(_DWORD *)(v42 + 16);
        v95 = *(_DWORD *)(v94 + 20);
        v96 = *((_DWORD *)*v36 + 5);
        v97 = (float *)(v95 + 48);
        if ( !v95 )
          v97 = (float *)(v94 + 4);
        v98 = (float *)(v96 + 48);
        if ( !v96 )
          v98 = (float *)((char *)*v36 + 4);
        v99 = *v98 - *v97;
        HIDWORD(v49) = HIDWORD(v107);
        v100 = v98[1] - v97[1];
        v101 = sqrtf((float)((float)(v99 * v99) + (float)(v100 * v100)) + 0.0);
        if ( HIDWORD(v107) )
        {
          *(_BYTE *)(HIDWORD(v107) + 92) |= 2u;
          v102 = v104;
        }
        else
        {
          v102 = v104;
          if ( (_DWORD)v107 )
            *(float *)(v107 + 24) = v101 + 0.1;
        }
        if ( *(float *)(v102 + 24) != (float)(v101 + 0.1) )
        {
          *(float *)(v102 + 24) = v101 + 0.1;
          v49 = (unsigned int)CTimer::m_snTimeInMilliseconds;
          *(_QWORD *)(v102 + 40) = (unsigned int)CTimer::m_snTimeInMilliseconds;
          *(_BYTE *)(v102 + 48) = 1;
        }
        v50 = 0;
        if ( v101 >= 8.0 )
        {
          v51 = 1;
        }
        else
        {
          *(float *)(v42 + 32) = v99;
          v51 = 1;
          *(float *)(v42 + 36) = v100;
          *(_DWORD *)(v42 + 40) = 0;
        }
        goto LABEL_86;
      }
    }
    v54 = v42;
    if ( v42 )
      v54 = 1;
    HIDWORD(v49) = v54 & v109;
    if ( HIDWORD(v49) == 1 )
    {
      HIDWORD(v49) = a4;
      if ( a4 )
        HIDWORD(v49) = 1;
      if ( (HIDWORD(v49) & v44) == 0 )
      {
        v50 = 0;
        v51 = 1;
        goto LABEL_86;
      }
    }
    else if ( !a4 )
    {
      v50 = 0;
LABEL_85:
      v51 = v109;
      goto LABEL_86;
    }
    v58 = a4;
    v50 = 0;
    if ( CTask::IsGoToTask(a4, (const CTask *)HIDWORD(v49)) )
    {
LABEL_68:
      v111[0] = 0;
      CPedGeometryAnalyser::ComputeRouteRoundEntityBoundingBox(
        *v36,
        v38,
        (CTask *)((char *)v58 + 12),
        (const CVector *)v111,
        0,
        v103);
      v63 = (CTaskComplexFollowPointRoute *)CTask::operator new((CTask *)&off_3C, v62);
      v43 = v109;
      CTaskComplexFollowPointRoute::CTaskComplexFollowPointRoute(
        v63,
        4,
        (const CPointRoute *)v111,
        0,
        0.5,
        5.0,
        0,
        1,
        1);
      v51 = 0;
      v50 = (CTaskComplexEvasiveStep *)v49;
      goto LABEL_86;
    }
    goto LABEL_85;
  }
}


// ============================================================

// Address: 0x37df78
// Original: _ZN13CEventHandler37ComputePlayerCollisionWithPedResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePlayerCollisionWithPedResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePlayerCollisionWithPedResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  float *v4; // r10
  CPed *v5; // r5
  float *v6; // r0
  float *v7; // r2
  float *v8; // r3
  float *v9; // r6
  float v10; // s16
  float v11; // s20
  float v12; // s18
  float v13; // s26
  float v14; // s21
  float v15; // s22
  float v16; // s24
  float v17; // s19
  float v18; // s30
  float v19; // s17
  float v20; // s23
  float v21; // s28
  unsigned int v22; // r4
  unsigned int v23; // r6
  const CPed *v24; // r1
  CEntity *v25; // r2
  int ActiveTask; // r0
  int v27; // r0
  CTaskSimple *v28; // r0
  int v29; // r0
  CTaskComplexHitResponse *v30; // r11
  CPed **v31; // r5
  float v32; // s0
  float v33; // s2
  bool v34; // zf
  float v35; // s4
  float v36; // s6
  float v37; // s0
  float v38; // s2
  float v39; // s0
  unsigned int v40; // r1
  CTaskSimple *v41; // r0
  float *v42; // r2
  float v43; // s0
  float v44; // s4
  CTaskSimple *v45; // r0
  int v46; // r0
  CPed *v47; // r2
  CEntity *v48; // r2
  int v49; // r5
  unsigned int v50; // r1
  CTaskComplexHitResponse *v51; // r0
  int v52; // r1
  CPlayerPed *v53; // r6
  unsigned int v54; // r1
  CTaskSimple *v55; // r0
  int v56; // r0
  CPlayerPed *v57; // r0
  bool v58; // cc
  unsigned int v59; // r1
  int v60; // r9
  CTaskSimple *v61; // r0
  int v62; // r0
  CPed *v63; // r2
  unsigned int v64; // r1
  CTaskSimple *v65; // r0
  CTaskSimple *v66; // r0
  int v67; // r0
  CPed *v68; // r2
  CPlayerPed *v69; // r4
  CTaskSimple *v70; // r0
  int v71; // r0
  CPed *v72; // r2
  int v73; // r5
  unsigned int v74; // r1
  CTaskComplexFallAndGetUp *v75; // r0
  int v76; // r1
  CPlayerPed *v77; // [sp+20h] [bp-68h]

  v4 = (float *)*((_DWORD *)a2 + 4);
  if ( v4 )
  {
    v5 = *this;
    v6 = (float *)*((_DWORD *)v4 + 5);
    v7 = (float *)*((_DWORD *)v5 + 5);
    v8 = v6 + 12;
    if ( !v6 )
      v8 = v4 + 1;
    v9 = v7 + 12;
    v10 = *v8;
    v11 = v8[1];
    v12 = v8[2];
    if ( !v7 )
      v9 = (float *)((char *)v5 + 4);
    v13 = v6[4];
    v14 = v6[5];
    v15 = v6[6];
    v16 = *v9;
    v17 = v9[1];
    v18 = v9[2];
    v19 = v7[4];
    v20 = v7[5];
    v21 = v7[6];
    v22 = *((__int16 *)a2 + 22);
    v23 = *((__int16 *)a2 + 23);
    if ( CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)v4 + 272) + 4)) )
    {
      ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)v4 + 272) + 4));
      v27 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask);
      v24 = (const CPed *)(elf_hash_bucket + 661);
      if ( v27 == 913 )
      {
        v28 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, 0x391u);
        CTaskSimple::CTaskSimple(v28);
        v30 = 0;
        *(_WORD *)(v29 + 24) = 0;
        *(_DWORD *)(v29 + 16) = 0;
        *(_DWORD *)(v29 + 20) = 0;
        *(_DWORD *)(v29 + 8) = 28;
        *(_DWORD *)(v29 + 12) = -1;
        *(_DWORD *)v29 = &off_665794;
        v31 = this;
LABEL_16:
        v31[11] = (CPed *)v29;
LABEL_40:
        v31[9] = v30;
        return;
      }
    }
    v32 = v11 - v17;
    v33 = v10 - v16;
    v34 = (unsigned __int16)v22 == 4;
    v35 = v12 - v18;
    if ( (unsigned __int16)v22 == 4 )
      v34 = (unsigned __int16)v23 == 4;
    v36 = (float)(v33 * v13) + (float)(v32 * v14);
    v37 = (float)(v33 * v19) + (float)(v32 * v20);
    v38 = v36 + (float)(v35 * v15);
    v39 = v37 + (float)(v35 * v21);
    if ( v34 )
    {
      if ( v39 < 0.0 )
      {
        v53 = v5;
        v31 = this;
        v30 = 0;
        if ( v38 > 0.0 )
          goto LABEL_40;
        v31 = this;
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"CompPlayerCollPedResp",
          *this,
          (int)v4,
          2000,
          5,
          0,
          1,
          0.25,
          500,
          3,
          0);
        v55 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v54);
        CTaskSimple::CTaskSimple(v55);
        *(_WORD *)(v56 + 24) = 0;
        *(_DWORD *)(v56 + 8) = 28;
        *(_DWORD *)(v56 + 12) = -1;
        *(_DWORD *)(v56 + 16) = 0;
        *(_DWORD *)(v56 + 20) = 0;
        *(_DWORD *)v56 = &off_665794;
        this[11] = (CPed *)v56;
        v57 = v53;
LABEL_39:
        CPlayerPed::AnnoyPlayerPed(v57, 0);
        goto LABEL_40;
      }
      v31 = this;
      v30 = 0;
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CompPlayerCollPedResp",
        *this,
        (int)v4,
        2000,
        5,
        0,
        1,
        0.25,
        500,
        3,
        0);
      v41 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v40);
      CTaskSimple::CTaskSimple(v41);
    }
    else
    {
      if ( (v22 | 1) == 7 && v23 <= 7 && ((1 << v23) & 0xD0) != 0 )
      {
        if ( v39 < 0.0 || v38 > 0.0 )
        {
          if ( v39 >= 0.0 )
          {
            v66 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v24);
            CTaskSimple::CTaskSimple(v66);
            v30 = 0;
            *(_WORD *)(v67 + 24) = 0;
            *(_DWORD *)(v67 + 16) = 0;
            *(_DWORD *)(v67 + 20) = 0;
            *(_DWORD *)(v67 + 8) = 28;
            *(_DWORD *)(v67 + 12) = -1;
            *(_DWORD *)v67 = &off_665794;
            v31 = this;
            v68 = *this;
            this[11] = (CPed *)v67;
            IKChainManager_c::LookAt(
              (int)&g_ikChainMan,
              (int)"CompPlayerCollPedResp",
              v68,
              (int)v4,
              2000,
              5,
              0,
              1,
              0.25,
              500,
              3,
              0);
            goto LABEL_40;
          }
          v69 = v5;
          v31 = this;
          v30 = 0;
          if ( v38 > 0.0 )
            goto LABEL_40;
          v70 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v24);
          CTaskSimple::CTaskSimple(v70);
          *(_WORD *)(v71 + 24) = 0;
          *(_DWORD *)(v71 + 16) = 0;
          *(_DWORD *)(v71 + 20) = 0;
          *(_DWORD *)(v71 + 8) = 28;
          *(_DWORD *)(v71 + 12) = -1;
          v31 = this;
          *(_DWORD *)v71 = &off_665794;
          v72 = *this;
          this[11] = (CPed *)v71;
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"CompPlayerCollPedResp",
            v72,
            (int)v4,
            2000,
            5,
            0,
            1,
            0.25,
            500,
            3,
            0);
          v57 = v69;
          goto LABEL_39;
        }
        v77 = v5;
        v31 = this;
        if ( (unsigned __int16)v23 == 4
          || (v24 = *this, v42 = (float *)*((_DWORD *)*this + 360), v43 = v42[11], v43 <= 1.5)
          || (v44 = *(float *)(*((_DWORD *)v4 + 360) + 44), v44 > 1.5) && v43 <= v44 )
        {
          v45 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, (unsigned int)v24);
          CTaskSimple::CTaskSimple(v45);
          v30 = 0;
          *(_WORD *)(v46 + 24) = 0;
          *(_DWORD *)(v46 + 16) = 0;
          *(_DWORD *)(v46 + 20) = 0;
          *(_DWORD *)(v46 + 8) = 28;
          *(_DWORD *)(v46 + 12) = -1;
          *(_DWORD *)v46 = &off_665794;
          v47 = *this;
          this[11] = (CPed *)v46;
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"CompPlayerCollPedResp",
            v47,
            (int)v4,
            2000,
            5,
            0,
            1,
            0.25,
            500,
            3,
            0);
          if ( (unsigned __int16)v22 == 7 )
          {
            v49 = CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)v4, *this, v48);
            v51 = (CTaskComplexHitResponse *)CTask::operator new((CTask *)&word_10, v50);
            v52 = v49;
            v30 = v51;
            v31 = this;
            CTaskComplexHitResponse::CTaskComplexHitResponse(v51, v52);
          }
        }
        else
        {
          v73 = CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)v4, v24, (CEntity *)v42);
          v75 = (CTaskComplexFallAndGetUp *)CTask::operator new((CTask *)&off_18, v74);
          v76 = v73;
          v30 = v75;
          v31 = this;
          CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(v75, v76, 0);
        }
        goto LABEL_38;
      }
      v58 = (unsigned __int16)v22 > 1u;
      if ( (unsigned __int16)v22 <= 1u )
        v58 = v23 > 7;
      if ( !v58 && ((1 << v23) & 0xD0) != 0 && v38 <= 0.0 )
      {
        v77 = v5;
        v31 = this;
        v60 = CPedGeometryAnalyser::ComputeEntityHitSide((CPedGeometryAnalyser *)v4, *this, v25);
        v30 = 0;
        if ( (unsigned __int16)v23 != 4 )
        {
          v30 = (CTaskComplexHitResponse *)CTask::operator new((CTask *)&word_10, v59);
          CTaskComplexHitResponse::CTaskComplexHitResponse(v30, v60);
        }
        v61 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v59);
        CTaskSimple::CTaskSimple(v61);
        *(_WORD *)(v62 + 24) = 0;
        *(_DWORD *)(v62 + 16) = 0;
        *(_DWORD *)(v62 + 20) = 0;
        *(_DWORD *)(v62 + 8) = 28;
        *(_DWORD *)(v62 + 12) = -1;
        *(_DWORD *)v62 = &off_665794;
        v63 = *this;
        this[11] = (CPed *)v62;
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"CompPlayerCollPedResp",
          v63,
          (int)v4,
          2000,
          5,
          0,
          1,
          0.25,
          500,
          3,
          0);
LABEL_38:
        v57 = v77;
        goto LABEL_39;
      }
      v30 = 0;
      if ( v22 > 7 )
      {
        v31 = this;
        goto LABEL_40;
      }
      v31 = this;
      if ( ((1 << v22) & 0xD0) == 0 )
        goto LABEL_40;
      v30 = 0;
      if ( (unsigned __int16)v23 > 1u || v39 < 0.0 || (unsigned __int16)v22 != 7 )
        goto LABEL_40;
      v30 = 0;
      IKChainManager_c::LookAt(
        (int)&g_ikChainMan,
        (int)"CompPlayerCollPedResp",
        *this,
        (int)v4,
        1000,
        5,
        0,
        1,
        0.25,
        500,
        3,
        0);
      v65 = (CTaskSimple *)CTask::operator new((CTask *)&dword_1C, v64);
      CTaskSimple::CTaskSimple(v65);
    }
    *(_WORD *)(v29 + 24) = 0;
    *(_DWORD *)(v29 + 8) = 28;
    *(_DWORD *)(v29 + 12) = -1;
    *(_DWORD *)(v29 + 16) = 0;
    *(_DWORD *)(v29 + 20) = 0;
    *(_DWORD *)v29 = &off_665794;
    goto LABEL_16;
  }
}


// ============================================================

// Address: 0x37e514
// Original: _ZN13CEventHandler30ComputeObjectCollisionResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeObjectCollisionResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeObjectCollisionResponse(const CPed **this, CEntity **a2, CTask *a3, CTask *a4)
{
  int v4; // r9
  int IsGoToTask; // r0
  bool v9; // zf
  CEntity *v10; // r8
  unsigned int v11; // r1
  CTaskComplexWalkRoundObject *v12; // r0
  const CPed *v13; // r0

  if ( a4 )
  {
    IsGoToTask = CTask::IsGoToTask(a4, (const CTask *)a2);
    v9 = IsGoToTask == 0;
    if ( IsGoToTask )
    {
      v4 = *((__int16 *)a2 + 6);
      v9 = v4 == 1;
    }
    if ( !v9 )
    {
      v10 = a2[5];
      CEventObjectCollision::IsHeadOnCollision((CEventObjectCollision *)a2, *this);
      if ( v10 )
      {
        v12 = (CTaskComplexWalkRoundObject *)CTask::operator new((CTask *)&dword_54, v11);
        CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(v12, v4, (CTask *)((char *)a4 + 12), v10);
        this[9] = v13;
      }
    }
  }
}


// ============================================================

// Address: 0x37e564
// Original: _ZN13CEventHandler32ComputeBuildingCollisionResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeBuildingCollisionResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeBuildingCollisionResponse(const CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  CEntity *v4; // r6
  bool v7; // zf
  int IsHeadOnCollision; // r0
  int v11; // r5
  int v12; // r9
  const CTask *v13; // r1
  const CBuilding *v14; // r1
  const CTask *v15; // r1
  unsigned int v16; // r1
  CTaskComplexWalkRoundObject *v17; // r0
  const CPed *v18; // r0
  int v19; // s0
  const CTask *v20; // r1
  CTask *IsGoToTask; // r0
  const CPed *v22; // r1
  int v23; // s0
  _DWORD *v24; // r2
  const CVector *v25; // r3
  const CEntity *v26; // r10
  int v27; // r11
  int v28; // r5
  int v29; // r8
  bool v30; // zf
  int v31; // r1
  char *v32; // r0
  double v33; // d16
  int v34; // r0
  const CVector *v35; // r5
  CTaskComplexWalkRoundBuildingAttempt *v36; // r0
  bool v37; // r1
  double v38; // d16
  _BYTE *v39; // r6
  const CVector *v40; // r9
  CTaskComplexWalkRoundBuildingAttempt *v41; // r0
  int v42; // r1
  const CPed *v43; // r1
  bool v44; // r3
  CTaskComplexMoveBackAndJump *v45; // r0
  CTaskComplexWalkRoundBuildingAttempt *v46; // r0
  int CanPedJumpObstacle; // r1
  CTaskSimpleHitHead *v48; // r0
  unsigned int v49; // r1
  CTaskComplexJump *v50; // r0
  _BYTE **v51; // r0
  CTaskComplexWalkRoundBuildingAttempt *v52; // r0
  CEntity *v53; // r8
  const CPed *v54; // r1
  int v55; // r2
  float *v56; // r3
  float v57; // s16
  float v58; // s18
  CTaskSimpleClimb *v59; // r0
  signed __int8 v60; // r2
  CVector *v61; // [sp+0h] [bp-88h]
  CVector *v62; // [sp+0h] [bp-88h]
  bool v63; // [sp+4h] [bp-84h]
  const CVector *v64; // [sp+4h] [bp-84h]
  bool v65; // [sp+8h] [bp-80h]
  const CVector *v66; // [sp+24h] [bp-64h]
  __int64 v67; // [sp+28h] [bp-60h]
  int TaskByType; // [sp+30h] [bp-58h]
  unsigned __int8 v69; // [sp+37h] [bp-51h] BYREF
  float v70; // [sp+38h] [bp-50h] BYREF
  int v71; // [sp+3Ch] [bp-4Ch] BYREF
  int v72; // [sp+40h] [bp-48h]
  float v73; // [sp+44h] [bp-44h]
  double v74; // [sp+48h] [bp-40h] BYREF
  const CPed *v75; // [sp+50h] [bp-38h]

  v7 = a3 == 0;
  if ( a3 )
  {
    v4 = (CEntity *)*((_DWORD *)a2 + 5);
    v7 = v4 == 0;
  }
  if ( v7 )
    return;
  IsHeadOnCollision = CEventBuildingCollision::IsHeadOnCollision(a2, *this);
  v11 = *((__int16 *)a2 + 6);
  v12 = IsHeadOnCollision;
  if ( v11 == 1 )
    return;
  TaskByType = CPedIntelligence::FindTaskByType(*((CPedIntelligence **)*this + 272), 1000);
  HIDWORD(v67) = CPedIntelligence::FindTaskByType(*((CPedIntelligence **)*this + 272), 907);
  LODWORD(v67) = CPedIntelligence::FindTaskByType(*((CPedIntelligence **)*this + 272), 718);
  (*(void (__fastcall **)(CTask *))(*(_DWORD *)a3 + 20))(a3);
  CTaskCategories::ComputeTaskCategory(a3, v13);
  if ( CEventBuildingCollision::CanTreatBuildingAsObject(v4, v14) == 1 )
  {
    if ( !CTask::IsGoToTask(a4, v15) )
      return;
    v17 = (CTaskComplexWalkRoundObject *)CTask::operator new((CTask *)&dword_54, v16);
    CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(v17, v11, (CTask *)((char *)a4 + 12), v4);
    goto LABEL_50;
  }
  v19 = (unsigned __int16)rand();
  IsGoToTask = (CTask *)CTask::IsGoToTask(a4, v20);
  v22 = *this;
  v23 = (int)(float)((float)((float)v19 * 0.000015259) * 1024.0);
  if ( IsGoToTask )
    IsGoToTask = a4;
  v24 = (_DWORD *)(*((unsigned __int8 *)*this + 1156) << 31);
  if ( v24 )
  {
    v24 = &CBuildingPotentialCollisionScanner::ms_fNormalZThreshold;
    if ( *((float *)a2 + 8) > 0.707 )
      goto LABEL_47;
  }
  v25 = (CEvent *)((char *)a2 + 36);
  v26 = (CEvent *)((char *)a2 + 24);
  v27 = v11;
  if ( !IsGoToTask )
  {
    v28 = TaskByType;
    v30 = TaskByType == 0;
    if ( TaskByType )
    {
      v24 = *(_DWORD **)(TaskByType + 16);
      v30 = v24 == 0;
    }
    if ( v30 )
    {
      if ( v12 == 1 )
      {
        CanPedJumpObstacle = CPedGeometryAnalyser::CanPedJumpObstacle(*this, v4, v26, v25, v61);
        v18 = 0;
        if ( v27 >= 5 && !CanPedJumpObstacle )
        {
          v48 = (CTaskSimpleHitHead *)CTask::operator new((CTask *)&word_10, 0);
          CTaskSimpleHitHead::CTaskSimpleHitHead(v48);
        }
        goto LABEL_50;
      }
      goto LABEL_47;
    }
    goto LABEL_19;
  }
  v28 = TaskByType;
  if ( TaskByType )
  {
    v24 = *(_DWORD **)(TaskByType + 16);
    if ( !v24 )
    {
      v29 = 1;
      goto LABEL_29;
    }
LABEL_19:
    v31 = v24[5];
    v29 = 1;
    v32 = (char *)(v31 + 48);
    if ( !v31 )
      v32 = (char *)(v24 + 1);
    v33 = *(double *)v32;
    v22 = (const CPed *)*((_DWORD *)v32 + 2);
    v75 = v22;
    v74 = v33;
    if ( v12 != 1 )
      goto LABEL_30;
    goto LABEL_22;
  }
  v29 = 0;
LABEL_29:
  v38 = *(double *)((char *)IsGoToTask + 12);
  v75 = (const CPed *)*((_DWORD *)IsGoToTask + 5);
  v74 = v38;
  if ( v12 != 1 )
  {
LABEL_30:
    if ( v29 == 1 )
    {
      v39 = *(_BYTE **)(v28 + 16);
      v40 = v25;
      if ( v39 )
      {
LABEL_32:
        v72 = 0;
        v71 = 0;
        v73 = 0.0;
        v41 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, (unsigned int)v22);
        v62 = v40;
        v64 = v26;
        v65 = 0;
        v42 = v27;
LABEL_33:
        CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
          v41,
          v42,
          (CEntity *)v39,
          (const CVector *)&v71,
          v62,
          v64,
          v65);
LABEL_50:
        this[9] = v18;
        return;
      }
LABEL_39:
      v46 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, (unsigned int)v22);
      CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
        v46,
        v27,
        (const CVector *)&v74,
        v40,
        v26,
        0);
      goto LABEL_50;
    }
    if ( HIDWORD(v67) )
    {
      v40 = v25;
      v39 = *(_BYTE **)(HIDWORD(v67) + 12);
      if ( v39 )
        goto LABEL_32;
      goto LABEL_39;
    }
    v35 = v25;
    v36 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, (unsigned int)v22);
    v37 = 0;
LABEL_49:
    CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
      v36,
      v27,
      (const CVector *)&v74,
      v35,
      v26,
      v37);
    goto LABEL_50;
  }
LABEL_22:
  v34 = HIDWORD(v67);
  if ( HIDWORD(v67) )
    v34 = 1;
  if ( (v23 & 0xF) != 0xF && !(_DWORD)v67 && (v34 | v29) != 1 )
  {
    v35 = v25;
    v36 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, 0);
    v37 = 1;
    goto LABEL_49;
  }
  v66 = v25;
  if ( CPedGeometryAnalyser::CanPedJumpObstacle(*this, v4, v26, v25, v61) == 1 )
  {
    if ( v27 < 5 )
    {
      v50 = (CTaskComplexJump *)CTask::operator new((CTask *)&dword_14, (unsigned int)v43);
      CTaskComplexJump::CTaskComplexJump(v50, 0);
    }
    else
    {
      v45 = (CTaskComplexMoveBackAndJump *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)v43);
      CTaskComplexMoveBackAndJump::CTaskComplexMoveBackAndJump(v45);
    }
    goto LABEL_50;
  }
  if ( v29 == 1 )
  {
    v39 = *(_BYTE **)(TaskByType + 16);
    if ( !v39
      || CPedGeometryAnalyser::CanPedTargetPed(*this, *(CPed **)(TaskByType + 16), (CPed *)((char *)&stderr + 1), v44) == 1 )
    {
LABEL_47:
      v18 = 0;
      goto LABEL_50;
    }
    v71 = 0;
    v72 = 0;
    v73 = 0.0;
    v41 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, v49);
    v62 = v66;
    v64 = v26;
    v65 = 1;
LABEL_75:
    v42 = v27;
    goto LABEL_33;
  }
  if ( !v67 )
  {
    v52 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, (unsigned int)v43);
    CTaskComplexWalkRoundBuildingAttempt::CTaskComplexWalkRoundBuildingAttempt(
      v52,
      v27,
      (const CVector *)&v74,
      v66,
      v26,
      1);
    goto LABEL_50;
  }
  if ( HIDWORD(v67) )
  {
    v51 = (_BYTE **)(HIDWORD(v67) + 12);
  }
  else
  {
    v39 = *(_BYTE **)(v67 + 12);
    if ( !v39 )
      goto LABEL_61;
    v51 = (_BYTE **)(v39 + 1124);
  }
  v39 = *v51;
LABEL_61:
  if ( v39 )
  {
    if ( CTaskComplexGangFollower::ms_nUseClimbing )
    {
      if ( CPedGroups::IsInPlayersGroup(*this, v43) == 1 )
      {
        v53 = (CEntity *)CTaskSimpleClimb::TestForClimb(
                           *this,
                           (CPed *)&v71,
                           (CVector *)&v70,
                           (float *)&v69,
                           (unsigned __int8 *)&stderr + 1,
                           v63);
        if ( v53 )
        {
          v54 = *this;
          v55 = *((_DWORD *)*this + 5);
          v56 = (float *)(v55 + 48);
          v57 = CTaskSimpleClimb::ms_fMinForStretchGrab;
          if ( !v55 )
            v56 = (float *)((char *)v54 + 4);
          v58 = v73 - v56[2];
          v59 = (CTaskSimpleClimb *)CTask::operator new((CTask *)&word_30, (unsigned int)v54);
          v60 = 1;
          if ( v58 < v57 )
            v60 = 2;
          CTaskSimpleClimb::CTaskSimpleClimb(v59, v53, (const CVector *)&v71, v70, v69, v60, (bool)&stderr + 1);
          goto LABEL_50;
        }
      }
    }
    if ( (v39[58] & 7) == 3 )
    {
      if ( !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, *this) )
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"CompBldgCollResp",
          *this,
          (int)v39,
          3000,
          5,
          0,
          1,
          0.25,
          500,
          3,
          0);
      CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)*this + 272) + 4), 2);
    }
    v71 = 0;
    v72 = 0;
    v73 = 0.0;
    v41 = (CTaskComplexWalkRoundBuildingAttempt *)CTask::operator new((CTask *)&dword_4C, (unsigned int)v43);
    v62 = v66;
    v64 = v26;
    v65 = 1;
    goto LABEL_75;
  }
}


// ============================================================

// Address: 0x37e970
// Original: _ZN13CEventHandler28ComputeDraggedOutCarResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeDraggedOutCarResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeDraggedOutCarResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  __int64 v6; // kr00_8
  int v7; // r9
  int IsPlayer; // r0
  unsigned int v9; // r1
  CTaskComplexSmartFleeEntity *v10; // r0
  CPed *v11; // r0
  unsigned int v12; // r1
  int v13; // r5
  bool v14; // zf
  CTaskComplexLeaveCar *v15; // r8
  int v16; // r5
  CTaskComplexSequence *v17; // r0
  CTaskComplexSequence *v18; // r0
  unsigned int v19; // r1
  int v20; // r0
  int v21; // r3
  __int64 *v22; // r1
  float *v23; // r5
  __int64 v24; // r0
  CGeneral *v25; // r0
  float v26; // r1
  int v27; // r11
  unsigned int v28; // r1
  CTaskSimpleAchieveHeading *v29; // r5
  unsigned int v30; // r1
  int v31; // r5
  CTaskComplexSequence *v32; // r0
  CTaskComplexSequence *v33; // r8
  unsigned int v34; // r1
  int v35; // r0
  int v36; // r3
  __int64 *v37; // r1
  float *v38; // r5
  __int64 v39; // r0
  CGeneral *v40; // r0
  float v41; // r1
  int v42; // r11
  unsigned int v43; // r1
  CTaskSimpleAchieveHeading *v44; // r5
  unsigned int v45; // r1
  int v46; // r5
  CPed *v47; // r0
  CTaskComplexSmartFleeEntity *v48; // r0
  CTaskComplexEnterCarAsDriver *v49; // r0
  CTaskComplexDestroyCar *v50; // r0
  unsigned __int16 v51; // r11
  unsigned int v52; // r1
  CTaskComplexStealCar *v53; // r5
  CTaskComplexSequence *v54; // r10
  unsigned int v55; // r1
  int v56; // r3
  float *v57; // r5
  CGeneral *RadianAngleBetweenPoints; // r0
  float v59; // r1
  int v60; // r11
  unsigned int v61; // r1
  CTaskSimpleAchieveHeading *v62; // r5
  unsigned int v63; // r1
  int v64; // r5
  CTaskComplexStealCar *v65; // r0
  CTaskComplexDragPedFromCar *v66; // r5
  unsigned int v67; // r1
  CTaskComplexKillCriminal *v68; // r0
  CTaskComplexSequence *v69; // r5
  CTaskComplexSequence *v70; // r0
  unsigned __int16 v71; // r11
  unsigned int v72; // r1
  CTaskComplexKillPedOnFoot *v73; // r11
  unsigned int v74; // r1
  CTaskComplexEnterCarAsDriver *v75; // r0
  CTaskComplexStealCar *v76; // r5
  unsigned __int16 v77; // r11
  unsigned int v78; // r1
  CTaskComplexDragPedFromCar *v79; // r5
  unsigned int v80; // r1
  float v81; // [sp+0h] [bp-30h]
  CTaskComplexSequence *v82; // [sp+10h] [bp-20h]
  CTaskComplexSequence *v83; // [sp+10h] [bp-20h]

  v6 = *((_QWORD *)a2 + 2);
  v7 = *((unsigned __int8 *)a2 + 24);
  IsPlayer = CPed::IsPlayer(*this);
  if ( HIDWORD(v6) && !IsPlayer )
  {
    if ( *(_BYTE *)(*(_DWORD *)(HIDWORD(v6) + 904) + 222) == 15 )
    {
      v10 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v9);
      CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v10, (CEntity *)v6, 0, 60.0, 1000000, 1000, 1.0);
      this[9] = v11;
      return;
    }
    v12 = *(_DWORD *)(HIDWORD(v6) + 1124);
    v13 = *((__int16 *)a2 + 5);
    v14 = v12 == (_DWORD)*this;
    if ( (CPed *)v12 != *this )
    {
      v12 = *(_DWORD *)(HIDWORD(v6) + 1128);
      v14 = v12 == (_DWORD)*this;
    }
    if ( v14 )
    {
      v15 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v12);
      CTaskComplexLeaveCar::CTaskComplexLeaveCar(v15, (CVehicle *)HIDWORD(v6), 0, 0, 0, 1);
    }
    else
    {
      v15 = 0;
    }
    this[9] = 0;
    if ( v13 > 910 )
    {
      if ( v13 <= 1002 )
      {
        if ( v13 == 911 )
        {
          if ( !(_DWORD)v6 )
          {
            if ( *(_DWORD *)(HIDWORD(v6) + 1124) )
              goto LABEL_60;
            v65 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_20, v12);
            CTaskComplexStealCar::CTaskComplexStealCar(v65, (CVehicle *)HIDWORD(v6));
            goto LABEL_59;
          }
        }
        else
        {
          if ( v13 != 1000 )
            goto LABEL_60;
          if ( !(_DWORD)v6 )
          {
            v54 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v12);
            CTaskComplexSequence::CTaskComplexSequence(v54);
            this[9] = v54;
            if ( (rand() & 0x3FFu) <= 0x200 )
            {
              v64 = CTask::operator new((CTask *)&off_18, v55);
              v77 = rand();
              CTaskSimple::CTaskSimple((CTaskSimple *)v64);
              *(_WORD *)(v64 + 16) = 0;
              *(_DWORD *)(v64 + 8) = 0;
              *(_DWORD *)(v64 + 12) = 0;
              *(_DWORD *)v64 = &off_665760;
              *(_DWORD *)(v64 + 20) = (int)(float)((float)((float)v77 * 0.000015259) * 1000.0) + 500;
            }
            else
            {
              v56 = *((_DWORD *)*this + 5);
              v57 = (float *)(v56 + 48);
              if ( !v56 )
                v57 = (float *)((char *)*this + 4);
              RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                       (CGeneral *)0x1001700,
                                                       1.7709e22,
                                                       *v57,
                                                       v57[1],
                                                       v81);
              v60 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v59);
              v62 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v61);
              CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v62, *(float *)&v60, 0.5, 0.2);
              CTaskComplexSequence::AddTask(v54, v62);
              v64 = CTask::operator new((CTask *)&word_10, v63);
              CTaskSimpleShakeFist::CTaskSimpleShakeFist((CTaskSimpleShakeFist *)v64);
            }
            CTaskComplexSequence::AddTask(v54, (CTask *)v64);
            if ( v7 )
            {
              v76 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_20, v78);
              CTaskComplexStealCar::CTaskComplexStealCar(v76, (CVehicle *)HIDWORD(v6));
              goto LABEL_73;
            }
            v79 = (CTaskComplexDragPedFromCar *)CTask::operator new((CTask *)&dword_54, v78);
            CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(v79, 0, 0);
            CTaskComplexSequence::AddTask(v54, v79);
            v76 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_50, v80);
LABEL_72:
            CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v76, (CVehicle *)HIDWORD(v6), 0, 0);
LABEL_73:
            CTaskComplexSequence::AddTask(v54, v76);
            if ( !v15 )
              return;
LABEL_61:
            v69 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v12);
            CTaskComplexSequence::CTaskComplexSequence(v69);
            CTaskComplexSequence::AddTask(v70, v15);
            CTaskComplexSequence::AddTask(v69, this[9]);
            this[9] = v69;
            return;
          }
          v12 = *((unsigned __int8 *)*this + 1096);
          if ( v12 == 2
            || (v16 = *(char *)(v6 + 1820),
                CWeapon::IsTypeMelee((CPed *)((char *)*this + 28 * *((char *)*this + 1820) + 1444)) != 1)
            || CWeapon::IsTypeMelee((CWeapon *)(v6 + 28 * v16 + 1444)) )
          {
            v17 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v12);
            CTaskComplexSequence::CTaskComplexSequence(v17);
            v82 = v18;
            this[9] = v18;
            if ( (rand() & 0x3FFu) <= 0x200 )
            {
              v31 = CTask::operator new((CTask *)&off_18, v19);
              v71 = rand();
              CTaskSimple::CTaskSimple((CTaskSimple *)v31);
              *(_WORD *)(v31 + 16) = 0;
              *(_DWORD *)(v31 + 8) = 0;
              *(_DWORD *)(v31 + 12) = 0;
              *(_DWORD *)v31 = &off_665760;
              *(_DWORD *)(v31 + 20) = (int)(float)((float)((float)v71 * 0.000015259) * 1000.0) + 500;
              v32 = v82;
            }
            else
            {
              v20 = *(_DWORD *)(v6 + 20);
              v21 = *((_DWORD *)*this + 5);
              v22 = (__int64 *)(v20 + 48);
              if ( !v20 )
                v22 = (__int64 *)(v6 + 4);
              v23 = (float *)(v21 + 48);
              v24 = *v22;
              if ( !v21 )
                v23 = (float *)((char *)*this + 4);
              v25 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                  (CGeneral *)v24,
                                  *((float *)&v24 + 1),
                                  *v23,
                                  v23[1],
                                  v81);
              v27 = CGeneral::LimitRadianAngle(v25, v26);
              v29 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v28);
              CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v29, *(float *)&v27, 0.5, 0.2);
              CTaskComplexSequence::AddTask(v82, v29);
              v31 = CTask::operator new((CTask *)&word_10, v30);
              CTaskSimpleShakeFist::CTaskSimpleShakeFist((CTaskSimpleShakeFist *)v31);
              v32 = v82;
            }
            CTaskComplexSequence::AddTask(v32, (CTask *)v31);
            v73 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v72);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v73, (CPed *)v6, -1, 0, 0, 0, 1);
            v54 = v82;
            CTaskComplexSequence::AddTask(v82, v73);
            if ( *this )
              CPed::Say(*this, 0x78u, 0, 1.0, 0, 0, 0);
            v75 = (CTaskComplexEnterCarAsDriver *)CTask::operator new((CTask *)&dword_50, v74);
            v76 = v75;
            if ( v7 )
            {
              CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v75, (CVehicle *)HIDWORD(v6));
              goto LABEL_73;
            }
            goto LABEL_72;
          }
        }
        v48 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v12);
        CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v48, (CEntity *)v6, 0, 60.0, 1000000, 1000, 1.0);
LABEL_59:
        this[9] = v47;
        goto LABEL_60;
      }
      if ( v13 == 1003 )
      {
        v50 = (CTaskComplexDestroyCar *)CTask::operator new((CTask *)&dword_20, v12);
        CTaskComplexDestroyCar::CTaskComplexDestroyCar(v50, (CVehicle *)HIDWORD(v6), 0, 0, 0);
        goto LABEL_59;
      }
      if ( v13 != 1105 || !(_DWORD)v6 )
      {
LABEL_60:
        if ( !v15 )
          return;
        goto LABEL_61;
      }
      if ( !CPed::IsPlayer((CPed *)v6) )
      {
        v68 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v12);
        CTaskComplexKillCriminal::CTaskComplexKillCriminal(v68, (CPed *)v6, 0);
        goto LABEL_59;
      }
LABEL_37:
      v47 = 0;
      goto LABEL_59;
    }
    if ( v13 == 200 )
      goto LABEL_37;
    if ( v13 == 700 )
    {
      v49 = (CTaskComplexEnterCarAsDriver *)CTask::operator new((CTask *)&dword_50, v12);
      if ( v7 )
        CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v49, (CVehicle *)HIDWORD(v6));
      else
        CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v49, (CVehicle *)HIDWORD(v6), 0, 0);
      goto LABEL_59;
    }
    if ( v13 != 702 )
      goto LABEL_60;
    v83 = v15;
    v33 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v12);
    CTaskComplexSequence::CTaskComplexSequence(v33);
    this[9] = v33;
    if ( (rand() & 0x3FFu) <= 0x200 )
    {
      v46 = CTask::operator new((CTask *)&off_18, v34);
      v51 = rand();
      CTaskSimple::CTaskSimple((CTaskSimple *)v46);
      *(_WORD *)(v46 + 16) = 0;
      *(_DWORD *)(v46 + 8) = 0;
      *(_DWORD *)(v46 + 12) = 0;
      *(_DWORD *)v46 = &off_665760;
      *(_DWORD *)(v46 + 20) = (int)(float)((float)((float)v51 * 0.000015259) * 1000.0) + 500;
    }
    else
    {
      v35 = *(_DWORD *)(v6 + 20);
      v36 = *((_DWORD *)*this + 5);
      v37 = (__int64 *)(v35 + 48);
      if ( !v35 )
        v37 = (__int64 *)(v6 + 4);
      v38 = (float *)(v36 + 48);
      v39 = *v37;
      if ( !v36 )
        v38 = (float *)((char *)*this + 4);
      v40 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints((CGeneral *)v39, *((float *)&v39 + 1), *v38, v38[1], v81);
      v42 = CGeneral::LimitRadianAngle(v40, v41);
      v44 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v43);
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v44, *(float *)&v42, 0.5, 0.2);
      CTaskComplexSequence::AddTask(v33, v44);
      v46 = CTask::operator new((CTask *)&word_10, v45);
      CTaskSimpleShakeFist::CTaskSimpleShakeFist((CTaskSimpleShakeFist *)v46);
    }
    CTaskComplexSequence::AddTask(v33, (CTask *)v46);
    if ( *this )
      CPed::Say(*this, 0x78u, 0, 1.0, 0, 0, 0);
    if ( v7 )
    {
      v53 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_20, v52);
      CTaskComplexStealCar::CTaskComplexStealCar(v53, (CVehicle *)HIDWORD(v6));
    }
    else
    {
      v66 = (CTaskComplexDragPedFromCar *)CTask::operator new((CTask *)&dword_54, v52);
      CTaskComplexDragPedFromCar::CTaskComplexDragPedFromCar(v66, (CPed *)v6, 0);
      CTaskComplexSequence::AddTask(v33, v66);
      v53 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_50, v67);
      CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v53, (CVehicle *)HIDWORD(v6), 0, 0);
    }
    CTaskComplexSequence::AddTask(v33, v53);
    v15 = v83;
    if ( v83 )
      goto LABEL_61;
  }
}


// ============================================================

// Address: 0x37efcc
// Original: _ZN13CEventHandler21ComputeDamageResponseEP6CEventP5CTaskS3_S3_
// Demangled: CEventHandler::ComputeDamageResponse(CEvent *,CTask *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeDamageResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4, CTask *a5)
{
  int v9; // r9
  int v10; // r4
  int v11; // r2
  CTask *v12; // r3
  unsigned int v13; // r4
  unsigned int v14; // r1
  bool v15; // zf
  int v16; // r0
  bool v17; // zf
  int v18; // r0
  bool v19; // zf
  int v20; // r4
  int v21; // r1
  int v22; // r2
  double v23; // d16
  int v24; // r0
  int v25; // r1
  int v26; // r0
  CPed *v27; // r0
  bool v28; // zf
  CEventDamage *v29; // r1
  int v30; // r4
  bool v31; // zf
  bool v32; // zf
  int v33; // r1
  int v34; // r4
  int v35; // r0
  bool v36; // zf
  int ActiveTask; // r0
  int v38; // r0
  int v39; // r5
  CPed *v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r1
  int FirstAssociation; // r0
  unsigned int v46; // r1
  int v47; // r0
  int v48; // r0
  char v49; // r1
  __int64 v50; // r2
  int v51; // r1
  _BOOL4 v52; // r4
  int v53; // r11
  _BOOL4 v54; // r6
  int IsPlayer; // r0
  bool v56; // zf
  bool *v57; // r3
  _BOOL4 v58; // r4
  int v59; // r0
  int v60; // r0
  int v61; // r0
  int v62; // r0
  int v63; // r0
  CTaskSimpleChoking *v64; // r0
  int Up; // r0
  CPed *v66; // r0
  bool v67; // zf
  CEventDamage *v68; // r1
  int IsSameEventForAI; // r6
  CEntity *v70; // r0
  unsigned int v71; // r2
  CAnimBlendAssociation *Association; // r0
  int v73; // [sp+18h] [bp-60h]
  bool v74[4]; // [sp+1Ch] [bp-5Ch] BYREF
  int v75; // [sp+20h] [bp-58h]
  int v76; // [sp+24h] [bp-54h]
  double v77; // [sp+30h] [bp-48h] BYREF
  int v78; // [sp+38h] [bp-40h]
  int v79; // [sp+40h] [bp-38h] BYREF
  int v80[12]; // [sp+47h] [bp-31h] BYREF

  if ( CPed::IsAlive(*this) != 1 )
    return;
  v9 = *((_DWORD *)a2 + 4);
  if ( *((_BYTE *)a2 + 9) )
  {
    v10 = *((_DWORD *)a2 + 6);
    CEventDamage::ProcessDamage(a2, *this);
    LOBYTE(v80[0]) = 0;
    v79 = 0;
    v73 = v10;
    v13 = v10 - 49;
    if ( v13 <= 1 )
      CInterestingEvents::Add();
    v14 = (unsigned int)*this;
    v16 = *((_DWORD *)*this + 289) & 0x100;
    v15 = v16 == 0;
    if ( v16 )
    {
      v11 = *(_DWORD *)(v14 + 1424);
      v15 = v11 == 0;
    }
    if ( v15 )
      goto LABEL_9;
    v12 = *(CTask **)(v11 + 1440);
    v31 = v12 == (CTask *)byte_9;
    if ( v12 != (CTask *)byte_9 )
    {
      v11 = *(_DWORD *)(v11 + 1444);
      v31 = v11 == 2;
    }
    if ( v31 )
    {
      if ( (*((_BYTE *)a2 + 33) & 2) != 0 )
        goto LABEL_48;
      v32 = *((_BYTE *)a2 + 60) == 0;
      if ( *((_BYTE *)a2 + 60) )
        v32 = *((_BYTE *)a2 + 9) == 0;
      if ( !v32 )
        goto LABEL_48;
      if ( v9 && (*(_BYTE *)(v9 + 58) & 7) == 3 )
        CEventHandler::ComputePersonalityResponseToDamage((CEventHandler *)this, a2, (CEntity *)v9);
    }
    else
    {
LABEL_9:
      v11 = *((unsigned __int8 *)a2 + 60);
      v17 = v11 == 0;
      if ( *((_BYTE *)a2 + 60) )
      {
        v11 = *((unsigned __int8 *)a2 + 9);
        v17 = v11 == 0;
      }
      if ( !v17 || (v11 = v14 + 1348, *(float *)(v14 + 1348) < 1.0) )
      {
        if ( !v16 )
          goto LABEL_19;
LABEL_15:
        v18 = *(_DWORD *)(v14 + 1424);
        if ( !v18 )
          goto LABEL_19;
        v14 = *(_DWORD *)(v18 + 1440);
        v19 = v14 == 9;
        if ( v14 != 9 )
          v19 = *(_DWORD *)(v18 + 1444) == 2;
        if ( !v19 )
        {
LABEL_19:
          if ( (unsigned int)(*((_DWORD *)a2 + 10) - 191) > 1 )
            goto LABEL_114;
          if ( a4 )
          {
            if ( (*(int (__fastcall **)(CTask *))(*(_DWORD *)a4 + 20))(a4) == 207 )
            {
              if ( *((_DWORD *)a2 + 6) == 54 && (float)(*((float *)a2 + 13) + *((float *)a2 + 14)) > 20.0 )
              {
                *(_DWORD *)v74 = 0;
                v75 = 0;
                v76 = 0x40000000;
                v20 = 10;
                do
                {
                  v21 = *((_DWORD *)*this + 5);
                  v22 = v21 + 48;
                  if ( !v21 )
                    v22 = (int)*this + 4;
                  v23 = *(double *)v22;
                  v78 = *(_DWORD *)(v22 + 8);
                  v77 = v23;
                  *(float *)&v77 = *(float *)&v23 + (float)((float)((float)rand() * 4.6566e-10) + -0.5);
                  *((float *)&v77 + 1) = *((float *)&v77 + 1) + (float)((float)((float)rand() * 4.6566e-10) + -0.5);
                  Fx_c::AddBlood((Fx_c *)&g_fx, (CVector *)&v77, (CVector *)v74, 10, *((float *)*this + 76));
                  --v20;
                }
                while ( v20 );
              }
              v24 = *((_DWORD *)a4 + 5);
              if ( v24
                && *(float *)(v24 + 24) > 0.5
                && *(float *)(v24 + 28) >= 0.0
                && *(float *)(v24 + 32) < *(float *)(*(_DWORD *)(v24 + 20) + 16) )
              {
                v25 = *(__int16 *)(v24 + 14);
                v26 = *(__int16 *)(v24 + 44);
                *((_DWORD *)a2 + 9) = v25;
                *((_DWORD *)a2 + 10) = v26;
                *(_QWORD *)((char *)a2 + 44) = 0x3F80000040800000LL;
                goto LABEL_102;
              }
              if ( *((_BYTE *)a4 + 8) )
                goto LABEL_87;
            }
            else if ( (*(int (__fastcall **)(CTask *))(*(_DWORD *)a4 + 20))(a4) == 205 )
            {
              v42 = *((_DWORD *)a4 + 3);
              if ( v42 && (float)(*(float *)(v42 + 32) / *(float *)(*(_DWORD *)(v42 + 20) + 16)) < 0.5 )
              {
                v43 = *(unsigned __int16 *)(v42 + 44);
                *((_DWORD *)a2 + 9) = 0;
                if ( v43 == 115 )
                {
LABEL_88:
                  v44 = 39;
                  goto LABEL_89;
                }
LABEL_85:
                v44 = 36;
LABEL_89:
                *((_DWORD *)a2 + 10) = v44;
                *((_DWORD *)a2 + 11) = 1082130432;
                *((_DWORD *)a2 + 12) = 1065353216;
LABEL_104:
                v51 = *((_DWORD *)a2 + 6);
                v52 = v51 != 38;
                v53 = 0;
                v54 = (unsigned int)(v51 - 22) > 0xB;
                IsPlayer = CPed::IsPlayer(*this);
                if ( !v9 )
                  goto LABEL_117;
                v56 = IsPlayer == 0;
                if ( !IsPlayer )
                  v56 = !v52 || !v54;
                if ( !v56 )
                {
LABEL_117:
                  if ( a3 )
                  {
LABEL_118:
                    v59 = (*(int (__fastcall **)(CTask *))(*(_DWORD *)a3 + 20))(a3);
                    v14 = 1027;
                    v58 = 0;
                    if ( v59 == 1027 )
                      v58 = *((_BYTE *)a3 + 8) == 0;
                    goto LABEL_120;
                  }
LABEL_115:
                  v58 = 0;
LABEL_120:
                  v60 = CTask::operator new((CTask *)&word_28, v14);
                  this[9] = (CPed *)CTaskComplexDie::CTaskComplexDie(
                                      v60,
                                      v73,
                                      *((_DWORD *)a2 + 9),
                                      *((_DWORD *)a2 + 10),
                                      *((float *)a2 + 11),
                                      *((float *)a2 + 12),
                                      v58,
                                      v53,
                                      v79,
                                      LOBYTE(v80[0]));
                  CInterestingEvents::Add();
                  v61 = *(_DWORD *)(*((_DWORD *)*this + 272) + 4);
                  if ( v61
                    && ((*(int (__fastcall **)(int))(*(_DWORD *)v61 + 20))(v61) != 263
                     || (unsigned int)(v73 - 17) > 0x19
                     || ((1 << (v73 - 17)) & 0x3000001) == 0) )
                  {
                    CPedIntelligence::AddTaskPhysResponse(*((CPedIntelligence **)*this + 272), 0, 0);
                  }
                  v74[0] = 0;
                  CEventDamage::ComputeHeadShot(a2, v74);
                  if ( v9 )
                    CEventHandler::RegisterKill((int)*this, (CPed *)v9);
                  return;
                }
                if ( (*(_BYTE *)(v9 + 58) & 7) != 3 )
                {
                  v53 = 0;
                  goto LABEL_117;
                }
                if ( CPed::IsPlayer((CPed *)v9) || *(_BYTE *)(v9 + 1096) == 2 )
                {
                  v53 = CTaskComplexFallToDeath::CalcFall(*this, (CPed *)&v79, v80, v57);
                  if ( a3 )
                    goto LABEL_118;
                  goto LABEL_115;
                }
LABEL_114:
                v53 = 0;
                if ( a3 )
                  goto LABEL_118;
                goto LABEL_115;
              }
              if ( !*((_BYTE *)a4 + 8) )
              {
LABEL_87:
                FirstAssociation = RpAnimBlendClumpGetFirstAssociation();
                *((_DWORD *)a2 + 9) = 0;
                if ( FirstAssociation )
                  goto LABEL_88;
                goto LABEL_85;
              }
            }
          }
          v26 = *((_DWORD *)a2 + 10);
LABEL_102:
          if ( (unsigned int)(v26 - 191) <= 1 )
            CEventDamage::ComputeDeathAnim(a2, *this, 0);
          goto LABEL_104;
        }
LABEL_48:
        CEventHandler::ComputeKnockOffBikeResponse((CEventHandler *)this, a2, (CTask *)v11, v12);
        return;
      }
      if ( v16 )
      {
        v11 = *((unsigned __int8 *)a2 + 33) << 30;
        if ( (*((_BYTE *)a2 + 33) & 2) != 0 )
          goto LABEL_15;
      }
      if ( v9 && v73 <= 46 )
      {
        if ( !v16 )
        {
          if ( (*(_BYTE *)(v9 + 58) & 7) != 3 )
            v9 = 0;
          if ( v9 )
          {
            if ( CTaskManager::GetActiveTask((CTaskManager *)(*(int *)((char *)&elf_hash_bucket[209] + v9) + 4)) )
            {
              ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*(int *)((char *)&elf_hash_bucket[209] + v9) + 4));
              v38 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask);
              v14 = 1027;
              if ( v38 == 1027 )
              {
                v39 = CTask::operator new((CTask *)&dword_20, 0x403u);
                CTaskManager::GetActiveTask((CTaskManager *)(*(int *)((char *)&elf_hash_bucket[209] + v9) + 4));
                CTaskSimpleStealthKill::CTaskSimpleStealthKill();
                v40 = *this;
                this[8] = (CPed *)v39;
                CPed::SetPedState(v40);
                return;
              }
            }
          }
          if ( *((_DWORD *)a2 + 10) == 191 )
            CEventDamage::ComputeDamageAnim(a2, *this, 0);
          if ( (unsigned int)(v73 - 17) > 0x19
            || (v14 = 50331649, ((1 << (v73 - 17)) & 0x3000001) == 0)
            || CPedIntelligence::GetTaskUseGun(*(CPedIntelligence **)((char *)&elf_hash_bucket[209] + v9))
            && *(_BYTE *)(CPedIntelligence::GetTaskUseGun(*(CPedIntelligence **)((char *)&elf_hash_bucket[209] + v9))
                        + 16) == 5 )
          {
            if ( (*((_BYTE *)a2 + 33) & 2) == 0 )
            {
              if ( (unsigned int)(*((_DWORD *)a2 + 10) - 191) >= 2 )
              {
                if ( (*(_BYTE *)(CAnimManager::GetAnimAssociation() + 11) & 4) != 0 )
                {
                  if ( (*((_BYTE *)a2 + 33) & 4) == 0 )
                  {
                    v71 = *((_DWORD *)a2 + 10);
                    if ( (v71 & 0xFFFFFFFC) == 0x1C )
                    {
                      Association = (CAnimBlendAssociation *)RpAnimBlendClumpGetAssociation();
                      if ( !Association )
                        Association = (CAnimBlendAssociation *)CAnimManager::AddAnimation(
                                                                 *((_DWORD *)*this + 6),
                                                                 *((_DWORD *)a2 + 9),
                                                                 *((_DWORD *)a2 + 10));
                      *((_DWORD *)Association + 6) = 0;
                      *((_DWORD *)Association + 7) = *((_DWORD *)a2 + 11);
                    }
                    else
                    {
                      Association = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(
                                                               *((_DWORD *)*this + 6),
                                                               *((_DWORD *)a2 + 9),
                                                               v71);
                    }
                    *((_DWORD *)Association + 9) = *((_DWORD *)a2 + 12);
                    CAnimBlendAssociation::SetCurrentTime(Association, 0.0);
                    *((_BYTE *)a2 + 33) |= 4u;
                  }
                }
                else
                {
                  v47 = CTask::operator new((CTask *)&word_28, v46);
                  v48 = CTaskSimpleBeHit::CTaskSimpleBeHit(
                          v47,
                          v9,
                          *((_DWORD *)a2 + 7),
                          *((unsigned __int8 *)a2 + 32),
                          (int)(float)(*((float *)a2 + 13) + *((float *)a2 + 14)));
                  this[8] = (CPed *)v48;
                  v49 = *((_BYTE *)a2 + 33);
                  v50 = *(_QWORD *)((char *)a2 + 36);
                  *(_DWORD *)(v48 + 16) = HIDWORD(v50);
                  *(_DWORD *)(v48 + 20) = v50;
                  *(_BYTE *)(v48 + 13) = (v49 & 4) != 0;
                }
              }
              goto LABEL_134;
            }
            CTask::operator new((CTask *)&off_18, v14);
            Up = CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
            goto LABEL_133;
          }
          v62 = *(_DWORD *)(*((_DWORD *)*this + 272) + 4);
          if ( !v62 || (v63 = (*(int (__fastcall **)(int))(*(_DWORD *)v62 + 20))(v62), v14 = 263, v63 != 263) )
          {
            v64 = (CTaskSimpleChoking *)CTask::operator new((CTask *)&dword_1C, v14);
            CTaskSimpleChoking::CTaskSimpleChoking(v64, (CPed *)v9, v73 == 17);
LABEL_133:
            this[8] = (CPed *)Up;
            goto LABEL_134;
          }
          CTaskSimpleChoking::UpdateChoke(*(CEntity ***)(*((_DWORD *)*this + 272) + 4), *this, (CPed *)v9, v73 == 17);
        }
LABEL_134:
        v66 = this[3];
        v67 = v66 == 0;
        if ( !v66 )
        {
          v66 = this[2];
          v67 = v66 == 0;
        }
        if ( v67 || (*(int (__fastcall **)(CPed *))(*(_DWORD *)v66 + 8))(v66) != 9 )
        {
          IsSameEventForAI = 0;
        }
        else
        {
          v68 = this[3];
          if ( !v68 )
            v68 = this[2];
          IsSameEventForAI = CEventDamage::IsSameEventForAI(a2, v68);
        }
        if ( !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)*this + 272) + 4), 1006)
          && !(CPed::IsPlayer(*this) | IsSameEventForAI)
          && (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 44))(a2)
          && (*(_BYTE *)((*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 44))(a2) + 58) & 7) == 3 )
        {
          v70 = (CEntity *)(*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 44))(a2);
          CEventHandler::ComputePersonalityResponseToDamage((CEventHandler *)this, a2, v70);
        }
        return;
      }
      if ( v9 && !v16 && (unsigned int)(*((_DWORD *)a2 + 10) - 191) >= 2 && v13 <= 5 && ((1 << v13) & 0x23) != 0 )
      {
        CTask::operator new((CTask *)&off_18, v14);
        this[8] = (CPed *)CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
        v41 = *(_BYTE *)(v9 + 58) & 7;
        if ( v41 == 3 )
        {
          if ( !(*(unsigned __int8 *)(v9 + 1157) << 31) )
            return;
          v9 = *(_DWORD *)(v9 + 1424);
        }
        else if ( v41 != 2 )
        {
          return;
        }
        if ( v9 )
        {
          CEventGotKnockedOverByCar::CEventGotKnockedOverByCar((CEventGotKnockedOverByCar *)v74, (CVehicle *)v9);
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)*this + 272) + 104), (CEvent *)v74, 0);
          CEventGotKnockedOverByCar::~CEventGotKnockedOverByCar((CEventGotKnockedOverByCar *)v74);
        }
      }
    }
  }
  else
  {
    v27 = this[3];
    v28 = v27 == 0;
    if ( !v27 )
    {
      v27 = this[2];
      v28 = v27 == 0;
    }
    if ( v28 || (*(int (__fastcall **)(CPed *))(*(_DWORD *)v27 + 8))(v27) != 9 )
    {
      v30 = 1;
    }
    else
    {
      v29 = this[3];
      if ( !v29 )
        v29 = this[2];
      v30 = CEventDamage::IsSameEventForAI(a2, v29) ^ 1;
    }
    if ( !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)*this + 272) + 4), 1006) )
    {
      v33 = v9;
      if ( v9 )
        v33 = 1;
      v34 = v30 & v33;
      v35 = CPed::IsPlayer(*this);
      if ( v34 == 1 )
      {
        v36 = v35 == 0;
        if ( !v35 )
          v36 = (*(_BYTE *)(v9 + 58) & 7) == 3;
        if ( v36 )
          CEventHandler::ComputePersonalityResponseToDamage((CEventHandler *)this, a2, (CEntity *)v9);
      }
    }
  }
}


// ============================================================

// Address: 0x37f7dc
// Original: _ZN13CEventHandler20ComputeDeathResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeDeathResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeDeathResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  char v5; // r5
  int v6; // r6
  CTaskSimpleDead *v7; // r0
  int v8; // r0

  v5 = *((_BYTE *)a2 + 9);
  v6 = *((_DWORD *)a2 + 3);
  v7 = (CTaskSimpleDead *)CTask::operator new((CTask *)&word_10, (unsigned int)a2);
  CTaskSimpleDead::CTaskSimpleDead(v7, v6, v5);
  *((_DWORD *)this + 9) = v8;
}


// ============================================================

// Address: 0x37f800
// Original: _ZN13CEventHandler22ComputeDeadPedResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeDeadPedResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeDeadPedResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  _DWORD *v6; // r5
  CPed *v7; // r0
  int v8; // r1
  int v9; // r2
  unsigned __int64 *v10; // r3
  unsigned __int64 *v11; // r1
  float32x2_t v12; // d8
  float32x2_t v13; // d9
  unsigned int v14; // r1
  float32x2_t v15; // d16
  unsigned __int64 v16; // d0
  int v17; // r0
  CTaskSimpleDuck *v18; // r0
  CPed *v19; // r0
  CTaskComplexSmartFleeEntity *v20; // r0
  CTaskComplexInvestigateDeadPed *v21; // r0

  v6 = (_DWORD *)*((_DWORD *)a2 + 4);
  if ( v6 )
  {
    v7 = *this;
    v8 = v6[5];
    v9 = *((_DWORD *)*this + 5);
    v10 = (unsigned __int64 *)(v8 + 48);
    if ( !v8 )
      v10 = (unsigned __int64 *)(v6 + 1);
    v11 = (unsigned __int64 *)(v9 + 48);
    v12.n64_u64[0] = *v10;
    if ( !v9 )
      v11 = (unsigned __int64 *)((char *)v7 + 4);
    v13.n64_u64[0] = *v11;
    if ( CPed::IsPlayer(v7) == 1 )
    {
      v15.n64_u64[0] = vsub_f32(v13, v12).n64_u64[0];
      v16 = vmul_f32(v15, v15).n64_u64[0];
      if ( (float)((float)(*(float *)&v16 + *((float *)&v16 + 1)) + 0.0) < 0.5625
        && !CPedIntelligence::GetTaskFighting(*((CPedIntelligence **)*this + 272))
        && !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, *this) )
      {
        switch ( *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) )
        {
          case 7:
          case 8:
          case 0x10:
          case 0x22:
          case 0x2D:
          case 0x2E:
          case 0x33:
            return;
          default:
            if ( !CCam::GetWeaponFirstPersonOn((CCam *)((char *)&TheCamera + 528 * (unsigned __int8)byte_951FFF + 368)) )
              IKChainManager_c::LookAt(
                (int)&g_ikChainMan,
                (int)"CompDeadPedResp",
                *this,
                (int)v6,
                500,
                5,
                0,
                1,
                0.25,
                500,
                3,
                0);
            break;
        }
      }
    }
    else
    {
      v17 = *((__int16 *)a2 + 5);
      if ( v17 >= 600 )
      {
        if ( v17 == 600 )
        {
          v21 = (CTaskComplexInvestigateDeadPed *)CTask::operator new((CTask *)&off_3C, v14);
          CTaskComplexInvestigateDeadPed::CTaskComplexInvestigateDeadPed(v21, (CPed *)v6);
        }
        else
        {
          if ( v17 != 911 )
            return;
          v20 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v20, (CEntity *)v6, 1, 60.0, 1000000, 1000, 1.0);
        }
      }
      else if ( v17 == 200 )
      {
        v19 = 0;
      }
      else
      {
        if ( v17 != 427 )
          return;
        v18 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, 0x1ABu);
        CTaskSimpleDuck::CTaskSimpleDuck(v18, 0, 0xFFFFu, -1);
      }
      this[9] = v19;
    }
  }
}


// ============================================================

// Address: 0x37f9f4
// Original: _ZN13CEventHandler40ComputeVehiclePotentialCollisionResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehiclePotentialCollisionResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeVehiclePotentialCollisionResponse(
        CPedGeometryAnalyser **this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  int v4; // r5
  CPedGeometryAnalyser *v6; // r0
  int v7; // r1
  char *v8; // r3
  float32x2_t v9; // d9
  int v10; // r4
  int v11; // r6
  float v12; // s22
  int v13; // r2
  float v14; // s26
  float32x2_t v15; // d12
  float v16; // s28
  int v17; // r1
  int v18; // r2
  CVector *v19; // r3
  float *v20; // r3
  float *v21; // r0
  float v22; // s6
  float v23; // s8
  float v24; // s10
  float v25; // s17
  float v26; // s4
  float v27; // s27
  float v28; // s23
  CPed *v29; // r0
  float v30; // s0
  int v31; // r1
  float *v32; // r4
  float v33; // s20
  float v34; // s31
  float v35; // s29
  float v36; // s16
  float v37; // s21
  float v38; // s0
  CPlayerPed *v39; // r6
  unsigned int v40; // r0
  CTaskSimpleShakeFist *v41; // r0
  CPedGeometryAnalyser *v42; // r0
  float v43; // s2
  unsigned int v44; // r1
  float v45; // s0
  float v46; // s6
  float v47; // s4
  float v48; // s8
  float v49; // s2
  int v50; // r1
  int v51; // r0
  int v52; // r0
  unsigned int v53; // r1
  float v54; // s16
  unsigned int v55; // r1
  CTaskComplexFleeEntity *v56; // r0
  CPedGeometryAnalyser *v57; // r0
  unsigned __int64 v58; // d6
  float v59; // s0
  int v60; // r0
  int v61; // r3
  float *v62; // r5
  CGeneral *RadianAngleBetweenPoints; // r0
  float v64; // r1
  int v65; // r0
  CPedGeometryAnalyser *v66; // r1
  CTaskSimpleShakeFist *v67; // r0
  CTaskComplexEvasiveStep *v68; // r0
  int v69; // r0
  int v70; // r3
  float *v71; // r5
  CGeneral *v72; // r0
  float v73; // r1
  unsigned int v74; // r1
  CMatrix *v75; // r0
  CTaskComplexEvasiveDiveAndGetUp *v76; // r0
  CTaskComplexSequence *v77; // r8
  int v78; // r0
  int v79; // r3
  float *v80; // r5
  CGeneral *v81; // r0
  float v82; // r1
  int v83; // r4
  unsigned int v84; // r1
  CTaskSimpleAchieveHeading *v85; // r5
  unsigned int v86; // r1
  CTaskSimpleShakeFist *v87; // r4
  int v88; // r0
  int v89; // r0
  int v90; // r3
  float *v91; // r4
  CGeneral *v92; // r0
  float v93; // r1
  int v94; // r6
  unsigned int v95; // r1
  CTaskSimpleAchieveHeading *v96; // r0
  CPed *v97; // r2
  CPedGeometryAnalyser *v98; // r0
  float *v99; // [sp+0h] [bp-120h]
  int v100; // [sp+0h] [bp-120h]
  float v101; // [sp+24h] [bp-FCh]
  float32x2_t v102; // [sp+28h] [bp-F8h]
  float v103[3]; // [sp+34h] [bp-ECh] BYREF
  float v104[3]; // [sp+40h] [bp-E0h] BYREF
  _BYTE v105[12]; // [sp+4Ch] [bp-D4h] BYREF
  char v106[16]; // [sp+58h] [bp-C8h] BYREF
  char v107[48]; // [sp+68h] [bp-B8h] BYREF
  float v108[34]; // [sp+98h] [bp-88h] BYREF

  v4 = *((_DWORD *)a2 + 4);
  if ( !v4 )
    return;
  v6 = *this;
  if ( *((unsigned __int8 *)*this + 1157) << 31 )
    return;
  v7 = *((_DWORD *)v6 + 5);
  v8 = (char *)(v7 + 48);
  if ( !v7 )
    v8 = (char *)v6 + 4;
  v9.n64_u64[0] = *(unsigned __int64 *)(v8 + 4);
  v10 = *(_DWORD *)(v4 + 20);
  v11 = v4 + 4;
  v102.n64_u64[0] = *(unsigned __int64 *)(v7 + 20);
  v12 = *(float *)(v7 + 16);
  v13 = v4 + 4;
  if ( v10 )
    v13 = v10 + 48;
  v14 = *(float *)v8;
  v15.n64_u64[0] = *(unsigned __int64 *)(v13 + 4);
  v16 = *(float *)v13;
  v101 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v4 + 38)]) + 44) + 12);
  CPedGeometryAnalyser::ComputeEntityBoundingBoxCorners(
    *((CPedGeometryAnalyser **)v8 + 2),
    *(float *)&v4,
    (CEntity *)v108,
    (CVector *)v8);
  v17 = *((_DWORD *)*this + 5);
  v18 = v17 + 48;
  if ( !v17 )
    v18 = (int)*this + 4;
  CPedGeometryAnalyser::ComputeEntityBoundingBoxPlanes(
    *(CPedGeometryAnalyser **)(v18 + 8),
    *(float *)&v4,
    (CEntity *)v107,
    (CVector *)v106,
    v99);
  CPedGeometryAnalyser::ComputeMoveDirToAvoidEntity(*this, (const CPed *)v4, (CEntity *)v105, v19);
  v20 = v103;
  v104[2] = (float)(v108[2] + v108[11]) * 0.5;
  v104[1] = (float)(v108[1] + v108[10]) * 0.5;
  v104[0] = (float)(v108[0] + v108[9]) * 0.5;
  v103[0] = (float)(v108[3] + v108[6]) * 0.5;
  v103[1] = (float)(v108[4] + v108[7]) * 0.5;
  v103[2] = (float)(v108[5] + v108[8]) * 0.5;
  v21 = *(float **)(v4 + 20);
  v22 = v21[4];
  v23 = v21[5];
  v24 = v21[6];
  v25 = *v21;
  v26 = v24 * *(float *)(v4 + 80);
  v27 = v21[1];
  v28 = v21[2];
  v29 = *this;
  v30 = (float)(v22 * *(float *)(v4 + 72)) + (float)(v23 * *(float *)(v4 + 76));
  v31 = *((_DWORD *)*this + 5);
  v32 = (float *)(v31 + 48);
  if ( !v31 )
    v32 = (float *)((char *)v29 + 4);
  v33 = v30 + v26;
  if ( (float)(v30 + v26) > 0.0 )
    v20 = v104;
  v34 = *v32 - *v20;
  v35 = v32[1] - v20[1];
  v36 = v32[2] - v20[2];
  v37 = (float)((float)(v22 * v34) + (float)(v23 * v35)) + (float)(v24 * v36);
  if ( CPed::IsPlayer(v29) == 1 )
  {
    v38 = fabsf(v37);
    if ( v38 < 3.0 && v38 > fabsf(v33 * 50.0) )
    {
      v39 = *this;
      if ( *(float *)(*((_DWORD *)*this + 273) + 20) < 1.0
        && !IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, *this) )
      {
        CPlayerPed::AnnoyPlayerPed(v39, 0);
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"CompVhclPotCollResp",
          *this,
          v4,
          1500,
          -1,
          0,
          1,
          0.25,
          500,
          3,
          0);
        v40 = *((_DWORD *)*this + 7 * *((char *)*this + 1820) + 361);
        if ( v40 <= 0x1C && ((1 << v40) & 0x10C00021) != 0 )
        {
          v41 = (CTaskSimpleShakeFist *)CTask::operator new((CTask *)&word_10, 0x10C00021u);
          CTaskSimpleShakeFist::CTaskSimpleShakeFist(v41);
          this[12] = v42;
        }
      }
    }
    return;
  }
  if ( fabsf(v37) < fabsf((float)(v33 * 50.0) * 2.0) )
  {
    v43 = fabsf(v33);
    v45 = (float)rand();
    if ( v43 <= 0.3 )
    {
      if ( v43 <= 0.05 )
        return;
      v46 = 0.7;
      v47 = 0.02;
      v48 = 0.05;
      v49 = 0.1;
    }
    else
    {
      v46 = 0.175;
      v47 = 0.05;
      v48 = 0.1;
      v49 = 0.2;
    }
    v58 = vmul_f32(vsub_f32(v15, v9), v102).n64_u64[0];
    v59 = (float)(v45 * 4.6566e-10) + 0.0;
    if ( (float)((float)((float)((float)(v16 - v14) * v12) + *(float *)&v58) + *((float *)&v58 + 1)) <= 0.0 )
    {
      if ( v59 > v48 && !*(_DWORD *)(v4 + 1316) )
      {
        v57 = 0;
        goto LABEL_65;
      }
      if ( v59 > v47 )
        goto LABEL_47;
    }
    else
    {
      if ( fabsf((float)((float)(v34 * v25) + (float)(v35 * v27)) + (float)(v36 * v28)) > (float)(v101 - v46) )
      {
        if ( v59 < (float)(v49 * 0.5) )
        {
          v60 = *(_DWORD *)(v4 + 20);
          v61 = *((_DWORD *)*this + 5);
          if ( v60 )
            v11 = v60 + 48;
          v62 = (float *)(v61 + 48);
          if ( !v61 )
            v62 = (float *)((char *)*this + 4);
          RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                                   *(CGeneral **)v11,
                                                   *(float *)(v11 + 4),
                                                   *v62,
                                                   v62[1],
                                                   *(float *)&v100);
          v65 = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v64);
          v66 = *this;
          *((_DWORD *)v66 + 344) = v65;
          v67 = (CTaskSimpleShakeFist *)CTask::operator new((CTask *)&word_10, (unsigned int)v66);
          CTaskSimpleShakeFist::CTaskSimpleShakeFist(v67);
          goto LABEL_65;
        }
LABEL_47:
        v68 = (CTaskComplexEvasiveStep *)CTask::operator new((CTask *)&dword_1C, v44);
        CTaskComplexEvasiveStep::CTaskComplexEvasiveStep(v68, (CEntity *)v4, (const CVector *)v105);
        goto LABEL_65;
      }
      if ( v59 < v49 )
      {
        v69 = *(_DWORD *)(v4 + 20);
        v70 = *((_DWORD *)*this + 5);
        if ( v69 )
          v11 = v69 + 48;
        v71 = (float *)(v70 + 48);
        if ( !v70 )
          v71 = (float *)((char *)*this + 4);
        v72 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                            *(CGeneral **)v11,
                            *(float *)(v11 + 4),
                            *v71,
                            v71[1],
                            *(float *)&v100);
        v74 = CGeneral::LimitRadianAngle(v72, v73);
        *((_DWORD *)*this + 344) = v74;
        *((_DWORD *)*this + 343) = v74;
        v75 = (CMatrix *)*((_DWORD *)*this + 5);
        if ( v75 )
          CMatrix::SetRotateZOnly(v75, *(float *)&v74);
        else
          *((_DWORD *)*this + 4) = v74;
        v88 = CTask::operator new((CTask *)&dword_34, v74);
        v57 = (CPedGeometryAnalyser *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                                        v88,
                                        0,
                                        142,
                                        1082130432,
                                        -4.0,
                                        3000,
                                        413,
                                        (int)"HandsUp",
                                        0);
        *(_DWORD *)v57 = &off_665800;
        goto LABEL_65;
      }
    }
    v76 = (CTaskComplexEvasiveDiveAndGetUp *)CTask::operator new((CTask *)&dword_24, v44);
    CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(v76, (CVehicle *)v4, 0, (const CVector *)v105, 1);
    goto LABEL_65;
  }
  if ( *(unsigned __int8 *)(v4 + 58) <= 7u && *((_BYTE *)*this + 1096) == 1 )
  {
    v50 = *((_DWORD *)*this + 272);
    v51 = *(_DWORD *)(v50 + 64);
    if ( !v51 )
      v51 = *(_DWORD *)(v50 + 60);
    if ( *(_DWORD *)(v4 + 1316) && (!v51 || (*(int (__fastcall **)(int))(*(_DWORD *)v51 + 8))(v51) != 12) )
    {
      v52 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 1000.0);
      if ( v52 <= 24 )
      {
        if ( *((_DWORD *)*this + 359) != 6 )
        {
          v54 = (float)((float)(unsigned __int16)rand() * 0.000015259) * 500.0;
          v56 = (CTaskComplexFleeEntity *)CTask::operator new((CTask *)&off_3C, v55);
          CTaskComplexFleeEntity::CTaskComplexFleeEntity(v56, (CEntity *)v4, 0, 60.0, (int)v54 + 750, 1000, 1.0);
LABEL_65:
          this[9] = v57;
          return;
        }
        goto LABEL_58;
      }
      if ( v52 <= 99 )
      {
LABEL_58:
        v77 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v53);
        CTaskComplexSequence::CTaskComplexSequence(v77);
        this[9] = v77;
        v78 = *(_DWORD *)(v4 + 20);
        v79 = *((_DWORD *)*this + 5);
        if ( v78 )
          v11 = v78 + 48;
        v80 = (float *)(v79 + 48);
        if ( !v79 )
          v80 = (float *)((char *)*this + 4);
        v81 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                            *(CGeneral **)v11,
                            *(float *)(v11 + 4),
                            *v80,
                            v80[1],
                            *(float *)&v100);
        v83 = CGeneral::LimitRadianAngle(v81, v82);
        v85 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v84);
        CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v85, *(float *)&v83, 0.5, 0.2);
        CTaskComplexSequence::AddTask(v77, v85);
        v87 = (CTaskSimpleShakeFist *)CTask::operator new((CTask *)&word_10, v86);
        CTaskSimpleShakeFist::CTaskSimpleShakeFist(v87);
        CTaskComplexSequence::AddTask(v77, v87);
        return;
      }
      if ( v52 > 199 )
      {
        if ( v52 < 400 )
          IKChainManager_c::LookAt(
            (int)&g_ikChainMan,
            (int)"CompVehiclePotCollResp",
            *this,
            v4,
            1300,
            -1,
            0,
            1,
            0.25,
            500,
            3,
            0);
      }
      else
      {
        v89 = *(_DWORD *)(v4 + 20);
        v90 = *((_DWORD *)*this + 5);
        if ( v89 )
          v11 = v89 + 48;
        v91 = (float *)(v90 + 48);
        if ( !v90 )
          v91 = (float *)((char *)*this + 4);
        v92 = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                            *(CGeneral **)v11,
                            *(float *)(v11 + 4),
                            *v91,
                            v91[1],
                            *(float *)&v100);
        v94 = CGeneral::LimitRadianAngle(v92, v93);
        v96 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v95);
        CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v96, *(float *)&v94, 0.5, 0.2);
        v97 = *this;
        this[9] = v98;
        IKChainManager_c::LookAt(
          (int)&g_ikChainMan,
          (int)"CompVehiclePotCollResp",
          v97,
          v4,
          1300,
          -1,
          0,
          1,
          0.25,
          500,
          3,
          0);
      }
    }
  }
}


// ============================================================

// Address: 0x380170
// Original: _ZN13CEventHandler47ComputeVehiclePotentialPassiveCollisionResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehiclePotentialPassiveCollisionResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeVehiclePotentialPassiveCollisionResponse(
        CPedGroups **this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  int v4; // r8
  const CVehicle *v7; // r5
  bool v9; // zf
  int IsGoToTask; // r0
  const CPed *v11; // r1
  bool v12; // zf
  int PedsGroup; // r10
  char IsPedGoingForCarDoor; // r4
  unsigned int v15; // r1
  CTaskComplexWalkRoundCar *v16; // r0
  CPedGroups *v17; // r0

  v7 = (const CVehicle *)*((_DWORD *)a2 + 4);
  v9 = v7 == 0;
  if ( v7 )
    v9 = a4 == 0;
  if ( !v9 && (*((_DWORD *)*this + 289) & 0x100) == 0 )
  {
    IsGoToTask = CTask::IsGoToTask(a4, a2);
    v12 = IsGoToTask == 0;
    if ( IsGoToTask )
    {
      v4 = *((_DWORD *)a2 + 5);
      v12 = v4 == 1;
    }
    if ( !v12 )
    {
      PedsGroup = CPedGroups::GetPedsGroup(*this, v11);
      IsPedGoingForCarDoor = CPedIntelligence::IsPedGoingForCarDoor(*((CPedIntelligence **)*this + 272));
      v16 = (CTaskComplexWalkRoundCar *)CTask::operator new((CTask *)&dword_58, v15);
      if ( PedsGroup )
        v4 = 6;
      CTaskComplexWalkRoundCar::CTaskComplexWalkRoundCar(
        v16,
        v4,
        (CTask *)((char *)a4 + 12),
        v7,
        IsPedGoingForCarDoor,
        0);
      this[9] = v17;
    }
  }
}


// ============================================================

// Address: 0x3801f2
// Original: _ZN13CEventHandler31ComputeVehicleHitAndRunResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehicleHitAndRunResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeVehicleHitAndRunResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  ;
}


// ============================================================

// Address: 0x3801f4
// Original: _ZN13CEventHandler24ComputeShotFiredResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeShotFiredResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeShotFiredResponse(const CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v4; // r5
  int v6; // r0
  bool v7; // zf
  unsigned int v8; // r1
  int v9; // r6
  CTaskComplexKillCriminal *v10; // r0
  const CPed *v11; // r0
  unsigned int v12; // r1
  CTaskSimpleDuck *v13; // r0
  unsigned __int16 v14; // r2
  CTaskComplexTurnToFaceEntityOrCoord *v15; // r0
  const CPed *v16; // r1
  CVehicle *v17; // r0
  CTaskComplexCarDriveMission *v18; // r0
  const CPed *v19; // r0
  unsigned int v20; // r1
  int v21; // r6
  CVehicle *IsTypeMelee; // r0
  CTaskComplexKillPedOnFoot *v23; // r0
  CTaskComplexKillPedOnFootStealth *v24; // r0
  CTaskComplexSmartFleeEntity *v25; // r0
  CTaskComplexSmartFleeEntity *v26; // r0
  CEntity *v27; // r1
  const CPed *v28; // r1
  int v29; // r2
  bool v30; // zf
  CTaskComplexSmartFleeEntity *v31; // r0
  const CPed *v32; // r0
  int v33; // r0
  bool v34; // zf

  v4 = *((_DWORD *)a2 + 4);
  if ( !v4 )
    return;
  v6 = *((__int16 *)a2 + 5);
  if ( v6 <= 910 )
  {
    if ( v6 > 426 )
    {
      if ( v6 != 427 )
      {
        if ( v6 != 726 )
          return;
        v16 = *this;
        v17 = (CVehicle *)*((_DWORD *)*this + 356);
        if ( v17 && CVehicle::IsDriver(v17, v16) == 1 )
          goto LABEL_28;
        v26 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, (unsigned int)v16);
        v27 = (CEntity *)*((_DWORD *)*this + 356);
        goto LABEL_40;
      }
      v13 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, 0x1ABu);
      v14 = -1;
    }
    else
    {
      if ( v6 == 200 )
        goto LABEL_52;
      if ( v6 != 415 || CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)*this + 272), 1) )
        return;
      v13 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v12);
      v14 = 3000;
    }
    CTaskSimpleDuck::CTaskSimpleDuck(v13, 0, v14, -1);
    goto LABEL_53;
  }
  if ( v6 < 1000 )
  {
    if ( v6 == 911 )
    {
      v25 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
      CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v25, (CEntity *)v4, 1, 60.0, 1000000, 1000, 1.0);
    }
    else
    {
      if ( v6 != 920 )
        return;
      v15 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, 0x38Fu);
      CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v15, (CEntity *)v4, 0.5, 0.2);
    }
    goto LABEL_53;
  }
  if ( v6 == 1000 )
  {
    if ( (*(_BYTE *)(v4 + 58) & 7) != 3 )
      return;
    v19 = *this;
    if ( *(_DWORD *)(v4 + 1436) == *((_DWORD *)*this + 359) )
      return;
    v20 = *((unsigned __int8 *)v19 + 1096);
    if ( v20 == 2
      || (v21 = *(char *)(v4 + 1820),
          CWeapon::IsTypeMelee((const CPed *)((char *)v19 + 28 * *((char *)v19 + 1820) + 1444)) != 1)
      || (IsTypeMelee = (CVehicle *)CWeapon::IsTypeMelee((CWeapon *)(v4 + 28 * v21 + 1444)),
          IsTypeMelee == (CVehicle *)((char *)&stderr + 1)) )
    {
      v23 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v20);
      CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v23, (CPed *)v4, -1, 0, 0, 0, 1);
      goto LABEL_53;
    }
    v28 = *this;
    v29 = *((_DWORD *)*this + 289);
    v30 = (v29 & 0x100) == 0;
    if ( (v29 & 0x100) != 0 )
    {
      IsTypeMelee = (CVehicle *)*((_DWORD *)v28 + 356);
      v30 = IsTypeMelee == 0;
    }
    if ( !v30 )
    {
      if ( CVehicle::IsDriver(IsTypeMelee, v28) )
      {
LABEL_28:
        v18 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, (unsigned int)v16);
        CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v18, *((CVehicle **)*this + 356), 0, 1, 2, 40.0);
        *(_DWORD *)v11 = &off_667294;
LABEL_53:
        this[9] = v11;
        return;
      }
      v28 = *this;
      v29 = *((_DWORD *)*this + 289);
    }
    if ( (v29 & 0x100) != 0 )
    {
      v33 = *((_DWORD *)v28 + 356);
      v34 = v33 == 0;
      if ( v33 )
        v34 = *(_DWORD *)(v33 + 1124) == 0;
      if ( !v34 )
      {
LABEL_52:
        v11 = 0;
        goto LABEL_53;
      }
    }
    v26 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, (unsigned int)v28);
    v27 = (CEntity *)v4;
LABEL_40:
    CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v26, v27, 0, 60.0, 1000000, 1000, 1.0);
    goto LABEL_53;
  }
  if ( v6 == 1028 )
  {
    v24 = (CTaskComplexKillPedOnFootStealth *)CTask::operator new((CTask *)&dword_48, 0x404u);
    CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(v24, (CPed *)v4);
    goto LABEL_53;
  }
  v7 = v6 == 1105;
  if ( v6 == 1105 )
    v7 = (*(_BYTE *)(v4 + 58) & 7) == 3;
  if ( v7 && *(_DWORD *)(v4 + 1436) != *((_DWORD *)*this + 359) )
  {
    if ( CPed::IsPlayer((CPed *)v4) != 1 )
    {
      v8 = *((unsigned __int8 *)*this + 1096);
      if ( v8 != 2 )
      {
        v9 = *(char *)(v4 + 1820);
        if ( CWeapon::IsTypeMelee((const CPed *)((char *)*this + 28 * *((char *)*this + 1820) + 1444)) == 1
          && CWeapon::IsTypeMelee((CWeapon *)(v4 + 28 * v9 + 1444)) != 1 )
        {
          v31 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v8);
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v31, (CEntity *)v4, 0, 60.0, 1000000, 1000, 1.0);
          this[9] = v32;
          *((_DWORD *)v32 + 12) = 4;
          return;
        }
      }
      v10 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v8);
      CTaskComplexKillCriminal::CTaskComplexKillCriminal(v10, (CPed *)v4, 0);
      goto LABEL_53;
    }
    goto LABEL_52;
  }
}


// ============================================================

// Address: 0x3805b8
// Original: _ZN13CEventHandler21ComputeReviveResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeReviveResponse(CEvent *,CTask *,CTask *)
CPed *__fastcall CEventHandler::ComputeReviveResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  CPed *v5; // r0
  int v6; // r2
  CPed *v7; // r0
  int v8; // r3
  unsigned int v9; // r2
  int v10; // r5
  CPed *v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r5
  CPed *v15; // r0
  int v16; // r2
  unsigned int v17; // r3
  int v18; // r5
  unsigned int v19; // r1
  CTaskComplexGetUpAndStandStill *v20; // r0
  CPed *v21; // r0
  unsigned int v22; // r1
  int v23; // r5
  CPed *result; // r0
  _DWORD *v25; // r4
  const CPed *v26; // r1
  bool v27; // zf
  CTask *WanderTaskByPedType; // r1

  *((_DWORD *)*this + 337) = 1120403456;
  v5 = *this;
  v6 = *((_DWORD *)v5 + 8);
  *((_DWORD *)v5 + 7) |= 1u;
  *((_DWORD *)v5 + 8) = v6;
  v7 = *this;
  v8 = *((_DWORD *)*this + 291);
  v9 = *((_DWORD *)*this + 290) & 0xFFFFFFEF;
  v10 = *((_DWORD *)*this + 292);
  *((_DWORD *)v7 + 289) = *((_DWORD *)*this + 289);
  *((_DWORD *)v7 + 290) = v9;
  *((_DWORD *)v7 + 291) = v8;
  *((_DWORD *)v7 + 292) = v10;
  v11 = *this;
  v12 = *((_DWORD *)*this + 291);
  v13 = *((_DWORD *)*this + 290) & 0x7FFFFFFF;
  v14 = *((_DWORD *)*this + 292);
  *((_DWORD *)v11 + 289) = *((_DWORD *)*this + 289);
  *((_DWORD *)v11 + 290) = v13;
  *((_DWORD *)v11 + 291) = v12;
  *((_DWORD *)v11 + 292) = v14;
  v15 = *this;
  v16 = *((_DWORD *)*this + 290);
  v17 = *((_DWORD *)*this + 291) & 0xFFFFFEFF;
  v18 = *((_DWORD *)*this + 292);
  *((_DWORD *)v15 + 289) = *((_DWORD *)*this + 289);
  *((_DWORD *)v15 + 290) = v16;
  *((_DWORD *)v15 + 291) = v17;
  *((_DWORD *)v15 + 292) = v18;
  CPed::SetPedState(*this);
  *((_DWORD *)*this + 17) &= ~0x20000000u;
  CPed::RestartNonPartialAnims(*this);
  v20 = (CTaskComplexGetUpAndStandStill *)CTask::operator new((CTask *)&byte_9[3], v19);
  CTaskComplexGetUpAndStandStill::CTaskComplexGetUpAndStandStill(v20);
  this[9] = v21;
  v23 = CTask::operator new((CTask *)&dword_1C, v22);
  CTaskSimple::CTaskSimple((CTaskSimple *)v23);
  *(_WORD *)(v23 + 24) = 0;
  *(_DWORD *)(v23 + 8) = 179;
  *(_DWORD *)(v23 + 12) = -1;
  *(_DWORD *)(v23 + 16) = 0;
  *(_DWORD *)(v23 + 20) = 0;
  *(_DWORD *)v23 = &off_665794;
  result = *this;
  this[11] = (CPed *)v23;
  v25 = (_DWORD *)*((_DWORD *)result + 272);
  v26 = (const CPed *)v25[4];
  v27 = v26 == 0;
  if ( !v26 )
  {
    v26 = (const CPed *)v25[5];
    v27 = v26 == 0;
  }
  if ( v27 )
  {
    WanderTaskByPedType = (CTask *)CTaskComplexWander::GetWanderTaskByPedType(result, v26);
    return (CPed *)j_CTaskManager::SetTask((CTaskManager *)(v25 + 1), WanderTaskByPedType, 4, 0);
  }
  return result;
}


// ============================================================

// Address: 0x3806c4
// Original: _ZN13CEventHandler26ComputeChatPartnerResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeChatPartnerResponse(CEvent *,CTask *,CTask *)
int __fastcall CEventHandler::ComputeChatPartnerResponse(int this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v4; // r4
  unsigned int v5; // r1

  v4 = this;
  if ( a2 )
  {
    if ( *((_DWORD *)a2 + 3) && !CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*(_DWORD *)this + 1088), 1204) )
    {
      rand();
      CTask::operator new((CTask *)&dword_78, v5);
      this = CTaskComplexPartnerChat::CTaskComplexPartnerChat();
    }
    else
    {
      this = 0;
    }
    *(_DWORD *)(v4 + 36) = this;
  }
  return this;
}


// ============================================================

// Address: 0x38072c
// Original: _ZN13CEventHandler22ComputeSexyPedResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeSexyPedResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeSexyPedResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CPed *v4; // r5
  int v6; // r0
  CTaskGangHasslePed *v7; // r0
  int v8; // r0

  v4 = (CPed *)*((_DWORD *)a2 + 4);
  if ( v4 )
  {
    v6 = *((__int16 *)a2 + 5);
    if ( v6 == 200 )
    {
      v8 = 0;
    }
    else
    {
      if ( v6 != 1212 )
        return;
      v7 = (CTaskGangHasslePed *)CTask::operator new((CTask *)&word_2C, 0x4BCu);
      CTaskGangHasslePed::CTaskGangHasslePed(v7, v4, 0, 10000, 30000);
    }
    *((_DWORD *)this + 9) = v8;
  }
}


// ============================================================

// Address: 0x38076c
// Original: _ZN13CEventHandler26ComputeSexyVehicleResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeSexyVehicleResponse(CEvent *,CTask *,CTask *)
int __fastcall CEventHandler::ComputeSexyVehicleResponse(int this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v4; // r4
  int v5; // r5
  unsigned int v6; // r1
  CTaskSimpleStandStill *v7; // r0
  CPed *v8; // r2
  int v9; // r0

  v4 = *((_DWORD *)a2 + 3);
  v5 = this;
  if ( v4 )
  {
    CInterestingEvents::Add();
    v7 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v6);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v7, 5000, 0, 0, 8.0);
    v8 = *(CPed **)v5;
    *(_DWORD *)(v5 + 36) = v9;
    return IKChainManager_c::LookAt(
             (int)&g_ikChainMan,
             (int)"CompSexyVhclResp",
             v8,
             v4,
             5000,
             -1,
             0,
             1,
             0.25,
             500,
             3,
             0);
  }
  return this;
}


// ============================================================

// Address: 0x380800
// Original: _ZN13CEventHandler25ComputePedToChaseResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedToChaseResponse(CEvent *,CTask *,CTask *)
int __fastcall CEventHandler::ComputePedToChaseResponse(int this, CEvent *a2, CTask *a3, CTask *a4)
{
  CEntity *v4; // r5
  int v5; // r4
  int v6; // r6
  char v7; // r2

  v4 = (CEntity *)*((_DWORD *)a2 + 3);
  v5 = this;
  if ( v4 )
  {
    v6 = CTask::operator new((CTask *)&dword_4C, (unsigned int)a2);
    CTaskComplex::CTaskComplex((CTaskComplex *)v6);
    *(_QWORD *)(v6 + 24) = 0x400000003F800000LL;
    *(_QWORD *)(v6 + 32) = 0x4000000000000000LL;
    *(_QWORD *)(v6 + 16) = 0x3E800007530LL;
    *(_WORD *)(v6 + 48) = 0;
    *(_WORD *)(v6 + 60) = 0;
    *(_DWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 44) = 0;
    *(_DWORD *)(v6 + 52) = 0;
    *(_DWORD *)(v6 + 56) = 0;
    *(_DWORD *)(v6 + 68) = 6;
    v7 = *(_BYTE *)(v6 + 72);
    *(_DWORD *)v6 = &off_6656E4;
    *(_DWORD *)(v6 + 64) = &off_665720;
    *(_BYTE *)(v6 + 72) = v7 & 0xF0 | 3;
    *(_DWORD *)(v6 + 12) = v4;
    this = CEntity::RegisterReference(v4, (CEntity **)(v6 + 12));
    *(_DWORD *)(v5 + 36) = v6;
  }
  return this;
}


// ============================================================

// Address: 0x380898
// Original: _ZN13CEventHandler24ComputePedToFleeResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedToFleeResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedToFleeResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  CEntity *v4; // r5
  unsigned int v6; // r1
  CTaskComplexSmartFleeEntity *v7; // r0
  CPed *v8; // r0

  v4 = (CEntity *)*((_DWORD *)a2 + 3);
  if ( v4 )
  {
    CPed::Say(*this, 0x45u, 0, 1.0, 0, 0, 0);
    v7 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v6);
    CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v7, v4, 1, 100.0, -1, 1000, 1.0);
    this[9] = v8;
  }
}


// ============================================================

// Address: 0x3808fc
// Original: _ZN13CEventHandler24ComputeAttractorResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeAttractorResponse(CEvent *,CTask *,CTask *)
CTaskComplexUseEffect *__fastcall CEventHandler::ComputeAttractorResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  __int64 v6; // kr00_8
  CTaskComplexUseEffect *result; // r0
  bool v8; // zf
  CPedAttractorManager *PedAttractorManager; // r0
  unsigned int v10; // r1
  CTaskComplexUseEffect *v11; // r0

  v6 = *((_QWORD *)a2 + 2);
  result = (CTaskComplexUseEffect *)(*(int (__fastcall **)(CEvent *, _DWORD, CTask *, CTask *))(*(_DWORD *)a2 + 8))(
                                      a2,
                                      *(_DWORD *)(*(_DWORD *)a2 + 8),
                                      a3,
                                      a4);
  v8 = HIDWORD(v6) == 0;
  if ( !HIDWORD(v6) )
    v8 = result == (CTaskComplexUseEffect *)((char *)&off_18 + 3);
  if ( !v8 )
  {
    result = (CTaskComplexUseEffect *)*((__int16 *)a2 + 5);
    if ( result == (CTaskComplexUseEffect *)&dword_C8 )
      goto LABEL_8;
    if ( result != (CTaskComplexUseEffect *)((char *)&dword_E8 + 1) )
      return result;
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    if ( CPedAttractorManager::HasEmptySlot(PedAttractorManager, (const C2dEffect *)v6, (const CEntity *)HIDWORD(v6)) != 1 )
    {
LABEL_8:
      result = 0;
    }
    else
    {
      v11 = (CTaskComplexUseEffect *)CTask::operator new((CTask *)&dword_24, v10);
      result = CTaskComplexUseEffect::CTaskComplexUseEffect(v11, (C2dEffect *)v6, (CEntity *)HIDWORD(v6));
    }
    *((_DWORD *)this + 9) = result;
  }
  return result;
}


// ============================================================

// Address: 0x380954
// Original: _ZN13CEventHandler34ComputePotentialPedCollideResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePotentialPedCollideResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePotentialPedCollideResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  CPed *v6; // r5
  int v7; // r8
  int v8; // r0
  int v9; // r0
  int ActiveTaskByType; // r0
  float32x2_t *v11; // r1
  int v12; // r9
  int v13; // r11
  int v14; // r10
  int v15; // r0
  float32x2_t *v16; // r2
  float32x2_t *v17; // r3
  float32x2_t *v18; // r2
  float32x2_t v19; // d16
  float v20; // s2
  unsigned __int64 v21; // d0
  CTaskComplexAvoidOtherPedWhileWandering *v22; // r0
  int v23; // r0

  v6 = (CPed *)*((_DWORD *)a2 + 7);
  if ( v6 )
  {
    if ( CTask::IsGoToTask(a4, a2) )
      v7 = *((_DWORD *)a2 + 8);
    else
      v7 = 4;
    v8 = *((__int16 *)a2 + 5);
    if ( v8 == 1209 )
    {
      CTask::operator new((CTask *)&dword_74, 0x4B9u);
      v9 = CTaskComplexPartnerShove::CTaskComplexPartnerShove();
LABEL_15:
      *((_DWORD *)this + 9) = v9;
      return;
    }
    if ( v8 != 917 )
    {
      if ( v8 != 200 )
        return;
      v9 = 0;
      goto LABEL_15;
    }
    ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                         (CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4),
                         1207);
    v12 = ActiveTaskByType;
    if ( v7 >= 5 )
    {
      if ( ActiveTaskByType )
      {
        v13 = *(_DWORD *)(ActiveTaskByType + 16);
        if ( v13 )
        {
          v14 = *(_DWORD *)(v13 + 1092)
              ? *(_DWORD *)(v13 + 1104)
              : CPedIntelligence::GetMoveStateFromGoToTask(*(CPedIntelligence **)(v13 + 1088));
          v15 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4), 907);
          if ( v14 <= 5 )
          {
            if ( v15 )
            {
              v16 = *(float32x2_t **)(v13 + 20);
              v17 = *(float32x2_t **)(*(_DWORD *)this + 20);
              v11 = v16 + 6;
              if ( !v16 )
                v11 = (float32x2_t *)(v13 + 4);
              v18 = v17 + 6;
              if ( !v17 )
                v18 = (float32x2_t *)(*(_DWORD *)this + 4);
              v19.n64_u64[0] = vsub_f32((float32x2_t)v11->n64_u64[0], (float32x2_t)v18->n64_u64[0]).n64_u64[0];
              v20 = *(float *)(v15 + 28) * *(float *)(v15 + 28);
              v21 = vmul_f32(v19, v19).n64_u64[0];
              if ( (float)((float)((float)(*(float *)&v21 + *((float *)&v21 + 1)) + 0.0) - v20) < v20 )
                v7 = 4;
            }
          }
        }
      }
    }
    v22 = (CTaskComplexAvoidOtherPedWhileWandering *)CTask::operator new((CTask *)&dword_60, (unsigned int)v11);
    CTaskComplexAvoidOtherPedWhileWandering::CTaskComplexAvoidOtherPedWhileWandering(
      v22,
      v6,
      (CEvent *)((char *)a2 + 16),
      v7);
    *((_DWORD *)this + 9) = v23;
    if ( v12 )
      *(_BYTE *)(v23 + 92) |= 4u;
  }
}


// ============================================================

// Address: 0x380ab8
// Original: _ZN13CEventHandler32ComputePedEnteredVehicleResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedEnteredVehicleResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedEnteredVehicleResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CEvent *v4; // r4
  _DWORD *v6; // r5
  char *v7; // r6
  bool v8; // zf
  unsigned int v9; // r1
  CTaskComplexSmartFleeEntity *v10; // r0
  int v11; // r0
  int v12; // r8
  int v13; // s0
  int v14; // r0
  unsigned int v15; // r1
  CTaskComplexLeaveCar *v16; // r0
  unsigned int v17; // r1
  CTaskComplexKillCriminal *v18; // r0
  CTaskComplexLeaveCarAndWander *v19; // r0
  CTaskComplexScreamInCarThenLeave *v20; // r0
  int v21; // r4
  CTaskComplexKillPedOnFoot *v22; // r0
  CTaskComplexLeaveCarAndFlee *v23; // r0
  int v24; // r1
  const CVector *v25; // r2
  CTaskComplexDestroyCar *v26; // r0

  v4 = a2;
  v6 = (_DWORD *)*((_DWORD *)a2 + 5);
  if ( v6 )
  {
    v7 = (char *)*((_DWORD *)a2 + 4);
    v8 = v7 == 0;
    if ( v7 )
    {
      a2 = *(CEvent **)this;
      v8 = *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 == 0;
    }
    if ( !v8 )
    {
      CVehicle::IsDriver(*((CVehicle **)a2 + 356), a2);
      if ( *(_BYTE *)(v6[226] + 222) == 15 )
      {
        v10 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v9);
        CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v10, (CEntity *)v7, 0, 60.0, 1000000, 1000, 1.0);
LABEL_7:
        *((_DWORD *)this + 9) = v11;
        return;
      }
      CInterestingEvents::Add();
      v12 = *((_DWORD *)v4 + 6);
      v13 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 300.0);
      v14 = *((__int16 *)v4 + 5);
      if ( v14 < 1000 )
      {
        v15 = v14 - 704;
        switch ( *((_WORD *)v4 + 5) )
        {
          case 0x2C0:
            v16 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v15);
            CTaskComplexLeaveCar::CTaskComplexLeaveCar(v16, (CVehicle *)v6, v12, v13 + 300, 0, 1);
            goto LABEL_7;
          case 0x2C1:
            return;
          case 0x2C2:
            goto LABEL_27;
          case 0x2C3:
            v19 = (CTaskComplexLeaveCarAndWander *)CTask::operator new((CTask *)&dword_1C, v15);
            CTaskComplexLeaveCarAndWander::CTaskComplexLeaveCarAndWander(v19, (CVehicle *)v6, v12, v13 + 300, 0);
            goto LABEL_7;
          case 0x2C4:
            if ( CPed::IsPlayer((CPed *)v7) == 1
              && CTheScripts::IsPlayerOnAMission((CTheScripts *)((char *)&stderr + 1)) )
            {
              goto LABEL_27;
            }
            v20 = (CTaskComplexScreamInCarThenLeave *)CTask::operator new((CTask *)&dword_20, v15);
            CTaskComplexScreamInCarThenLeave::CTaskComplexScreamInCarThenLeave(v20, (CVehicle *)v6, v12);
            goto LABEL_7;
          default:
            if ( v14 == 200 )
              goto LABEL_18;
            return;
        }
      }
      switch ( v14 )
      {
        case 1000:
          v15 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
          if ( v15 == 2
            || (v21 = v7[1820],
                CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
            || CWeapon::IsTypeMelee((CWeapon *)&v7[28 * v21 + 1444]) == 1 )
          {
            v22 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v15);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v22, (CPed *)v7, -1, 0, 0, 0, 1);
          }
          else
          {
LABEL_27:
            v23 = (CTaskComplexLeaveCarAndFlee *)CTask::operator new((CTask *)&word_28, v15);
            v24 = v6[5];
            v25 = (const CVector *)(v24 + 48);
            if ( !v24 )
              v25 = (const CVector *)(v6 + 1);
            CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(v23, (CVehicle *)v6, v25, v12, v13 + 300, 0);
          }
          goto LABEL_7;
        case 1003:
          v26 = (CTaskComplexDestroyCar *)CTask::operator new((CTask *)&dword_20, 0x3EBu);
          CTaskComplexDestroyCar::CTaskComplexDestroyCar(v26, (CVehicle *)v6, 0, 0, 0);
          goto LABEL_7;
        case 1105:
          if ( CPed::IsPlayer((CPed *)v7) )
          {
LABEL_18:
            v11 = 0;
          }
          else
          {
            v18 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v17);
            CTaskComplexKillCriminal::CTaskComplexKillCriminal(v18, (CPed *)v7, 0);
          }
          goto LABEL_7;
      }
    }
  }
}


// ============================================================

// Address: 0x380cc0
// Original: _ZN13CEventHandler29ComputeVehicleToStealResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehicleToStealResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeVehicleToStealResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CVehicle *v5; // r5
  CTaskComplexStealCar *v6; // r0
  int v7; // r0

  if ( !(*(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31) )
  {
    v5 = (CVehicle *)*((_DWORD *)a2 + 3);
    if ( v5 )
    {
      v6 = (CTaskComplexStealCar *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
      CTaskComplexStealCar::CTaskComplexStealCar(v6, v5);
      *((_DWORD *)this + 9) = v7;
    }
  }
}


// ============================================================

// Address: 0x380ce8
// Original: _ZN13CEventHandler27ComputeKnockOffBikeResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeKnockOffBikeResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeKnockOffBikeResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  CEventDamage *v6; // r0
  int v7; // r0
  CPed *v8; // r2
  float *v9; // r1
  float v10; // s2
  float v11; // s0
  int v12; // r0
  float *v13; // r2
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float *v17; // r0
  float v18; // s2
  float v19; // s0
  int v20; // r0
  CPed *v21; // r1
  float *v22; // r2
  float v23; // s0
  float v24; // s2
  float v25; // s4
  int v26; // r2
  double v27; // d16
  float v28; // r2
  int v29; // r2
  int v30; // r2
  double v31; // d16
  float v32; // r2
  int v33; // r2
  int v34; // r6
  CPed *v35; // r2
  CPed *v36; // r0
  bool v37; // zf
  int v38; // r0
  CPed *v39; // r1
  int v40; // r8
  CPed *v41; // r1
  CPed *v42; // r0
  int v43; // r2
  int v44; // r3
  int v45; // r4
  CPed *v46; // r0
  int v47; // r2
  int v48; // r3
  int v49; // r4
  unsigned int v50; // r1
  CTaskComplexInAirAndLand *v51; // r0
  CPed *v52; // r0
  float *v53; // r1
  int Up; // r0
  CPedGroups *v55; // r1
  int PedsGroup; // r0
  int v57; // r8
  int IsLeader; // r0
  bool v59; // zf
  unsigned int v60; // r1
  CEventEditableResponse *v61; // r4
  int v62; // r0
  unsigned int v63; // r0
  int v64; // r0
  int v65; // r0
  CPed *v66; // r1
  int v67; // r2
  int v68; // r3
  int v69; // r5
  int Leader; // r0
  bool v71; // zf
  unsigned int v72; // r1
  CTaskComplexSequence *v73; // r4
  CTaskComplexSequence *v74; // r0
  unsigned int v75; // r1
  CTaskComplexEnterCarAsPassenger *v76; // r8
  CPed *v77; // r0
  int v78; // r2
  int v79; // r3
  int v80; // r4
  const CPed *v81; // r2
  double v82; // [sp+20h] [bp-B8h] BYREF
  float v83; // [sp+28h] [bp-B0h]
  float v84; // [sp+30h] [bp-A8h] BYREF
  float v85; // [sp+34h] [bp-A4h]
  float v86; // [sp+38h] [bp-A0h]
  _BYTE v87[64]; // [sp+44h] [bp-94h] BYREF
  _BYTE v88[84]; // [sp+84h] [bp-54h] BYREF

  CEventKnockOffBike::CEventKnockOffBike((CEventKnockOffBike *)v88);
  if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2) != 8 )
  {
    if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2) == 9 )
    {
      v8 = *this;
      v9 = (float *)*((_DWORD *)*this + 356);
      v10 = v9[18] * 0.75;
      v11 = v9[20] * 0.75;
      v85 = v9[19] * 0.75;
      v84 = v10;
      v86 = v11;
      v12 = *((unsigned __int8 *)a2 + 32);
      if ( v12 == 2 )
      {
        v26 = *((_DWORD *)v8 + 5);
        v27 = *(double *)(v26 + 16);
        v28 = *(float *)(v26 + 24);
      }
      else
      {
        if ( v12 != 1 )
        {
          v13 = (float *)*((_DWORD *)v8 + 5);
          if ( *((_BYTE *)a2 + 32) )
          {
            v14 = *v13;
            v15 = v13[1];
            v16 = v13[2];
          }
          else
          {
            v14 = v13[4];
            v15 = v13[5];
            v16 = v13[6];
          }
          *((float *)&v82 + 1) = -v15;
          *(float *)&v82 = -v14;
          v83 = -v16;
          goto LABEL_21;
        }
        v29 = *((_DWORD *)v8 + 5);
        v27 = *(double *)v29;
        v28 = *(float *)(v29 + 8);
      }
      v83 = v28;
      v82 = v27;
LABEL_21:
      CEventKnockOffBike::CEventKnockOffBike(
        (int)v87,
        (CEntity *)v9,
        (int)&v84,
        (int)&v82,
        50.0,
        0.0,
        *((_DWORD *)a2 + 6),
        (char)v12,
        0,
        0,
        0,
        0);
LABEL_28:
      a2 = (CEvent *)v88;
      CEventKnockOffBike::operator=();
      CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v87);
      goto LABEL_29;
    }
    if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2) != 35 )
      (*(void (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2);
    v17 = (float *)*((_DWORD *)*this + 356);
    v18 = v17[18] * 0.75;
    v19 = v17[20] * 0.75;
    v85 = v17[19] * 0.75;
    v84 = v18;
    v86 = v19;
    v20 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 4.0);
    if ( v20 == 2 )
    {
      v21 = *this;
      v30 = *((_DWORD *)*this + 5);
      v31 = *(double *)(v30 + 16);
      v32 = *(float *)(v30 + 24);
    }
    else
    {
      if ( v20 != 1 )
      {
        v21 = *this;
        v22 = (float *)*((_DWORD *)*this + 5);
        if ( v20 )
        {
          v23 = *v22;
          v24 = v22[1];
          v25 = v22[2];
        }
        else
        {
          v23 = v22[4];
          v24 = v22[5];
          v25 = v22[6];
        }
        *((float *)&v82 + 1) = -v24;
        *(float *)&v82 = -v23;
        v83 = -v25;
        goto LABEL_27;
      }
      v21 = *this;
      v33 = *((_DWORD *)*this + 5);
      v31 = *(double *)v33;
      v32 = *(float *)(v33 + 8);
    }
    v83 = v32;
    v82 = v31;
LABEL_27:
    CEventKnockOffBike::CEventKnockOffBike(
      (int)v87,
      *((CEntity **)v21 + 356),
      (int)&v84,
      (int)&v82,
      50.0,
      0.0,
      51,
      (char)v20,
      0,
      0,
      0,
      0);
    goto LABEL_28;
  }
  v6 = (CEventDamage *)CEventDamage::CEventDamage(
                         (int)v87,
                         *((CEntity **)a2 + 14),
                         CTimer::m_snTimeInMilliseconds,
                         54,
                         3,
                         2,
                         1,
                         0);
  if ( CEventDamage::AffectsPed(v6, *this) == 1 )
  {
    v7 = CPedDamageResponseCalculator::CPedDamageResponseCalculator(
           (int)&v84,
           *((_DWORD *)a2 + 14),
           *((_DWORD *)a2 + 10),
           54,
           3,
           1);
    CPedDamageResponseCalculator::ComputeDamageResponse(v7, *this);
    CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)&v84);
  }
  CEventDamage::~CEventDamage((CEventDamage *)v87);
LABEL_29:
  v34 = *((_DWORD *)a2 + 14);
  if ( v34 )
  {
    v35 = *this;
    if ( *(CPed **)(v34 + 1124) == *this )
      goto LABEL_35;
    v36 = *(CPed **)(v34 + 1128);
    v37 = v36 == v35;
    if ( v36 != v35 )
      v37 = *(_DWORD *)(v34 + 1132) == (_DWORD)v35;
    if ( v37 || *(CPed **)(v34 + 1136) == v35 )
    {
LABEL_35:
      CInterestingEvents::Add();
      v38 = CEventKnockOffBike::SetPedSafePosition(a2, *this);
      v39 = *this;
      if ( v38 == 1 )
      {
        CEventKnockOffBike::SetPedOutCar(a2, v39);
        v40 = CEventKnockOffBike::CalcForcesAndAnims(a2, *this);
        v41 = *this;
        if ( *((_BYTE *)a2 + 54) == 53 )
        {
          *((_DWORD *)v41 + 289) &= ~1u;
          v42 = *this;
          v43 = *((_DWORD *)*this + 290);
          v44 = *((_DWORD *)*this + 291);
          v45 = *((_DWORD *)*this + 292);
          *((_DWORD *)v42 + 289) = *((_DWORD *)*this + 289) & 0xFFFFFFFD;
          *((_DWORD *)v42 + 290) = v43;
          *((_DWORD *)v42 + 291) = v44;
          *((_DWORD *)v42 + 292) = v45;
          v46 = *this;
          v47 = *((_DWORD *)*this + 290);
          v48 = *((_DWORD *)*this + 291);
          v49 = *((_DWORD *)*this + 292);
          *((_DWORD *)v46 + 289) = *((_DWORD *)*this + 289) | 0x200;
          *((_DWORD *)v46 + 290) = v47;
          *((_DWORD *)v46 + 291) = v48;
          *((_DWORD *)v46 + 292) = v49;
          *((_DWORD *)*this + 17) |= 0x100u;
          v50 = *((_DWORD *)*this + 17) | 0x8000000;
          *((_DWORD *)*this + 17) = v50;
          if ( *((float *)*this + 337) <= 0.0 )
          {
            v62 = CTask::operator new((CTask *)&word_28, v50);
            this[9] = (CPed *)CTaskComplexDie::CTaskComplexDie(v62, *((char *)a2 + 54), 0, v40, 4.0, 0.0, 0, 0, 0, 0);
          }
          else
          {
            v51 = (CTaskComplexInAirAndLand *)CTask::operator new((CTask *)&word_10, v50);
            CTaskComplexInAirAndLand::CTaskComplexInAirAndLand(v51, 0, 0);
            this[9] = v52;
          }
        }
        else
        {
          v53 = (float *)((char *)v41 + 1348);
          if ( *v53 <= 0.0 )
          {
            if ( v40 == 191 )
            {
              v63 = *((char *)a2 + 52);
              if ( v63 > 3 )
              {
                v40 = 191;
              }
              else
              {
                v53 = (float *)dword_38127C;
                v40 = dword_38127C[v63];
              }
            }
            v64 = CTask::operator new((CTask *)&word_28, (unsigned int)v53);
            v65 = CTaskComplexDie::CTaskComplexDie(v64, *((char *)a2 + 54), 0, v40, 4.0, 0.0, 0, 0, 0, 0);
            v66 = *this;
            this[9] = (CPed *)v65;
            v67 = *((_DWORD *)v66 + 290);
            v68 = *((_DWORD *)v66 + 291);
            v69 = *((_DWORD *)v66 + 292);
            *((_DWORD *)v66 + 289) &= ~1u;
            *((_DWORD *)v66 + 290) = v67;
            *((_DWORD *)v66 + 291) = v68;
            *((_DWORD *)v66 + 292) = v69;
LABEL_66:
            if ( *(_DWORD *)(v34 + 1440) == 9 )
              *(_BYTE *)(v34 + 1576) &= ~0x10u;
            goto LABEL_68;
          }
          if ( *((_BYTE *)a2 + 54) )
          {
            CTask::operator new((CTask *)&off_18, (unsigned int)v53);
            Up = CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp();
            v55 = *this;
            this[9] = (CPed *)Up;
            PedsGroup = CPedGroups::GetPedsGroup(v55, v55);
            v57 = PedsGroup;
            if ( PedsGroup )
            {
              IsLeader = CPedGroupMembership::IsLeader((CPedGroupMembership *)(PedsGroup + 8), *this);
              v59 = IsLeader == 0;
              if ( !IsLeader )
                v59 = *((unsigned __int8 *)a2 + 53) << 31 == 0;
              if ( v59 )
              {
                Leader = CPedGroupMembership::GetLeader((CPedGroupMembership *)(v57 + 8));
                v71 = Leader == 0;
                if ( Leader )
                  v71 = *(unsigned __int8 *)(Leader + 1157) << 31 == 0;
                if ( !v71 && !CEventGroup::GetEventOfType((CEventGroup *)(*(_DWORD *)(Leader + 1088) + 104), 8) )
                {
                  v73 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v72);
                  CTaskComplexSequence::CTaskComplexSequence(v73);
                  CTaskComplexSequence::AddTask(v74, this[9]);
                  v76 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_50, v75);
                  CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v76, (CVehicle *)v34, 0, 1);
                  CTaskComplexSequence::AddTask(v73, v76);
                  this[9] = v73;
                }
              }
              else if ( CPedGroupMembership::IsLeader((CPedGroupMembership *)(v57 + 8), *this) == 1 )
              {
                v61 = (CEventEditableResponse *)CEvent::operator new((CEvent *)&word_10, v60);
                CEventEditableResponse::CEventEditableResponse(v61);
                *(_DWORD *)v61 = &off_666EA8;
                CEventGroupEvent::CEventGroupEvent((CEventGroupEvent *)v87, *this, v61);
                CPedGroupIntelligence::AddEvent((CPedGroupIntelligence *)(v57 + 48), (CEvent *)v87);
                CEventGroupEvent::~CEventGroupEvent((CEventGroupEvent *)v87);
              }
            }
            v77 = *this;
            v78 = *((_DWORD *)*this + 290);
            v79 = *((_DWORD *)*this + 291);
            v80 = *((_DWORD *)*this + 292);
            *((_DWORD *)v77 + 289) = *((_DWORD *)*this + 289) & 0xFFFFFFFE;
            *((_DWORD *)v77 + 290) = v78;
            *((_DWORD *)v77 + 291) = v79;
            *((_DWORD *)v77 + 292) = v80;
          }
        }
        v81 = (const CPed *)*((_DWORD *)a2 + 12);
        if ( v81 )
        {
          CEventDraggedOutCar::CEventDraggedOutCar(
            (CEventDraggedOutCar *)v87,
            (const CVehicle *)v34,
            v81,
            *((_BYTE *)a2 + 53) & 1);
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)*this + 272) + 104), (CEvent *)v87, 1);
          if ( *(_DWORD *)(v34 + 1440) == 9 )
            *(_BYTE *)(v34 + 1576) |= 0x10u;
          CEventDraggedOutCar::~CEventDraggedOutCar((CEventDraggedOutCar *)v87);
          goto LABEL_68;
        }
        goto LABEL_66;
      }
      if ( *((unsigned __int8 *)v39 + 1157) << 31 )
        *((_DWORD *)v39 + 7) &= ~1u;
    }
  }
LABEL_68:
  CEventKnockOffBike::~CEventKnockOffBike((CEventKnockOffBike *)v88);
}


// ============================================================

// Address: 0x381290
// Original: _ZN13CEventHandler25ComputeGunAimedAtResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeGunAimedAtResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeGunAimedAtResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v7; // r8
  int v8; // r0
  unsigned int v9; // r1
  CTaskComplexFleeEntity *v10; // r0
  _DWORD *v11; // r0
  int v12; // r0
  const CPed *v13; // r1
  int v14; // r0
  CTaskComplexSmartFleeEntity *v15; // r0
  int v16; // r0
  unsigned int v17; // r1
  bool v18; // zf
  int v19; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v20; // r0
  int v21; // r2
  int *v22; // r1
  CVehicle *v23; // r0
  unsigned int v24; // r1
  CTaskComplexCarDriveMission *v25; // r0
  int *v26; // r1
  int IsTypeMelee; // r0
  unsigned int v28; // r1
  int v29; // r0
  int v30; // r5
  CTaskComplexKillPedOnFoot *v31; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v32; // r0
  CTaskComplexReactToGunAimedAt *v33; // r0
  CTaskComplexFleeAnyMeans *v34; // r0
  CTaskComplexKillPedOnFootStealth *v35; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v36; // r0
  int v37; // r1
  int v38; // r0
  unsigned int v39; // r1
  CTaskSimpleDuck *v40; // r0
  unsigned __int16 v41; // r2
  int v42; // r5
  CTaskComplexKillCriminal *v43; // r0

  v7 = *((_DWORD *)a2 + 4);
  if ( !CPed::IsPlayer(*(CPed **)this) )
  {
    if ( a3 )
    {
      v8 = (*(int (__fastcall **)(CTask *))(*(_DWORD *)a3 + 20))(a3);
      v9 = 909;
      if ( v8 == 909 || (*(int (__fastcall **)(CTask *))(*(_DWORD *)a3 + 20))(a3) == 908 )
        goto LABEL_5;
      v12 = (*(int (__fastcall **)(CTask *))(*(_DWORD *)a3 + 20))(a3);
      v13 = (const CPed *)(elf_hash_bucket + 659);
      if ( v12 == 911 )
        goto LABEL_8;
      v14 = (*(int (__fastcall **)(CTask *))(*(_DWORD *)a3 + 20))(a3);
      v13 = (const CPed *)(elf_hash_bucket + 658);
      if ( v14 == 910 )
        goto LABEL_8;
    }
    v16 = *(_DWORD *)this;
    v17 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
    v18 = v17 == 1;
    if ( v17 == 1 )
    {
      v17 = *(unsigned __int8 *)(v16 + 1157) << 31;
      v18 = v17 == 0;
    }
    if ( v18 )
    {
      IsTypeMelee = CWeapon::IsTypeMelee((CWeapon *)(v16 + 28 * *(char *)(v16 + 1820) + 1444));
      if ( v7 )
      {
        if ( !IsTypeMelee
          && CPed::IsPlayer((CPed *)v7) == 1
          && !CPedIntelligence::IsFriendlyWith(*(CPedIntelligence **)(*(_DWORD *)this + 1088), (const CPed *)v7) )
        {
          *((_WORD *)a2 + 5) = 1000;
        }
      }
    }
    v19 = *((__int16 *)a2 + 5);
    if ( v19 <= 600 )
    {
      if ( v19 >= 262 )
      {
        v28 = v19 - 412;
        switch ( *((_WORD *)a2 + 5) )
        {
          case 0x19C:
            v29 = CTask::operator new((CTask *)&dword_20, v28);
            v11 = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v29, 0, 143, 1082130432, 412, (int)"Cower", 0);
            v26 = (int *)&`vtable for'CTaskSimpleCower;
            goto LABEL_58;
          case 0x19D:
            v38 = CTask::operator new((CTask *)&dword_34, v28);
            v11 = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                              v38,
                              0,
                              142,
                              1082130432,
                              -4.0,
                              5000,
                              413,
                              (int)"HandsUp",
                              0);
            v26 = (int *)&`vtable for'CTaskSimpleHandsUp;
            goto LABEL_58;
          case 0x19E:
          case 0x1A0:
          case 0x1A1:
          case 0x1A2:
          case 0x1A3:
          case 0x1A4:
          case 0x1A5:
          case 0x1A6:
          case 0x1A7:
          case 0x1A8:
          case 0x1A9:
          case 0x1AA:
            return;
          case 0x19F:
            if ( CPedIntelligence::GetTaskDuck(*(CPedIntelligence **)(*(_DWORD *)this + 1088), 1) )
              return;
            v40 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v39);
            v41 = 5000;
LABEL_63:
            CTaskSimpleDuck::CTaskSimpleDuck(v40, 0, v41, -1);
            goto LABEL_69;
          case 0x1AB:
            v40 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v28);
            v41 = -1;
            goto LABEL_63;
          default:
            if ( v19 != 262 )
              return;
            v36 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v28);
            CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v36, 0);
            v21 = 7;
            v22 = (int *)&`vtable for'CTaskComplexUseClosestFreeScriptedAttractorSprint;
            goto LABEL_56;
        }
      }
      if ( v19 != 200 )
      {
        if ( v19 == 258 )
        {
          v32 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v17);
          CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v32, 0);
          goto LABEL_69;
        }
        if ( v19 != 261 )
          return;
        v20 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, 0x105u);
        CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v20, 0);
        v21 = 6;
        v22 = (int *)&`vtable for'CTaskComplexUseClosestFreeScriptedAttractorRun;
LABEL_56:
        v37 = *v22;
        v11[3] = v21;
LABEL_59:
        *v11 = v37 + 8;
        goto LABEL_69;
      }
LABEL_48:
      v11 = 0;
      goto LABEL_69;
    }
    if ( v19 > 926 )
    {
      if ( v19 > 1027 )
      {
        if ( v19 == 1028 )
        {
          v35 = (CTaskComplexKillPedOnFootStealth *)CTask::operator new((CTask *)&dword_48, 0x404u);
          CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(v35, (CPed *)v7);
          goto LABEL_69;
        }
        if ( v19 != 1105 )
          return;
        if ( !CPed::IsPlayer((CPed *)v7) )
        {
          v9 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
          if ( v9 == 2
            || (v42 = *(char *)(v7 + 1820),
                CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
            || CWeapon::IsTypeMelee((CWeapon *)(v7 + 28 * v42 + 1444)) == 1 )
          {
            v43 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v9);
            CTaskComplexKillCriminal::CTaskComplexKillCriminal(v43, (CPed *)v7, 0);
            goto LABEL_69;
          }
          goto LABEL_5;
        }
        goto LABEL_48;
      }
      v13 = (const CPed *)(elf_hash_bucket + 675);
      if ( v19 != 927 )
      {
        if ( v19 != 1000 )
          return;
        v9 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
        if ( v9 == 2
          || (v30 = *(char *)(v7 + 1820),
              CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
          || CWeapon::IsTypeMelee((CWeapon *)(v7 + 28 * v30 + 1444)) == 1 )
        {
          v31 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v9);
          CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v31, (CPed *)v7, -1, 0, 0, 0, 1);
          goto LABEL_69;
        }
        goto LABEL_5;
      }
    }
    else if ( v19 > 908 )
    {
      v9 = 909;
      if ( v19 == 909 )
      {
LABEL_5:
        v10 = (CTaskComplexFleeEntity *)CTask::operator new((CTask *)&off_3C, v9);
        CTaskComplexFleeEntity::CTaskComplexFleeEntity(v10, (CEntity *)v7, 0, 60.0, 1000000, 1000, 1.0);
LABEL_69:
        *((_DWORD *)this + 9) = v11;
        return;
      }
      v13 = (const CPed *)(elf_hash_bucket + 659);
      if ( v19 != 911 )
        return;
      if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) == 0 || *(_DWORD *)(v7 + 1436) != 6 )
      {
LABEL_8:
        v15 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, (unsigned int)v13);
        CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v15, (CEntity *)v7, 0, 60.0, 1000000, 1000, 1.0);
        goto LABEL_69;
      }
    }
    else
    {
      if ( v19 == 601 )
      {
        v33 = (CTaskComplexReactToGunAimedAt *)CTask::operator new((CTask *)&dword_1C, 0x259u);
        CTaskComplexReactToGunAimedAt::CTaskComplexReactToGunAimedAt(v33, (CPed *)v7);
        goto LABEL_69;
      }
      if ( v19 != 726 )
        return;
      v13 = *(const CPed **)this;
      v23 = *(CVehicle **)(*(_DWORD *)this + 1424);
      if ( v23 )
      {
        if ( CVehicle::IsDriver(v23, v13) )
        {
          v25 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v24);
          CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
            v25,
            *(CVehicle **)(*(_DWORD *)this + 1424),
            0,
            1,
            2,
            40.0);
          v26 = (int *)&`vtable for'CTaskComplexCarDriveMissionFleeScene;
LABEL_58:
          v37 = *v26;
          goto LABEL_59;
        }
        v13 = *(const CPed **)this;
      }
      if ( (*((_DWORD *)v13 + 292) & 0x800) == 0 || *(_DWORD *)(v7 + 1436) != 6 )
        goto LABEL_8;
    }
    v34 = (CTaskComplexFleeAnyMeans *)CTask::operator new((CTask *)&dword_54, (unsigned int)v13);
    CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(
      v34,
      (CEntity *)v7,
      1,
      60.0,
      1000000,
      4000,
      4000,
      20.0,
      1000,
      1.0);
    goto LABEL_69;
  }
}


// ============================================================

// Address: 0x3818c0
// Original: _ZN13CEventHandler28ComputeScriptCommandResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeScriptCommandResponse(CEvent *,CTask *,CTask *)
CPedScriptedTaskRecordData *__fastcall CEventHandler::ComputeScriptCommandResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  int v6; // r1
  int v7; // r0
  int v8; // r6
  CTask *v9; // r6
  int v10; // r0
  CTask *v11; // r1
  int v12; // r2
  CEventScriptCommand *v13; // r1
  CPedScriptedTaskRecordData *result; // r0
  CEventScriptCommand *v15; // r5
  CEventScriptCommand *v16; // r1

  v6 = *(_DWORD *)this;
  v7 = *(_DWORD *)(*(_DWORD *)this + 1088);
  if ( *((_DWORD *)a2 + 3) == 3 )
  {
    v8 = *(_DWORD *)(v7 + 16);
    if ( !v8
      || (*(int (__fastcall **)(_DWORD, int, int, CEvent *))(*(_DWORD *)v8 + 28))(*(_DWORD *)(v7 + 16), v6, 1, a2) )
    {
      v9 = (CTask *)(*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 68))(a2);
      CTaskManager::ClearTaskEventResponse((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4));
      v10 = *(_DWORD *)this;
      v11 = v9;
      v12 = 3;
      goto LABEL_8;
    }
  }
  else
  {
    v8 = *(_DWORD *)(v7 + 20);
    if ( !v8
      || (*(int (__fastcall **)(_DWORD, int, int, CEvent *))(*(_DWORD *)v8 + 28))(*(_DWORD *)(v7 + 20), v6, 1, a2) )
    {
      v9 = (CTask *)(*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 68))(a2);
      CTaskManager::ClearTaskEventResponse((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4));
      v10 = *(_DWORD *)this;
      v11 = v9;
      v12 = 4;
LABEL_8:
      CTaskManager::SetTask((CTaskManager *)(*(_DWORD *)(v10 + 1088) + 4), v11, v12, 1);
      result = (CPedScriptedTaskRecordData *)CPedScriptedTaskRecord::GetRecordAssociatedWithEvent(a2, v13);
      if ( result )
        return (CPedScriptedTaskRecordData *)sub_18F9B4(result, v9);
      return result;
    }
  }
  (*(void (__fastcall **)(int, _DWORD, _DWORD, CEvent *))(*(_DWORD *)v8 + 28))(v8, *(_DWORD *)this, 0, a2);
  v15 = (CEventScriptCommand *)CEventGroup::Add((CEventGroup *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 104), a2, 0);
  result = (CPedScriptedTaskRecordData *)CPedScriptedTaskRecord::GetRecordAssociatedWithEvent(a2, v16);
  if ( result )
    return (CPedScriptedTaskRecordData *)j_CPedScriptedTaskRecordData::AssociateWithEvent(result, v15);
  return result;
}


// ============================================================

// Address: 0x38199a
// Original: _ZN13CEventHandler26ComputeVehicleDiedResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehicleDiedResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeVehicleDiedResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  CPed *v5; // r0
  bool v6; // zf
  CTask *v7; // r2
  bool v8; // zf
  int v9; // r0

  if ( *((_DWORD *)a2 + 3) )
  {
    *((_DWORD *)*this + 17) |= 0x20000000u;
    *((_DWORD *)*this + 337) = 0;
    v5 = *this;
    v6 = *((unsigned __int8 *)*this + 1157) << 31 == 0;
    if ( *((unsigned __int8 *)*this + 1157) << 31 )
    {
      v5 = (CPed *)*((_DWORD *)v5 + 356);
      v6 = v5 == 0;
    }
    if ( v6 )
      goto LABEL_10;
    v7 = (CTask *)*((_DWORD *)v5 + 360);
    v8 = v7 == (CTask *)byte_9;
    if ( v7 != (CTask *)byte_9 )
      v8 = *((_DWORD *)v5 + 361) == 2;
    if ( v8 )
    {
      CEventHandler::ComputeKnockOffBikeResponse(this, a2, v7, a4);
    }
    else
    {
LABEL_10:
      v9 = CTask::operator new((CTask *)&word_28, (unsigned int)a2);
      this[9] = (CPed *)CTaskComplexDie::CTaskComplexDie(v9, 51, 0, 15, 4.0, 0.0, 0, 0, 0, 0);
    }
  }
}


// ============================================================

// Address: 0x381a0c
// Original: _ZN13CEventHandler24ComputePedFriendResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedFriendResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedFriendResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v6; // r0
  int TaskByType; // r0
  unsigned int v8; // r1
  bool v9; // zf
  CTaskComplexUseClosestFreeScriptedAttractor *v10; // r0
  int v11; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v12; // r0
  _DWORD *v13; // r0
  int v14; // r2
  int *v15; // r1
  CTaskComplexUseClosestFreeScriptedAttractor *v16; // r0
  int v17; // r1
  CPed *v18; // r5
  CTaskComplexProstituteSolicit *v19; // r0
  int v20; // r0

  v6 = *((__int16 *)a2 + 5);
  if ( v6 > 260 )
  {
    if ( v6 == 261 )
    {
      v12 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, 0x105u);
      CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v12, 0);
      v14 = 6;
      v15 = (int *)&`vtable for'CTaskComplexUseClosestFreeScriptedAttractorRun;
    }
    else
    {
      if ( v6 != 262 )
      {
        if ( v6 == 1309 )
        {
          TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*(_DWORD *)this + 1088), 1309);
          v9 = TaskByType == 0;
          if ( !TaskByType )
            v9 = *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 == 0;
          if ( v9 )
          {
            v18 = (CPed *)*((_DWORD *)a2 + 4);
            v19 = (CTaskComplexProstituteSolicit *)CTask::operator new((CTask *)&word_30, v8);
            CTaskComplexProstituteSolicit::CTaskComplexProstituteSolicit(v19, v18);
            *((_DWORD *)this + 9) = v20;
          }
        }
        return;
      }
      v16 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, 0x105u);
      CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v16, 0);
      v14 = 7;
      v15 = (int *)&`vtable for'CTaskComplexUseClosestFreeScriptedAttractorSprint;
    }
    v17 = *v15;
    v13[3] = v14;
    *v13 = v17 + 8;
    *((_DWORD *)this + 9) = v13;
    return;
  }
  if ( v6 == 200 )
  {
    *((_DWORD *)this + 9) = 0;
  }
  else if ( v6 == 258 )
  {
    v10 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, (unsigned int)a2);
    CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v10, 0);
    *((_DWORD *)this + 9) = v11;
  }
}


// ============================================================

// Address: 0x381ac4
// Original: _ZN13CEventHandler24ComputePedThreatResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedThreatResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedThreatResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  int v8; // r5
  int v9; // r0
  unsigned int v10; // r1
  CTaskComplexFleeEntity *v11; // r0
  _DWORD *v12; // r0
  unsigned int v13; // r1
  unsigned int v14; // r1
  int v15; // r0
  _DWORD *v16; // r1
  int v17; // r5
  CTaskComplexUseSequence *v18; // r0
  unsigned int v19; // r1
  CTaskComplexKillCriminal *v20; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v21; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v22; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v23; // r0
  int v24; // r0
  unsigned int v25; // r1
  CTaskSimpleDuck *v26; // r0
  CTaskSimpleDuck *v27; // r0
  CTaskComplexFleeAnyMeans *v28; // r0
  CTaskComplexSeekEntityAiming *v29; // r0
  CTaskComplexSmartFleeEntity *v30; // r0
  int v31; // r0
  int v32; // r6
  CTaskSimpleGunControl *v33; // r0
  int v34; // r0
  int v35; // r1
  bool v36; // zf
  int WeaponInfo; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r6
  int v42; // r2
  float v43; // s0
  float32x2_t v44; // d16
  int v45; // r6
  unsigned int v46; // r1
  float32x2_t v47; // d16
  float32x2_t v48; // d1
  float v49; // s4
  float v50; // s0
  float v51; // s16
  CTaskSimpleGangDriveBy *v52; // r0
  int v53; // r0
  unsigned int v54; // r1
  int v55; // r6
  CTaskComplexKillPedOnFoot *v56; // r0
  int v57; // r6
  _DWORD *v58; // r0
  int v59; // r2
  int v60; // r3
  CTaskComplexKillPedOnFootStealth *v61; // r0
  int v62; // r6
  int v63; // r6
  CTaskComplexKillPedOnFoot *v64; // r0
  CTaskComplexSequence *v65; // r8
  unsigned int v66; // r1
  CTaskComplexKillPedOnFoot *v67; // r6
  unsigned int v68; // r1
  CTaskComplexCarDriveWander *v69; // r5
  unsigned int v70; // r1
  bool v71; // zf
  CTaskComplexLeaveCar *v72; // r0
  CTaskComplexSmartFleeEntity *v73; // r0
  int v74; // r0
  CVehicle *v75; // r0
  CTaskComplexCarDriveMission *v76; // r0
  CVehicle *v77; // r0
  CTaskComplexSmartFleeEntity *v78; // r0

  v8 = *((_DWORD *)a2 + 4);
  if ( v8 )
  {
    v9 = *((__int16 *)a2 + 5);
    if ( v9 < 704 )
    {
      v13 = v9 - 244;
      switch ( v9 )
      {
        case 244:
          v17 = *(char *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 208);
          if ( v17 >= 0 && *((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v17 + 4) )
          {
            v18 = (CTaskComplexUseSequence *)CTask::operator new((CTask *)&dword_1C, v13);
            CTaskComplexUseSequence::CTaskComplexUseSequence(v18, v17);
            break;
          }
          return;
        case 245:
        case 246:
        case 247:
        case 248:
        case 249:
        case 250:
        case 251:
        case 252:
        case 253:
        case 254:
        case 255:
        case 256:
        case 257:
        case 259:
        case 260:
          return;
        case 258:
          v21 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v13);
          CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v21, 0);
          break;
        case 261:
          v22 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v13);
          CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v22, 0);
          v12[3] = 6;
          v16 = &`vtable for'CTaskComplexUseClosestFreeScriptedAttractorRun;
          goto LABEL_22;
        case 262:
          v23 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v13);
          CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v23, 0);
          v12[3] = 7;
          v16 = &`vtable for'CTaskComplexUseClosestFreeScriptedAttractorSprint;
LABEL_22:
          *v12 = *v16 + 8;
          break;
        default:
          v14 = v9 - 412;
          switch ( *((_WORD *)a2 + 5) )
          {
            case 0x19C:
              v15 = CTask::operator new((CTask *)&dword_20, v14);
              v12 = (_DWORD *)CTaskSimpleRunAnim::CTaskSimpleRunAnim(v15, 0, 143, 1082130432, 412, (int)"Cower", 0);
              v16 = &`vtable for'CTaskSimpleCower;
              goto LABEL_22;
            case 0x19D:
              v24 = CTask::operator new((CTask *)&dword_34, v14);
              v12 = (_DWORD *)CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                                v24,
                                0,
                                142,
                                1082130432,
                                -4.0,
                                5000,
                                413,
                                (int)"HandsUp",
                                0);
              v16 = &`vtable for'CTaskSimpleHandsUp;
              goto LABEL_22;
            case 0x19E:
            case 0x1A0:
            case 0x1A1:
            case 0x1A2:
            case 0x1A3:
            case 0x1A4:
            case 0x1A5:
            case 0x1A6:
            case 0x1A7:
            case 0x1A8:
            case 0x1A9:
            case 0x1AA:
              return;
            case 0x19F:
              if ( CPedIntelligence::GetTaskDuck(*(CPedIntelligence **)(*(_DWORD *)this + 1088), 1) )
                return;
              v26 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v25);
              CTaskSimpleDuck::CTaskSimpleDuck(v26, 0, 0x1388u, -1);
              break;
            case 0x1AB:
              v27 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v14);
              CTaskSimpleDuck::CTaskSimpleDuck(v27, 0, 0xFFFFu, -1);
              goto LABEL_66;
            default:
              if ( v9 != 200 )
                return;
LABEL_17:
              v12 = 0;
              break;
          }
          break;
      }
LABEL_66:
      *((_DWORD *)this + 9) = v12;
    }
    else
    {
      v10 = v9 - 909;
      switch ( *((_WORD *)a2 + 5) )
      {
        case 0x38D:
          v11 = (CTaskComplexFleeEntity *)CTask::operator new((CTask *)&off_3C, v10);
          CTaskComplexFleeEntity::CTaskComplexFleeEntity(v11, (CEntity *)v8, 0, 60.0, 1000000, 1000, 1.0);
          goto LABEL_66;
        case 0x38E:
        case 0x390:
        case 0x391:
        case 0x392:
        case 0x393:
        case 0x394:
        case 0x395:
        case 0x396:
        case 0x397:
        case 0x398:
        case 0x399:
        case 0x39A:
        case 0x39B:
        case 0x39C:
        case 0x39D:
        case 0x39E:
        case 0x3A0:
        case 0x3A1:
        case 0x3A2:
        case 0x3A3:
        case 0x3A4:
        case 0x3A6:
        case 0x3A7:
        case 0x3A8:
        case 0x3A9:
        case 0x3AA:
        case 0x3AB:
        case 0x3AD:
        case 0x3AE:
        case 0x3AF:
        case 0x3B0:
        case 0x3B1:
        case 0x3B2:
        case 0x3B3:
        case 0x3B4:
        case 0x3B5:
        case 0x3B6:
        case 0x3B7:
        case 0x3B8:
        case 0x3B9:
        case 0x3BA:
        case 0x3BB:
        case 0x3BC:
        case 0x3BD:
        case 0x3BE:
        case 0x3BF:
        case 0x3C0:
        case 0x3C1:
        case 0x3C2:
        case 0x3C3:
        case 0x3C4:
        case 0x3C5:
        case 0x3C6:
        case 0x3C7:
        case 0x3C8:
        case 0x3C9:
        case 0x3CA:
        case 0x3CB:
        case 0x3CC:
        case 0x3CD:
        case 0x3CE:
        case 0x3CF:
        case 0x3D0:
        case 0x3D1:
        case 0x3D2:
        case 0x3D3:
        case 0x3D4:
        case 0x3D5:
        case 0x3D6:
        case 0x3D7:
        case 0x3D8:
        case 0x3D9:
        case 0x3DA:
        case 0x3DB:
        case 0x3DC:
        case 0x3DD:
        case 0x3DE:
        case 0x3DF:
        case 0x3E0:
        case 0x3E1:
        case 0x3E2:
        case 0x3E3:
        case 0x3E4:
        case 0x3E5:
        case 0x3E6:
        case 0x3E7:
        case 0x3E9:
        case 0x3EA:
        case 0x3EB:
        case 0x3EC:
        case 0x3ED:
        case 0x3EE:
        case 0x3EF:
        case 0x3F0:
        case 0x3F1:
        case 0x3F2:
        case 0x3F3:
        case 0x3F4:
        case 0x3F5:
        case 0x3F6:
        case 0x3F7:
        case 0x3F8:
        case 0x3F9:
        case 0x3FA:
        case 0x3FB:
        case 0x3FD:
        case 0x401:
        case 0x402:
        case 0x403:
          return;
        case 0x38F:
          if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) != 0 && *(_DWORD *)(v8 + 1436) == 6 )
            goto LABEL_28;
          v73 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v10);
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v73, (CEntity *)v8, 0, 60.0, 1000000, 1000, 1.0);
          *((_DWORD *)this + 9) = v74;
          if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 8))(a2) == 37 )
          {
            v31 = *((_DWORD *)this + 9);
LABEL_76:
            *(_DWORD *)(v31 + 48) = 4;
          }
          return;
        case 0x39F:
          goto LABEL_28;
        case 0x3A5:
          v29 = (CTaskComplexSeekEntityAiming *)CTask::operator new((CTask *)&off_18, v10);
          CTaskComplexSeekEntityAiming::CTaskComplexSeekEntityAiming(v29, (CEntity *)v8, 10.0, 5.0);
          goto LABEL_66;
        case 0x3AC:
          v30 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v10);
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v30, (CEntity *)v8, 0, 60.0, 1000000, 1000, 1.0);
          *((_DWORD *)this + 9) = v31;
          goto LABEL_76;
        case 0x3E8:
          v10 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
          if ( v10 == 2 )
            goto LABEL_65;
          v32 = *(char *)(v8 + 1820);
          if ( CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1
            || CWeapon::IsTypeMelee((CWeapon *)(v8 + 28 * v32 + 1444)) == 1 )
          {
            goto LABEL_65;
          }
          v10 = *(_DWORD *)this;
          if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) != 0 && *(_DWORD *)(v8 + 1436) == 6 )
            goto LABEL_28;
          if ( (*(_DWORD *)(*(_DWORD *)this + 1156) & 0x100) != 0 )
          {
            v75 = *(CVehicle **)(v10 + 1424);
            if ( v75 )
            {
              if ( CVehicle::IsDriver(v75, (const CPed *)v10) == 1 )
                goto LABEL_89;
            }
          }
          goto LABEL_93;
        case 0x3FC:
          v33 = (CTaskSimpleGunControl *)CTask::operator new((CTask *)&off_3C, v10);
          CTaskSimpleGunControl::CTaskSimpleGunControl(v33, (CEntity *)v8, 0, 0, 0, 1, 10000);
          goto LABEL_66;
        case 0x3FE:
          v34 = *(_DWORD *)this;
          if ( *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 )
          {
            v35 = *(_DWORD *)(v34 + 1424);
            v36 = v35 == 0;
            if ( v35 )
              v36 = v34 == *(_DWORD *)(v35 + 1124);
            if ( !v36
              && CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v34 + 1088) + 4), 709)
              && *(_DWORD *)CWeaponInfo::GetWeaponInfo() == 1 )
            {
              WeaponInfo = CWeaponInfo::GetWeaponInfo();
              v38 = *(_DWORD *)this;
              v39 = *(_DWORD *)(v8 + 20);
              v40 = *(_DWORD *)(*(_DWORD *)this + 20);
              v41 = v39 + 48;
              if ( !v39 )
                v41 = v8 + 4;
              v42 = v40 + 48;
              v43 = *(float *)v41;
              if ( !v40 )
                v42 = v38 + 4;
              v44.n64_u64[0] = *(unsigned __int64 *)(v41 + 4);
              v45 = 0;
              v46 = *(_DWORD *)(v38 + 1088);
              v47.n64_u64[0] = vsub_f32(v44, *(float32x2_t *)(v42 + 4)).n64_u64[0];
              v4.n64_u32[0] = *(_DWORD *)(v46 + 188);
              v5.n64_u32[0] = *(_DWORD *)(v46 + 192);
              v48.n64_u64[0] = vmul_f32(v47, v47).n64_u64[0];
              v49 = vmax_f32(v4, v5).n64_f32[0];
              v5.n64_u32[0] = *(_DWORD *)(WeaponInfo + 4);
              v50 = sqrtf(
                      (float)((float)((float)(v43 - *(float *)v42) * (float)(v43 - *(float *)v42)) + v48.n64_f32[0])
                    + v48.n64_f32[1]);
              v48.n64_f32[0] = v49 + 5.0;
              v51 = vmax_f32(v5, v48).n64_f32[0];
              if ( v50 < v51 )
              {
                v52 = (CTaskSimpleGangDriveBy *)CTask::operator new((CTask *)&dword_44, v46);
                CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(v52, (CEntity *)v8, 0, v51, 90, 8, 0);
                v45 = v53;
              }
              *((_DWORD *)this + 9) = v45;
            }
          }
          return;
        case 0x3FF:
          v54 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
          if ( v54 == 2
            || (v55 = *(char *)(v8 + 1820),
                CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
            || CWeapon::IsTypeMelee((CWeapon *)(v8 + 28 * v55 + 1444)) == 1 )
          {
            v56 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v54);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v56, (CPed *)v8, 10000, 0, 0, 0, 1);
            goto LABEL_66;
          }
          v10 = *(_DWORD *)this;
          if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) != 0 && *(_DWORD *)(v8 + 1436) == 6 )
            goto LABEL_28;
          if ( (*(_DWORD *)(*(_DWORD *)this + 1156) & 0x100) == 0 )
            goto LABEL_93;
          v77 = *(CVehicle **)(v10 + 1424);
          if ( !v77 || CVehicle::IsDriver(v77, (const CPed *)v10) != 1 )
            goto LABEL_93;
LABEL_89:
          v76 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v10);
          CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
            v76,
            *(CVehicle **)(*(_DWORD *)this + 1424),
            0,
            1,
            2,
            40.0);
          v16 = &`vtable for'CTaskComplexCarDriveMissionFleeScene;
          goto LABEL_22;
        case 0x400:
          if ( *(_BYTE *)(*(_DWORD *)this + 1096) == 2
            || (v57 = *(char *)(v8 + 1820),
                CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
            || CWeapon::IsTypeMelee((CWeapon *)(v8 + 28 * v57 + 1444)) == 1 )
          {
            v58 = *(_DWORD **)this;
            v59 = *(_DWORD *)(*(_DWORD *)this + 1160);
            v60 = *(_DWORD *)(*(_DWORD *)this + 1164);
            v10 = *(_DWORD *)(*(_DWORD *)this + 1156) | 0x200000;
            goto LABEL_64;
          }
          if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) != 0 && *(_DWORD *)(v8 + 1436) == 6 )
            goto LABEL_28;
          goto LABEL_93;
        case 0x404:
          v61 = (CTaskComplexKillPedOnFootStealth *)CTask::operator new((CTask *)&dword_48, v10);
          CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(v61, (CPed *)v8);
          goto LABEL_66;
        case 0x405:
          if ( *(_BYTE *)(*(_DWORD *)this + 1096) == 2
            || (v62 = *(char *)(v8 + 1820),
                CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
            || CWeapon::IsTypeMelee((CWeapon *)(v8 + 28 * v62 + 1444)) == 1 )
          {
            v58 = *(_DWORD **)this;
            v59 = *(_DWORD *)(*(_DWORD *)this + 1160);
            v60 = *(_DWORD *)(*(_DWORD *)this + 1164);
            v10 = *(_DWORD *)(*(_DWORD *)this + 1156) | 0x400000;
LABEL_64:
            v63 = v58[292];
            v58[289] = v10;
            v58[290] = v59;
            v58[291] = v60;
            v58[292] = v63;
LABEL_65:
            v64 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v10);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v64, (CPed *)v8, -1, 0, 0, 0, 1);
          }
          else if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) != 0 && *(_DWORD *)(v8 + 1436) == 6 )
          {
LABEL_28:
            v28 = (CTaskComplexFleeAnyMeans *)CTask::operator new((CTask *)&dword_54, v10);
            CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(
              v28,
              (CEntity *)v8,
              1,
              60.0,
              1000000,
              4000,
              4000,
              20.0,
              1000,
              1.0);
          }
          else
          {
LABEL_93:
            v78 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v10);
            CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v78, (CEntity *)v8, 0, 60.0, 1000000, 1000, 1.0);
          }
          goto LABEL_66;
        case 0x406:
          if ( !*(_DWORD *)(*(_DWORD *)this + 1424) )
            goto LABEL_65;
          v65 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v10);
          CTaskComplexSequence::CTaskComplexSequence(v65);
          v67 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v66);
          CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v67, (CPed *)v8, -1, 0, 0, 0, 1);
          CTaskComplexSequence::AddTask(v65, v67);
          v69 = (CTaskComplexCarDriveWander *)CTask::operator new((CTask *)&dword_24, v68);
          CTaskComplexCarDriveWander::CTaskComplexCarDriveWander(v69, *(CVehicle **)(*(_DWORD *)this + 1424), 0, 10.0);
          CTaskComplexSequence::AddTask(v65, v69);
          *((_DWORD *)this + 9) = v65;
          return;
        default:
          if ( v9 != 704 )
          {
            if ( v9 != 1105 )
              return;
            if ( !CPed::IsPlayer((CPed *)v8) )
            {
              v20 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v19);
              CTaskComplexKillCriminal::CTaskComplexKillCriminal(v20, (CPed *)v8, 1);
              goto LABEL_66;
            }
            goto LABEL_17;
          }
          v70 = *(_DWORD *)(*(_DWORD *)this + 1424);
          v71 = v70 == 0;
          if ( v70 )
            v71 = *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31 == 0;
          if ( !v71 )
          {
            v72 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v70);
            CTaskComplexLeaveCar::CTaskComplexLeaveCar(v72, *(CVehicle **)(*(_DWORD *)this + 1424), 0, 0, 0, 1);
            goto LABEL_66;
          }
          break;
      }
    }
  }
}


// ============================================================

// Address: 0x382658
// Original: _ZN13CEventHandler22ComputeSeenCopResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeSeenCopResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeSeenCopResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CPed *v4; // r5
  int v6; // r0
  CTaskComplexSmartFleeEntity *v7; // r0
  int v8; // r0
  CTaskComplexKillPedOnFoot *v9; // r0

  v4 = (CPed *)*((_DWORD *)a2 + 4);
  if ( v4 )
  {
    v6 = *((__int16 *)a2 + 5);
    switch ( v6 )
    {
      case 200:
        v8 = 0;
        break;
      case 1000:
        v9 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, (unsigned int)a2);
        CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v9, v4, -1, 0, 0, 0, 1);
        break;
      case 911:
        v7 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
        CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v7, v4, 0, 60.0, 1000000, 1000, 1.0);
        break;
      default:
        return;
    }
    *((_DWORD *)this + 9) = v8;
  }
}


// ============================================================

// Address: 0x3826f4
// Original: _ZN13CEventHandler32ComputePedThreatBadlyLitResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedThreatBadlyLitResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedThreatBadlyLitResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CEntity *v6; // r5
  int v7; // r0
  CTaskComplexInvestigateDisturbance *v8; // r0
  int v9; // r0

  v6 = (CEntity *)*((_DWORD *)a2 + 4);
  if ( v6 )
  {
    v7 = *((__int16 *)a2 + 5);
    if ( v7 == 200 )
    {
      v9 = 0;
    }
    else
    {
      if ( v7 != 935 )
        return;
      v8 = (CTaskComplexInvestigateDisturbance *)CTask::operator new((CTask *)&dword_1C, 0x3A7u);
      CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(v8, (CEvent *)((char *)a2 + 24), v6);
    }
    *((_DWORD *)this + 9) = v9;
  }
}


// ============================================================

// Address: 0x382730
// Original: _ZN13CEventHandler28ComputePedSoundQuietResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePedSoundQuietResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePedSoundQuietResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v6; // r0
  CTaskComplexInvestigateDisturbance *v7; // r6
  CEntity *v8; // r0

  if ( (*(int (__fastcall **)(CEvent *, _DWORD, CTask *, CTask *))(*(_DWORD *)a2 + 44))(
         a2,
         *(_DWORD *)(*(_DWORD *)a2 + 44),
         a3,
         a4) )
  {
    v6 = *((__int16 *)a2 + 5);
    if ( v6 == 200 )
    {
      v7 = 0;
    }
    else
    {
      if ( v6 != 935 )
        return;
      v7 = (CTaskComplexInvestigateDisturbance *)CTask::operator new((CTask *)&dword_1C, 0x3A7u);
      v8 = (CEntity *)(*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 44))(a2);
      CTaskComplexInvestigateDisturbance::CTaskComplexInvestigateDisturbance(v7, (CEvent *)((char *)a2 + 28), v8);
    }
    *((_DWORD *)this + 9) = v7;
  }
}


// ============================================================

// Address: 0x382784
// Original: _ZN13CEventHandler24ComputeLowHealthResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeLowHealthResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeLowHealthResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v5; // r0
  CTaskComplexEvasiveDiveAndGetUp *v6; // r0
  _DWORD *v7; // r0
  _DWORD v8[5]; // [sp+4h] [bp-14h] BYREF

  v5 = *((__int16 *)a2 + 5);
  if ( v5 == 200 )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 != 513 )
      return;
    v6 = (CTaskComplexEvasiveDiveAndGetUp *)CTask::operator new((CTask *)&dword_24, 0x201u);
    memset(v8, 0, 12);
    CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(v6, 0, 0, (const CVector *)v8, 1);
    *v7 = &off_66B960;
  }
  *((_DWORD *)this + 9) = v7;
}


// ============================================================

// Address: 0x3827d0
// Original: _ZN13CEventHandler30ComputeReallyLowHealthResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeReallyLowHealthResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeReallyLowHealthResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v5; // r0
  CTaskComplexEvasiveDiveAndGetUp *v6; // r0
  _DWORD *v7; // r0
  _DWORD v8[5]; // [sp+4h] [bp-14h] BYREF

  v5 = *((__int16 *)a2 + 5);
  if ( v5 == 200 )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 != 513 )
      return;
    v6 = (CTaskComplexEvasiveDiveAndGetUp *)CTask::operator new((CTask *)&dword_24, 0x201u);
    memset(v8, 0, 12);
    CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(v6, 0, 0, (const CVector *)v8, 1);
    *v7 = &off_66B960;
  }
  *((_DWORD *)this + 9) = v7;
}


// ============================================================

// Address: 0x38281c
// Original: _ZN13CEventHandler31ComputeLowAngerAtPlayerResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeLowAngerAtPlayerResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeLowAngerAtPlayerResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v5; // r0
  CTaskComplexKillPedOnFoot *v6; // r5
  CEntity *v7; // r0
  CPed *PlayerPed; // r0

  v5 = *((__int16 *)a2 + 5);
  if ( v5 > 910 )
  {
    if ( v5 == 1000 )
    {
      v6 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, 0x38Eu);
      PlayerPed = (CPed *)FindPlayerPed(-1);
      CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v6, PlayerPed, -1, 0, 0, 0, 1);
    }
    else
    {
      if ( v5 != 911 )
        return;
      v6 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
      v7 = (CEntity *)FindPlayerPed(-1);
      CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v6, v7, 0, 60.0, 1000000, 1000, 1.0);
    }
  }
  else if ( v5 == 200 )
  {
    v6 = 0;
  }
  else
  {
    if ( v5 != 427 )
      return;
    v6 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&word_28, 0x1ABu);
    CTaskSimpleDuck::CTaskSimpleDuck(v6, 0, 0xFFFFu, -1);
  }
  *((_DWORD *)this + 9) = v6;
}


// ============================================================

// Address: 0x3828f8
// Original: _ZN13CEventHandler32ComputeHighAngerAtPlayerResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeHighAngerAtPlayerResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeHighAngerAtPlayerResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v5; // r0
  CTaskComplexKillPedOnFoot *v6; // r5
  CEntity *v7; // r0
  CPed *PlayerPed; // r0

  v5 = *((__int16 *)a2 + 5);
  if ( v5 > 910 )
  {
    if ( v5 == 1000 )
    {
      v6 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, 0x38Eu);
      PlayerPed = (CPed *)FindPlayerPed(-1);
      CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v6, PlayerPed, -1, 0, 0, 0, 1);
    }
    else
    {
      if ( v5 != 911 )
        return;
      v6 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
      v7 = (CEntity *)FindPlayerPed(-1);
      CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v6, v7, 0, 60.0, 1000000, 1000, 1.0);
    }
  }
  else if ( v5 == 200 )
  {
    v6 = 0;
  }
  else
  {
    if ( v5 != 427 )
      return;
    v6 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&word_28, 0x1ABu);
    CTaskSimpleDuck::CTaskSimpleDuck(v6, 0, 0xFFFFu, -1);
  }
  *((_DWORD *)this + 9) = v6;
}


// ============================================================

// Address: 0x3829d4
// Original: _ZN13CEventHandler21ComputeOnFireResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeOnFireResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeOnFireResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  unsigned int v5; // r1
  unsigned int v6; // r1
  CTaskSimplePlayerOnFire *v7; // r0
  int v8; // r0
  CTaskComplexOnFire *v9; // r0
  int v10; // r0

  if ( CPed::IsPlayer(*(CPed **)this) == 1 )
  {
    if ( !CTaskManager::GetTaskSecondary((CTaskManager *)(*(_DWORD *)(*(_DWORD *)this + 1088) + 4), 4) )
    {
      v7 = (CTaskSimplePlayerOnFire *)CTask::operator new((CTask *)&off_18, v6);
      CTaskSimplePlayerOnFire::CTaskSimplePlayerOnFire(v7);
      *((_DWORD *)this + 12) = v8;
    }
  }
  else
  {
    v9 = (CTaskComplexOnFire *)CTask::operator new((CTask *)&byte_9[3], v5);
    CTaskComplexOnFire::CTaskComplexOnFire(v9);
    *((_DWORD *)this + 9) = v10;
  }
}


// ============================================================

// Address: 0x382a14
// Original: _ZN13CEventHandler39ComputeBuildingCollisionPassiveResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeBuildingCollisionPassiveResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeBuildingCollisionPassiveResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  ;
}


// ============================================================

// Address: 0x382a18
// Original: _ZN13CEventHandler26ComputeWaterCannonResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeWaterCannonResponse(CEvent *,CTask *,CTask *)
CPed *__fastcall CEventHandler::ComputeWaterCannonResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  const CVector *v6; // r2
  int v7; // r6
  unsigned int v8; // r1
  CTaskComplexFallAndGetUp *v9; // r0
  CPed *v10; // r0
  CPed *result; // r0
  float v12; // s0
  float v13; // s2
  float v14; // s2

  CPed::Say(*this, 0x158u, 0, 1.0, 0, 0, 0);
  v7 = CPedGeometryAnalyser::ComputePedHitSide(*this, (CEvent *)((char *)a2 + 24), v6);
  v9 = (CTaskComplexFallAndGetUp *)CTask::operator new((CTask *)&off_18, v8);
  CTaskComplexFallAndGetUp::CTaskComplexFallAndGetUp(v9, v7, 0);
  this[9] = v10;
  CPhysical::ApplyMoveForce(*this, 0, 0, *(float *)&CTimer::ms_fTimeStep + *(float *)&CTimer::ms_fTimeStep);
  *((float *)*this + 18) = (float)(*((float *)*this + 18) + (float)(*((float *)a2 + 6) * 0.6)) * 0.5;
  *((float *)*this + 19) = (float)(*((float *)*this + 19) + (float)(*((float *)a2 + 7) * 0.6)) * 0.5;
  result = *this;
  v12 = *((float *)*this + 18);
  v13 = sqrtf((float)(v12 * v12) + (float)(*((float *)*this + 19) * *((float *)*this + 19)));
  if ( v13 > 0.2 )
  {
    v14 = 0.2 / v13;
    *((float *)result + 18) = v14 * v12;
    result = *this;
    *((float *)*this + 19) = v14 * *((float *)*this + 19);
  }
  return result;
}


// ============================================================

// Address: 0x382b08
// Original: _ZN13CEventHandler22ComputeInWaterResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeInWaterResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeInWaterResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CTaskComplexInWater *v5; // r0
  int v6; // r0

  v5 = (CTaskComplexInWater *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)a2);
  CTaskComplexInWater::CTaskComplexInWater(v5);
  *((_DWORD *)this + 9) = v6;
}


// ============================================================

// Address: 0x382b1c
// Original: _ZN13CEventHandler30ComputeInteriorUseInfoResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeInteriorUseInfoResponse(CEvent *,CTask *,CTask *)
int __fastcall CEventHandler::ComputeInteriorUseInfoResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v6; // r0
  int result; // r0

  v6 = CTask::operator new((CTask *)&dword_1C, (unsigned int)a2);
  result = CTaskInteriorUseInfo::CTaskInteriorUseInfo(
             v6,
             *((_DWORD *)a2 + 3),
             *((_DWORD *)a2 + 4),
             *((_DWORD *)a2 + 5),
             *((unsigned __int8 *)a2 + 24));
  *((_DWORD *)this + 9) = result;
  return result;
}


// ============================================================

// Address: 0x382b40
// Original: _ZN13CEventHandler26ComputeSignalAtPedResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeSignalAtPedResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeSignalAtPedResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CTaskComplexSignalAtPed *v6; // r0
  int v7; // r0

  v6 = (CTaskComplexSignalAtPed *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  CTaskComplexSignalAtPed::CTaskComplexSignalAtPed(v6, *((CPed **)a2 + 3), *((_DWORD *)a2 + 4), *((_BYTE *)a2 + 20));
  *((_DWORD *)this + 9) = v7;
}


// ============================================================

// Address: 0x382b5c
// Original: _ZN13CEventHandler25ComputePassObjectResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePassObjectResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePassObjectResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CTaskComplexPassObject *v6; // r0
  int v7; // r0

  v6 = (CTaskComplexPassObject *)CTask::operator new((CTask *)&word_30, (unsigned int)a2);
  CTaskComplexPassObject::CTaskComplexPassObject(v6, *((CPed **)a2 + 3), *((_BYTE *)a2 + 16));
  *((_DWORD *)this + 9) = v7;
}


// ============================================================

// Address: 0x382b78
// Original: _ZN13CEventHandler32ComputeCreatePartnerTaskResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeCreatePartnerTaskResponse(CEvent *,CTask *,CTask *)
unsigned int __fastcall CEventHandler::ComputeCreatePartnerTaskResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  int v5; // r0
  unsigned int result; // r0

  if ( *((_DWORD *)a2 + 4) )
  {
    v5 = *((_DWORD *)a2 + 3);
    if ( v5 )
    {
      result = v5 - 1;
      if ( result > 5 )
        return result;
      CTask::operator new((CTask *)&dword_78, (unsigned int)a2);
      result = CTaskComplexPartnerGreet::CTaskComplexPartnerGreet();
    }
    else
    {
      CTask::operator new((CTask *)&dword_74, (unsigned int)a2);
      result = CTaskComplexPartnerDeal::CTaskComplexPartnerDeal();
    }
  }
  else
  {
    result = 0;
  }
  *((_DWORD *)this + 9) = result;
  return result;
}


// ============================================================

// Address: 0x382bf8
// Original: _ZN13CEventHandler32ComputePlayerWantedLevelResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePlayerWantedLevelResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePlayerWantedLevelResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CTaskComplexPolicePursuit *v5; // r0
  int v6; // r0

  v5 = (CTaskComplexPolicePursuit *)CTask::operator new((CTask *)&off_18, (unsigned int)a2);
  CTaskComplexPolicePursuit::CTaskComplexPolicePursuit(v5);
  *((_DWORD *)this + 9) = v6;
}


// ============================================================

// Address: 0x382c0c
// Original: _ZN13CEventHandler28ComputeVehicleOnFireResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehicleOnFireResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeVehicleOnFireResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v4; // r6
  CTask *v6; // r2
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r5
  _DWORD *v10; // r0
  int v11; // r0
  bool v12; // zf
  unsigned int v13; // r1
  int v14; // r4
  unsigned int v15; // r1
  int v16; // r4
  unsigned int v17; // r1
  const CPed *v18; // r1
  CVehicle *v19; // r0
  int v20; // r0

  v4 = *((_DWORD *)a2 + 4);
  if ( v4 )
  {
    if ( ((*(_BYTE *)(v4 + 58) & 0xF8) == 0x28 || *(float *)(v4 + 1228) <= 0.0)
      && (v6 = (CTask *)(*((unsigned __int8 *)*this + 1157) << 31)) != 0
      && *((_DWORD *)*this + 356) == v4 )
    {
      v11 = *(_DWORD *)(v4 + 1440);
      v12 = v11 == 9;
      if ( v11 != 9 )
        v12 = *(_DWORD *)(v4 + 1444) == 2;
      if ( v12 )
      {
        CEventHandler::ComputeKnockOffBikeResponse(this, a2, v6, a4);
      }
      else
      {
        v20 = CTask::operator new((CTask *)&word_28, (unsigned int)a2);
        this[9] = (CPed *)CTaskComplexDie::CTaskComplexDie(v20, 0, 0, 15, 4.0, 0.0, 0, 0, 0, 0);
      }
    }
    else
    {
      v7 = *((__int16 *)a2 + 5);
      v8 = v7 - 704;
      switch ( v7 )
      {
        case 704:
          v9 = CTask::operator new((CTask *)&dword_14, v8);
          CTaskComplex::CTaskComplex((CTaskComplex *)v9);
          *(_DWORD *)(v9 + 12) = 0;
          v10 = &`vtable for'CTaskComplexLeaveAnyCar;
          *(_WORD *)(v9 + 16) = 256;
          goto LABEL_22;
        case 705:
        case 708:
        case 709:
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
        case 724:
        case 725:
          return;
        case 706:
          v9 = CTask::operator new((CTask *)&dword_40, v8);
          CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v9);
          v14 = CTask::operator new((CTask *)&dword_14, v13);
          CTaskComplex::CTaskComplex((CTaskComplex *)v14);
          *(_DWORD *)(v14 + 12) = 0;
          *(_DWORD *)v14 = &off_66AF90;
          *(_WORD *)(v14 + 16) = 256;
          CTaskComplexSequence::AddTask((CTaskComplexSequence *)v9, (CTask *)v14);
          v16 = CTask::operator new((CTask *)&dword_40, v15);
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
            (CTaskComplexSmartFleeEntity *)v16,
            (CEntity *)v4,
            0,
            15.0,
            1000000,
            1000,
            1.0);
          goto LABEL_18;
        case 707:
          v9 = CTask::operator new((CTask *)&dword_40, v8);
          CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v9);
          v16 = CTask::operator new((CTask *)&dword_14, v17);
          CTaskComplex::CTaskComplex((CTaskComplex *)v16);
          *(_DWORD *)(v16 + 12) = 0;
          *(_DWORD *)v16 = &off_66AF90;
          *(_WORD *)(v16 + 16) = 256;
LABEL_18:
          CTaskComplexSequence::AddTask((CTaskComplexSequence *)v9, (CTask *)v16);
          goto LABEL_25;
        case 726:
          v18 = *this;
          v19 = (CVehicle *)*((_DWORD *)*this + 356);
          if ( v19 && CVehicle::IsDriver(v19, v18) == 1 )
          {
            v9 = CTask::operator new((CTask *)&word_2C, (unsigned int)v18);
            CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
              (CTaskComplexCarDriveMission *)v9,
              *((CVehicle **)*this + 356),
              0,
              1,
              2,
              40.0);
            v10 = &`vtable for'CTaskComplexCarDriveMissionFleeScene;
LABEL_22:
            *(_DWORD *)v9 = *v10 + 8;
          }
          else
          {
            v9 = CTask::operator new((CTask *)&dword_40, (unsigned int)v18);
            CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
              (CTaskComplexSmartFleeEntity *)v9,
              *((CEntity **)*this + 356),
              0,
              60.0,
              1000000,
              1000,
              1.0);
          }
          goto LABEL_25;
        default:
          if ( v7 == 909 )
          {
            v9 = CTask::operator new((CTask *)&off_3C, 0x38Du);
            CTaskComplexFleeEntity::CTaskComplexFleeEntity(
              (CTaskComplexFleeEntity *)v9,
              (CEntity *)v4,
              0,
              15.0,
              1000000,
              1000,
              1.0);
          }
          else
          {
            if ( v7 != 911 )
              return;
            v9 = CTask::operator new((CTask *)&dword_40, 0x38Fu);
            CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
              (CTaskComplexSmartFleeEntity *)v9,
              (CEntity *)v4,
              0,
              15.0,
              1000000,
              1000,
              1.0);
          }
LABEL_25:
          this[9] = (CPed *)v9;
          break;
      }
    }
  }
}


// ============================================================

// Address: 0x382f00
// Original: _ZN13CEventHandler32ComputeCopCarBeingStolenResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeCopCarBeingStolenResponse(CEvent *,CTask *,CTask *)
int __fastcall CEventHandler::ComputeCopCarBeingStolenResponse(int this, CEvent *a2, CTask *a3, CTask *a4)
{
  CVehicle *v4; // r6
  CPed *v5; // r4
  _DWORD *v6; // r5
  bool v7; // zf
  unsigned int v8; // r1
  CTaskComplexLeaveCar *v9; // r0
  int v10; // r0
  CWanted **v11; // r0
  CWanted *v12; // r0

  v5 = (CPed *)*((_DWORD *)a2 + 3);
  v6 = (_DWORD *)this;
  v7 = v5 == 0;
  if ( v5 )
  {
    v4 = (CVehicle *)*((_DWORD *)a2 + 4);
    v7 = v4 == 0;
  }
  if ( !v7 )
  {
    this = *(_DWORD *)this;
    v8 = *(_DWORD *)(*v6 + 1424);
    if ( (CVehicle *)v8 == v4 )
    {
      this = *(unsigned __int8 *)(this + 1157) << 31;
      if ( this )
      {
        v9 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v8);
        CTaskComplexLeaveCar::CTaskComplexLeaveCar(v9, v4, 0, 0, 1, 0);
        v6[9] = v10;
        this = CPed::IsPlayer(v5);
        if ( this == 1 )
        {
          v11 = (CWanted **)*((_DWORD *)v5 + 273);
          if ( v11 )
            v12 = *v11;
          else
            v12 = 0;
          return sub_18AA34(v12, 1);
        }
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x382f74
// Original: _ZN13CEventHandler28ComputeVehicleDamageResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeVehicleDamageResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeVehicleDamageResponse(CEventHandler *this, CVehicle **a2, CTask *a3, CTask *a4)
{
  unsigned int v6; // r1
  CVehicle *v7; // r0
  int v8; // r2
  CVehicle *v9; // r5
  int v10; // r6
  int v11; // r0
  CTaskComplexKillPedOnFoot *v12; // r0
  _DWORD *v13; // r0
  const CPed *v14; // r1
  CTaskComplexCarDriveMission *v15; // r0
  _DWORD *v16; // r1
  int v17; // r0
  unsigned int v18; // r1
  CTaskComplexKillCriminal *v19; // r0
  CPed *v20; // r1
  CTaskComplexCarDriveMission *v21; // r0
  int v22; // r5
  CTaskComplexUseSequence *v23; // r0
  CTaskComplexLeaveCarAndFlee *v24; // r0
  _DWORD *v25; // r1
  int v26; // r3
  const CVector *v27; // r2
  int v28; // r0
  CTaskComplexRoadRage *v29; // r0
  CPed *v30; // r1
  CTaskComplexSmartFleeEntity *v31; // r0
  CPed *v32; // r0
  CTaskComplexKillPedOnFoot *v33; // r0
  int PlayerPed; // r8
  CTheScripts *v35; // r0
  unsigned int v36; // r1
  CVehicle *v37; // r6
  CVehicle *v38; // r0

  v6 = *(_DWORD *)this;
  v7 = *(CVehicle **)(*(_DWORD *)this + 1424);
  if ( !v7 || v7 != a2[4] )
    return;
  v8 = *((__int16 *)a2 + 5);
  if ( v8 > 728 )
  {
    v9 = a2[5];
    if ( v8 <= 1030 )
    {
      if ( v8 != 729 )
      {
        if ( v8 == 1000 && v9 )
        {
          if ( (*((_BYTE *)v9 + 58) & 7) != 3
            || *(_BYTE *)(v6 + 1096) == 2
            || (v10 = *((char *)v9 + 1820), CWeapon::IsTypeMelee((CWeapon *)(v6 + 28 * *(char *)(v6 + 1820) + 1444)) != 1)
            || CWeapon::IsTypeMelee((CVehicle *)((char *)v9 + 28 * v10 + 1444)) )
          {
            v11 = *((_BYTE *)v9 + 58) & 7;
            if ( v11 == 2 )
            {
              v33 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v6);
              CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v33, *((CPed **)v9 + 281), -1, 0, 0, 0, 1);
            }
            else
            {
              if ( v11 != 3 )
                return;
              v12 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v6);
              CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v12, v9, -1, 0, 0, 0, 1);
            }
            goto LABEL_55;
          }
          v14 = *(const CPed **)this;
          v38 = *(CVehicle **)(*(_DWORD *)this + 1424);
          if ( !v38 || CVehicle::IsDriver(v38, v14) != 1 )
          {
LABEL_42:
            v31 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, (unsigned int)v14);
            CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(
              v31,
              *(CEntity **)(*(_DWORD *)this + 1424),
              0,
              60.0,
              1000000,
              1000,
              1.0);
            goto LABEL_55;
          }
          goto LABEL_19;
        }
        return;
      }
      if ( !v9 || (*((_BYTE *)v9 + 58) & 6) != 2 )
        return;
      if ( dword_6E047C )
      {
        v21 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v6);
LABEL_31:
        CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
          v21,
          *(CVehicle **)(*(_DWORD *)this + 1424),
          0,
          1,
          2,
          40.0);
        v16 = &`vtable for'CTaskComplexCarDriveMissionFleeScene;
        goto LABEL_54;
      }
      PlayerPed = FindPlayerPed(-1);
      v35 = (CTheScripts *)(*((int (__fastcall **)(CVehicle **))*a2 + 11))(a2);
      if ( v35 == (CTheScripts *)PlayerPed
        && CTheScripts::IsPlayerOnAMission(v35)
        && *(_BYTE *)(*(_DWORD *)this + 1096) == 1 )
      {
        v37 = a2[6];
        v21 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v36);
        if ( v37 == (CVehicle *)((char *)&word_30 + 1) )
          goto LABEL_31;
      }
      else
      {
        v21 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v36);
      }
      CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
        v21,
        *(CVehicle **)(*(_DWORD *)this + 1424),
        v9,
        54,
        3,
        40.0);
      v16 = &`vtable for'CTaskComplexCarDriveMissionKillPed;
      goto LABEL_54;
    }
    if ( v8 == 1031 )
    {
      if ( !v9 )
        return;
      v28 = *((_BYTE *)v9 + 58) & 7;
      if ( v28 == 2 )
      {
        v29 = (CTaskComplexRoadRage *)CTask::operator new((CTask *)&word_10, v6);
        v30 = (CPed *)*((_DWORD *)v9 + 281);
      }
      else
      {
        if ( v28 != 3 )
          return;
        v29 = (CTaskComplexRoadRage *)CTask::operator new((CTask *)&word_10, v6);
        v30 = v9;
      }
      CTaskComplexRoadRage::CTaskComplexRoadRage(v29, v30);
      goto LABEL_55;
    }
    if ( v8 != 1105 || !v9 )
      return;
    v17 = *((_BYTE *)v9 + 58) & 7;
    if ( v17 == 2 )
    {
      v32 = (CPed *)*((_DWORD *)v9 + 281);
      if ( !v32 || !CPed::IsPlayer(v32) )
      {
        v19 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v6);
        v20 = (CPed *)*((_DWORD *)v9 + 281);
        goto LABEL_50;
      }
    }
    else
    {
      if ( v17 != 3 )
        return;
      if ( !CPed::IsPlayer(a2[5]) )
      {
        v19 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v18);
        v20 = v9;
LABEL_50:
        CTaskComplexKillCriminal::CTaskComplexKillCriminal(v19, v20, 0);
        goto LABEL_55;
      }
    }
    v13 = 0;
    goto LABEL_55;
  }
  if ( v8 != 244 )
  {
    if ( v8 == 706 )
    {
      v24 = (CTaskComplexLeaveCarAndFlee *)CTask::operator new((CTask *)&word_28, v6);
      v25 = *(_DWORD **)(*(_DWORD *)this + 1424);
      v26 = v25[5];
      v27 = (const CVector *)(v26 + 48);
      if ( !v26 )
        v27 = (const CVector *)(v25 + 1);
      CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(v24, (CVehicle *)v25, v27, 0, 0, 0);
      goto LABEL_55;
    }
    if ( v8 != 726 )
      return;
    if ( CVehicle::IsDriver(v7, (const CPed *)v6) != 1 )
      goto LABEL_42;
LABEL_19:
    v15 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, (unsigned int)v14);
    CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v15, *(CVehicle **)(*(_DWORD *)this + 1424), 0, 1, 2, 40.0);
    v16 = &`vtable for'CTaskComplexCarDriveMissionFleeScene;
LABEL_54:
    *v13 = *v16 + 8;
    goto LABEL_55;
  }
  v22 = *(char *)(*(_DWORD *)(v6 + 1088) + 208);
  if ( v22 >= 0 && *((_DWORD *)&CTaskSequences::ms_taskSequence + 16 * v22 + 4) )
  {
    v23 = (CTaskComplexUseSequence *)CTask::operator new((CTask *)&dword_1C, v6);
    CTaskComplexUseSequence::CTaskComplexUseSequence(v23, v22);
LABEL_55:
    *((_DWORD *)this + 9) = v13;
  }
}


// ============================================================

// Address: 0x383300
// Original: _ZN13CEventHandler22ComputeSpecialResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeSpecialResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeSpecialResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v5; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v6; // r0
  _DWORD *v7; // r0
  _DWORD *v8; // r1
  unsigned int v9; // r1
  CTaskComplexLeaveCar *v10; // r0
  CTaskComplexSmartFleeEntity *v11; // r5
  CEntity *v12; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v13; // r0
  CTaskComplexKillPedOnFoot *v14; // r5
  CPed *v15; // r0
  CTaskComplexArrestPed *v16; // r5
  CPed *v17; // r0
  CTaskComplexSmartFleePoint *v18; // r5
  int v19; // r0
  int v20; // r2
  const CVector *v21; // r1
  CTaskComplexUseClosestFreeScriptedAttractor *v22; // r0
  CTaskComplexLeaveCarAndFlee *v23; // r5
  CVehicle *v24; // r6
  int PlayerPed; // r0
  int v26; // r1
  const CVector *v27; // r2
  CTaskComplexLeaveCarAndWander *v28; // r0
  CTaskComplexCarDriveMission *v29; // r0

  v5 = *((__int16 *)a2 + 5);
  if ( v5 <= 909 )
  {
    if ( v5 >= 262 )
    {
      v9 = v5 - 704;
      switch ( v5 )
      {
        case 704:
          if ( !*(_DWORD *)(*(_DWORD *)this + 1424) )
            return;
          v10 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v9);
          CTaskComplexLeaveCar::CTaskComplexLeaveCar(v10, *(CVehicle **)(*(_DWORD *)this + 1424), 0, 0, 1, 0);
          goto LABEL_34;
        case 705:
        case 708:
        case 709:
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
        case 724:
        case 725:
          return;
        case 706:
          if ( *(_DWORD *)(*(_DWORD *)this + 1424) )
          {
            v23 = (CTaskComplexLeaveCarAndFlee *)CTask::operator new((CTask *)&word_28, v9);
            v24 = *(CVehicle **)(*(_DWORD *)this + 1424);
            PlayerPed = FindPlayerPed(-1);
            v26 = *(_DWORD *)(PlayerPed + 20);
            v27 = (const CVector *)(v26 + 48);
            if ( !v26 )
              v27 = (const CVector *)(PlayerPed + 4);
            CTaskComplexLeaveCarAndFlee::CTaskComplexLeaveCarAndFlee(v23, v24, v27, 0, 0, 0);
            *((_DWORD *)this + 9) = v23;
          }
          return;
        case 707:
          if ( !*(_DWORD *)(*(_DWORD *)this + 1424) )
            return;
          v28 = (CTaskComplexLeaveCarAndWander *)CTask::operator new((CTask *)&dword_1C, v9);
          CTaskComplexLeaveCarAndWander::CTaskComplexLeaveCarAndWander(
            v28,
            *(CVehicle **)(*(_DWORD *)this + 1424),
            0,
            0,
            1);
          goto LABEL_34;
        case 726:
          v29 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v9);
          CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v29, 0, 0, 1, 2, 40.0);
          v8 = &`vtable for'CTaskComplexCarDriveMissionFleeScene;
          goto LABEL_33;
        default:
          if ( v5 != 262 )
            return;
          v22 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v9);
          CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v22, 0);
          v7[3] = 7;
          v8 = &`vtable for'CTaskComplexUseClosestFreeScriptedAttractorSprint;
          goto LABEL_33;
      }
    }
    if ( v5 != 200 )
    {
      if ( v5 == 258 )
      {
        v13 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, 0x38Du);
        CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v13, 0);
      }
      else
      {
        if ( v5 != 261 )
          return;
        v6 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, 0x105u);
        CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v6, 0);
        v7[3] = 6;
        v8 = &`vtable for'CTaskComplexUseClosestFreeScriptedAttractorRun;
LABEL_33:
        *v7 = *v8 + 8;
      }
      goto LABEL_34;
    }
LABEL_11:
    v7 = 0;
LABEL_34:
    *((_DWORD *)this + 9) = v7;
    return;
  }
  if ( v5 >= 1000 )
  {
    if ( v5 == 1000 )
    {
      v14 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, 0x38Du);
      v15 = (CPed *)FindPlayerPed(-1);
      CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v14, v15, -1, 0, 0, 0, 1);
      *((_DWORD *)this + 9) = v14;
      return;
    }
    if ( v5 == 1101 )
    {
      v16 = (CTaskComplexArrestPed *)CTask::operator new((CTask *)&dword_24, 0x44Du);
      v17 = (CPed *)FindPlayerPed(-1);
      CTaskComplexArrestPed::CTaskComplexArrestPed(v16, v17);
      *((_DWORD *)this + 9) = v16;
      return;
    }
    if ( v5 != 1105 )
      return;
    goto LABEL_11;
  }
  if ( v5 == 910 )
  {
    v18 = (CTaskComplexSmartFleePoint *)CTask::operator new((CTask *)&dword_44, 0x38Eu);
    v19 = FindPlayerPed(-1);
    v20 = *(_DWORD *)(v19 + 20);
    v21 = (const CVector *)(v20 + 48);
    if ( !v20 )
      v21 = (const CVector *)(v19 + 4);
    CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint(v18, v21, 0, 1000.0, (int)&elf_hash_chain[8526]);
    *((_DWORD *)this + 9) = v18;
  }
  else if ( v5 == 911 )
  {
    v11 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
    v12 = (CEntity *)FindPlayerPed(-1);
    CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v11, v12, 0, 60.0, 1000000, 1000, 1.0);
    *((_DWORD *)this + 9) = v11;
  }
}


// ============================================================

// Address: 0x38358c
// Original: _ZN13CEventHandler34ComputeGotKnockedOverByCarResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeGotKnockedOverByCarResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeGotKnockedOverByCarResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  CPed **v4; // r6
  int v6; // r0
  char *v7; // r5
  CTaskComplexSmartFleeEntity *v8; // r0
  int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r1
  int v12; // r6
  CTaskComplexKillPedOnFoot *v13; // r0
  CTaskComplexKillCriminal *v14; // r0

  v4 = (CPed **)*((_DWORD *)a2 + 4);
  if ( v4 )
  {
    v6 = *((__int16 *)a2 + 5);
    v7 = (char *)v4[281];
    if ( v6 < 1000 )
    {
      if ( v6 != 200 )
      {
        if ( v6 != 911 )
          return;
        v8 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
        if ( !v7 )
        {
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v8, (CEntity *)v4, 0, 60.0, 1000000, 1000, 1.0);
          goto LABEL_19;
        }
LABEL_6:
        CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v8, (CEntity *)v7, 0, 60.0, 1000000, 1000, 1.0);
LABEL_19:
        *((_DWORD *)this + 9) = v9;
        return;
      }
LABEL_11:
      v9 = 0;
      goto LABEL_19;
    }
    if ( v6 == 1000 )
    {
      if ( !v7 )
        return;
      v11 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
      if ( v11 == 2
        || (v12 = v7[1820],
            CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
        || CWeapon::IsTypeMelee((CWeapon *)&v7[28 * v12 + 1444]) == 1 )
      {
        v13 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v11);
        CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v13, (CPed *)v7, -1, 0, 0, 0, 1);
        goto LABEL_19;
      }
      v8 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v11);
      goto LABEL_6;
    }
    if ( v6 == 1105 && v7 )
    {
      if ( !CPed::IsPlayer(v4[281]) )
      {
        v14 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v10);
        CTaskComplexKillCriminal::CTaskComplexKillCriminal(v14, (CPed *)v7, 0);
        goto LABEL_19;
      }
      goto LABEL_11;
    }
  }
}


// ============================================================

// Address: 0x383708
// Original: _ZN13CEventHandler37ComputeObjectCollisionPassiveResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeObjectCollisionPassiveResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeObjectCollisionPassiveResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  int v4; // r8
  CEntity *v5; // r5
  bool v8; // zf
  unsigned int v9; // r1
  CTaskComplexWalkRoundObject *v10; // r0
  int v11; // r0

  v5 = (CEntity *)*((_DWORD *)a2 + 4);
  if ( v5 && !(*(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31) )
  {
    v8 = a4 == 0;
    if ( a4 )
    {
      v4 = *((_DWORD *)a2 + 5);
      v8 = v4 == 1;
    }
    if ( !v8 )
    {
      if ( CTask::IsGoToTask(a4, a2) )
      {
        v10 = (CTaskComplexWalkRoundObject *)CTask::operator new((CTask *)&dword_54, v9);
        CTaskComplexWalkRoundObject::CTaskComplexWalkRoundObject(v10, v4, (CTask *)((char *)a4 + 12), v5);
        *((_DWORD *)this + 9) = v11;
      }
    }
  }
}


// ============================================================

// Address: 0x383754
// Original: _ZN13CEventHandler28ComputeCarUpsideDownResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeCarUpsideDownResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeCarUpsideDownResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v5; // r0
  bool v6; // zf
  unsigned int v7; // r1
  CTaskComplexLeaveCar *v8; // r5
  CVehicle *v9; // r6
  unsigned __int16 v10; // r0

  v5 = *(_DWORD *)this;
  v6 = *(unsigned __int8 *)(v5 + 1157) << 31 == 0;
  if ( *(unsigned __int8 *)(v5 + 1157) << 31 )
  {
    v5 = *(_DWORD *)(v5 + 1424);
    v6 = v5 == 0;
  }
  if ( !v6 )
  {
    v7 = *((_DWORD *)a2 + 3);
    if ( v5 == v7 )
    {
      v8 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v7);
      v9 = *(CVehicle **)(*(_DWORD *)this + 1424);
      v10 = rand();
      CTaskComplexLeaveCar::CTaskComplexLeaveCar(
        v8,
        v9,
        0,
        (int)(float)((float)((float)v10 * 0.000015259) * 300.0) + 100,
        1,
        0);
      *((_DWORD *)this + 9) = v8;
    }
  }
}


// ============================================================

// Address: 0x3837d4
// Original: _ZN13CEventHandler36ComputePotentialWalkIntoFireResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputePotentialWalkIntoFireResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputePotentialWalkIntoFireResponse(
        CEventHandler *this,
        CEvent *a2,
        CTask *a3,
        CTask *a4)
{
  float v7; // s16
  unsigned int v8; // r1
  int v9; // r0
  const CVector *v10; // r8
  int v11; // r5
  CTaskComplexWalkRoundFire *v12; // r0
  int v13; // r0
  CTaskComplexSmartFleePoint *v14; // r0
  CTaskComplexFleePoint *v15; // r0

  if ( a4 )
  {
    v7 = *((float *)a2 + 8);
    if ( CTask::IsGoToTask(a4, a2) )
    {
      v9 = *((__int16 *)a2 + 5);
      v10 = (CEvent *)((char *)a2 + 16);
      if ( v9 >= 908 )
      {
        if ( v9 == 908 )
        {
          v15 = (CTaskComplexFleePoint *)CTask::operator new((CTask *)&off_3C, v8);
          CTaskComplexFleePoint::CTaskComplexFleePoint(v15, (CEvent *)((char *)a2 + 16), 0, 60.0, 1000000);
        }
        else
        {
          if ( v9 != 910 )
            return;
          v14 = (CTaskComplexSmartFleePoint *)CTask::operator new((CTask *)&dword_44, 0x38Eu);
          CTaskComplexSmartFleePoint::CTaskComplexSmartFleePoint(v14, (CEvent *)((char *)a2 + 16), 0, 60.0, 1000000);
        }
      }
      else if ( v9 == 200 )
      {
        v13 = 0;
      }
      else
      {
        if ( v9 != 514 )
          return;
        v11 = *((_DWORD *)a2 + 9);
        v12 = (CTaskComplexWalkRoundFire *)CTask::operator new((CTask *)&dword_38, 0x202u);
        CTaskComplexWalkRoundFire::CTaskComplexWalkRoundFire(v12, v11, v10, v7, (CTask *)((char *)a4 + 12));
      }
      *((_DWORD *)this + 9) = v13;
    }
  }
}


// ============================================================

// Address: 0x3838a0
// Original: _ZN13CEventHandler33ComputeShotFiredWhizzedByResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeShotFiredWhizzedByResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeShotFiredWhizzedByResponse(CPed **this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v6; // r6
  CPed *v7; // r1
  CTaskSimpleDuck *TaskDuck; // r0
  CTaskSimpleDuck *v9; // r5
  unsigned int v10; // r1
  unsigned __int16 v11; // r0

  v6 = *((__int16 *)a2 + 5);
  if ( (*(int (__fastcall **)(CEvent *))(*(_DWORD *)a2 + 44))(a2) )
  {
    if ( v6 == 200 )
    {
      v9 = 0;
    }
    else
    {
      if ( v6 != 311 )
        return;
      if ( a4 && (*(int (__fastcall **)(CTask *))(*(_DWORD *)a4 + 20))(a4) == 415 && *((__int16 *)a4 + 7) > -1 )
      {
        v7 = *this;
        TaskDuck = a4;
      }
      else
      {
        if ( !CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)*this + 272), 1)
          || *(__int16 *)(CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)*this + 272), 1) + 14) <= -1 )
        {
          v9 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v10);
          v11 = rand();
          CTaskSimpleDuck::CTaskSimpleDuck(
            v9,
            1u,
            (int)(float)((float)((float)v11 * 0.000015259) * 2000.0) + 3000,
            1000);
          goto LABEL_14;
        }
        TaskDuck = (CTaskSimpleDuck *)CPedIntelligence::GetTaskDuck(*((CPedIntelligence **)*this + 272), 1);
        v7 = *this;
      }
      CTaskSimpleDuck::RestartTask(TaskDuck, v7);
      v9 = 0;
    }
LABEL_14:
    this[9] = v9;
  }
}


// ============================================================

// Address: 0x383978
// Original: _ZN13CEventHandler25ComputeFireNearbyResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeFireNearbyResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeFireNearbyResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v5; // r0
  CTaskComplexExtinguishFires *v6; // r0
  int v7; // r0

  v5 = *((__int16 *)a2 + 5);
  if ( v5 == 200 )
  {
    *((_DWORD *)this + 9) = 0;
  }
  else if ( v5 == 604 )
  {
    v6 = (CTaskComplexExtinguishFires *)CTask::operator new((CTask *)&word_10, (unsigned int)a2);
    CTaskComplexExtinguishFires::CTaskComplexExtinguishFires(v6);
    *((_DWORD *)this + 9) = v7;
  }
}


// ============================================================

// Address: 0x3839a4
// Original: _ZN13CEventHandler30ComputeSeenPanickedPedResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeSeenPanickedPedResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeSeenPanickedPedResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  int v6; // r0
  int v7; // r1
  int v8; // r0
  bool v9; // zf
  CEntity *v10; // r5
  int v11; // r0
  CTaskComplexSmartFleeEntity *v12; // r0
  int v13; // r0
  CTaskSimpleDuck *v14; // r0
  CTaskComplexFleeEntity *v15; // r0

  v6 = (*(int (__fastcall **)(CEvent *, _DWORD, CTask *, CTask *))(*(_DWORD *)a2 + 44))(
         a2,
         *(_DWORD *)(*(_DWORD *)a2 + 44),
         a3,
         a4);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 1088);
    v8 = *(_DWORD *)(v7 + 64);
    v9 = v8 == 0;
    if ( !v8 )
    {
      v8 = *(_DWORD *)(v7 + 60);
      v9 = v8 == 0;
    }
    if ( !v9 )
    {
      v10 = (CEntity *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 44))(v8);
      if ( v10 )
      {
        v11 = *((__int16 *)a2 + 5);
        switch ( v11 )
        {
          case 427:
            v14 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, 0x1ABu);
            CTaskSimpleDuck::CTaskSimpleDuck(v14, 0, 0xFFFFu, -1);
            break;
          case 909:
            v15 = (CTaskComplexFleeEntity *)CTask::operator new((CTask *)&off_3C, 0x38Du);
            CTaskComplexFleeEntity::CTaskComplexFleeEntity(v15, v10, 1, 45.0, 1000000, 1000, 1.0);
            break;
          case 911:
            v12 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
            CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v12, v10, 1, 45.0, 1000000, 1000, 1.0);
            break;
          default:
            return;
        }
        *((_DWORD *)this + 9) = v13;
      }
    }
  }
}


// ============================================================

// Address: 0x383a9c
// Original: _ZN13CEventHandler24ComputeAreaCodesResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeAreaCodesResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeAreaCodesResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CPed *v4; // r5
  CTaskSimpleWaitUntilAreaCodesMatch *v6; // r0
  int v7; // r0

  v4 = (CPed *)*((_DWORD *)a2 + 3);
  if ( v4 )
  {
    v6 = (CTaskSimpleWaitUntilAreaCodesMatch *)CTask::operator new((CTask *)&dword_24, (unsigned int)a2);
    CTaskSimpleWaitUntilAreaCodesMatch::CTaskSimpleWaitUntilAreaCodesMatch(v6, v4);
    *((_DWORD *)this + 9) = v7;
  }
}


// ============================================================

// Address: 0x383abc
// Original: _ZN13CEventHandler26ComputeOnEscalatorResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeOnEscalatorResponse(CEvent *,CTask *,CTask *)
_DWORD *__fastcall CEventHandler::ComputeOnEscalatorResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CTaskSimpleStandStill *v5; // r0
  _DWORD *result; // r0

  v5 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)a2);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v5, 0, 1, 0, 8.0);
  *result = &off_66A74C;
  *((_DWORD *)this + 9) = result;
  return result;
}


// ============================================================

// Address: 0x383af0
// Original: _ZN13CEventHandler21ComputeDangerResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeDangerResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeDangerResponse(CVehicle ***this, CEvent *a2, CTask *a3, CTask *a4)
{
  CEntity *v4; // r5
  int v6; // r0
  CVehicle **v7; // r1
  CTaskComplexSmartFleeEntity *v8; // r0
  CVehicle **v9; // r0
  unsigned int v10; // r1
  CTaskComplexCarDriveMission *v11; // r0

  v4 = (CEntity *)*((_DWORD *)a2 + 4);
  if ( v4 )
  {
    v6 = *((__int16 *)a2 + 5);
    if ( v6 == 726 )
    {
      v7 = *this;
      if ( *((unsigned __int8 *)*this + 1157) << 31 )
      {
        if ( CVehicle::IsDriver(v7[356], (const CPed *)v7) == 1 )
        {
          v11 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v10);
          CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(v11, (*this)[356], 0, 1, 2, 40.0);
          *v9 = (CVehicle *)&off_667294;
        }
        else
        {
          v9 = 0;
        }
        goto LABEL_7;
      }
    }
    else
    {
      v7 = (CVehicle **)(elf_hash_bucket + 659);
      if ( v6 != 911 )
        return;
    }
    v8 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, (unsigned int)v7);
    CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v8, v4, 1, 100000.0, 1000000, 1000, 1.0);
LABEL_7:
    this[9] = v9;
  }
}


// ============================================================

// Address: 0x383bc4
// Original: _ZN13CEventHandler28ComputeDontJoinGroupResponseEP6CEventP5CTaskS3_
// Demangled: CEventHandler::ComputeDontJoinGroupResponse(CEvent *,CTask *,CTask *)
void __fastcall CEventHandler::ComputeDontJoinGroupResponse(CEventHandler *this, CEvent *a2, CTask *a3, CTask *a4)
{
  CTaskComplexGangJoinRespond *v5; // r0
  int v6; // r0

  v5 = (CTaskComplexGangJoinRespond *)CTask::operator new((CTask *)&dword_14, (unsigned int)a2);
  CTaskComplexGangJoinRespond::CTaskComplexGangJoinRespond(v5, 0);
  *((_DWORD *)this + 9) = v6;
}


// ============================================================

// Address: 0x383bda
// Original: _ZN13CEventHandler21IsKillTaskAppropriateEP4CPedS1_RK6CEvent
// Demangled: CEventHandler::IsKillTaskAppropriate(CPed *,CPed *,CEvent const&)
bool __fastcall CEventHandler::IsKillTaskAppropriate(CEventHandler *this, CPed *a2, CPed *a3, const CEvent *a4)
{
  int v5; // r5
  _BOOL4 result; // r0

  result = 1;
  if ( *((_BYTE *)this + 1096) != 2 )
  {
    v5 = *((char *)a2 + 1820);
    if ( CWeapon::IsTypeMelee((CEventHandler *)((char *)this + 28 * *((char *)this + 1820) + 1444)) == 1
      && CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * v5 + 1444)) != 1 )
    {
      return 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x383c20
// Original: _ZN13CEventHandler34ComputePersonalityResponseToDamageEP12CEventDamageP7CEntity
// Demangled: CEventHandler::ComputePersonalityResponseToDamage(CEventDamage *,CEntity *)
void __fastcall CEventHandler::ComputePersonalityResponseToDamage(CEventHandler *this, CEventDamage *a2, CEntity *a3)
{
  int v4; // r0
  unsigned int v6; // r1
  CTaskComplexUseClosestFreeScriptedAttractor *v7; // r0
  _DWORD *v8; // r0
  bool v9; // zf
  unsigned int v10; // r1
  CTaskComplexCarDriveMission *v11; // r0
  _DWORD *v12; // r1
  unsigned int v13; // r1
  int v14; // r8
  CTaskComplexKillPedOnFoot *v15; // r0
  CTaskComplexEvasiveDiveAndGetUp *v16; // r0
  CTaskComplexFleeAnyMeans *v17; // r0
  int v18; // r0
  unsigned int v19; // r1
  int v20; // r6
  CTaskComplexKillCriminal *v21; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v22; // r0
  CTaskComplexUseClosestFreeScriptedAttractor *v23; // r0
  CVehicle *v24; // r0
  CTaskComplexCarDriveMission *v25; // r0
  unsigned int v26; // r1
  CTaskSimpleDuck *v27; // r5
  unsigned __int16 v28; // r0
  CTaskSimpleDuck *v29; // r0
  CTaskComplexFleeAnyMeans *v30; // r0
  CTaskComplexKillPedOnFootStealth *v31; // r0
  CTaskComplexSmartFleeEntity *v32; // r0
  CTaskComplexFleeEntity *v33; // r0
  CPed *v34; // r1
  CTaskComplexFleeAnyMeans *v35; // r0
  CVehicle *v36; // r0
  CTaskComplexSmartFleeEntity *v37; // r0
  _DWORD v38[9]; // [sp+1Ch] [bp-24h] BYREF

  v4 = *((__int16 *)a2 + 5);
  if ( v4 > 725 )
  {
    if ( v4 > 926 )
    {
      if ( v4 > 1027 )
      {
        if ( v4 == 1028 )
        {
          v31 = (CTaskComplexKillPedOnFootStealth *)CTask::operator new((CTask *)&dword_48, 0x404u);
          CTaskComplexKillPedOnFootStealth::CTaskComplexKillPedOnFootStealth(v31, a3);
          goto LABEL_65;
        }
        if ( v4 != 1105 )
          return;
        if ( CPed::IsPlayer(a3) )
        {
LABEL_37:
          v8 = 0;
          goto LABEL_65;
        }
        v19 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
        if ( v19 == 2
          || (v20 = *((char *)a3 + 1820),
              CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
          || CWeapon::IsTypeMelee((CEntity *)((char *)a3 + 28 * v20 + 1444)) == 1 )
        {
          v21 = (CTaskComplexKillCriminal *)CTask::operator new((CTask *)&dword_20, v19);
          CTaskComplexKillCriminal::CTaskComplexKillCriminal(v21, a3, 0);
          goto LABEL_65;
        }
        goto LABEL_64;
      }
      v13 = 927;
      if ( v4 != 927 )
      {
        if ( v4 != 1000 )
          return;
        v10 = *(unsigned __int8 *)(*(_DWORD *)this + 1096);
        if ( v10 == 2
          || (v14 = *((char *)a3 + 1820),
              CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)this + 28 * *(char *)(*(_DWORD *)this + 1820) + 1444)) != 1)
          || CWeapon::IsTypeMelee((CEntity *)((char *)a3 + 28 * v14 + 1444)) == 1 )
        {
LABEL_19:
          v15 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v10);
          CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v15, a3, -1, 0, 0, 0, 1);
LABEL_65:
          *((_DWORD *)this + 9) = v8;
          return;
        }
        v19 = *(_DWORD *)this;
        if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) != 0 && *((_DWORD *)a3 + 359) == 6 )
          goto LABEL_57;
        if ( (*(_DWORD *)(*(_DWORD *)this + 1156) & 0x100) != 0 )
        {
          v36 = *(CVehicle **)(v19 + 1424);
          if ( v36 )
          {
            if ( CVehicle::IsDriver(v36, (const CPed *)v19) == 1 )
              goto LABEL_42;
          }
        }
        goto LABEL_64;
      }
    }
    else
    {
      if ( v4 <= 908 )
      {
        if ( v4 != 726 )
        {
          if ( v4 != 729 )
            return;
          v10 = *(unsigned __int8 *)(*(_DWORD *)this + 1157) << 31;
          v9 = v10 == 0;
          if ( v10 )
            v9 = *(_DWORD *)(*(_DWORD *)this + 1424) == 0;
          if ( !v9 )
          {
            v11 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v10);
            CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
              v11,
              *(CVehicle **)(*(_DWORD *)this + 1424),
              a3,
              54,
              3,
              40.0);
            v12 = &`vtable for'CTaskComplexCarDriveMissionKillPed;
LABEL_43:
            *v8 = *v12 + 8;
            goto LABEL_65;
          }
          goto LABEL_19;
        }
        v19 = *(_DWORD *)this;
        v24 = *(CVehicle **)(*(_DWORD *)this + 1424);
        if ( v24 )
        {
          if ( CVehicle::IsDriver(v24, (const CPed *)v19) )
          {
LABEL_42:
            v25 = (CTaskComplexCarDriveMission *)CTask::operator new((CTask *)&word_2C, v19);
            CTaskComplexCarDriveMission::CTaskComplexCarDriveMission(
              v25,
              *(CVehicle **)(*(_DWORD *)this + 1424),
              0,
              1,
              2,
              40.0);
            v12 = &`vtable for'CTaskComplexCarDriveMissionFleeScene;
            goto LABEL_43;
          }
          v19 = *(_DWORD *)this;
        }
        if ( (*(_DWORD *)(v19 + 1168) & 0x800) != 0 && *((_DWORD *)a3 + 359) == 6 )
        {
LABEL_57:
          v35 = (CTaskComplexFleeAnyMeans *)CTask::operator new((CTask *)&dword_54, v19);
          CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(v35, a3, 1, 60.0, 1000000, 4000, 4000, 20.0, 1000, 1.0);
          goto LABEL_65;
        }
LABEL_64:
        v37 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, v19);
        CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v37, a3, 0, 60.0, 1000000, 1000, 1.0);
        goto LABEL_65;
      }
      v13 = 909;
      if ( v4 != 909 )
      {
        if ( v4 != 911 )
          return;
        if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) != 0 && *((_DWORD *)a3 + 359) == 6 )
        {
          v17 = (CTaskComplexFleeAnyMeans *)CTask::operator new((CTask *)&dword_54, 0x38Fu);
          CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(v17, a3, 1, 60.0, 1000000, 4000, 4000, 20.0, 1000, 1.0);
        }
        else
        {
          v32 = (CTaskComplexSmartFleeEntity *)CTask::operator new((CTask *)&dword_40, 0x38Fu);
          CTaskComplexSmartFleeEntity::CTaskComplexSmartFleeEntity(v32, a3, 0, 60.0, 1000000, 1000, 1.0);
        }
        goto LABEL_53;
      }
      if ( (*(_DWORD *)(*(_DWORD *)this + 1168) & 0x800) == 0 )
      {
        v33 = (CTaskComplexFleeEntity *)CTask::operator new((CTask *)&off_3C, 0x38Du);
        CTaskComplexFleeEntity::CTaskComplexFleeEntity(v33, a3, 0, 60.0, 1000000, 1000, 1.0);
        goto LABEL_53;
      }
    }
    v30 = (CTaskComplexFleeAnyMeans *)CTask::operator new((CTask *)&dword_54, v13);
    CTaskComplexFleeAnyMeans::CTaskComplexFleeAnyMeans(v30, a3, 1, 60.0, 1000000, 4000, 4000, 20.0, 1000, 1.0);
LABEL_53:
    v34 = *(CPed **)this;
    *((_DWORD *)this + 9) = v18;
    CPed::Say(v34, 0xB2u, 0, 1.0, 0, 0, 0);
    return;
  }
  if ( v4 <= 414 )
  {
    v6 = v4 - 251;
    switch ( v4 )
    {
      case 251:
        goto LABEL_37;
      case 252:
      case 253:
      case 254:
      case 255:
      case 256:
      case 257:
      case 259:
      case 260:
        return;
      case 258:
        v7 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v6);
        CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v7, 0);
        goto LABEL_65;
      case 261:
        v22 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v6);
        CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v22, 0);
        v8[3] = 6;
        v12 = &`vtable for'CTaskComplexUseClosestFreeScriptedAttractorRun;
        goto LABEL_43;
      case 262:
        v23 = (CTaskComplexUseClosestFreeScriptedAttractor *)CTask::operator new((CTask *)&word_10, v6);
        CTaskComplexUseClosestFreeScriptedAttractor::CTaskComplexUseClosestFreeScriptedAttractor(v23, 0);
        v8[3] = 7;
        v12 = &`vtable for'CTaskComplexUseClosestFreeScriptedAttractorSprint;
        goto LABEL_43;
      default:
        if ( v4 == 200 )
          goto LABEL_37;
        break;
    }
    return;
  }
  if ( v4 != 415 )
  {
    if ( v4 == 427 )
    {
      v29 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, 0x1ABu);
      CTaskSimpleDuck::CTaskSimpleDuck(v29, 0, 0xFFFFu, -1);
      goto LABEL_65;
    }
    if ( v4 != 513 )
      return;
    v16 = (CTaskComplexEvasiveDiveAndGetUp *)CTask::operator new((CTask *)&dword_24, 0x201u);
    memset(v38, 0, 12);
    CTaskComplexEvasiveDiveAndGetUp::CTaskComplexEvasiveDiveAndGetUp(v16, 0, 0, (const CVector *)v38, 1);
    v12 = &`vtable for'CTaskComplexDiveFromAttachedEntityAndGetUp;
    goto LABEL_43;
  }
  if ( !CPedIntelligence::GetTaskDuck(*(CPedIntelligence **)(*(_DWORD *)this + 1088), 1) )
  {
    v27 = (CTaskSimpleDuck *)CTask::operator new((CTask *)&word_28, v26);
    v28 = rand();
    CTaskSimpleDuck::CTaskSimpleDuck(v27, 0, (int)(float)((float)((float)v28 * 0.000015259) * 3000.0) + 2000, -1);
    *((_DWORD *)this + 9) = v27;
  }
}


// ============================================================

// Address: 0x38438c
// Original: _ZN13CEventHandler12RegisterKillEPK4CPedPK7CEntity11eWeaponTypeb
// Demangled: CEventHandler::RegisterKill(CPed const*,CEntity const*,eWeaponType,bool)
CPed *__fastcall CEventHandler::RegisterKill(CPed *result, CPed *this)
{
  CPed *v2; // r5
  char v4; // r0
  int IsPlayer; // r0
  bool v6; // zf
  float v7; // r2
  int *v8; // r0
  float v9; // s0
  CPedGroups *v10; // r0

  v2 = result;
  if ( result )
  {
    if ( !this )
      return (CPed *)j_CDarkel::RegisterKillNotByPlayer();
    v4 = *((_BYTE *)this + 58);
    if ( (v4 & 7) == 3 )
    {
      IsPlayer = CPed::IsPlayer(this);
      v6 = v2 == this;
      if ( v2 != this )
        v6 = IsPlayer == 0;
      if ( !v6 )
      {
        v8 = &CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
        v9 = *((float *)v8 + 82) + 5.0;
        v8[80] += 10;
        *((float *)v8 + 82) = v9;
        v10 = (CPedGroups *)CDarkel::RegisterKillByPlayer();
        return (CPed *)sub_19C44C(v10);
      }
      v4 = *((_BYTE *)this + 58);
    }
    if ( (v4 & 7) == 2 && (CPed *)FindPlayerVehicle(-1, 0) == this )
      return (CPed *)j_CStats::IncrementStat((CStats *)((char *)&dword_78 + 1), 0, v7);
    else
      return (CPed *)j_CDarkel::RegisterKillNotByPlayer();
  }
  return result;
}


// ============================================================

// Address: 0x384450
// Original: _ZN13CEventHandler18RecordPassiveEventERK6CEvent
// Demangled: CEventHandler::RecordPassiveEvent(CEvent const&)
void __fastcall CEventHandler::RecordPassiveEvent(CEventHandler *this, const CEvent *a2)
{
  ;
}


// ============================================================

// Address: 0x384452
// Original: _ZN13CEventHandler17RecordActiveEventERK6CEvent
// Demangled: CEventHandler::RecordActiveEvent(CEvent const&)
void __fastcall CEventHandler::RecordActiveEvent(CEventHandler *this, const CEvent *a2)
{
  ;
}


// ============================================================
