
// Address: 0x18c998
// Original: j__ZNK26CEventPlayerCommandToGroup15AffectsPedGroupEP9CPedGroup
// Demangled: CEventPlayerCommandToGroup::AffectsPedGroup(CPedGroup *)
// attributes: thunk
int __fastcall CEventPlayerCommandToGroup::AffectsPedGroup(CEventPlayerCommandToGroup *this, CPedGroup *a2)
{
  return _ZNK26CEventPlayerCommandToGroup15AffectsPedGroupEP9CPedGroup(this, a2);
}


// ============================================================

// Address: 0x19b158
// Original: j__ZN26CEventPlayerCommandToGroupD2Ev
// Demangled: CEventPlayerCommandToGroup::~CEventPlayerCommandToGroup()
// attributes: thunk
void __fastcall CEventPlayerCommandToGroup::~CEventPlayerCommandToGroup(CEventPlayerCommandToGroup *this)
{
  _ZN26CEventPlayerCommandToGroupD2Ev(this);
}


// ============================================================

// Address: 0x1a0e48
// Original: j__ZN26CEventPlayerCommandToGroupC2EiP4CPed
// Demangled: CEventPlayerCommandToGroup::CEventPlayerCommandToGroup(int,CPed *)
// attributes: thunk
void __fastcall CEventPlayerCommandToGroup::CEventPlayerCommandToGroup(
        CEventPlayerCommandToGroup *this,
        int a2,
        CPed *a3)
{
  _ZN26CEventPlayerCommandToGroupC2EiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x377c0c
// Original: _ZN26CEventPlayerCommandToGroupC2EiP4CPed
// Demangled: CEventPlayerCommandToGroup::CEventPlayerCommandToGroup(int,CPed *)
void __fastcall CEventPlayerCommandToGroup::CEventPlayerCommandToGroup(
        CEventPlayerCommandToGroup *this,
        int a2,
        CPed *a3)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *((_DWORD *)this + 4) = a2;
  *(_DWORD *)this = &off_666BD8;
  *((_DWORD *)this + 5) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x377c4c
// Original: _ZN26CEventPlayerCommandToGroupD0Ev
// Demangled: CEventPlayerCommandToGroup::~CEventPlayerCommandToGroup()
void __fastcall __noreturn CEventPlayerCommandToGroup::~CEventPlayerCommandToGroup(CEventPlayerCommandToGroup *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x377c4e
// Original: _ZNK26CEventPlayerCommandToGroup15AffectsPedGroupEP9CPedGroup
// Demangled: CEventPlayerCommandToGroup::AffectsPedGroup(CPedGroup *)
bool __fastcall CEventPlayerCommandToGroup::AffectsPedGroup(CEventPlayerCommandToGroup *this, CPedGroup *a2)
{
  CPedGroupMembership *v2; // r5
  CPed *Leader; // r0
  CPed *v4; // r4
  int Member; // r0
  bool v6; // zf
  int v7; // r0
  int v8; // r0
  bool v9; // zf
  int v10; // r0
  bool v11; // zf
  int v12; // r0
  bool v13; // zf
  int v14; // r0
  bool v15; // zf
  int v16; // r0
  bool v17; // zf

  v2 = (CPedGroup *)((char *)a2 + 8);
  Leader = (CPed *)CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8));
  v4 = Leader;
  if ( !Leader || CPed::IsPlayer(Leader) != 1 )
    return 0;
  Member = CPedGroupMembership::GetMember(v2, 0);
  v6 = Member == 0;
  if ( Member )
    v6 = *(unsigned __int8 *)(Member + 51) == *((unsigned __int8 *)v4 + 51);
  if ( !v6 )
    return 0;
  v7 = CPedGroupMembership::GetMember(v2, 1);
  if ( v7 )
  {
    if ( *(unsigned __int8 *)(v7 + 51) != *((unsigned __int8 *)v4 + 51) )
      return 0;
  }
  v8 = CPedGroupMembership::GetMember(v2, 2);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(unsigned __int8 *)(v8 + 51) == *((unsigned __int8 *)v4 + 51);
  if ( !v9 )
    return 0;
  v10 = CPedGroupMembership::GetMember(v2, 3);
  v11 = v10 == 0;
  if ( v10 )
    v11 = *(unsigned __int8 *)(v10 + 51) == *((unsigned __int8 *)v4 + 51);
  if ( !v11 )
    return 0;
  v12 = CPedGroupMembership::GetMember(v2, 4);
  v13 = v12 == 0;
  if ( v12 )
    v13 = *(unsigned __int8 *)(v12 + 51) == *((unsigned __int8 *)v4 + 51);
  if ( !v13 )
    return 0;
  v14 = CPedGroupMembership::GetMember(v2, 5);
  v15 = v14 == 0;
  if ( v14 )
    v15 = *(unsigned __int8 *)(v14 + 51) == *((unsigned __int8 *)v4 + 51);
  if ( !v15 )
    return 0;
  v16 = CPedGroupMembership::GetMember(v2, 6);
  v17 = v16 == 0;
  if ( v16 )
    return *(unsigned __int8 *)(v16 + 51) == *((unsigned __int8 *)v4 + 51);
  return v17;
}


// ============================================================

// Address: 0x377d1a
// Original: _ZNK26CEventPlayerCommandToGroup17TakesPriorityOverERK6CEvent
// Demangled: CEventPlayerCommandToGroup::TakesPriorityOver(CEvent const&)
int __fastcall CEventPlayerCommandToGroup::TakesPriorityOver(CEventPlayerCommandToGroup *this, const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x3780a0
// Original: _ZN26CEventPlayerCommandToGroupD2Ev
// Demangled: CEventPlayerCommandToGroup::~CEventPlayerCommandToGroup()
void __fastcall CEventPlayerCommandToGroup::~CEventPlayerCommandToGroup(CEventPlayerCommandToGroup *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_666BD8;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x3792f4
// Original: _ZNK26CEventPlayerCommandToGroup11GetLifeTimeEv
// Demangled: CEventPlayerCommandToGroup::GetLifeTime(void)
int __fastcall CEventPlayerCommandToGroup::GetLifeTime(CEventPlayerCommandToGroup *this)
{
  return 0;
}


// ============================================================

// Address: 0x3792f8
// Original: _ZNK26CEventPlayerCommandToGroup10AffectsPedEP4CPed
// Demangled: CEventPlayerCommandToGroup::AffectsPed(CPed *)
int __fastcall CEventPlayerCommandToGroup::AffectsPed(CEventPlayerCommandToGroup *this, CPed *a2)
{
  return 0;
}


// ============================================================

// Address: 0x3792fc
// Original: _ZNK26CEventPlayerCommandToGroup15GetSourceEntityEv
// Demangled: CEventPlayerCommandToGroup::GetSourceEntity(void)
int __fastcall CEventPlayerCommandToGroup::GetSourceEntity(CEventPlayerCommandToGroup *this)
{
  return *((_DWORD *)this + 5);
}


// ============================================================
