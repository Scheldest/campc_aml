// ADDR: 0x68e3c
// SYMBOL: sub_68E3C
int sub_68E3C()
{
  int v1; // r0
  int v2; // [sp+0h] [bp-18h] BYREF

  if ( dword_1A4400 )
  {
    (*(void (__fastcall **)(int, int *, int))(*(_DWORD *)dword_1A4400 + 24))(dword_1A4400, &v2, 65540);
    return v2;
  }
  else
  {
    v1 = (unsigned __int8)byte_1A4240;
    __dmb(0xBu);
    if ( !(v1 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4240) )
    {
      byte_1A423E = 90;
      word_1A423C = 14124;
      dword_1A4238 = 2050698299;
      dword_1A4234 = 813315348;
      _cxa_atexit((void (*)(void *))sub_6ACF2, &dword_1A4234, &off_110560);
      j___cxa_guard_release((__guard *)&byte_1A4240);
    }
    if ( byte_1A423E )
    {
      LOBYTE(dword_1A4234) = dword_1A4234 ^ 0x5A;
      BYTE1(dword_1A4234) ^= 0x5Au;
      BYTE2(dword_1A4234) ^= 0x5Au;
      HIBYTE(dword_1A4234) ^= 0x5Au;
      LOBYTE(dword_1A4238) = dword_1A4238 ^ 0x5A;
      BYTE1(dword_1A4238) ^= 0x5Au;
      BYTE2(dword_1A4238) ^= 0x5Au;
      HIBYTE(dword_1A4238) ^= 0x5Au;
      byte_1A423E ^= 0x5Au;
      LOBYTE(word_1A423C) = word_1A423C ^ 0x5A;
      HIBYTE(word_1A423C) ^= 0x5Au;
    }
    _android_log_print(4, "SAMP_ORIG", (const char *)&dword_1A4234);
    return 0;
  }
}


// ======================================================================
// ADDR: 0x69070
// SYMBOL: sub_69070
int __fastcall sub_69070(int a1)
{
  int v2; // [sp+8h] [bp-10h]

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 248))(a1);
  return v2;
}


// ======================================================================
// ADDR: 0x6c8b8
// SYMBOL: sub_6C8B8
bool __fastcall sub_6C8B8(int a1)
{
  if ( *(_DWORD *)(dword_1A4408 + 2350828) )
    return *(_BYTE *)(a1 + 80) != 0;
  _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
  _android_log_print(4, "SAMP_ORIG", "SAMP::isWidgetVisible: UI pointer is null");
  return 0;
}


// ======================================================================
// ADDR: 0x6c90c
// SYMBOL: sub_6C90C
int __fastcall sub_6C90C(int result, char a2)
{
  if ( *(_DWORD *)(dword_1A4408 + 2350828) )
  {
    *(_BYTE *)(result + 80) = a2;
  }
  else
  {
    _android_log_print(4, "SAMP_ORIG", "UI pointer is null");
    return sub_10C158(4, "SAMP_ORIG", "SAMP::setWidgetVisible: UI pointer is null");
  }
  return result;
}


// ======================================================================
// ADDR: 0x10c158
// SYMBOL: sub_10C158
int __fastcall sub_10C158(int prio, const char *tag, const char *fmt)
{
  return _android_log_print(prio, tag, fmt);
}


// ======================================================================
