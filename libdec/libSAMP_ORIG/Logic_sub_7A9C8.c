// ADDR: 0x7aba8
// SYMBOL: sub_7ABA8
int sub_7ABA8()
{
  int v0; // r6
  _DWORD *v1; // r0
  bool v2; // zf
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r8
  int v7; // r5
  int v8; // r5
  int v9; // r4
  bool v10; // zf

  if ( !sub_6C808() || !dword_1A4434 )
    return 0;
  v1 = *(_DWORD **)(dword_1A4434 + 944);
  v2 = *v1 == 0;
  if ( *v1 )
  {
    v0 = v1[1];
    v2 = v0 == 0;
  }
  if ( v2 )
    return 0;
  v4 = sub_6C844();
  v6 = *(_DWORD **)(v4 + 8);
  if ( !v6 )
  {
    v7 = v4;
    v6 = (_DWORD *)operator new(0x2F0u);
    *v6 = &off_11056C;
    ((void (__fastcall *)(_DWORD *))(dword_1A4408 + 1063817))(v6);
    *(_DWORD *)(v7 + 8) = v6;
  }
  v8 = v0 + 40000;
  v9 = 0;
  while ( 1 )
  {
    v10 = *(_BYTE *)(v8 + v9) == 0;
    if ( *(_BYTE *)(v8 + v9) )
    {
      v5 = *(_DWORD *)(v0 + 4 * v9);
      v10 = v5 == 0;
    }
    if ( !v10 && COERCE_FLOAT(sub_6284C((int)v6, v5)) < 5.0 )
      break;
    if ( ++v9 == 2000 )
      return 0;
  }
  return 1;
}


// ======================================================================
// ADDR: 0x7ac70
// SYMBOL: sub_7AC70
int sub_7AC70()
{
  int result; // r0

  result = **(_DWORD **)(*(_DWORD *)(dword_1A4408 + 2350836) + 944);
  if ( result )
  {
    result = *(_DWORD *)(result + 5052);
    if ( result )
      return ((int (*)(void))(dword_1A4408 + 1315021))();
  }
  return result;
}


// ======================================================================
// ADDR: 0x88010
// SYMBOL: sub_88010
int __fastcall sub_88010(int a1)
{
  sub_10967C(a1 + 172, 0x300u);
  *(_DWORD *)(a1 + 8) = 1090519040;
  *(_DWORD *)(a1 + 12) = 1088421888;
  *(_QWORD *)(a1 + 72) = 0x4080000041000000LL;
  *(_QWORD *)(a1 + 80) = 0x4080000040800000LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 168) = 1067450368;
  *(_DWORD *)a1 = 1065353216;
  *(_DWORD *)(a1 + 4) = 1090519040;
  *(_QWORD *)(a1 + 40) = 0x3F80000000000000LL;
  *(_QWORD *)(a1 + 48) = 0x3F80000000000000LL;
  *(_WORD *)(a1 + 164) = 257;
  *(_DWORD *)(a1 + 56) = 1082130432;
  *(_DWORD *)(a1 + 60) = 1077936128;
  *(_QWORD *)(a1 + 20) = 0x4200000042000000LL;
  *(_QWORD *)(a1 + 28) = 0x3F00000000000000LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 96) = 0x40C0000041A80000LL;
  *(_QWORD *)(a1 + 104) = 0x4110000041600000LL;
  *(_QWORD *)(a1 + 112) = 1092616192LL;
  *(_QWORD *)(a1 + 120) = 1082130432LL;
  *(_QWORD *)(a1 + 128) = 0x3F0000003F000000LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0x4198000041980000LL;
  *(_QWORD *)(a1 + 152) = 0x4040000040400000LL;
  *(_DWORD *)(a1 + 160) = 1065353216;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 16) = 1065353216;
  sub_9B5A0(a1);
  return a1;
}


// ======================================================================
// ADDR: 0x8bc04
// SYMBOL: sub_8BC04
int sub_8BC04()
{
  return dword_1ACF68;
}


// ======================================================================
// ADDR: 0x975d8
// SYMBOL: sub_975D8
float32x2_t *__fastcall sub_975D8(float32x2_t *result, int a2)
{
  int v2; // r2
  int v3; // r3
  float v4; // s4
  float32x2_t v5; // d17
  float v6; // s6
  float32x4_t v7; // q9
  float32x2_t v8; // d16
  float32x4_t v9; // q0

  v2 = *(_DWORD *)(dword_1ACF68 + 6572);
  v3 = *(_DWORD *)(v2 + 172);
  if ( !a2 || (a2 & v3) != 0 )
  {
    v4 = *(float *)(v2 + 200);
    *(_DWORD *)(v2 + 184) = 2139095039;
    *(_DWORD *)(v2 + 188) = 2139095039;
    v5.n64_u64[0] = *(unsigned __int64 *)(v2 + 12);
    v6 = *(float *)(v2 + 204);
    v7 = *(float32x4_t *)(v2 + 216);
    v8.n64_u64[0] = vcvt_f32_s32(vcvt_s32_f32((float32x2_t)result->n64_u64[0])).n64_u64[0];
    *(_DWORD *)(v2 + 172) = v3 & 0xFFFFFFF1;
    result = (float32x2_t *)(v2 + 16);
    v9.n128_u64[0] = vsub_f32(v8, v5).n64_u64[0];
    *(float32x2_t *)(v2 + 12) = v8;
    v9.n128_u64[1] = v9.n128_u64[0];
    *(float *)(v2 + 204) = v9.n128_f32[1] + v6;
    *(float *)(v2 + 200) = v9.n128_f32[0] + v4;
    *(float32x4_t *)(v2 + 216) = vaddq_f32(v9, v7);
  }
  return result;
}


// ======================================================================
// ADDR: 0x97660
// SYMBOL: sub_97660
float *__fastcall sub_97660(float *result, int a2)
{
  int v2; // r2
  int v3; // r3
  float v4; // s0
  int v5; // r1
  float v6; // s0

  v2 = *(_DWORD *)(dword_1ACF68 + 6572);
  v3 = *(_DWORD *)(v2 + 176);
  if ( !a2 || (a2 & v3) != 0 )
  {
    v4 = *result;
    *(_DWORD *)(v2 + 176) = v3 & 0xFFFFFFF1;
    if ( v4 <= 0.0 )
    {
      *(_BYTE *)(v2 + 152) = 0;
      v5 = 2;
    }
    else
    {
      v5 = 0;
      *(float *)(v2 + 28) = (float)(int)v4;
    }
    *(_DWORD *)(v2 + 144) = v5;
    v6 = result[1];
    if ( v6 <= 0.0 )
    {
      *(_BYTE *)(v2 + 152) = 0;
      result = (float *)(&dword_0 + 2);
      *(_DWORD *)(v2 + 148) = 2;
    }
    else
    {
      result = 0;
      *(_DWORD *)(v2 + 148) = 0;
      *(float *)(v2 + 32) = (float)(int)v6;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xa72f4
// SYMBOL: sub_A72F4
int __fastcall sub_A72F4(unsigned int a1, float *a2, _DWORD *a3, __int64 *a4, int a5, float *a6, float *a7)
{
  int v9; // r0
  int v10; // r5
  int v11; // r6
  float *v12; // r9
  int v14; // r8
  float v15; // s18
  float v16; // s16
  float v17; // s0
  float v18; // s2
  float v19; // s6
  int v20; // r1
  int v21; // r0
  int v22; // r10
  bool v23; // fnf
  int v24; // r4
  unsigned int v25; // r0
  int v26; // r4
  unsigned int v27; // r0
  __int64 *v29; // [sp+Ch] [bp-64h]
  char v31; // [sp+16h] [bp-5Ah] BYREF
  char v32; // [sp+17h] [bp-59h] BYREF
  int v33[2]; // [sp+18h] [bp-58h] BYREF
  __int64 v34; // [sp+20h] [bp-50h] BYREF
  unsigned __int64 v35; // [sp+28h] [bp-48h] BYREF
  float v36; // [sp+30h] [bp-40h]
  float v37; // [sp+34h] [bp-3Ch]

  v9 = dword_1ACF68;
  v10 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v10 + 124) = 1;
  if ( *(_BYTE *)(v10 + 127) )
    return 0;
  v12 = (float *)(v9 + 5456);
  sub_97B74(a1);
  v14 = sub_8AAD4(v10, (unsigned int)"#image", 0);
  sub_97DAC();
  if ( a5 < 0 )
  {
    v15 = *v12;
    v16 = v12[1];
  }
  else
  {
    v15 = (float)a5;
    v16 = (float)a5;
  }
  v17 = *a2;
  v18 = a2[1];
  v19 = *(float *)(v10 + 204);
  v11 = 0;
  v35 = *(_QWORD *)(v10 + 200);
  *(float *)&v33[1] = v16 + v19;
  *(float *)v33 = v15 + *(float *)&v35;
  v37 = (float)(v16 + v16) + (float)(v19 + v18);
  v36 = (float)(v15 + v15) + (float)(*(float *)&v35 + v17);
  *((float *)&v34 + 1) = (float)(v16 + v19) + v18;
  *(float *)&v34 = (float)(v15 + *(float *)&v35) + v17;
  sub_8B2C0((unsigned int)&v35);
  if ( sub_8B314((float *)&v35, v14, 0) )
  {
    v29 = a4;
    v11 = sub_A634C((float *)&v35, v14, &v32, &v31, 0);
    v20 = 22;
    if ( !v32 )
      v20 = 21;
    v21 = v20;
    if ( v32 )
      v21 = 23;
    if ( !v31 )
      v21 = v20;
    v22 = sub_88C10(v21, 1.0);
    sub_8A1F8(&v35, v14, 1);
    if ( v15 < v16 )
      v16 = v15;
    v23 = v16 < 0.0;
    if ( v16 > v12[2] )
      v16 = v12[2];
    if ( v23 )
      v16 = 0.0;
    sub_89B34(*(float *)&v35, *((float *)&v35 + 1), v36, v37, v22, 1, v16);
    if ( a6[3] > 0.0 )
    {
      v24 = *(_DWORD *)(v10 + 636);
      v25 = sub_88D28(a6);
      sub_9D624(v24, (int)v33, (float *)&v34, v25, 0.0, 15);
    }
    v26 = *(_DWORD *)(v10 + 636);
    v27 = sub_88D28(a7);
    sub_9DF08(v26, a1, v33, &v34, a3, v29, v27);
  }
  return v11;
}


// ======================================================================
