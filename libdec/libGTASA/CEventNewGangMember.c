
// Address: 0x4ca66c
// Original: _ZN19CEventNewGangMemberD2Ev
// Demangled: CEventNewGangMember::~CEventNewGangMember()
void __fastcall CEventNewGangMember::~CEventNewGangMember(CEventNewGangMember *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6692FC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  j_CEvent::~CEvent(this);
}


// ============================================================

// Address: 0x4ca698
// Original: _ZN19CEventNewGangMemberD0Ev
// Demangled: CEventNewGangMember::~CEventNewGangMember()
void __fastcall CEventNewGangMember::~CEventNewGangMember(CEventNewGangMember *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  void *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6692FC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  CEvent::~CEvent(this);
  sub_197900(v4);
}


// ============================================================

// Address: 0x4ca6c8
// Original: _ZNK19CEventNewGangMember12GetEventTypeEv
// Demangled: CEventNewGangMember::GetEventType(void)
int __fastcall CEventNewGangMember::GetEventType(CEventNewGangMember *this)
{
  return 90;
}


// ============================================================

// Address: 0x4ca6cc
// Original: _ZNK19CEventNewGangMember16GetEventPriorityEv
// Demangled: CEventNewGangMember::GetEventPriority(void)
int __fastcall CEventNewGangMember::GetEventPriority(CEventNewGangMember *this)
{
  return 42;
}


// ============================================================

// Address: 0x4ca6d0
// Original: _ZNK19CEventNewGangMember11GetLifeTimeEv
// Demangled: CEventNewGangMember::GetLifeTime(void)
int __fastcall CEventNewGangMember::GetLifeTime(CEventNewGangMember *this)
{
  return 0;
}


// ============================================================

// Address: 0x4ca6d4
// Original: _ZNK19CEventNewGangMember5CloneEv
// Demangled: CEventNewGangMember::Clone(void)
CEntity **__fastcall CEventNewGangMember::Clone(CEventNewGangMember *this, unsigned int a2)
{
  CEntity **v3; // r4
  CEntity *v4; // r5

  v3 = (CEntity **)CEvent::operator new((CEvent *)&word_10, a2);
  v4 = (CEntity *)*((_DWORD *)this + 3);
  CEvent::CEvent((CEvent *)v3);
  *v3 = (CEntity *)&off_6692FC;
  v3[3] = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, v3 + 3);
  return v3;
}


// ============================================================

// Address: 0x4ca70c
// Original: _ZNK19CEventNewGangMember10AffectsPedEP4CPed
// Demangled: CEventNewGangMember::AffectsPed(CPed *)
int __fastcall CEventNewGangMember::AffectsPed(CEventNewGangMember *this, CPed *a2)
{
  return 1;
}


// ============================================================
