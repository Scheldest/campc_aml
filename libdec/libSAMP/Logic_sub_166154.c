// ADDR: 0x165ec8
// SYMBOL: sub_165EC8
int __fastcall sub_165EC8(int a1, float *a2, float *a3, int a4, int a5, __int64 *a6, float *a7, float *a8)
{
  float *v8; // r6
  float v10; // r4
  float v12; // s16
  float *v14; // r0
  float v15; // s0
  _BOOL4 v16; // r1
  _BOOL4 v17; // r3
  float v18; // s8
  float v19; // s4
  float v20; // s8
  float v21; // s0
  __int64 v22; // d17
  int v23; // r0
  float v25; // s0
  __int64 v26; // d17
  int v27; // r0
  __int64 v28; // [sp+18h] [bp-58h] BYREF
  float v29; // [sp+20h] [bp-50h]
  int v30; // [sp+24h] [bp-4Ch]
  __int64 v31; // [sp+28h] [bp-48h] BYREF
  float v32; // [sp+30h] [bp-40h] BYREF
  float v33; // [sp+34h] [bp-3Ch]
  __int64 v34; // [sp+38h] [bp-38h] BYREF
  int v35; // [sp+40h] [bp-30h]
  float v36; // [sp+44h] [bp-2Ch]

  v8 = a2;
  v10 = a2[1];
  v12 = *a2;
  v33 = v10;
  v32 = v12;
  if ( a6 )
    v31 = *a6;
  else
    sub_1660A4((int)&v31, a4, a5, 0, 0.0);
  v14 = a3;
  if ( a8 )
  {
    v14 = a8 + 2;
    v8 = a8;
  }
  v15 = *v14;
  v16 = (float)(*(float *)&v31 + v12) >= *v14 || (float)(*((float *)&v31 + 1) + v10) >= v14[1];
  if ( a8 )
  {
    v17 = *v8 > v12 || v8[1] > v10;
    v16 = v16 || v17;
  }
  if ( *a7 > 0.0 )
  {
    v18 = v12 + (float)((float)((float)(*a3 - v12) - *(float *)&v31) * *a7);
    if ( v18 <= v12 )
      v18 = v12;
    v32 = v18;
  }
  v19 = a7[1];
  if ( v19 > 0.0 )
  {
    v20 = v10 + (float)((float)((float)(a3[1] - v10) - *((float *)&v31 + 1)) * v19);
    if ( v20 <= v10 )
      v20 = v10;
    v33 = v20;
  }
  if ( v16 )
  {
    v30 = *((_DWORD *)v14 + 1);
    v29 = v15;
    v28 = *(_QWORD *)v8;
    v21 = *(float *)(dword_381B58 + 5400);
    v22 = *(_QWORD *)(dword_381B58 + 5580);
    v34 = *(_QWORD *)(dword_381B58 + 5572);
    v35 = v22;
    v36 = v21 * *((float *)&v22 + 1);
    v23 = sub_165778((float *)&v34);
    return sub_1745E0(a1, 0, 0, (int)&v32, v23, a4, a5, 0.0, (int)&v28);
  }
  else
  {
    v25 = *(float *)(dword_381B58 + 5400);
    v26 = *(_QWORD *)(dword_381B58 + 5580);
    v34 = *(_QWORD *)(dword_381B58 + 5572);
    v35 = v26;
    v36 = v25 * *((float *)&v26 + 1);
    v27 = sub_165778((float *)&v34);
    return sub_1745E0(a1, 0, 0, (int)&v32, v27, a4, a5, 0.0, 0);
  }
}


// ======================================================================
