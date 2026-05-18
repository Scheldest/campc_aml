// ADDR: 0x85c48
// SYMBOL: sub_85C48
int __fastcall sub_85C48(int a1, int a2, int a3, float a4, __int64 *a5)
{
  double v6; // d16
  void *v7; // r0
  __int64 v8; // d16
  double v10; // [sp+8h] [bp-18h] BYREF
  void *v11; // [sp+10h] [bp-10h]

  v6 = *(double *)a3;
  v7 = *(void **)(a3 + 8);
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v11 = v7;
  v10 = v6;
  sub_7E210(a1, 2, a2, (int)&v10, a4);
  if ( LOBYTE(v10) << 31 )
    operator delete(v11);
  *(_DWORD *)a1 = &off_1115BC;
  v8 = *a5;
  *(_DWORD *)(a1 + 100) = *((_DWORD *)a5 + 2);
  *(_QWORD *)(a1 + 92) = v8;
  return a1;
}


// ======================================================================
