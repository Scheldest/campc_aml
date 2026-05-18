// ADDR: 0x135804
// SYMBOL: sub_135804
void __fastcall sub_135804(int a1, float *a2, int a3)
{
  int v4; // r4
  unsigned int v5; // r0
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r0
  double v9; // d16
  _BYTE v10[8]; // [sp+4h] [bp-2Ch] BYREF
  void *v11; // [sp+Ch] [bp-24h]
  double v12; // [sp+10h] [bp-20h] BYREF
  void *v13; // [sp+18h] [bp-18h]

  *(_DWORD *)(a1 + 132) = a2;
  *(_DWORD *)(a1 + 136) = a3;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 116);
    std::to_string((std::__ndk1 *)v10, *a2);
    v5 = *(unsigned __int8 *)(a1 + 120);
    v6 = *(_DWORD *)(a1 + 128);
    v7 = *(_DWORD *)(a1 + 124);
    if ( (v5 & 1) == 0 )
    {
      v6 = a1 + 121;
      v7 = v5 >> 1;
    }
    v8 = std::string::insert(v10, 0, v6, v7);
    v9 = *(double *)v8;
    v13 = *(void **)(v8 + 8);
    v12 = v9;
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0;
    *(_DWORD *)(v8 + 8) = 0;
    sub_13D450(v4, &v12);
    if ( LOBYTE(v12) << 31 )
      operator delete(v13);
    if ( v10[0] << 31 )
      operator delete(v11);
  }
}


// ======================================================================
