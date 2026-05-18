// ADDR: 0x20f2fa
// SYMBOL: sub_20F2FA
int __fastcall sub_20F2FA(int a1, int *a2)
{
  int v3; // r1

  v3 = *a2;
  *a2 = 0;
  sub_1F33B0(a1, v3);
  *(_DWORD *)(a1 + 4) = a2[1];
  return a1;
}


// ======================================================================
