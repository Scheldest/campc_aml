// ADDR: 0x1709d0
// SYMBOL: sub_1709D0
int __fastcall sub_1709D0(int result, float a2)
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

  v3 = (float *)(dword_381B58 + 5500);
  v4 = *(_DWORD *)(*(_DWORD *)(dword_381B58 + 6572) + 448);
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
    }
    if ( v9 )
    {
      v17 = a2;
    }
    else
    {
      v17 = v6 - (float)(*v3 * (float)(*(_DWORD *)(v4 + 16) - result));
      if ( v17 > a2 )
        v17 = a2;
    }
    *(float *)(v8 + 28 * result) = (float)(v17 - v5) / v7;
    if ( !v15 )
      break;
    ++result;
    if ( *v3 >= v16 )
      v16 = *v3;
    a2 = v17 + v16;
  }
  return result;
}


// ======================================================================
// ADDR: 0x174c68
// SYMBOL: sub_174C68
int __fastcall sub_174C68(int a1, int *a2)
{
  int result; // r0
  int *v4; // r9
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int **v8; // r12
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // lr
  int v12; // r4
  int v13; // r8
  int v14; // r6
  int v15; // r11
  int *v16; // r10
  int v17; // r9
  int *v18; // r2
  _DWORD *v19; // r5
  int v20; // r1
  int v21; // r2
  int v22; // r0
  int *v23; // r1
  int v24; // r0
  int v25; // r3
  int v26; // r1
  int v27; // r10
  int v28; // r0
  int v29; // r4
  void *v30; // r0
  const void *v31; // r1
  int v32; // r8
  int v33; // r0
  int v34; // r2
  int v35; // r4
  int v36; // r1
  int v37; // r11
  int v38; // r8
  int v39; // r11
  void *v40; // r0
  const void *v41; // r1
  int v42; // r6
  int v43; // r1
  char *v44; // r8
  int v45; // r1
  int v46; // r10
  int v47; // r0
  int v48; // r1
  int v49; // r6
  char *v50; // r9
  int *v51; // r5
  int v52; // r0
  int v53; // r4
  int v54; // r4
  int *v55; // [sp+8h] [bp-30h]
  int v56; // [sp+10h] [bp-28h]
  int v57; // [sp+14h] [bp-24h]
  int **v58; // [sp+18h] [bp-20h]
  int **v59; // [sp+18h] [bp-20h]

  result = *(_DWORD *)(a1 + 4);
  if ( result >= 2 )
  {
    v4 = a2;
    sub_174F42(a1, a2, 0);
    v5 = *v4;
    if ( *v4 )
    {
      v6 = v5 - 1;
      if ( !*(_DWORD *)(v4[2] + 40 * (v5 - 1)) )
      {
        --v5;
        *v4 = v6;
      }
    }
    else
    {
      v5 = 0;
    }
    v7 = *(_DWORD *)(a1 + 4);
    v8 = (int **)(a1 + 16);
    v57 = a1;
    v55 = v4;
    if ( v7 >= 1 )
    {
      v9 = **v8;
      if ( v9 >= 1 && (v10 = (*v8)[2]) != 0 )
      {
        v11 = (_DWORD *)(v10 + 40 * (v9 - 1));
        v12 = *v11 + v11[7];
      }
      else
      {
        v11 = 0;
        v12 = 0;
      }
      if ( (unsigned int)v7 >= 2 )
      {
        v13 = 1;
        v14 = 0;
        v15 = 0;
        v58 = (int **)(a1 + 16);
        while ( 1 )
        {
          v16 = &(*v8)[6 * v13];
          v17 = *v16;
          if ( !*v16 )
          {
            v17 = 0;
            goto LABEL_28;
          }
          v18 = v16 + 2;
          v19 = (_DWORD *)v16[2];
          if ( !v19[10 * v17 - 10] )
            break;
          if ( v17 >= 1 && v11 )
          {
            if ( memcmp(v11 + 1, v19 + 1, 0x10u) || v11[5] != v19[5] || v11[8] )
            {
              v8 = v58;
              v18 = v16 + 2;
LABEL_25:
              v20 = *v18;
              v21 = v17;
              v22 = v20 + 40 * v17;
              v23 = (int *)(v20 + 28);
              v11 = (_DWORD *)(v22 - 40);
              v24 = v16[3];
              do
              {
                v25 = *(v23 - 7);
                --v21;
                *v23 = v12;
                v23 += 10;
                v12 += v25;
              }
              while ( v21 );
              goto LABEL_29;
            }
            v8 = v58;
            v18 = v16 + 2;
            if ( v19[8] )
              goto LABEL_25;
            *v11 += *v19;
            j_memmove(v19, v19 + 10, 40 * (v17 - 1));
            v18 = v16 + 2;
            v17 = *v16 - 1;
            v8 = v58;
            goto LABEL_23;
          }
LABEL_24:
          if ( v17 > 0 )
            goto LABEL_25;
LABEL_28:
          v24 = v16[3];
LABEL_29:
          v15 += v24;
          v14 += v17;
          if ( ++v13 >= *(_DWORD *)(v57 + 4) )
          {
            v4 = v55;
            v5 = *v55;
            goto LABEL_34;
          }
        }
        --v17;
LABEL_23:
        *v16 = v17;
        goto LABEL_24;
      }
    }
    v15 = 0;
    v14 = 0;
LABEL_34:
    v26 = v4[1];
    v27 = v5 + v14;
    v59 = v8;
    if ( v26 < v5 + v14 )
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
        v30 = (void *)sub_1654B0(40 * v29);
        v31 = (const void *)v4[2];
        v32 = (int)v30;
        if ( v31 )
        {
          j_memcpy(v30, v31, 40 * *v4);
          sub_165578(v4[2]);
        }
        v8 = v59;
        v4[1] = v29;
        v4[2] = v32;
      }
    }
    v33 = v4[4];
    v34 = v4[3];
    *v4 = v27;
    v35 = v34 + v15;
    if ( v33 >= v34 + v15 )
    {
      v37 = v57;
    }
    else
    {
      if ( v33 )
        v36 = v33 + v33 / 2;
      else
        v36 = 8;
      v37 = v57;
      v38 = v35;
      if ( v36 > v35 )
        v38 = v36;
      if ( v33 < v38 )
      {
        v56 = v34;
        v39 = v14;
        v40 = (void *)sub_1654B0(2 * v38);
        v41 = (const void *)v4[5];
        v42 = (int)v40;
        if ( v41 )
        {
          j_memcpy(v40, v41, 2 * v4[3]);
          sub_165578(v4[5]);
        }
        v4[4] = v38;
        v4[5] = v42;
        v14 = v39;
        v27 = *v4;
        v8 = v59;
        v34 = v56;
        v37 = v57;
      }
    }
    v43 = *(_DWORD *)(v37 + 4);
    v44 = (char *)(v4[5] + 2 * v34);
    v4[3] = v35;
    if ( v43 >= 2 )
    {
      v45 = 5 * v27;
      v46 = 1;
      v47 = v4[2] + 8 * v45;
      v48 = -v14;
      v49 = 0;
      v50 = (char *)(v47 + 40 * v48);
      do
      {
        v51 = &(*v8)[v49];
        v52 = v51[6];
        if ( v52 )
        {
          v53 = 5 * v52;
          j_memcpy(v50, (const void *)v51[8], 40 * v52);
          v50 += 8 * v53;
        }
        v54 = v51[9];
        if ( v54 )
        {
          j_memcpy(v44, (const void *)v51[11], 2 * v54);
          v44 += 2 * v54;
        }
        v8 = v59;
        v49 += 6;
        ++v46;
      }
      while ( v46 < *(_DWORD *)(v37 + 4) );
    }
    v55[15] = (int)v44;
    sub_172AB2(v55);
    result = 1;
    *(_DWORD *)(v37 + 4) = 1;
  }
  return result;
}


// ======================================================================
