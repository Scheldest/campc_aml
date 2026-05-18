
// Address: 0x18b6ac
// Original: j__ZN21CEventAcquaintancePedC2EP4CPed
// Demangled: CEventAcquaintancePed::CEventAcquaintancePed(CPed *)
// attributes: thunk
void __fastcall CEventAcquaintancePed::CEventAcquaintancePed(CEventAcquaintancePed *this, CPed *a2)
{
  _ZN21CEventAcquaintancePedC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x18bbdc
// Original: j__ZN21CEventAcquaintancePedD2Ev
// Demangled: CEventAcquaintancePed::~CEventAcquaintancePed()
// attributes: thunk
void __fastcall CEventAcquaintancePed::~CEventAcquaintancePed(CEventAcquaintancePed *this)
{
  _ZN21CEventAcquaintancePedD2Ev(this);
}


// ============================================================

// Address: 0x2fcdf0
// Original: _ZNK21CEventAcquaintancePed11GetLifeTimeEv
// Demangled: CEventAcquaintancePed::GetLifeTime(void)
int __fastcall CEventAcquaintancePed::GetLifeTime(CEventAcquaintancePed *this)
{
  return 0;
}


// ============================================================

// Address: 0x2fce1a
// Original: _ZNK21CEventAcquaintancePed15GetSourceEntityEv
// Demangled: CEventAcquaintancePed::GetSourceEntity(void)
int __fastcall CEventAcquaintancePed::GetSourceEntity(CEventAcquaintancePed *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x2fce26
// Original: _ZNK21CEventAcquaintancePed27CanBeInterruptedBySameEventEv
// Demangled: CEventAcquaintancePed::CanBeInterruptedBySameEvent(void)
int __fastcall CEventAcquaintancePed::CanBeInterruptedBySameEvent(CEventAcquaintancePed *this)
{
  return 1;
}


// ============================================================

// Address: 0x375070
// Original: _ZN21CEventAcquaintancePedC2EP4CPed
// Demangled: CEventAcquaintancePed::CEventAcquaintancePed(CPed *)
void __fastcall CEventAcquaintancePed::CEventAcquaintancePed(CEventAcquaintancePed *this, CPed *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_66656C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x3750b0
// Original: _ZN21CEventAcquaintancePedD0Ev
// Demangled: CEventAcquaintancePed::~CEventAcquaintancePed()
void __fastcall __noreturn CEventAcquaintancePed::~CEventAcquaintancePed(CEventAcquaintancePed *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x3750b2
// Original: _ZNK21CEventAcquaintancePed17TakesPriorityOverERK6CEvent
// Demangled: CEventAcquaintancePed::TakesPriorityOver(CEvent const&)
int __fastcall CEventAcquaintancePed::TakesPriorityOver(CEventAcquaintancePed *this, const CEvent *a2)
{
  int v4; // r6
  CPed *v5; // r0
  int IsPlayer; // r5
  int v7; // r5
  CPed *v9; // r0
  int v10; // r0

  v4 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2);
  if ( v4 == (*(int (__fastcall **)(CEventAcquaintancePed *))(*(_DWORD *)this + 8))(this) )
  {
    v5 = (CPed *)*((_DWORD *)this + 4);
    if ( v5 )
      IsPlayer = CPed::IsPlayer(v5);
    else
      IsPlayer = 0;
    v9 = (CPed *)*((_DWORD *)a2 + 4);
    if ( v9 )
      v10 = CPed::IsPlayer(v9) ^ 1;
    else
      v10 = 1;
    return v10 & IsPlayer;
  }
  else
  {
    v7 = (*(int (__fastcall **)(CEventAcquaintancePed *))(*(_DWORD *)this + 12))(this);
    return v7 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
  }
}


// ============================================================

// Address: 0x37511c
// Original: _ZNK21CEventAcquaintancePed15AffectsPedGroupEP9CPedGroup
// Demangled: CEventAcquaintancePed::AffectsPedGroup(CPedGroup *)
bool __fastcall CEventAcquaintancePed::AffectsPedGroup(CEventAcquaintancePed *this, CPedGroup *a2)
{
  const CPed *v4; // r1
  CPed *Leader; // r0
  int PlayerPed; // r0
  _BOOL4 result; // r0

  v4 = (const CPed *)*((_DWORD *)this + 4);
  result = 0;
  if ( v4
    && !CPedGroupMembership::IsMember((CPedGroup *)((char *)a2 + 8), v4)
    && ((*(int (__fastcall **)(CEventAcquaintancePed *))(*(_DWORD *)this + 8))(this) != 39
     && (*(int (__fastcall **)(CEventAcquaintancePed *))(*(_DWORD *)this + 8))(this) != 38
     || *((_DWORD *)this + 4) != *(_DWORD *)a2) )
  {
    if ( (*(int (__fastcall **)(CEventAcquaintancePed *))(*(_DWORD *)this + 8))(this) != 39
      && (*(int (__fastcall **)(CEventAcquaintancePed *))(*(_DWORD *)this + 8))(this) != 38 )
    {
      return 1;
    }
    if ( !CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8))
      || (Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8)), !CPed::IsPlayer(Leader)) )
    {
      PlayerPed = FindPlayerPed(-1);
      if ( !CPedGroupMembership::IsMember(
              (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *(_DWORD *)(*(_DWORD *)(PlayerPed + 1092) + 56) + 2],
              *((const CPed **)this + 4)) )
        return 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3751c0
// Original: _ZNK21CEventAcquaintancePed10AffectsPedEP4CPed
// Demangled: CEventAcquaintancePed::AffectsPed(CPed *)
int __fastcall CEventAcquaintancePed::AffectsPed(const CPed **this, CPed *a2)
{
  const CPed *v4; // r2

  if ( this[4] && !*((_DWORD *)a2 + 462) && CPed::IsAlive(a2) == 1 && CPed::IsAlive(this[4]) == 1 )
    return CPedGroups::AreInSameGroup(a2, this[4], v4) ^ 1;
  else
    return 0;
}


// ============================================================

// Address: 0x378028
// Original: _ZN21CEventAcquaintancePedD2Ev
// Demangled: CEventAcquaintancePed::~CEventAcquaintancePed()
void __fastcall CEventAcquaintancePed::~CEventAcquaintancePed(CEventAcquaintancePed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66656C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================
