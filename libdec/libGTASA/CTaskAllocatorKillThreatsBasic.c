
// Address: 0x18e8b0
// Original: j__ZN30CTaskAllocatorKillThreatsBasicC2EP4CPed
// Demangled: CTaskAllocatorKillThreatsBasic::CTaskAllocatorKillThreatsBasic(CPed *)
// attributes: thunk
void __fastcall CTaskAllocatorKillThreatsBasic::CTaskAllocatorKillThreatsBasic(
        CTaskAllocatorKillThreatsBasic *this,
        CPed *a2)
{
  _ZN30CTaskAllocatorKillThreatsBasicC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x197b60
// Original: j__ZN30CTaskAllocatorKillThreatsBasic18ComputeClosestPedsER9CPedGroupS1_PP4CPed
// Demangled: CTaskAllocatorKillThreatsBasic::ComputeClosestPeds(CPedGroup &,CPedGroup &,CPed **)
// attributes: thunk
int __fastcall CTaskAllocatorKillThreatsBasic::ComputeClosestPeds(
        CTaskAllocatorKillThreatsBasic *this,
        CPedGroup *a2,
        CPedGroup *a3,
        CPed **a4)
{
  return _ZN30CTaskAllocatorKillThreatsBasic18ComputeClosestPedsER9CPedGroupS1_PP4CPed(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19be5c
// Original: j__ZN30CTaskAllocatorKillThreatsBasicC2EP4CPed_0
// Demangled: CTaskAllocatorKillThreatsBasic::CTaskAllocatorKillThreatsBasic(CPed *)
// attributes: thunk
void __fastcall CTaskAllocatorKillThreatsBasic::CTaskAllocatorKillThreatsBasic(
        CTaskAllocatorKillThreatsBasic *this,
        CPed *a2)
{
  _ZN30CTaskAllocatorKillThreatsBasicC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x54a410
// Original: _ZN30CTaskAllocatorKillThreatsBasicC2EP4CPed
// Demangled: CTaskAllocatorKillThreatsBasic::CTaskAllocatorKillThreatsBasic(CPed *)
void __fastcall CTaskAllocatorKillThreatsBasic::CTaskAllocatorKillThreatsBasic(
        CTaskAllocatorKillThreatsBasic *this,
        CPed *a2)
{
  *((_WORD *)this + 8) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_66D5B0;
  *((_DWORD *)this + 1) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 1);
}


// ============================================================

// Address: 0x54a444
// Original: _ZN30CTaskAllocatorKillThreatsBasicD0Ev
// Demangled: CTaskAllocatorKillThreatsBasic::~CTaskAllocatorKillThreatsBasic()
void __fastcall CTaskAllocatorKillThreatsBasic::~CTaskAllocatorKillThreatsBasic(CTaskAllocatorKillThreatsBasic *this)
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

// Address: 0x54a48c
// Original: _ZN30CTaskAllocatorKillThreatsBasic12ProcessGroupEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorKillThreatsBasic::ProcessGroup(CPedGroupIntelligence *)
CTaskAllocatorKillThreatsBasic *__fastcall CTaskAllocatorKillThreatsBasic::ProcessGroup(
        CTaskAllocatorKillThreatsBasic *this,
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
    (*(void (__fastcall **)(CTaskAllocatorKillThreatsBasic *, CPedGroupIntelligence *))(v5 + 8))(this, a2);
  }
  return this;
}


// ============================================================

// Address: 0x54a4f4
// Original: _ZN30CTaskAllocatorKillThreatsBasic13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorKillThreatsBasic::AllocateTasks(CPedGroupIntelligence *)
int __fastcall CTaskAllocatorKillThreatsBasic::AllocateTasks(
        CTaskAllocatorKillThreatsBasic *this,
        CPedGroupIntelligence *a2)
{
  const CPed *v4; // r1
  int result; // r0
  CTaskAllocatorKillThreatsBasic *v6; // r4
  CPedGroupMembership *v7; // r9
  CPedGroups *PedsGroup; // r0
  CPedGroup *v9; // r1
  CPed **v10; // r3
  CPedGroup *v11; // r1
  int i; // r6
  CPed *Member; // r0
  CPed *v14; // r8
  int j; // r4
  CPed *v16; // r0
  CPed *v17; // r6
  unsigned int v18; // r1
  CTaskComplexKillPedOnFoot *v19; // r8
  unsigned int v20; // r1
  CTask *v21; // r5
  unsigned __int16 v22; // r0
  CTaskAllocatorKillThreatsBasic *v23; // [sp+20h] [bp-90h]
  int v24; // [sp+20h] [bp-90h]
  _DWORD v25[16]; // [sp+24h] [bp-8Ch] BYREF
  _DWORD v26[2]; // [sp+64h] [bp-4Ch] BYREF
  _DWORD v27[17]; // [sp+6Ch] [bp-44h] BYREF

  CPedGroupIntelligence::FlushTasks(a2, (CPedGroupIntelligence *)((char *)a2 + 12), 0);
  CPedGroupIntelligence::FlushTasks(a2, (CPedGroupIntelligence *)((char *)a2 + 172), 0);
  v23 = this;
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v6 = *(CTaskAllocatorKillThreatsBasic **)a2;
    v7 = (CPedGroupMembership *)(*(_DWORD *)a2 + 8);
    PedsGroup = (CPedGroups *)CPedGroups::GetPedsGroup((CPedGroups *)result, v4);
    if ( PedsGroup )
    {
      result = CPedGroups::GetGroupId(PedsGroup, v9);
      v24 = result;
      v11 = (CPedGroup *)&CPedGroups::ms_groups[181 * result];
      if ( v11 == v6 )
        return result;
      CTaskAllocatorKillThreatsBasic::ComputeClosestPeds(v6, v11, (CPedGroup *)v25, v10);
      for ( i = 0; i != 8; ++i )
      {
        Member = (CPed *)CPedGroupMembership::GetMember(v7, i);
        v14 = Member;
        if ( Member )
        {
          if ( !CPed::IsPlayer(Member) )
          {
            CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(
              (CTaskComplexKillPedGroupOnFoot *)v27,
              v24,
              (CPed *)v25[i]);
            CTaskSimple::CTaskSimple((CTaskSimple *)v26);
            v26[0] = &off_669000;
            CPedGroupIntelligence::SetEventResponseTask(a2, v14, 1, (const CTask *)v27, 0, (const CTask *)v26, -1);
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
        v16 = (CPed *)CPedGroupMembership::GetMember(v7, j);
        v17 = v16;
        if ( v16 && !CPed::IsPlayer(v16) )
        {
          CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v25);
          v19 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v18);
          CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v19, *((CPed **)v23 + 1), -1, 0, 0, 0, 1);
          CTaskComplexSequence::AddTask((CTaskComplexSequence *)v25, v19);
          v21 = (CTask *)CTask::operator new((CTask *)&dword_34, v20);
          v22 = rand();
          CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
            (int)v21,
            0,
            9,
            1082130432,
            -4.0,
            (int)(float)((float)((float)v22 * 0.000015259) * 1000.0) + 1000,
            422,
            (int)"LookAbout",
            0);
          *(_DWORD *)v21 = &off_6658A8;
          CTaskComplexSequence::AddTask((CTaskComplexSequence *)v25, v21);
          CTaskSimple::CTaskSimple((CTaskSimple *)v27);
          v27[0] = &off_669000;
          CPedGroupIntelligence::SetEventResponseTask(a2, v17, 1, (const CTask *)v25, 0, (const CTask *)v27, -1);
          CTask::~CTask((CTask *)v27);
          CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v25);
        }
      }
    }
    CPedGroupMembership::GetLeader(v7);
    return CInterestingEvents::Add();
  }
  return result;
}


// ============================================================

// Address: 0x54a730
// Original: _ZN30CTaskAllocatorKillThreatsBasic18ComputeClosestPedsER9CPedGroupS1_PP4CPed
// Demangled: CTaskAllocatorKillThreatsBasic::ComputeClosestPeds(CPedGroup &,CPedGroup &,CPed **)
CPed *__fastcall CTaskAllocatorKillThreatsBasic::ComputeClosestPeds(
        CTaskAllocatorKillThreatsBasic *this,
        CPedGroup *a2,
        CPedGroup *a3,
        CPed **a4)
{
  int v4; // r4
  float *v5; // r11
  _QWORD *v6; // r2
  CPed *Member; // r0
  float *v8; // r8
  int v9; // r6
  float *v10; // r10
  CPed *v11; // r0
  CPed *v12; // r5
  int v13; // r0
  int v14; // r1
  float *v15; // r2
  float *v16; // r0
  int i; // r4
  float v18; // s0
  int v19; // r1
  int v20; // r0
  int v21; // r6
  int v22; // r2
  float *v23; // r3
  float v24; // s5
  float v25; // s1
  float v26; // s14
  float v27; // s12
  float v28; // s10
  float v29; // s8
  float v30; // s6
  float v31; // s4
  float v32; // s2
  float v33; // s7
  float v34; // s9
  float v35; // s11
  float v36; // s13
  float v37; // s3
  float v38; // s15
  bool v39; // fnf
  _DWORD *v40; // r2
  _DWORD *v41; // r0
  CPed *Leader; // r0
  CPed *v43; // r8
  CPed *v44; // r0
  CPed *v45; // r0
  CPed *v46; // r0
  CPed *v47; // r0
  CPed *v48; // r0
  CPed *v49; // r0
  CPed *result; // r0
  CPedGroupMembership *v52; // [sp+8h] [bp-130h]
  CPedGroupMembership *v53; // [sp+Ch] [bp-12Ch]
  _QWORD v54[37]; // [sp+10h] [bp-128h] BYREF

  v4 = 0;
  v5 = (float *)v54;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  v6 = (_QWORD *)((char *)a3 + 16);
  *v6 = 0LL;
  v6[1] = 0LL;
  v54[0] = 0x7F7FFFFF7F7FFFFFLL;
  v54[1] = 0x7F7FFFFF7F7FFFFFLL;
  v54[2] = 0x7F7FFFFF7F7FFFFFLL;
  v54[3] = 0x7F7FFFFF7F7FFFFFLL;
  v54[4] = 0x7F7FFFFF7F7FFFFFLL;
  v54[5] = 0x7F7FFFFF7F7FFFFFLL;
  v54[6] = 0x7F7FFFFF7F7FFFFFLL;
  v54[7] = 0x7F7FFFFF7F7FFFFFLL;
  v54[10] = 0x7F7FFFFF7F7FFFFFLL;
  v54[11] = 0x7F7FFFFF7F7FFFFFLL;
  v54[8] = 0x7F7FFFFF7F7FFFFFLL;
  v54[9] = 0x7F7FFFFF7F7FFFFFLL;
  v54[14] = 0x7F7FFFFF7F7FFFFFLL;
  v54[15] = 0x7F7FFFFF7F7FFFFFLL;
  v54[12] = 0x7F7FFFFF7F7FFFFFLL;
  v54[13] = 0x7F7FFFFF7F7FFFFFLL;
  v54[18] = 0x7F7FFFFF7F7FFFFFLL;
  v54[19] = 0x7F7FFFFF7F7FFFFFLL;
  v54[16] = 0x7F7FFFFF7F7FFFFFLL;
  v54[17] = 0x7F7FFFFF7F7FFFFFLL;
  v54[22] = 0x7F7FFFFF7F7FFFFFLL;
  v54[23] = 0x7F7FFFFF7F7FFFFFLL;
  v54[20] = 0x7F7FFFFF7F7FFFFFLL;
  v54[21] = 0x7F7FFFFF7F7FFFFFLL;
  v54[26] = 0x7F7FFFFF7F7FFFFFLL;
  v54[27] = 0x7F7FFFFF7F7FFFFFLL;
  v54[24] = 0x7F7FFFFF7F7FFFFFLL;
  v54[25] = 0x7F7FFFFF7F7FFFFFLL;
  v54[30] = 0x7F7FFFFF7F7FFFFFLL;
  v54[31] = 0x7F7FFFFF7F7FFFFFLL;
  v54[28] = 0x7F7FFFFF7F7FFFFFLL;
  v54[29] = 0x7F7FFFFF7F7FFFFFLL;
  v53 = (CPedGroup *)((char *)a2 + 8);
  v52 = (CTaskAllocatorKillThreatsBasic *)((char *)this + 8);
  do
  {
    Member = (CPed *)CPedGroupMembership::GetMember(v52, v4);
    v8 = (float *)Member;
    if ( Member && CPed::IsAlive(Member) == 1 && !CPed::IsPlayer((CPed *)v8) )
    {
      v9 = 0;
      v10 = v5;
      do
      {
        v11 = (CPed *)CPedGroupMembership::GetMember(v53, v9);
        v12 = v11;
        if ( v11 && CPed::IsAlive(v11) == 1 )
        {
          v13 = *((_DWORD *)v12 + 5);
          v14 = *((_DWORD *)v8 + 5);
          v15 = (float *)(v13 + 48);
          if ( !v13 )
            v15 = (float *)((char *)v12 + 4);
          v16 = (float *)(v14 + 48);
          if ( !v14 )
            v16 = v8 + 1;
          *v10 = (float)((float)((float)(*v16 - *v15) * (float)(*v16 - *v15))
                       + (float)((float)(v16[1] - v15[1]) * (float)(v16[1] - v15[1])))
               + (float)((float)(v16[2] - v15[2]) * (float)(v16[2] - v15[2]));
        }
        ++v9;
        ++v10;
      }
      while ( v9 != 8 );
    }
    ++v4;
    v5 += 8;
  }
  while ( v4 != 8 );
  for ( i = 0; i != 8; ++i )
  {
    v18 = 3.4028e38;
    v19 = -1;
    v20 = 0;
    v21 = -1;
    v22 = 0;
    do
    {
      v23 = (float *)&v54[v20];
      v24 = v18;
      v20 += 4;
      v25 = *v23;
      v26 = v23[1];
      v27 = v23[2];
      v28 = v23[3];
      v29 = v23[4];
      v30 = v23[5];
      v31 = v23[6];
      v32 = v23[7];
      if ( *v23 < v18 )
        v24 = *v23;
      v33 = v24;
      if ( v26 < v24 )
        v33 = v23[1];
      v34 = v33;
      if ( v27 < v33 )
        v34 = v23[2];
      v35 = v34;
      if ( v28 < v34 )
        v35 = v23[3];
      v36 = v35;
      if ( v29 < v35 )
        v36 = v23[4];
      v37 = v36;
      if ( v30 < v36 )
        v37 = v23[5];
      v38 = v37;
      if ( v25 < v18 )
        v21 = v22;
      if ( v26 < v24 )
        v21 = v22;
      if ( v27 < v33 )
        v21 = v22;
      if ( v31 < v37 )
        v38 = v23[6];
      if ( v28 < v34 )
        v21 = v22;
      if ( v29 < v35 )
        v21 = v22;
      if ( v30 < v36 )
        v21 = v22;
      if ( v31 < v37 )
        v21 = v22;
      v39 = v25 < v18;
      v18 = v38;
      if ( v32 < v38 )
        v21 = v22;
      ++v22;
      if ( v39 )
        v19 = 0;
      if ( v26 < v24 )
        v19 = 1;
      if ( v27 < v33 )
        v19 = 2;
      if ( v28 < v34 )
        v19 = 3;
      if ( v29 < v35 )
        v19 = 4;
      if ( v30 < v36 )
        v19 = 5;
      if ( v32 < v38 )
        v18 = v23[7];
      if ( v31 < v37 )
        v19 = 6;
      if ( v32 < v38 )
        v19 = 7;
    }
    while ( v20 != 32 );
    if ( (v19 | v21) >= 0 )
    {
      v40 = (_DWORD *)v54 + v19;
      LODWORD(v54[4 * v21]) = 2139095039;
      v41 = &v54[4 * v21];
      *v40 = 2139095039;
      v41[1] = 2139095039;
      v40[8] = 2139095039;
      v41[2] = 2139095039;
      v40[16] = 2139095039;
      v41[3] = 2139095039;
      v40[24] = 2139095039;
      v41[4] = 2139095039;
      v40[32] = 2139095039;
      v41[5] = 2139095039;
      v40[40] = 2139095039;
      v41[6] = 2139095039;
      v40[48] = 2139095039;
      v41[7] = 2139095039;
      v40[56] = 2139095039;
      *((_DWORD *)a3 + v21) = CPedGroupMembership::GetMember(v53, v19);
    }
  }
  Leader = (CPed *)CPedGroupMembership::GetLeader(v53);
  v43 = Leader;
  if ( Leader && CPed::IsAlive(Leader) )
    goto LABEL_111;
  v44 = (CPed *)CPedGroupMembership::GetMember(v53, 0);
  v43 = v44;
  if ( v44 )
  {
    if ( CPed::IsAlive(v44) == 1 )
      goto LABEL_111;
  }
  v45 = (CPed *)CPedGroupMembership::GetMember(v53, 1);
  v43 = v45;
  if ( v45 )
  {
    if ( CPed::IsAlive(v45) )
      goto LABEL_111;
  }
  v46 = (CPed *)CPedGroupMembership::GetMember(v53, 2);
  v43 = v46;
  if ( v46 )
  {
    if ( CPed::IsAlive(v46) )
      goto LABEL_111;
  }
  v47 = (CPed *)CPedGroupMembership::GetMember(v53, 3);
  v43 = v47;
  if ( v47 )
  {
    if ( CPed::IsAlive(v47) )
      goto LABEL_111;
  }
  if ( (v48 = (CPed *)CPedGroupMembership::GetMember(v53, 4), (v43 = v48) != 0) && CPed::IsAlive(v48)
    || (v49 = (CPed *)CPedGroupMembership::GetMember(v53, 5), (v43 = v49) != 0) && CPed::IsAlive(v49)
    || (result = (CPed *)CPedGroupMembership::GetMember(v53, 6), (v43 = result) != 0)
    && (result = (CPed *)CPed::IsAlive(result)) != 0 )
  {
LABEL_111:
    if ( CPedGroupMembership::GetMember(v52, 0) && !*(_DWORD *)a3 )
      *(_DWORD *)a3 = v43;
    if ( CPedGroupMembership::GetMember(v52, 1) && !*((_DWORD *)a3 + 1) )
      *((_DWORD *)a3 + 1) = v43;
    if ( CPedGroupMembership::GetMember(v52, 2) && !*((_DWORD *)a3 + 2) )
      *((_DWORD *)a3 + 2) = v43;
    if ( CPedGroupMembership::GetMember(v52, 3) && !*((_DWORD *)a3 + 3) )
      *((_DWORD *)a3 + 3) = v43;
    if ( CPedGroupMembership::GetMember(v52, 4) && !*((_DWORD *)a3 + 4) )
      *((_DWORD *)a3 + 4) = v43;
    if ( CPedGroupMembership::GetMember(v52, 5) && !*((_DWORD *)a3 + 5) )
      *((_DWORD *)a3 + 5) = v43;
    if ( CPedGroupMembership::GetMember(v52, 6) && !*((_DWORD *)a3 + 6) )
      *((_DWORD *)a3 + 6) = v43;
    result = (CPed *)CPedGroupMembership::GetMember(v52, 7);
    if ( result )
    {
      result = (CPed *)*((_DWORD *)a3 + 7);
      if ( !result )
        *((_DWORD *)a3 + 7) = v43;
    }
  }
  return result;
}


// ============================================================

// Address: 0x54b3bc
// Original: _ZN30CTaskAllocatorKillThreatsBasicD2Ev
// Demangled: CTaskAllocatorKillThreatsBasic::~CTaskAllocatorKillThreatsBasic()
void __fastcall CTaskAllocatorKillThreatsBasic::~CTaskAllocatorKillThreatsBasic(CTaskAllocatorKillThreatsBasic *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D5B0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x54b4f8
// Original: _ZNK30CTaskAllocatorKillThreatsBasic7GetTypeEv
// Demangled: CTaskAllocatorKillThreatsBasic::GetType(void)
int __fastcall CTaskAllocatorKillThreatsBasic::GetType(CTaskAllocatorKillThreatsBasic *this)
{
  return 9;
}


// ============================================================
