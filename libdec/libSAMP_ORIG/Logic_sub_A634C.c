// ADDR: 0x8af74
// SYMBOL: sub_8AF74
int __fastcall sub_8AF74(int result, int a2)
{
  int v2; // lr
  int v3; // r2
  int v4; // r1
  int v5; // r1

  v2 = *(_DWORD *)(dword_1ACF68 + 6608);
  v3 = dword_1ACF68 + 6608;
  *(_BYTE *)(dword_1ACF68 + 6620) = v2 != result;
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
    if ( v4 == result || *(_DWORD *)(v3 + 248) == result || *(_DWORD *)(v3 + 252) == result )
    {
      *(_DWORD *)(v3 + 40) = 2;
    }
    else
    {
      v5 = 1;
      if ( *(_DWORD *)(v3 + 256) == result )
        v5 = 2;
      *(_DWORD *)(v3 + 40) = v5;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x8afec
// SYMBOL: sub_8AFEC
int __fastcall sub_8AFEC(int a1, int a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // r3
  float v5; // s0
  float *v6; // r0
  float v7; // s2
  float v8; // s8
  float v9; // s10
  float v10; // s0
  float v11; // s2
  int result; // r0

  v2 = *(_DWORD *)(a2 + 304);
  v3 = dword_1ACF68 + 6648;
  if ( *(_DWORD *)(dword_1ACF68 + 6836) != a2 )
    *(_BYTE *)(dword_1ACF68 + 6937) = 0;
  *(_DWORD *)(v3 + 192) = a1;
  *(_DWORD *)(v3 + 276) = v2;
  *(_DWORD *)(a2 + 4 * v2 + 780) = a1;
  v4 = *(_DWORD *)(a2 + 264);
  *(_DWORD *)(v3 + 188) = a2;
  if ( v4 == a1 )
  {
    v5 = *(float *)(a2 + 12);
    v6 = (float *)(a2 + 16 * v2);
    v7 = *(float *)(a2 + 16);
    v8 = *(float *)(a2 + 280) - v5;
    v9 = *(float *)(a2 + 284) - v7;
    v10 = *(float *)(a2 + 272) - v5;
    v11 = *(float *)(a2 + 276) - v7;
    v6[199] = v8;
    v6[200] = v9;
    v6[197] = v10;
    v6[198] = v11;
  }
  result = 1;
  if ( *(_DWORD *)v3 == 2 )
    *(_BYTE *)(v3 + 287) = 1;
  else
    *(_BYTE *)(v3 + 286) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x8b080
// SYMBOL: sub_8B080
int sub_8B080()
{
  int v0; // r2
  int result; // r0

  v0 = *(_DWORD *)(dword_1ACF68 + 6608);
  result = dword_1ACF68 + 6608;
  *(_BYTE *)(dword_1ACF68 + 6620) = v0 != 0;
  if ( v0 )
  {
    *(_WORD *)(result + 14) = 0;
    *(_DWORD *)(result + 8) = 0;
  }
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_BYTE *)(result + 13) = 0;
  *(_BYTE *)(result + 16) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x8b0b4
// SYMBOL: sub_8B0B4
int __fastcall sub_8B0B4(int result)
{
  bool v1; // zf
  int v2; // r1
  int v3; // r1

  v1 = result == 0;
  v2 = dword_1ACF68;
  *(_DWORD *)(dword_1ACF68 + 6588) = result;
  v3 = v2 + 6588;
  *(_BYTE *)(v3 + 4) = 0;
  if ( result )
    v1 = *(_DWORD *)(v3 + 8) == result;
  if ( !v1 )
  {
    result = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 16) = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x8b914
// SYMBOL: sub_8B914
int __fastcall sub_8B914(float *a1, int a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r2
  bool v5; // zf
  int v6; // lr
  _DWORD *v7; // r12
  int v8; // r2
  bool v9; // zf
  float v10; // s2
  float v11; // s4
  float v12; // s2
  float v13; // s10
  float v14; // s1
  float v15; // s12
  int result; // r0
  float v17; // s8
  int v18; // r0
  bool v19; // zf
  bool v20; // zf
  bool v21; // zf

  v2 = dword_1ACF68;
  v3 = dword_1ACF68 + 5488;
  v4 = *(_DWORD *)(dword_1ACF68 + 6588);
  v5 = v4 == 0;
  if ( v4 )
    v5 = v4 == a2;
  if ( !v5 && !*(_BYTE *)(dword_1ACF68 + 6592) )
    return 0;
  v6 = *(_DWORD *)(dword_1ACF68 + 6572);
  if ( *(_DWORD *)(dword_1ACF68 + 6576) != v6 )
    return 0;
  v7 = (_DWORD *)(dword_1ACF68 + 6600);
  v8 = *(_DWORD *)(dword_1ACF68 + 6608);
  v9 = v8 == 0;
  if ( v8 )
    v9 = v8 == a2;
  if ( !v9 && !*(_BYTE *)(dword_1ACF68 + 6621) )
    return 0;
  v10 = *(float *)(v6 + 528);
  if ( *a1 >= v10 )
    v10 = *a1;
  v11 = v10 - *(float *)v3;
  v12 = *(float *)(dword_1ACF68 + 224);
  if ( v12 < v11 )
    return 0;
  v13 = a1[1];
  v14 = *(float *)(v6 + 532);
  v15 = a1[2];
  result = 0;
  v17 = *(float *)(v6 + 536);
  if ( v13 >= v14 )
    v14 = v13;
  if ( v15 < v17 )
    v17 = v15;
  if ( *(float *)(dword_1ACF68 + 228) >= (float)(v14 - *(float *)(dword_1ACF68 + 5492))
    && v12 < (float)(v17 + *(float *)v3) )
  {
    if ( !*(_BYTE *)(dword_1ACF68 + 6935) )
    {
      v18 = *(_DWORD *)(dword_1ACF68 + 6836);
      v19 = v18 == 0;
      if ( v18 )
      {
        v18 = *(_DWORD *)(v18 + 764);
        v19 = v18 == 0;
      }
      if ( v19 )
        goto LABEL_33;
      v20 = *(_BYTE *)(v18 + 123) == 0;
      if ( *(_BYTE *)(v18 + 123) )
        v20 = v18 == *(_DWORD *)(v6 + 764);
      if ( v20 || (*(_BYTE *)(v18 + 11) & 0xC) == 0 )
      {
LABEL_33:
        result = 0;
        if ( (*(_BYTE *)(v6 + 364) & 4) == 0 )
        {
          *(_BYTE *)(dword_1ACF68 + 6592) = 0;
          v21 = a2 == 0;
          *(_DWORD *)(v3 + 1100) = a2;
          if ( a2 )
            v21 = *(_DWORD *)(v3 + 1108) == a2;
          if ( !v21 )
          {
            *v7 = 0;
            *(_DWORD *)(v2 + 6604) = 0;
          }
          return 1;
        }
        return result;
      }
    }
    return 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x95424
// SYMBOL: sub_95424
int __fastcall sub_95424(float a1, float a2, float a3, float a4)
{
  int result; // r0

  if ( a1 == 0.0 )
    return 1;
  result = 0;
  if ( a1 > a3 )
    return ((int)(float)((float)(a1 - a3) / a4) - (int)(float)((float)(a2 - a3) / a4)) & ~(((int)(float)((float)(a1 - a3) / a4)
                                                                                          - (int)(float)((float)(a2 - a3) / a4)) >> 31);
  return result;
}


// ======================================================================
// ADDR: 0x95510
// SYMBOL: sub_95510
bool __fastcall sub_95510(int a1, int a2)
{
  float v2; // s0
  _BOOL4 result; // r0
  bool v4; // zf
  float v5; // s2

  v2 = *(float *)(dword_1ACF68 + 4 * a1 + 1012);
  result = 0;
  v4 = v2 == 0.0;
  if ( v2 == 0.0 )
    result = 1;
  else
    v4 = a2 == 0;
  if ( !v4 )
  {
    v5 = *(float *)(dword_1ACF68 + 136);
    return v2 > v5
        && (int)(float)((float)(v2 - v5) / (float)(*(float *)(dword_1ACF68 + 140) * 0.5)) > (int)(float)((float)((float)(v2 - *(float *)(dword_1ACF68 + 24)) - v5) / (float)(*(float *)(dword_1ACF68 + 140) * 0.5));
  }
  return result;
}


// ======================================================================
