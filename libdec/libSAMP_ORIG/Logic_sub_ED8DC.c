// ADDR: 0xf652c
// SYMBOL: sub_F652C
_DWORD *__fastcall sub_F652C(_DWORD *a1, unsigned __int8 *a2, int a3, int a4)
{
  *a1 = &off_111DB4;
  a1[1] = a3 - 1;
  std::__time_put::__time_put(a1 + 2, a2, (int)&off_111DB4, a4);
  *a1 = &off_112824;
  return a1;
}


// ======================================================================
