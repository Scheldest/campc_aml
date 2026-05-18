// ADDR: 0x13cebc
// SYMBOL: sub_13CEBC
_DWORD *__fastcall sub_13CEBC(_DWORD *a1, unsigned __int8 *a2, float a3)
{
  char *v5; // r2
  void *v7[7]; // [sp+4h] [bp-1Ch] BYREF

  v5 = (char *)*((_DWORD *)a2 + 2);
  if ( !(*a2 << 31) )
    v5 = (char *)(a2 + 1);
  sub_DC6DC(v7, v5);
  sub_13CE34(a1, (int)v7, a3);
  if ( LOBYTE(v7[0]) << 31 )
    operator delete(v7[2]);
  return a1;
}


// ======================================================================
