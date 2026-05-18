// ADDR: 0x895d4
// SYMBOL: sub_895D4
int __fastcall sub_895D4(int a1, float *a2, float *a3, int a4, int a5, float *a6, float *a7, float *a8)
{
  float *v9; // r6
  float v12; // r4
  float v13; // s16
  float v14; // s6
  float v15; // s0
  float *v16; // r0
  float v17; // s2
  _BOOL4 v18; // r1
  _BOOL4 v19; // r3
  float v20; // s10
  float v21; // s6
  float v22; // s8
  __int64 v23; // r2
  float v24; // s4
  float v25; // s8
  float v26; // s2
  float v27; // s6
  float v28; // s10
  float v29; // s12
  float v30; // s14
  float v31; // s1
  float v32; // s6
  float v33; // s2
  float v34; // s4
  float v35; // s8
  float v36; // s10
  float v37; // s12
  float v38; // s14
  float v39; // s1
  __int64 v41; // [sp+18h] [bp-48h] BYREF
  float v42; // [sp+20h] [bp-40h]
  int v43; // [sp+24h] [bp-3Ch]
  float v44; // [sp+28h] [bp-38h] BYREF
  float v45; // [sp+2Ch] [bp-34h]
  int v46; // [sp+34h] [bp-2Ch]

  v9 = a2;
  v12 = a2[1];
  v13 = *a2;
  v44 = *a2;
  v45 = v12;
  if ( a6 )
  {
    v14 = *a6;
    v15 = a6[1];
  }
  else
  {
    v15 = *(float *)(dword_1ACF68 + 6344);
    if ( a5 == a4 )
    {
      v14 = 0.0;
    }
    else
    {
      sub_A3980(
        (int)&v41,
        *(_DWORD *)(dword_1ACF68 + 6340),
        *(_DWORD *)(dword_1ACF68 + 6344),
        2139095039,
        0.0,
        a4,
        a5,
        0);
      v15 = *((float *)&v41 + 1);
      v14 = (float)(int)(float)(*(float *)&v41 + 0.95);
    }
  }
  v16 = a3;
  if ( a8 )
  {
    v16 = a8 + 2;
    v9 = a8;
  }
  v17 = *v16;
  v18 = (float)(v14 + v13) >= *v16 || (float)(v15 + v12) >= v16[1];
  if ( a8 )
  {
    v19 = *v9 > v13 || v9[1] > v12;
    v18 = v18 || v19;
  }
  if ( *a7 > 0.0 )
  {
    v20 = v13 + (float)((float)((float)(*a3 - v13) - v14) * *a7);
    if ( v20 <= v13 )
      v20 = v13;
    v44 = v20;
  }
  v21 = a7[1];
  if ( v21 > 0.0 )
  {
    v22 = v12 + (float)((float)((float)(a3[1] - v12) - v15) * v21);
    if ( v22 <= v12 )
      v22 = v12;
    v45 = v22;
  }
  if ( v18 )
  {
    v43 = *((_DWORD *)v16 + 1);
    v23 = *(_QWORD *)v9;
    v42 = v17;
    v41 = v23;
    v24 = *(float *)(dword_1ACF68 + 5576);
    v25 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
    v26 = *(float *)(dword_1ACF68 + 5572);
    v27 = *(float *)(dword_1ACF68 + 5580);
    v28 = v24;
    if ( v24 > 1.0 )
      v28 = 1.0;
    v29 = *(float *)(dword_1ACF68 + 5572);
    if ( v26 > 1.0 )
      v29 = 1.0;
    v30 = *(float *)(dword_1ACF68 + 5580);
    if ( v27 > 1.0 )
      v30 = 1.0;
    v31 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
    if ( v25 > 1.0 )
      v31 = 1.0;
    if ( v24 < 0.0 )
      v28 = 0.0;
    if ( v26 < 0.0 )
      v29 = 0.0;
    if ( v27 < 0.0 )
      v30 = 0.0;
    if ( v25 < 0.0 )
      v31 = 0.0;
    sub_9D89C(
      a1,
      0,
      0,
      (int)&v44,
      (int)(float)((float)(v29 * 255.0) + 0.5) | ((int)(float)((float)(v28 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v30 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v31 * 255.0) + 0.5) << 24),
      a4,
      a5,
      0.0,
      (int)&v41);
  }
  else
  {
    v32 = *(float *)(dword_1ACF68 + 5576);
    v33 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
    v34 = *(float *)(dword_1ACF68 + 5572);
    v35 = *(float *)(dword_1ACF68 + 5580);
    v36 = v32;
    if ( v32 > 1.0 )
      v36 = 1.0;
    v37 = *(float *)(dword_1ACF68 + 5572);
    if ( v34 > 1.0 )
      v37 = 1.0;
    v38 = *(float *)(dword_1ACF68 + 5580);
    if ( v35 > 1.0 )
      v38 = 1.0;
    v39 = *(float *)(dword_1ACF68 + 5584) * *(float *)(dword_1ACF68 + 5400);
    if ( v33 > 1.0 )
      v39 = 1.0;
    if ( v32 < 0.0 )
      v36 = 0.0;
    if ( v34 < 0.0 )
      v37 = 0.0;
    if ( v35 < 0.0 )
      v38 = 0.0;
    if ( v33 < 0.0 )
      v39 = 0.0;
    sub_9D89C(
      a1,
      0,
      0,
      (int)&v44,
      (int)(float)((float)(v37 * 255.0) + 0.5) | ((int)(float)((float)(v36 * 255.0) + 0.5) << 8) | ((int)(float)((float)(v38 * 255.0) + 0.5) << 16) | ((int)(float)((float)(v39 * 255.0) + 0.5) << 24),
      a4,
      a5,
      0.0,
      0);
  }
  return v46;
}


// ======================================================================
