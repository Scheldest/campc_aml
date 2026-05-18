// ADDR: 0x20e41c
// SYMBOL: sub_20E41C
_DWORD *__fastcall sub_20E41C(_DWORD *a1, unsigned __int8 *a2, int a3, int a4)
{
  *a1 = &off_2317C4;
  a1[1] = a3 - 1;
  std::__time_put::__time_put(a1 + 2, a2, (int)&off_2317C4, a4);
  *a1 = &off_232234;
  return a1;
}


// ======================================================================
