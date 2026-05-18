
// Address: 0x18b9b0
// Original: j__ZN17CEventGlobalGroup16AddEventsToGroupEP9CPedGroup
// Demangled: CEventGlobalGroup::AddEventsToGroup(CPedGroup *)
// attributes: thunk
int __fastcall CEventGlobalGroup::AddEventsToGroup(CEventGlobalGroup *this, CPedGroup *a2)
{
  return _ZN17CEventGlobalGroup16AddEventsToGroupEP9CPedGroup(this, a2);
}


// ============================================================

// Address: 0x191ff4
// Original: j__ZN17CEventGlobalGroupD2Ev
// Demangled: CEventGlobalGroup::~CEventGlobalGroup()
// attributes: thunk
void __fastcall CEventGlobalGroup::~CEventGlobalGroup(CEventGlobalGroup *this)
{
  _ZN17CEventGlobalGroupD2Ev(this);
}


// ============================================================

// Address: 0x19c958
// Original: j__ZN17CEventGlobalGroup13GetSoundLevelEP7CEntityR7CVector
// Demangled: CEventGlobalGroup::GetSoundLevel(CEntity *,CVector &)
// attributes: thunk
int __fastcall CEventGlobalGroup::GetSoundLevel(CEventGlobalGroup *this, CEntity *a2, CVector *a3)
{
  return _ZN17CEventGlobalGroup13GetSoundLevelEP7CEntityR7CVector(this, a2, a3);
}


// ============================================================

// Address: 0x1a0d20
// Original: j__ZN17CEventGlobalGroup14AddEventsToPedEP4CPed
// Demangled: CEventGlobalGroup::AddEventsToPed(CPed *)
// attributes: thunk
int __fastcall CEventGlobalGroup::AddEventsToPed(CEventGlobalGroup *this, CPed *a2)
{
  return _ZN17CEventGlobalGroup14AddEventsToPedEP4CPed(this, a2);
}


// ============================================================

// Address: 0x36f3cc
// Original: _ZN17CEventGlobalGroupD2Ev
// Demangled: CEventGlobalGroup::~CEventGlobalGroup()
void __fastcall CEventGlobalGroup::~CEventGlobalGroup(CEventGlobalGroup *this)
{
  int v2; // r1
  char *v3; // r5
  int i; // r6
  int v5; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_665D64;
  if ( v2 >= 1 )
  {
    v3 = (char *)this + 12;
    for ( i = 0; i < v2; ++i )
    {
      v5 = *(_DWORD *)&v3[4 * i];
      if ( v5 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
        *(_DWORD *)&v3[4 * i] = 0;
        v2 = *((_DWORD *)this + 2);
      }
    }
  }
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x36f954
// Original: _ZN17CEventGlobalGroupC2Ev
// Demangled: CEventGlobalGroup::CEventGlobalGroup(void)
void __fastcall CEventGlobalGroup::CEventGlobalGroup(CEventGlobalGroup *this)
{
  *(_QWORD *)((char *)this + 52) = 0LL;
  *(_QWORD *)((char *)this + 60) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 28) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 17) = 0;
  *(_DWORD *)this = &off_665D74;
}


// ============================================================

// Address: 0x36f98c
// Original: _ZN17CEventGlobalGroupD0Ev
// Demangled: CEventGlobalGroup::~CEventGlobalGroup()
void __fastcall CEventGlobalGroup::~CEventGlobalGroup(CEventGlobalGroup *this)
{
  int v2; // r1
  char *v3; // r5
  int i; // r6
  int v5; // r0

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_665D64;
  if ( v2 >= 1 )
  {
    v3 = (char *)this + 12;
    for ( i = 0; i < v2; ++i )
    {
      v5 = *(_DWORD *)&v3[4 * i];
      if ( v5 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
        *(_DWORD *)&v3[4 * i] = 0;
        v2 = *((_DWORD *)this + 2);
      }
    }
  }
  operator delete(this);
}


// ============================================================

// Address: 0x36f9dc
// Original: _ZN17CEventGlobalGroup14AddEventsToPedEP4CPed
// Demangled: CEventGlobalGroup::AddEventsToPed(CPed *)
int __fastcall CEventGlobalGroup::AddEventsToPed(CEventGlobalGroup *this, CPed *a2)
{
  int result; // r0
  int v4; // r4
  CEventGroup *v5; // r5
  CEvent *v6; // r6

  result = *((_DWORD *)this + 2);
  if ( result >= 1 )
  {
    v4 = 0;
    v5 = (CEventGroup *)(*((_DWORD *)a2 + 272) + 104);
    do
    {
      v6 = (CEvent *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + v4 + 3) + 20))(*((_DWORD *)this + v4 + 3));
      CEventGroup::Add(v5, v6, 0);
      (*(void (__fastcall **)(CEvent *))(*(_DWORD *)v6 + 4))(v6);
      result = *((_DWORD *)this + 2);
      ++v4;
    }
    while ( v4 < result );
  }
  return result;
}


// ============================================================

// Address: 0x36fa2a
// Original: _ZN17CEventGlobalGroup16AddEventsToGroupEP9CPedGroup
// Demangled: CEventGlobalGroup::AddEventsToGroup(CPedGroup *)
int __fastcall CEventGlobalGroup::AddEventsToGroup(CEventGlobalGroup *this, CPedGroup *a2)
{
  int result; // r0
  CPedGroupIntelligence *v4; // r9
  int i; // r5
  CEvent *v6; // r6

  result = *((_DWORD *)this + 2);
  if ( result >= 1 )
  {
    v4 = (CPedGroup *)((char *)a2 + 48);
    for ( i = 0; i < result; ++i )
    {
      v6 = (CEvent *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + i + 3) + 20))(*((_DWORD *)this + i + 3));
      CPedGroupIntelligence::AddEvent(v4, v6);
      (*(void (__fastcall **)(CEvent *))(*(_DWORD *)v6 + 4))(v6);
      result = *((_DWORD *)this + 2);
    }
  }
  return result;
}


// ============================================================

// Address: 0x36fa74
// Original: _ZN17CEventGlobalGroup13GetSoundLevelEP7CEntityR7CVector
// Demangled: CEventGlobalGroup::GetSoundLevel(CEntity *,CVector &)
int __fastcall CEventGlobalGroup::GetSoundLevel(CEventGlobalGroup *this, CEntity *a2, CVector *a3)
{
  float v4; // s16
  char *v7; // r4
  int v8; // r6
  CEntity *v9; // r0
  bool v10; // zf
  float v11; // r1
  float v12; // r2

  v4 = 0.0;
  if ( *((int *)this + 2) >= 1 )
  {
    v7 = (char *)this + 12;
    v8 = 0;
    do
    {
      v9 = (CEntity *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)&v7[4 * v8] + 44))(*(_DWORD *)&v7[4 * v8]);
      v10 = a2 == 0;
      if ( a2 )
        v10 = v9 == a2;
      if ( v10 )
      {
        v11 = COERCE_FLOAT(CEvent::GetSoundLevel(*(CEvent **)&v7[4 * v8], a2, a3));
        if ( v11 > 0.0 )
          v4 = v4 + COERCE_FLOAT(CEvent::CalcSoundLevelIncrement((CEvent *)LODWORD(v4), v11, v12));
      }
      ++v8;
    }
    while ( v8 < *((_DWORD *)this + 2) );
  }
  return LODWORD(v4);
}


// ============================================================
