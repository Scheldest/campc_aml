// ADDR: 0x158e30
// SYMBOL: sub_158E30
int __fastcall sub_158E30(int a1, int a2, int a3, int a4, int a5, int a6, float a7)
{
  int result; // r0
  char *exception; // r4
  int v9; // r0

  result = sub_164C20(*(_DWORD *)(a1 + 8), a2, a3, a4, a5, a6, a7);
  if ( !result )
  {
    exception = (char *)j___cxa_allocate_exception(0x18u);
    v9 = sub_1649EC(exception);
    sub_1545C8(exception, "BASS_ChannelSet3DAttributes", v9);
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'BassException, (void (*)(void *))sub_15466C);
  }
  return result;
}


// ======================================================================
