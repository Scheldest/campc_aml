// ADDR: 0x12ffb0
// SYMBOL: sub_12FFB0
int __fastcall sub_12FFB0(int a1, int a2, int a3, char a4)
{
  int v8; // r4

  v8 = operator new(0x78u);
  sub_13CE34(v8, a2, 0);
  *(_DWORD *)(v8 + 112) = a3;
  *(_BYTE *)(v8 + 80) = a4;
  *(_DWORD *)v8 = &off_22DF60;
  sub_12BDF6(a1, v8);
  return v8;
}


// ======================================================================
