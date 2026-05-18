// ADDR: 0x9962c
// SYMBOL: sub_9962C
int __fastcall sub_9962C(int result, float a2)
{
  float *v3; // r1
  int v4; // r2
  float v5; // s0
  float v6; // s2
  float v7; // s4
  int v8; // r3
  int v9; // r12
  int v10; // lr
  int v11; // r4
  float *v12; // r4
  float *v13; // r6
  float *v14; // r5
  int v15; // r4
  float v16; // s10
  float v17; // s12

  v3 = (float *)(dword_1ACF68 + 5500);
  v4 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 448);
  v5 = *(float *)(v4 + 20);
  v6 = *(float *)(v4 + 24);
  v7 = v6 - v5;
  v8 = *(_DWORD *)(v4 + 68);
  v9 = *(_DWORD *)(v4 + 4) & 8;
  v10 = *(_DWORD *)(v4 + 4) & 4;
  while ( 1 )
  {
    if ( result <= -1 )
      result = *(_DWORD *)(v4 + 12);
    if ( v10 || result >= *(_DWORD *)(v4 + 16) - 1 )
    {
      v15 = 0;
      v16 = 0.0;
      if ( v9 )
        goto LABEL_12;
    }
    else
    {
      v11 = result;
      if ( result <= -1 )
        v11 = *(_DWORD *)(v4 + 12);
      v12 = (float *)(v8 + 28 * v11);
      v13 = v12 + 8;
      v14 = v12;
      if ( *(_BYTE *)(v4 + 9) )
        v14 = v12 + 1;
      else
        v13 = v12 + 7;
      v15 = 1;
      v16 = (float)(*v13 - *v14) * v7;
      if ( v9 )
      {
LABEL_12:
        v17 = a2;
        goto LABEL_16;
      }
    }
    v17 = v6 - (float)(*v3 * (float)(*(_DWORD *)(v4 + 16) - result));
    if ( v17 > a2 )
      v17 = a2;
LABEL_16:
    *(float *)(v8 + 28 * result) = (float)(v17 - v5) / v7;
    if ( !v15 )
      return result;
    ++result;
    if ( *v3 >= v16 )
      v16 = *v3;
    a2 = v17 + v16;
  }
}


// ======================================================================
// ADDR: 0x9e2f4
// SYMBOL: sub_9E2F4
int __fastcall sub_9E2F4(int result, int *a2)
{
  int *v2; // r8
  int v3; // r4
  int v4; // r0
  int v5; // r1
  int **v6; // r12
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // lr
  int v10; // r5
  int v11; // r6
  int v12; // r11
  int v13; // r8
  int v14; // r0
  int *v15; // r9
  int v16; // r10
  bool v17; // zf
  int *v18; // r4
  int v19; // r2
  int v20; // r1
  bool v21; // zf
  int v22; // r2
  int *v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // r1
  int v27; // r10
  int v28; // r0
  int v29; // r5
  int **v30; // r4
  void *v31; // r0
  int *v32; // r9
  int v33; // r8
  const void *v34; // r1
  int *v35; // r1
  int v36; // r8
  int v37; // r0
  int v38; // r6
  int v39; // r1
  int v40; // r5
  void *v41; // r0
  const void *v42; // r1
  void *v43; // r4
  int v44; // r1
  int v45; // r0
  char *v46; // r8
  int v47; // r1
  int v48; // r10
  int v49; // r6
  char *v50; // r9
  int **v51; // r11
  int *v52; // r5
  int v53; // r0
  int v54; // r4
  int v55; // r4
  int v56; // [sp+0h] [bp-30h]
  int *v57; // [sp+4h] [bp-2Ch]
  int **v58; // [sp+8h] [bp-28h]
  int **v59; // [sp+8h] [bp-28h]
  int v60; // [sp+10h] [bp-20h]

  v2 = a2;
  if ( *(int *)(result + 4) < 2 )
    return result;
  v3 = result;
  sub_9E5DE(result, a2, 0);
  v4 = *v2;
  if ( *v2 )
  {
    if ( !*(_DWORD *)(v2[2] + 40 * (v4 - 1)) )
      *v2 = --v4;
  }
  else
  {
    v4 = 0;
  }
  v5 = *(_DWORD *)(v3 + 4);
  v6 = (int **)(v3 + 16);
  v57 = v2;
  v60 = v3;
  if ( v5 < 1 )
  {
LABEL_11:
    v11 = 0;
    v12 = 0;
    goto LABEL_39;
  }
  v7 = **v6;
  if ( v7 >= 1 && (v8 = (*v6)[2]) != 0 )
  {
    v9 = (_DWORD *)(v8 + 40 * (v7 - 1));
    v10 = *v9 + v9[7];
    if ( (unsigned int)v5 < 2 )
      goto LABEL_11;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( (unsigned int)v5 < 2 )
      goto LABEL_11;
  }
  v13 = 1;
  v12 = 0;
  v11 = 0;
  v58 = (int **)(v3 + 16);
  do
  {
    v15 = &(*v6)[6 * v13];
    v16 = *v15;
    if ( *v15 < 1 )
    {
LABEL_14:
      v14 = v15[3];
      goto LABEL_15;
    }
    if ( !*(_DWORD *)(v15[2] + 40 * (v16 - 1)) )
      *v15 = --v16;
    v17 = v16 == 0;
    if ( v16 )
      v17 = v9 == 0;
    if ( v17 )
    {
      if ( v16 < 1 )
        goto LABEL_14;
    }
    else
    {
      v18 = (int *)v15[2];
      if ( memcmp(v9 + 1, v18 + 1, 0x10u) || v9[5] != v18[5] )
        goto LABEL_30;
      v19 = v18[6];
      v20 = v9[6];
      v21 = v20 == v19;
      if ( v20 == v19 )
        v21 = v9[8] == 0;
      if ( v21 )
      {
        v6 = v58;
        if ( v18[8] )
        {
          v3 = v60;
        }
        else
        {
          *v9 += *v18;
          v56 = *v18;
          j_memmove(v18, v18 + 10, 40 * v16 - 40);
          v6 = v58;
          v16 = *v15 - 1;
          v3 = v60;
          v10 += v56;
          *v15 = v16;
          if ( v16 < 1 )
            goto LABEL_14;
        }
      }
      else
      {
LABEL_30:
        v3 = v60;
        v6 = v58;
      }
    }
    v14 = v15[3];
    v22 = v15[2];
    v23 = (int *)(v22 + 28);
    v9 = (_DWORD *)(v22 + 40 * v16 - 40);
    v24 = v16;
    do
    {
      v25 = *(v23 - 7);
      --v24;
      *v23 = v10;
      v23 += 10;
      v10 += v25;
    }
    while ( v24 );
LABEL_15:
    v11 += v14;
    ++v13;
    v12 += v16;
  }
  while ( v13 < *(_DWORD *)(v3 + 4) );
  v2 = v57;
  v4 = *v57;
LABEL_39:
  v26 = v2[1];
  v27 = v4 + v12;
  if ( v26 < v4 + v12 )
  {
    if ( v26 )
      v28 = v26 + v26 / 2;
    else
      v28 = 8;
    v29 = v27;
    if ( v28 > v27 )
      v29 = v28;
    if ( v26 < v29 )
    {
      v30 = v6;
      v31 = (void *)sub_885E4(40 * v29);
      v32 = v2;
      v33 = (int)v31;
      v34 = (const void *)v32[2];
      if ( v34 )
      {
        j_memcpy(v31, v34, 40 * *v32);
        sub_88614(v32[2]);
      }
      v6 = v30;
      v3 = v60;
      v32[1] = v29;
      v32[2] = v33;
      v2 = v32;
    }
  }
  v35 = v2;
  v36 = v2[3];
  v37 = v35[4];
  v38 = v11 + v36;
  *v35 = v27;
  if ( v37 < v38 )
  {
    if ( v37 )
      v39 = v37 + v37 / 2;
    else
      v39 = 8;
    v40 = v38;
    if ( v39 > v38 )
      v40 = v39;
    if ( v37 < v40 )
    {
      v59 = v6;
      v41 = (void *)sub_885E4(2 * v40);
      v42 = (const void *)v57[5];
      if ( v42 )
      {
        v43 = v41;
        j_memcpy(v41, v42, 2 * v57[3]);
        sub_88614(v57[5]);
        v41 = v43;
      }
      v27 = *v57;
      v6 = v59;
      v3 = v60;
      v57[4] = v40;
      v57[5] = (int)v41;
    }
  }
  v44 = *(_DWORD *)(v3 + 4);
  v45 = v57[5];
  v57[3] = v38;
  v46 = (char *)(v45 + 2 * v36);
  if ( v44 >= 2 )
  {
    v47 = 5 * v27;
    v48 = 1;
    v49 = 0;
    v50 = (char *)(v57[2] + 8 * v47 - 40 * v12);
    do
    {
      v51 = v6;
      v52 = &(*v6)[v49];
      v53 = v52[6];
      if ( v53 )
      {
        v54 = 5 * v53;
        j_memcpy(v50, (const void *)v52[8], 40 * v53);
        v50 += 8 * v54;
      }
      v55 = v52[9];
      if ( v55 )
      {
        j_memcpy(v46, (const void *)v52[11], 2 * v55);
        v46 += 2 * v55;
      }
      v3 = v60;
      v49 += 6;
      ++v48;
      v6 = v51;
    }
    while ( v48 < *(_DWORD *)(v60 + 4) );
  }
  v57[15] = (int)v46;
  sub_9BE2C(v57);
  result = 1;
  *(_DWORD *)(v3 + 4) = 1;
  return result;
}


// ======================================================================
