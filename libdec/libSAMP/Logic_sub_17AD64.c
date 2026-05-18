// ADDR: 0x166f3c
// SYMBOL: sub_166F3C
int __fastcall sub_166F3C(int a1, int a2)
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
  v3 = dword_381B58 + 6648;
  if ( *(_DWORD *)(dword_381B58 + 6836) != a2 )
    *(_BYTE *)(dword_381B58 + 6937) = 0;
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
// ADDR: 0x166fd0
// SYMBOL: sub_166FD0
int sub_166FD0()
{
  int v0; // r2
  int result; // r0

  v0 = *(_DWORD *)(dword_381B58 + 6608);
  result = dword_381B58 + 6608;
  *(_BYTE *)(dword_381B58 + 6620) = v0 != 0;
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
// ADDR: 0x167004
// SYMBOL: sub_167004
int __fastcall sub_167004(int result)
{
  int v1; // r1
  int v2; // r1

  v1 = dword_381B58;
  *(_DWORD *)(dword_381B58 + 6588) = result;
  v2 = v1 + 6588;
  *(_BYTE *)(v2 + 4) = 0;
  if ( result )
  {
    if ( *(_DWORD *)(v2 + 8) != result )
    {
      result = 0;
      *(_DWORD *)(v2 + 12) = 0;
      *(_DWORD *)(v2 + 16) = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1675a8
// SYMBOL: sub_1675A8
bool __fastcall sub_1675A8(char a1)
{
  int v1; // r1
  int v2; // lr
  int v3; // r12
  bool v4; // zf
  int v5; // r2
  int v6; // r2
  int v7; // r2
  int v9; // r0

  v1 = *(_DWORD *)(dword_381B58 + 6572);
  if ( *(_BYTE *)(dword_381B58 + 6935) && !*(_BYTE *)(dword_381B58 + 6934) )
  {
    v9 = *(_DWORD *)(dword_381B58 + 6840);
    if ( v9 )
      return v9 == *(_DWORD *)(v1 + 264);
  }
  else if ( *(unsigned __int8 *)(v1 + 268) << 31 )
  {
    v2 = *(_DWORD *)(v1 + 764);
    if ( (a1 & 0x40) != 0 || *(_DWORD *)(dword_381B58 + 6580) == v2 )
    {
      if ( (a1 & 0x20) != 0 )
        goto LABEL_11;
      v3 = *(_DWORD *)(dword_381B58 + 6608);
      v4 = v3 == 0;
      if ( v3 )
        v4 = v3 == *(_DWORD *)(v1 + 264);
      if ( v4 || *(_BYTE *)(dword_381B58 + 6621) || v3 == *(_DWORD *)(v1 + 80) )
      {
LABEL_11:
        v5 = *(_DWORD *)(dword_381B58 + 6836);
        if ( !v5
          || (v6 = *(_DWORD *)(v5 + 764)) == 0
          || !*(_BYTE *)(v6 + 123)
          || v6 == v2
          || (v7 = *(_DWORD *)(v6 + 8), (v7 & 0x8000000) == 0) && ((a1 & 8) != 0 || (v7 & 0x4000000) == 0) )
        {
          if ( (a1 < 0 || (*(_DWORD *)(v1 + 364) & 4) == 0)
            && (*(_DWORD *)(v1 + 264) != *(_DWORD *)(v1 + 80) || !*(_BYTE *)(v1 + 124)) )
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


// ======================================================================
// ADDR: 0x167664
// SYMBOL: sub_167664
int __fastcall sub_167664(float *a1, int a2)
{
  int v3; // r4
  int v4; // r1
  __int64 v5; // kr00_8
  int result; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r2
  bool v11; // zf
  _DWORD *v12; // r1
  bool v13; // zf

  v3 = dword_381B58 + 6572;
  v4 = *(_DWORD *)(dword_381B58 + 6588);
  if ( v4 && v4 != a2 && !*(_BYTE *)(dword_381B58 + 6592) )
    return 0;
  v5 = *(_QWORD *)v3;
  if ( HIDWORD(v5) != (_DWORD)v5 )
    return 0;
  v7 = *(_DWORD *)(dword_381B58 + 6608);
  if ( v7 )
  {
    if ( v7 != a2 && !*(_BYTE *)(dword_381B58 + 6621) )
      return 0;
  }
  if ( !sub_1674C8(a1, a1 + 2, 1) || *(_BYTE *)(v3 + 363) )
    return 0;
  v8 = *(_DWORD *)(dword_381B58 + 6836);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 764);
    if ( v9 )
    {
      if ( *(_BYTE *)(v9 + 123) )
      {
        v10 = *(_DWORD *)(v5 + 764);
        v11 = v9 == v10;
        if ( v9 != v10 )
          v11 = (*(_BYTE *)(v9 + 11) & 0xC) == 0;
        if ( !v11 )
          return 0;
      }
    }
  }
  result = 0;
  if ( (*(_BYTE *)(v5 + 364) & 4) == 0 )
  {
    v12 = (_DWORD *)(dword_381B58 + 6588);
    v13 = a2 == 0;
    *(_BYTE *)(dword_381B58 + 6592) = 0;
    *v12 = a2;
    if ( a2 )
      v13 = v12[2] == a2;
    if ( !v13 )
    {
      v12[3] = 0;
      v12[4] = 0;
    }
    return 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x16e950
// SYMBOL: sub_16E950
int __fastcall sub_16E950(float a1, float a2, float a3, float a4)
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
// ADDR: 0x16ea84
// SYMBOL: sub_16EA84
bool __fastcall sub_16EA84(int a1, int a2)
{
  float v2; // s0
  _BOOL4 result; // r0
  bool v4; // zf
  float v5; // s2

  v2 = *(float *)(dword_381B58 + 4 * a1 + 1012);
  result = 0;
  v4 = v2 == 0.0;
  if ( v2 == 0.0 )
    result = 1;
  else
    v4 = a2 == 0;
  if ( !v4 )
  {
    v5 = *(float *)(dword_381B58 + 136);
    return v2 > v5
        && (int)(float)((float)(v2 - v5) / (float)(*(float *)(dword_381B58 + 140) * 0.5)) > (int)(float)((float)((float)(v2 - *(float *)(dword_381B58 + 24)) - v5) / (float)(*(float *)(dword_381B58 + 140) * 0.5));
  }
  return result;
}


// ======================================================================
