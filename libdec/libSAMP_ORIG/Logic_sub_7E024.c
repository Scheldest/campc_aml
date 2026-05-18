// ADDR: 0x849f8
// SYMBOL: sub_849F8
int __fastcall sub_849F8(__int64 a1, int a2, int a3, int a4)
{
  int v4; // r4
  double v5; // d16
  double v7; // [sp+0h] [bp-18h] BYREF
  void *v8; // [sp+8h] [bp-10h]

  v4 = a1;
  LODWORD(a1) = &off_111534;
  *(_QWORD *)v4 = a1;
  v5 = *(double *)a4;
  v8 = *(void **)(a4 + 8);
  *(_DWORD *)a4 = 0;
  *(_DWORD *)(a4 + 4) = 0;
  *(_DWORD *)(a4 + 8) = 0;
  v7 = v5;
  sub_86094(v4 + 8, a2, a3, &v7);
  if ( LOBYTE(v7) << 31 )
    operator delete(v8);
  *(_DWORD *)(v4 + 68) = 0;
  *(_DWORD *)(v4 + 64) = v4 + 68;
  *(_DWORD *)(v4 + 80) = 0;
  *(_DWORD *)(v4 + 84) = 0;
  *(_DWORD *)(v4 + 72) = 0;
  *(_DWORD *)(v4 + 76) = v4 + 80;
  *(_QWORD *)(v4 + 28) = 0LL;
  *(_QWORD *)(v4 + 36) = 0LL;
  *(_QWORD *)(v4 + 44) = 0LL;
  *(_QWORD *)(v4 + 52) = 0LL;
  *(_DWORD *)(v4 + 60) = 0;
  return v4;
}


// ======================================================================
