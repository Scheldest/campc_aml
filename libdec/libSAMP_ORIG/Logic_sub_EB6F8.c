// ADDR: 0xf7672
// SYMBOL: sub_F7672
int __fastcall sub_F7672(int a1, int *a2)
{
  int v3; // r1

  v3 = *a2;
  *a2 = 0;
  sub_E7DF8(a1, v3);
  *(_DWORD *)(a1 + 4) = a2[1];
  return a1;
}


// ======================================================================
