
// Address: 0x18a8e0
// Original: j__ZN13CEventScanner16ScanForEventsNowERK4CPedi
// Demangled: CEventScanner::ScanForEventsNow(CPed const&,int)
// attributes: thunk
int __fastcall CEventScanner::ScanForEventsNow(CEventScanner *this, const CPed *a2, int a3)
{
  return _ZN13CEventScanner16ScanForEventsNowERK4CPedi(this, a2, a3);
}


// ============================================================

// Address: 0x196750
// Original: j__ZN13CEventScanner13ScanForEventsER4CPed
// Demangled: CEventScanner::ScanForEvents(CPed &)
// attributes: thunk
int __fastcall CEventScanner::ScanForEvents(CEventScanner *this, CPed *a2)
{
  return _ZN13CEventScanner13ScanForEventsER4CPed(this, a2);
}


// ============================================================

// Address: 0x4bfa34
// Original: _ZN13CEventScannerC2Ev
// Demangled: CEventScanner::CEventScanner(void)
void __fastcall CEventScanner::CEventScanner(CEventScanner *this)
{
  __int64 v1; // d18
  __int64 v2; // d19
  int v3; // r5

  *(float *)&v1 = 25.0;
  *((float *)&v1 + 1) = 25.0;
  *(float *)&v2 = 25.0;
  *((float *)&v2 + 1) = 25.0;
  *((_WORD *)this + 12) = 0;
  *((_WORD *)this + 6) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 20) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 28) = 1;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_QWORD *)((char *)this + 132) = v1;
  *(_QWORD *)((char *)this + 140) = v2;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 38) = 1103626240;
  *((_DWORD *)this + 39) = 1103626240;
  *((float *)this + 37) = 15.0 * 15.0;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((float *)this + 40) = 15.0 * 15.0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 41) = 1103626240;
  *((_DWORD *)this + 42) = 1103626240;
  *((_WORD *)this + 90) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_WORD *)this + 92) = 1;
  *((_WORD *)this + 98) = 0;
  *((_BYTE *)this + 186) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_WORD *)this + 104) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  v3 = CTimer::m_snTimeInMilliseconds;
  *(_DWORD *)this = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3000.0) + v3;
}


// ============================================================

// Address: 0x4bfb20
// Original: _ZN13CEventScannerD2Ev
// Demangled: CEventScanner::~CEventScanner()
void __fastcall CEventScanner::~CEventScanner(CEventScanner *this)
{
  ;
}


// ============================================================

// Address: 0x4bfb24
// Original: _ZN13CEventScanner16ScanForEventsNowERK4CPedi
// Demangled: CEventScanner::ScanForEventsNow(CPed const&,int)
void __fastcall CEventScanner::ScanForEventsNow(CEventScanner *this, const CPed *a2, int a3)
{
  int v3; // r3

  if ( !a3 )
  {
    v3 = *((unsigned __int8 *)this + 12);
    if ( *((_BYTE *)this + 12) )
    {
      *((_DWORD *)this + 1) = CTimer::m_snTimeInMilliseconds;
      *((_DWORD *)this + 2) = -1;
      v3 = 1;
      *((_BYTE *)this + 12) = 1;
    }
    CVehiclePotentialCollisionScanner::ScanForVehiclePotentialCollisionEvents(
      (CEventScanner *)((char *)this + 4),
      a2,
      (CEntity **)this + 1,
      v3);
  }
}


// ============================================================

// Address: 0x4bfb50
// Original: _ZN13CEventScanner13ScanForEventsER4CPed
// Demangled: CEventScanner::ScanForEvents(CPed &)
void __fastcall CEventScanner::ScanForEvents(CEventScanner *this, CPed *a2, CEntity **a3, int a4)
{
  CEntity **v6; // r10
  CPedPotentialCollisionScanner *v7; // r0
  __int64 v8; // r0
  const CPed *v9; // r1
  int v10; // r0
  int *v11; // r9
  int CurrentEvent; // r0
  int SimplestActiveTask; // r0
  CTaskManager *v14; // r5
  int TaskByType; // r0
  CPed *v16; // r1
  bool v17; // zf
  int v18; // r2
  bool v19; // zf
  int v20; // r0
  int v21; // r0
  bool v22; // zf
  int v23; // r0
  const CPed *PlayerPed; // r0
  CPed *v25[2]; // [sp+14h] [bp-5Ch] BYREF
  __int16 v26; // [sp+1Eh] [bp-52h]
  int v27[7]; // [sp+54h] [bp-1Ch] BYREF

  if ( (unsigned int)CTimer::m_snTimeInMilliseconds <= *(_DWORD *)this )
    return;
  v6 = (CEntity **)*((_DWORD *)a2 + 272);
  v7 = (CPedPotentialCollisionScanner *)CVehiclePotentialCollisionScanner::ScanForVehiclePotentialCollisionEvents(
                                          (CEventScanner *)((char *)this + 4),
                                          a2,
                                          a3,
                                          a4);
  CPedPotentialCollisionScanner::ScanForPedPotentialCollisionEvents(v7, a2, v6[92]);
  CObjectPotentialCollisionScanner::ScanForObjectPotentialCollisionEvents((CEventScanner *)((char *)this + 16), a2);
  if ( !*((_BYTE *)this + 180) )
  {
    *(_QWORD *)((char *)this + 172) = __PAIR64__(
                                        CPedAcquaintanceScanner::ms_iAcquaintanceScanPeriod,
                                        CTimer::m_snTimeInMilliseconds);
    *((_BYTE *)this + 180) = 1;
  }
  if ( *((_BYTE *)this + 181) )
  {
    LODWORD(v8) = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 181) = 0;
    *((_DWORD *)this + 43) = v8;
    HIDWORD(v8) = v8;
  }
  else
  {
    HIDWORD(v8) = *((_DWORD *)this + 43);
    LODWORD(v8) = CTimer::m_snTimeInMilliseconds;
  }
  if ( HIDWORD(v8) + *((_DWORD *)this + 44) <= (unsigned int)v8 )
  {
    HIDWORD(v8) = CPedAcquaintanceScanner::ms_iAcquaintanceScanPeriod;
    *(_QWORD *)((char *)this + 172) = v8;
    *((_BYTE *)this + 180) = 1;
    if ( CPedAcquaintanceScanner::IsScanPermitted((CEventScanner *)((char *)this + 172), a2) == 1 )
    {
      v25[0] = 0;
      v27[0] = -1;
      CPedAcquaintanceScanner::FindClosestAcquaintance(
        (CEventScanner *)((char *)this + 172),
        a2,
        -1,
        v6 + 76,
        16,
        v25,
        v27);
    }
  }
  CAttractorScanner::ScanForAttractorsInRange((CEventScanner *)((char *)this + 28), a2);
  CNearbyFireScanner::ScanForNearbyFires((CEventScanner *)((char *)this + 200), a2);
  CMentalState::Process((CMentalState *)(v6 + 93), a2);
  v10 = *((_DWORD *)a2 + 289);
  v11 = (int *)((char *)a2 + 1156);
  if ( (v10 & 1) != 0 )
    goto LABEL_15;
  if ( (v10 & 0x200) == 0 && !CPedGeometryAnalyser::IsInAir(a2, v9) )
  {
    v10 = *v11;
LABEL_15:
    if ( (v10 & 0x200) != 0 )
    {
      if ( !CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(v6 + 14))
        || (CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(v6 + 14)),
            (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 8))(CurrentEvent) != 33) )
      {
        *v11 &= ~0x200u;
      }
    }
    goto LABEL_19;
  }
  CEventInAir::CEventInAir((CEventInAir *)v25);
  CEventGroup::Add((CEventGroup *)(v6 + 26), (CEvent *)v25, 0);
  CEvent::~CEvent((CEvent *)v25);
LABEL_19:
  if ( *((_DWORD *)a2 + 462) )
  {
    CEvent::CEvent((CEvent *)v25);
    v25[0] = (CPed *)&off_666F44;
    if ( CPed::IsPlayer(a2)
      || (SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(v6 + 1))) == 0
      || (*(int (__fastcall **)(int, CPed *, int, CPed **))(*(_DWORD *)SimplestActiveTask + 28))(
           SimplestActiveTask,
           a2,
           1,
           v25) )
    {
      CEventGroup::Add((CEventGroup *)(v6 + 26), (CEvent *)v25, 0);
    }
    else
    {
      CWeapon::GenerateDamageEvent((int)a2, *(_DWORD *)(*((_DWORD *)a2 + 462) + 20), 37, 5, 3, 0);
    }
    CEvent::~CEvent((CEvent *)v25);
  }
  CSexyPedScanner::ScanForSexyPedEvents((CEventScanner *)((char *)this + 188), a2, v6 + 76, 16);
  v14 = (CTaskManager *)(*((_DWORD *)a2 + 272) + 4);
  TaskByType = CTaskManager::FindTaskByType(v14, 4, 1000);
  if ( TaskByType
    || (TaskByType = CTaskManager::FindTaskByType(v14, 3, 1000)) != 0
    || (TaskByType = CTaskManager::FindTaskByType(v14, 1, 1000)) != 0
    || (TaskByType = CTaskManager::FindTaskByType(v14, 2, 1000)) != 0 )
  {
    v16 = *(CPed **)(TaskByType + 16);
    v17 = v16 == 0;
    if ( v16 )
    {
      TaskByType = *((_DWORD *)v16 + 354);
      v17 = TaskByType == 0;
    }
    if ( !v17 )
    {
      v18 = *((_DWORD *)a2 + 354);
      v19 = v18 == 0;
      if ( v18 )
        v19 = *(unsigned __int8 *)(TaskByType + 51) == *(unsigned __int8 *)(v18 + 51);
      if ( !v19 )
      {
        CEventAreaCodes::CEventAreaCodes((CEventAreaCodes *)v25, v16);
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v25, 0);
        CEventAreaCodes::~CEventAreaCodes((CEventAreaCodes *)v25);
      }
    }
  }
  v20 = *((_DWORD *)a2 + 354);
  if ( v20 )
  {
    v21 = *(__int16 *)(v20 + 38);
    if ( v21 == (unsigned __int16)MI_ESCALATORSTEP || v21 == (unsigned __int16)MI_ESCALATORSTEP8 )
    {
      CEvent::CEvent((CEvent *)v25);
      v25[0] = (CPed *)&off_667248;
      CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v25, 0);
      CEvent::~CEvent((CEvent *)v25);
    }
  }
  v23 = *((unsigned __int8 *)a2 + 1157) << 31;
  v22 = v23 == 0;
  if ( v23 )
  {
    v23 = *((_DWORD *)a2 + 356);
    v22 = v23 == 0;
  }
  if ( !v22
    && *(_DWORD *)(v23 + 1440) == 5
    && !CPed::IsPlayer(a2)
    && *(_DWORD *)(FindPlayerPed(-1) + 1416) == *((_DWORD *)a2 + 356) )
  {
    PlayerPed = (const CPed *)FindPlayerPed(-1);
    CEventPedEnteredMyVehicle::CEventPedEnteredMyVehicle(
      (CEventPedEnteredMyVehicle *)v25,
      PlayerPed,
      *((const CVehicle **)a2 + 356),
      10);
    v26 = 706;
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v25, 0);
    CEventPedEnteredMyVehicle::~CEventPedEnteredMyVehicle((CEventPedEnteredMyVehicle *)v25);
  }
  if ( *((float *)a2 + 337) <= 0.0
    && CPed::IsAlive(a2) == 1
    && CTimer::m_snTimeInMilliseconds > (unsigned int)CEventScanner::m_sDeadPedWalkingTimer )
  {
    CEventDamage::CEventDamage((int)v25, 0, 0, 55, 3, 0, 0, 0);
    if ( !CEventGroup::HasEventOfType((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (const CEvent *)v25) )
    {
      CWeapon::GenerateDamageEvent((int)a2, 0, 54, 10, 3, 0);
      CEventScanner::m_sDeadPedWalkingTimer = CTimer::m_snTimeInMilliseconds + 2000;
    }
    CEventDamage::~CEventDamage((CEventDamage *)v25);
  }
}


// ============================================================

// Address: 0x4bff50
// Original: _ZN13CEventScanner5ClearEv
// Demangled: CEventScanner::Clear(void)
int __fastcall CEventScanner::Clear(int this)
{
  __int64 v1; // d16
  __int64 v2; // d17

  *(float *)&v1 = 25.0;
  *((float *)&v1 + 1) = 25.0;
  *(float *)&v2 = 25.0;
  *((float *)&v2 + 1) = 25.0;
  *(_QWORD *)(this + 52) = 0LL;
  *(_QWORD *)(this + 60) = 0LL;
  *(_QWORD *)(this + 132) = v1;
  *(_QWORD *)(this + 140) = v2;
  *(_QWORD *)(this + 92) = 0LL;
  *(_QWORD *)(this + 100) = 0LL;
  *(_DWORD *)(this + 108) = 0;
  *(float *)(this + 148) = 15.0 * 15.0;
  *(_QWORD *)(this + 112) = 0LL;
  *(_QWORD *)(this + 120) = 0LL;
  *(_QWORD *)(this + 76) = 0LL;
  *(_QWORD *)(this + 84) = 0LL;
  *(float *)(this + 160) = 15.0 * 15.0;
  *(_DWORD *)(this + 68) = 0;
  *(_DWORD *)(this + 72) = 0;
  *(_DWORD *)(this + 152) = 1103626240;
  *(_DWORD *)(this + 156) = 1103626240;
  *(_DWORD *)(this + 128) = 0;
  *(_DWORD *)(this + 164) = 1103626240;
  *(_DWORD *)(this + 168) = 1103626240;
  return this;
}


// ============================================================
