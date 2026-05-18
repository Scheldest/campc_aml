
// Address: 0x18c060
// Original: j__ZN33CTaskAllocatorPlayerCommandAttackC2EP4CPedii
// Demangled: CTaskAllocatorPlayerCommandAttack::CTaskAllocatorPlayerCommandAttack(CPed *,int,int)
// attributes: thunk
void __fastcall CTaskAllocatorPlayerCommandAttack::CTaskAllocatorPlayerCommandAttack(
        CTaskAllocatorPlayerCommandAttack *this,
        CPed *a2,
        int a3,
        int a4)
{
  _ZN33CTaskAllocatorPlayerCommandAttackC2EP4CPedii(this, a2, a3, a4);
}


// ============================================================

// Address: 0x54a1c4
// Original: _ZN33CTaskAllocatorPlayerCommandAttackC2EP4CPedii
// Demangled: CTaskAllocatorPlayerCommandAttack::CTaskAllocatorPlayerCommandAttack(CPed *,int,int)
void __fastcall CTaskAllocatorPlayerCommandAttack::CTaskAllocatorPlayerCommandAttack(
        CTaskAllocatorPlayerCommandAttack *this,
        CPed *a2,
        int a3,
        int a4)
{
  CEntity *PlayerPed; // r0

  PlayerPed = (CEntity *)FindPlayerPed(-1);
  *((_DWORD *)this + 2) = a3;
  *((_WORD *)this + 12) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_66D568;
  *((_DWORD *)this + 3) = PlayerPed;
  *((_DWORD *)this + 1) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 1);
    PlayerPed = (CEntity *)*((_DWORD *)this + 3);
  }
  if ( PlayerPed )
    CEntity::RegisterReference(PlayerPed, (CEntity **)this + 3);
  *((_DWORD *)this + 7) = a4;
  *(_DWORD *)this = &off_66D58C;
}


// ============================================================

// Address: 0x54a234
// Original: _ZN33CTaskAllocatorPlayerCommandAttack13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorPlayerCommandAttack::AllocateTasks(CPedGroupIntelligence *)
CEntity *__fastcall CTaskAllocatorPlayerCommandAttack::AllocateTasks(
        CTaskAllocatorPlayerCommandAttack *this,
        CPedGroupIntelligence *a2)
{
  __int64 v4; // r0
  CPed *Leader; // r0
  CPedList *v6; // r1
  CEntity *result; // r0
  int v8; // r10
  int v9; // r4
  unsigned int v10; // r1
  CPed **v11; // r2
  bool v12; // zf
  CTaskComplexLeaveCar *v13; // r5
  unsigned int v14; // r1
  CTaskComplexKillPedOnFoot *v15; // r5
  unsigned int v16; // r1
  CTaskSimpleStandStill *v17; // r5
  int v18; // r1
  CEntity *v19; // r1
  CPedGroupIntelligence *v20; // [sp+10h] [bp-E0h]
  CPed *v21; // [sp+14h] [bp-DCh] BYREF
  _UNKNOWN **v22; // [sp+18h] [bp-D8h] BYREF
  CEntity *v23[15]; // [sp+1Ch] [bp-D4h] BYREF
  _DWORD v24[38]; // [sp+58h] [bp-98h] BYREF

  CPedList::Empty((CPedList *)v24);
  if ( *((int *)this + 7) < 0 )
  {
    result = (CEntity *)*((_DWORD *)this + 1);
    if ( result )
    {
      v18 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 24) = 1;
      *((_DWORD *)this + 4) = v18;
      *((_DWORD *)this + 5) = 3000;
      v19 = (CEntity *)*((_DWORD *)this + 2);
      v23[0] = result;
      v22 = &off_66D544;
      v23[1] = v19;
      CEntity::RegisterReference(result, v23);
      CTaskAllocatorKillOnFoot::AllocateTasks((CTaskAllocatorKillOnFoot *)&v22, a2);
      result = v23[0];
      v22 = &off_66D544;
      if ( v23[0] )
        return (CEntity *)CEntity::CleanUpOldReference(v23[0], v23);
    }
  }
  else
  {
    v4 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0xBB800000000LL;
    *((_BYTE *)this + 24) = 1;
    *((_QWORD *)this + 2) = v4;
    CPedList::BuildListFromGroup_NoLeader((CPedList *)v24, (CPedGroupMembership *)(*(_DWORD *)a2 + 8));
    if ( CPedGroupMembership::GetLeader((CPedGroupMembership *)(*(_DWORD *)a2 + 8)) )
    {
      Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)(*(_DWORD *)a2 + 8));
      if ( CPed::IsPlayer(Leader) == 1 )
        CPedList::RemovePedsThatDontListenToPlayer((CPedList *)v24);
    }
    v20 = a2;
    CPedList::RemovePedsAttackingPedType((CPedList *)v24, *((_DWORD *)this + 7));
    CPedList::BuildListOfPedsOfPedType((CPedList *)CFormation::m_DestinationPeds, *((_DWORD *)this + 7));
    CFormation::DistributeDestinations_PedsToAttack((CFormation *)v24, v6);
    result = (CEntity *)v24[0];
    if ( v24[0] >= 1 )
    {
      v8 = 0;
      do
      {
        v9 = v24[v8 + 1];
        CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)&v22);
        v12 = *(unsigned __int8 *)(v9 + 1157) << 31 == 0;
        if ( *(unsigned __int8 *)(v9 + 1157) << 31 )
          v12 = *(_DWORD *)(v9 + 1424) == 0;
        if ( !v12 )
        {
          v13 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v10);
          CTaskComplexLeaveCar::CTaskComplexLeaveCar(v13, *(CVehicle **)(v9 + 1424), 0, 0, 1, 0);
          CTaskComplexSequence::AddTask((CTaskComplexSequence *)&v22, v13);
        }
        CFormation::ReturnTargetPedForPed((CFormation *)v9, (CPed *)&v21, v11);
        v15 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v14);
        CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v15, v21, -1, 0, 0, 0, 2);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)&v22, v15);
        v17 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v16);
        CTaskSimpleStandStill::CTaskSimpleStandStill(
          v17,
          (int)"gledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity",
          1,
          0,
          8.0);
        CTaskComplexSequence::AddTask((CTaskComplexSequence *)&v22, v17);
        CPedGroupIntelligence::SetTask(
          v20,
          (CPed *)v9,
          (const CTask *)&v22,
          (CPedGroupIntelligence *)((char *)v20 + 12),
          -1,
          0);
        CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)&v22);
        result = (CEntity *)v24[0];
        ++v8;
      }
      while ( v8 < v24[0] );
    }
  }
  return result;
}


// ============================================================

// Address: 0x54a3ec
// Original: _ZN33CTaskAllocatorPlayerCommandAttack12ProcessGroupEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorPlayerCommandAttack::ProcessGroup(CPedGroupIntelligence *)
CTaskAllocatorPlayerCommandAttack *__fastcall CTaskAllocatorPlayerCommandAttack::ProcessGroup(
        CTaskAllocatorPlayerCommandAttack *this,
        CPedGroupIntelligence *a2)
{
  CTaskAllocatorPlayerCommandAttack *v3; // r5

  v3 = this;
  CTaskAllocatorAttack::ProcessGroup(this, a2);
  if ( (*(int (__fastcall **)(CTaskAllocatorPlayerCommandAttack *, CPedGroupIntelligence *))(*(_DWORD *)v3 + 16))(
         v3,
         a2) )
  {
    return 0;
  }
  return v3;
}


// ============================================================

// Address: 0x54b418
// Original: _ZN33CTaskAllocatorPlayerCommandAttackD0Ev
// Demangled: CTaskAllocatorPlayerCommandAttack::~CTaskAllocatorPlayerCommandAttack()
void __fastcall CTaskAllocatorPlayerCommandAttack::~CTaskAllocatorPlayerCommandAttack(
        CTaskAllocatorPlayerCommandAttack *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  int v5; // r0
  int v6; // r1

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D568;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 3);
  v5 = CPools::ms_pTaskAllocatorPool;
  v6 = ((int)this - *(_DWORD *)CPools::ms_pTaskAllocatorPool) >> 5;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pTaskAllocatorPool + 4) + v6) |= 0x80u;
  if ( v6 < *(_DWORD *)(v5 + 12) )
    *(_DWORD *)(v5 + 12) = v6;
}


// ============================================================

// Address: 0x54b470
// Original: _ZNK33CTaskAllocatorPlayerCommandAttack7GetTypeEv
// Demangled: CTaskAllocatorPlayerCommandAttack::GetType(void)
int __fastcall CTaskAllocatorPlayerCommandAttack::GetType(CTaskAllocatorPlayerCommandAttack *this)
{
  return 6;
}


// ============================================================
