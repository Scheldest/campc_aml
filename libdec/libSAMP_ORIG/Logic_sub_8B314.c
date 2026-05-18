// ADDR: 0x9af40
// SYMBOL: sub_9AF40
int __fastcall sub_9AF40(float *a1, float a2, float a3, float a4, float a5)
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
  bool v43; // zf
  float v44; // s8
  float v45; // s4
  float v46; // s3
  float v47; // s2
  float v48; // s1
  float v49; // s4
  float v50; // s8
  float v51; // s12
  float v52; // s14
  float v53; // s10
  int v54; // r1
  float v55; // s8
  int v56; // r3
  float v57; // s14
  float v58; // s12

  v5 = dword_1ACF68 + 6572;
  v6 = *(_DWORD *)(dword_1ACF68 + 6572);
  v7 = *(_DWORD *)(dword_1ACF68 + 6924);
  if ( v7 != *(_DWORD *)(v6 + 304) )
    return 0;
  v9 = *(_DWORD *)(v6 + 760);
  v11 = *(_DWORD *)(dword_1ACF68 + 6836);
  ++*(_DWORD *)(dword_1ACF68 + 6896);
  if ( v9 != v11 )
  {
    v12 = a5;
    v13 = a4;
    v14 = a3;
    v15 = a2;
    goto LABEL_4;
  }
  v20 = *(float *)(v6 + 528);
  if ( v20 > a2 )
    return 0;
  v21 = *(float *)(v6 + 532);
  if ( v21 > a3 )
    return 0;
  v22 = *(float *)(v6 + 536);
  if ( v22 < a4 )
    return 0;
  v23 = *(float *)(v6 + 540);
  if ( v23 < a5 )
    return 0;
  v12 = a5;
  v13 = a4;
  if ( v22 < a4 )
    v13 = *(float *)(v6 + 536);
  v14 = a3;
  if ( v23 < a3 )
    v14 = *(float *)(v6 + 540);
  v15 = a2;
  if ( v22 < a2 )
    v15 = *(float *)(v6 + 536);
  if ( v21 > a5 )
    v12 = *(float *)(v6 + 532);
  if ( v20 > a4 )
    v13 = *(float *)(v6 + 528);
  if ( v21 > a3 )
    v14 = *(float *)(v6 + 532);
  if ( v20 > a2 )
    v15 = *(float *)(v6 + 528);
LABEL_4:
  if ( *(_DWORD *)(v5 + 408) > 1u )
  {
    v26 = *(float *)(v6 + 536);
    v27 = v13;
    v28 = *(float *)(v6 + 528);
    v29 = v15;
    if ( v13 > v26 )
      v27 = *(float *)(v6 + 536);
    if ( v15 > v26 )
      v29 = *(float *)(v6 + 536);
    if ( v13 < v28 )
      v27 = *(float *)(v6 + 528);
    if ( v15 < v28 )
      v29 = *(float *)(v6 + 528);
    v17 = v12;
    v13 = v27;
    v19 = v14;
    v15 = v29;
  }
  else
  {
    v16 = *(float *)(v6 + 540);
    v17 = v12;
    v18 = *(float *)(v6 + 532);
    v19 = v14;
    if ( v12 > v16 )
      v17 = *(float *)(v6 + 540);
    if ( v14 > v16 )
      v19 = *(float *)(v6 + 540);
    if ( v12 < v18 )
      v17 = *(float *)(v6 + 532);
    if ( v14 < v18 )
      v19 = *(float *)(v6 + 532);
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
  v43 = !v40;
  v44 = v17 + v19;
  if ( !v40 )
    v43 = v32 == 0.0;
  v45 = v13 + v15;
  v46 = fabsf(v37);
  v47 = v44 - v42;
  v48 = fabsf(v32);
  v49 = v45 - (float)(v30 + v31);
  v50 = fabsf(v47);
  v51 = v46 + v48;
  v52 = fabsf(v49);
  v53 = v52 + v50;
  if ( v43 )
  {
    if ( v49 == 0.0 )
    {
      v49 = 0.0;
      v47 = 0.0;
      v55 = 0.0;
      v54 = *(_DWORD *)(v6 + 264) >= *(_DWORD *)(v5 + 268);
    }
    else
    {
      v54 = 2;
      if ( v47 > 0.0 )
        v54 = 3;
      if ( v52 > v50 )
        v54 = v49 > 0.0;
      v55 = v52 + v50;
    }
  }
  else
  {
    v54 = 2;
    if ( v37 > 0.0 )
      v54 = 3;
    if ( v48 > v46 )
      v54 = v32 > 0.0;
    v49 = v32;
    v47 = v37;
    v55 = v46 + v48;
  }
  v56 = *(_DWORD *)(v5 + 400);
  v57 = a1[3];
  if ( v54 == v56 )
  {
    if ( v51 < v57 )
    {
      a1[3] = v51;
      a1[4] = v53;
      return 1;
    }
    if ( v51 == v57 )
    {
      v58 = a1[4];
      if ( v53 < v58 )
      {
        a1[4] = v53;
LABEL_68:
        v24 = 1;
        goto LABEL_70;
      }
      if ( v53 == v58 )
      {
        if ( (v54 & 2) == 2 )
          v32 = v37;
        if ( v32 < 0.0 )
          goto LABEL_68;
      }
    }
  }
  v24 = 0;
LABEL_70:
  if ( v57 == 3.4028e38
    && v55 < a1[5]
    && v7 == 1
    && (*(_BYTE *)(v11 + 11) & 0x10) == 0
    && (v49 < 0.0 && !v56 || v49 > 0.0 && v56 == 1 || v56 == 2 && v47 < 0.0 || v56 == 3 && v47 > 0.0) )
  {
    a1[5] = v55;
    return 1;
  }
  return v24;
}


// ======================================================================
