// ADDR: 0x98c8c
// SYMBOL: sub_98C8C
float *__fastcall sub_98C8C(float *result, float *a2, float *a3, int *a4, float *a5, float *a6, int a7)
{
  float v7; // s2
  float v8; // s0
  float v9; // s1
  float v10; // s14
  float v11; // s5
  float v12; // s12
  float v13; // s4
  float v14; // s10
  float v15; // s6
  int v16; // r10
  int v17; // r5
  float v18; // s3
  float v19; // s8
  int *v20; // r4
  float v21; // s7
  float v22; // s9
  __int64 v23; // r8
  float v24; // s11
  float v25; // s5
  int *v27; // r2
  int v28; // r2
  float v29; // s16
  float *v30; // r8
  int v31; // r4
  int *v32; // r2
  int v33; // lr
  bool v34; // zf
  float v35; // s7
  float *v36; // r2
  float v37; // s7
  float v38; // s9
  _BOOL4 v39; // r9
  float v40; // s7
  float v41; // s7
  int v42; // r2
  float v43; // s7
  float v44; // s5
  int v45; // r4
  float *v46; // r6
  float v47; // s5
  int v48; // r2
  float v49; // s2
  float v50; // s0
  unsigned int v51; // r1
  _BOOL4 v52; // r4
  unsigned int v53; // r1
  _BOOL4 v54; // r2
  float v55; // s0
  float v56; // s2

  v7 = a3[1];
  v8 = *a3;
  v9 = a5[3];
  v10 = a5[2];
  v11 = a2[1];
  v12 = a5[1];
  v13 = v11;
  v14 = *a5;
  if ( v11 > (float)(v9 - v7) )
    v13 = v9 - v7;
  v15 = *a2;
  if ( *a2 > (float)(v10 - *a3) )
    v15 = v10 - *a3;
  if ( v11 < v12 )
    v13 = a5[1];
  if ( *a2 < v14 )
    v15 = *a5;
  v16 = *a4;
  if ( a7 != 1 )
  {
    v18 = a6[1];
    v19 = a6[2];
    v25 = a6[3];
LABEL_32:
    v30 = a5 + 2;
    v31 = v16 + 1;
    v32 = dword_5335C;
    if ( v16 != -1 )
      v32 = a4;
    v33 = *v32;
    v34 = v31 == 0;
    if ( v16 == -1 )
      v34 = v33 == -1;
    if ( v34 )
      goto LABEL_47;
    v35 = v14;
    v36 = a5 + 2;
    if ( v33 == 1 )
      v35 = v19;
    if ( !v33 )
      v36 = a6;
    if ( (float)(*v36 - v35) < v8 )
      goto LABEL_47;
    v37 = v12;
    if ( v33 == 3 )
      v37 = v25;
    v38 = v9;
    if ( v33 == 2 )
      v38 = v18;
    if ( (float)(v38 - v37) < v7 )
    {
LABEL_47:
      v39 = v31 == 0;
      v33 = dword_5335C[v39];
      if ( v33 == v16 )
        goto LABEL_54;
      v40 = v14;
      if ( v16 != -1 )
        v40 = v19;
      if ( (float)(*v30 - v40) < v8 )
        goto LABEL_54;
      v41 = v25;
      if ( v16 != -1 )
        v41 = v12;
      if ( (float)(v9 - v41) < v7 )
      {
LABEL_54:
        v42 = 2;
        if ( v16 != -1 )
          v42 = 1;
        v33 = dword_5335C[v42];
        if ( v33 == v16 || (float)(*v30 - v14) < v8 )
          goto LABEL_63;
        v43 = v12;
        if ( v16 != -1 )
          v43 = v25;
        v44 = v18;
        if ( v16 != -1 )
          v44 = v9;
        if ( (float)(v44 - v43) < v7 )
        {
LABEL_63:
          v45 = v42 + 1;
          v33 = dword_5335C[v42 + 1];
          if ( v33 == v16 )
            goto LABEL_70;
          v46 = a5 + 2;
          if ( v42 == 2 )
            v46 = a6;
          if ( (float)(*v46 - v14) < v8 )
            goto LABEL_70;
          v47 = v9;
          if ( v42 == 1 )
            v47 = v18;
          if ( (float)(v47 - v12) < v7 )
          {
LABEL_70:
            v48 = v42 + 2;
            if ( v48 == 4 )
              goto LABEL_76;
            v33 = dword_5335C[v48];
            if ( v33 == v16 )
              goto LABEL_76;
            if ( v48 == 3 )
              v30 = a6;
            if ( (float)(*v30 - v14) < v8 )
            {
LABEL_76:
              *a4 = -1;
              if ( (float)(v7 + a2[1]) < v9 )
                v9 = v7 + a2[1];
              v49 = v9 - v7;
              if ( (float)(v8 + *a2) < v10 )
                v10 = v8 + *a2;
              v50 = v10 - v8;
              if ( v49 >= v12 )
                v12 = v49;
              if ( v50 >= v14 )
                v14 = v50;
              *result = v14;
              result[1] = v12;
              return result;
            }
            v52 = 0;
            v53 = __clz(v48 - 3);
            v54 = 0;
            v39 = 0;
          }
          else
          {
            v39 = 0;
            v54 = v42 == 1;
            v53 = __clz(v45 - 3);
            v52 = 0;
          }
          v51 = v53 >> 5;
        }
        else
        {
          v54 = v31 == 0;
          v51 = 0;
          v52 = 0;
          v39 = v16 != -1;
        }
      }
      else
      {
        v51 = 0;
        v52 = v16 != -1;
        v54 = 0;
      }
    }
    else
    {
      v39 = v33 == 3;
      v51 = v33 == 0;
      v52 = v33 == 1;
      v54 = v33 == 2;
    }
    if ( v52 )
      v15 = v19;
    if ( v39 )
      v13 = a6[3];
    v55 = *a6 - v8;
    if ( v51 )
      v15 = v55;
    v56 = a6[1] - v7;
    if ( v54 )
      v13 = v56;
    *a4 = v33;
    *result = v15;
    result[1] = v13;
    return result;
  }
  v17 = -4;
  v18 = a6[1];
  v19 = a6[2];
  v20 = (int *)&unk_531E8;
  v21 = v18 - v7;
  *(float *)&v23 = *a6;
  v22 = v19 - v8;
  *((float *)&v23 + 1) = a6[3];
  v24 = *a6;
  if ( v16 != -1 )
    v20 = (int *)&unk_531E4;
  v25 = a6[3];
  if ( v16 != -1 )
    v17 = -5;
  while ( 1 )
  {
    v27 = v20;
    if ( v17 == -5 )
      v27 = a4;
    v28 = *v27;
    if ( v17 == -5 || v28 != v16 )
    {
      v29 = 0.0;
      *result = 0.0;
      result[1] = 0.0;
      switch ( v28 )
      {
        case 0:
          result[1] = *((float *)&v23 + 1);
          *result = v22;
          goto LABEL_24;
        case 1:
          result[1] = v21;
          *(_DWORD *)result = v23;
          goto LABEL_26;
        case 2:
          *result = v22;
          result[1] = v21;
LABEL_24:
          v29 = v19 - v8;
          break;
        case 3:
          *(_QWORD *)result = v23;
LABEL_26:
          v29 = v24;
          break;
        default:
          break;
      }
      if ( v29 >= v14 && (float)(v8 + v29) <= v10 )
        break;
    }
    ++v20;
    if ( __CFADD__(v17++, 1) )
      goto LABEL_32;
  }
  *a4 = v28;
  return result;
}


// ======================================================================
