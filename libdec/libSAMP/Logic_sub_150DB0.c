// ADDR: 0x150c8c
// SYMBOL: sub_150C8C
int __fastcall sub_150C8C(int result, int a2)
{
  if ( *(_BYTE *)(result + 72) )
    return sub_158E30(
             a2,
             0,
             *(_DWORD *)(result + 76),
             *(_DWORD *)(result + 80),
             *(_DWORD *)(result + 84),
             *(_DWORD *)(result + 88),
             *(float *)(result + 92));
  return result;
}


// ======================================================================
// ADDR: 0x158de4
// SYMBOL: sub_158DE4
int __fastcall sub_158DE4(int a1)
{
  int result; // r0
  char *exception; // r4
  int v3; // r0

  result = sub_164C50(*(_DWORD *)(a1 + 8));
  if ( !result )
  {
    exception = (char *)j___cxa_allocate_exception(0x18u);
    v3 = sub_1649EC(exception);
    sub_1545C8(exception, "BASS_ChannelSet3DPosition", v3);
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'BassException, (void (*)(void *))sub_15466C);
  }
  return result;
}


// ======================================================================
