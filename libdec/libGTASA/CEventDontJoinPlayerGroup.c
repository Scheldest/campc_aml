
// Address: 0x4ca63c
// Original: _ZN25CEventDontJoinPlayerGroupD2Ev
// Demangled: CEventDontJoinPlayerGroup::~CEventDontJoinPlayerGroup()
void __fastcall CEventDontJoinPlayerGroup::~CEventDontJoinPlayerGroup(CEventDontJoinPlayerGroup *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669348;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CEvent::~CEvent(this);
}


// ============================================================

// Address: 0x4ca710
// Original: _ZN25CEventDontJoinPlayerGroupD0Ev
// Demangled: CEventDontJoinPlayerGroup::~CEventDontJoinPlayerGroup()
void __fastcall CEventDontJoinPlayerGroup::~CEventDontJoinPlayerGroup(CEventDontJoinPlayerGroup *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669348;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CEvent::~CEvent(this);
  sub_197900(v4);
}


// ============================================================

// Address: 0x4ca740
// Original: _ZNK25CEventDontJoinPlayerGroup12GetEventTypeEv
// Demangled: CEventDontJoinPlayerGroup::GetEventType(void)
int __fastcall CEventDontJoinPlayerGroup::GetEventType(CEventDontJoinPlayerGroup *this)
{
  return 94;
}


// ============================================================

// Address: 0x4ca744
// Original: _ZNK25CEventDontJoinPlayerGroup16GetEventPriorityEv
// Demangled: CEventDontJoinPlayerGroup::GetEventPriority(void)
int __fastcall CEventDontJoinPlayerGroup::GetEventPriority(CEventDontJoinPlayerGroup *this)
{
  return 43;
}


// ============================================================

// Address: 0x4ca748
// Original: _ZNK25CEventDontJoinPlayerGroup11GetLifeTimeEv
// Demangled: CEventDontJoinPlayerGroup::GetLifeTime(void)
int __fastcall CEventDontJoinPlayerGroup::GetLifeTime(CEventDontJoinPlayerGroup *this)
{
  return 0;
}


// ============================================================

// Address: 0x4ca74c
// Original: _ZNK25CEventDontJoinPlayerGroup5CloneEv
// Demangled: CEventDontJoinPlayerGroup::Clone(void)
CEntity **__fastcall CEventDontJoinPlayerGroup::Clone(CEventDontJoinPlayerGroup *this, unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CEvent::operator new((CEvent *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CEvent::CEvent((CEvent *)v3);
  *v3 = (CEntity *)&off_669348;
  v3[3] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x4ca784
// Original: _ZNK25CEventDontJoinPlayerGroup10AffectsPedEP4CPed
// Demangled: CEventDontJoinPlayerGroup::AffectsPed(CPed *)
int __fastcall CEventDontJoinPlayerGroup::AffectsPed(CEventDontJoinPlayerGroup *this, CPed *a2)
{
  return 1;
}


// ============================================================
