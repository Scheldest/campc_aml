// ADDR: 0x181338
// SYMBOL: sub_181338
int __fastcall sub_181338(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  unsigned int v9; // r1
  int v10; // r6
  unsigned int i; // r5
  int v12; // r0
  int v13; // r1
  __int16 v14; // r5
  int v15; // r3
  int v16; // lr
  int v17; // r1
  int v18; // r0
  unsigned int v19; // r5
  int v20; // r0
  int v21; // [sp+8h] [bp-18h] BYREF
  int v22; // [sp+Ch] [bp-14h]

  v21 = a2;
  v22 = a3;
  result = sub_17E580((int)&v21, (int)&unk_BE944);
  if ( result )
    return result;
  result = *(_DWORD *)(a1 + 832);
  if ( !result || *(_BYTE *)(a1 + 4) )
    return result;
  if ( a4 )
    return sub_1804E8(a1, v21, v22, a5, a6);
  if ( !a5 )
  {
    v12 = sub_182F10(a1 + 1980);
    v13 = *(_DWORD *)(a1 + 1992);
    v14 = v22;
    v15 = v21;
    v16 = *(_DWORD *)(a1 + 2000);
    *(_DWORD *)(v12 + 48) = 0;
    *(_DWORD *)(v12 + 52) = 1;
    *(_BYTE *)(v13 + 56) = 1;
    *(_BYTE *)(v12 + 12) = a6;
    *(_DWORD *)(v12 + 16) = v15;
    *(_WORD *)(v12 + 20) = v14;
    result = *(_DWORD *)(v13 + 60);
    *(_DWORD *)(a1 + 2000) = v16 + 1;
    *(_DWORD *)(a1 + 1992) = result;
    return result;
  }
  v9 = *(unsigned __int16 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 8) )
    return result;
  v10 = 0;
  for ( i = 1; ; ++i )
  {
    if ( !*(_BYTE *)(result + v10) )
      goto LABEL_12;
    result = sub_17E580(result + v10 + 4, (int)&v21);
    if ( result )
      break;
    v9 = *(unsigned __int16 *)(a1 + 8);
LABEL_12:
    if ( i >= v9 )
      return result;
    result = *(_DWORD *)(a1 + 832);
    v10 += 2112;
  }
  v17 = *(_DWORD *)(a1 + 900);
  v18 = *(_DWORD *)(a1 + 832);
  *(_BYTE *)(v18 + v10) = 0;
  if ( v17 )
  {
    v19 = 0;
    do
    {
      v20 = *(_DWORD *)(*(_DWORD *)(a1 + 896) + 4 * v19);
      (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v20 + 24))(v20, a1, v21, v22);
      ++v19;
    }
    while ( v19 < *(_DWORD *)(a1 + 900) );
    v18 = *(_DWORD *)(a1 + 832);
  }
  sub_1876AE(v18 + v10 + 24, 0);
  return sub_182EE6(a1 + 836, &v21);
}


// ======================================================================
