
// Address: 0x192eb4
// Original: j__ZN34CTaskSimpleCarSetPedSlowDraggedOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::ProcessPed(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleCarSetPedSlowDraggedOut::ProcessPed(CTaskSimpleCarSetPedSlowDraggedOut *this, CPed *a2)
{
  return _ZN34CTaskSimpleCarSetPedSlowDraggedOut10ProcessPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x504a0c
// Original: _ZN34CTaskSimpleCarSetPedSlowDraggedOutC2EP8CVehiclei
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::CTaskSimpleCarSetPedSlowDraggedOut(CVehicle *,int)
void __fastcall CTaskSimpleCarSetPedSlowDraggedOut::CTaskSimpleCarSetPedSlowDraggedOut(
        CTaskSimpleCarSetPedSlowDraggedOut *this,
        CVehicle *a2,
        int a3)
{
  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 3) = a3;
  *(_DWORD *)this = &off_66B3E4;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x504a48
// Original: _ZN34CTaskSimpleCarSetPedSlowDraggedOutD2Ev
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::~CTaskSimpleCarSetPedSlowDraggedOut()
void __fastcall CTaskSimpleCarSetPedSlowDraggedOut::~CTaskSimpleCarSetPedSlowDraggedOut(
        CTaskSimpleCarSetPedSlowDraggedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B3E4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x504a74
// Original: _ZN34CTaskSimpleCarSetPedSlowDraggedOutD0Ev
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::~CTaskSimpleCarSetPedSlowDraggedOut()
void __fastcall CTaskSimpleCarSetPedSlowDraggedOut::~CTaskSimpleCarSetPedSlowDraggedOut(
        CTaskSimpleCarSetPedSlowDraggedOut *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 8);
  v2 = (CEntity *)*((_DWORD *)this + 2);
  *(_DWORD *)this = &off_66B3E4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTask::~CTask(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x504aa4
// Original: _ZN34CTaskSimpleCarSetPedSlowDraggedOut10ProcessPedEP4CPed
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::ProcessPed(CPed *)
int __fastcall CTaskSimpleCarSetPedSlowDraggedOut::ProcessPed(
        CTaskSimpleCarSetPedSlowDraggedOut *this,
        CPed *a2,
        int a3,
        bool a4)
{
  CCarEnterExit *v6; // r0
  bool v7; // zf
  int v8; // r0
  int v9; // r6
  int v10; // r0
  const CPed *v11; // r1
  int v12; // r8
  CTaskSimplePlayerOnFoot *v13; // r6
  CTaskManager *v14; // r0
  CTask *WanderTaskByPedType; // r1
  const CVector *v16; // r8
  float v17; // s16
  float v18; // s18
  int v19; // r0
  float *v20; // r1
  float v21; // s8
  float v22; // s10
  int v23; // r1
  int v24; // r2
  float v25; // r0
  float *v26; // r1
  int v27; // r0
  int v28; // r1
  float v29; // s0
  CVector *v30; // r3
  int v31; // r0
  double v33; // [sp+8h] [bp-48h] BYREF
  float v34; // [sp+10h] [bp-40h]
  float v35[14]; // [sp+18h] [bp-38h] BYREF

  v6 = (CCarEnterExit *)*((_DWORD *)a2 + 356);
  v7 = v6 == 0;
  if ( v6 )
  {
    v6 = (CCarEnterExit *)*((_DWORD *)this + 2);
    v7 = v6 == 0;
  }
  if ( !v7 )
  {
    CCarEnterExit::ComputeDoorFlag(v6, *((const CVehicle **)this + 3), 1, a4);
    v8 = *((_DWORD *)this + 2);
    if ( *(CPed **)(v8 + 1124) == a2 )
    {
      CVehicle::RemoveDriver((CVehicle *)v8, 1);
      v10 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)(v10 + 1288) == 5 )
        *(_DWORD *)(v10 + 1288) = 1;
      if ( *((_DWORD *)a2 + 359) == 6 && CVehicle::IsLawEnforcementVehicle(*((CVehicle **)this + 2)) )
        CVehicle::ChangeLawEnforcerState(*((CVehicle **)this + 2), 0);
    }
    else if ( *(_BYTE *)(v8 + 1164) )
    {
      v9 = 0;
      do
      {
        if ( *(CPed **)(v8 + 4 * v9 + 1128) == a2 )
        {
          CVehicle::RemovePassenger((CVehicle *)v8, a2);
          v8 = *((_DWORD *)this + 2);
        }
        ++v9;
      }
      while ( v9 < *(unsigned __int8 *)(v8 + 1164) );
    }
    *((_DWORD *)a2 + 289) &= ~0x100u;
    if ( CPed::IsPlayer(a2) == 1 )
    {
      v12 = *((_DWORD *)a2 + 272);
      v13 = (CTaskSimplePlayerOnFoot *)CTask::operator new((CTask *)&dword_34, (unsigned int)v11);
      CTaskSimplePlayerOnFoot::CTaskSimplePlayerOnFoot(v13);
    }
    else
    {
      v12 = *((_DWORD *)a2 + 272);
      if ( *((_BYTE *)a2 + 1096) != 2 )
      {
        WanderTaskByPedType = (CTask *)CTaskComplexWander::GetWanderTaskByPedType(a2, v11);
        v14 = (CTaskManager *)(v12 + 4);
        goto LABEL_22;
      }
      v13 = (CTaskSimplePlayerOnFoot *)CTask::operator new((CTask *)&dword_20, (unsigned int)v11);
      CTaskSimpleStandStill::CTaskSimpleStandStill(
        v13,
        (int)"gledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity",
        1,
        0,
        8.0);
    }
    v14 = (CTaskManager *)(v12 + 4);
    WanderTaskByPedType = v13;
LABEL_22:
    CTaskManager::SetTask(v14, WanderTaskByPedType, 4, 0);
    CPed::RestartNonPartialAnims(a2);
    *((_DWORD *)a2 + 7) |= 1u;
    CPed::UpdateStatLeavingVehicle(a2);
    CPed::ReplaceWeaponWhenExitingVehicle(a2);
    v16 = (const CVector *)*((_DWORD *)a2 + 5);
    v17 = CCarEnterExit::ms_vecPedGetUpAnimOffset;
    v18 = unk_9FEF68;
    CVehicleAnimGroup::ComputeAnimDoorOffsets(
      (CVehicleAnimGroup *)&v33,
      (int)&CVehicleAnimGroupData::m_vehicleAnimGroups[74
                                                     * *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 2) + 904)
                                                                          + 222)]);
    v35[0] = *(float *)&v33 - v17;
    v35[2] = 0.0;
    v35[1] = *((float *)&v33 + 1) - v18;
    Multiply3x3((const CMatrix *)&v33, v16);
    v19 = *((_DWORD *)a2 + 5);
    v20 = (float *)(v19 + 48);
    if ( !v19 )
      v20 = (float *)((char *)a2 + 4);
    v21 = v20[1];
    v22 = v20[2];
    *(float *)&v33 = *v20 + *(float *)&v33;
    *((float *)&v33 + 1) = v21 + *((float *)&v33 + 1);
    v34 = v22 + v34;
    CPedPlacement::FindZCoorForPed((CPedPlacement *)&v33, (CVector *)v20);
    v23 = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 18) = 0;
    *((_DWORD *)a2 + 19) = 0;
    *((_DWORD *)a2 + 20) = 0;
    v24 = HIDWORD(v33);
    v25 = v34;
    if ( v23 )
    {
      *(_DWORD *)(v23 + 48) = LODWORD(v33);
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 52) = v24;
      v26 = (float *)(*((_DWORD *)a2 + 5) + 56);
    }
    else
    {
      v26 = (float *)((char *)a2 + 12);
      *(double *)((char *)a2 + 4) = v33;
    }
    *v26 = v25;
    v27 = *((_DWORD *)this + 2);
    v28 = *(_DWORD *)(v27 + 20);
    if ( v28 )
      v29 = atan2f(COERCE_FLOAT(*(_DWORD *)(v28 + 16) ^ 0x80000000), *(float *)(v28 + 20));
    else
      v29 = *(float *)(v27 + 16);
    *((float *)a2 + 343) = v29;
    *((float *)a2 + 344) = v29;
    CPed::CalculateNewOrientation(a2);
    if ( !CCarEnterExit::IsRoomForPedToLeaveCar(
            *((CCarEnterExit **)this + 2),
            *((const CVehicle **)this + 3),
            (int)v35,
            v30) )
      CPed::PositionPedOutOfCollision(a2, *((_DWORD *)this + 3), *((CVehicle **)this + 2), 1);
    *((_DWORD *)a2 + 291) |= 8u;
    CPed::SetPedState(a2);
    v31 = *(_DWORD *)a2;
    *((_DWORD *)a2 + 335) = 1;
    (*(void (__fastcall **)(CPed *))(v31 + 96))(a2);
  }
  return 1;
}


// ============================================================

// Address: 0x50716c
// Original: _ZNK34CTaskSimpleCarSetPedSlowDraggedOut5CloneEv
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::Clone(void)
int __fastcall CTaskSimpleCarSetPedSlowDraggedOut::Clone(CTaskSimpleCarSetPedSlowDraggedOut *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_QWORD *)this + 1);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_DWORD *)(v3 + 12) = HIDWORD(v4);
  *(_DWORD *)v3 = &off_66B3E4;
  *(_DWORD *)(v3 + 8) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x5071b0
// Original: _ZNK34CTaskSimpleCarSetPedSlowDraggedOut11GetTaskTypeEv
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::GetTaskType(void)
int __fastcall CTaskSimpleCarSetPedSlowDraggedOut::GetTaskType(CTaskSimpleCarSetPedSlowDraggedOut *this)
{
  return 822;
}


// ============================================================

// Address: 0x5071b6
// Original: _ZN34CTaskSimpleCarSetPedSlowDraggedOut13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleCarSetPedSlowDraggedOut::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleCarSetPedSlowDraggedOut::MakeAbortable(
        CTaskSimpleCarSetPedSlowDraggedOut *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 0;
}


// ============================================================
