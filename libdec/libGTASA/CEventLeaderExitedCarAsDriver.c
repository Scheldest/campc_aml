
// Address: 0x37689a
// Original: _ZNK29CEventLeaderExitedCarAsDriver17TakesPriorityOverERK6CEvent
// Demangled: CEventLeaderExitedCarAsDriver::TakesPriorityOver(CEvent const&)
int __fastcall CEventLeaderExitedCarAsDriver::TakesPriorityOver(CEventLeaderExitedCarAsDriver *this, const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x37689e
// Original: _ZNK29CEventLeaderExitedCarAsDriver15AffectsPedGroupEP9CPedGroup
// Demangled: CEventLeaderExitedCarAsDriver::AffectsPedGroup(CPedGroup *)
int __fastcall CEventLeaderExitedCarAsDriver::AffectsPedGroup(CEventLeaderExitedCarAsDriver *this, CPedGroup *a2)
{
  CPedGroupMembership *v2; // r8
  int v3; // r5
  int Member; // r0
  int v5; // r6
  int v6; // r4
  bool v7; // zf

  v2 = (CPedGroup *)((char *)a2 + 8);
  v3 = -1;
  while ( 1 )
  {
    Member = CPedGroupMembership::GetMember(v2, ++v3);
    v5 = Member;
    if ( Member )
    {
      v6 = *(_DWORD *)(Member + 1424);
      v7 = v6 == 0;
      if ( v6 )
        v7 = *(unsigned __int8 *)(Member + 1157) << 31 == 0;
      if ( !v7 && v6 == *(_DWORD *)(CPedGroupMembership::GetLeader(v2) + 1424)
        || CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v5 + 1088), 700)
        || CPedIntelligence::FindTaskByType(*(CPedIntelligence **)(v5 + 1088), 718) )
      {
        break;
      }
    }
    if ( v3 >= 6 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x378774
// Original: _ZN29CEventLeaderExitedCarAsDriverD0Ev
// Demangled: CEventLeaderExitedCarAsDriver::~CEventLeaderExitedCarAsDriver()
void __fastcall CEventLeaderExitedCarAsDriver::~CEventLeaderExitedCarAsDriver(CEventLeaderExitedCarAsDriver *this)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pEventPool;
  v2 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x3787a4
// Original: _ZNK29CEventLeaderExitedCarAsDriver12GetEventTypeEv
// Demangled: CEventLeaderExitedCarAsDriver::GetEventType(void)
int __fastcall CEventLeaderExitedCarAsDriver::GetEventType(CEventLeaderExitedCarAsDriver *this)
{
  return 55;
}


// ============================================================

// Address: 0x3787a8
// Original: _ZNK29CEventLeaderExitedCarAsDriver16GetEventPriorityEv
// Demangled: CEventLeaderExitedCarAsDriver::GetEventPriority(void)
int __fastcall CEventLeaderExitedCarAsDriver::GetEventPriority(CEventLeaderExitedCarAsDriver *this)
{
  return 47;
}


// ============================================================

// Address: 0x3787ac
// Original: _ZNK29CEventLeaderExitedCarAsDriver11GetLifeTimeEv
// Demangled: CEventLeaderExitedCarAsDriver::GetLifeTime(void)
int __fastcall CEventLeaderExitedCarAsDriver::GetLifeTime(CEventLeaderExitedCarAsDriver *this)
{
  return 0;
}


// ============================================================

// Address: 0x3787b0
// Original: _ZNK29CEventLeaderExitedCarAsDriver10AffectsPedEP4CPed
// Demangled: CEventLeaderExitedCarAsDriver::AffectsPed(CPed *)
int __fastcall CEventLeaderExitedCarAsDriver::AffectsPed(CEventLeaderExitedCarAsDriver *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x3787b4
// Original: _ZNK29CEventLeaderExitedCarAsDriver13CloneEditableEv
// Demangled: CEventLeaderExitedCarAsDriver::CloneEditable(void)
int __fastcall CEventLeaderExitedCarAsDriver::CloneEditable(CEventLeaderExitedCarAsDriver *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int result; // r0
  int v4; // r12
  int v5; // r2
  int v6; // r3

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  result = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++result;
    if ( result == v4 )
    {
      result = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + result);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + result) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  result = *v2 + 68 * v2[3];
LABEL_7:
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 13107456;
  *(_WORD *)(result + 12) = -1;
  *(_DWORD *)result = &off_666EA8;
  return result;
}


// ============================================================
