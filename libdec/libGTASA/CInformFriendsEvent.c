
// Address: 0x36fd78
// Original: _ZN19CInformFriendsEventC2Ev
// Demangled: CInformFriendsEvent::CInformFriendsEvent(void)
void __fastcall CInformFriendsEvent::CInformFriendsEvent(CInformFriendsEvent *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = -1;
}


// ============================================================

// Address: 0x36fd86
// Original: _ZN19CInformFriendsEventD2Ev
// Demangled: CInformFriendsEvent::~CInformFriendsEvent()
void __fastcall CInformFriendsEvent::~CInformFriendsEvent(CEntity **this)
{
  CEntity *v2; // r0
  CEntity *v3; // r0

  v2 = *this;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, this);
    *this = 0;
  }
  v3 = this[1];
  if ( v3 )
  {
    (*(void (__fastcall **)(CEntity *))(*(_DWORD *)v3 + 4))(v3);
    this[1] = 0;
  }
  this[2] = (CEntity *)-1;
}


// ============================================================

// Address: 0x36fdb2
// Original: _ZN19CInformFriendsEvent5FlushEv
// Demangled: CInformFriendsEvent::Flush(void)
int __fastcall CInformFriendsEvent::Flush(CEntity **this)
{
  CEntity *v2; // r0
  CEntity *v3; // r0
  int result; // r0

  v2 = *this;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, this);
    *this = 0;
  }
  v3 = this[1];
  if ( v3 )
  {
    (*(void (__fastcall **)(CEntity *))(*(_DWORD *)v3 + 4))(v3);
    this[1] = 0;
  }
  result = -1;
  this[2] = (CEntity *)-1;
  return result;
}


// ============================================================

// Address: 0x36fddc
// Original: _ZN19CInformFriendsEvent3SetEP4CPedP6CEventi
// Demangled: CInformFriendsEvent::Set(CPed *,CEvent *,int)
CEntity *__fastcall CInformFriendsEvent::Set(CEntity **this, CPed *a2, CEvent *a3, int a4)
{
  CEntity *result; // r0

  *this = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, this);
  result = (CEntity *)(CTimer::m_snTimeInMilliseconds + a4);
  this[1] = a3;
  this[2] = result;
  return result;
}


// ============================================================

// Address: 0x36fe10
// Original: _ZN19CInformFriendsEvent7ProcessEv
// Demangled: CInformFriendsEvent::Process(void)
int __fastcall CInformFriendsEvent::Process(CInformFriendsEvent *this)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r0
  int v5; // r0

  result = *(_DWORD *)this;
  if ( result )
  {
    v3 = (_DWORD *)((char *)this + 8);
    if ( *((_DWORD *)this + 2) >= (unsigned int)CTimer::m_snTimeInMilliseconds )
      return result;
    CEventGroup::Add((CEventGroup *)(*(_DWORD *)(result + 1088) + 104), *((CEvent **)this + 1), 0);
    if ( *(_DWORD *)this )
    {
      CEntity::CleanUpOldReference(*(CEntity **)this, (CEntity **)this);
      *(_DWORD *)this = 0;
    }
    v4 = *((_DWORD *)this + 1);
    if ( v4 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
      *((_DWORD *)this + 1) = 0;
    }
  }
  else
  {
    v5 = *((_DWORD *)this + 1);
    if ( v5 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
      *((_DWORD *)this + 1) = 0;
    }
    v3 = (_DWORD *)((char *)this + 8);
  }
  result = -1;
  *v3 = -1;
  return result;
}


// ============================================================
