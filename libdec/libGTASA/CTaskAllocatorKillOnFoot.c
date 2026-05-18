
// Address: 0x19142c
// Original: j__ZN24CTaskAllocatorKillOnFoot13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorKillOnFoot::AllocateTasks(CPedGroupIntelligence *)
// attributes: thunk
int __fastcall CTaskAllocatorKillOnFoot::AllocateTasks(CTaskAllocatorKillOnFoot *this, CPedGroupIntelligence *a2)
{
  return _ZN24CTaskAllocatorKillOnFoot13AllocateTasksEP21CPedGroupIntelligence(this, a2);
}


// ============================================================

// Address: 0x549978
// Original: _ZN24CTaskAllocatorKillOnFootC2EP4CPedi
// Demangled: CTaskAllocatorKillOnFoot::CTaskAllocatorKillOnFoot(CPed *,int)
void __fastcall CTaskAllocatorKillOnFoot::CTaskAllocatorKillOnFoot(CTaskAllocatorKillOnFoot *this, CPed *a2, int a3)
{
  *((_DWORD *)this + 2) = a3;
  *(_DWORD *)this = &off_66D544;
  *((_DWORD *)this + 1) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 1);
}


// ============================================================

// Address: 0x5499a8
// Original: _ZN24CTaskAllocatorKillOnFootD2Ev
// Demangled: CTaskAllocatorKillOnFoot::~CTaskAllocatorKillOnFoot()
void __fastcall CTaskAllocatorKillOnFoot::~CTaskAllocatorKillOnFoot(CTaskAllocatorKillOnFoot *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D544;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x5499d0
// Original: _ZN24CTaskAllocatorKillOnFootD0Ev
// Demangled: CTaskAllocatorKillOnFoot::~CTaskAllocatorKillOnFoot()
void __fastcall CTaskAllocatorKillOnFoot::~CTaskAllocatorKillOnFoot(CTaskAllocatorKillOnFoot *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D544;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pTaskAllocatorPool;
  v5 = ((int)this - *(_DWORD *)CPools::ms_pTaskAllocatorPool) >> 5;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pTaskAllocatorPool + 4) + v5) |= 0x80u;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x549a48
// Original: _ZN24CTaskAllocatorKillOnFoot13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorKillOnFoot::AllocateTasks(CPedGroupIntelligence *)
int __fastcall CTaskAllocatorKillOnFoot::AllocateTasks(CTaskAllocatorKillOnFoot *this, CPedGroupIntelligence *a2)
{
  CPed *Leader; // r0
  int v5; // r0
  CTaskComplexSequence *v6; // r9
  int v7; // r4
  int v8; // r6
  int Task; // r0
  int v10; // r0
  bool v11; // zf
  unsigned int v12; // r1
  bool v13; // zf
  CTaskComplexSequence *v14; // r8
  CTaskComplexLeaveCar *v15; // r9
  CTask *v16; // r1
  CTaskComplexSequence *v17; // r0
  CTaskComplexKillPedGroupOnFoot *v18; // r5
  const CTask *v19; // r8
  CTaskComplexKillPedOnFoot *v20; // r0
  CPed *v21; // r1
  CTask *v22; // r5
  unsigned int v23; // r1
  CTask *v24; // r5
  unsigned __int16 v25; // r0
  CPedGroupIntelligence *v26; // r11
  int v27; // r8
  int v28; // r4
  int v29; // r0
  int v30; // r0
  bool v31; // zf
  unsigned int v32; // r1
  bool v33; // zf
  CTaskComplexLeaveCar *v34; // r5
  CTaskComplexKillPedOnFoot *v35; // r5
  CTaskAllocatorKillOnFoot *v37; // [sp+20h] [bp-2B8h]
  CPedTaskPair *v38; // [sp+24h] [bp-2B4h]
  _DWORD v39[2]; // [sp+28h] [bp-2B0h] BYREF
  _BYTE v40[64]; // [sp+30h] [bp-2A8h] BYREF
  _DWORD v41[31]; // [sp+70h] [bp-268h] BYREF
  _DWORD v42[31]; // [sp+ECh] [bp-1ECh] BYREF
  _BYTE v43[316]; // [sp+168h] [bp-170h] BYREF
  int v44; // [sp+2A4h] [bp-34h]

  CPedList::Empty((CPedList *)v42);
  CPedList::Empty((CPedList *)v41);
  CPointList::Empty((CPointList *)v43);
  CPedList::BuildListFromGroup_NoLeader((CPedList *)v41, (CPedGroupMembership *)(*(_DWORD *)a2 + 8));
  if ( CPedGroupMembership::GetLeader((CPedGroupMembership *)(*(_DWORD *)a2 + 8)) )
  {
    Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)(*(_DWORD *)a2 + 8));
    if ( CPed::IsPlayer(Leader) == 1 )
      CPedList::RemovePedsThatDontListenToPlayer((CPedList *)v41);
  }
  v5 = *((_DWORD *)this + 1);
  v37 = this;
  if ( v5 )
  {
    if ( CWeapon::IsTypeMelee((CWeapon *)(v5 + 28 * *(char *)(v5 + 1820) + 1444)) != 1 )
    {
      CPedList::ExtractPedsWithGuns((CPedList *)v42, (CPedList *)v41);
      CFormation::FindCoverPoints();
      CFormation::DistributeDestinations_CoverPoints();
      if ( v42[0] >= 1 )
      {
        v6 = (CTaskComplexSequence *)v40;
        v7 = 0;
        do
        {
          v8 = v42[v7 + 1];
          Task = CPedGroupIntelligence::GetTask(a2, (CPed *)v8, (CPedGroupIntelligence *)((char *)a2 + 12));
          if ( !Task )
            goto LABEL_14;
          v10 = (*(int (__fastcall **)(int))(*(_DWORD *)Task + 20))(Task);
          if ( (unsigned int)(v10 - 1020) > 9 || ((1 << (v10 + 4)) & 0x35D) == 0 )
          {
            v11 = v10 == 1101;
            if ( v10 != 1101 )
              v11 = v10 == 1502;
            if ( !v11 )
            {
LABEL_14:
              CTaskComplexSequence::CTaskComplexSequence(v6);
              v13 = *(unsigned __int8 *)(v8 + 1157) << 31 == 0;
              if ( *(unsigned __int8 *)(v8 + 1157) << 31 )
                v13 = *(_DWORD *)(v8 + 1424) == 0;
              if ( !v13 )
              {
                v14 = v6;
                v15 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v12);
                CTaskComplexLeaveCar::CTaskComplexLeaveCar(v15, *(CVehicle **)(v8 + 1424), 0, 0, 1, 0);
                v16 = v15;
                v17 = v14;
                v6 = v14;
                this = v37;
                CTaskComplexSequence::AddTask(v17, v16);
              }
              if ( *((_DWORD *)this + 2) == -1 )
              {
                v20 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v12);
                v21 = (CPed *)*((_DWORD *)this + 1);
                v22 = v20;
                v19 = v6;
                CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v20, v21, -1, 0, 0, 0, 2);
                CTaskComplexSequence::AddTask(v6, v22);
                v24 = (CTask *)CTask::operator new((CTask *)&dword_34, v23);
                v25 = rand();
                CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
                  (int)v24,
                  0,
                  9,
                  1082130432,
                  -4.0,
                  (int)(float)((float)((float)v25 * 0.000015259) * 1000.0) + 1000,
                  422,
                  (int)"LookAbout",
                  0);
                *(_DWORD *)v24 = &off_6658A8;
                CTaskComplexSequence::AddTask(v6, v24);
              }
              else
              {
                v18 = (CTaskComplexKillPedGroupOnFoot *)CTask::operator new((CTask *)&dword_14, v12);
                CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(
                  v18,
                  *((_DWORD *)this + 2),
                  *((CPed **)this + 1));
                CTaskComplexSequence::AddTask(v6, v18);
                v19 = v6;
              }
              CTaskSimple::CTaskSimple((CTaskSimple *)v39);
              v39[0] = &off_669000;
              CPedGroupIntelligence::SetEventResponseTask(a2, (CPed *)v8, 1, v19, 0, (const CTask *)v39, -1);
              CTask::~CTask((CTask *)v39);
              CTaskComplexSequence::~CTaskComplexSequence(v19);
              v6 = v19;
              this = v37;
            }
          }
          ++v7;
        }
        while ( v7 < v42[0] );
      }
    }
  }
  if ( v41[0] >= 1 )
  {
    v26 = a2;
    v27 = 0;
    v38 = (CPedGroupIntelligence *)((char *)a2 + 12);
    do
    {
      v28 = v41[v27 + 1];
      v29 = CPedGroupIntelligence::GetTask(a2, (CPed *)v28, v38);
      if ( !v29 )
        goto LABEL_31;
      v30 = (*(int (__fastcall **)(int))(*(_DWORD *)v29 + 20))(v29);
      if ( (unsigned int)(v30 - 1020) > 9 || ((1 << (v30 + 4)) & 0x35D) == 0 )
      {
        v31 = v30 == 1101;
        if ( v30 != 1101 )
          v31 = v30 == 1502;
        if ( !v31 )
        {
LABEL_31:
          CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v40);
          v33 = *(unsigned __int8 *)(v28 + 1157) << 31 == 0;
          if ( *(unsigned __int8 *)(v28 + 1157) << 31 )
            v33 = *(_DWORD *)(v28 + 1424) == 0;
          if ( !v33 )
          {
            v34 = (CTaskComplexLeaveCar *)CTask::operator new((CTask *)&dword_34, v32);
            CTaskComplexLeaveCar::CTaskComplexLeaveCar(v34, *(CVehicle **)(v28 + 1424), 0, 0, 1, 0);
            CTaskComplexSequence::AddTask((CTaskComplexSequence *)v40, v34);
          }
          if ( *((_DWORD *)v37 + 2) == -1 )
          {
            v35 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_38, v32);
            CTaskComplexKillPedOnFoot::CTaskComplexKillPedOnFoot(v35, *((CPed **)v37 + 1), -1, 0, 0, 0, 1);
          }
          else
          {
            v35 = (CTaskComplexKillPedOnFoot *)CTask::operator new((CTask *)&dword_14, v32);
            CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(
              v35,
              *((_DWORD *)v37 + 2),
              *((CPed **)v37 + 1));
          }
          CTaskComplexSequence::AddTask((CTaskComplexSequence *)v40, v35);
          CPedGroupIntelligence::SetTask(v26, (CPed *)v28, (const CTask *)v40, v38, -1, 0);
          CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v40);
          a2 = v26;
        }
      }
      ++v27;
    }
    while ( v27 < v41[0] );
  }
  return _stack_chk_guard - v44;
}


// ============================================================

// Address: 0x54b4f0
// Original: _ZNK24CTaskAllocatorKillOnFoot7GetTypeEv
// Demangled: CTaskAllocatorKillOnFoot::GetType(void)
int __fastcall CTaskAllocatorKillOnFoot::GetType(CTaskAllocatorKillOnFoot *this)
{
  return 4;
}


// ============================================================
