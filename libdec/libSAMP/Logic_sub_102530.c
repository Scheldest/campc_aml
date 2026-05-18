// ADDR: 0xf8db8
// SYMBOL: sub_F8DB8
float __fastcall sub_F8DB8(int a1, float a2, float a3, float a4)
{
  _DWORD v8[12]; // [sp+0h] [bp-50h] BYREF
  float v9; // [sp+30h] [bp-20h]
  float v10; // [sp+34h] [bp-1Ch]
  float v11; // [sp+38h] [bp-18h]

  sub_F8910(a1, v8);
  return sqrtf(
           (float)((float)((float)(v10 - a3) * (float)(v10 - a3)) + (float)((float)(v9 - a2) * (float)(v9 - a2)))
         + (float)((float)(v11 - a4) * (float)(v11 - a4)));
}


// ======================================================================
// ADDR: 0x1022ac
// SYMBOL: sub_1022AC
float *__fastcall sub_1022AC(float *a1, float a2, float a3, float a4)
{
  float v8; // s0
  float *result; // r0
  float v10; // s2
  float v11; // s4
  float v12; // s6
  float v13; // s8
  float v14; // s10
  float v15; // s12
  float v16; // s14
  float v17; // s1
  float v18; // s3
  float v19; // [sp+0h] [bp-30h] BYREF
  float v20; // [sp+4h] [bp-2Ch] BYREF
  float v21; // [sp+8h] [bp-28h] BYREF
  float v22; // [sp+Ch] [bp-24h] BYREF
  float v23; // [sp+10h] [bp-20h] BYREF
  float v24[7]; // [sp+14h] [bp-1Ch] BYREF

  sincosf(a2 * 0.017453, v24, &v23);
  sincosf(a3 * 0.017453, &v22, &v21);
  sincosf(a4 * 0.017453, &v20, &v19);
  v8 = v24[0];
  result = a1 + 173;
  v10 = v20;
  v11 = v19;
  v12 = v22;
  v13 = v20 * v24[0];
  v14 = v23;
  v15 = v19 * v24[0];
  v16 = v21;
  v17 = v20 * v22;
  v18 = v19 * v22;
  a1[173] = a2;
  a1[174] = a3;
  a1[175] = a4;
  a1[186] = v8;
  a1[185] = v11 * v14;
  a1[190] = v16 * v14;
  a1[184] = -(float)(v10 * v14);
  a1[182] = -(float)(v12 * v14);
  a1[189] = v17 - (float)(v16 * v15);
  a1[188] = v18 + (float)(v13 * v16);
  a1[181] = (float)(v10 * v16) + (float)(v15 * v12);
  a1[180] = (float)(v11 * v16) - (float)(v12 * v13);
  return result;
}


// ======================================================================
// ADDR: 0x1087c8
// SYMBOL: sub_1087C8
int __fastcall sub_1087C8(float a1)
{
  float v1; // s2

  v1 = a1;
  if ( a1 > 180.0 )
    v1 = a1 + -360.0;
  if ( v1 < -180.0 )
    v1 = v1 + 360.0;
  return LODWORD(v1);
}


// ======================================================================
// ADDR: 0x13fe54
// SYMBOL: sub_13FE54
unsigned int __fastcall sub_13FE54(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r8
  int v5; // r0
  int v6; // r1
  int *v7; // r0
  int *v8; // r2
  int v9; // r9
  int v10; // r0
  int v11; // r0
  int v12; // r10
  unsigned int v13; // r6
  int v14; // r0
  unsigned int result; // r0
  int v16; // r0
  unsigned int v17; // r6
  unsigned int v18; // r6
  int v19; // r1

  v2 = *(_DWORD *)(dword_23DEF4 + 944);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = *(_DWORD *)(v2 + 16);
  v5 = sub_104330(*(_DWORD *)(a1 + 28));
  if ( v5 )
  {
    v6 = v5;
    v8 = *(int **)(v3 + 60004);
    v7 = *(int **)(v3 + 60000);
    if ( v7 != v8 )
    {
      while ( *(_DWORD *)(v3 + 4 * *v7 + 8000) != v6 )
      {
        if ( ++v7 == v8 )
        {
          LOWORD(v9) = -1;
          goto LABEL_13;
        }
      }
    }
    LOWORD(v9) = -1;
    if ( v7 == v8 || (v10 = *v7, v9 = (unsigned __int16)v10, (unsigned __int16)(v10 - 1) >= 0xFFFEu) )
    {
LABEL_13:
      v13 = sub_148684(v4, v6);
      if ( (unsigned __int16)(v13 - 1) < 0xFFFEu
        && v13 <= 0x3E8
        && *(_BYTE *)(v4 + v13 + 4)
        && (v14 = *(_DWORD *)(v4 + 4 * v13 + 1004)) != 0 )
      {
        v12 = sub_1028C8(v14);
        if ( v12 )
          v12 = 2;
      }
      else
      {
        v12 = 0;
      }
    }
    else
    {
      v12 = 0;
      if ( (unsigned __int16)v10 >> 4 <= 0x7Cu && sub_F2396(v3, (unsigned __int16)v10) )
      {
        v11 = *(_DWORD *)(v3 + 4 * v9);
        if ( v11 )
        {
          if ( COERCE_FLOAT(sub_F8E1C(v11)) < 30.0 )
            v12 = 1;
        }
      }
      v13 = 0xFFFF;
    }
  }
  else
  {
    v12 = 0;
    v13 = 0xFFFF;
    LOWORD(v9) = -1;
  }
  if ( sub_106AB0(*(_DWORD *)(a1 + 28)) || sub_106AF8(*(_DWORD *)(a1 + 28)) || sub_106B26(*(_DWORD *)(a1 + 28)) )
  {
    result = 0;
    *(_DWORD *)(a1 + 12) = 0;
    *(_BYTE *)(a1 + 416) = 0;
    return result;
  }
  if ( !v12 )
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      if ( (unsigned int)(sub_F0B30() - *(_DWORD *)(a1 + 428)) >= 0x7D0 )
      {
        *(_WORD *)(a1 + 418) = -1;
        *(_DWORD *)(a1 + 404) = 0;
        *(_DWORD *)(a1 + 408) = 0;
        *(_DWORD *)(a1 + 412) = 0;
        *(_BYTE *)(a1 + 9) = 0;
        *(_BYTE *)(a1 + 416) = 0;
        *(_DWORD *)(a1 + 12) = 0;
      }
      result = (unsigned int)(sub_F0B30() - *(_DWORD *)(a1 + 428)) >> 4;
      if ( result > 0x7C )
        return result;
      v18 = *(unsigned __int16 *)(a1 + 418);
      if ( v18 < 0x7D0 )
      {
        result = sub_F2396(v3, *(unsigned __int16 *)(a1 + 418));
        if ( !result )
          return result;
        result = *(_DWORD *)(v3 + 4 * v18);
      }
      else
      {
        result = (unsigned __int16)(v18 - 2000);
        if ( result > 0x3E8 || !*(_BYTE *)(v4 + result + 4) )
          return result;
        result = *(_DWORD *)(v4 + 4 * result + 1004);
      }
      if ( !result )
        return result;
      *(_BYTE *)(a1 + 416) = 1;
    }
    else
    {
      result = 0;
      *(_BYTE *)(a1 + 416) = 0;
    }
    *(_DWORD *)(a1 + 12) = result;
    return result;
  }
  if ( v12 == 1 )
  {
    *(_WORD *)(a1 + 418) = v9;
    v16 = sub_F0B30();
    v17 = *(unsigned __int16 *)(a1 + 418);
    *(_DWORD *)(a1 + 428) = v16;
    if ( v17 >> 4 <= 0x7C && sub_F2396(v3, v17) )
      result = *(_DWORD *)(v3 + 4 * v17);
    else
      result = 0;
  }
  else
  {
    *(_WORD *)(a1 + 418) = v13 + 2000;
    result = sub_F0B30();
    *(_DWORD *)(a1 + 428) = result;
    if ( v13 > 0x3E8 )
      return result;
    result = *(unsigned __int8 *)(v4 + v13 + 4);
    if ( !*(_BYTE *)(v4 + v13 + 4) )
      return result;
    result = *(_DWORD *)(v4 + 4 * v13 + 1004);
    if ( !result )
      return result;
  }
  v19 = *(unsigned __int8 *)(a1 + 9);
  *(_DWORD *)(a1 + 12) = result;
  if ( !v19 )
  {
    *(_BYTE *)(a1 + 416) = 0;
    sub_140F8C(a1);
  }
  result = 1;
  *(_BYTE *)(a1 + 416) = 1;
  *(_BYTE *)(a1 + 9) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x17d12c
// SYMBOL: sub_17D12C
int __fastcall sub_17D12C(
        int result,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12)
{
  __int64 v12; // d3
  __int64 v13; // d5
  __int64 v14; // d6
  __int64 v15; // d8
  __int64 v16; // d1
  float v17; // s8
  float v18; // s10
  float v19; // s4
  float v20; // s0
  float v21; // s4
  __int64 v22; // d0

  *((float *)&v16 + 1) = a6;
  v17 = 0.0;
  v18 = 0.0;
  if ( (float)((float)((float)(1.0 - a2) - a7) + a12) > 0.0 )
    v18 = (float)((float)(1.0 - a2) - a7) + a12;
  v19 = 0.0;
  if ( (float)((float)((float)(a2 + 1.0) - a7) - a12) > 0.0 )
    v19 = (float)((float)(a2 + 1.0) - a7) - a12;
  LODWORD(v12) = 0;
  if ( (float)((float)((float)(a2 + 1.0) + a7) + a12) > 0.0 )
    *(float *)&v12 = (float)((float)(a2 + 1.0) + a7) + a12;
  v20 = sqrtf(v18);
  if ( (float)((float)((float)(1.0 - a2) + a7) - a12) > 0.0 )
    v17 = (float)((float)(1.0 - a2) + a7) - a12;
  *(float *)&v16 = sqrtf(v19);
  v21 = sqrtf(*(float *)&v12);
  *(float *)&v13 = a11 - a8;
  *(float *)&v14 = a6 - a3;
  *((float *)&v22 + 1) = a10;
  *(float *)&v15 = v20 * 0.5;
  *(float *)&v22 = a4 - a10;
  *(float *)&v16 = *(float *)&v16 * 0.5;
  *(float *)&v12 = sqrtf(v17) * 0.5;
  *(_DWORD *)(result + 12) = vbsl_s64(0x8000000080000000LL, v14, v15);
  *(_DWORD *)(result + 8) = vbsl_s64(0x8000000080000000LL, v22, v12);
  *(_DWORD *)(result + 4) = vbsl_s64(0x8000000080000000LL, v13, v16);
  *(float *)result = v21 * 0.5;
  return result;
}


// ======================================================================
