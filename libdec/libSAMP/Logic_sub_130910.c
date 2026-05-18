// ADDR: 0x12fffc
// SYMBOL: sub_12FFFC
int __fastcall sub_12FFFC(int a1, int a2)
{
  int v4; // r4

  v4 = operator new(0x78u);
  sub_13067C(v4, a2);
  sub_12BDF6(a1, v4);
  return v4;
}


// ======================================================================
// ADDR: 0x130fe8
// SYMBOL: sub_130FE8
int __fastcall sub_130FE8(int a1, unsigned __int8 *a2, char a3)
{
  char *v5; // r2
  int v6; // r4
  void *v8[7]; // [sp+4h] [bp-1Ch] BYREF

  v5 = (char *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v5 = (char *)(a2 + 1);
  sub_DC6DC(v8, v5);
  v6 = sub_12FF60(a1, (int)v8, a3);
  if ( LOBYTE(v8[0]) << 31 )
    operator delete(v8[2]);
  return v6;
}


// ======================================================================
