
// Address: 0x18ea98
// Original: j__ZN20CTaskAllocatorAttack12ProcessGroupEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorAttack::ProcessGroup(CPedGroupIntelligence *)
// attributes: thunk
int __fastcall CTaskAllocatorAttack::ProcessGroup(CTaskAllocatorAttack *this, CPedGroupIntelligence *a2)
{
  return _ZN20CTaskAllocatorAttack12ProcessGroupEP21CPedGroupIntelligence(this, a2);
}


// ============================================================

// Address: 0x549e20
// Original: _ZN20CTaskAllocatorAttackC2EP4CPediS1_
// Demangled: CTaskAllocatorAttack::CTaskAllocatorAttack(CPed *,int,CPed *)
void __fastcall CTaskAllocatorAttack::CTaskAllocatorAttack(CTaskAllocatorAttack *this, CPed *a2, int a3, CPed *a4)
{
  CPed **v5; // r5

  *((_DWORD *)this + 2) = a3;
  *((_WORD *)this + 12) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *(_DWORD *)this = &off_66D568;
  *((_DWORD *)this + 3) = a4;
  v5 = (CPed **)((char *)this + 12);
  *((_DWORD *)this + 1) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 1);
    a4 = *v5;
  }
  if ( a4 )
    CEntity::RegisterReference(a4, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x549e6c
// Original: _ZN20CTaskAllocatorAttackD0Ev
// Demangled: CTaskAllocatorAttack::~CTaskAllocatorAttack()
void __fastcall CTaskAllocatorAttack::~CTaskAllocatorAttack(CTaskAllocatorAttack *this)
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

// Address: 0x549ec4
// Original: _ZN20CTaskAllocatorAttack13TargetIsArmedEv
// Demangled: CTaskAllocatorAttack::TargetIsArmed(void)
int __fastcall CTaskAllocatorAttack::TargetIsArmed(CTaskAllocatorAttack *this)
{
  int v1; // r1
  CPedGroupMembership *v2; // r4
  int Member; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  v1 = *((_DWORD *)this + 2);
  if ( v1 == -1 )
    return CWeapon::IsTypeMelee((CWeapon *)(*((_DWORD *)this + 1) + 28 * *(char *)(*((_DWORD *)this + 1) + 1820) + 1444)) ^ 1;
  v2 = (CPedGroupMembership *)&CPedGroups::ms_groups[181 * v1 + 2];
  if ( CPedGroupMembership::GetMember(v2, 0) )
  {
    Member = CPedGroupMembership::GetMember(v2, 0);
    if ( CWeapon::IsTypeMelee((CWeapon *)(Member + 28 * *(char *)(Member + 1820) + 1444)) != 1 )
      return 1;
  }
  if ( CPedGroupMembership::GetMember(v2, 1) )
  {
    v4 = CPedGroupMembership::GetMember(v2, 1);
    if ( CWeapon::IsTypeMelee((CWeapon *)(v4 + 28 * *(char *)(v4 + 1820) + 1444)) != 1 )
      return 1;
  }
  if ( CPedGroupMembership::GetMember(v2, 2) )
  {
    v5 = CPedGroupMembership::GetMember(v2, 2);
    if ( CWeapon::IsTypeMelee((CWeapon *)(v5 + 28 * *(char *)(v5 + 1820) + 1444)) != 1 )
      return 1;
  }
  if ( CPedGroupMembership::GetMember(v2, 3) )
  {
    v6 = CPedGroupMembership::GetMember(v2, 3);
    if ( CWeapon::IsTypeMelee((CWeapon *)(v6 + 28 * *(char *)(v6 + 1820) + 1444)) != 1 )
      return 1;
  }
  if ( CPedGroupMembership::GetMember(v2, 4) )
  {
    v7 = CPedGroupMembership::GetMember(v2, 4);
    if ( CWeapon::IsTypeMelee((CWeapon *)(v7 + 28 * *(char *)(v7 + 1820) + 1444)) != 1 )
      return 1;
  }
  if ( CPedGroupMembership::GetMember(v2, 5) )
  {
    v8 = CPedGroupMembership::GetMember(v2, 5);
    if ( CWeapon::IsTypeMelee((CWeapon *)(v8 + 28 * *(char *)(v8 + 1820) + 1444)) != 1 )
      return 1;
  }
  if ( CPedGroupMembership::GetMember(v2, 6) )
  {
    v9 = CPedGroupMembership::GetMember(v2, 6);
    if ( CWeapon::IsTypeMelee((CWeapon *)(v9 + 28 * *(char *)(v9 + 1820) + 1444)) != 1 )
      return 1;
  }
  if ( CPedGroupMembership::GetMember(v2, 7)
    && (v10 = CPedGroupMembership::GetMember(v2, 7),
        CWeapon::IsTypeMelee((CWeapon *)(v10 + 28 * *(char *)(v10 + 1820) + 1444)) != 1) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}


// ============================================================

// Address: 0x54a064
// Original: _ZN20CTaskAllocatorAttack12ProcessGroupEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorAttack::ProcessGroup(CPedGroupIntelligence *)
CTaskAllocatorAttack *__fastcall CTaskAllocatorAttack::ProcessGroup(
        CTaskAllocatorAttack *this,
        CPedGroupIntelligence *a2)
{
  unsigned int v4; // r0
  unsigned int v5; // r1
  __int64 v6; // kr00_8
  _UNKNOWN **v8; // [sp+4h] [bp-1Ch] BYREF
  _QWORD v9[3]; // [sp+8h] [bp-18h] BYREF

  if ( *((_BYTE *)this + 24) )
  {
    if ( *((_BYTE *)this + 25) )
    {
      v4 = CTimer::m_snTimeInMilliseconds;
      *((_BYTE *)this + 25) = 0;
      *((_DWORD *)this + 4) = v4;
      v5 = v4;
    }
    else
    {
      v5 = *((_DWORD *)this + 4);
      v4 = CTimer::m_snTimeInMilliseconds;
    }
    if ( v5 + *((_DWORD *)this + 5) > v4 )
      return this;
  }
  else
  {
    v4 = CTimer::m_snTimeInMilliseconds;
  }
  *((_DWORD *)this + 4) = v4;
  *((_DWORD *)this + 5) = 3000;
  *((_BYTE *)this + 24) = 1;
  v6 = *(_QWORD *)((char *)this + 4);
  v9[0] = v6;
  v8 = &off_66D544;
  if ( (_DWORD)v6 )
    CEntity::RegisterReference((CEntity *)v6, (CEntity **)v9);
  CTaskAllocatorKillOnFoot::AllocateTasks((CTaskAllocatorKillOnFoot *)&v8, a2);
  v8 = &off_66D544;
  if ( LODWORD(v9[0]) )
    CEntity::CleanUpOldReference((CEntity *)v9[0], (CEntity **)v9);
  return this;
}


// ============================================================

// Address: 0x54a114
// Original: _ZN20CTaskAllocatorAttack13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorAttack::AllocateTasks(CPedGroupIntelligence *)
int __fastcall CTaskAllocatorAttack::AllocateTasks(CTaskAllocatorAttack *this, CPedGroupIntelligence *a2)
{
  int v4; // r0
  __int64 v5; // r0
  int result; // r0
  _UNKNOWN **v7; // [sp+4h] [bp-14h] BYREF
  _QWORD v8[2]; // [sp+8h] [bp-10h] BYREF

  v4 = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 24) = 1;
  *((_DWORD *)this + 4) = v4;
  *((_DWORD *)this + 5) = 3000;
  v5 = *(_QWORD *)((char *)this + 4);
  v8[0] = v5;
  v7 = &off_66D544;
  if ( (_DWORD)v5 )
    CEntity::RegisterReference((CEntity *)v5, (CEntity **)v8);
  CTaskAllocatorKillOnFoot::AllocateTasks((CTaskAllocatorKillOnFoot *)&v7, a2);
  result = v8[0];
  v7 = &off_66D544;
  if ( LODWORD(v8[0]) )
    return CEntity::CleanUpOldReference((CEntity *)v8[0], (CEntity **)v8);
  return result;
}


// ============================================================

// Address: 0x54b388
// Original: _ZN20CTaskAllocatorAttackD2Ev
// Demangled: CTaskAllocatorAttack::~CTaskAllocatorAttack()
void __fastcall CTaskAllocatorAttack::~CTaskAllocatorAttack(CTaskAllocatorAttack *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 4);
  v2 = (CEntity *)*((_DWORD *)this + 1);
  *(_DWORD *)this = &off_66D568;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x54b4f4
// Original: _ZNK20CTaskAllocatorAttack7GetTypeEv
// Demangled: CTaskAllocatorAttack::GetType(void)
int __fastcall CTaskAllocatorAttack::GetType(CTaskAllocatorAttack *this)
{
  return 1;
}


// ============================================================
