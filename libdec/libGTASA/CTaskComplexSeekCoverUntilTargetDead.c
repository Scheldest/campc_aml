
// Address: 0x18d528
// Original: j__ZNK36CTaskComplexSeekCoverUntilTargetDead12GetTargetPedEv
// Demangled: CTaskComplexSeekCoverUntilTargetDead::GetTargetPed(void)
// attributes: thunk
int __fastcall CTaskComplexSeekCoverUntilTargetDead::GetTargetPed(CTaskComplexSeekCoverUntilTargetDead *this)
{
  return _ZNK36CTaskComplexSeekCoverUntilTargetDead12GetTargetPedEv(this);
}


// ============================================================

// Address: 0x193bc8
// Original: j__ZN36CTaskComplexSeekCoverUntilTargetDeadD2Ev
// Demangled: CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead()
// attributes: thunk
void __fastcall CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead(
        CTaskComplexSeekCoverUntilTargetDead *this)
{
  _ZN36CTaskComplexSeekCoverUntilTargetDeadD2Ev(this);
}


// ============================================================

// Address: 0x195b20
// Original: j__ZN36CTaskComplexSeekCoverUntilTargetDeadC2Ei
// Demangled: CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(int)
// attributes: thunk
void __fastcall CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(
        CTaskComplexSeekCoverUntilTargetDead *this,
        int a2)
{
  _ZN36CTaskComplexSeekCoverUntilTargetDeadC2Ei(this, a2);
}


// ============================================================

// Address: 0x197b2c
// Original: j__ZNK36CTaskComplexSeekCoverUntilTargetDead11GetCoverPedEP4CPed
// Demangled: CTaskComplexSeekCoverUntilTargetDead::GetCoverPed(CPed *)
// attributes: thunk
int __fastcall CTaskComplexSeekCoverUntilTargetDead::GetCoverPed(CTaskComplexSeekCoverUntilTargetDead *this, CPed *a2)
{
  return _ZNK36CTaskComplexSeekCoverUntilTargetDead11GetCoverPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19c134
// Original: j__ZN36CTaskComplexSeekCoverUntilTargetDeadC2EP4CPed
// Demangled: CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(CPed *)
// attributes: thunk
void __fastcall CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(
        CTaskComplexSeekCoverUntilTargetDead *this,
        CPed *a2)
{
  _ZN36CTaskComplexSeekCoverUntilTargetDeadC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x4e8ce8
// Original: _ZN36CTaskComplexSeekCoverUntilTargetDeadC2Ei
// Demangled: CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(int)
void __fastcall CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(
        CTaskComplexSeekCoverUntilTargetDead *this,
        int a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  v3[4] = 0;
  v3[5] = 0;
  *v3 = &off_669B4C;
}


// ============================================================

// Address: 0x4e8d0c
// Original: _ZN36CTaskComplexSeekCoverUntilTargetDeadC2EP4CPed
// Demangled: CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(CPed *)
void __fastcall CTaskComplexSeekCoverUntilTargetDead::CTaskComplexSeekCoverUntilTargetDead(
        CTaskComplexSeekCoverUntilTargetDead *this,
        CPed *a2)
{
  CTaskComplex::CTaskComplex(this);
  *((_DWORD *)this + 3) = -1;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_669B4C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x4e8d48
// Original: _ZN36CTaskComplexSeekCoverUntilTargetDeadD2Ev
// Demangled: CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead()
void __fastcall CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead(
        CTaskComplexSeekCoverUntilTargetDead *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669B4C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4e8d84
// Original: _ZN36CTaskComplexSeekCoverUntilTargetDeadD0Ev
// Demangled: CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead()
void __fastcall CTaskComplexSeekCoverUntilTargetDead::~CTaskComplexSeekCoverUntilTargetDead(
        CTaskComplexSeekCoverUntilTargetDead *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_669B4C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 5);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 5);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4e8dc4
// Original: _ZN36CTaskComplexSeekCoverUntilTargetDead17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexSeekCoverUntilTargetDead::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexSeekCoverUntilTargetDead::CreateNextSubTask(
        CTaskComplexSeekCoverUntilTargetDead *this,
        CPed *a2)
{
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) == 203 )
    return 0;
  else
    return (*(int (__fastcall **)(CTaskComplexSeekCoverUntilTargetDead *, CPed *))(*(_DWORD *)this + 44))(this, a2);
}


// ============================================================

// Address: 0x4e8df0
// Original: _ZN36CTaskComplexSeekCoverUntilTargetDead18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexSeekCoverUntilTargetDead::CreateFirstSubTask(CPed *)
CTaskComplexSequence *__fastcall CTaskComplexSeekCoverUntilTargetDead::CreateFirstSubTask(CEntity **this, CPed *a2)
{
  CEntity *v4; // r0
  CEntity **v5; // r8
  CEntity *v6; // r0
  CEntity **v7; // r6
  CEntity *TargetPed; // r0
  bool v9; // zf
  CTaskComplexSequence *v10; // r5
  unsigned int v11; // r1
  unsigned int v12; // r1
  int v13; // r4
  CEntity *v14; // r6
  char v15; // r2
  unsigned int v16; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v17; // r4
  unsigned int v18; // r1
  CTaskSimpleStandStill *v19; // r4

  v5 = this + 4;
  v4 = this[4];
  if ( v4 )
    CEntity::CleanUpOldReference(v4, v5);
  v7 = this + 5;
  v6 = this[5];
  if ( v6 )
    v6 = (CEntity *)CEntity::CleanUpOldReference(v6, this + 5);
  this[5] = (CEntity *)CTaskComplexSeekCoverUntilTargetDead::GetCoverPed(v6, a2);
  TargetPed = (CEntity *)CTaskComplexSeekCoverUntilTargetDead::GetTargetPed((CTaskComplexSeekCoverUntilTargetDead *)this);
  this[4] = TargetPed;
  v9 = TargetPed == 0;
  if ( TargetPed )
    v9 = this[5] == 0;
  v10 = 0;
  if ( !v9 )
  {
    CEntity::RegisterReference(TargetPed, v5);
    CEntity::RegisterReference(*v7, this + 5);
    v10 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v11);
    CTaskComplexSequence::CTaskComplexSequence(v10);
    v13 = CTask::operator new((CTask *)&dword_54, v12);
    v14 = *v7;
    CTaskComplex::CTaskComplex((CTaskComplex *)v13);
    *(_QWORD *)(v13 + 24) = 0x400000003F800000LL;
    *(_QWORD *)(v13 + 32) = 0x4000000000000000LL;
    *(_DWORD *)v13 = &off_6658E0;
    *(_DWORD *)(v13 + 16) = 50000;
    *(_DWORD *)(v13 + 20) = 1000;
    *(_WORD *)(v13 + 48) = 0;
    *(_WORD *)(v13 + 60) = 0;
    *(_DWORD *)(v13 + 40) = 0;
    *(_DWORD *)(v13 + 44) = 0;
    *(_DWORD *)(v13 + 52) = 0;
    *(_DWORD *)(v13 + 56) = 0;
    v15 = *(_BYTE *)(v13 + 80);
    *(_QWORD *)(v13 + 64) = (unsigned int)&off_66D3D0;
    *(_DWORD *)(v13 + 72) = 0;
    *(_DWORD *)(v13 + 76) = 6;
    *(_BYTE *)(v13 + 80) = v15 & 0xF0 | 3;
    *(_DWORD *)(v13 + 12) = v14;
    if ( v14 )
      CEntity::RegisterReference(v14, (CEntity **)(v13 + 12));
    *(_DWORD *)(v13 + 68) = 1069547520;
    *(_DWORD *)(v13 + 72) = 1078530011;
    CTaskComplexSequence::AddTask(v10, (CTask *)v13);
    v17 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v16);
    CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v17, *v5, 0.5, 0.2);
    CTaskComplexSequence::AddTask(v10, v17);
    v19 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v18);
    CTaskSimpleStandStill::CTaskSimpleStandStill(v19, 2000, 0, 0, 8.0);
    CTaskComplexSequence::AddTask(v10, v19);
  }
  return v10;
}


// ============================================================

// Address: 0x4e8f60
// Original: _ZNK36CTaskComplexSeekCoverUntilTargetDead11GetCoverPedEP4CPed
// Demangled: CTaskComplexSeekCoverUntilTargetDead::GetCoverPed(CPed *)
CPed *__fastcall CTaskComplexSeekCoverUntilTargetDead::GetCoverPed(
        CTaskComplexSeekCoverUntilTargetDead *this,
        CPed *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d8
  int PedsGroup; // r0
  CPedGroupMembership *v6; // r6
  CPed *v7; // r8
  int i; // r5
  CPed *Member; // r0
  CPed *v10; // r4
  bool v11; // zf
  int v12; // r0
  int v13; // r1
  _DWORD *v14; // r2
  char *v15; // r0
  float32x2_t v16; // d16
  unsigned __int64 v17; // d1
  bool v18; // nf

  PedsGroup = CPedGroups::GetPedsGroup(a2, a2);
  if ( !PedsGroup )
    return 0;
  v3.n64_u32[0] = 2139095039;
  v6 = (CPedGroupMembership *)(PedsGroup + 8);
  v7 = 0;
  for ( i = 0; i != 8; ++i )
  {
    Member = (CPed *)CPedGroupMembership::GetMember(v6, i);
    v10 = Member;
    v11 = Member == 0;
    if ( Member )
      v11 = Member == a2;
    if ( !v11
      && !CWeapon::IsTypeMelee((CPed *)((char *)Member + 28 * *((char *)Member + 1820) + 1444))
      && CPed::IsAlive(v10) == 1 )
    {
      v12 = *((_DWORD *)v10 + 5);
      v13 = *((_DWORD *)a2 + 5);
      v14 = (_DWORD *)(v12 + 48);
      if ( !v12 )
        v14 = (_DWORD *)((char *)v10 + 4);
      v15 = (char *)(v13 + 48);
      if ( !v13 )
        v15 = (char *)a2 + 4;
      v16.n64_u64[0] = vsub_f32(*(float32x2_t *)(v15 + 4), *(float32x2_t *)(v14 + 1)).n64_u64[0];
      v17 = vmul_f32(v16, v16).n64_u64[0];
      v2.n64_f32[0] = (float)((float)((float)(*(float *)v15 - *(float *)v14) * (float)(*(float *)v15 - *(float *)v14))
                            + *(float *)&v17)
                    + *((float *)&v17 + 1);
      v18 = v2.n64_f32[0] < v3.n64_f32[0];
      v3.n64_u64[0] = vmin_f32(v2, v3).n64_u64[0];
      if ( v18 )
        v7 = v10;
    }
  }
  return v7;
}


// ============================================================

// Address: 0x4e902c
// Original: _ZNK36CTaskComplexSeekCoverUntilTargetDead12GetTargetPedEv
// Demangled: CTaskComplexSeekCoverUntilTargetDead::GetTargetPed(void)
CPed *__fastcall CTaskComplexSeekCoverUntilTargetDead::GetTargetPed(CTaskComplexSeekCoverUntilTargetDead *this)
{
  int v2; // r0
  CPed *Leader; // r0
  CPed *v4; // r5
  CPed *Member; // r0
  CPed *v6; // r0
  CPed *v7; // r0
  CPed *v8; // r0
  CPed *v9; // r0
  CPed *v10; // r0
  CPed *v11; // r0
  CPed *v12; // r0

  v2 = *((_DWORD *)this + 3);
  if ( v2 < 0 )
  {
    v12 = (CPed *)*((_DWORD *)this + 4);
    if ( v12 )
    {
      if ( CPed::IsAlive(v12) == 1 )
        return (CPed *)*((_DWORD *)this + 4);
      else
        return 0;
    }
    return 0;
  }
  Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroupMembership *)&CPedGroups::ms_groups[181 * v2 + 2]);
  v4 = Leader;
  if ( !Leader || !CPed::IsAlive(Leader) )
  {
    Member = (CPed *)CPedGroupMembership::GetMember(
                       (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 2],
                       0);
    v4 = Member;
    if ( !Member || !CPed::IsAlive(Member) )
    {
      v6 = (CPed *)CPedGroupMembership::GetMember(
                     (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 2],
                     1);
      v4 = v6;
      if ( !v6 || !CPed::IsAlive(v6) )
      {
        v7 = (CPed *)CPedGroupMembership::GetMember(
                       (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 2],
                       2);
        v4 = v7;
        if ( !v7 || !CPed::IsAlive(v7) )
        {
          v8 = (CPed *)CPedGroupMembership::GetMember(
                         (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 2],
                         3);
          v4 = v8;
          if ( !v8 || !CPed::IsAlive(v8) )
          {
            v9 = (CPed *)CPedGroupMembership::GetMember(
                           (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 2],
                           4);
            v4 = v9;
            if ( !v9 || !CPed::IsAlive(v9) )
            {
              v10 = (CPed *)CPedGroupMembership::GetMember(
                              (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 2],
                              5);
              v4 = v10;
              if ( !v10 || !CPed::IsAlive(v10) )
              {
                v11 = (CPed *)CPedGroupMembership::GetMember(
                                (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *((_DWORD *)this + 3) + 2],
                                6);
                v4 = v11;
                if ( v11 )
                {
                  if ( !CPed::IsAlive(v11) )
                    return 0;
                  return v4;
                }
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return v4;
}


// ============================================================

// Address: 0x4e91a0
// Original: _ZN36CTaskComplexSeekCoverUntilTargetDead14ControlSubTaskEP4CPed
// Demangled: CTaskComplexSeekCoverUntilTargetDead::ControlSubTask(CPed *)
CTaskSimpleStandStill *__fastcall CTaskComplexSeekCoverUntilTargetDead::ControlSubTask(
        CTaskComplexSeekCoverUntilTargetDead *this,
        CPed *a2)
{
  CPed *v4; // r0
  CEntity **v5; // r9
  CEntity *TargetPed; // r0
  unsigned int v7; // r1
  CPed *v8; // r0
  CEntity **v9; // r10
  char *v10; // r5
  CEntity *v11; // r0
  _BOOL4 v12; // r4
  int v13; // t1
  int v14; // r0
  CTaskSimpleStandStill *v15; // r8
  unsigned int v16; // r1
  int v17; // r5
  CEntity *v18; // r6
  char v19; // r2
  unsigned int v20; // r1
  CTaskComplexTurnToFaceEntityOrCoord *v21; // r5
  unsigned int v22; // r1
  CTaskSimpleStandStill *v23; // r4

  v5 = (CEntity **)((char *)this + 16);
  v4 = (CPed *)*((_DWORD *)this + 4);
  if ( v4 )
  {
    if ( CPed::IsAlive(v4) )
      goto LABEL_8;
    if ( *v5 )
      CEntity::CleanUpOldReference(*v5, v5);
  }
  TargetPed = (CEntity *)CTaskComplexSeekCoverUntilTargetDead::GetTargetPed(this);
  *((_DWORD *)this + 4) = TargetPed;
  if ( !TargetPed || (CEntity::RegisterReference(TargetPed, v5), !*v5) )
  {
    if ( (*(int (__fastcall **)(_DWORD, CPed *, int, _DWORD))(**((_DWORD **)this + 2) + 28))(
           *((_DWORD *)this + 2),
           a2,
           1,
           0) == 1 )
    {
LABEL_18:
      v15 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v7);
      CTaskSimpleStandStill::CTaskSimpleStandStill(v15, -1, 0, 0, 8.0);
      return v15;
    }
  }
LABEL_8:
  v9 = (CEntity **)((char *)this + 20);
  v8 = (CPed *)*((_DWORD *)this + 5);
  if ( v8 )
  {
    if ( CPed::IsAlive(v8) == 1 )
    {
      v10 = (char *)this + 8;
      return *(CTaskSimpleStandStill **)v10;
    }
    if ( *v9 )
      CEntity::CleanUpOldReference(*v9, (CEntity **)this + 5);
  }
  v11 = (CEntity *)CTaskComplexSeekCoverUntilTargetDead::GetTargetPed(this);
  *((_DWORD *)this + 5) = v11;
  if ( v11 )
  {
    CEntity::RegisterReference(v11, (CEntity **)this + 5);
    v12 = *v9 == 0;
  }
  else
  {
    v12 = 1;
  }
  v13 = *((_DWORD *)this + 2);
  v10 = (char *)this + 8;
  v14 = (*(int (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v13 + 28))(v13, a2, 1, 0);
  if ( v12 )
  {
    if ( v14 != 1 )
      return *(CTaskSimpleStandStill **)v10;
    goto LABEL_18;
  }
  if ( v14 != 1 )
    return *(CTaskSimpleStandStill **)v10;
  v15 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_40, v7);
  CTaskComplexSequence::CTaskComplexSequence(v15);
  v17 = CTask::operator new((CTask *)&dword_54, v16);
  v18 = *v9;
  CTaskComplex::CTaskComplex((CTaskComplex *)v17);
  *(_QWORD *)(v17 + 24) = 0x400000003F800000LL;
  *(_QWORD *)(v17 + 32) = 0x4000000000000000LL;
  *(_DWORD *)v17 = &off_6658E0;
  *(_DWORD *)(v17 + 16) = 50000;
  *(_DWORD *)(v17 + 20) = 1000;
  *(_WORD *)(v17 + 48) = 0;
  *(_WORD *)(v17 + 60) = 0;
  *(_DWORD *)(v17 + 40) = 0;
  *(_DWORD *)(v17 + 44) = 0;
  *(_DWORD *)(v17 + 52) = 0;
  *(_DWORD *)(v17 + 56) = 0;
  v19 = *(_BYTE *)(v17 + 80);
  *(_QWORD *)(v17 + 64) = (unsigned int)&off_66D3D0;
  *(_DWORD *)(v17 + 72) = 0;
  *(_DWORD *)(v17 + 76) = 6;
  *(_BYTE *)(v17 + 80) = v19 & 0xF0 | 3;
  *(_DWORD *)(v17 + 12) = v18;
  if ( v18 )
    CEntity::RegisterReference(v18, (CEntity **)(v17 + 12));
  *(_DWORD *)(v17 + 68) = 1069547520;
  *(_DWORD *)(v17 + 72) = 1078530011;
  CTaskComplexSequence::AddTask(v15, (CTask *)v17);
  v21 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, v20);
  CTaskComplexTurnToFaceEntityOrCoord::CTaskComplexTurnToFaceEntityOrCoord(v21, *v5, 0.5, 0.2);
  CTaskComplexSequence::AddTask(v15, v21);
  v23 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v22);
  CTaskSimpleStandStill::CTaskSimpleStandStill(v23, 2000, 0, 0, 8.0);
  CTaskComplexSequence::AddTask(v15, v23);
  return v15;
}


// ============================================================

// Address: 0x4ea708
// Original: _ZNK36CTaskComplexSeekCoverUntilTargetDead5CloneEv
// Demangled: CTaskComplexSeekCoverUntilTargetDead::Clone(void)
CTaskComplex *__fastcall CTaskComplexSeekCoverUntilTargetDead::Clone(
        CTaskComplexSeekCoverUntilTargetDead *this,
        unsigned int a2)
{
  int v3; // r6
  CTaskComplex *v4; // r0
  CTaskComplex *v5; // r4
  int v6; // r5
  CEntity *v7; // r5

  v3 = *((_DWORD *)this + 3);
  v4 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v5 = v4;
  if ( v3 < 0 )
  {
    v7 = (CEntity *)*((_DWORD *)this + 4);
    CTaskComplex::CTaskComplex(v4);
    *((_DWORD *)v5 + 3) = -1;
    *((_DWORD *)v5 + 5) = 0;
    *(_DWORD *)v5 = &off_669B4C;
    *((_DWORD *)v5 + 4) = v7;
    if ( v7 )
      CEntity::RegisterReference(v7, (CEntity **)v5 + 4);
  }
  else
  {
    v6 = *((_DWORD *)this + 3);
    CTaskComplex::CTaskComplex(v4);
    *((_DWORD *)v5 + 3) = v6;
    *((_DWORD *)v5 + 4) = 0;
    *((_DWORD *)v5 + 5) = 0;
    *(_DWORD *)v5 = &off_669B4C;
  }
  return v5;
}


// ============================================================

// Address: 0x4ea77c
// Original: _ZNK36CTaskComplexSeekCoverUntilTargetDead11GetTaskTypeEv
// Demangled: CTaskComplexSeekCoverUntilTargetDead::GetTaskType(void)
int __fastcall CTaskComplexSeekCoverUntilTargetDead::GetTaskType(CTaskComplexSeekCoverUntilTargetDead *this)
{
  return 1034;
}


// ============================================================
