// ADDR: 0xcf028
// SYMBOL: sub_CF028
int __fastcall sub_CF028(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v7; // r10
  __int16 *v8; // r3
  char *v9; // r5
  int v10; // r0
  int v11; // r8
  int v12; // r9
  int v13; // r4
  _DWORD *v14; // r2
  int *v15; // r0
  int v16; // r1
  int v17; // t1
  int v18; // r2
  _DWORD *v19; // r11
  _BYTE *v20; // r12
  char *v21; // r9
  int v22; // t1
  _DWORD *v23; // r3
  _DWORD *v24; // lr
  int v25; // r1
  int v26; // r4
  int v27; // r5
  int v28; // r10
  int v29; // r6
  char *v30; // r9
  int v31; // r4
  __int16 *v32; // r5
  _DWORD *v33; // r2
  int *v34; // r0
  int v35; // r1
  int v36; // t1
  _BYTE v38[88]; // [sp+8h] [bp-100h] BYREF
  _BYTE v39[92]; // [sp+60h] [bp-A8h] BYREF
  unsigned int v40; // [sp+BCh] [bp-4Ch]
  int v41; // [sp+C0h] [bp-48h]
  char *v42; // [sp+C4h] [bp-44h]
  __int64 v43; // [sp+C8h] [bp-40h]
  int v44; // [sp+D0h] [bp-38h]
  _BYTE *v45; // [sp+D4h] [bp-34h]
  char *v46; // [sp+D8h] [bp-30h]
  _BYTE *v47; // [sp+DCh] [bp-2Ch]
  __int16 *v48; // [sp+E0h] [bp-28h]
  int v49; // [sp+E4h] [bp-24h]

  HIDWORD(v7) = a4;
  if ( a5 != 4 )
  {
    v47 = v39;
    if ( a5 < 1 )
      return _stack_chk_guard - v49;
    v8 = (__int16 *)(a2 + 8 * a4);
    v44 = -a3;
    LODWORD(v7) = 12;
    v45 = v38;
    v42 = (char *)&silk_Lag_range_stage3_10_ms;
    v10 = 12;
    v9 = &silk_CB_lags_stage3_10_ms;
    goto LABEL_6;
  }
  v8 = (__int16 *)(a2 + 8 * a4);
  v44 = -a3;
  v45 = v39;
  LODWORD(v7) = silk_nb_cbk_searchs_stage3[a6];
  v47 = v38;
  if ( (int)v7 > 0 )
  {
    v9 = &silk_CB_lags_stage3;
    v42 = (char *)&silk_Lag_range_stage3 + 8 * a6;
    v10 = 34;
LABEL_6:
    v41 = v10;
    v11 = 0;
    v40 = 20 * v7;
    v43 = v7;
    do
    {
      v12 = v42[2 * v11];
      v13 = v42[(2 * v11) | 1];
      v48 = v8;
      j_celt_pitch_xcorr_c(v8, (int)&v8[v44 - v13], (int)v47, SHIDWORD(v7), 1 - v12 + v13);
      if ( v12 <= v13 )
      {
        v14 = v45;
        v15 = (int *)&v47[4 * (v13 - v12)];
        v16 = v12 - 1;
        do
        {
          v17 = *v15--;
          ++v16;
          *v14++ = v17;
        }
        while ( v16 < v13 );
      }
      v18 = v7;
      v19 = a1;
      v46 = v9;
      v20 = &v45[-4 * v12];
      v21 = v9;
      do
      {
        v22 = *v21++;
        v23 = a1;
        --v18;
        a1 += 5;
        v24 = &v20[4 * v22];
        v25 = v24[1];
        v26 = v24[2];
        v27 = v24[3];
        v28 = v24[4];
        *v23 = *v24;
        v23[1] = v25;
        v23[2] = v26;
        v23[3] = v27;
        v23[4] = v28;
      }
      while ( v18 );
      ++v11;
      v9 = &v46[v41];
      a1 = &v19[v40 / 4];
      v7 = v43;
      v8 = &v48[HIDWORD(v43)];
    }
    while ( v11 != a5 );
    return _stack_chk_guard - v49;
  }
  v29 = 0;
  v30 = (char *)&silk_Lag_range_stage3 + 8 * a6;
  do
  {
    LODWORD(v7) = v30[2 * v29];
    v31 = v30[(2 * v29) | 1];
    v32 = v8;
    j_celt_pitch_xcorr_c(v8, (int)&v8[v44 - v31], (int)v47, SHIDWORD(v7), 1 - v7 + v31);
    if ( (int)v7 <= v31 )
    {
      v33 = v45;
      v34 = (int *)&v47[4 * (v31 - v7)];
      v35 = v7 - 1;
      do
      {
        v36 = *v34--;
        ++v35;
        *v33++ = v36;
      }
      while ( v35 < v31 );
    }
    ++v29;
    v8 = &v32[HIDWORD(v7)];
  }
  while ( v29 != 4 );
  return _stack_chk_guard - v49;
}


// ======================================================================
// ADDR: 0xcf258
// SYMBOL: sub_CF258
int __fastcall sub_CF258(char *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r5
  int v9; // r10
  int v10; // r0
  int v11; // r8
  _BYTE *v12; // r1
  int v13; // r11
  char *v14; // r6
  int v15; // r4
  int v16; // r0
  _BYTE *v17; // r5
  int v18; // r0
  int *v19; // r12
  int v20; // r2
  int *v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r5
  __int16 v25; // r6
  int v26; // r0
  int v27; // r6
  bool v28; // cc
  char *v29; // r1
  int *v30; // r12
  int v31; // r2
  char *v32; // r5
  int v33; // t1
  char *v34; // r3
  int *v35; // lr
  int v36; // r4
  int v37; // r6
  int v38; // r9
  int v39; // r10
  int v40; // r10
  int v41; // r11
  int v42; // r6
  int v43; // r9
  int v44; // r8
  int v45; // r0
  int *v46; // r3
  int v47; // r2
  int v48; // r5
  __int16 v49; // r4
  int v50; // r0
  int v51; // r5
  int v53; // [sp-58h] [bp-B0h] BYREF
  _BYTE v54[84]; // [sp-54h] [bp-ACh] BYREF
  int *v55; // [sp+0h] [bp-58h]
  int v56; // [sp+4h] [bp-54h]
  int v57; // [sp+8h] [bp-50h]
  int v58; // [sp+Ch] [bp-4Ch]
  char *v59; // [sp+10h] [bp-48h]
  int v60; // [sp+14h] [bp-44h]
  int *v61; // [sp+18h] [bp-40h]
  int v62; // [sp+1Ch] [bp-3Ch]
  int v63; // [sp+20h] [bp-38h]
  _BYTE *v64; // [sp+24h] [bp-34h]
  char *v65; // [sp+28h] [bp-30h]
  int v66; // [sp+2Ch] [bp-2Ch]
  char *v67; // [sp+30h] [bp-28h]
  int v68; // [sp+34h] [bp-24h]

  v63 = a3;
  v62 = a4;
  if ( a5 != 4 )
  {
    if ( a5 <= 0 )
      return _stack_chk_guard - v68;
    v8 = a2 + 8 * a4;
    v9 = 12;
    v67 = &silk_CB_lags_stage3_10_ms;
    v59 = (char *)&silk_Lag_range_stage3_10_ms;
    v10 = 12;
    goto LABEL_6;
  }
  v8 = a2 + 8 * a4;
  v9 = silk_nb_cbk_searchs_stage3[a6];
  if ( v9 > 0 )
  {
    v67 = &silk_CB_lags_stage3;
    v59 = (char *)&silk_Lag_range_stage3 + 8 * a6;
    v10 = 34;
LABEL_6:
    v58 = v10;
    v61 = &v53;
    v60 = v9;
    v11 = v8 + 2 * ~v63;
    v12 = 0;
    v13 = v8 + 2 * (a4 - 1 - v63);
    v57 = 2 * a4;
    v55 = (int *)v54;
    v56 = 20 * v9;
    do
    {
      v14 = v59;
      v15 = v59[2 * (_DWORD)v12];
      v66 = v8;
      v16 = v8 - 2 * (v63 + v15);
      v17 = v12;
      v18 = j_silk_inner_prod_aligned(v16, v16, a4, a7);
      v19 = v61;
      v64 = v17;
      v20 = v14[(2 * (_DWORD)v17) | 1];
      *v61 = v18;
      if ( v20 > v15 )
      {
        v21 = v55;
        v22 = -v15;
        v23 = -v20;
        do
        {
          v24 = *(__int16 *)(v13 + 2 * v22);
          v25 = *(_WORD *)(v11 + 2 * v22--);
          v26 = v18 - v24 * v24;
          v27 = v25 * v25 + v26;
          v28 = v26 <= -1;
          v18 = v27;
          if ( !v28 )
            v18 = 0x7FFFFFFF;
          if ( v27 > -1 )
            v18 = v27;
          *v21++ = v18;
        }
        while ( v23 != v22 );
      }
      v29 = v67;
      v30 = &v19[-v15];
      v31 = v9;
      v32 = a1;
      v65 = a1;
      do
      {
        v33 = *v29++;
        v34 = v32;
        --v31;
        v32 += 20;
        v35 = &v30[v33];
        v36 = v35[1];
        v37 = v35[2];
        v38 = v35[3];
        v39 = v35[4];
        *(_DWORD *)v34 = *v35;
        *((_DWORD *)v34 + 1) = v36;
        *((_DWORD *)v34 + 2) = v37;
        *((_DWORD *)v34 + 3) = v38;
        *((_DWORD *)v34 + 4) = v39;
      }
      while ( v31 );
      v67 += v58;
      a4 = v62;
      a1 = &v65[v56];
      v13 += v57;
      v11 += v57;
      v9 = v60;
      v12 = v64 + 1;
      v8 = v66 + 2 * v62;
    }
    while ( v64 + 1 != (_BYTE *)a5 );
    return _stack_chk_guard - v68;
  }
  v40 = 0;
  v61 = &v53;
  v41 = a2 + 2 * (4 * a4 - 1 - v63);
  v42 = a2 + 2 * (5 * a4 - 1 - v63);
  v67 = (char *)(2 * a4);
  v64 = v54;
  v65 = (char *)&silk_Lag_range_stage3 + 8 * a6;
  do
  {
    v43 = v65[2 * v40];
    v44 = v65[(2 * v40) | 1];
    v66 = v8;
    v45 = j_silk_inner_prod_aligned(v8 - 2 * (v63 + v43), v8 - 2 * (v63 + v43), a4, a7);
    *v61 = v45;
    if ( v44 > v43 )
    {
      v46 = (int *)v64;
      v47 = -v43;
      do
      {
        v48 = *(__int16 *)(v42 + 2 * v47);
        v49 = *(_WORD *)(v41 + 2 * v47--);
        v50 = v45 - v48 * v48;
        v51 = v49 * v49 + v50;
        v28 = v50 <= -1;
        v45 = v51;
        if ( !v28 )
          v45 = 0x7FFFFFFF;
        if ( v51 > -1 )
          v45 = v51;
        *v46++ = v45;
      }
      while ( -v44 != v47 );
    }
    ++v40;
    a4 = v62;
    v41 += (int)v67;
    v42 += (int)v67;
    v8 = v66 + 2 * v62;
  }
  while ( v40 != 4 );
  return _stack_chk_guard - v68;
}


// ======================================================================
