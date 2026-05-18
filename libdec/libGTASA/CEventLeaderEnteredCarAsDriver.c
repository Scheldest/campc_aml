
// Address: 0x376836
// Original: _ZNK30CEventLeaderEnteredCarAsDriver17TakesPriorityOverERK6CEvent
// Demangled: CEventLeaderEnteredCarAsDriver::TakesPriorityOver(CEvent const&)
int __fastcall CEventLeaderEnteredCarAsDriver::TakesPriorityOver(
        CEventLeaderEnteredCarAsDriver *this,
        const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x37683a
// Original: _ZNK30CEventLeaderEnteredCarAsDriver15AffectsPedGroupEP9CPedGroup
// Demangled: CEventLeaderEnteredCarAsDriver::AffectsPedGroup(CPedGroup *)
int __fastcall CEventLeaderEnteredCarAsDriver::AffectsPedGroup(CEventLeaderEnteredCarAsDriver *this, CPedGroup *a2)
{
  int v3; // r0
  bool v4; // zf
  CPedGroupMembership *v5; // r5
  int v6; // r6
  int Member; // r0

  v3 = *((_DWORD *)this + 4);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *((_BYTE *)a2 + 4) == 0;
  if ( v4 )
    return 0;
  v5 = (CPedGroup *)((char *)a2 + 8);
  v6 = -1;
  while ( 1 )
  {
    Member = CPedGroupMembership::GetMember(v5, ++v6);
    if ( Member )
    {
      if ( !(*(unsigned __int8 *)(Member + 1157) << 31)
        || *(_DWORD *)(Member + 1424) != *((_DWORD *)this + 4)
        || CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(Member + 1088) + 4), 704) )
      {
        break;
      }
    }
    if ( v6 >= 6 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x37864c
// Original: _ZN30CEventLeaderEnteredCarAsDriverD2Ev
// Demangled: CEventLeaderEnteredCarAsDriver::~CEventLeaderEnteredCarAsDriver()
void __fastcall CEventLeaderEnteredCarAsDriver::~CEventLeaderEnteredCarAsDriver(CEventLeaderEnteredCarAsDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666E58;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x378674
// Original: _ZN30CEventLeaderEnteredCarAsDriverD0Ev
// Demangled: CEventLeaderEnteredCarAsDriver::~CEventLeaderEnteredCarAsDriver()
void __fastcall CEventLeaderEnteredCarAsDriver::~CEventLeaderEnteredCarAsDriver(CEventLeaderEnteredCarAsDriver *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666E58;
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

// Address: 0x3786c8
// Original: _ZNK30CEventLeaderEnteredCarAsDriver12GetEventTypeEv
// Demangled: CEventLeaderEnteredCarAsDriver::GetEventType(void)
int __fastcall CEventLeaderEnteredCarAsDriver::GetEventType(CEventLeaderEnteredCarAsDriver *this)
{
  return 54;
}


// ============================================================

// Address: 0x3786cc
// Original: _ZNK30CEventLeaderEnteredCarAsDriver16GetEventPriorityEv
// Demangled: CEventLeaderEnteredCarAsDriver::GetEventPriority(void)
int __fastcall CEventLeaderEnteredCarAsDriver::GetEventPriority(CEventLeaderEnteredCarAsDriver *this)
{
  return 46;
}


// ============================================================

// Address: 0x3786d0
// Original: _ZNK30CEventLeaderEnteredCarAsDriver11GetLifeTimeEv
// Demangled: CEventLeaderEnteredCarAsDriver::GetLifeTime(void)
int __fastcall CEventLeaderEnteredCarAsDriver::GetLifeTime(CEventLeaderEnteredCarAsDriver *this)
{
  return 0;
}


// ============================================================

// Address: 0x3786d4
// Original: _ZNK30CEventLeaderEnteredCarAsDriver10AffectsPedEP4CPed
// Demangled: CEventLeaderEnteredCarAsDriver::AffectsPed(CPed *)
int __fastcall CEventLeaderEnteredCarAsDriver::AffectsPed(CEventLeaderEnteredCarAsDriver *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x3786d8
// Original: _ZNK30CEventLeaderEnteredCarAsDriver27CanBeInterruptedBySameEventEv
// Demangled: CEventLeaderEnteredCarAsDriver::CanBeInterruptedBySameEvent(void)
int __fastcall CEventLeaderEnteredCarAsDriver::CanBeInterruptedBySameEvent(CEventLeaderEnteredCarAsDriver *this)
{
  return 1;
}


// ============================================================

// Address: 0x3786dc
// Original: _ZNK30CEventLeaderEnteredCarAsDriver13CloneEditableEv
// Demangled: CEventLeaderEnteredCarAsDriver::CloneEditable(void)
int __fastcall CEventLeaderEnteredCarAsDriver::CloneEditable(CEventLeaderEnteredCarAsDriver *this)
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
  v7 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)v3 = &off_666E58;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
