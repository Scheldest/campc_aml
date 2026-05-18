
// Address: 0x377d1e
// Original: _ZNK32CEventPlayerCommandToGroupAttack15AffectsPedGroupEP9CPedGroup
// Demangled: CEventPlayerCommandToGroupAttack::AffectsPedGroup(CPedGroup *)
bool __fastcall CEventPlayerCommandToGroupAttack::AffectsPedGroup(
        CEventPlayerCommandToGroupAttack *this,
        CPedGroup *a2)
{
  CPedGroupMembership *v3; // r4
  int Member; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0

  if ( CEventPlayerCommandToGroup::AffectsPedGroup(this, a2) != 1 )
    return 0;
  v3 = (CPedGroup *)((char *)a2 + 8);
  Member = CPedGroupMembership::GetMember(v3, 0);
  if ( Member )
  {
    if ( (*(_DWORD *)(Member + 1164) & 0x20) == 0 )
      return 1;
  }
  v5 = CPedGroupMembership::GetMember(v3, 1);
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 1164) & 0x20) == 0 )
      return 1;
  }
  v6 = CPedGroupMembership::GetMember(v3, 2);
  if ( v6 )
  {
    if ( (*(_DWORD *)(v6 + 1164) & 0x20) == 0 )
      return 1;
  }
  v7 = CPedGroupMembership::GetMember(v3, 3);
  if ( v7 )
  {
    if ( (*(_DWORD *)(v7 + 1164) & 0x20) == 0 )
      return 1;
  }
  v8 = CPedGroupMembership::GetMember(v3, 4);
  if ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 1164) & 0x20) == 0 )
      return 1;
  }
  v9 = CPedGroupMembership::GetMember(v3, 5);
  if ( v9 )
  {
    if ( (*(_DWORD *)(v9 + 1164) & 0x20) == 0 )
      return 1;
  }
  v10 = CPedGroupMembership::GetMember(v3, 6);
  return v10 && (*(_DWORD *)(v10 + 1164) & 0x20) == 0;
}


// ============================================================

// Address: 0x379298
// Original: _ZN32CEventPlayerCommandToGroupAttackD0Ev
// Demangled: CEventPlayerCommandToGroupAttack::~CEventPlayerCommandToGroupAttack()
void __fastcall CEventPlayerCommandToGroupAttack::~CEventPlayerCommandToGroupAttack(
        CEventPlayerCommandToGroupAttack *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_666BD8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x3792ec
// Original: _ZNK32CEventPlayerCommandToGroupAttack12GetEventTypeEv
// Demangled: CEventPlayerCommandToGroupAttack::GetEventType(void)
int __fastcall CEventPlayerCommandToGroupAttack::GetEventType(CEventPlayerCommandToGroupAttack *this)
{
  return 71;
}


// ============================================================

// Address: 0x3792f0
// Original: _ZNK32CEventPlayerCommandToGroupAttack16GetEventPriorityEv
// Demangled: CEventPlayerCommandToGroupAttack::GetEventPriority(void)
int __fastcall CEventPlayerCommandToGroupAttack::GetEventPriority(CEventPlayerCommandToGroupAttack *this)
{
  return 44;
}


// ============================================================

// Address: 0x379300
// Original: _ZNK32CEventPlayerCommandToGroupAttack13CloneEditableEv
// Demangled: CEventPlayerCommandToGroupAttack::CloneEditable(void)
int __fastcall CEventPlayerCommandToGroupAttack::CloneEditable(CEventPlayerCommandToGroupAttack *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r0

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_666BD8;
  *(_DWORD *)(v3 + 20) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 20));
  *(_DWORD *)v3 = &off_6671F8;
  return v3;
}


// ============================================================
