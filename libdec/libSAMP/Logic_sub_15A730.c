// ADDR: 0x155b74
// SYMBOL: sub_155B74
void __fastcall sub_155B74(int a1, int a2, unsigned __int8 *a3)
{
  char *v4; // r1
  void *v5[5]; // [sp+4h] [bp-14h] BYREF

  v4 = (char *)*((_DWORD *)a3 + 2);
  if ( !(*a3 << 31) )
    v4 = (char *)(a3 + 1);
  sub_DC6DC(v5, v4);
  sub_15E4BC(a2, v5);
  if ( LOBYTE(v5[0]) << 31 )
    operator delete(v5[2]);
}


// ======================================================================
