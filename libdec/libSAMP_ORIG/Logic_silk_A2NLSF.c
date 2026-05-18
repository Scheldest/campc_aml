// ADDR: 0xd3468
// SYMBOL: sub_D3468
int __fastcall sub_D3468(int a1, int a2, int a3)
{
  int result; // r0
  int v5; // lr
  int v6; // r1
  int v7; // r2
  __int64 v8; // kr00_8
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  __int64 v13; // kr10_8
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r6
  bool v19; // cc

  result = *(_DWORD *)(a1 + 4 * a3);
  v5 = 16 * a2;
  if ( a3 == 8 )
  {
    v6 = a2 << 20;
    v7 = ((v5 >> 15) + 1) >> 1;
    v8 = *(_QWORD *)(a1 + 24);
    v9 = SHIWORD(result) * SHIWORD(v6) + result * v7 + (((unsigned __int16)result * (v6 >> 16)) >> 16) + HIDWORD(v8);
    v10 = SHIWORD(v9) * SHIWORD(v6) + v8 + v9 * v7 + (((unsigned __int16)v9 * (v6 >> 16)) >> 16);
    v11 = SHIWORD(v10) * SHIWORD(v6) + *(_DWORD *)(a1 + 20) + v10 * v7 + (((unsigned __int16)v10 * (v6 >> 16)) >> 16);
    v12 = SHIWORD(v11) * SHIWORD(v6) + *(_DWORD *)(a1 + 16) + v11 * v7 + (((unsigned __int16)v11 * (v6 >> 16)) >> 16);
    v13 = *(_QWORD *)(a1 + 8);
    v14 = SHIWORD(v12) * SHIWORD(v6) + HIDWORD(v13) + v12 * v7 + (((unsigned __int16)v12 * (v6 >> 16)) >> 16);
    v15 = SHIWORD(v14) * SHIWORD(v6) + v13 + v14 * v7 + (((unsigned __int16)v14 * (v6 >> 16)) >> 16);
    v16 = SHIWORD(v15) * SHIWORD(v6) + *(_DWORD *)(a1 + 4) + v15 * v7 + (((unsigned __int16)v15 * (v6 >> 16)) >> 16);
    return SHIWORD(v16) * SHIWORD(v6) + *(_DWORD *)a1 + v16 * v7 + (((unsigned __int16)v16 * (v6 >> 16)) >> 16);
  }
  else if ( a3 >= 1 )
  {
    v17 = (__int16)(16 * a2);
    do
    {
      v18 = *(_DWORD *)(a1 - 4 + 4 * a3);
      v19 = a3-- <= 1;
      result = (__int16)v17 * SHIWORD(result)
             + result * (((v5 >> 15) + 1) >> 1)
             + (((unsigned __int16)result * v17) >> 16)
             + v18;
    }
    while ( !v19 );
  }
  return result;
}


// ======================================================================
