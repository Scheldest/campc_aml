
// Address: 0x18a9a0
// Original: j__ZN14COnscreenTimer4InitEv
// Demangled: COnscreenTimer::Init(void)
// attributes: thunk
int __fastcall COnscreenTimer::Init(COnscreenTimer *this)
{
  return _ZN14COnscreenTimer4InitEv(this);
}


// ============================================================

// Address: 0x18c76c
// Original: j__ZN14COnscreenTimer12ClearCounterEj
// Demangled: COnscreenTimer::ClearCounter(uint)
// attributes: thunk
int __fastcall COnscreenTimer::ClearCounter(COnscreenTimer *this, unsigned int a2)
{
  return _ZN14COnscreenTimer12ClearCounterEj(this, a2);
}


// ============================================================

// Address: 0x18e21c
// Original: j__ZN14COnscreenTimer10ClearClockEj
// Demangled: COnscreenTimer::ClearClock(uint)
// attributes: thunk
int __fastcall COnscreenTimer::ClearClock(COnscreenTimer *this, unsigned int a2)
{
  return _ZN14COnscreenTimer10ClearClockEj(this, a2);
}


// ============================================================

// Address: 0x18ebe8
// Original: j__ZN14COnscreenTimer17ProcessForDisplayEv
// Demangled: COnscreenTimer::ProcessForDisplay(void)
// attributes: thunk
int __fastcall COnscreenTimer::ProcessForDisplay(COnscreenTimer *this)
{
  return _ZN14COnscreenTimer17ProcessForDisplayEv(this);
}


// ============================================================

// Address: 0x190084
// Original: j__ZN14COnscreenTimer10AddCounterEjtPct
// Demangled: COnscreenTimer::AddCounter(uint,ushort,char *,ushort)
// attributes: thunk
int __fastcall COnscreenTimer::AddCounter(
        COnscreenTimer *this,
        unsigned int a2,
        unsigned __int16 a3,
        char *a4,
        unsigned __int16 a5)
{
  return _ZN14COnscreenTimer10AddCounterEjtPct(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19093c
// Original: j__ZN14COnscreenTimer7ProcessEv
// Demangled: COnscreenTimer::Process(void)
// attributes: thunk
int __fastcall COnscreenTimer::Process(COnscreenTimer *this)
{
  return _ZN14COnscreenTimer7ProcessEv(this);
}


// ============================================================

// Address: 0x191fdc
// Original: j__ZN14COnscreenTimer25SetClockBeepCountdownSecsEjj
// Demangled: COnscreenTimer::SetClockBeepCountdownSecs(uint,uint)
// attributes: thunk
int __fastcall COnscreenTimer::SetClockBeepCountdownSecs(COnscreenTimer *this, unsigned int a2, unsigned int a3)
{
  return _ZN14COnscreenTimer25SetClockBeepCountdownSecsEjj(this, a2, a3);
}


// ============================================================

// Address: 0x193dbc
// Original: j__ZN14COnscreenTimer8AddClockEjPcb
// Demangled: COnscreenTimer::AddClock(uint,char *,bool)
// attributes: thunk
int __fastcall COnscreenTimer::AddClock(COnscreenTimer *this, unsigned int a2, char *a3, bool a4)
{
  return _ZN14COnscreenTimer8AddClockEjPcb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19a2e4
// Original: j__ZN14COnscreenTimer33SetCounterFlashWhenFirstDisplayedEjh
// Demangled: COnscreenTimer::SetCounterFlashWhenFirstDisplayed(uint,uchar)
// attributes: thunk
int __fastcall COnscreenTimer::SetCounterFlashWhenFirstDisplayed(
        COnscreenTimer *this,
        unsigned int a2,
        unsigned __int8 a3)
{
  return _ZN14COnscreenTimer33SetCounterFlashWhenFirstDisplayedEjh(this, a2, a3);
}


// ============================================================

// Address: 0x314d3c
// Original: _ZN14COnscreenTimer4InitEv
// Demangled: COnscreenTimer::Init(void)
int __fastcall COnscreenTimer::Init(int this)
{
  *(_BYTE *)(this + 126) = 0;
  *(_BYTE *)(this + 337) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_BYTE *)(this + 127) = 1;
  *(_DWORD *)(this + 148) = 0;
  *(_BYTE *)(this + 194) = 0;
  *(_BYTE *)(this + 195) = 1;
  *(_BYTE *)(this + 262) = 0;
  *(_DWORD *)(this + 216) = 0;
  *(_BYTE *)(this + 263) = 1;
  *(_BYTE *)(this + 330) = 0;
  *(_BYTE *)(this + 331) = 1;
  *(_DWORD *)(this + 284) = 0;
  *(_QWORD *)(this + 64) = 0LL;
  *(_QWORD *)(this + 72) = 0LL;
  *(_QWORD *)(this + 132) = 0LL;
  *(_QWORD *)(this + 140) = 0LL;
  *(_QWORD *)(this + 200) = 0LL;
  *(_QWORD *)(this + 208) = 0LL;
  *(_QWORD *)(this + 268) = 0LL;
  *(_QWORD *)(this + 276) = 0LL;
  *(_DWORD *)this = 0;
  *(_DWORD *)(this + 4) = 0;
  *(_WORD *)(this + 56) = 256;
  *(_DWORD *)(this + 10) = 0;
  *(_DWORD *)(this + 6) = 0;
  *(_DWORD *)(this + 60) = 12;
  return this;
}


// ============================================================

// Address: 0x314db0
// Original: _ZN14COnscreenTimer17ProcessForDisplayEv
// Demangled: COnscreenTimer::ProcessForDisplay(void)
int __fastcall COnscreenTimer::ProcessForDisplay(COnscreenTimer *this)
{
  int result; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r2
  unsigned int v9; // r0
  int v10; // r0
  int v11; // r2
  unsigned int v12; // r0
  int v13; // r2
  int v14; // r0
  unsigned int v15; // r1

  result = (unsigned __int8)CHud::m_Wants_To_Draw_Hud;
  if ( CHud::m_Wants_To_Draw_Hud )
  {
    v3 = *(_DWORD *)this;
    *((_BYTE *)this + 56) = 0;
    *((_BYTE *)this + 336) = 0;
    if ( v3 )
    {
      sub_5E6BC0(
        (char *)this + 14,
        "%02d:%02d",
        *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v3) / 60000 % 100,
        *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v3) / 1000 % 60);
      *((_BYTE *)this + 56) = 1;
      *((_BYTE *)this + 336) = 1;
    }
    v4 = *((_DWORD *)this + 16);
    *((_BYTE *)this + 126) = 0;
    if ( v4 )
    {
      v5 = *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v4);
      v6 = *((unsigned __int16 *)this + 41);
      if ( v5 <= 0 )
        v5 = 0;
      if ( v6 >= 2 )
      {
        if ( v6 == 2 )
          sub_5E6BC0(
            (char *)this + 84,
            "%d / %d",
            v5,
            *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *((_DWORD *)this + 17)));
      }
      else
      {
        sub_5E6BC0((char *)this + 84, (const char *)&dword_314FA4, v5);
      }
      *((_BYTE *)this + 336) = 1;
      *((_BYTE *)this + 126) = 1;
    }
    v7 = *((_DWORD *)this + 33);
    *((_BYTE *)this + 194) = 0;
    if ( v7 )
    {
      v8 = *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v7);
      v9 = *((unsigned __int16 *)this + 75);
      if ( v8 <= 0 )
        v8 = 0;
      if ( v9 >= 2 )
      {
        if ( v9 == 2 )
          sub_5E6BC0(
            (char *)this + 152,
            "%d / %d",
            v8,
            *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *((_DWORD *)this + 34)));
      }
      else
      {
        sub_5E6BC0((char *)this + 152, (const char *)&dword_314FA4, v8);
      }
      *((_BYTE *)this + 336) = 1;
      *((_BYTE *)this + 194) = 1;
    }
    v10 = *((_DWORD *)this + 50);
    *((_BYTE *)this + 262) = 0;
    if ( v10 )
    {
      v11 = *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v10);
      v12 = *((unsigned __int16 *)this + 109);
      if ( v11 <= 0 )
        v11 = 0;
      if ( v12 >= 2 )
      {
        if ( v12 == 2 )
          sub_5E6BC0(
            (char *)this + 220,
            "%d / %d",
            v11,
            *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *((_DWORD *)this + 51)));
      }
      else
      {
        sub_5E6BC0((char *)this + 220, (const char *)&dword_314FA4, v11);
      }
      *((_BYTE *)this + 336) = 1;
      *((_BYTE *)this + 262) = 1;
    }
    result = *((_DWORD *)this + 67);
    v13 = 0;
    *((_BYTE *)this + 330) = 0;
    if ( result )
    {
      v14 = *(_DWORD *)((char *)&CTheScripts::ScriptSpace + result);
      v15 = *((unsigned __int16 *)this + 143);
      if ( v14 > 0 )
        v13 = v14;
      if ( v15 >= 2 )
      {
        if ( v15 == 2 )
          sub_5E6BC0(
            (char *)this + 288,
            "%d / %d",
            v13,
            *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *((_DWORD *)this + 68)));
      }
      else
      {
        sub_5E6BC0((char *)this + 288, (const char *)&dword_314FA4);
      }
      result = 1;
      *((_BYTE *)this + 336) = 1;
      *((_BYTE *)this + 330) = 1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x314fd4
// Original: _ZN14COnscreenTimer7ProcessEv
// Demangled: COnscreenTimer::Process(void)
unsigned int __fastcall COnscreenTimer::Process(unsigned int this)
{
  int v1; // r1
  int v2; // r12
  unsigned int v3; // r3

  if ( !*(_BYTE *)(this + 337) )
  {
    v1 = *(_DWORD *)this;
    if ( *(_DWORD *)this )
    {
      v2 = *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v1);
      v3 = (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
      if ( *(_BYTE *)(this + 57) )
      {
        *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v1) = v2 - v3;
        if ( *(int *)((char *)&CTheScripts::ScriptSpace + *(_DWORD *)this) <= -1 )
        {
          *(_DWORD *)((char *)&CTheScripts::ScriptSpace + *(_DWORD *)this) = 0;
          *(_BYTE *)(this + 4) = 0;
          *(_DWORD *)this = 0;
          *(_BYTE *)(this + 56) = 0;
        }
        else
        {
          this = *(_DWORD *)(this + 60);
          if ( v2 / 1000 < this )
          {
            this = (unsigned __int8)byte_951FE3;
            if ( !byte_951FE3 )
              return j_CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 33, 0.0, 1.0);
          }
        }
      }
      else
      {
        this = (unsigned int)&CTheScripts::ScriptSpace;
        *(_DWORD *)((char *)&CTheScripts::ScriptSpace + v1) = v2 + v3;
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x3150ac
// Original: _ZN14COnscreenTimer8AddClockEjPcb
// Demangled: COnscreenTimer::AddClock(uint,char *,bool)
char *__fastcall COnscreenTimer::AddClock(char *this, unsigned int a2, char *a3, char a4)
{
  if ( !*(_DWORD *)this )
  {
    this[57] = a4;
    *(_DWORD *)this = a2;
    this += 4;
    if ( a3 )
      return sub_19F770(this, a3, 0xAu);
    else
      *this = 0;
  }
  return this;
}


// ============================================================

// Address: 0x3150d2
// Original: _ZN14COnscreenTimer10AddCounterEjtPct
// Demangled: COnscreenTimer::AddCounter(uint,ushort,char *,ushort)
_DWORD *__fastcall COnscreenTimer::AddCounter(
        COnscreenTimer *this,
        unsigned int a2,
        unsigned __int16 a3,
        char *a4,
        int a5)
{
  char *v6; // r5
  _DWORD *result; // r0
  char *v8; // r0

  v6 = (char *)this + 68 * a5;
  result = v6 + 64;
  if ( !*((_DWORD *)v6 + 16) )
  {
    *result = a2;
    v8 = v6 + 72;
    if ( a4 )
      strncpy(v8, a4, 0xAu);
    else
      *v8 = 0;
    *((_WORD *)v6 + 41) = a3;
    *((_DWORD *)v6 + 17) = 0;
    result = elf_hash_bucket + 517;
    *(_WORD *)(v6 + 127) = 769;
  }
  return result;
}


// ============================================================

// Address: 0x315116
// Original: _ZN14COnscreenTimer17AddCounterCounterEjjPct
// Demangled: COnscreenTimer::AddCounterCounter(uint,uint,char *,ushort)
_DWORD *__fastcall COnscreenTimer::AddCounterCounter(
        COnscreenTimer *this,
        unsigned int a2,
        unsigned int a3,
        char *a4,
        int a5)
{
  char *v5; // r5
  _DWORD *result; // r0
  char *v7; // r0

  v5 = (char *)this + 68 * a5;
  result = v5 + 64;
  if ( !*((_DWORD *)v5 + 16) )
  {
    *result = a2;
    v7 = v5 + 72;
    *((_DWORD *)v5 + 17) = a3;
    if ( a4 )
      strncpy(v7, a4, 0xAu);
    else
      *v7 = 0;
    v5[127] = 1;
    result = &stderr + 2;
    *((_WORD *)v5 + 41) = 2;
  }
  return result;
}


// ============================================================

// Address: 0x315158
// Original: _ZN14COnscreenTimer10ClearClockEj
// Demangled: COnscreenTimer::ClearClock(uint)
int __fastcall COnscreenTimer::ClearClock(int this, unsigned int a2)
{
  if ( *(_DWORD *)this == a2 )
  {
    *(_BYTE *)(this + 4) = 0;
    *(_DWORD *)this = 0;
    *(_BYTE *)(this + 56) = 0;
    *(_BYTE *)(this + 57) = 1;
  }
  return this;
}


// ============================================================

// Address: 0x315172
// Original: _ZN14COnscreenTimer12ClearCounterEj
// Demangled: COnscreenTimer::ClearCounter(uint)
int __fastcall COnscreenTimer::ClearCounter(int this, unsigned int a2)
{
  if ( *(_DWORD *)(this + 64) == a2 )
  {
    *(_BYTE *)(this + 72) = 0;
    *(_WORD *)(this + 82) = 0;
    *(_BYTE *)(this + 126) = 0;
    *(_DWORD *)(this + 64) = 0;
    *(_DWORD *)(this + 68) = 0;
  }
  if ( *(_DWORD *)(this + 132) == a2 )
  {
    *(_BYTE *)(this + 140) = 0;
    *(_WORD *)(this + 150) = 0;
    *(_BYTE *)(this + 194) = 0;
    *(_DWORD *)(this + 132) = 0;
    *(_DWORD *)(this + 136) = 0;
  }
  if ( *(_DWORD *)(this + 200) == a2 )
  {
    *(_BYTE *)(this + 208) = 0;
    *(_WORD *)(this + 218) = 0;
    *(_BYTE *)(this + 262) = 0;
    *(_DWORD *)(this + 200) = 0;
    *(_DWORD *)(this + 204) = 0;
  }
  if ( *(_DWORD *)(this + 268) == a2 )
  {
    *(_BYTE *)(this + 276) = 0;
    *(_WORD *)(this + 286) = 0;
    *(_BYTE *)(this + 330) = 0;
    *(_DWORD *)(this + 268) = 0;
    *(_DWORD *)(this + 272) = 0;
  }
  return this;
}


// ============================================================

// Address: 0x3151dc
// Original: _ZN14COnscreenTimer33SetCounterFlashWhenFirstDisplayedEjh
// Demangled: COnscreenTimer::SetCounterFlashWhenFirstDisplayed(uint,uchar)
int __fastcall COnscreenTimer::SetCounterFlashWhenFirstDisplayed(int this, unsigned int a2, unsigned __int8 a3)
{
  if ( *(_DWORD *)(this + 64) == a2 )
    *(_BYTE *)(this + 127) = a3;
  if ( *(_DWORD *)(this + 132) == a2 )
    *(_BYTE *)(this + 195) = a3;
  if ( *(_DWORD *)(this + 200) == a2 )
    *(_BYTE *)(this + 263) = a3;
  if ( *(_DWORD *)(this + 268) == a2 )
    *(_BYTE *)(this + 331) = a3;
  return this;
}


// ============================================================

// Address: 0x31520c
// Original: _ZN14COnscreenTimer25SetClockBeepCountdownSecsEjj
// Demangled: COnscreenTimer::SetClockBeepCountdownSecs(uint,uint)
_DWORD *__fastcall COnscreenTimer::SetClockBeepCountdownSecs(_DWORD *this, unsigned int a2, unsigned int a3)
{
  if ( *this == a2 )
    this[15] = a3;
  return this;
}


// ============================================================

// Address: 0x315216
// Original: _ZN14COnscreenTimer18SetCounterColourIDEjh
// Demangled: COnscreenTimer::SetCounterColourID(uint,uchar)
int __fastcall COnscreenTimer::SetCounterColourID(int this, unsigned int a2, unsigned __int8 a3)
{
  if ( *(_DWORD *)(this + 64) == a2 )
    *(_BYTE *)(this + 128) = a3;
  if ( *(_DWORD *)(this + 132) == a2 )
    *(_BYTE *)(this + 196) = a3;
  if ( *(_DWORD *)(this + 200) == a2 )
    *(_BYTE *)(this + 264) = a3;
  if ( *(_DWORD *)(this + 268) == a2 )
    *(_BYTE *)(this + 332) = a3;
  return this;
}


// ============================================================

// Address: 0x4896c8
// Original: _ZN14COnscreenTimer4SaveEv
// Demangled: COnscreenTimer::Save(void)
void __fastcall COnscreenTimer::Save(COnscreenTimer *this)
{
  CGenericGameStorage *v2; // r5
  __int64 v3; // d16
  __int64 v4; // d17
  __int64 v5; // d19
  __int64 v6; // d22
  __int64 v7; // d23
  __int64 v8; // d20
  __int64 v9; // d21
  int v10; // r2
  void *v11; // r5
  int v12; // r2

  v2 = (CGenericGameStorage *)malloc(0x40u);
  v3 = *(_QWORD *)this;
  v4 = *((_QWORD *)this + 1);
  v5 = *((_QWORD *)this + 7);
  v6 = *((_QWORD *)this + 2);
  v7 = *((_QWORD *)this + 3);
  v8 = *((_QWORD *)this + 4);
  v9 = *((_QWORD *)this + 5);
  *((_QWORD *)v2 + 6) = *((_QWORD *)this + 6);
  *((_QWORD *)v2 + 7) = v5;
  *((_QWORD *)v2 + 4) = v8;
  *((_QWORD *)v2 + 5) = v9;
  *(_QWORD *)v2 = v3;
  *((_QWORD *)v2 + 1) = v4;
  *((_QWORD *)v2 + 2) = v6;
  *((_QWORD *)v2 + 3) = v7;
  CGenericGameStorage::_SaveDataToWorkBuffer(v2, &dword_40, v10);
  free(v2);
  v11 = malloc(0x110u);
  memcpy_1(v11, (char *)this + 64, 0x110u);
  CGenericGameStorage::_SaveDataToWorkBuffer((CGenericGameStorage *)v11, &elf_hash_bucket[5], v12);
  j_free(v11);
}


// ============================================================

// Address: 0x48a700
// Original: _ZN14COnscreenTimer4LoadEv
// Demangled: COnscreenTimer::Load(void)
int __fastcall COnscreenTimer::Load(COnscreenTimer *this, int a2, int a3)
{
  int v4; // r2

  CGenericGameStorage::_LoadDataFromWorkBuffer(this, &dword_40, a3);
  return sub_193B88((COnscreenTimer *)((char *)this + 64), &elf_hash_bucket[5], v4);
}


// ============================================================
