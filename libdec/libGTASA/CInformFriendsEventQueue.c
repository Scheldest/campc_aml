
// Address: 0x18d260
// Original: j__ZN24CInformFriendsEventQueue5FlushEv
// Demangled: CInformFriendsEventQueue::Flush(void)
// attributes: thunk
int __fastcall CInformFriendsEventQueue::Flush(CInformFriendsEventQueue *this)
{
  return _ZN24CInformFriendsEventQueue5FlushEv(this);
}


// ============================================================

// Address: 0x18fc64
// Original: j__ZN24CInformFriendsEventQueue3AddEP4CPedP6CEvent
// Demangled: CInformFriendsEventQueue::Add(CPed *,CEvent *)
// attributes: thunk
int __fastcall CInformFriendsEventQueue::Add(CInformFriendsEventQueue *this, CPed *a2, CEvent *a3)
{
  return _ZN24CInformFriendsEventQueue3AddEP4CPedP6CEvent(this, a2, a3);
}


// ============================================================

// Address: 0x1943f0
// Original: j__ZN24CInformFriendsEventQueue7ProcessEv
// Demangled: CInformFriendsEventQueue::Process(void)
// attributes: thunk
int __fastcall CInformFriendsEventQueue::Process(CInformFriendsEventQueue *this)
{
  return _ZN24CInformFriendsEventQueue7ProcessEv(this);
}


// ============================================================

// Address: 0x19cc08
// Original: j__ZN24CInformFriendsEventQueue4InitEv
// Demangled: CInformFriendsEventQueue::Init(void)
// attributes: thunk
int __fastcall CInformFriendsEventQueue::Init(CInformFriendsEventQueue *this)
{
  return _ZN24CInformFriendsEventQueue4InitEv(this);
}


// ============================================================

// Address: 0x36fe80
// Original: _ZN24CInformFriendsEventQueueC2Ev
// Demangled: CInformFriendsEventQueue::CInformFriendsEventQueue(void)
void __fastcall CInformFriendsEventQueue::CInformFriendsEventQueue(CInformFriendsEventQueue *this)
{
  ;
}


// ============================================================

// Address: 0x36fe82
// Original: _ZN24CInformFriendsEventQueueD2Ev
// Demangled: CInformFriendsEventQueue::~CInformFriendsEventQueue()
void __fastcall CInformFriendsEventQueue::~CInformFriendsEventQueue(CInformFriendsEventQueue *this)
{
  ;
}


// ============================================================

// Address: 0x36fe84
// Original: _ZN24CInformFriendsEventQueue4InitEv
// Demangled: CInformFriendsEventQueue::Init(void)
int *__fastcall CInformFriendsEventQueue::Init(CInformFriendsEventQueue *this)
{
  int i; // r6
  CEntity *v2; // r0
  int v3; // r0
  int *result; // r0

  for ( i = 0; i != 24; i += 3 )
  {
    v2 = (CEntity *)CInformFriendsEventQueue::ms_informFriendsEvents[i];
    if ( v2 )
    {
      CEntity::CleanUpOldReference(v2, (CEntity **)&CInformFriendsEventQueue::ms_informFriendsEvents[i]);
      CInformFriendsEventQueue::ms_informFriendsEvents[i] = 0;
    }
    v3 = CInformFriendsEventQueue::ms_informFriendsEvents[i + 1];
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      CInformFriendsEventQueue::ms_informFriendsEvents[i + 1] = 0;
    }
    result = &CInformFriendsEventQueue::ms_informFriendsEvents[i];
    result[2] = -1;
  }
  return result;
}


// ============================================================

// Address: 0x36fefc
// Original: _ZN24CInformFriendsEventQueue5FlushEv
// Demangled: CInformFriendsEventQueue::Flush(void)
int *__fastcall CInformFriendsEventQueue::Flush(CInformFriendsEventQueue *this)
{
  int i; // r6
  CEntity *v2; // r0
  int v3; // r0
  int *result; // r0

  for ( i = 0; i != 24; i += 3 )
  {
    v2 = (CEntity *)CInformFriendsEventQueue::ms_informFriendsEvents[i];
    if ( v2 )
    {
      CEntity::CleanUpOldReference(v2, (CEntity **)&CInformFriendsEventQueue::ms_informFriendsEvents[i]);
      CInformFriendsEventQueue::ms_informFriendsEvents[i] = 0;
    }
    v3 = CInformFriendsEventQueue::ms_informFriendsEvents[i + 1];
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      CInformFriendsEventQueue::ms_informFriendsEvents[i + 1] = 0;
    }
    result = &CInformFriendsEventQueue::ms_informFriendsEvents[i];
    result[2] = -1;
  }
  return result;
}


// ============================================================

// Address: 0x36ff74
// Original: _ZN24CInformFriendsEventQueue3AddEP4CPedP6CEvent
// Demangled: CInformFriendsEventQueue::Add(CPed *,CEvent *)
int __fastcall CInformFriendsEventQueue::Add(CInformFriendsEventQueue *this, CPed *a2, CEvent *a3)
{
  int v5; // r4
  int v6; // r10
  int *v7; // r5
  int v8; // r6
  unsigned __int16 v9; // r0
  int v10; // s0
  int *v11; // r0
  int v12; // r1

  v5 = -1;
  v6 = -1;
  v7 = &dword_820658;
  do
  {
    ++v5;
    if ( (CInformFriendsEventQueue *)*(v7 - 1) == this )
    {
      v8 = (*(int (__fastcall **)(CPed *))(*(_DWORD *)a2 + 8))(a2);
      if ( v8 == (*(int (__fastcall **)(int))(*(_DWORD *)*v7 + 8))(*v7) )
        return 0;
    }
    else if ( v6 == -1 )
    {
      v6 = -1;
      if ( !*v7 )
        v6 = v5;
    }
    v7 += 3;
  }
  while ( v5 < 7 );
  if ( v6 == -1 )
    return 0;
  v9 = rand();
  CInformFriendsEventQueue::ms_informFriendsEvents[3 * v6] = (int)this;
  v10 = (int)(float)((float)((float)v9 * 0.000015259) * 500.0);
  if ( this )
    CEntity::RegisterReference(this, (CEntity **)&CInformFriendsEventQueue::ms_informFriendsEvents[3 * v6]);
  v11 = &CInformFriendsEventQueue::ms_informFriendsEvents[3 * v6];
  v12 = CTimer::m_snTimeInMilliseconds + v10 + 300;
  v11[1] = (int)a2;
  v11[2] = v12;
  return 1;
}


// ============================================================

// Address: 0x37005c
// Original: _ZN24CInformFriendsEventQueue7ProcessEv
// Demangled: CInformFriendsEventQueue::Process(void)
int __fastcall CInformFriendsEventQueue::Process(CInformFriendsEventQueue *this)
{
  int v1; // r10
  int v2; // r11
  int result; // r0
  int *v4; // r9
  int *v5; // r6
  CEntity *v6; // r0
  int v7; // r0
  int v8; // r0

  v1 = 0;
  v2 = 0;
  do
  {
    result = CInformFriendsEventQueue::ms_informFriendsEvents[v1];
    if ( result )
    {
      v4 = &CInformFriendsEventQueue::ms_informFriendsEvents[v1 + 2];
      if ( *v4 >= (unsigned int)CTimer::m_snTimeInMilliseconds )
        goto LABEL_12;
      v5 = &CInformFriendsEventQueue::ms_informFriendsEvents[v1];
      CEventGroup::Add(
        (CEventGroup *)(*(_DWORD *)(result + 1088) + 104),
        (CEvent *)CInformFriendsEventQueue::ms_informFriendsEvents[v1 + 1],
        0);
      v6 = (CEntity *)CInformFriendsEventQueue::ms_informFriendsEvents[v1];
      if ( v6 )
      {
        CEntity::CleanUpOldReference(v6, (CEntity **)&CInformFriendsEventQueue::ms_informFriendsEvents[v1]);
        CInformFriendsEventQueue::ms_informFriendsEvents[v1] = 0;
      }
      v7 = v5[1];
      if ( v7 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
        v5[1] = 0;
      }
    }
    else
    {
      v8 = CInformFriendsEventQueue::ms_informFriendsEvents[v1 + 1];
      if ( v8 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
        CInformFriendsEventQueue::ms_informFriendsEvents[v1 + 1] = 0;
      }
      v4 = &CInformFriendsEventQueue::ms_informFriendsEvents[3 * v2 + 2];
    }
    result = -1;
    *v4 = -1;
LABEL_12:
    v1 += 3;
    ++v2;
  }
  while ( v1 != 24 );
  return result;
}


// ============================================================
