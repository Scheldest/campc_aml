// ADDR: 0xf74c6
// SYMBOL: sub_F74C6
int __fastcall sub_F74C6(int a1, int *a2)
{
  int v3; // r1

  v3 = *a2;
  *a2 = 0;
  sub_F7474(a1, v3);
  *(_DWORD *)(a1 + 4) = a2[1];
  return a1;
}


// ======================================================================
