// ADDR: 0x690b8
// SYMBOL: sub_690B8
int sub_690B8()
{
  int v0; // r0
  int v2; // r0

  v0 = sub_68E3C();
  if ( v0 )
    return sub_69070(v0);
  v2 = (unsigned __int8)byte_1A4258;
  __dmb(0xBu);
  if ( !(v2 << 31) && j___cxa_guard_acquire((__guard *)&byte_1A4258) )
  {
    byte_1A4256 = 90;
    word_1A4254 = 11316;
    dword_1A4250 = 1064973588;
    _cxa_atexit((void (*)(void *))sub_66E8E, &dword_1A4250, &off_110560);
    j___cxa_guard_release((__guard *)&byte_1A4258);
  }
  if ( byte_1A4256 )
  {
    byte_1A4256 ^= 0x5Au;
    LOBYTE(dword_1A4250) = dword_1A4250 ^ 0x5A;
    BYTE1(dword_1A4250) ^= 0x5Au;
    BYTE2(dword_1A4250) ^= 0x5Au;
    LOBYTE(word_1A4254) = word_1A4254 ^ 0x5A;
    HIBYTE(dword_1A4250) ^= 0x5Au;
    HIBYTE(word_1A4254) ^= 0x5Au;
  }
  return sub_10C158(4, "SAMP_ORIG", &dword_1A4250);
}


// ======================================================================
