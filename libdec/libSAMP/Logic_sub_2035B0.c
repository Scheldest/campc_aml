// ADDR: 0x20f4c2
// SYMBOL: sub_20F4C2
int __fastcall sub_20F4C2(int a1, int *a2)
{
  int v3; // r1

  v3 = *a2;
  *a2 = 0;
  sub_1FFCD8(a1, v3);
  *(_DWORD *)(a1 + 4) = a2[1];
  return a1;
}


// ======================================================================
