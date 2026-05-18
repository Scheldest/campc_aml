
// Address: 0x195900
// Original: j__ZNK20CEventHandlerHistory19IsRespondingToEventEi
// Demangled: CEventHandlerHistory::IsRespondingToEvent(int)
// attributes: thunk
int __fastcall CEventHandlerHistory::IsRespondingToEvent(CEventHandlerHistory *this, int a2)
{
  return _ZNK20CEventHandlerHistory19IsRespondingToEventEi(this, a2);
}


// ============================================================

// Address: 0x197cac
// Original: j__ZNK20CEventHandlerHistory15GetCurrentEventEv
// Demangled: CEventHandlerHistory::GetCurrentEvent(void)
// attributes: thunk
int __fastcall CEventHandlerHistory::GetCurrentEvent(CEventHandlerHistory *this)
{
  return _ZNK20CEventHandlerHistory15GetCurrentEventEv(this);
}


// ============================================================

// Address: 0x19c244
// Original: j__ZN20CEventHandlerHistory18RecordCurrentEventEP4CPedRK6CEvent
// Demangled: CEventHandlerHistory::RecordCurrentEvent(CPed *,CEvent const&)
// attributes: thunk
int __fastcall CEventHandlerHistory::RecordCurrentEvent(CEventHandlerHistory *this, CPed *a2, const CEvent *a3)
{
  return _ZN20CEventHandlerHistory18RecordCurrentEventEP4CPedRK6CEvent(this, a2, a3);
}


// ============================================================

// Address: 0x19dbbc
// Original: j__ZN20CEventHandlerHistory14ClearAllEventsEv
// Demangled: CEventHandlerHistory::ClearAllEvents(void)
// attributes: thunk
int __fastcall CEventHandlerHistory::ClearAllEvents(CEventHandlerHistory *this)
{
  return _ZN20CEventHandlerHistory14ClearAllEventsEv(this);
}


// ============================================================

// Address: 0x37b1c0
// Original: _ZN20CEventHandlerHistoryD2Ev
// Demangled: CEventHandlerHistory::~CEventHandlerHistory()
void __fastcall CEventHandlerHistory::~CEventHandlerHistory(CEventHandlerHistory *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = 0;
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 1) = 0;
  if ( v4 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    *((_DWORD *)this + 3) = 0;
  }
}


// ============================================================

// Address: 0x37b1f6
// Original: _ZN20CEventHandlerHistory5FlushEv
// Demangled: CEventHandlerHistory::Flush(void)
int __fastcall CEventHandlerHistory::Flush(CEventHandlerHistory *this)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = 0;
  if ( v3 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  result = *((_DWORD *)this + 3);
  *((_DWORD *)this + 1) = 0;
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
    result = 0;
    *((_DWORD *)this + 3) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x37b22e
// Original: _ZN20CEventHandlerHistory14ClearAllEventsEv
// Demangled: CEventHandlerHistory::ClearAllEvents(void)
int __fastcall CEventHandlerHistory::ClearAllEvents(CEventHandlerHistory *this)
{
  int v2; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  result = *((_DWORD *)this + 1);
  *((_DWORD *)this + 2) = 0;
  if ( result )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  *((_DWORD *)this + 1) = 0;
  return result;
}


// ============================================================

// Address: 0x37b254
// Original: _ZNK20CEventHandlerHistory19IsRespondingToEventEi
// Demangled: CEventHandlerHistory::IsRespondingToEvent(int)
int __fastcall CEventHandlerHistory::IsRespondingToEvent(CEventHandlerHistory *this, int a2)
{
  int v4; // r0
  _BOOL4 v5; // r4
  int v6; // r0

  v4 = *((_DWORD *)this + 1);
  if ( a2 == -1 )
  {
    return v4 || *((_DWORD *)this + 3) != 0;
  }
  else
  {
    v5 = 0;
    if ( v4 )
      v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4) == a2;
    v6 = *((_DWORD *)this + 3);
    if ( v6 )
      return v5 | ((*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6) == a2);
  }
  return v5;
}


// ============================================================

// Address: 0x37b2a8
// Original: _ZN20CEventHandlerHistory16StoreActiveEventEv
// Demangled: CEventHandlerHistory::StoreActiveEvent(void)
int __fastcall CEventHandlerHistory::StoreActiveEvent(CEventHandlerHistory *this)
{
  int v2; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  *((_DWORD *)this + 3) = *((_DWORD *)this + 1);
  *((_DWORD *)this + 4) = CTimer::m_snTimeInMilliseconds;
  *((_BYTE *)this + 24) = 1;
  result = 2000;
  *((_DWORD *)this + 5) = 2000;
  return result;
}


// ============================================================

// Address: 0x37b2d8
// Original: _ZN20CEventHandlerHistory15TickStoredEventEP4CPed
// Demangled: CEventHandlerHistory::TickStoredEvent(CPed *)
_DWORD *__fastcall CEventHandlerHistory::TickStoredEvent(_DWORD *this, CPed *a2)
{
  int v2; // r1

  v2 = this[3];
  if ( v2 )
  {
    if ( !this[2] )
    {
      this[3] = 0;
      this[1] = v2;
    }
  }
  return this;
}


// ============================================================

// Address: 0x37b2f0
// Original: _ZN20CEventHandlerHistory18RecordCurrentEventEP4CPedRK6CEvent
// Demangled: CEventHandlerHistory::RecordCurrentEvent(CPed *,CEvent const&)
int __fastcall CEventHandlerHistory::RecordCurrentEvent(CEventHandlerHistory *this, CPed *a2, const CEvent *a3)
{
  int result; // r0
  int v6; // r1
  int v7; // r0
  __int64 v8; // r0
  int v9; // r0
  int *v10; // r4
  int v11; // t1
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // t1

  result = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a3 + 8))(a3);
  if ( result != 32 )
  {
    switch ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a3 + 8))(a3) )
    {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 12:
      case 13:
      case 33:
      case 44:
      case 46:
      case 56:
      case 59:
      case 60:
      case 67:
      case 74:
      case 93:
        v6 = *((_DWORD *)this + 1);
        if ( v6 )
        {
          v7 = *((_DWORD *)this + 3);
          if ( v7 )
          {
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
            v6 = *((_DWORD *)this + 1);
          }
          *((_DWORD *)this + 3) = v6;
          v8 = (unsigned int)CTimer::m_snTimeInMilliseconds | 0x7D000000000LL;
          *((_BYTE *)this + 24) = 1;
          *((_QWORD *)this + 2) = v8;
          *((_DWORD *)this + 1) = 0;
        }
        v11 = *((_DWORD *)this + 2);
        v10 = (int *)((char *)this + 8);
        v9 = v11;
        if ( v11 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
        result = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a3 + 20))(a3);
        goto LABEL_10;
      default:
        v12 = *((_DWORD *)this + 1);
        if ( v12 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
        v13 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a3 + 20))(a3);
        v14 = *((_DWORD *)this + 3);
        *((_DWORD *)this + 1) = v13;
        if ( v14 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
        v16 = *((_DWORD *)this + 2);
        v10 = (int *)((char *)this + 8);
        v15 = v16;
        result = 0;
        v10[1] = 0;
        if ( v16 )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 4))(v15);
          result = 0;
          *v10 = 0;
        }
        else
        {
LABEL_10:
          *v10 = result;
        }
        break;
    }
  }
  return result;
}


// ============================================================

// Address: 0x37b47c
// Original: _ZN20CEventHandlerHistory14ClearTempEventEv
// Demangled: CEventHandlerHistory::ClearTempEvent(void)
int __fastcall CEventHandlerHistory::ClearTempEvent(CEventHandlerHistory *this)
{
  int v2; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  result = 0;
  *((_DWORD *)this + 2) = 0;
  return result;
}


// ============================================================

// Address: 0x37b494
// Original: _ZN20CEventHandlerHistory17ClearNonTempEventEv
// Demangled: CEventHandlerHistory::ClearNonTempEvent(void)
int __fastcall CEventHandlerHistory::ClearNonTempEvent(CEventHandlerHistory *this)
{
  int v2; // r0
  int result; // r0

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  result = 0;
  *((_DWORD *)this + 1) = 0;
  return result;
}


// ============================================================

// Address: 0x37b4ac
// Original: _ZNK20CEventHandlerHistory23GetCurrentEventPriorityEv
// Demangled: CEventHandlerHistory::GetCurrentEventPriority(void)
int __fastcall CEventHandlerHistory::GetCurrentEventPriority(CEventHandlerHistory *this)
{
  int v2; // r0
  bool v3; // zf

  v2 = *((_DWORD *)this + 2);
  v3 = v2 == 0;
  if ( !v2 )
  {
    v2 = *((_DWORD *)this + 1);
    v3 = v2 == 0;
  }
  if ( v3 )
    return -1;
  else
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
}


// ============================================================

// Address: 0x37b4c6
// Original: _ZNK20CEventHandlerHistory15GetCurrentEventEv
// Demangled: CEventHandlerHistory::GetCurrentEvent(void)
int __fastcall CEventHandlerHistory::GetCurrentEvent(CEventHandlerHistory *this)
{
  int result; // r0

  result = *((_DWORD *)this + 2);
  if ( !result )
    return *((_DWORD *)this + 1);
  return result;
}


// ============================================================

// Address: 0x37b4d2
// Original: _ZNK20CEventHandlerHistory20GetStoredActiveEventEv
// Demangled: CEventHandlerHistory::GetStoredActiveEvent(void)
int __fastcall CEventHandlerHistory::GetStoredActiveEvent(CEventHandlerHistory *this)
{
  return *((_DWORD *)this + 3);
}


// ============================================================

// Address: 0x37b4d8
// Original: _ZN20CEventHandlerHistory29TakesPriorityOverCurrentEventERK6CEvent
// Demangled: CEventHandlerHistory::TakesPriorityOverCurrentEvent(CEvent const&)
int __fastcall CEventHandlerHistory::TakesPriorityOverCurrentEvent(CEventHandlerHistory *this, const CEvent *a2)
{
  int result; // r0
  int v5; // r6
  int v6; // r1

  if ( *((_DWORD *)this + 1) )
    return (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 48))(a2);
  if ( !*((_DWORD *)this + 2) )
    return 1;
  v5 = 1;
  switch ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 12:
    case 13:
    case 33:
    case 44:
    case 46:
    case 56:
    case 59:
    case 60:
    case 67:
    case 74:
    case 93:
      break;
    default:
      v5 = 0;
      break;
  }
  v6 = (*(int (__fastcall **)(const CEvent *, _DWORD))(*(_DWORD *)a2 + 48))(a2, *((_DWORD *)this + 2));
  result = v5 & v6;
  if ( !v5 && v6 )
  {
    if ( *((_DWORD *)this + 3) )
      return (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 48))(a2);
    return 1;
  }
  return result;
}


// ============================================================
