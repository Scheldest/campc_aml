// ADDR: 0x1107a0
// SYMBOL: sub_1107A0
int __fastcall sub_1107A0(int a1, int a2, __int16 a3)
{
  int v6; // r0

  ((void (*)(void))sub_1107DC)();
  v6 = sub_110808(a1, a2);
  *(_WORD *)(sub_110840(a2, v6) + 32) = a3;
  sub_1107DC(a1, a2);
  return sub_110874(a1, a2);
}


// ======================================================================
