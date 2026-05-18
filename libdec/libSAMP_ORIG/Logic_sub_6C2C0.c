// ADDR: 0x600b0
// SYMBOL: sub_600B0
_BYTE *__fastcall sub_600B0(_BYTE *result)
{
  *result = 0;
  byte_1174AF = 0;
  return result;
}


// ======================================================================
// ADDR: 0x600c0
// SYMBOL: sub_600C0
bool __fastcall sub_600C0(_BYTE *a1)
{
  int v2; // r5

  dword_117394 = 0;
  off_1ABEDC();
  v2 = off_1ABED8(-1, 44100, 0);
  if ( v2 )
  {
    off_1ABEE0(16, "SA-MP/0.3");
    off_1ABEE4(21, 1);
    off_1ABEE4(11, 10000);
    *a1 = 1;
  }
  return v2 != 0;
}


// ======================================================================
// ADDR: 0x6014c
// SYMBOL: sub_6014C
int sub_6014C()
{
  int result; // r0
  int v1; // r1

  result = (unsigned __int8)byte_1174AE;
  if ( byte_1174AE )
  {
    v1 = 0;
    if ( !*(_BYTE *)(dword_1A4404 + 9876756) )
      v1 = 5000;
    return off_1ABEE4(5, v1);
  }
  return result;
}


// ======================================================================
// ADDR: 0x68f78
// SYMBOL: sub_68F78
int sub_68F78()
{
  int v0; // r0
  int v1; // r0
  int result; // r0
  int v3; // r0
  int v4; // r0

  if ( sub_68E3C() )
  {
    v0 = sub_69070();
    v1 = sub_6C808(v0);
    result = sub_6C8B8(*(_DWORD *)(v1 + 108));
    if ( result )
    {
      v3 = sub_6C808(result);
      return sub_6C90C(*(_DWORD *)(v3 + 108), 0);
    }
  }
  else
  {
    v4 = (unsigned __int8)byte_1A424C;
    __dmb(0xBu);
    if ( !(v4 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A424C) )
    {
      byte_1A424A = 90;
      word_1A4248 = 11316;
      dword_1A4244 = 1064973588;
      _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A4244, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A424C);
    }
    if ( byte_1A424A )
    {
      byte_1A424A ^= 0x5Au;
      LOBYTE(dword_1A4244) = dword_1A4244 ^ 0x5A;
      BYTE1(dword_1A4244) ^= 0x5Au;
      BYTE2(dword_1A4244) ^= 0x5Au;
      LOBYTE(word_1A4248) = word_1A4248 ^ 0x5A;
      HIBYTE(dword_1A4244) ^= 0x5Au;
      HIBYTE(word_1A4248) ^= 0x5Au;
    }
    return sub_10C158(4, "SAMP_ORIG", &dword_1A4244);
  }
  return result;
}


// ======================================================================
// ADDR: 0x692a8
// SYMBOL: sub_692A8
int sub_692A8()
{
  int v0; // r0
  int v2; // r0

  v0 = sub_68E3C();
  if ( v0 )
    return sub_69070(v0);
  v2 = (unsigned __int8)byte_1A4270;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4270) )
  {
    byte_1A426E = 90;
    word_1A426C = 11316;
    dword_1A4268 = 1064973588;
    _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A4268, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A4270);
  }
  if ( byte_1A426E )
  {
    byte_1A426E ^= 0x5Au;
    LOBYTE(dword_1A4268) = dword_1A4268 ^ 0x5A;
    BYTE1(dword_1A4268) ^= 0x5Au;
    BYTE2(dword_1A4268) ^= 0x5Au;
    LOBYTE(word_1A426C) = word_1A426C ^ 0x5A;
    HIBYTE(dword_1A4268) ^= 0x5Au;
    HIBYTE(word_1A426C) ^= 0x5Au;
  }
  return sub_10C158(4, "SAMP_ORIG", &dword_1A4268);
}


// ======================================================================
// ADDR: 0x69a58
// SYMBOL: sub_69A58
int sub_69A58()
{
  int result; // r0

  result = sub_68E3C();
  if ( result )
    return sub_69070(result);
  return result;
}


// ======================================================================
// ADDR: 0x69a82
// SYMBOL: sub_69A82
int sub_69A82()
{
  int result; // r0

  result = sub_68E3C();
  if ( result )
    return sub_69070(result);
  return result;
}


// ======================================================================
// ADDR: 0x80664
// SYMBOL: sub_80664
int sub_80664(const char *a1, ...)
{
  char v3[256]; // [sp+8h] [bp-114h] BYREF
  int v4; // [sp+108h] [bp-14h]
  int vars8; // [sp+124h] [bp+8h] BYREF
  va_list va; // [sp+124h] [bp+8h]
  int varsC; // [sp+128h] [bp+Ch]
  va_list va1; // [sp+12Ch] [bp+10h] BYREF

  va_start(va1, a1);
  va_start(va, a1);
  vars8 = va_arg(va1, _DWORD);
  varsC = va_arg(va1, _DWORD);
  if ( !dword_1A49D4 && dword_1A4404 != -7170172 )
  {
    sub_80734(v3, 7170172, varsC, dword_1A4404 + 7170172, "svlog.txt");
    dword_1A49D4 = (int)fopen(v3, "w");
  }
  sub_10967C((int)v3, 0xFFu);
  vsnprintf(v3, 0xFFu, a1, va);
  _android_log_write(4, "SAMP_ORIG", v3);
  if ( dword_1A49D4 )
  {
    fprintf((FILE *)dword_1A49D4, "%s\n", v3);
    fflush((FILE *)dword_1A49D4);
  }
  return v4;
}


// ======================================================================
