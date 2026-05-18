// ADDR: 0x20e458
// SYMBOL: sub_20E458
_DWORD *__fastcall sub_20E458(_DWORD *a1, unsigned __int8 *a2, int a3, int a4)
{
  *a1 = &off_2317C4;
  a1[1] = a3 - 1;
  std::__time_put::__time_put(a1 + 2, a2, (int)&off_2317C4, a4);
  *a1 = &off_232274;
  return a1;
}


// ======================================================================
