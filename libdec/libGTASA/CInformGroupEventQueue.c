
// Address: 0x18d2b8
// Original: j__ZN22CInformGroupEventQueue7ProcessEv
// Demangled: CInformGroupEventQueue::Process(void)
// attributes: thunk
int __fastcall CInformGroupEventQueue::Process(CInformGroupEventQueue *this)
{
  return _ZN22CInformGroupEventQueue7ProcessEv(this);
}


// ============================================================

// Address: 0x18f45c
// Original: j__ZN22CInformGroupEventQueue3AddEP4CPedP9CPedGroupP6CEvent
// Demangled: CInformGroupEventQueue::Add(CPed *,CPedGroup *,CEvent *)
// attributes: thunk
int __fastcall CInformGroupEventQueue::Add(CInformGroupEventQueue *this, CPed *a2, CPedGroup *a3, CEvent *a4)
{
  return _ZN22CInformGroupEventQueue3AddEP4CPedP9CPedGroupP6CEvent(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19a024
// Original: j__ZN22CInformGroupEventQueue4InitEv
// Demangled: CInformGroupEventQueue::Init(void)
// attributes: thunk
int __fastcall CInformGroupEventQueue::Init(CInformGroupEventQueue *this)
{
  return _ZN22CInformGroupEventQueue4InitEv(this);
}


// ============================================================

// Address: 0x19f628
// Original: j__ZN22CInformGroupEventQueue5FlushEv
// Demangled: CInformGroupEventQueue::Flush(void)
// attributes: thunk
int __fastcall CInformGroupEventQueue::Flush(CInformGroupEventQueue *this)
{
  return _ZN22CInformGroupEventQueue5FlushEv(this);
}


// ============================================================

// Address: 0x3702e8
// Original: _ZN22CInformGroupEventQueueC2Ev
// Demangled: CInformGroupEventQueue::CInformGroupEventQueue(void)
void __fastcall CInformGroupEventQueue::CInformGroupEventQueue(CInformGroupEventQueue *this)
{
  ;
}


// ============================================================

// Address: 0x3702ea
// Original: _ZN22CInformGroupEventQueueD2Ev
// Demangled: CInformGroupEventQueue::~CInformGroupEventQueue()
void __fastcall CInformGroupEventQueue::~CInformGroupEventQueue(CInformGroupEventQueue *this)
{
  ;
}


// ============================================================

// Address: 0x3702ec
// Original: _ZN22CInformGroupEventQueue4InitEv
// Demangled: CInformGroupEventQueue::Init(void)
int *__fastcall CInformGroupEventQueue::Init(CInformGroupEventQueue *this)
{
  int i; // r6
  CEntity *v2; // r0
  int v3; // r0
  int *result; // r0

  for ( i = 0; i != 32; i += 4 )
  {
    v2 = (CEntity *)CInformGroupEventQueue::ms_informGroupEvents[i];
    if ( v2 )
    {
      CEntity::CleanUpOldReference(v2, (CEntity **)&CInformGroupEventQueue::ms_informGroupEvents[i]);
      CInformGroupEventQueue::ms_informGroupEvents[i] = 0;
    }
    v3 = CInformGroupEventQueue::ms_informGroupEvents[i + 2];
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      CInformGroupEventQueue::ms_informGroupEvents[i + 2] = 0;
    }
    result = &CInformGroupEventQueue::ms_informGroupEvents[i];
    result[3] = -1;
  }
  return result;
}


// ============================================================

// Address: 0x370364
// Original: _ZN22CInformGroupEventQueue5FlushEv
// Demangled: CInformGroupEventQueue::Flush(void)
int *__fastcall CInformGroupEventQueue::Flush(CInformGroupEventQueue *this)
{
  int i; // r6
  CEntity *v2; // r0
  int v3; // r0
  int *result; // r0

  for ( i = 0; i != 32; i += 4 )
  {
    v2 = (CEntity *)CInformGroupEventQueue::ms_informGroupEvents[i];
    if ( v2 )
    {
      CEntity::CleanUpOldReference(v2, (CEntity **)&CInformGroupEventQueue::ms_informGroupEvents[i]);
      CInformGroupEventQueue::ms_informGroupEvents[i] = 0;
    }
    v3 = CInformGroupEventQueue::ms_informGroupEvents[i + 2];
    if ( v3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      CInformGroupEventQueue::ms_informGroupEvents[i + 2] = 0;
    }
    result = &CInformGroupEventQueue::ms_informGroupEvents[i];
    result[3] = -1;
  }
  return result;
}


// ============================================================

// Address: 0x3703dc
// Original: _ZN22CInformGroupEventQueue3AddEP4CPedP9CPedGroupP6CEvent
// Demangled: CInformGroupEventQueue::Add(CPed *,CPedGroup *,CEvent *)
int __fastcall CInformGroupEventQueue::Add(CInformGroupEventQueue *this, CPed *a2, CPedGroup *a3, CEvent *a4)
{
  unsigned __int64 v5; // r8
  int v6; // r4
  int v7; // r11
  int *v8; // r6
  int v9; // r5
  int PlayerPed; // r0
  int v11; // r4
  int *v12; // r5
  bool v14; // zf
  int v15; // r0

  v5 = __PAIR64__((unsigned int)a3, (unsigned int)a2);
  v6 = -1;
  v7 = -1;
  v8 = &dword_8206BC;
  do
  {
    ++v6;
    if ( (CInformGroupEventQueue *)*(v8 - 2) == this )
    {
      v9 = (*(int (__fastcall **)(_DWORD, _DWORD, CPedGroup *, CEvent *))(*(_DWORD *)HIDWORD(v5) + 8))(
             HIDWORD(v5),
             *(_DWORD *)(*(_DWORD *)HIDWORD(v5) + 8),
             a3,
             a4);
      if ( v9 == (*(int (__fastcall **)(int))(*(_DWORD *)*v8 + 8))(*v8) )
        return 0;
    }
    else if ( v7 == -1 )
    {
      v7 = -1;
      if ( !*v8 )
        v7 = v6;
    }
    v8 += 4;
  }
  while ( v6 < 7 );
  if ( v7 == -1 )
    return 0;
  if ( ((*(int (__fastcall **)(_DWORD, _DWORD, CPedGroup *, CEvent *))(*(_DWORD *)HIDWORD(v5) + 8))(
          HIDWORD(v5),
          *(_DWORD *)(*(_DWORD *)HIDWORD(v5) + 8),
          a3,
          a4) == 36
     || (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 8))(HIDWORD(v5)) == 37)
    && (CEventEditableResponse::ComputeResponseTaskType((CEventEditableResponse *)HIDWORD(v5), (CPedGroup *)v5),
        PlayerPed = FindPlayerPed(-1),
        !CPedGroupMembership::IsMember(
           (CPedGroupMembership *)&CPedGroups::ms_groups[181 * *(_DWORD *)(*(_DWORD *)(PlayerPed + 1092) + 56) + 2],
           this)) )
  {
    if ( *((_BYTE *)this + 1096) == 2 )
      goto LABEL_21;
    v14 = *(unsigned __int8 *)(*(_DWORD *)(HIDWORD(v5) + 16) + 1157) << 31 == 0;
    if ( *(unsigned __int8 *)(*(_DWORD *)(HIDWORD(v5) + 16) + 1157) << 31 )
      v14 = *(unsigned __int16 *)(HIDWORD(v5) + 10) == 200;
    if ( v14 )
LABEL_21:
      v11 = 0;
    else
      v11 = 5000;
    v12 = &CInformGroupEventQueue::ms_informGroupEvents[4 * v7];
    *v12 = (int)this;
  }
  else
  {
    v11 = 0;
    v12 = &CInformGroupEventQueue::ms_informGroupEvents[4 * v7];
    *v12 = (int)this;
    if ( !this )
      goto LABEL_24;
  }
  CEntity::RegisterReference(this, (CEntity **)v12);
LABEL_24:
  v15 = CTimer::m_snTimeInMilliseconds;
  *(_QWORD *)(v12 + 1) = v5;
  v12[3] = v15 + v11;
  return 1;
}


// ============================================================

// Address: 0x37066c
// Original: _ZN22CInformGroupEventQueue7ProcessEv
// Demangled: CInformGroupEventQueue::Process(void)
int __fastcall CInformGroupEventQueue::Process(CInformGroupEventQueue *this)
{
  CInformGroupEvent::Process((CInformGroupEvent *)CInformGroupEventQueue::ms_informGroupEvents);
  CInformGroupEvent::Process((CInformGroupEvent *)&dword_8206C4);
  CInformGroupEvent::Process((CInformGroupEvent *)&dword_8206D4);
  CInformGroupEvent::Process((CInformGroupEvent *)&dword_8206E4);
  CInformGroupEvent::Process((CInformGroupEvent *)&dword_8206F4);
  CInformGroupEvent::Process((CInformGroupEvent *)&dword_820704);
  CInformGroupEvent::Process((CInformGroupEvent *)&dword_820714);
  return CInformGroupEvent::Process((CInformGroupEvent *)&dword_820724);
}


// ============================================================
