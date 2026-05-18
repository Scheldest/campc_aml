
// Address: 0x1918cc
// Original: j__ZN30CTaskComplexKillPedGroupOnFootC2EiP4CPed
// Demangled: CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(int,CPed *)
// attributes: thunk
void __fastcall CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(
        CTaskComplexKillPedGroupOnFoot *this,
        int a2,
        CPed *a3)
{
  _ZN30CTaskComplexKillPedGroupOnFootC2EiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x198770
// Original: j__ZN30CTaskComplexKillPedGroupOnFootD2Ev
// Demangled: CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot()
// attributes: thunk
void __fastcall CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot(CTaskComplexKillPedGroupOnFoot *this)
{
  _ZN30CTaskComplexKillPedGroupOnFootD2Ev(this);
}


// ============================================================

// Address: 0x19a030
// Original: j__ZNK30CTaskComplexKillPedGroupOnFoot28ComputeNearestLivingGroupPedERK4CPedb
// Demangled: CTaskComplexKillPedGroupOnFoot::ComputeNearestLivingGroupPed(CPed const&,bool)
// attributes: thunk
int __fastcall CTaskComplexKillPedGroupOnFoot::ComputeNearestLivingGroupPed(
        CTaskComplexKillPedGroupOnFoot *this,
        const CPed *a2,
        bool a3)
{
  return _ZNK30CTaskComplexKillPedGroupOnFoot28ComputeNearestLivingGroupPedERK4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x4e823c
// Original: _ZN30CTaskComplexKillPedGroupOnFootC2EiP4CPed
// Demangled: CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(int,CPed *)
void __fastcall CTaskComplexKillPedGroupOnFoot::CTaskComplexKillPedGroupOnFoot(
        CTaskComplexKillPedGroupOnFoot *this,
        int a2,
        CPed *a3)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_669AA0;
  *((_DWORD *)this + 4) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x4e8278
// Original: _ZN30CTaskComplexKillPedGroupOnFootD2Ev
// Demangled: CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot()
void __fastcall CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot(CTaskComplexKillPedGroupOnFoot *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669AA0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e82a4
// Original: _ZN30CTaskComplexKillPedGroupOnFootD0Ev
// Demangled: CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot()
void __fastcall CTaskComplexKillPedGroupOnFoot::~CTaskComplexKillPedGroupOnFoot(CTaskComplexKillPedGroupOnFoot *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669AA0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v4);
}


// ============================================================

// Address: 0x4e82d4
// Original: _ZN30CTaskComplexKillPedGroupOnFoot17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexKillPedGroupOnFoot::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexKillPedGroupOnFoot::CreateNextSubTask(CEntity **this, CPed *a2)
{
  CEntity *v4; // r0
  CEntity **v5; // r5
  int v6; // r0
  CPed *v7; // r2
  bool v8; // zf
  int v9; // r1
  CEntity *v10; // r0

  v5 = this + 4;
  v4 = this[4];
  if ( v4 )
  {
    CEntity::CleanUpOldReference(v4, v5);
    *v5 = 0;
  }
  v6 = (*(int (__fastcall **)(CEntity *))(*(_DWORD *)this[2] + 20))(this[2]);
  v8 = v6 == 200;
  v9 = 1302;
  if ( v6 != 200 )
    v8 = v6 == 422;
  if ( !v8 )
  {
    if ( v6 != 1000 )
      return 0;
    v10 = (CEntity *)CTaskComplexKillPedGroupOnFoot::ComputeNearestLivingGroupPed(
                       (CTaskComplexKillPedGroupOnFoot *)this,
                       a2,
                       0);
    this[4] = v10;
    if ( v10 )
    {
      CEntity::RegisterReference(v10, v5);
      v9 = 1000;
    }
    else
    {
      v9 = 422;
    }
  }
  return CTaskComplexKillPedGroupOnFoot::CreateSubTask((CTaskComplexKillPedGroupOnFoot *)this, v9, v7);
}


// ============================================================

// Address: 0x4e8344
// Original: _ZNK30CTaskComplexKillPedGroupOnFoot13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexKillPedGroupOnFoot::CreateSubTask(int,CPed *)
int __fastcall CTaskComplexKillPedGroupOnFoot::CreateSubTask(CTaskComplexKillPedGroupOnFoot *this, int a2, CPed *a3)
{
  int v4; // r4
  CEntity *v5; // r5
  char v6; // r2
  char v7; // r0
  int v8; // r1
  _DWORD *v9; // r0
  unsigned __int16 v10; // r0

  if ( a2 == 200 )
  {
    v4 = CTask::operator new((CTask *)byte_8, 0xC8u);
    CTaskSimple::CTaskSimple((CTaskSimple *)v4);
    v9 = &`vtable for'CTaskSimpleNone;
LABEL_9:
    *(_DWORD *)v4 = *v9 + 8;
    return v4;
  }
  if ( a2 == 422 )
  {
    v4 = CTask::operator new((CTask *)&dword_34, 0x1A6u);
    v10 = rand();
    CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim(
      v4,
      0,
      9,
      1082130432,
      -4.0,
      (int)(float)((float)((float)v10 * 0.000015259) * 1000.0) + 3000,
      422,
      (int)"LookAbout",
      0);
    v9 = &`vtable for'CTaskSimpleLookAbout;
    goto LABEL_9;
  }
  if ( a2 != 1000 )
    return 0;
  v4 = CTask::operator new((CTask *)&dword_38, 0x3E8u);
  v5 = (CEntity *)*((_DWORD *)this + 4);
  CTaskComplex::CTaskComplex((CTaskComplex *)v4);
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_BYTE *)(v4 + 32) = 1;
  *(_DWORD *)(v4 + 40) = -1;
  *(_WORD *)(v4 + 52) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  v6 = *(_BYTE *)(v4 + 12);
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)v4 = &off_669850;
  v7 = v6 & 0x8B | 4;
  *(_BYTE *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v5;
  if ( v5 )
  {
    CEntity::RegisterReference(v5, (CEntity **)(v4 + 16));
    v7 = *(_BYTE *)(v4 + 12);
  }
  v8 = CTimer::m_snTimeInMilliseconds;
  *(_BYTE *)(v4 + 12) = v7 & 0xF7;
  *(_DWORD *)(v4 + 36) = v8;
  return v4;
}


// ============================================================

// Address: 0x4e845c
// Original: _ZNK30CTaskComplexKillPedGroupOnFoot28ComputeNearestLivingGroupPedERK4CPedb
// Demangled: CTaskComplexKillPedGroupOnFoot::ComputeNearestLivingGroupPed(CPed const&,bool)
int __fastcall CTaskComplexKillPedGroupOnFoot::ComputeNearestLivingGroupPed(
        CTaskComplexKillPedGroupOnFoot *this,
        const CPed *a2,
        int a3)
{
  const CPed *v5; // r1
  CPed *v6; // r10
  int v7; // r9
  CPedGroupMembership *v8; // r5
  int PedsGroup; // r0
  const CPed *Leader; // r0
  bool v11; // zf
  float v12; // s16
  int i; // r4
  CPed *Member; // r0
  CPed *v16; // r6
  bool v17; // zf
  const CPed *v18; // r2
  int v19; // r0
  int v20; // r1
  char *v21; // r2
  char *v22; // r0
  float32x2_t v23; // d16
  unsigned __int64 v24; // d1
  float v25; // s18

  v5 = (const CPed *)*((_DWORD *)this + 3);
  v6 = 0;
  v7 = 0;
  v8 = (CPedGroupMembership *)&CPedGroups::ms_groups[181 * (_DWORD)v5 + 2];
  if ( !a3 )
  {
    PedsGroup = CPedGroups::GetPedsGroup(a2, v5);
    if ( PedsGroup )
    {
      Leader = (const CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)(PedsGroup + 8));
      v11 = Leader == 0;
      v7 = 0;
      if ( Leader )
        v11 = Leader == a2;
      if ( !v11 )
      {
        v7 = *((_DWORD *)Leader + 456);
        if ( !v7 || (*(_BYTE *)(v7 + 58) & 7) != 3 )
          v7 = CTaskComplexKillPedGroupOnFoot::ComputeNearestLivingGroupPed(this, Leader, 1);
      }
    }
    else
    {
      v7 = 0;
    }
  }
  v12 = 3.4028e38;
  for ( i = 0; i != 8; ++i )
  {
    Member = (CPed *)CPedGroupMembership::GetMember(v8, i);
    v16 = Member;
    v17 = Member == 0;
    if ( Member )
      v17 = v7 == (_DWORD)Member;
    if ( !v17
      && CPed::IsAlive(Member) == 1
      && v16 != a2
      && *((float *)v16 + 337) > 0.0
      && !CPedGroups::AreInSameGroup(v16, a2, v18) )
    {
      v19 = *((_DWORD *)a2 + 5);
      v20 = *((_DWORD *)v16 + 5);
      v21 = (char *)(v19 + 48);
      if ( !v19 )
        v21 = (char *)a2 + 4;
      v22 = (char *)(v20 + 48);
      if ( !v20 )
        v22 = (char *)v16 + 4;
      v23.n64_u64[0] = vsub_f32(*(float32x2_t *)(v22 + 4), *(float32x2_t *)(v21 + 4)).n64_u64[0];
      v24 = vmul_f32(v23, v23).n64_u64[0];
      v25 = (float)((float)((float)(*(float *)v22 - *(float *)v21) * (float)(*(float *)v22 - *(float *)v21))
                  + *(float *)&v24)
          + *((float *)&v24 + 1);
      if ( v25 < v12
        && (CPed::IsPlayer(v16) != 1
         || !*(_BYTE *)(**((_DWORD **)v16 + 273) + 24)
         || *((_DWORD *)a2 + 359) == 6
         || *((_BYTE *)a2 + 1096) != 1) )
      {
        v12 = v25;
        v6 = v16;
      }
    }
  }
  if ( v6 )
    return (int)v6;
  return v7;
}


// ============================================================

// Address: 0x4e85bc
// Original: _ZN30CTaskComplexKillPedGroupOnFoot18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexKillPedGroupOnFoot::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexKillPedGroupOnFoot::CreateFirstSubTask(CTaskComplexKillPedGroupOnFoot *this, CPed *a2)
{
  const CPed *v3; // r2
  CEntity **v4; // r5
  int v5; // r0
  CPed *v6; // r2
  int *v7; // r1
  CEntity *v8; // r0

  v4 = (CEntity **)((char *)this + 16);
  v3 = (const CPed *)*((_DWORD *)this + 4);
  if ( v3 )
  {
    v5 = CPedGroups::AreInSameGroup(a2, v3, v3);
    v7 = elf_hash_bucket + 748;
    if ( v5 )
      v7 = &dword_C8;
  }
  else
  {
    v8 = (CEntity *)CTaskComplexKillPedGroupOnFoot::ComputeNearestLivingGroupPed(this, a2, 0);
    *((_DWORD *)this + 4) = v8;
    if ( v8 )
    {
      CEntity::RegisterReference(v8, v4);
      v7 = elf_hash_bucket + 748;
    }
    else
    {
      v7 = &dword_C8;
    }
  }
  return CTaskComplexKillPedGroupOnFoot::CreateSubTask(this, (int)v7, v6);
}


// ============================================================

// Address: 0x4e8602
// Original: _ZN30CTaskComplexKillPedGroupOnFoot14ControlSubTaskEP4CPed
// Demangled: CTaskComplexKillPedGroupOnFoot::ControlSubTask(CPed *)
int __fastcall CTaskComplexKillPedGroupOnFoot::ControlSubTask(CTaskComplexKillPedGroupOnFoot *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4ea620
// Original: _ZNK30CTaskComplexKillPedGroupOnFoot5CloneEv
// Demangled: CTaskComplexKillPedGroupOnFoot::Clone(void)
int __fastcall CTaskComplexKillPedGroupOnFoot::Clone(CTaskComplexKillPedGroupOnFoot *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_14, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)v3 = &off_669AA0;
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x4ea664
// Original: _ZNK30CTaskComplexKillPedGroupOnFoot11GetTaskTypeEv
// Demangled: CTaskComplexKillPedGroupOnFoot::GetTaskType(void)
int __fastcall CTaskComplexKillPedGroupOnFoot::GetTaskType(CTaskComplexKillPedGroupOnFoot *this)
{
  return 1015;
}


// ============================================================
