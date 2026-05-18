// ADDR: 0x85944
// SYMBOL: sub_85944
int __fastcall sub_85944(int a1, int a2, int a3, float a4, __int16 a5)
{
  double v6; // d16
  void *v7; // r0
  double v9; // [sp+8h] [bp-18h] BYREF
  void *v10; // [sp+10h] [bp-10h]

  v6 = *(double *)a3;
  v7 = *(void **)(a3 + 8);
  *(_DWORD *)a3 = 0;
  *(_DWORD *)(a3 + 4) = 0;
  *(_DWORD *)(a3 + 8) = 0;
  v10 = v7;
  v9 = v6;
  sub_7E210(a1, 4, a2, (int)&v9, a4);
  if ( LOBYTE(v9) << 31 )
    operator delete(v10);
  *(_WORD *)(a1 + 92) = a5;
  *(_DWORD *)a1 = &off_111598;
  return a1;
}


// ======================================================================
