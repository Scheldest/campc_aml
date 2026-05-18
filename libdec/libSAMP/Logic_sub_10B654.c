// ADDR: 0x115e8c
// SYMBOL: sub_115E8C
_DWORD *__fastcall sub_115E8C(_DWORD *a1)
{
  void *v3[5]; // [sp+4h] [bp-14h] BYREF

  sub_DC6DC(v3, "arzhud_bg");
  sub_11754C(a1, v3);
  if ( LOBYTE(v3[0]) << 31 )
    operator delete(v3[2]);
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  *a1 = &off_22BBD4;
  return a1;
}


// ======================================================================
