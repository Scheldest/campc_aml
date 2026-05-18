// ADDR: 0xfc860
// SYMBOL: sub_FC860
_WORD *__fastcall sub_FC860(int a1, int a2)
{
  int v4; // r0

  v4 = sub_108874(a2, 100);
  *(_BYTE *)a1 = v4 + 48;
  return sub_FC84C((_WORD *)(a1 + 1), a2 - 100 * v4);
}


// ======================================================================
