
// Address: 0x18bc88
// Original: j__ZN6CClock12RestoreClockEv
// Demangled: CClock::RestoreClock(void)
// attributes: thunk
int __fastcall CClock::RestoreClock(CClock *this)
{
  return _ZN6CClock12RestoreClockEv(this);
}


// ============================================================

// Address: 0x18ca74
// Original: j__ZN6CClock6UpdateEv
// Demangled: CClock::Update(void)
// attributes: thunk
int __fastcall CClock::Update(CClock *this)
{
  return _ZN6CClock6UpdateEv(this);
}


// ============================================================

// Address: 0x18df00
// Original: j__ZN6CClock12SetGameClockEhhh
// Demangled: CClock::SetGameClock(uchar,uchar,uchar)
// attributes: thunk
int __fastcall CClock::SetGameClock(CClock *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  return _ZN6CClock12SetGameClockEhhh(this, a2, a3, a4);
}


// ============================================================

// Address: 0x192e00
// Original: j__ZN6CClock17OffsetClockByADayEj
// Demangled: CClock::OffsetClockByADay(uint)
// attributes: thunk
int __fastcall CClock::OffsetClockByADay(CClock *this, unsigned int a2)
{
  return _ZN6CClock17OffsetClockByADayEj(this, a2);
}


// ============================================================

// Address: 0x1956a0
// Original: j__ZN6CClock16GetIsTimeInRangeEhh
// Demangled: CClock::GetIsTimeInRange(uchar,uchar)
// attributes: thunk
int __fastcall CClock::GetIsTimeInRange(CClock *this, unsigned __int8 a2, unsigned __int8 a3)
{
  return _ZN6CClock16GetIsTimeInRangeEhh(this, a2, a3);
}


// ============================================================

// Address: 0x196e74
// Original: j__ZN6CClock10StoreClockEv
// Demangled: CClock::StoreClock(void)
// attributes: thunk
int __fastcall CClock::StoreClock(CClock *this)
{
  return _ZN6CClock10StoreClockEv(this);
}


// ============================================================

// Address: 0x19aeec
// Original: j__ZN6CClock24GetGameClockMinutesUntilEhh
// Demangled: CClock::GetGameClockMinutesUntil(uchar,uchar)
// attributes: thunk
int __fastcall CClock::GetGameClockMinutesUntil(CClock *this, unsigned __int8 a2, unsigned __int8 a3)
{
  return _ZN6CClock24GetGameClockMinutesUntilEhh(this, a2, a3);
}


// ============================================================

// Address: 0x19f53c
// Original: j__ZN6CClock10InitialiseEj
// Demangled: CClock::Initialise(uint)
// attributes: thunk
int __fastcall CClock::Initialise(CClock *this, unsigned int a2)
{
  return _ZN6CClock10InitialiseEj(this, a2);
}


// ============================================================

// Address: 0x3e2fd0
// Original: _ZN6CClock10InitialiseEj
// Demangled: CClock::Initialise(uint)
int __fastcall CClock::Initialise(CClock *this, unsigned int a2)
{
  int result; // r0

  CClock::ms_nMillisecondsPerGameMinute = (int)this;
  CClock::ms_nGameClockMonths = 1;
  CClock::ms_nGameClockDays = 1;
  CClock::ms_nGameClockHours = 12;
  CClock::ms_nGameClockMinutes = 0;
  CClock::ms_nGameClockSeconds = 0;
  CClock::bClockHasBeenStored = 0;
  result = CTimer::m_snTimeInMilliseconds;
  CClock::CurrentDay = 4;
  CClock::ms_nLastClockTick = CTimer::m_snTimeInMilliseconds;
  return result;
}


// ============================================================

// Address: 0x3e3070
// Original: _ZN6CClock12SetGameClockEhhh
// Demangled: CClock::SetGameClock(uchar,uchar,uchar)
char *__fastcall CClock::SetGameClock(CClock *this, unsigned int a2, int a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r1
  int v5; // r1
  char v6; // r2
  __int64 v7; // r2
  char *result; // r0

  CClock::ms_nGameClockHours = (char)this;
  CClock::ms_nGameClockMinutes = a2;
  CClock::ms_nLastClockTick = CTimer::m_snTimeInMilliseconds;
  if ( a3 )
  {
    CClock::CurrentDay = a3;
    ++CClock::ms_nGameClockDays;
  }
  CClock::ms_nGameClockSeconds = 0;
  if ( a2 >= 0x3C )
  {
    v4 = a2 - 60;
    this = (CClock *)((char *)this + v4 / 0x3Cu + 1);
    CClock::ms_nGameClockHours = (char)this;
    CClock::ms_nGameClockMinutes = v4 % 0x3Cu;
  }
  LOBYTE(v5) = CClock::ms_nGameClockDays;
  if ( (unsigned __int8)this >= 0x18u )
  {
    v6 = 23 - (_BYTE)this;
    if ( (unsigned __int8)(23 - (_BYTE)this) <= 0xE8u )
      v6 = -24;
    v7 = 2863311531LL * (unsigned __int8)(v6 + (_BYTE)this);
    v5 = (unsigned __int8)CClock::ms_nGameClockDays + (HIDWORD(v7) >> 4) + 1;
    CClock::ms_nGameClockDays += (HIDWORD(v7) >> 4) + 1;
    CClock::ms_nGameClockHours = (_BYTE)this - 24 * (HIDWORD(v7) >> 4) - 24;
  }
  LOBYTE(result) = CClock::ms_nGameClockMonths;
  if ( (unsigned __int8)v5 > 0x1Fu )
  {
    LOBYTE(result) = CClock::ms_nGameClockMonths + 1;
    CClock::ms_nGameClockDays = 1;
    ++CClock::ms_nGameClockMonths;
  }
  result = (char *)(unsigned __int8)result;
  if ( (unsigned __int8)result > 0xCu )
  {
    result = &CClock::ms_nGameClockMonths;
    CClock::ms_nGameClockMonths = 1;
  }
  return result;
}


// ============================================================

// Address: 0x3e31c0
// Original: _ZN6CClock18NormaliseGameClockEv
// Demangled: CClock::NormaliseGameClock(void)
char *__fastcall CClock::NormaliseGameClock(CClock *this)
{
  unsigned __int8 v1; // r1
  unsigned int v2; // r0
  unsigned __int8 v3; // r1
  int v4; // r1
  char v5; // r2
  __int64 v6; // r2
  char *result; // r0

  v1 = CClock::ms_nGameClockMinutes;
  if ( (unsigned __int16)CClock::ms_nGameClockSeconds >= 0x3Cu )
  {
    v1 = CClock::ms_nGameClockMinutes + (unsigned __int16)(CClock::ms_nGameClockSeconds - 60) / 0x3Cu + 1;
    CClock::ms_nGameClockMinutes = v1;
    CClock::ms_nGameClockSeconds = (unsigned __int16)(CClock::ms_nGameClockSeconds - 60) % 0x3Cu;
  }
  LOBYTE(v2) = CClock::ms_nGameClockHours;
  if ( v1 >= 0x3Cu )
  {
    v3 = v1 - 60;
    v2 = (unsigned __int8)CClock::ms_nGameClockHours + v3 / 0x3Cu + 1;
    CClock::ms_nGameClockHours += v3 / 0x3Cu + 1;
    CClock::ms_nGameClockMinutes = v3 % 0x3Cu;
  }
  LOBYTE(v4) = CClock::ms_nGameClockDays;
  if ( (unsigned __int8)v2 >= 0x18u )
  {
    v5 = 23 - v2;
    if ( (unsigned __int8)(23 - v2) <= 0xE8u )
      v5 = -24;
    v6 = 2863311531LL * (unsigned __int8)(v5 + v2);
    v4 = (unsigned __int8)CClock::ms_nGameClockDays + (HIDWORD(v6) >> 4) + 1;
    CClock::ms_nGameClockDays += (HIDWORD(v6) >> 4) + 1;
    CClock::ms_nGameClockHours = v2 - 24 * (HIDWORD(v6) >> 4) - 24;
  }
  LOBYTE(result) = CClock::ms_nGameClockMonths;
  if ( (unsigned __int8)v4 > 0x1Fu )
  {
    LOBYTE(result) = CClock::ms_nGameClockMonths + 1;
    CClock::ms_nGameClockDays = 1;
    ++CClock::ms_nGameClockMonths;
  }
  result = (char *)(unsigned __int8)result;
  if ( (unsigned __int8)result > 0xCu )
  {
    result = &CClock::ms_nGameClockMonths;
    CClock::ms_nGameClockMonths = 1;
  }
  return result;
}


// ============================================================

// Address: 0x3e3310
// Original: _ZN6CClock24GetGameClockMinutesUntilEhh
// Demangled: CClock::GetGameClockMinutesUntil(uchar,uchar)
unsigned int __fastcall CClock::GetGameClockMinutesUntil(CClock *this, int a2, unsigned __int8 a3)
{
  unsigned int v3; // r0
  unsigned int v4; // r2

  v3 = a2 + 60 * (_DWORD)this;
  v4 = (unsigned __int8)CClock::ms_nGameClockMinutes + 60 * (unsigned __int8)CClock::ms_nGameClockHours;
  if ( v3 < v4 )
    v3 += 1440;
  return v3 - v4;
}


// ============================================================

// Address: 0x3e3344
// Original: _ZN6CClock16GetIsTimeInRangeEhh
// Demangled: CClock::GetIsTimeInRange(uchar,uchar)
int __fastcall CClock::GetIsTimeInRange(CClock *this, unsigned int a2, unsigned __int8 a3)
{
  int result; // r0

  if ( (unsigned int)this <= a2 )
    return (unsigned __int8)CClock::ms_nGameClockHours >= (unsigned int)this
        && (unsigned __int8)CClock::ms_nGameClockHours < a2;
  result = 1;
  if ( (unsigned __int8)CClock::ms_nGameClockHours < (unsigned int)this )
    return (unsigned __int8)CClock::ms_nGameClockHours < a2;
  return result;
}


// ============================================================

// Address: 0x3e3378
// Original: _ZN6CClock6UpdateEv
// Demangled: CClock::Update(void)
unsigned int __fastcall CClock::Update(CClock *this)
{
  int v1; // r1
  int v2; // r2
  char v3; // r4
  int v4; // r2
  char v5; // r0
  unsigned int result; // r0

  v1 = CTimer::m_snTimeInMilliseconds;
  v2 = (unsigned __int8)byte_796806;
  if ( byte_796806 )
    v2 = 1;
  if ( v2 | (CTimer::m_snTimeInMilliseconds - CClock::ms_nLastClockTick > CClock::ms_nMillisecondsPerGameMinute)
    && !(((unsigned __int8)byte_796834 | (unsigned __int8)byte_796833) << 24) )
  {
    v3 = CClock::ms_nGameClockMinutes;
    if ( !byte_796806 )
      v1 = CClock::ms_nLastClockTick + CClock::ms_nMillisecondsPerGameMinute;
    CClock::ms_nLastClockTick = v1;
    ++CClock::ms_nGameClockMinutes;
    if ( (unsigned __int8)(v3 + 1) >= 0x3Cu )
    {
      CClock::ms_nGameClockMinutes = 0;
      if ( (unsigned __int8)++CClock::ms_nGameClockHours >= 0x18u )
      {
        CClock::ms_nGameClockHours = 0;
        ++CClock::ms_nGameClockDays;
        v4 = (unsigned __int8)CClock::CurrentDay + 1;
        if ( CClock::CurrentDay == 7 )
          v4 = 1;
        CClock::CurrentDay = v4;
        CStats::IncrementStat((CStats *)((char *)&dword_84 + 2), 0, *(float *)&v4);
        if ( (unsigned __int8)CClock::ms_nGameClockDays >= (unsigned int)CClock::daysInMonth[(unsigned __int8)CClock::ms_nGameClockMonths
                                                                                           - 1] )
        {
          v5 = CClock::ms_nGameClockMonths + 1;
          if ( (unsigned __int8)(CClock::ms_nGameClockMonths + 1) > 0xCu )
            v5 = 1;
          CClock::ms_nGameClockMonths = v5;
          CClock::ms_nGameClockDays = 1;
        }
      }
    }
  }
  result = 60
         * (CTimer::m_snTimeInMilliseconds - CClock::ms_nLastClockTick)
         / (unsigned int)CClock::ms_nMillisecondsPerGameMinute;
  CClock::ms_nGameClockSeconds = result;
  return result;
}


// ============================================================

// Address: 0x3e34f4
// Original: _ZN6CClock10StoreClockEv
// Demangled: CClock::StoreClock(void)
int __fastcall CClock::StoreClock(CClock *this)
{
  int result; // r0

  CClock::bClockHasBeenStored = 1;
  CClock::ms_Stored_nGameClockMonths = CClock::ms_nGameClockMonths;
  result = (unsigned __int8)CClock::ms_nGameClockHours;
  CClock::ms_Stored_nGameClockHours = CClock::ms_nGameClockHours;
  CClock::ms_Stored_nGameClockDays = CClock::ms_nGameClockDays;
  CClock::ms_Stored_nGameClockMinutes = CClock::ms_nGameClockMinutes;
  CClock::ms_Stored_nGameClockSeconds = CClock::ms_nGameClockSeconds;
  return result;
}


// ============================================================

// Address: 0x3e3598
// Original: _ZN6CClock12RestoreClockEv
// Demangled: CClock::RestoreClock(void)
int __fastcall CClock::RestoreClock(CClock *this)
{
  int result; // r0

  CClock::ms_nGameClockMonths = CClock::ms_Stored_nGameClockMonths;
  result = (unsigned __int8)CClock::ms_Stored_nGameClockHours;
  CClock::ms_nGameClockDays = CClock::ms_Stored_nGameClockDays;
  CClock::ms_nGameClockHours = CClock::ms_Stored_nGameClockHours;
  CClock::ms_nGameClockMinutes = CClock::ms_Stored_nGameClockMinutes;
  CClock::ms_nGameClockSeconds = CClock::ms_Stored_nGameClockSeconds;
  return result;
}


// ============================================================

// Address: 0x3e362c
// Original: _ZN6CClock17OffsetClockByADayEj
// Demangled: CClock::OffsetClockByADay(uint)
int __fastcall CClock::OffsetClockByADay(CClock *this, unsigned int a2)
{
  char v2; // r1
  char v3; // r0
  int result; // r0
  unsigned __int8 v5; // r3

  v2 = CClock::ms_nGameClockDays;
  if ( this )
  {
    ++CClock::ms_nGameClockDays;
    if ( (unsigned __int8)(v2 + 1) > (unsigned int)CClock::daysInMonth[(unsigned __int8)CClock::ms_nGameClockMonths - 1] )
    {
      v3 = CClock::ms_nGameClockMonths + 1;
      if ( (unsigned __int8)(CClock::ms_nGameClockMonths + 1) > 0xCu )
        v3 = 1;
      CClock::ms_nGameClockMonths = v3;
      CClock::ms_nGameClockDays = 1;
    }
    result = (unsigned __int8)CClock::CurrentDay + 1;
    CClock::CurrentDay = result;
    if ( (unsigned __int8)result > 7u )
      result = 1;
  }
  else
  {
    if ( !--CClock::ms_nGameClockDays )
    {
      v5 = CClock::ms_nGameClockMonths - 1;
      if ( CClock::ms_nGameClockMonths == 1 )
        v5 = 12;
      CClock::ms_nGameClockMonths = v5;
      CClock::ms_nGameClockDays = CClock::daysInMonth[v5 - 1];
    }
    result = (unsigned __int8)CClock::CurrentDay-- - 1;
    if ( !(_BYTE)result )
      result = 7;
  }
  CClock::CurrentDay = result;
  return result;
}


// ============================================================
