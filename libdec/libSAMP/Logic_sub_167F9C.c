// ADDR: 0x166ecc
// SYMBOL: sub_166ECC
int __fastcall sub_166ECC(int result, int a2)
{
  int v2; // lr
  int v3; // r2
  int v4; // r1
  bool v5; // zf
  int v6; // r1

  v2 = *(_DWORD *)(dword_381B58 + 6608);
  v3 = dword_381B58 + 6608;
  *(_BYTE *)(dword_381B58 + 6620) = v2 != result;
  if ( v2 != result )
  {
    *(_WORD *)(v3 + 14) = 0;
    *(_DWORD *)(v3 + 8) = 0;
    if ( result )
    {
      *(_DWORD *)(v3 + 56) = result;
      *(_DWORD *)(v3 + 60) = 0;
    }
  }
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)v3 = result;
  *(_DWORD *)(v3 + 36) = a2;
  *(_BYTE *)(v3 + 13) = 0;
  *(_BYTE *)(v3 + 16) = 0;
  if ( result )
  {
    v4 = *(_DWORD *)(v3 + 236);
    *(_DWORD *)(v3 + 4) = result;
    v5 = v4 == result;
    if ( v4 != result )
      v5 = *(_DWORD *)(v3 + 248) == result;
    if ( v5 || *(_DWORD *)(v3 + 252) == result )
    {
      v6 = 2;
    }
    else
    {
      v6 = 1;
      if ( *(_DWORD *)(v3 + 256) == result )
        v6 = 2;
    }
    *(_DWORD *)(v3 + 40) = v6;
  }
  return result;
}


// ======================================================================
// ADDR: 0x168010
// SYMBOL: sub_168010
int __fastcall sub_168010(int a1)
{
  int v2; // r6
  int v3; // r0
  int result; // r0
  int *v5; // r1
  int v6; // r4
  int v7; // r0
  int v8; // r2
  int v9; // r0

  v2 = dword_381B58 + 6608;
  if ( *(_DWORD *)(dword_381B58 + 6836) != a1 )
  {
    *(_DWORD *)(dword_381B58 + 6836) = a1;
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
  result = sub_1683F8(a1, 0);
  if ( a1 )
  {
    v5 = &dword_381B58;
    v6 = *(_DWORD *)(a1 + 764);
    if ( !v6 )
      v6 = a1;
    if ( (*(_BYTE *)(v6 + 11) & 4) != 0 )
    {
      if ( *(_DWORD *)v2 )
      {
        v7 = *(_DWORD *)(v2 + 36);
        if ( v7 )
        {
          if ( *(_DWORD *)(v7 + 764) != v6 )
          {
            v8 = *(_DWORD *)(dword_381B58 + 6608);
            v9 = dword_381B58 + 6608;
            *(_BYTE *)(dword_381B58 + 6620) = v8 != 0;
            if ( v8 )
            {
              *(_WORD *)(v9 + 14) = 0;
              *(_DWORD *)(v9 + 8) = 0;
            }
            v5 = 0;
            *(_DWORD *)(v9 + 20) = 0;
            *(_DWORD *)(v9 + 24) = 0;
            *(_DWORD *)v9 = 0;
            *(_DWORD *)(v9 + 36) = 0;
            *(_BYTE *)(v9 + 13) = 0;
            *(_BYTE *)(v9 + 16) = 0;
          }
        }
      }
    }
    sub_16FDB0(v6, v5);
    result = *(unsigned __int8 *)(v6 + 9) << 26;
    if ( (*(_BYTE *)(v6 + 9) & 0x20) == 0 )
      return sub_16FE18(v6);
  }
  return result;
}


// ======================================================================
