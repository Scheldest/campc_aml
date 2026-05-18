// ADDR: 0x167448
// SYMBOL: sub_167448
bool __fastcall sub_167448(float *a1, int a2, int a3)
{
  float *v3; // r3

  v3 = *(float **)(dword_381B58 + 6572);
  return (v3[117] >= a1[3] || v3[119] <= a1[1] || v3[116] >= a1[2] || v3[118] <= *a1)
      && (!a2 || *(_DWORD *)(dword_381B58 + 6608) != a2)
      && (a3 || !*(_BYTE *)(dword_381B58 + 11552));
}


// ======================================================================
// ADDR: 0x1674c8
// SYMBOL: sub_1674C8
bool __fastcall sub_1674C8(float *a1, float *a2, int a3)
{
  float v3; // s12
  float v4; // s14
  float v5; // s8
  float v6; // s10
  float *v7; // r1
  float *v8; // r0
  float v9; // s4
  float v10; // s2
  float v11; // s0
  float v12; // s6
  _BOOL4 result; // r0
  float v14; // s10
  float v15; // s6

  v3 = *a2;
  v4 = a2[1];
  v5 = *a1;
  v6 = a1[1];
  v7 = (float *)(dword_381B58 + 5488);
  if ( a3 )
  {
    v8 = *(float **)(dword_381B58 + 6572);
    v9 = v8[119];
    v10 = v8[118];
    v11 = v8[117];
    v12 = v8[116];
    if ( v4 < v9 )
      v9 = v4;
    if ( v3 < v10 )
      v10 = v3;
    if ( v6 >= v11 )
      v11 = v6;
    if ( v5 >= v12 )
      v12 = v5;
  }
  else
  {
    v12 = *a1;
    v11 = a1[1];
    v10 = v3;
    v9 = v4;
  }
  result = 0;
  v14 = v12 - *v7;
  v15 = *(float *)(dword_381B58 + 224);
  if ( v15 >= v14 )
    return *(float *)(dword_381B58 + 228) < (float)(v9 + *(float *)(dword_381B58 + 5492))
        && v15 < (float)(v10 + *v7)
        && *(float *)(dword_381B58 + 228) >= (float)(v11 - *(float *)(dword_381B58 + 5492));
  return result;
}


// ======================================================================
// ADDR: 0x171b60
// SYMBOL: sub_171B60
int __fastcall sub_171B60(float *a1, float a2, float a3, float a4, float a5)
{
  int v5; // lr
  int v6; // r6
  int v7; // r12
  int v9; // r3
  int v11; // r2
  float v12; // s0
  float v13; // s2
  float v14; // s6
  float v15; // s4
  float v16; // s14
  float v17; // s8
  float v18; // s12
  float v19; // s10
  float v20; // s14
  float v21; // s3
  float v22; // s5
  float v23; // s4
  int v24; // r1
  float v26; // s10
  float v27; // s12
  float v28; // s8
  float v29; // s14
  float v30; // s12
  float v31; // s14
  float v32; // s0
  float v33; // s1
  float v34; // s3
  float v35; // s11
  float v36; // s13
  float v37; // s6
  float v38; // s11
  float v39; // s5
  _BOOL4 v40; // r1
  float v41; // s7
  float v42; // s1
  float v43; // s4
  float v44; // s3
  float v45; // s2
  float v46; // s1
  float v47; // s4
  float v48; // s8
  float v49; // s12
  float v50; // s14
  float v51; // s10
  float v52; // s8
  int v53; // r1
  int v54; // r3
  float v55; // s14
  float v56; // s12

  v5 = dword_381B58 + 6572;
  v6 = *(_DWORD *)(dword_381B58 + 6572);
  v7 = *(_DWORD *)(dword_381B58 + 6924);
  if ( v7 != *(_DWORD *)(v6 + 304) )
    return 0;
  v9 = *(_DWORD *)(v6 + 760);
  v11 = *(_DWORD *)(dword_381B58 + 6836);
  ++*(_DWORD *)(dword_381B58 + 6896);
  if ( v9 != v11 )
  {
    v12 = a5;
    v13 = a4;
    v14 = a3;
    v15 = a2;
    goto LABEL_4;
  }
  v20 = *(float *)(v6 + 464);
  if ( v20 > a2 )
    return 0;
  v21 = *(float *)(v6 + 468);
  if ( v21 > a3 )
    return 0;
  v22 = *(float *)(v6 + 472);
  if ( v22 < a4 )
    return 0;
  v23 = *(float *)(v6 + 476);
  if ( v23 < a5 )
    return 0;
  v12 = a5;
  v13 = a4;
  if ( v22 < a4 )
    v13 = *(float *)(v6 + 472);
  v14 = a3;
  if ( v23 < a3 )
    v14 = *(float *)(v6 + 476);
  v15 = a2;
  if ( v22 < a2 )
    v15 = *(float *)(v6 + 472);
  if ( v21 > a5 )
    v12 = *(float *)(v6 + 468);
  if ( v20 > a4 )
    v13 = *(float *)(v6 + 464);
  if ( v21 > a3 )
    v14 = *(float *)(v6 + 468);
  if ( v20 > a2 )
    v15 = *(float *)(v6 + 464);
LABEL_4:
  if ( *(_DWORD *)(v5 + 408) > 1u )
  {
    v26 = *(float *)(v6 + 472);
    v27 = v13;
    v28 = *(float *)(v6 + 464);
    v29 = v15;
    if ( v13 > v26 )
      v27 = *(float *)(v6 + 472);
    if ( v15 > v26 )
      v29 = *(float *)(v6 + 472);
    if ( v13 < v28 )
      v27 = *(float *)(v6 + 464);
    if ( v15 < v28 )
      v29 = *(float *)(v6 + 464);
    v17 = v12;
    v13 = v27;
    v19 = v14;
    v15 = v29;
  }
  else
  {
    v16 = *(float *)(v6 + 476);
    v17 = v12;
    v18 = *(float *)(v6 + 468);
    v19 = v14;
    if ( v12 > v16 )
      v17 = *(float *)(v6 + 476);
    if ( v14 > v16 )
      v19 = *(float *)(v6 + 476);
    if ( v12 < v18 )
      v17 = *(float *)(v6 + 468);
    if ( v14 < v18 )
      v19 = *(float *)(v6 + 468);
  }
  v30 = *(float *)(v5 + 308);
  v31 = *(float *)(v5 + 316);
  if ( v13 >= v30 )
  {
    if ( v31 >= v15 )
      v32 = 0.0;
    else
      v32 = v15 - v31;
  }
  else
  {
    v32 = v13 - v30;
  }
  v33 = *(float *)(v5 + 312);
  v34 = *(float *)(v5 + 320);
  v35 = v19 + (float)((float)(v17 - v19) * 0.8);
  v36 = v33 + (float)((float)(v34 - v33) * 0.2);
  if ( v35 < v36 )
  {
    v37 = v35 - v36;
    goto LABEL_38;
  }
  v38 = v19 + (float)((float)(v17 - v19) * 0.2);
  v39 = v33 + (float)((float)(v34 - v33) * 0.8);
  if ( v39 < v38 )
  {
    v37 = v38 - v39;
LABEL_38:
    v40 = v37 != 0.0;
    if ( v32 != 0.0 )
    {
      v41 = -1.0;
      v40 = 1;
      if ( v32 > 0.0 )
        v41 = 1.0;
      v32 = (float)(v32 / 1000.0) + v41;
    }
    goto LABEL_43;
  }
  v37 = 0.0;
  v40 = 0;
LABEL_43:
  v42 = v33 + v34;
  v43 = v13 + v15;
  v44 = fabsf(v37);
  v45 = (float)(v17 + v19) - v42;
  v46 = fabsf(v32);
  v47 = v43 - (float)(v30 + v31);
  v48 = fabsf(v45);
  v49 = v44 + v46;
  v50 = fabsf(v47);
  v51 = v50 + v48;
  if ( v40 || v32 != 0.0 )
  {
    v53 = 2;
    if ( v37 > 0.0 )
      v53 = 3;
    if ( v46 > v44 )
      v53 = v32 > 0.0;
    v47 = v32;
    v45 = v37;
    v52 = v44 + v46;
  }
  else if ( v47 == 0.0 )
  {
    v47 = 0.0;
    v45 = 0.0;
    v52 = 0.0;
    v53 = *(_DWORD *)(v6 + 264) >= *(_DWORD *)(v5 + 268);
  }
  else
  {
    v53 = 2;
    if ( v45 > 0.0 )
      v53 = 3;
    if ( v50 > v48 )
      v53 = v47 > 0.0;
    v52 = v50 + v48;
  }
  v54 = *(_DWORD *)(v5 + 400);
  v55 = a1[3];
  if ( v53 == v54 )
  {
    if ( v49 < v55 )
    {
      a1[3] = v49;
      a1[4] = v51;
      return 1;
    }
    if ( v49 == v55 )
    {
      v56 = a1[4];
      if ( v51 < v56 )
      {
        a1[4] = v51;
LABEL_67:
        v24 = 1;
        goto LABEL_69;
      }
      if ( v51 == v56 )
      {
        if ( (v53 & 2) == 2 )
          v32 = v37;
        if ( v32 < 0.0 )
          goto LABEL_67;
      }
    }
  }
  v24 = 0;
LABEL_69:
  if ( v55 == 3.4028e38
    && v52 < a1[5]
    && v7 == 1
    && (*(_BYTE *)(v11 + 11) & 0x10) == 0
    && (v47 < 0.0 && !v54 || v47 > 0.0 && v54 == 1 || v54 == 2 && v45 < 0.0 || v54 == 3 && v45 > 0.0) )
  {
    a1[5] = v52;
    return 1;
  }
  return v24;
}


// ======================================================================
