
// Address: 0x19187c
// Original: j__ZN17CInformGroupEvent7ProcessEv
// Demangled: CInformGroupEvent::Process(void)
// attributes: thunk
int __fastcall CInformGroupEvent::Process(CInformGroupEvent *this)
{
  return _ZN17CInformGroupEvent7ProcessEv(this);
}


// ============================================================

// Address: 0x370154
// Original: _ZN17CInformGroupEventC2Ev
// Demangled: CInformGroupEvent::CInformGroupEvent(void)
void __fastcall CInformGroupEvent::CInformGroupEvent(CInformGroupEvent *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = -1;
}


// ============================================================

// Address: 0x370162
// Original: _ZN17CInformGroupEventD2Ev
// Demangled: CInformGroupEvent::~CInformGroupEvent()
void __fastcall CInformGroupEvent::~CInformGroupEvent(CEntity **this)
{
  CEntity *v2; // r0
  CEntity *v3; // r0

  v2 = *this;
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, this);
    *this = 0;
  }
  v3 = this[2];
  if ( v3 )
  {
    (*(void (__fastcall **)(CEntity *))(*(_DWORD *)v3 + 4))(v3);
    this[2] = 0;
  }
  this[3] = (CEntity *)-1;
}


// ============================================================

// Address: 0x37018e
// Original: _ZN17CInformGroupEvent5FlushEv
// Demangled: CInformGroupEvent::Flush(void)
int __fastcall CInformGroupEvent::Flush(CEntity **this)
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
  v3 = this[2];
  if ( v3 )
  {
    (*(void (__fastcall **)(CEntity *))(*(_DWORD *)v3 + 4))(v3);
    this[2] = 0;
  }
  result = -1;
  this[3] = (CEntity *)-1;
  return result;
}


// ============================================================

// Address: 0x3701b8
// Original: _ZN17CInformGroupEvent3SetEP4CPedP9CPedGroupP6CEventi
// Demangled: CInformGroupEvent::Set(CPed *,CPedGroup *,CEvent *,int)
CEntity *__fastcall CInformGroupEvent::Set(CEntity **this, CPed *a2, CPedGroup *a3, CEvent *a4, int a5)
{
  int v8; // r0
  CEntity *result; // r0

  *this = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, this);
  v8 = CTimer::m_snTimeInMilliseconds;
  this[1] = a3;
  this[2] = a4;
  result = (CEntity *)(v8 + a5);
  this[3] = result;
  return result;
}


// ============================================================

// Address: 0x3701f4
// Original: _ZN17CInformGroupEvent7ProcessEv
// Demangled: CInformGroupEvent::Process(void)
int __fastcall CInformGroupEvent::Process(CInformGroupEvent *this)
{
  int result; // r0
  _DWORD *v3; // r6
  CPedGroups *PedsGroup; // r0
  CPedGroup *v5; // r1
  CPedGroups *v6; // r5
  int GroupId; // r0
  CEntity *v8; // r9
  int v9; // r0
  int v10; // r0
  int v11; // r0
  _DWORD v12[2]; // [sp+4h] [bp-2Ch] BYREF
  char v13; // [sp+Ch] [bp-24h]
  CEntity *v14; // [sp+10h] [bp-20h] BYREF
  int v15; // [sp+14h] [bp-1Ch]

  result = *(_DWORD *)this;
  if ( result )
  {
    v3 = (_DWORD *)((char *)this + 12);
    if ( *((_DWORD *)this + 3) >= (unsigned int)CTimer::m_snTimeInMilliseconds )
      return result;
    PedsGroup = (CPedGroups *)CPedGroups::GetPedsGroup(
                                (CPedGroups *)result,
                                (const CPed *)CTimer::m_snTimeInMilliseconds);
    v6 = PedsGroup;
    if ( PedsGroup )
    {
      GroupId = CPedGroups::GetGroupId(PedsGroup, v5);
      if ( GroupId >= 0 )
      {
        if ( CPedGroups::ms_activeGroups[GroupId] )
        {
          v8 = *(CEntity **)this;
          v9 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
          v12[1] = 0;
          v13 = 0;
          v12[0] = &off_6660DC;
          v14 = v8;
          v15 = v9;
          if ( v8 )
            CEntity::RegisterReference(v8, &v14);
          CPedGroupIntelligence::AddEvent((CPedGroups *)((char *)v6 + 48), (CEvent *)v12);
          v12[0] = &off_6660DC;
          if ( v14 )
            CEntity::CleanUpOldReference(v14, &v14);
          if ( v15 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 4))(v15);
        }
      }
    }
    if ( *(_DWORD *)this )
    {
      CEntity::CleanUpOldReference(*(CEntity **)this, (CEntity **)this);
      *(_DWORD *)this = 0;
    }
    v10 = *((_DWORD *)this + 2);
    if ( v10 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
      *((_DWORD *)this + 2) = 0;
    }
  }
  else
  {
    v11 = *((_DWORD *)this + 2);
    if ( v11 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
      *((_DWORD *)this + 2) = 0;
    }
    v3 = (_DWORD *)((char *)this + 12);
  }
  result = -1;
  *v3 = -1;
  return result;
}


// ============================================================
