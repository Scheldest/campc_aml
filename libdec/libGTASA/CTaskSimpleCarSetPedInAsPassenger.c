
// Address: 0x18a748
// Original: j__ZN33CTaskSimpleCarSetPedInAsPassengerD2Ev
// Demangled: CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger()
// attributes: thunk
void __fastcall CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger(
        CTaskSimpleCarSetPedInAsPassenger *this)
{
  _ZN33CTaskSimpleCarSetPedInAsPassengerD2Ev(this);
}


// ============================================================

// Address: 0x197d3c
// Original: j__ZN33CTaskSimpleCarSetPedInAsPassenger10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedInAsPassenger::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarSetPedInAsPassenger::ProcessPed(CTaskSimpleCarSetPedInAsPassenger *this, CPed *a2)
{
  return _ZN33CTaskSimpleCarSetPedInAsPassenger10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19f8e4
// Original: j__ZN33CTaskSimpleCarSetPedInAsPassengerC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
// attributes: thunk
void __fastcall CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
        CTaskSimpleCarSetPedInAsPassenger *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  _ZN33CTaskSimpleCarSetPedInAsPassengerC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar(this, a2, a3, a4);
}


// ============================================================

// Address: 0x5026a8
// Original: _ZN33CTaskSimpleCarSetPedInAsPassengerC2EP8CVehicleiP28CTaskUtilityLineUpPedWithCar
// Demangled: CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(CVehicle *,int,CTaskUtilityLineUpPedWithCar *)
void __fastcall CTaskSimpleCarSetPedInAsPassenger::CTaskSimpleCarSetPedInAsPassenger(
        CTaskSimpleCarSetPedInAsPassenger *this,
        CVehicle *a2,
        int a3,
        CTaskUtilityLineUpPedWithCar *a4)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_BYTE *)this + 28) = 0;
  *((_BYTE *)this + 29) = 0;
  *((_BYTE *)this + 30) = 0;
  *(_DWORD *)this = &off_66B244;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x5026f8
// Original: _ZN33CTaskSimpleCarSetPedInAsPassengerD2Ev
// Demangled: CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger()
void __fastcall CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger(
        CTaskSimpleCarSetPedInAsPassenger *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B244;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x502724
// Original: _ZN33CTaskSimpleCarSetPedInAsPassengerD0Ev
// Demangled: CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger()
void __fastcall CTaskSimpleCarSetPedInAsPassenger::~CTaskSimpleCarSetPedInAsPassenger(
        CTaskSimpleCarSetPedInAsPassenger *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66B244;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x502754
// Original: _ZN33CTaskSimpleCarSetPedInAsPassenger10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedInAsPassenger::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarSetPedInAsPassenger::ProcessPed(CTaskSimpleCarSetPedInAsPassenger *this, CPed *a2)
{
  unsigned int *v4; // r11
  int v5; // r0
  CEntity *v6; // r0
  CEntity *v7; // r0
  int v8; // r2
  int v9; // r1
  int v10; // r0
  int v11; // r2
  int *v12; // r1
  CCarEnterExit *v13; // r0
  int v14; // r8
  CPed *v15; // r0
  bool v16; // zf
  const CPed *v17; // r2
  CCarEnterExit *v18; // r9
  CEntity *v19; // r6
  int v20; // r0
  int v21; // r1
  int v22; // r2
  __int64 *v23; // r6
  __int64 v24; // kr00_8
  int v25; // r0
  _DWORD *v26; // r1
  CVehicle *v27; // r0
  int v28; // r0
  unsigned int v29; // r1
  unsigned int v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r6
  unsigned int v33; // r4
  bool v34; // r3
  unsigned int v35; // r1
  int v36; // r4
  CTaskSimpleCarDrive *v37; // r5
  _DWORD v39[2]; // [sp+4h] [bp-34h] BYREF
  CEntity *v40[2]; // [sp+Ch] [bp-2Ch] BYREF
  char v41; // [sp+14h] [bp-24h]
  int v42; // [sp+15h] [bp-23h]
  char v43; // [sp+19h] [bp-1Fh]

  v4 = (unsigned int *)((char *)a2 + 1156);
  if ( *((unsigned __int8 *)a2 + 1157) << 31 )
  {
    v5 = *((_DWORD *)this + 1);
    if ( v5 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
  }
  v6 = (CEntity *)*((_DWORD *)a2 + 356);
  if ( v6 )
    CEntity::CleanUpOldReference(v6, (CEntity **)a2 + 356);
  v7 = (CEntity *)*((_DWORD *)this + 4);
  *((_DWORD *)a2 + 356) = v7;
  CEntity::RegisterReference(v7, (CEntity **)a2 + 356);
  *v4 |= 0x100u;
  *((_DWORD *)a2 + 344) = *((_DWORD *)a2 + 343);
  if ( CPed::IsPlayer(a2) == 1 )
  {
    *(_BYTE *)(*((_DWORD *)a2 + 273) + 141) = 1;
    CPlayerPed::ClearAdrenaline(a2);
  }
  if ( CPed::IsPlayer(a2) == 1 )
  {
    v9 = *((_DWORD *)this + 4);
    v10 = *(_DWORD *)(v9 + 1068);
    if ( (v10 & 0x20000) == 0 )
    {
      v11 = *(_DWORD *)(v9 + 1072);
      v12 = (int *)(v9 + 1068);
      *v12 = v10 | 0x20000;
      v12[1] = v11;
      FindPlayerPed(-1);
      CCrime::ReportCrime();
    }
  }
  v13 = (CCarEnterExit *)*((_DWORD *)this + 4);
  if ( (*((_BYTE *)v13 + 1069) & 2) != 0
    || (v14 = CCarEnterExit::ComputePassengerIndexFromCarDoor(v13, *((const CVehicle **)this + 5), v8), v14 == -1) )
  {
    v14 = -1;
  }
  else
  {
    v15 = *(CPed **)(*((_DWORD *)this + 4) + 4 * v14 + 1128);
    v16 = v15 == a2;
    if ( v15 != a2 )
      v16 = v15 == 0;
    if ( !v16
      && !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)v15 + 272) + 4), 704)
      && !CTaskManager::FindActiveTaskByType(
            (CTaskManager *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v14 + 1128) + 1088) + 4),
            824)
      && !CTaskManager::FindActiveTaskByType(
            (CTaskManager *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v14 + 1128) + 1088) + 4),
            705)
      && !CTaskManager::FindActiveTaskByType(
            (CTaskManager *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v14 + 1128) + 1088) + 4),
            826) )
    {
      v18 = (CCarEnterExit *)*((_DWORD *)this + 4);
      v19 = (CEntity *)CCarEnterExit::ComputeTargetDoorToExit(v18, *((const CVehicle **)v18 + v14 + 282), v17);
      CTaskSimple::CTaskSimple((CTaskSimple *)v39);
      v40[0] = v18;
      v39[0] = &off_66B348;
      v40[1] = v19;
      v41 = 1;
      v43 = 0;
      v42 = 0;
      CEntity::RegisterReference(v18, v40);
      LOBYTE(v42) = 1;
      CTaskSimpleCarSetPedOut::ProcessPed(
        (CTaskSimpleCarSetPedOut *)v39,
        *(CPed **)(*((_DWORD *)this + 4) + 4 * v14 + 1128));
      v39[0] = &off_66B348;
      if ( v40[0] )
        CEntity::CleanUpOldReference(v40[0], v40);
      CTask::~CTask((CTask *)v39);
    }
  }
  if ( *((_BYTE *)this + 28) )
  {
    v20 = *((_DWORD *)this + 4);
    v21 = *((_DWORD *)a2 + 5);
    v22 = *(_DWORD *)(v20 + 20);
    v23 = (__int64 *)(v22 + 48);
    if ( !v22 )
      v23 = (__int64 *)(v20 + 4);
    v24 = *v23;
    v25 = *((_DWORD *)v23 + 2);
    if ( v21 )
    {
      *(_DWORD *)(v21 + 48) = v24;
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = HIDWORD(v24);
      v26 = (_DWORD *)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      v26 = (_DWORD *)((char *)a2 + 12);
      *(_QWORD *)((char *)a2 + 4) = v24;
    }
    *v26 = v25;
  }
  v27 = (CVehicle *)*((_DWORD *)this + 4);
  if ( v14 == -1 )
    CVehicle::AddPassenger(v27, a2);
  else
    CVehicle::AddPassenger(v27, a2, v14);
  CPed::UpdateStatEnteringVehicle(a2);
  CPed::SetMoveState(a2, 0);
  (*(void (__fastcall **)(CPed *))(*(_DWORD *)a2 + 96))(a2);
  *((_DWORD *)a2 + 7) &= ~1u;
  v28 = *((_DWORD *)this + 4);
  if ( *(unsigned __int16 *)(v28 + 1120) == 0xFFFF )
    *(_WORD *)(v28 + 1120) = 15000;
  CPed::SetPedState(a2);
  if ( *((_BYTE *)this + 29) )
    CVehicle::ClearGettingInFlags(*((CVehicle **)this + 4), *((_BYTE *)this + 29));
  if ( *((_BYTE *)this + 30) )
    *(_BYTE *)(*((_DWORD *)this + 4) + 1161) -= *((_BYTE *)this + 30);
  CPed::RemoveWeaponWhenEnteringVehicle(a2, 0);
  v29 = *v4;
  v30 = v4[1];
  v31 = v4[2];
  v32 = v4[3];
  v33 = *v4 | 0x2000;
  if ( (*(_DWORD *)(*((_DWORD *)this + 4) + 1068) & 0x200) != 0 )
    v33 = v29 & 0xFFFFDFFF;
  *v4 = v33;
  v4[1] = v30;
  v4[2] = v31;
  v4[3] = v32;
  CCarEnterExit::RemoveGetInAnims(a2, (const CPed *)v29);
  CCarEnterExit::AddInCarAnim(*((CCarEnterExit **)this + 4), a2, 0, v34);
  if ( !*((_BYTE *)this + 28) )
    CTaskUtilityLineUpPedWithCar::ProcessPed(
      *((CTaskUtilityLineUpPedWithCar **)this + 6),
      a2,
      *((CVehicle **)this + 4),
      0);
  v36 = *((_DWORD *)a2 + 272);
  v37 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, v35);
  CTaskSimpleCarDrive::CTaskSimpleCarDrive(
    v37,
    *((CVehicle **)this + 4),
    *((CTaskUtilityLineUpPedWithCar **)this + 6),
    0);
  CTaskManager::SetTask((CTaskManager *)(v36 + 4), v37, 4, 0);
  return 1;
}


// ============================================================

// Address: 0x506e30
// Original: _ZNK33CTaskSimpleCarSetPedInAsPassenger5CloneEv
// Demangled: CTaskSimpleCarSetPedInAsPassenger::Clone(void)
int __fastcall CTaskSimpleCarSetPedInAsPassenger::Clone(CTaskSimpleCarSetPedInAsPassenger *this, unsigned int a2)
{
  int v3; // r5
  CEntity *v4; // r6
  __int64 v5; // r8

  v3 = CTask::operator new((CTask *)&dword_20, a2);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  v5 = *(_QWORD *)((char *)this + 20);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_QWORD *)(v3 + 20) = v5;
  *(_BYTE *)(v3 + 28) = 0;
  *(_BYTE *)(v3 + 29) = 0;
  *(_BYTE *)(v3 + 30) = 0;
  *(_DWORD *)v3 = &off_66B244;
  *(_DWORD *)(v3 + 16) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 16));
  *(_BYTE *)(v3 + 28) = *((_BYTE *)this + 28);
  *(_BYTE *)(v3 + 29) = *((_BYTE *)this + 29);
  *(_BYTE *)(v3 + 30) = *((_BYTE *)this + 30);
  return v3;
}


// ============================================================

// Address: 0x506e94
// Original: _ZNK33CTaskSimpleCarSetPedInAsPassenger11GetTaskTypeEv
// Demangled: CTaskSimpleCarSetPedInAsPassenger::GetTaskType(void)
int __fastcall CTaskSimpleCarSetPedInAsPassenger::GetTaskType(CTaskSimpleCarSetPedInAsPassenger *this)
{
  return 811;
}


// ============================================================

// Address: 0x506e9a
// Original: _ZN33CTaskSimpleCarSetPedInAsPassenger13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarSetPedInAsPassenger::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarSetPedInAsPassenger::MakeAbortable(
        CTaskSimpleCarSetPedInAsPassenger *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================
