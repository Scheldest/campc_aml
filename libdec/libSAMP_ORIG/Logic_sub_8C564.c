// ADDR: 0x8c628
// SYMBOL: sub_8C628
int __fastcall sub_8C628(int a1)
{
  int v2; // r6
  int v3; // r0
  int result; // r0
  int v5; // r5
  int v6; // r12
  int v7; // r1
  bool v8; // zf
  int v9; // r3
  int v10; // r1
  _DWORD *v11; // r4
  int v12; // r2
  int v13; // r1
  int v14; // r3
  int v15; // r2
  int v16; // r12
  _DWORD *v17; // r4
  int v18; // r1
  int v19; // r2
  bool v20; // zf
  int v21; // r1
  int i; // r2

  v2 = dword_1ACF68 + 6608;
  if ( *(_DWORD *)(dword_1ACF68 + 6836) != a1 )
  {
    *(_DWORD *)(dword_1ACF68 + 6836) = a1;
    if ( a1 )
    {
      if ( *(_BYTE *)(v2 + 327) )
        *(_BYTE *)(v2 + 325) = 1;
      v3 = *(_DWORD *)(a1 + 780);
      *(_BYTE *)(v2 + 329) = 0;
    }
    else
    {
      v3 = 0;
      *(_BYTE *)(v2 + 329) = 0;
    }
    *(_DWORD *)(v2 + 232) = v3;
    *(_BYTE *)(v2 + 324) = 0;
    *(_DWORD *)(v2 + 316) = 0;
  }
  result = sub_8CC0C(a1, 0);
  if ( !a1 )
    return result;
  v5 = *(_DWORD *)(a1 + 764);
  if ( !v5 )
    v5 = a1;
  v6 = *(_DWORD *)(v5 + 8);
  if ( (v6 & 0x4000000) != 0 && *(_DWORD *)v2 )
  {
    v7 = *(_DWORD *)(v2 + 36);
    v8 = v7 == 0;
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 764) == v5;
    if ( !v8 )
    {
      v9 = *(_DWORD *)(dword_1ACF68 + 6608);
      v10 = dword_1ACF68 + 6608;
      *(_BYTE *)(dword_1ACF68 + 6620) = v9 != 0;
      if ( v9 )
      {
        *(_WORD *)(v10 + 14) = 0;
        *(_DWORD *)(v10 + 8) = 0;
      }
      *(_DWORD *)(v10 + 20) = 0;
      *(_DWORD *)(v10 + 24) = 0;
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 36) = 0;
      *(_BYTE *)(v10 + 13) = 0;
      *(_BYTE *)(v10 + 16) = 0;
    }
  }
  v11 = (_DWORD *)(dword_1ACF68 + 6520);
  v12 = *(_DWORD *)(dword_1ACF68 + 6520);
  v13 = *(_DWORD *)(dword_1ACF68 + 6528) + 4 * v12;
  if ( *(_DWORD *)(v13 - 4) == v5 || v12 < 2 )
  {
LABEL_24:
    result = v6 << 18;
    if ( (v6 & 0x2000) != 0 )
      return result;
    goto LABEL_27;
  }
  v14 = v12 - 1;
  v15 = 0;
  while ( *(_DWORD *)(v13 + v15 - 8) != v5 )
  {
    --v14;
    v15 -= 4;
    if ( v14 <= 0 )
      goto LABEL_24;
  }
  j_memmove((void *)(v13 + v15 - 8), (const void *)(v13 + v15 - 4), 4 - v15);
  v16 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v11[2] + 4 * *v11 - 4) = v5;
  result = v16 << 18;
  if ( (v16 & 0x2000) == 0 )
  {
LABEL_27:
    v17 = (_DWORD *)(dword_1ACF68 + 6508);
    v18 = *(_DWORD *)(dword_1ACF68 + 6508);
    result = *(_DWORD *)(dword_1ACF68 + 6516) + 4 * v18;
    v19 = *(_DWORD *)(result - 4);
    v20 = v19 == v5;
    if ( v19 != v5 )
      v20 = *(_DWORD *)(v19 + 764) == v5;
    if ( !v20 && v18 >= 2 )
    {
      v21 = v18 - 1;
      for ( i = 0; *(_DWORD *)(result + i - 8) != v5; i -= 4 )
      {
        if ( --v21 <= 0 )
          return result;
      }
      j_memmove((void *)(result + i - 8), (const void *)(result + i - 4), 4 - i);
      result = v17[2] + 4 * *v17;
      *(_DWORD *)(result - 4) = v5;
    }
  }
  return result;
}


// ======================================================================
