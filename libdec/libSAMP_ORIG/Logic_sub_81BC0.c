// ADDR: 0x7e024
// SYMBOL: sub_7E024
_DWORD *__fastcall sub_7E024(_DWORD *a1, int a2, int a3)
{
  double v4; // d16
  double v6; // [sp+8h] [bp-18h] BYREF
  void *v7; // [sp+10h] [bp-10h]

  v4 = *(double *)a3;
  v7 = *(void **)(a3 + 8);
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v6 = v4;
  sub_849F8(a1, 0, 1, a2, &v6);
  if ( LOBYTE(v6) << 31 )
    operator delete(v7);
  *a1 = &off_111198;
  return a1;
}


// ======================================================================
