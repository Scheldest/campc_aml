
// Address: 0x19f5a8
// Original: j__ZN32CTaskAllocatorKillThreatsDrivebyC2EP4CPed
// Demangled: CTaskAllocatorKillThreatsDriveby::CTaskAllocatorKillThreatsDriveby(CPed *)
// attributes: thunk
void __fastcall CTaskAllocatorKillThreatsDriveby::CTaskAllocatorKillThreatsDriveby(
        CTaskAllocatorKillThreatsDriveby *this,
        CPed *a2)
{
  _ZN32CTaskAllocatorKillThreatsDrivebyC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x54af40
// Original: _ZN32CTaskAllocatorKillThreatsDrivebyC2EP4CPed
// Demangled: CTaskAllocatorKillThreatsDriveby::CTaskAllocatorKillThreatsDriveby(CPed *)
void __fastcall CTaskAllocatorKillThreatsDriveby::CTaskAllocatorKillThreatsDriveby(
        CTaskAllocatorKillThreatsDriveby *this,
        CPed *a2)
{
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_66D5D4;
  *((_DWORD *)this + 1) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 1);
}


// ============================================================

// Address: 0x54af74
// Original: _ZN32CTaskAllocatorKillThreatsDrivebyD2Ev
// Demangled: CTaskAllocatorKillThreatsDriveby::~CTaskAllocatorKillThreatsDriveby()
void __fastcall CTaskAllocatorKillThreatsDriveby::~CTaskAllocatorKillThreatsDriveby(
        CTaskAllocatorKillThreatsDriveby *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D5D4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x54af9c
// Original: _ZN32CTaskAllocatorKillThreatsDrivebyD0Ev
// Demangled: CTaskAllocatorKillThreatsDriveby::~CTaskAllocatorKillThreatsDriveby()
void __fastcall CTaskAllocatorKillThreatsDriveby::~CTaskAllocatorKillThreatsDriveby(
        CTaskAllocatorKillThreatsDriveby *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D5D4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pTaskAllocatorPool;
  v5 = ((int)this - *(_DWORD *)CPools::ms_pTaskAllocatorPool) >> 5;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pTaskAllocatorPool + 4) + v5) |= 0x80u;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x54afe4
// Original: _ZN32CTaskAllocatorKillThreatsDriveby12ProcessGroupEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorKillThreatsDriveby::ProcessGroup(CPedGroupIntelligence *)
CTaskAllocatorKillThreatsDriveby *__fastcall CTaskAllocatorKillThreatsDriveby::ProcessGroup(
        CTaskAllocatorKillThreatsDriveby *this,
        CPedGroupIntelligence *a2)
{
  unsigned int v3; // r0
  unsigned int v4; // r2
  int v5; // r3

  if ( !*((_BYTE *)this + 16) )
  {
    *((_DWORD *)this + 2) = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 3) = 0;
    *((_BYTE *)this + 16) = 1;
  }
  if ( *((_BYTE *)this + 17) )
  {
    v3 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 17) = 0;
    *((_DWORD *)this + 2) = v3;
    v4 = v3;
  }
  else
  {
    v4 = *((_DWORD *)this + 2);
    v3 = CTimer::m_snTimeInMilliseconds;
  }
  if ( v4 + *((_DWORD *)this + 3) <= v3 )
  {
    v5 = *(_DWORD *)this;
    *((_DWORD *)this + 2) = v3;
    *((_DWORD *)this + 3) = 5000;
    *((_BYTE *)this + 16) = 1;
    (*(void (__fastcall **)(CTaskAllocatorKillThreatsDriveby *, CPedGroupIntelligence *))(v5 + 8))(this, a2);
  }
  return this;
}


// ============================================================

// Address: 0x54b04c
// Original: _ZN32CTaskAllocatorKillThreatsDriveby13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorKillThreatsDriveby::AllocateTasks(CPedGroupIntelligence *)
int __fastcall CTaskAllocatorKillThreatsDriveby::AllocateTasks(
        CTaskAllocatorKillThreatsDriveby *this,
        CPedGroupIntelligence *a2)
{
  int result; // r0
  CTaskAllocatorKillThreatsBasic *v5; // r6
  CPedGroupMembership *v6; // r5
  int TaskByType; // r0
  CPed **v8; // r3
  int v9; // r2
  CPedGroup *v10; // r1
  int i; // r11
  CPed *Member; // r0
  CPed *v13; // r8
  int j; // r6
  CPed *v15; // r0
  CPed *v16; // r10
  unsigned int v17; // r1
  CTaskComplexKillPedOnFoot *v18; // r9
  unsigned int v19; // r1
  CTask *v20; // r4
  unsigned __int16 v21; // r0
  int v22; // [sp+1Ch] [bp-A4h]
  CPedGroupIntelligence *v23; // [sp+20h] [bp-A0h]
  CPedGroupIntelligence *v24; // [sp+20h] [bp-A0h]
  _DWORD v25[2]; // [sp+24h] [bp-9Ch] BYREF
  _BYTE v26[68]; // [sp+2Ch] [bp-94h] BYREF
  _DWORD v27[20]; // [sp+70h] [bp-50h] BYREF

  CPedGroupIntelligence::FlushTasks(a2, (CPedGroupIntelligence *)((char *)a2 + 12), 0);
  CPedGroupIntelligence::FlushTasks(a2, (CPedGroupIntelligence *)((char *)a2 + 172), 0);
  v23 = this;
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v5 = *(CTaskAllocatorKillThreatsBasic **)a2;
    v6 = (CPedGroupMembership *)(*(_DWORD *)a2 + 8);
    TaskByType = CTaskManager::FindTaskByType((CTaskManager *)(*(_DWORD *)(result + 1088) + 4), 3, 243);
    if ( TaskByType )
    {
      v9 = *(_DWORD *)(TaskByType + 12);
      result = 724;
      v22 = v9;
      v10 = (CPedGroup *)&CPedGroups::ms_groups[181 * v9];
      if ( v10 == v5 )
        return result;
      v24 = a2;
      CTaskAllocatorKillThreatsBasic::ComputeClosestPeds(v5, v10, (CPedGroup *)v27, v8);
      for ( i = 0; i != 8; ++i )
      {
        Member = (CPed *)CPedGroupMembership::GetMember(v6, i);
        v13 = Member;
        if ( Member && !CPed::IsPlayer(Member) )
        {
          if ( *((unsigned __int8 *)v13 + 1157) << 31 )
          {
            if ( *(CPed **)(*((_DWORD *)v13 + 356) + 1124) != v13 )
            {
              CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(
                (CTaskSimpleGangDriveBy *)v26,
                (CEntity *)v27[i],
                0,
                60.0,
                90,
                8,
                0);
              CTaskSimple::CTaskSimple((CTaskSimple *)v25);
              v25[0] = &off_669000;
              CPedGroupIntelligence::SetEventResponseTask(v24, v13, 1, (const CTask *)v26, 0, (const CTask *)v25, -1);
              CTask::~CTask((CTask *)v25);
              CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy((CTaskSimpleGangDriveBy *)v26);
            }
          }
          else
          {
            CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(
              (CTaskComplexKillPedGroupOnFoot *)v26,
              v22,
              (CPed *)v27[i]);
            CTaskSimple::CTaskSimple((CTaskSimple *)v25);
            v25[0] = &off_669000;
            CPedGroupIntelligence::SetEventResponseTask(v24, v13, 1, (const CTask *)v26, 0, (const CTask *)v25, -1);
            CTask::~CTask((CTask *)v25);
            CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot((CTaskComplexKillPedGroupOnFoot *)v26);
          }
        }
      }
      CPedGroupMembership::GetLeader(v6);
    }
    else
    {
      for ( j = 0; j != 8; ++j )
      {
        v15 = (CPed *)CPedGroupMembership::GetMember(v6, j);
        v16 = v15;
        if ( v15 && !CPed::IsPlayer(v15) )
        {
          if ( *((unsigned __int8 *)v16 + 1157) << 31 )
          {
            if ( *(CPed **)(*((_DWORD *)v16 + 356) + 1124) != v16 )
            {
              CTaskSimpleGangDriveBy::CTaskSimpleGangDriveBy(
                (CTaskSimpleGangDriveBy *)v26,
                *((CEntity **)v23 + 1),
                0,
                60.0,
                90,
                (signed __int8)byte_8,
                0);
              CTaskSimple::CTaskSimple((CTaskSimple *)v27);
              v27[0] = &off_669000;
              CPedGroupIntelligence::SetEventResponseTask(a2, v16, 1, (const CTask *)v26, 0, (const CTask *)v27, -1);
              CTask::~CTask((CTask *)v27);
              CTaskSimpleGangDriveBy::~CTaskSimpleGangDriveBy((CTaskSimpleGangDriveBy *)v26);
            }
          }
          else
          {
            CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v26);
            v18 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v17);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v18, *((CPed **)v23 + 1), -1, 0, 0, 0, 1);
            CTaskComplexSequence::AddTask((CTaskComplexSequence *)v26, v18);
            v20 = (CTask *)CTask::operator new((CTask *)&dword_34, v19);
            v21 = rand();
            CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
              (int)v20,
              0,
              9,
              1082130432,
              -4.0,
              (int)(float)((float)((float)v21 * 0.000015259) * 1000.0) + 1000,
              422,
              (int)"LookAbout",
              0);
            *(_DWORD *)v20 = &off_6658A8;
            CTaskComplexSequence::AddTask((CTaskComplexSequence *)v26, v20);
            CTaskSimple::CTaskSimple((CTaskSimple *)v27);
            v27[0] = &off_669000;
            CPedGroupIntelligence::SetEventResponseTask(a2, v16, 1, (const CTask *)v26, 0, (const CTask *)v27, -1);
            CTask::~CTask((CTask *)v27);
            CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v26);
          }
        }
      }
      CPedGroupMembership::GetLeader(v6);
    }
    return CInterestingEvents::Add();
  }
  return result;
}


// ============================================================

// Address: 0x54b4fc
// Original: _ZNK32CTaskAllocatorKillThreatsDriveby7GetTypeEv
// Demangled: CTaskAllocatorKillThreatsDriveby::GetType(void)
int __fastcall CTaskAllocatorKillThreatsDriveby::GetType(CTaskAllocatorKillThreatsDriveby *this)
{
  return 11;
}


// ============================================================
