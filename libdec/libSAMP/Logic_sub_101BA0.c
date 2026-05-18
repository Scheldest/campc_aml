// ADDR: 0xf89bc
// SYMBOL: sub_F89BC
_DWORD *__fastcall sub_F89BC(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + 4);
  if ( !result )
    return (_DWORD *)sub_2242C8(6, "AXL", "CEntity: Can't write speed vector - m_pEntity is nullptr");
  result[18] = a2;
  result[19] = a3;
  result[20] = a4;
  return result;
}


// ======================================================================
// ADDR: 0xf8a08
// SYMBOL: sub_F8A08
_DWORD *__fastcall sub_F8A08(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + 4);
  if ( !result )
    return (_DWORD *)sub_2242C8(6, "AXL", "CEntity: Can't write turn speed vector - m_pEntity is nullptr");
  result[21] = a2;
  result[22] = a3;
  result[23] = a4;
  return result;
}


// ======================================================================
// ADDR: 0xf8f58
// SYMBOL: sub_F8F58
_DWORD *__fastcall sub_F8F58(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        unsigned int a10,
        unsigned int a11,
        int a12,
        int a13,
        unsigned int a14,
        unsigned int a15,
        int a16)
{
  _DWORD *result; // r0

  result = *(_DWORD **)(a1 + 4);
  if ( result )
  {
    if ( result[5] )
    {
      (*(void (__fastcall **)(_DWORD *))(*result + 16))(result);
      sub_F894A(
        a1,
        a2,
        a3,
        a4,
        a5,
        (arg6_F894A)__PAIR64__(a7, a6),
        a8,
        a9,
        (arg9_F894A)__PAIR64__(a11, a10),
        a12,
        a13,
        (arg12_F894A)__PAIR64__(a15, a14),
        a16);
      sub_F8C14(a1);
      return (_DWORD *)(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 8))(*(_DWORD *)(a1 + 4));
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x101ffc
// SYMBOL: sub_101FFC
int __fastcall sub_101FFC(int result, int a2)
{
  int v2; // r4
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int v7; // [sp+0h] [bp-38h]
  int v8; // [sp+4h] [bp-34h]
  int v9; // [sp+8h] [bp-30h]
  int v10; // [sp+Ch] [bp-2Ch]
  int v11; // [sp+10h] [bp-28h]
  int v12; // [sp+14h] [bp-24h]
  int v13; // [sp+18h] [bp-20h]

  if ( a2 )
  {
    v2 = result;
    result = sub_108354(*(_DWORD *)(a2 + 8));
    if ( result )
    {
      result = sub_108324(*(_DWORD *)(v2 + 8));
      if ( result )
      {
        result = sub_107188(&unk_B3432, *(_DWORD *)(v2 + 8), v4, v5, v7, v8, v9, v10, v11, v12, v13);
        if ( !result )
          return sub_107188(
                   &unk_B3446,
                   *(_DWORD *)(v2 + 8),
                   *(_DWORD *)(a2 + 8),
                   v6,
                   COERCE_UNSIGNED_INT64(*(float *)(v2 + 16)),
                   HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 16))),
                   COERCE_UNSIGNED_INT64(*(float *)(v2 + 20)),
                   HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 20))),
                   COERCE_UNSIGNED_INT64(*(float *)(v2 + 24)),
                   HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 24))),
                   COERCE_UNSIGNED_INT64(*(float *)(v2 + 28)));
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x102084
// SYMBOL: sub_102084
int __fastcall sub_102084(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r3
  int v8; // [sp+0h] [bp-38h]
  int v9; // [sp+4h] [bp-34h]
  int v10; // [sp+8h] [bp-30h]
  int v11; // [sp+Ch] [bp-2Ch]
  int v12; // [sp+10h] [bp-28h]
  int v13; // [sp+14h] [bp-24h]
  int v14; // [sp+18h] [bp-20h]

  result = sub_107188(&unk_B3432, *(_DWORD *)(a1 + 8), a3, a4, v8, v9, v10, v11, v12, v13, v14);
  if ( !result )
    return sub_107188(
             &unk_B345A,
             *(_DWORD *)(a1 + 8),
             *(_DWORD *)(a2 + 8),
             v7,
             COERCE_UNSIGNED_INT64(*(float *)(a1 + 16)),
             HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a1 + 16))),
             COERCE_UNSIGNED_INT64(*(float *)(a1 + 20)),
             HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a1 + 20))),
             COERCE_UNSIGNED_INT64(*(float *)(a1 + 24)),
             HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(a1 + 24))),
             COERCE_UNSIGNED_INT64(*(float *)(a1 + 28)));
  return result;
}


// ======================================================================
// ADDR: 0x102128
// SYMBOL: sub_102128
_DWORD *__fastcall sub_102128(int a1)
{
  _DWORD *result; // r0
  float v3; // s16
  float *v4; // r0
  unsigned int v5; // s8
  int v6; // s2
  int v7[12]; // [sp+38h] [bp-68h] BYREF
  float v8; // [sp+68h] [bp-38h]
  unsigned int v9; // [sp+6Ch] [bp-34h]
  int v10; // [sp+70h] [bp-30h]

  result = *(_DWORD **)(a1 + 4);
  if ( result )
  {
    v3 = *(float *)(dword_23DF24 + 9876736);
    sub_F8910(a1, v7);
    v4 = *(float **)(a1 + 4);
    *(float *)&v5 = *(float *)&v9 + (float)(v3 * v4[19]);
    *(float *)&v6 = *(float *)&v10 + (float)(v3 * v4[20]);
    v8 = v8 + (float)(v3 * v4[18]);
    v9 = v5;
    v10 = v6;
    return sub_F8F58(
             a1,
             v7[0],
             v7[1],
             v7[2],
             v7[3],
             v7[4],
             v7[5],
             v7[6],
             v7[7],
             v7[8],
             v7[9],
             v7[10],
             v7[11],
             LODWORD(v8),
             v5,
             v6);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1021f0
// SYMBOL: sub_1021F0
int __fastcall sub_1021F0(int a1, float *a2, float *a3, float *a4)
{
  int result; // r0
  float v8; // s0
  float v9; // s0
  float v10; // s0

  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    result = *(_DWORD *)(result + 20);
    if ( result )
      result = ((int (__fastcall *)(int, float *, float *, float *, int))(dword_23DF24 + 4515421))(
                 result,
                 a2,
                 a3,
                 a4,
                 21);
    v8 = *a2 * -57.295776;
    *a2 = v8;
    v9 = *a3 * -57.295776;
    *a3 = v9;
    v10 = *a4 * -57.295776;
    *a4 = v10;
  }
  return result;
}


// ======================================================================
// ADDR: 0x108700
// SYMBOL: sub_108700
int __fastcall sub_108700(float a1, float a2)
{
  float v2; // s4

  v2 = a1 - a2;
  if ( a1 < a2 )
    v2 = a2 - a1;
  return LODWORD(v2);
}


// ======================================================================
// ADDR: 0x108818
// SYMBOL: sub_108818
int __fastcall sub_108818(float a1, float a2)
{
  float v2; // s2
  float v3; // s2

  v2 = a2;
  if ( a2 > 180.0 )
    v2 = a2 + -360.0;
  if ( v2 < -180.0 )
    v2 = v2 + 360.0;
  v3 = v2 - a1;
  if ( v3 > 180.0 )
    v3 = v3 + -360.0;
  if ( v3 < -180.0 )
    v3 = v3 + 360.0;
  return LODWORD(v3);
}


// ======================================================================
// ADDR: 0x17d238
// SYMBOL: sub_17D238
float *__fastcall sub_17D238(float *result, float *a2)
{
  float v2; // s2
  float v3; // s4
  float v4; // s10
  float v5; // s8
  float v6; // s6
  float v7; // s12
  float v8; // s14
  float v9; // s1
  float v10; // s3
  float v11; // s5
  float v12; // s4
  float v13; // s2
  float v14; // s6
  float v15; // s0

  if ( a2 )
  {
    v2 = result[1];
    v3 = result[2];
    v4 = -(float)(v2 * v2);
    v5 = v3 * v3;
    v6 = result[3];
    v7 = v2 * v2;
    v8 = *result * v6;
    v9 = v2 * v3;
    v10 = *result * v3;
    v11 = v2 * v6;
    v12 = v3 * v6;
    v13 = *result * v2;
    v14 = v6 * v6;
    v15 = *result * *result;
    a2[8] = (float)(v11 - v10) + (float)(v11 - v10);
    a2[1] = (float)(v9 - v8) + (float)(v9 - v8);
    a2[9] = (float)(v13 + v12) + (float)(v13 + v12);
    a2[4] = (float)(v9 + v8) + (float)(v9 + v8);
    a2[2] = (float)(v10 + v11) + (float)(v10 + v11);
    a2[6] = (float)(v12 - v13) + (float)(v12 - v13);
    a2[10] = v15 + (float)((float)(v4 - v5) + v14);
    a2[5] = v15 + (float)((float)(v5 - v7) - v14);
    *a2 = v15 + (float)((float)(v7 - v5) - v14);
  }
  return result;
}


// ======================================================================
// ADDR: 0x17d2f2
// SYMBOL: sub_17D2F2
float *__fastcall sub_17D2F2(float *result)
{
  float v1; // s4
  float v2; // s2
  float v3; // s6
  float v4; // s8

  v1 = result[2];
  v2 = result[1];
  v3 = result[3];
  v4 = sqrtf((float)((float)((float)(v1 * v1) + (float)(v2 * v2)) + (float)(v3 * v3)) + (float)(*result * *result));
  *result = *result / v4;
  result[1] = v2 / v4;
  result[2] = v1 / v4;
  result[3] = v3 / v4;
  return result;
}


// ======================================================================
// ADDR: 0x17d338
// SYMBOL: sub_17D338
int __fastcall sub_17D338(double a1, float *a2, float a3)
{
  float v3; // s26
  float *v4; // r4
  float v5; // s27
  float v6; // s24
  float v7; // s25
  float v8; // s30
  float v9; // s28
  float v10; // s20
  float v11; // s21
  float v12; // s2
  double v13; // d16
  double v14; // d8
  double v15; // d9
  double v16; // d11
  double v17; // r8
  double v18; // r10
  double v19; // d17
  double v20; // d16
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s6

  if ( HIDWORD(a1) && a2 && a3 <= 1.0 )
  {
    v3 = a2[2];
    v4 = (float *)LODWORD(a1);
    v5 = *(float *)(HIDWORD(a1) + 8);
    v6 = a2[1];
    v7 = *(float *)(HIDWORD(a1) + 4);
    v8 = a2[3];
    v9 = *(float *)(HIDWORD(a1) + 12);
    v10 = *a2;
    v11 = *(float *)HIDWORD(a1);
    v12 = (float)((float)((float)(v5 * v3) + (float)(v7 * v6)) + (float)(v9 * v8))
        + (float)(*(float *)HIDWORD(a1) * *a2);
    v13 = v12;
    if ( v12 < 0.0 )
    {
      v10 = -v10;
      v8 = -v8;
      v3 = -v3;
      v6 = -v6;
      v13 = -v13;
    }
    if ( 1.0 - v13 <= 0.01 )
    {
      v19 = a3;
      v20 = 1.0 - a3;
    }
    else
    {
      v14 = a3;
      v15 = 1.0 - a3;
      v16 = acos(v13);
      v17 = sin(v15 * v16);
      v18 = sin(v16 * v14);
      a1 = sin(v16);
      v19 = v18 / a1;
      v20 = v17 / a1;
    }
    v21 = v19 * v8 + v20 * v9;
    v22 = v19 * v3 + v20 * v5;
    v23 = v19 * v6 + v20 * v7;
    v24 = v19 * v10 + v20 * v11;
    *v4 = v24;
    v4[1] = v23;
    v4[2] = v22;
    v4[3] = v21;
  }
  return LODWORD(a1);
}


// ======================================================================
