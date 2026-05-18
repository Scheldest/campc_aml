
// Address: 0x54ac14
// Original: _ZN41CTaskAllocatorKillThreatsBasicRandomGroup13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorKillThreatsBasicRandomGroup::AllocateTasks(CPedGroupIntelligence *)
CPedGroups *__fastcall CTaskAllocatorKillThreatsBasicRandomGroup::AllocateTasks(
        CPedGroups **this,
        CPedGroupIntelligence *a2)
{
  const CPed *v4; // r1
  CPedGroups *result; // r0
  CTaskAllocatorKillThreatsBasic *v6; // r4
  CPedGroupMembership *v7; // r10
  CPedGroups *PedsGroup; // r0
  CPedGroup *v9; // r1
  CPed **v10; // r3
  int GroupId; // r6
  CPedGroup *v12; // r1
  int i; // r9
  CPed *Member; // r0
  char *v15; // r8
  int j; // r5
  CPed *v17; // r0
  char *v18; // r4
  unsigned int v19; // r1
  CTaskComplexKillPedOnFoot *v20; // r6
  unsigned int v21; // r1
  CTask *v22; // r6
  unsigned __int16 v23; // r0
  CTaskAllocatorKillThreatsBasicRandomGroup *v24; // [sp+24h] [bp-94h]
  _DWORD v25[16]; // [sp+28h] [bp-90h] BYREF
  _DWORD v26[2]; // [sp+68h] [bp-50h] BYREF
  _DWORD v27[18]; // [sp+70h] [bp-48h] BYREF

  CPedGroupIntelligence::FlushTasks(a2, (CPedGroupIntelligence *)((char *)a2 + 12), 0);
  CPedGroupIntelligence::FlushTasks(a2, (CPedGroupIntelligence *)((char *)a2 + 172), 0);
  v24 = (CTaskAllocatorKillThreatsBasicRandomGroup *)this;
  result = this[1];
  if ( result )
  {
    v6 = *(CTaskAllocatorKillThreatsBasic **)a2;
    v7 = (CPedGroupMembership *)(*(_DWORD *)a2 + 8);
    PedsGroup = (CPedGroups *)CPedGroups::GetPedsGroup(result, v4);
    if ( PedsGroup )
    {
      GroupId = CPedGroups::GetGroupId(PedsGroup, v9);
      result = (CPedGroups *)CPedGroups::ms_groups;
      v12 = (CPedGroup *)&CPedGroups::ms_groups[181 * GroupId];
      if ( v12 == v6 )
        return result;
      CTaskAllocatorKillThreatsBasic::ComputeClosestPeds(v6, v12, (CPedGroup *)v25, v10);
      for ( i = 0; i != 8; ++i )
      {
        Member = (CPed *)CPedGroupMembership::GetMember(v7, i);
        v15 = (char *)Member;
        if ( Member && !CPed::IsPlayer(Member) )
        {
          if ( CWeapon::IsTypeMelee((CWeapon *)&v15[28 * v15[1820] + 1444]) == 1
            && !CWeapon::IsTypeMelee((CWeapon *)(*((_DWORD *)v24 + 1)
                                               + 28 * *(char *)(*((_DWORD *)v24 + 1) + 1820)
                                               + 1444)) )
          {
            CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(
              (CTaskComplexSeekCoverUntilTargetDead *)v27,
              GroupId);
            CTaskSimple::CTaskSimple((CTaskSimple *)v26);
            v26[0] = &off_669000;
            CPedGroupIntelligence::SetEventResponseTask(
              a2,
              (CPed *)v15,
              1,
              (const CTask *)v27,
              0,
              (const CTask *)v26,
              -1);
            CTask::~CTask((CTask *)v26);
            CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead((CTaskComplexSeekCoverUntilTargetDead *)v27);
          }
          else
          {
            CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(
              (CTaskComplexKillPedGroupOnFoot *)v27,
              GroupId,
              (CPed *)v25[i]);
            CTaskSimple::CTaskSimple((CTaskSimple *)v26);
            v26[0] = &off_669000;
            CPedGroupIntelligence::SetEventResponseTask(
              a2,
              (CPed *)v15,
              1,
              (const CTask *)v27,
              0,
              (const CTask *)v26,
              -1);
            CTask::~CTask((CTask *)v26);
            CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot((CTaskComplexKillPedGroupOnFoot *)v27);
          }
        }
      }
    }
    else
    {
      for ( j = 0; j != 8; ++j )
      {
        v17 = (CPed *)CPedGroupMembership::GetMember(v7, j);
        v18 = (char *)v17;
        if ( v17 && !CPed::IsPlayer(v17) )
        {
          if ( CWeapon::IsTypeMelee((CWeapon *)&v18[28 * v18[1820] + 1444]) == 1
            && !CWeapon::IsTypeMelee((CWeapon *)(*((_DWORD *)v24 + 1)
                                               + 28 * *(char *)(*((_DWORD *)v24 + 1) + 1820)
                                               + 1444)) )
          {
            CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(
              (CTaskComplexSeekCoverUntilTargetDead *)v25,
              *((CPed **)v24 + 1));
            CTaskSimple::CTaskSimple((CTaskSimple *)v27);
            v27[0] = &off_669000;
            CPedGroupIntelligence::SetEventResponseTask(
              a2,
              (CPed *)v18,
              1,
              (const CTask *)v25,
              0,
              (const CTask *)v27,
              -1);
            CTask::~CTask((CTask *)v27);
            CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead((CTaskComplexSeekCoverUntilTargetDead *)v25);
          }
          else
          {
            CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v25);
            v20 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v19);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v20, *((CPed **)v24 + 1), -1, 0, 0, 0, 1);
            CTaskComplexSequence::AddTask((CTaskComplexSequence *)v25, v20);
            v22 = (CTask *)CTask::operator new((CTask *)&dword_34, v21);
            v23 = rand();
            CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
              (int)v22,
              0,
              9,
              1082130432,
              -4.0,
              (int)(float)((float)((float)v23 * 0.000015259) * 1000.0) + 1000,
              422,
              (int)"LookAbout",
              0);
            *(_DWORD *)v22 = &off_6658A8;
            CTaskComplexSequence::AddTask((CTaskComplexSequence *)v25, v22);
            CTaskSimple::CTaskSimple((CTaskSimple *)v27);
            v27[0] = &off_669000;
            CPedGroupIntelligence::SetEventResponseTask(
              a2,
              (CPed *)v18,
              1,
              (const CTask *)v25,
              0,
              (const CTask *)v27,
              -1);
            CTask::~CTask((CTask *)v27);
            CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v25);
          }
        }
      }
    }
    CPedGroupMembership::GetLeader(v7);
    return (CPedGroups *)CInterestingEvents::Add();
  }
  return result;
}


// ============================================================

// Address: 0x54b4a4
// Original: _ZN41CTaskAllocatorKillThreatsBasicRandomGroupD0Ev
// Demangled: CTaskAllocatorKillThreatsBasicRandomGroup::~CTaskAllocatorKillThreatsBasicRandomGroup()
void __fastcall CTaskAllocatorKillThreatsBasicRandomGroup::~CTaskAllocatorKillThreatsBasicRandomGroup(
        CTaskAllocatorKillThreatsBasicRandomGroup *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D5B0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pTaskAllocatorPool;
  v5 = ((int)this - *(_DWORD *)CPools::ms_pTaskAllocatorPool) >> 5;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pTaskAllocatorPool + 4) + v5) |= 0x80u;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x54b4ec
// Original: _ZNK41CTaskAllocatorKillThreatsBasicRandomGroup7GetTypeEv
// Demangled: CTaskAllocatorKillThreatsBasicRandomGroup::GetType(void)
int __fastcall CTaskAllocatorKillThreatsBasicRandomGroup::GetType(CTaskAllocatorKillThreatsBasicRandomGroup *this)
{
  return 10;
}


// ============================================================
