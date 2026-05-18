// ADDR: 0x99ab0
// SYMBOL: sub_99AB0
unsigned int __fastcall sub_99AB0(const char *a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r9
  int v6; // r8
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r6
  int v10; // r10
  float v11; // s2
  float v12; // s4
  int v13; // r1
  __int64 v14; // d17
  float v15; // s0
  float v16; // s2
  float v17; // s0
  int v18; // s2
  int v19; // r0
  bool v20; // zf
  int v21; // r0
  float v22; // s12
  int v23; // r1
  float v24; // s8
  float v25; // s10
  float *v26; // r1
  float v27; // s14
  float v28; // s3
  int v29; // r1
  float v30; // s8
  float v31; // s10
  float v32; // s14
  float v33; // s12
  float v34; // s12
  float v35; // s8
  int v36; // r9
  void *v37; // r0
  const void *v38; // r1
  void *v39; // r4
  int v40; // r1
  int v41; // r0
  bool v42; // zf
  void *v43; // r0
  const void *v44; // r1
  void *v45; // r4
  int v46; // r1
  int v47; // r0
  bool v48; // zf
  float *v49; // r12
  int v50; // r0
  int i; // r11
  int v52; // r10
  int v53; // r0
  float *v54; // r9
  void *v55; // r0
  const void *v56; // r1
  void *v57; // r4
  int v58; // r1
  int v59; // r0
  bool v60; // zf
  __int64 v61; // d17
  _QWORD *v62; // r0
  __int64 v63; // d18
  __int64 v64; // d19
  int v65; // r0
  int v66; // r5
  int v67; // r0
  int v68; // r6
  __int64 v69; // d17
  int v70; // r0
  float v71; // s0
  float v72; // s2
  float *v73; // r0
  float v75[3]; // [sp+20h] [bp-58h] BYREF
  __int64 v76; // [sp+2Ch] [bp-4Ch]
  unsigned __int64 v77; // [sp+34h] [bp-44h]

  v3 = a2;
  v5 = dword_1ACF68;
  v6 = *(_DWORD *)(dword_1ACF68 + 6572);
  *(_BYTE *)(v6 + 124) = 1;
  v7 = sub_999D8(a1, a2);
  v9 = sub_99850((_DWORD *)v6, v7);
  v10 = v3 + 1;
  v11 = *(float *)(v6 + 436) - *(float *)(v5 + 5472);
  v12 = v11 + 1.0;
  if ( (float)(*(float *)(v6 + 520) - *(float *)(v6 + 12)) >= (float)(v11 + 1.0) )
    v12 = *(float *)(v6 + 520) - *(float *)(v6 + 12);
  v9[3] = 0;
  v9[4] = v3;
  v9[1] = a3;
  *((float *)v9 + 5) = v11;
  *((float *)v9 + 6) = v12;
  v13 = *(_DWORD *)(v6 + 204);
  *(_DWORD *)(v6 + 448) = v9;
  v9[9] = v13;
  v9[10] = *(_DWORD *)(v6 + 224);
  v14 = *(_QWORD *)(v6 + 536);
  *(_QWORD *)(v9 + 11) = *(_QWORD *)(v6 + 528);
  *(_QWORD *)(v9 + 13) = v14;
  v15 = *(float *)(v6 + 12);
  v16 = *(float *)(v6 + 436);
  *(_DWORD *)(v6 + 444) = 0;
  v17 = (float)(v15 + v16) + 0.0;
  v18 = *(_DWORD *)(v6 + 204);
  v9[7] = v18;
  v9[8] = v18;
  *(float *)(v6 + 200) = (float)(int)v17;
  v19 = v9[15];
  v20 = v19 == 0;
  if ( v19 )
    v20 = v19 == v10;
  if ( !v20 )
  {
    v36 = v9[16];
    if ( v36 <= -1 )
    {
      v36 = 0;
      if ( dword_1ACF68 )
        ++*(_DWORD *)(dword_1ACF68 + 880);
      v37 = (void *)off_117248(0, dword_1ACF70);
      v38 = (const void *)v9[17];
      v39 = v37;
      if ( v38 )
      {
        j_memcpy(v37, v38, 28 * v9[15]);
        v41 = v9[17];
        v42 = v41 == 0;
        if ( v41 )
        {
          v40 = dword_1ACF68;
          v42 = dword_1ACF68 == 0;
        }
        if ( !v42 )
          --*(_DWORD *)(v40 + 880);
        off_11724C(v41, dword_1ACF70);
      }
      v9[16] = 0;
      v9[17] = v39;
    }
    *((_BYTE *)v9 + 8) = 1;
    v9[15] = 0;
    if ( v36 > v3 )
      goto LABEL_42;
    goto LABEL_33;
  }
  *((_BYTE *)v9 + 8) = v19 == 0;
  if ( v19 )
    goto LABEL_8;
  v36 = v9[16];
  if ( v36 <= v3 )
  {
LABEL_33:
    if ( dword_1ACF68 )
      ++*(_DWORD *)(dword_1ACF68 + 880);
    v43 = (void *)off_117248(28 * v10, dword_1ACF70);
    v44 = (const void *)v9[17];
    v45 = v43;
    if ( v44 )
    {
      j_memcpy(v43, v44, 28 * v9[15]);
      v47 = v9[17];
      v48 = v47 == 0;
      if ( v47 )
      {
        v46 = dword_1ACF68;
        v48 = dword_1ACF68 == 0;
      }
      if ( !v48 )
        --*(_DWORD *)(v46 + 880);
      off_11724C(v47, dword_1ACF70);
    }
    v36 = v3 + 1;
    v9[16] = v10;
    v9[17] = v45;
  }
LABEL_42:
  if ( v3 < 0 )
    goto LABEL_62;
  v49 = v75;
  v50 = v9[15];
  for ( i = 0; ; ++i )
  {
    v76 = 0x7F7FFFFF7F7FFFFFLL;
    v77 = 0xFF7FFFFFFF7FFFFFLL;
    v75[1] = 0.0;
    v75[2] = 0.0;
    v75[0] = (float)i / (float)v3;
    if ( v50 == v36 )
    {
      v52 = v36 + 1;
      if ( v36 )
        v53 = v36 + v36 / 2;
      else
        v53 = 8;
      if ( v53 > v52 )
        v52 = v53;
      v50 = v36;
      if ( v36 < v52 )
      {
        v54 = v49;
        if ( dword_1ACF68 )
          ++*(_DWORD *)(dword_1ACF68 + 880);
        v55 = (void *)off_117248(28 * v52, dword_1ACF70);
        v56 = (const void *)v9[17];
        v57 = v55;
        if ( v56 )
        {
          j_memcpy(v55, v56, 28 * v9[15]);
          v59 = v9[17];
          v60 = v59 == 0;
          if ( v59 )
          {
            v58 = dword_1ACF68;
            v60 = dword_1ACF68 == 0;
          }
          if ( !v60 )
            --*(_DWORD *)(v58 + 880);
          off_11724C(v59, dword_1ACF70);
        }
        v50 = v9[15];
        v49 = v54;
        v9[16] = v52;
        v9[17] = v57;
      }
    }
    v8 = 12;
    v61 = *((_QWORD *)v49 + 1);
    v62 = (_QWORD *)(v9[17] + 28 * v50);
    v63 = *(_QWORD *)(v49 + 3);
    v64 = *(_QWORD *)(v49 + 5);
    *v62 = *(_QWORD *)v49;
    v62[1] = v61;
    v62 = (_QWORD *)((char *)v62 + 12);
    *v62 = v63;
    v62[1] = v64;
    v50 = v9[15] + 1;
    v9[15] = v50;
    if ( v3 == i )
      break;
    v36 = v9[16];
  }
LABEL_8:
  if ( v3 >= 1 )
  {
    v21 = 0;
    v8 = -8388609;
    do
    {
      v22 = *(float *)(v6 + 12) + 0.5;
      v23 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 448);
      v24 = *(float *)(v23 + 20);
      v25 = *(float *)(v23 + 24) - v24;
      v26 = (float *)(*(_DWORD *)(v23 + 68) + v21);
      v27 = *v26;
      v28 = v24 + (float)(v25 * v26[7]);
      v29 = v9[17] + v21;
      v21 += 28;
      *(_DWORD *)(v29 + 24) = 2139095039;
      *(_DWORD *)(v29 + 16) = -8388609;
      v30 = (float)(int)(float)(v22 + (float)(v24 + (float)(v25 * v27)));
      v31 = (float)(int)(float)((float)(v22 + v28) + -1.0);
      *(float *)(v29 + 12) = v30;
      *(float *)(v29 + 20) = v31;
      v32 = *(float *)(v6 + 532);
      v33 = *(float *)(v6 + 528);
      if ( v32 <= -3.4028e38 )
        v32 = -3.4028e38;
      if ( v33 <= v30 )
        v33 = v30;
      *(float *)(v29 + 16) = v32;
      *(float *)(v29 + 12) = v33;
      v34 = *(float *)(v6 + 540);
      v35 = *(float *)(v6 + 536);
      if ( v34 > 3.4028e38 )
        v34 = 3.4028e38;
      if ( v35 > v31 )
        v35 = v31;
      --v3;
      *(float *)(v29 + 24) = v34;
      *(float *)(v29 + 20) = v35;
    }
    while ( v3 );
  }
LABEL_62:
  v65 = v9[4];
  if ( v65 > 1 )
  {
    sub_9E0A8(*(_DWORD *)(v6 + 636) + 100, *(_DWORD *)(v6 + 636), v65 + 1, v8);
    sub_9E5DE(*(_DWORD *)(v6 + 636) + 100, *(_DWORD *)(v6 + 636), 1);
    v66 = *(_DWORD *)(dword_1ACF68 + 6572);
    v67 = *(_DWORD *)(v66 + 636);
    v68 = *(_DWORD *)(*(_DWORD *)(v66 + 448) + 68);
    *(_BYTE *)(v66 + 124) = 1;
    sub_9BFD8(v67, *(_DWORD *)(v68 + 12), *(_DWORD *)(v68 + 16), *(_DWORD *)(v68 + 20), *(float *)(v68 + 24), 0);
    v69 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v66 + 636) + 72) + 16 * *(_DWORD *)(*(_DWORD *)(v66 + 636) + 64) - 8);
    *(_QWORD *)(v66 + 528) = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v66 + 636) + 72)
                                       + 16 * *(_DWORD *)(*(_DWORD *)(v66 + 636) + 64)
                                       - 16);
    *(_QWORD *)(v66 + 536) = v69;
  }
  v70 = *(_DWORD *)(*(_DWORD *)(dword_1ACF68 + 6572) + 448);
  v71 = *(float *)(v70 + 20);
  v72 = *(float *)(v70 + 24);
  v73 = (float *)(*(_DWORD *)(v70 + 68) + 28 * *(_DWORD *)(v70 + 12));
  return sub_970FC((float)((float)(v73[7] - *v73) * (float)(v72 - v71)) * 0.65);
}


// ======================================================================
