// ADDR: 0x7e210
// SYMBOL: sub_7E210
int __fastcall sub_7E210(int a1, int a2, int a3, int a4, float a5)
{
  double v6; // d16
  double v8; // [sp+8h] [bp-20h] BYREF
  void *v9; // [sp+10h] [bp-18h]

  v6 = *(double *)a4;
  v9 = *(void **)(a4 + 8);
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)(a4 + 8) = 0;
  v8 = v6;
  sub_849F8(a1, 40, a2, a3, &v8);
  if ( LOBYTE(v8) << 31 )
    operator delete(v9);
  *(float *)(a1 + 88) = a5;
  *(_DWORD *)a1 = &off_1111BC;
  return a1;
}


// ======================================================================
