
// Address: 0x191dd4
// Original: j__ZN8CPedList32RemovePedsThatDontListenToPlayerEv
// Demangled: CPedList::RemovePedsThatDontListenToPlayer(void)
// attributes: thunk
int __fastcall CPedList::RemovePedsThatDontListenToPlayer(CPedList *this)
{
  return _ZN8CPedList32RemovePedsThatDontListenToPlayerEv(this);
}


// ============================================================

// Address: 0x192f68
// Original: j__ZN8CPedList26RemovePedsAttackingPedTypeEi
// Demangled: CPedList::RemovePedsAttackingPedType(int)
// attributes: thunk
int __fastcall CPedList::RemovePedsAttackingPedType(CPedList *this, int a2)
{
  return _ZN8CPedList26RemovePedsAttackingPedTypeEi(this, a2);
}


// ============================================================

// Address: 0x1999f0
// Original: j__ZN8CPedList5EmptyEv
// Demangled: CPedList::Empty(void)
// attributes: thunk
int __fastcall CPedList::Empty(CPedList *this)
{
  return _ZN8CPedList5EmptyEv(this);
}


// ============================================================

// Address: 0x19ad24
// Original: j__ZN8CPedList27BuildListFromGroup_NoLeaderEP19CPedGroupMembership
// Demangled: CPedList::BuildListFromGroup_NoLeader(CPedGroupMembership *)
// attributes: thunk
int __fastcall CPedList::BuildListFromGroup_NoLeader(CPedList *this, CPedGroupMembership *a2)
{
  return _ZN8CPedList27BuildListFromGroup_NoLeaderEP19CPedGroupMembership(this, a2);
}


// ============================================================

// Address: 0x19bd20
// Original: j__ZN8CPedList24BuildListOfPedsOfPedTypeEi
// Demangled: CPedList::BuildListOfPedsOfPedType(int)
// attributes: thunk
int __fastcall CPedList::BuildListOfPedsOfPedType(CPedList *this, int a2)
{
  return _ZN8CPedList24BuildListOfPedsOfPedTypeEi(this, a2);
}


// ============================================================

// Address: 0x1a12a4
// Original: j__ZN8CPedList36BuildListFromGroup_NotInCar_NoLeaderEP19CPedGroupMembership
// Demangled: CPedList::BuildListFromGroup_NotInCar_NoLeader(CPedGroupMembership *)
// attributes: thunk
int __fastcall CPedList::BuildListFromGroup_NotInCar_NoLeader(CPedList *this, CPedGroupMembership *a2)
{
  return _ZN8CPedList36BuildListFromGroup_NotInCar_NoLeaderEP19CPedGroupMembership(this, a2);
}


// ============================================================

// Address: 0x1a1628
// Original: j__ZN8CPedList19ExtractPedsWithGunsERS_
// Demangled: CPedList::ExtractPedsWithGuns(CPedList&)
// attributes: thunk
int __fastcall CPedList::ExtractPedsWithGuns(CPedList *this, CPedList *a2)
{
  return _ZN8CPedList19ExtractPedsWithGunsERS_(this, a2);
}


// ============================================================

// Address: 0x548290
// Original: _ZN8CPedList5EmptyEv
// Demangled: CPedList::Empty(void)
_QWORD *__fastcall CPedList::Empty(CPedList *this)
{
  _QWORD *result; // r0

  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  result = (_QWORD *)((char *)this + 16);
  *result = 0LL;
  result[1] = 0LL;
  return result;
}


// ============================================================

// Address: 0x5482ce
// Original: _ZN8CPedList27BuildListFromGroup_NoLeaderEP19CPedGroupMembership
// Demangled: CPedList::BuildListFromGroup_NoLeader(CPedGroupMembership *)
void __fastcall CPedList::BuildListFromGroup_NoLeader(CPedList *this, CPedGroupMembership *a2)
{
  int v4; // r1

  *(_DWORD *)this = 0;
  if ( CPedGroupMembership::GetMember(a2, 0) )
    *((_DWORD *)this + ++*(_DWORD *)this) = CPedGroupMembership::GetMember(a2, 0);
  if ( CPedGroupMembership::GetMember(a2, 1) )
    *((_DWORD *)this + ++*(_DWORD *)this) = CPedGroupMembership::GetMember(a2, 1);
  if ( CPedGroupMembership::GetMember(a2, 2) )
    *((_DWORD *)this + ++*(_DWORD *)this) = CPedGroupMembership::GetMember(a2, 2);
  if ( CPedGroupMembership::GetMember(a2, 3) )
    *((_DWORD *)this + ++*(_DWORD *)this) = CPedGroupMembership::GetMember(a2, 3);
  if ( CPedGroupMembership::GetMember(a2, 4) )
    *((_DWORD *)this + ++*(_DWORD *)this) = CPedGroupMembership::GetMember(a2, 4);
  if ( CPedGroupMembership::GetMember(a2, 5) )
    *((_DWORD *)this + ++*(_DWORD *)this) = CPedGroupMembership::GetMember(a2, 5);
  if ( CPedGroupMembership::GetMember(a2, 6) )
  {
    *((_DWORD *)this + *(_DWORD *)this + 1) = CPedGroupMembership::GetMember(a2, 6);
    v4 = *(_DWORD *)this + 1;
    *(_DWORD *)this = v4;
  }
  else
  {
    v4 = *(_DWORD *)this;
  }
  if ( v4 < 30 )
    memset((char *)this + 4 * v4 + 4, 0, 4 * (30 - v4));
}


// ============================================================

// Address: 0x5483d6
// Original: _ZN8CPedList36BuildListFromGroup_NotInCar_NoLeaderEP19CPedGroupMembership
// Demangled: CPedList::BuildListFromGroup_NotInCar_NoLeader(CPedGroupMembership *)
void __fastcall CPedList::BuildListFromGroup_NotInCar_NoLeader(CPedList *this, CPedGroupMembership *a2)
{
  int v4; // r6
  int Member; // r0
  int v6; // r0

  v4 = 0;
  *(_DWORD *)this = 0;
  do
  {
    Member = CPedGroupMembership::GetMember(a2, v4);
    if ( Member )
    {
      if ( !CPedIntelligence::IsInACarOrEnteringOne(*(CPedIntelligence **)(Member + 1088)) )
      {
        v6 = CPedGroupMembership::GetMember(a2, v4);
        if ( *(int *)this <= 29 )
          *((_DWORD *)this + ++*(_DWORD *)this) = v6;
      }
    }
    ++v4;
  }
  while ( v4 != 7 );
  if ( *(int *)this <= 29 )
    memset((char *)this + 4 * *(_DWORD *)this + 4, 0, 4 * (30 - *(_DWORD *)this));
}


// ============================================================

// Address: 0x548436
// Original: _ZN8CPedList9AddMemberEP4CPed
// Demangled: CPedList::AddMember(CPed *)
int *__fastcall CPedList::AddMember(int *this, CPed *a2)
{
  if ( *this <= 29 )
    this[++*this] = (int)a2;
  return this;
}


// ============================================================

// Address: 0x54844c
// Original: _ZN8CPedList24BuildListOfPedsOfPedTypeEi
// Demangled: CPedList::BuildListOfPedsOfPedType(int)
void __fastcall CPedList::BuildListOfPedsOfPedType(CPedList *this, int a2)
{
  int v2; // r12
  _DWORD *v3; // lr
  int v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r4

  v2 = 0;
  *(_DWORD *)this = 0;
  v3 = (_DWORD *)CPools::ms_pPedPool;
  v4 = *(_DWORD *)(CPools::ms_pPedPool + 8);
  if ( !v4 )
    goto LABEL_10;
  v2 = 0;
  v5 = 1996 * v4;
  v6 = v4 - 1;
  v7 = v5 - 1996;
  do
  {
    if ( *(char *)(v3[1] + v6) >= 0 )
    {
      v8 = *v3 + v7;
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 1436) == a2 && v2 < 30 )
        {
          *((_DWORD *)this + v2 + 1) = v8;
          v2 = *(_DWORD *)this + 1;
          *(_DWORD *)this = v2;
        }
      }
    }
    --v6;
    v7 -= 1996;
  }
  while ( v6 != -1 );
  if ( v2 <= 29 )
LABEL_10:
    memset((char *)this + 4 * v2 + 4, 0, 4 * (30 - v2));
}


// ============================================================

// Address: 0x5484d4
// Original: _ZN8CPedList32RemovePedsThatDontListenToPlayerEv
// Demangled: CPedList::RemovePedsThatDontListenToPlayer(void)
void __fastcall CPedList::RemovePedsThatDontListenToPlayer(CPedList *this)
{
  int v1; // r1
  char *v2; // r2
  int v3; // r12
  int i; // r2
  int v5; // r3

  v1 = *(_DWORD *)this;
  if ( *(int *)this >= 1 )
  {
    v2 = (char *)this + 4;
    do
    {
      if ( (*(_BYTE *)(*(_DWORD *)v2 + 1164) & 0x20) != 0 )
      {
        *(_DWORD *)v2 = 0;
        --*(_DWORD *)this;
      }
      v2 += 4;
      --v1;
    }
    while ( v1 );
  }
  v3 = 0;
  for ( i = 1; i != 31; ++i )
  {
    v5 = *((_DWORD *)this + i);
    if ( v5 )
      *((_DWORD *)this + ++v3) = v5;
  }
  if ( v3 <= 29 )
    memset((char *)this + 4 * v3 + 4, 0, 4 * (30 - v3));
}


// ============================================================

// Address: 0x548536
// Original: _ZN8CPedList11FillUpHolesEv
// Demangled: CPedList::FillUpHoles(void)
void __fastcall CPedList::FillUpHoles(CPedList *this)
{
  int v1; // r12
  int i; // r2
  int v3; // r3

  v1 = 0;
  for ( i = 1; i != 31; ++i )
  {
    v3 = *((_DWORD *)this + i);
    if ( v3 )
      *((_DWORD *)this + ++v1) = v3;
  }
  if ( v1 <= 29 )
    memset((char *)this + 4 * v1 + 4, 0, 4 * (30 - v1));
}


// ============================================================

// Address: 0x548576
// Original: _ZN8CPedList26RemovePedsAttackingPedTypeEi
// Demangled: CPedList::RemovePedsAttackingPedType(int)
void __fastcall CPedList::RemovePedsAttackingPedType(CPedList *this, int a2)
{
  int v4; // r6
  char *v5; // r5
  int TaskByType; // r0
  bool v7; // zf
  int v8; // r1
  int i; // r0
  int v10; // r2

  v4 = *(_DWORD *)this;
  if ( *(int *)this >= 1 )
  {
    v5 = (char *)this + 4;
    do
    {
      TaskByType = CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(*(_DWORD *)v5 + 1088), 1000);
      v7 = TaskByType == 0;
      if ( TaskByType )
      {
        TaskByType = *(_DWORD *)(TaskByType + 16);
        v7 = TaskByType == 0;
      }
      if ( v7 || *(_DWORD *)(TaskByType + 1436) != a2 )
      {
        *(_DWORD *)v5 = 0;
        --*(_DWORD *)this;
      }
      v5 += 4;
      --v4;
    }
    while ( v4 );
  }
  v8 = 0;
  for ( i = 1; i != 31; ++i )
  {
    v10 = *((_DWORD *)this + i);
    if ( v10 )
      *((_DWORD *)this + ++v8) = v10;
  }
  if ( v8 <= 29 )
    memset((char *)this + 4 * v8 + 4, 0, 4 * (30 - v8));
}


// ============================================================

// Address: 0x5485f2
// Original: _ZN8CPedList19ExtractPedsWithGunsERS_
// Demangled: CPedList::ExtractPedsWithGuns(CPedList&)
void __fastcall CPedList::ExtractPedsWithGuns(CPedList *this, CPedList *a2)
{
  char *v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int i; // r0
  int v9; // r2

  if ( *(int *)a2 > 0 )
  {
    v4 = (char *)a2 + 4;
    v5 = 0;
    do
    {
      if ( CWeapon::IsTypeMelee((CWeapon *)(*(_DWORD *)&v4[4 * v5] + 28 * *(char *)(*(_DWORD *)&v4[4 * v5] + 1820) + 1444)) == 1 )
      {
        v6 = *(_DWORD *)a2;
      }
      else
      {
        if ( *(int *)this <= 29 )
          *((_DWORD *)this + ++*(_DWORD *)this) = *(_DWORD *)&v4[4 * v5];
        *(_DWORD *)&v4[4 * v5] = 0;
        v6 = *(_DWORD *)a2 - 1;
        *(_DWORD *)a2 = v6;
      }
      ++v5;
    }
    while ( v5 < v6 );
  }
  v7 = 0;
  for ( i = 1; i != 31; ++i )
  {
    v9 = *((_DWORD *)a2 + i);
    if ( v9 )
      *((_DWORD *)a2 + ++v7) = v9;
  }
  if ( v7 <= 29 )
    memset((char *)a2 + 4 * v7 + 4, 0, 4 * (30 - v7));
}


// ============================================================
