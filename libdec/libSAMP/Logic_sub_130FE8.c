// ADDR: 0x12ff60
// SYMBOL: sub_12FF60
int __fastcall sub_12FF60(int a1, int a2, char a3)
{
  int v6; // r4

  v6 = operator new(0x78u);
  sub_13CE34(v6, a2, 0);
  *(_BYTE *)(v6 + 116) = a3;
  *(_DWORD *)(v6 + 112) = 0;
  *(_DWORD *)v6 = &off_22DF1C;
  sub_12BDF6(a1, v6);
  return v6;
}


// ======================================================================
