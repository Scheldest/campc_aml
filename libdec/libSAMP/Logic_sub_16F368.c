// ADDR: 0x170454
// SYMBOL: sub_170454
float *__fastcall sub_170454(float *result, float *a2, float *a3, int *a4, float *a5, float *a6, int a7)
{
  float v7; // s2
  float v8; // s0
  float v9; // s10
  float v10; // s8
  float v11; // s5
  float v12; // s6
  float v13; // s12
  float v14; // s4
  float v15; // s14
  int v16; // r11
  float v17; // s3
  int v18; // r5
  float v19; // s1
  int *v20; // r4
  float v21; // s7
  float v22; // s9
  __int64 v23; // r8
  float v24; // s11
  float v25; // s5
  int *v26; // r6
  int v27; // r6
  float v28; // s16
  bool v29; // cf
  int v30; // r5
  int *v31; // r4
  int *v32; // r2
  int v33; // r6
  float v34; // s7
  float *v35; // r2
  float v36; // s7
  float v37; // s9
  float v38; // s2
  float v39; // s0
  float v40; // s0
  float v41; // s2

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
  if ( a7 == 1 )
  {
    v17 = a6[1];
    v18 = -4;
    v19 = a6[2];
    v20 = (int *)&unk_91DC0;
    v21 = v17 - v7;
    *(float *)&v23 = *a6;
    v22 = v19 - v8;
    *((float *)&v23 + 1) = a6[3];
    v24 = *a6;
    if ( v16 != -1 )
      v20 = (int *)&unk_91DBC;
    v25 = a6[3];
    if ( v16 != -1 )
      v18 = -5;
    while ( 1 )
    {
      v26 = v20;
      if ( v18 == -5 )
        v26 = a4;
      v27 = *v26;
      if ( v18 == -5 || v27 != v16 )
      {
        v28 = 0.0;
        *result = 0.0;
        result[1] = 0.0;
        switch ( v27 )
        {
          case 0:
            result[1] = *((float *)&v23 + 1);
            *result = v22;
            goto LABEL_22;
          case 1:
            result[1] = v21;
            *(_DWORD *)result = v23;
            goto LABEL_24;
          case 2:
            *result = v22;
            result[1] = v21;
LABEL_22:
            v28 = v19 - v8;
            break;
          case 3:
            *(_QWORD *)result = v23;
LABEL_24:
            v28 = v24;
            break;
          default:
            break;
        }
        if ( v28 >= v14 && (float)(v8 + v28) <= v10 )
          break;
      }
      ++v20;
      v29 = __CFADD__(v18++, 1);
      if ( v29 )
        goto LABEL_32;
    }
    *a4 = v27;
  }
  else
  {
    v17 = a6[1];
    v19 = a6[2];
    v25 = a6[3];
LABEL_32:
    v30 = -4;
    v31 = (int *)&unk_BB50C;
    if ( v16 != -1 )
    {
      v31 = (int *)&MEMORY[0xBB508];
      v30 = -5;
    }
    while ( 1 )
    {
      v32 = v31;
      if ( v30 == -5 )
        v32 = a4;
      v33 = *v32;
      if ( v30 == -5 || v33 != v16 )
      {
        v34 = v14;
        v35 = a6;
        if ( v33 == 1 )
          v34 = v19;
        if ( v33 )
          v35 = a5 + 2;
        if ( (float)(*v35 - v34) >= v8 )
        {
          v36 = v12;
          if ( v33 == 3 )
            v36 = v25;
          v37 = v9;
          if ( v33 == 2 )
            v37 = v17;
          if ( (float)(v37 - v36) >= v7 )
            break;
        }
      }
      ++v31;
      v29 = __CFADD__(v30++, 1);
      if ( v29 )
      {
        *a4 = -1;
        if ( (float)(v7 + a2[1]) < v9 )
          v9 = v7 + a2[1];
        v38 = v9 - v7;
        if ( (float)(v8 + *a2) < v10 )
          v10 = v8 + *a2;
        v39 = v10 - v8;
        if ( v38 >= v12 )
          v12 = v38;
        if ( v39 >= v14 )
          v14 = v39;
        *result = v14;
        result[1] = v12;
        return result;
      }
    }
    if ( v33 == 1 )
      v15 = v19;
    if ( v33 == 3 )
      v13 = a6[3];
    v40 = *a6 - v8;
    if ( !v33 )
      v15 = v40;
    v41 = a6[1] - v7;
    if ( v33 == 2 )
      v13 = v41;
    *a4 = v33;
    *result = v15;
    result[1] = v13;
  }
  return result;
}


// ======================================================================
