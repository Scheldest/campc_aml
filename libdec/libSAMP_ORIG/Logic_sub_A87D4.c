// ADDR: 0xa8978
// SYMBOL: sub_A8978
int __fastcall sub_A8978(float *a1, int a2, int a3, int *a4, int a5, int a6, int a7, float a8, char a9, float *a10)
{
  int v11; // r12
  int v12; // r11
  int v13; // r3
  char v14; // r1
  int v15; // r10
  int v16; // r2
  int v17; // r9
  float *v18; // r1
  float v19; // s0
  float v20; // s30
  float v21; // s17
  float v22; // s2
  float v23; // s22
  float v24; // s19
  float v25; // s4
  float v26; // r4
  float v27; // s2
  float v28; // r0
  float v29; // s28
  float v30; // s26
  int v31; // r0
  int v32; // r5
  float *v33; // r8
  int v34; // r1
  float v35; // s2
  bool v36; // fnf
  int v37; // r10
  float v38; // s21
  int v39; // r0
  bool v40; // zf
  float v41; // s23
  int v42; // r4
  float v43; // s0
  int v44; // r5
  float v45; // r0
  int v46; // r1
  int v47; // r4
  int v48; // r2
  int v49; // r2
  int v50; // r1
  int v51; // r0
  int v52; // r0
  float v53; // r0
  int v54; // r2
  int v55; // r0
  float v56; // r0
  int v57; // r5
  int v58; // r0
  float v59; // s0
  int v60; // r0
  float v61; // s4
  bool v62; // cc
  bool v63; // fnf
  float v64; // s0
  int v65; // r0
  int v66; // r0
  __int64 v67; // d17
  float v68; // s30
  float v69; // s28
  int v70; // r9
  int v71; // r2
  int v72; // r1
  int v73; // r0
  int v74; // r0
  int v75; // r0
  float v76; // s2
  float v77; // s0
  float v78; // s26
  float v79; // s2
  float v80; // s4
  float v81; // s4
  float v82; // s2
  unsigned int v85; // [sp+Ch] [bp-84h]
  int v86; // [sp+10h] [bp-80h]
  int v88; // [sp+18h] [bp-78h]
  int v89; // [sp+1Ch] [bp-74h]
  float v91[2]; // [sp+24h] [bp-6Ch] BYREF

  v11 = a5;
  v12 = a6 - a5;
  v13 = 0;
  v14 = 0;
  v86 = a6 - a5;
  if ( a6 <= a5 )
    v12 = a5 - a6;
  if ( a8 != 1.0 )
    v14 = 1;
  v85 = a3 & 0xFFFFFFFE;
  v40 = (a3 & 0xFFFFFFFE) == 8;
  v15 = dword_1ACF68;
  v16 = v40 & (unsigned __int8)v14;
  v17 = dword_1ACF68 + 5512;
  v89 = a9 & 1;
  v18 = &a1[v89];
  v19 = *v18;
  v20 = v18[2];
  v21 = (float)(v20 - *v18) + -4.0;
  v22 = *(float *)(dword_1ACF68 + 5512);
  if ( !v40 && v12 >= 0 && (float)(v21 / (float)(v12 + 1)) >= v22 )
    v22 = v21 / (float)(v12 + 1);
  v23 = (float)(v20 - *v18) + -4.0;
  if ( v22 < v21 )
    v23 = v22;
  if ( a6 * a5 < 0 )
    v13 = 1;
  v88 = v16;
  v24 = v23 * 0.5;
  if ( (v16 & v13) == 1 )
  {
    v25 = -(float)a5;
    if ( a5 > -1 )
      v25 = (float)a5;
    v26 = powf(v25, 1.0 / a8);
    v27 = -(float)a6;
    if ( a6 > -1 )
      v27 = (float)a6;
    v28 = powf(v27, 1.0 / a8);
    v11 = a5;
    v29 = v26 / (float)(v26 + v28);
  }
  else
  {
    v29 = 0.0;
    if ( a5 < 0 )
      v29 = 1.0;
  }
  v30 = v24 + (float)(v19 + 2.0);
  if ( *(_DWORD *)(v15 + 6608) != a2 )
  {
    v32 = 0;
    v33 = a1;
    goto LABEL_98;
  }
  v31 = *(_DWORD *)(v15 + 6648);
  v32 = 0;
  if ( v31 == 2 )
  {
    v37 = v11;
    sub_99284(v91, 3, 5, 0.0, 0.0);
    v38 = -v91[1];
    if ( (a9 & 1) == 0 )
      v38 = v91[0];
    v39 = *(_DWORD *)(v17 + 1340);
    v40 = v39 == a2;
    if ( v39 == a2 )
      v40 = *(_BYTE *)(v17 + 1108) == 0;
    if ( v40 )
    {
      sub_8B080();
      v33 = a1;
      v11 = v37;
      v32 = 0;
      goto LABEL_98;
    }
    v33 = a1;
    v11 = v37;
    if ( v38 == 0.0 )
      goto LABEL_84;
    if ( a6 == v37 )
    {
      v41 = 0.0;
    }
    else
    {
      v49 = a6;
      v50 = *a4;
      v51 = v37;
      if ( a6 > v37 )
      {
        v49 = v37;
        v51 = a6;
      }
      if ( v51 >= v50 )
        v51 = *a4;
      if ( v49 > v50 )
        v51 = v49;
      if ( v88 )
      {
        if ( v51 <= -1 )
        {
          v55 = sub_108848(v51 - v37, (a6 & (a6 >> 31)) - v37);
          v56 = powf(1.0 - (float)v55, 1.0 / a8);
          v11 = v37;
          v41 = v29 * (float)(1.0 - v56);
        }
        else
        {
          v52 = sub_108848(v51 - (v37 & ~(v37 >> 31)), a6 - (v37 & ~(v37 >> 31)));
          v53 = powf((float)v52, 1.0 / a8);
          v11 = v37;
          v41 = v29 + (float)(v53 * (float)(1.0 - v29));
        }
      }
      else
      {
        v41 = (float)(v51 - v37) / (float)v86;
      }
    }
    v57 = 0;
    v58 = 0;
    if ( v85 == 8 )
    {
      v58 = sub_AB7D0(a7, 3);
      v11 = v37;
    }
    if ( v58 < 1 )
      v57 = 1;
    if ( (~v88 & v57) != 0 )
    {
      v60 = dword_1ACF68;
      if ( (unsigned int)(v12 + 100) >= 0xC9 && *(float *)(dword_1ACF68 + 820) <= 0.0 )
      {
        v59 = v38 / 100.0;
      }
      else
      {
        v61 = 1.0;
        if ( v38 < 0.0 )
          v61 = -1.0;
        v59 = v61 / (float)v12;
      }
    }
    else
    {
      v59 = v38 / 100.0;
      v60 = dword_1ACF68;
      if ( *(float *)(dword_1ACF68 + 820) > 0.0 )
        v59 = v59 / 10.0;
    }
    if ( *(float *)(v60 + 824) > 0.0 )
      v59 = v59 * 10.0;
    v62 = v41 <= 1.0;
    if ( v41 >= 1.0 )
      v62 = v59 <= 0.0;
    if ( !v62 || v41 <= 0.0 && v59 < 0.0 )
    {
LABEL_84:
      v32 = 0;
      goto LABEL_98;
    }
    v43 = v41 + v59;
    v63 = v43 < 0.0;
    if ( v43 > 1.0 )
      v43 = 1.0;
    if ( v63 )
      v43 = 0.0;
    if ( v88 )
      goto LABEL_45;
LABEL_90:
    if ( v85 == 8 )
    {
      v47 = v11;
      v54 = (int)(float)((float)v11 + (float)((float)v86 * v43));
    }
    else
    {
      v47 = v11;
      v64 = v43 * (float)v86;
      v65 = (int)v64;
      if ( (int)v64 < (int)(float)(v64 + 0.5) )
        v65 = (int)(float)(v64 + 0.5);
      v54 = v65 + v11;
    }
    goto LABEL_95;
  }
  v33 = a1;
  if ( v31 != 1 )
    goto LABEL_98;
  if ( !*(_BYTE *)(v15 + 232) )
  {
    v42 = v11;
    sub_8B080();
    v11 = v42;
    v32 = 0;
    goto LABEL_98;
  }
  if ( (float)(v21 - v23) <= 0.0 )
  {
    v35 = 0.0;
    v34 = a9 & 1;
  }
  else
  {
    v34 = a9 & 1;
    v35 = (float)(*(float *)(v15 + 4 * v89 + 224) - v30) / (float)(v21 - v23);
    v36 = v35 < 0.0;
    if ( v35 > 1.0 )
      v35 = 1.0;
    if ( v36 )
      v35 = 0.0;
  }
  v43 = 1.0 - v35;
  if ( !v34 )
    v43 = v35;
  if ( !v88 )
    goto LABEL_90;
LABEL_45:
  if ( v43 >= v29 )
  {
    v47 = v11;
    if ( fabsf(v29 + -1.0) > 0.000001 )
      v43 = (float)(v43 - v29) / (float)(1.0 - v29);
    v45 = powf(v43, a8);
    v46 = v47 & ~(v47 >> 31);
    v48 = a6 - v46;
  }
  else
  {
    v44 = v11;
    v45 = powf(1.0 - (float)(v43 / v29), a8);
    v46 = a6 & (a6 >> 31);
    v47 = v44;
    v48 = v44 - v46;
  }
  v54 = (int)(float)((float)v46 + (float)((float)v48 * v45));
LABEL_95:
  v66 = sub_AF46C(a7, a3, v54);
  v11 = v47;
  if ( *a4 == v66 )
  {
    v32 = 0;
  }
  else
  {
    *a4 = v66;
    v32 = 1;
  }
LABEL_98:
  if ( v21 >= 1.0 )
  {
    v68 = (float)(v20 + -2.0) - v24;
    if ( a6 == v11 )
    {
      v69 = 0.0;
      v70 = a9 & 1;
    }
    else
    {
      v71 = a6;
      v72 = *a4;
      v73 = v11;
      if ( a6 > v11 )
      {
        v71 = v11;
        v73 = a6;
      }
      if ( v73 >= v72 )
        v73 = *a4;
      if ( v71 > v72 )
        v73 = v71;
      v70 = a9 & 1;
      if ( v88 )
      {
        if ( v73 <= -1 )
        {
          v75 = sub_108848(v73 - v11, (a6 & (a6 >> 31)) - v11);
          v69 = v29 * (float)(1.0 - powf(1.0 - (float)v75, 1.0 / a8));
        }
        else
        {
          v74 = sub_108848(v73 - (v11 & ~(v11 >> 31)), a6 - (v11 & ~(v11 >> 31)));
          v69 = v29 + (float)(powf((float)v74, 1.0 / a8) * (float)(1.0 - v29));
        }
      }
      else
      {
        v69 = (float)(v73 - v11) / (float)v86;
      }
    }
    v76 = 1.0 - v69;
    if ( !v70 )
      v76 = v69;
    v77 = -v23;
    v78 = v30 + (float)((float)(v68 - v30) * v76);
    if ( v70 )
    {
      v81 = v33[2];
      v82 = *v33;
      a10[1] = v78 + (float)(v77 * 0.5);
      a10[3] = v78 + (float)(v23 * 0.5);
      a10[2] = v81 + -2.0;
      *a10 = v82 + 2.0;
    }
    else
    {
      v79 = v33[1];
      v80 = v33[3] + -2.0;
      *a10 = v78 + (float)(v77 * 0.5);
      a10[3] = v80;
      a10[2] = v78 + (float)(v23 * 0.5);
      a10[1] = v79 + 2.0;
    }
  }
  else
  {
    v67 = *(_QWORD *)v33;
    *(_QWORD *)a10 = *(_QWORD *)v33;
    *((_QWORD *)a10 + 1) = v67;
  }
  return v32;
}


// ======================================================================
// ADDR: 0xa902c
// SYMBOL: sub_A902C
int __fastcall sub_A902C(
        float *a1,
        int a2,
        int a3,
        int *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        float a8,
        char a9,
        float *a10)
{
  float *v10; // r12
  unsigned int v12; // r8
  unsigned int v13; // r10
  int v14; // r11
  char v15; // r1
  int v16; // r4
  int v17; // lr
  float *v18; // r5
  float v19; // s28
  float v20; // s30
  float v21; // s2
  int v22; // r3
  float v23; // s26
  float v24; // s22
  int v25; // r1
  int v26; // r5
  float v27; // s2
  bool v28; // fnf
  float v29; // s19
  int v30; // r0
  bool v31; // zf
  float v32; // s21
  int v34; // r6
  float v35; // s0
  int *v36; // r5
  int v37; // r4
  int v38; // r6
  float *v39; // r9
  unsigned int v40; // r2
  unsigned int v41; // r1
  unsigned int v42; // r2
  unsigned int v43; // r0
  unsigned int v44; // r0
  unsigned int v45; // r0
  float v46; // r0
  _BOOL4 v47; // r4
  int v48; // r0
  int v49; // r0
  float v50; // s0
  float v51; // s4
  bool v52; // cc
  __int64 v53; // d17
  float v54; // s28
  float v55; // s2
  unsigned int v56; // r1
  unsigned int v57; // r0
  unsigned int v58; // r0
  float *v59; // r8
  unsigned int v60; // r0
  float v61; // r0
  float v62; // s4
  float v63; // s0
  float v64; // s22
  float v65; // s2
  float v66; // s4
  float v67; // s4
  float v68; // s2
  bool v70; // fnf
  float v71; // s0
  unsigned int v72; // r0
  int v73; // r0
  int v75; // [sp+Ch] [bp-7Ch]
  unsigned int v77; // [sp+14h] [bp-74h]
  float v79[2]; // [sp+1Ch] [bp-6Ch] BYREF

  v10 = a1;
  v12 = a6;
  v13 = a3 & 0xFFFFFFFE;
  v14 = a6 - a5;
  v15 = 0;
  v77 = a6 - a5;
  if ( a6 <= a5 )
    v14 = a5 - a6;
  if ( a8 != 1.0 )
    v15 = 1;
  v16 = dword_1ACF68 + 5512;
  v17 = a9 & 1;
  v18 = &a1[v17];
  v19 = v18[2];
  v20 = (float)(v19 - *v18) + -4.0;
  v21 = *(float *)(dword_1ACF68 + 5512);
  if ( v13 != 8 && v14 >= 0 && (float)(v20 / (float)(v14 + 1)) >= v21 )
    v21 = v20 / (float)(v14 + 1);
  v22 = (v13 == 8) & (unsigned __int8)v15;
  v23 = (float)(v19 - *v18) + -4.0;
  if ( v21 < v20 )
    v23 = v21;
  v24 = (float)(v23 * 0.5) + (float)(*v18 + 2.0);
  if ( *(_DWORD *)(dword_1ACF68 + 6608) != a2 )
    goto LABEL_66;
  v25 = *(_DWORD *)(dword_1ACF68 + 6648);
  v26 = 0;
  if ( v25 != 2 )
  {
    if ( v25 != 1 )
      goto LABEL_67;
    if ( !*(_BYTE *)(dword_1ACF68 + 232) )
    {
      v34 = v22;
      sub_8B080();
      v22 = v34;
      v10 = a1;
      v26 = 0;
      goto LABEL_67;
    }
    if ( (float)(v20 - v23) <= 0.0 )
    {
      v27 = 0.0;
    }
    else
    {
      v27 = (float)(*(float *)(dword_1ACF68 + 4 * v17 + 224) - v24) / (float)(v20 - v23);
      v28 = v27 < 0.0;
      if ( v27 > 1.0 )
        v27 = 1.0;
      if ( v28 )
        v27 = 0.0;
    }
    v35 = 1.0 - v27;
    v36 = a4;
    if ( (a9 & 1) == 0 )
      v35 = v27;
    if ( v22 )
      goto LABEL_34;
LABEL_92:
    v39 = v10;
    v37 = v22;
    v38 = v17;
    if ( v13 == 8 )
    {
      v40 = (unsigned int)(float)((float)a5 + (float)((float)v77 * v35));
    }
    else
    {
      v71 = v35 * (float)v77;
      v72 = (unsigned int)v71;
      if ( (unsigned int)v71 < (unsigned int)(float)(v71 + 0.5) )
        v72 = (unsigned int)(float)(v71 + 0.5);
      v40 = v72 + a5;
    }
    goto LABEL_97;
  }
  v75 = v22;
  sub_99284(v79, 3, 5, 0.0, 0.0);
  v29 = -v79[1];
  if ( (a9 & 1) == 0 )
    v29 = v79[0];
  v30 = *(_DWORD *)(v16 + 1340);
  v31 = v30 == a2;
  if ( v30 == a2 )
    v31 = *(_BYTE *)(v16 + 1108) == 0;
  if ( v31 )
  {
    sub_8B080();
    v17 = a9 & 1;
    v10 = a1;
    v22 = v75;
    v26 = 0;
    goto LABEL_67;
  }
  v10 = a1;
  v22 = v75;
  if ( v29 == 0.0 )
    goto LABEL_66;
  if ( a6 == a5 )
  {
    v32 = 0.0;
    v22 = v75;
  }
  else
  {
    v41 = a6;
    v42 = a5;
    v43 = *a4;
    if ( a6 > a5 )
    {
      v41 = a5;
      v42 = a6;
    }
    if ( v42 >= v43 )
      v42 = *a4;
    if ( v41 > v43 )
      v42 = v41;
    v44 = v42 - a5;
    v22 = v75;
    if ( v75 )
    {
      v45 = sub_108874(v44, v77);
      v46 = powf((float)v45, 1.0 / a8);
      v22 = v75;
      v17 = a9 & 1;
      v10 = a1;
      v32 = v46 + 0.0;
    }
    else
    {
      v32 = (float)v44 / (float)v77;
    }
  }
  v47 = 0;
  if ( v13 == 8 )
  {
    v48 = sub_AB7D0(a7, 3);
    v22 = v75;
    v17 = a9 & 1;
    v10 = a1;
    v47 = v48 > 0;
  }
  if ( (v22 | v47) == 1 )
  {
    v49 = dword_1ACF68;
    v50 = v29 / 100.0;
    if ( *(float *)(dword_1ACF68 + 820) > 0.0 )
      v50 = v50 / 10.0;
  }
  else
  {
    v49 = dword_1ACF68;
    if ( (unsigned int)(v14 + 100) >= 0xC9 && *(float *)(dword_1ACF68 + 820) <= 0.0 )
    {
      v50 = v29 / 100.0;
    }
    else
    {
      v51 = 1.0;
      if ( v29 < 0.0 )
        v51 = -1.0;
      v50 = v51 / (float)v14;
    }
  }
  if ( *(float *)(v49 + 824) > 0.0 )
    v50 = v50 * 10.0;
  v52 = v32 <= 1.0;
  if ( v32 >= 1.0 )
    v52 = v50 <= 0.0;
  if ( !v52 || v32 <= 0.0 && v50 < 0.0 )
  {
LABEL_66:
    v26 = 0;
    goto LABEL_67;
  }
  v35 = v32 + v50;
  v70 = v35 < 0.0;
  if ( v35 > 1.0 )
    v35 = 1.0;
  if ( v70 )
    v35 = 0.0;
  v36 = a4;
  if ( !v22 )
    goto LABEL_92;
LABEL_34:
  v37 = v22;
  v38 = v17;
  v39 = v10;
  if ( v35 >= 0.0 )
    v40 = (unsigned int)(float)((float)a5 + (float)((float)v77 * powf(v35, a8)));
  else
    v40 = (unsigned int)(float)((float)((float)a5 * powf(1.0 - (float)(v35 / 0.0), a8)) + 0.0);
LABEL_97:
  v73 = sub_AF538(a7, a3, v40);
  v10 = v39;
  v17 = v38;
  v22 = v37;
  if ( *v36 == v73 )
  {
    v26 = 0;
  }
  else
  {
    *v36 = v73;
    v26 = 1;
  }
LABEL_67:
  if ( v20 >= 1.0 )
  {
    v54 = (float)(v19 + -2.0) - (float)(v23 * 0.5);
    if ( a6 == a5 )
    {
      v55 = 0.0;
    }
    else
    {
      v56 = a6;
      v57 = *a4;
      if ( a6 <= a5 )
        v12 = a5;
      else
        v56 = a5;
      if ( v12 >= v57 )
        v12 = *a4;
      if ( v56 > v57 )
        v12 = v56;
      v58 = v12 - a5;
      if ( v22 )
      {
        v59 = v10;
        v60 = sub_108874(v58, v77);
        v61 = powf((float)v60, 1.0 / a8);
        v10 = v59;
        v55 = v61 + 0.0;
      }
      else
      {
        v55 = (float)v58 / (float)v77;
      }
    }
    v62 = 1.0 - v55;
    if ( !v17 )
      v62 = v55;
    v63 = -v23;
    v64 = v24 + (float)((float)(v54 - v24) * v62);
    if ( v17 )
    {
      v67 = v10[2];
      v68 = *v10;
      a10[1] = v64 + (float)(v63 * 0.5);
      a10[3] = v64 + (float)(v23 * 0.5);
      a10[2] = v67 + -2.0;
      *a10 = v68 + 2.0;
    }
    else
    {
      v65 = v10[1];
      v66 = v10[3] + -2.0;
      *a10 = v64 + (float)(v63 * 0.5);
      a10[3] = v66;
      a10[2] = v64 + (float)(v23 * 0.5);
      a10[1] = v65 + 2.0;
    }
  }
  else
  {
    v53 = *(_QWORD *)v10;
    *(_QWORD *)a10 = *(_QWORD *)v10;
    *((_QWORD *)a10 + 1) = v53;
  }
  return v26;
}


// ======================================================================
// ADDR: 0xa95b0
// SYMBOL: sub_A95B0
int __fastcall sub_A95B0(
        float *a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        float a8,
        char a9,
        float *a10)
{
  int v10; // lr
  int v11; // r8
  int v12; // r12
  int v13; // kr08_4
  unsigned __int64 v14; // kr10_8
  unsigned int v15; // r4
  int v16; // r6
  unsigned __int64 v17; // kr30_8
  _BOOL4 v18; // r5
  int v19; // r4
  int v20; // r10
  float v21; // s20
  float *v22; // r0
  float v23; // s26
  float v24; // s30
  float v25; // s17
  float v26; // r0
  float v27; // s22
  float v28; // s26
  float v29; // s19
  int v30; // r11
  __int64 v31; // r0
  double v32; // kr18_8
  double v33; // d17
  double v34; // kr20_8
  __int64 v35; // r0
  double v36; // d16
  float *v37; // r6
  double v38; // r0
  float v39; // s28
  float v40; // s26
  int v41; // r0
  int v42; // r11
  int v43; // r8
  float v44; // s0
  bool v45; // fnf
  int v46; // r8
  float v47; // s21
  int v48; // r0
  bool v49; // zf
  unsigned int v50; // r6
  int v51; // r9
  __int64 *v52; // r11
  float v53; // s23
  int v54; // r4
  float v55; // s21
  __int64 v56; // r4
  int v57; // r9
  float v58; // s0
  float v59; // s21
  float v60; // s23
  int v61; // r1
  int v62; // r5
  float v63; // r0
  __int64 v64; // kr28_8
  int v65; // r5
  __int64 v66; // r0
  int v67; // r3
  _BOOL4 v68; // r4
  unsigned int v69; // r2
  unsigned __int64 v70; // r2
  int v71; // r0
  int v72; // r1
  float v73; // r0
  float v74; // r0
  int v75; // r10
  double v76; // r4
  double v77; // r0
  int v78; // r4
  unsigned int v79; // r5
  float v80; // r9
  bool v81; // cf
  int v82; // r0
  float v83; // r0
  float v84; // r2
  float v85; // s21
  float v86; // r0
  float v87; // s2
  __int64 v88; // r2
  int v89; // r1
  int v90; // r0
  int v91; // r1
  float v92; // r0
  float v93; // r0
  int v94; // r4
  int v95; // r0
  int v96; // r5
  float v97; // s0
  int v98; // r1
  int v99; // r10
  float v100; // r0
  float v101; // s4
  bool v102; // cc
  float v103; // r4
  float v104; // r0
  double v105; // d10
  __int64 v106; // r4
  __int64 v107; // r0
  __int64 v108; // r0
  __int64 v109; // d17
  float v110; // s30
  float v111; // s28
  int v112; // r10
  __int64 v113; // kr38_8
  int v114; // r4
  __int64 v115; // r0
  int v116; // r3
  _BOOL4 v117; // r6
  unsigned int v118; // r2
  int v119; // r2
  int v120; // r0
  int v121; // r1
  float v122; // r0
  double v123; // r0
  unsigned __int64 v124; // r2
  int v125; // r0
  int v126; // r1
  float v127; // r0
  float v128; // s2
  float v129; // s0
  float v130; // s26
  float v131; // s2
  float v132; // s4
  float v133; // s4
  float v134; // s2
  int v136; // [sp+Ch] [bp-9Ch]
  unsigned int v138; // [sp+18h] [bp-90h]
  int v139; // [sp+1Ch] [bp-8Ch]
  int v140; // [sp+24h] [bp-84h]
  unsigned int v141; // [sp+28h] [bp-80h]
  int v143; // [sp+30h] [bp-78h]
  float v146[2]; // [sp+3Ch] [bp-6Ch] BYREF

  v10 = HIDWORD(a5);
  v11 = 0;
  v12 = HIDWORD(a6);
  v14 = a6 - a5;
  v139 = HIDWORD(v14);
  v13 = v14;
  v16 = (unsigned __int64)(a5 - a6) >> 32;
  v15 = a5 - a6;
  if ( a5 < a6 )
  {
    v17 = a6 - a5;
    v16 = HIDWORD(v17);
    v15 = v17;
  }
  v141 = v15;
  v138 = a3 & 0xFFFFFFFE;
  v18 = (a3 & 0xFFFFFFFE) == 8 && a8 != 1.0;
  v136 = v16;
  v19 = dword_1ACF68;
  v20 = dword_1ACF68 + 5512;
  v21 = *(float *)(dword_1ACF68 + 5512);
  v143 = a9 & 1;
  v22 = &a1[v143];
  v23 = *v22;
  v24 = v22[2];
  v25 = (float)(v24 - *v22) + -4.0;
  if ( (a3 & 0xFFFFFFFE) != 8 && v16 >= 0 )
  {
    v26 = sub_108B88(v141 + 1, (__PAIR64__(v16, v141) + 1) >> 32);
    v10 = HIDWORD(a5);
    v12 = HIDWORD(a6);
    if ( (float)(v25 / v26) >= v21 )
      v21 = v25 / v26;
  }
  v27 = v25;
  if ( v21 < v25 )
    v27 = v21;
  v28 = v23 + 2.0;
  v29 = v27 * 0.5;
  if ( (((__PAIR64__(v12, a6) * __PAIR64__(v10, a5)) >> 32) & 0x80000000) != 0LL )
    v11 = 1;
  v140 = v18;
  if ( (v18 & v11) == 1 )
  {
    v30 = v12;
    v31 = ((__int64 (__fastcall *)(_DWORD, int))sub_108B48)(a5, v10);
    v32 = 1.0 / a8;
    *(_QWORD *)&v33 = v31 ^ 0x8000000000000000LL;
    if ( v10 > -1 )
      v33 = *(double *)&v31;
    v34 = pow(v33, v32);
    v35 = ((__int64 (__fastcall *)(_DWORD, int))sub_108B48)(a6, v30);
    *(_QWORD *)&v36 = v35 ^ 0x8000000000000000LL;
    if ( v30 > -1 )
      v36 = *(double *)&v35;
    v37 = a1;
    v38 = pow(v36, v32);
    v12 = v30;
    v10 = HIDWORD(a5);
    v39 = v34 / (v34 + v38);
  }
  else
  {
    v39 = 0.0;
    if ( v10 < 0 )
      v39 = 1.0;
    v37 = a1;
  }
  v40 = v29 + v28;
  if ( *(_DWORD *)(v20 + 1096) != a2 )
  {
    v42 = 0;
    goto LABEL_112;
  }
  v41 = *(_DWORD *)(v20 + 1136);
  v42 = 0;
  v43 = a7;
  if ( v41 != 2 )
  {
    if ( v41 != 1 )
      goto LABEL_112;
    if ( !*(_BYTE *)(v19 + 232) )
    {
      v54 = v12;
      sub_8B080();
      v12 = v54;
      v42 = 0;
      goto LABEL_112;
    }
    if ( (float)(v25 - v27) <= 0.0 )
    {
      v44 = 0.0;
    }
    else
    {
      v44 = (float)(*(float *)(v19 + 4 * v143 + 224) - v40) / (float)(v25 - v27);
      v45 = v44 < 0.0;
      if ( v44 > 1.0 )
        v44 = 1.0;
      if ( v45 )
        v44 = 0.0;
    }
    v55 = 1.0 - v44;
    v50 = a5;
    v51 = a6;
    v52 = (__int64 *)a4;
    if ( (a9 & 1) == 0 )
      v55 = v44;
    if ( v18 )
      goto LABEL_44;
    goto LABEL_102;
  }
  v46 = v12;
  sub_99284(v146, 3, 5, 0.0, 0.0);
  v47 = -v146[1];
  if ( (a9 & 1) == 0 )
    v47 = v146[0];
  v48 = *(_DWORD *)(v20 + 1340);
  v49 = v48 == a2;
  if ( v48 == a2 )
    v49 = *(_BYTE *)(v20 + 1108) == 0;
  if ( v49 )
  {
    sub_8B080();
    v12 = v46;
LABEL_96:
    v42 = 0;
    v37 = a1;
    goto LABEL_112;
  }
  v50 = a5;
  v51 = a6;
  v52 = (__int64 *)a4;
  v12 = v46;
  if ( v47 == 0.0 )
    goto LABEL_96;
  if ( (unsigned int)a6 ^ (unsigned int)a5 | v46 ^ v10 )
  {
    v64 = *(_QWORD *)a4;
    v65 = v10;
    LODWORD(v66) = a5;
    if ( __SPAIR64__(v10, a5) < __SPAIR64__(v46, a6) )
    {
      v65 = v46;
      LODWORD(v66) = a6;
    }
    v67 = 0;
    v68 = __SPAIR64__(v65, v66) < v64;
    if ( __SPAIR64__(v65, v66) >= v64 )
      v65 = *(_DWORD *)(a4 + 4);
    HIDWORD(v66) = v46;
    v69 = a6;
    if ( __SPAIR64__(v10, a5) < __SPAIR64__(v46, a6) )
    {
      HIDWORD(v66) = v10;
      v69 = a5;
    }
    if ( v64 < __SPAIR64__(HIDWORD(v66), v69) )
      v67 = 1;
    if ( !v67 )
      HIDWORD(v66) = v65;
    if ( !v68 )
      LODWORD(v66) = *(_DWORD *)a4;
    if ( v67 )
      LODWORD(v66) = v69;
    if ( v140 )
    {
      v50 = a5;
      if ( SHIDWORD(v66) <= -1 )
      {
        v90 = sub_1092F4(
                v66 - a5,
                (v66 - __PAIR64__(v10, a5)) >> 32,
                (a6 & (SHIDWORD(a6) >> 31)) - a5,
                ((a6 & __PAIR64__(SHIDWORD(a6) >> 31, SHIDWORD(a6) >> 31)) - __PAIR64__(v10, a5)) >> 32);
        v92 = sub_108B88(v90, v91);
        v93 = powf(1.0 - v92, 1.0 / a8);
        v12 = HIDWORD(a6);
        v51 = a6;
        v53 = v39 * (float)(1.0 - v93);
      }
      else
      {
        LODWORD(v70) = ((((unsigned __int64)-__SPAIR64__(v10, a5) >> 32) & 0x80000000) != 0LL) ^ __OFSUB__(
                                                                                                   0,
                                                                                                   v10,
                                                                                                   (_DWORD)a5 == 0);
        HIDWORD(v70) = v70;
        if ( (_DWORD)v70 )
          v70 = __PAIR64__(v10, a5);
        v71 = sub_1092F4(v66 - v70, (v66 - v70) >> 32, a6 - v70, (a6 - v70) >> 32);
        v73 = sub_108B88(v71, v72);
        v74 = powf(v73, 1.0 / a8);
        v12 = HIDWORD(a6);
        v51 = a6;
        v53 = v39 + (float)(v74 * (float)(1.0 - v39));
      }
    }
    else
    {
      v76 = COERCE_DOUBLE(((__int64 (__fastcall *)(int, _DWORD))sub_108B48)((int)v66 - (int)a5, (v66
                                                                                               - __PAIR64__(v10, a5)) >> 32));
      v77 = sub_108B48(v13, v139);
      v12 = HIDWORD(a6);
      v51 = a6;
      v50 = a5;
      v53 = v76 / v77;
    }
    v52 = (__int64 *)a4;
  }
  else
  {
    v53 = 0.0;
  }
  v94 = 0;
  v95 = 0;
  if ( v138 == 8 )
  {
    v96 = v12;
    v95 = sub_AB7D0(a7, 3);
    v12 = v96;
  }
  if ( v95 < 1 )
    v94 = 1;
  if ( (~v140 & v94) != 0 )
  {
    v99 = v12;
    v100 = sub_108B88(v141, v136);
    v10 = HIDWORD(a5);
    v98 = dword_1ACF68;
    if ( __PAIR64__(v136, v141) + 100 >= 0xC9 && *(float *)(dword_1ACF68 + 820) <= 0.0 )
    {
      v97 = v47 / 100.0;
    }
    else
    {
      v101 = 1.0;
      if ( v47 < 0.0 )
        v101 = -1.0;
      v97 = v101 / v100;
    }
    v12 = v99;
  }
  else
  {
    v97 = v47 / 100.0;
    v10 = HIDWORD(a5);
    v98 = dword_1ACF68;
    if ( *(float *)(dword_1ACF68 + 820) > 0.0 )
      v97 = v97 / 10.0;
  }
  v43 = a7;
  if ( *(float *)(v98 + 824) > 0.0 )
    v97 = v97 * 10.0;
  v102 = v53 <= 1.0;
  if ( v53 >= 1.0 )
    v102 = v97 <= 0.0;
  if ( !v102 || v53 <= 0.0 && v97 < 0.0 )
    goto LABEL_96;
  v55 = v53 + v97;
  if ( (float)(v53 + v97) > 1.0 )
    v55 = 1.0;
  if ( (float)(v53 + v97) < 0.0 )
    v55 = 0.0;
  if ( v140 )
  {
LABEL_44:
    if ( v55 >= v39 )
    {
      v75 = v12;
      if ( fabsf(v39 + -1.0) > 0.000001 )
        v55 = (float)(v55 - v39) / (float)(1.0 - v39);
      v78 = ((((unsigned __int64)-__SPAIR64__(v10, a5) >> 32) & 0x80000000) != 0LL) ^ __OFSUB__(0, v10, (_DWORD)a5 == 0);
      v79 = v78;
      if ( v78 )
      {
        v79 = a5;
        v78 = v10;
      }
      v80 = sub_108B88(v79, v78);
      v81 = (unsigned int)a6 >= v79;
      v82 = a6 - v79;
      v62 = v10;
      v83 = sub_108B88(v82, v75 - (v78 + !v81));
      v84 = v55;
      v85 = v83;
      v86 = powf(v84, a8);
      v87 = v80;
      v57 = v75;
      v37 = a1;
      v88 = sub_108A74(v87 + (float)(v85 * v86));
      v52 = (__int64 *)a4;
      v89 = a3;
      goto LABEL_109;
    }
    LODWORD(v56) = v51 & (v12 >> 31);
    HIDWORD(v56) = v12 & (v12 >> 31);
    v57 = v12;
    v58 = 1.0 - (float)(v55 / v39);
    v59 = sub_108B88(v50 - v56, (__PAIR64__(v10, v50) - v56) >> 32);
    v60 = powf(v58, a8);
    v61 = HIDWORD(v56);
    v62 = v10;
    v43 = a7;
    v63 = sub_108B88(v56, v61) + (float)(v59 * v60);
    goto LABEL_104;
  }
LABEL_102:
  v57 = v12;
  if ( v138 != 8 )
  {
    v104 = v55 * sub_108B88(v13, v139);
    v105 = v104;
    v106 = sub_108A74(LODWORD(v104));
    v107 = sub_108A44(COERCE_UNSIGNED_INT64(v105 + 0.5), HIDWORD(COERCE_UNSIGNED_INT64(v105 + 0.5)));
    if ( v106 < v107 )
      v106 = v107;
    v88 = v106 + __PAIR64__(v10, v50);
    v62 = v10;
    v43 = a7;
    goto LABEL_108;
  }
  v62 = v10;
  v103 = sub_108B88(v50, v10);
  v63 = v103 + (float)(sub_108B88(v13, v139) * v55);
LABEL_104:
  v88 = sub_108A74(LODWORD(v63));
LABEL_108:
  v89 = a3;
  v37 = a1;
LABEL_109:
  v108 = sub_AF604(v43, v89, v88, HIDWORD(v88));
  v12 = v57;
  v10 = v62;
  if ( *v52 != v108 )
  {
    *v52 = v108;
    v42 = 1;
  }
  else
  {
    v42 = 0;
  }
LABEL_112:
  if ( v25 >= 1.0 )
  {
    v110 = (float)(v24 + -2.0) - v29;
    if ( (unsigned int)a6 ^ (unsigned int)a5 | v12 ^ v10 )
    {
      v112 = v10;
      v113 = *(_QWORD *)a4;
      v114 = v10;
      LODWORD(v115) = a5;
      v116 = 0;
      if ( __SPAIR64__(v10, a5) < __SPAIR64__(v12, a6) )
      {
        v114 = v12;
        LODWORD(v115) = a6;
      }
      v117 = __SPAIR64__(v114, v115) < v113;
      if ( __SPAIR64__(v114, v115) >= v113 )
        v114 = *(_DWORD *)(a4 + 4);
      HIDWORD(v115) = v12;
      v118 = a6;
      if ( __SPAIR64__(v10, a5) < __SPAIR64__(v12, a6) )
      {
        HIDWORD(v115) = v10;
        v118 = a5;
      }
      if ( v113 < __SPAIR64__(HIDWORD(v115), v118) )
        v116 = 1;
      if ( !v116 )
        HIDWORD(v115) = v114;
      if ( !v117 )
        LODWORD(v115) = *(_DWORD *)a4;
      if ( v116 )
        LODWORD(v115) = v118;
      if ( v140 )
      {
        if ( SHIDWORD(v115) <= -1 )
        {
          v124 = __PAIR64__(HIDWORD(a6) & (unsigned int)(SHIDWORD(a6) >> 31), (unsigned int)a6 & (SHIDWORD(a6) >> 31))
               - __PAIR64__(v10, a5);
          v125 = sub_1092F4(v115 - a5, (v115 - __PAIR64__(v10, a5)) >> 32, v124, HIDWORD(v124));
          v127 = sub_108B88(v125, v126);
          v111 = v39 * (float)(1.0 - powf(1.0 - v127, 1.0 / a8));
        }
        else
        {
          v119 = ((((unsigned __int64)-__SPAIR64__(v10, a5) >> 32) & 0x80000000) != 0LL) ^ __OFSUB__(
                                                                                             0,
                                                                                             v10,
                                                                                             (_DWORD)a5 == 0);
          if ( v119 )
            v119 = a5;
          else
            v112 = 0;
          v120 = sub_1092F4(
                   v115 - v119,
                   (v115 - __PAIR64__(v112, v119)) >> 32,
                   a6 - v119,
                   (a6 - __PAIR64__(v112, v119)) >> 32);
          v122 = sub_108B88(v120, v121);
          v111 = v39 + (float)(powf(v122, 1.0 / a8) * (float)(1.0 - v39));
        }
      }
      else
      {
        v123 = sub_108B48((int)v115 - (int)a5, (v115 - __PAIR64__(v10, a5)) >> 32);
        v111 = v123 / sub_108B48(v13, v139);
      }
      v37 = a1;
    }
    else
    {
      v111 = 0.0;
    }
    v128 = 1.0 - v111;
    if ( (a9 & 1) == 0 )
      v128 = v111;
    v129 = -v27;
    v130 = v40 + (float)((float)(v110 - v40) * v128);
    if ( (a9 & 1) != 0 )
    {
      v133 = v37[2];
      v134 = *v37;
      a10[1] = v130 + (float)(v129 * 0.5);
      a10[3] = v130 + (float)(v27 * 0.5);
      a10[2] = v133 + -2.0;
      *a10 = v134 + 2.0;
    }
    else
    {
      v131 = v37[1];
      v132 = v37[3] + -2.0;
      *a10 = v130 + (float)(v129 * 0.5);
      a10[3] = v132;
      a10[2] = v130 + (float)(v27 * 0.5);
      a10[1] = v131 + 2.0;
    }
  }
  else
  {
    v109 = *(_QWORD *)v37;
    *(_QWORD *)a10 = *(_QWORD *)v37;
    *((_QWORD *)a10 + 1) = v109;
  }
  return v42;
}


// ======================================================================
// ADDR: 0xa9ee0
// SYMBOL: sub_A9EE0
// local variable allocation has failed, the output may be wrong!
int __fastcall sub_A9EE0(
        float *a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        float a8,
        char a9,
        float *a10)
{
  unsigned int v11; // r12
  unsigned int v12; // lr
  int v13; // r10
  int v14; // kr00_4
  unsigned __int64 v15; // kr08_8
  int v16; // r5
  unsigned int v17; // r6
  unsigned __int64 v18; // kr10_8
  _BOOL4 v19; // r9
  int v20; // r4
  int v21; // r11
  float v22; // s22
  float *v23; // r0
  float v24; // s20
  float v25; // s28
  float v26; // s30
  float v27; // r0
  float v28; // s24
  float v29; // s20
  int v30; // r0
  int v31; // r2
  int v32; // r9
  float *v33; // r5
  __int64 v34; // r8
  int v35; // r0
  float v36; // s0
  bool v37; // fnf
  float v38; // s19
  int v39; // r0
  bool v40; // zf
  float v41; // s21
  unsigned int v42; // r4
  float v43; // s19
  unsigned int v44; // r4
  float v45; // r6
  float v46; // r0
  float v47; // r6
  unsigned int v48; // r0
  unsigned __int64 v49; // kr18_8
  unsigned int v50; // r5
  unsigned int v51; // r2
  int v52; // r1
  _BOOL4 v53; // r4
  unsigned int v54; // r6
  __int64 v55; // r0
  int v56; // r0
  float v57; // r0
  float v58; // r6
  float v59; // s19
  unsigned __int64 v60; // r2
  unsigned int v61; // r11
  float v62; // r0
  double v63; // d13
  unsigned int v64; // r6
  unsigned int v65; // r8
  unsigned __int64 v66; // kr20_8
  unsigned __int64 v67; // r0
  __int64 v68; // r0
  double v69; // r0
  _BOOL4 v70; // r4
  float v71; // s0
  int v72; // r1
  float v73; // r0
  float v74; // s4
  bool v75; // cc
  __int64 v76; // d17
  float v77; // s28
  float v78; // s2
  unsigned int v79; // r1
  unsigned int v80; // r4
  unsigned __int64 v81; // kr40_8
  unsigned int v82; // r2
  float *v83; // r11
  int v84; // r0
  _BOOL4 v85; // r5
  unsigned __int64 v86; // r0
  int v87; // r0
  float v88; // r0
  double v89; // r0
  float v90; // s4
  float v91; // s0
  float v92; // s20
  float v93; // s2
  float v94; // s4
  float v95; // s4
  float v96; // s2
  int v98; // [sp+8h] [bp-98h]
  unsigned int v99; // [sp+Ch] [bp-94h]
  unsigned int v101; // [sp+18h] [bp-88h]
  int v102; // [sp+20h] [bp-80h]
  int v104; // [sp+28h] [bp-78h]
  int v105; // [sp+2Ch] [bp-74h]
  int v107; // [sp+30h] [bp-70h]
  float v108[2]; // [sp+34h] [bp-6Ch] BYREF

  v11 = HIDWORD(a5);
  v12 = a6;
  v13 = 0;
  v15 = a6 - a5;
  v102 = HIDWORD(v15);
  v14 = v15;
  v16 = (a5 - a6) >> 32;
  v17 = a5 - a6;
  if ( a5 < a6 )
  {
    v18 = a6 - a5;
    v16 = HIDWORD(v18);
    v17 = v18;
  }
  if ( a8 != 1.0 )
    v13 = 1;
  v101 = a3 & 0xFFFFFFFE;
  v19 = (a3 & 0xFFFFFFFE) == 8;
  v98 = v16;
  v99 = v17;
  v20 = dword_1ACF68;
  v21 = dword_1ACF68 + 5512;
  v105 = a9 & 1;
  v22 = *(float *)(dword_1ACF68 + 5512);
  v23 = &a1[v105];
  v24 = *v23;
  v25 = v23[2];
  v26 = (float)(v25 - *v23) + -4.0;
  if ( (a3 & 0xFFFFFFFE) != 8 && v16 >= 0 )
  {
    v27 = sub_108B88(v17 + 1, (__PAIR64__(v16, v17) + 1) >> 32);
    v11 = HIDWORD(a5);
    if ( (float)(v26 / v27) >= v22 )
      v22 = v26 / v27;
  }
  v28 = v26;
  v104 = v19 & v13;
  if ( v22 < v26 )
    v28 = v22;
  v29 = (float)(v28 * 0.5) + (float)(v24 + 2.0);
  if ( *(_DWORD *)(v21 + 1096) != a2 )
  {
    v31 = 0;
    v33 = a1;
    LODWORD(v34) = a5;
    goto LABEL_87;
  }
  v30 = *(_DWORD *)(v21 + 1136);
  v31 = 0;
  v32 = a7;
  if ( v30 != 2 )
  {
    v33 = a1;
    LODWORD(v34) = a5;
    if ( v30 != 1 )
      goto LABEL_87;
    if ( *(_BYTE *)(v20 + 232) )
    {
      if ( (float)(v26 - v28) <= 0.0 )
      {
        v36 = 0.0;
        v35 = a9 & 1;
      }
      else
      {
        v35 = a9 & 1;
        v36 = (float)(*(float *)(v20 + 4 * v105 + 224) - v29) / (float)(v26 - v28);
        v37 = v36 < 0.0;
        if ( v36 > 1.0 )
          v36 = 1.0;
        if ( v37 )
          v36 = 0.0;
      }
      v43 = 1.0 - v36;
      if ( !v35 )
        v43 = v36;
      goto LABEL_34;
    }
    v42 = v11;
    sub_8B080();
    v11 = v42;
LABEL_86:
    v31 = 0;
    goto LABEL_87;
  }
  sub_99284(v108, 3, 5, 0.0, 0.0);
  v38 = -v108[1];
  if ( (a9 & 1) == 0 )
    v38 = v108[0];
  v39 = *(_DWORD *)(v21 + 1340);
  v40 = v39 == a2;
  if ( v39 == a2 )
    v40 = *(_BYTE *)(v21 + 1108) == 0;
  if ( v40 )
  {
    sub_8B080();
    v33 = a1;
    v31 = 0;
    v11 = HIDWORD(a5);
    LODWORD(v34) = a5;
    v12 = a6;
    goto LABEL_87;
  }
  v33 = a1;
  v11 = HIDWORD(a5);
  LODWORD(v34) = a5;
  v12 = a6;
  if ( v38 == 0.0 )
    goto LABEL_86;
  if ( a5 == a6 )
  {
    v41 = 0.0;
  }
  else
  {
    v48 = a6;
    HIDWORD(v34) = HIDWORD(a5);
    v49 = *(_QWORD *)a4;
    v50 = HIDWORD(a5);
    v51 = a5;
    v52 = 0;
    if ( a5 < a6 )
    {
      v50 = HIDWORD(a6);
      v51 = a6;
    }
    v53 = __PAIR64__(v50, v51) < v49;
    if ( __PAIR64__(v50, v51) >= v49 )
      v50 = a4[1];
    v54 = HIDWORD(a6);
    if ( a5 < a6 )
    {
      v54 = HIDWORD(a5);
      v48 = a5;
    }
    if ( v49 < __PAIR64__(v54, v48) )
      v52 = 1;
    if ( !v52 )
      v54 = v50;
    if ( !v53 )
      v51 = *a4;
    if ( v52 )
      v51 = v48;
    v55 = __PAIR64__(v54, v51) - v34;
    if ( v104 )
    {
      v56 = sub_1096A4(v55, HIDWORD(v55), v14, v102);
      v57 = sub_108CE8(v56);
      v41 = powf(v57, 1.0 / a8) + 0.0;
    }
    else
    {
      v69 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_108CB0)(v55, HIDWORD(v55)));
      v41 = v69 / sub_108CB0(v14, v102);
    }
    v32 = a7;
    v33 = a1;
  }
  v70 = 0;
  if ( v101 == 8 )
    v70 = sub_AB7D0(v32, 3) > 0;
  if ( (v104 | v70) == 1 )
  {
    v71 = v38 / 100.0;
    v12 = a6;
    v11 = HIDWORD(a5);
    v72 = dword_1ACF68;
    if ( *(float *)(dword_1ACF68 + 820) > 0.0 )
      v71 = v71 / 10.0;
  }
  else
  {
    v73 = sub_108B88(v99, v98);
    v72 = dword_1ACF68;
    if ( __PAIR64__(v98, v99) + 100 >= 0xC9 && *(float *)(dword_1ACF68 + 820) <= 0.0 )
    {
      v71 = v38 / 100.0;
    }
    else
    {
      v74 = 1.0;
      if ( v38 < 0.0 )
        v74 = -1.0;
      v71 = v74 / v73;
    }
    v12 = a6;
    v11 = HIDWORD(a5);
  }
  if ( *(float *)(v72 + 824) > 0.0 )
    v71 = v71 * 10.0;
  v75 = v41 <= 1.0;
  if ( v41 >= 1.0 )
    v75 = v71 <= 0.0;
  if ( !v75 || v41 <= 0.0 && v71 < 0.0 )
    goto LABEL_86;
  v43 = v41 + v71;
  if ( (float)(v41 + v71) > 1.0 )
    v43 = 1.0;
  if ( (float)(v41 + v71) < 0.0 )
    v43 = 0.0;
LABEL_34:
  if ( v104 )
  {
    v44 = v11;
    if ( v43 >= 0.0 )
    {
      v58 = powf(v43, a8);
      v59 = sub_108CE8(v14);
      v46 = sub_108CE8(v34) + (float)(v59 * v58);
    }
    else
    {
      v45 = powf(1.0 - (float)(v43 / 0.0), a8);
      v46 = (float)(sub_108CE8(v34) * v45) + 0.0;
    }
  }
  else
  {
    if ( v101 != 8 )
    {
      v61 = v11;
      v62 = v43 * sub_108CE8(v14);
      v63 = v62;
      v66 = sub_108AF0(LODWORD(v62));
      v65 = HIDWORD(v66);
      v64 = v66;
      v67 = sub_108AA0(COERCE_UNSIGNED_INT64(v63 + 0.5), HIDWORD(COERCE_UNSIGNED_INT64(v63 + 0.5)));
      if ( v66 < v67 )
      {
        v65 = HIDWORD(v67);
        v64 = v67;
      }
      v44 = v61;
      v60 = __PAIR64__(v65, v64) + __PAIR64__(v61, a5);
      LODWORD(v34) = a5;
      goto LABEL_60;
    }
    v44 = v11;
    v47 = sub_108CE8(v34);
    v46 = v47 + (float)(sub_108CE8(v14) * v43);
  }
  v60 = sub_108AF0(LODWORD(v46));
LABEL_60:
  v68 = sub_AF6F8(v32, a3, v60, HIDWORD(v60));
  v11 = v44;
  v12 = a6;
  if ( *(_QWORD *)a4 != v68 )
  {
    *(_QWORD *)a4 = v68;
    v31 = 1;
  }
  else
  {
    v31 = 0;
  }
LABEL_87:
  if ( v26 >= 1.0 )
  {
    v77 = (float)(v25 + -2.0) - (float)(v28 * 0.5);
    if ( v12 ^ (unsigned int)v34 | HIDWORD(a6) ^ v11 )
    {
      v79 = HIDWORD(a6);
      v80 = v11;
      v107 = v31;
      v81 = *(_QWORD *)a4;
      v82 = v34;
      v83 = v33;
      if ( __PAIR64__(v11, v34) < __PAIR64__(HIDWORD(a6), v12) )
      {
        v80 = HIDWORD(a6);
        v82 = v12;
      }
      v84 = 0;
      v85 = __PAIR64__(v80, v82) < v81;
      if ( __PAIR64__(v80, v82) >= v81 )
        v80 = a4[1];
      if ( __PAIR64__(v11, v34) < __PAIR64__(HIDWORD(a6), v12) )
      {
        v79 = v11;
        v12 = v34;
      }
      if ( v81 < __PAIR64__(v79, v12) )
        v84 = 1;
      if ( !v84 )
        v79 = v80;
      if ( !v85 )
        v82 = *a4;
      if ( v84 )
        v82 = v12;
      v86 = __PAIR64__(v79, v82) - __PAIR64__(v11, v34);
      if ( v104 )
      {
        v87 = sub_1096A4(v86, HIDWORD(v86), v14, v102);
        v88 = sub_108CE8(v87);
        v78 = powf(v88, 1.0 / a8) + 0.0;
      }
      else
      {
        v89 = sub_108CB0(v86, HIDWORD(v86));
        v78 = v89 / sub_108CB0(v14, v102);
      }
      v31 = v107;
      v33 = v83;
    }
    else
    {
      v78 = 0.0;
    }
    v90 = 1.0 - v78;
    if ( (a9 & 1) == 0 )
      v90 = v78;
    v91 = -v28;
    v92 = v29 + (float)((float)(v77 - v29) * v90);
    if ( (a9 & 1) != 0 )
    {
      v95 = v33[2];
      v96 = *v33;
      a10[1] = v92 + (float)(v91 * 0.5);
      a10[3] = v92 + (float)(v28 * 0.5);
      a10[2] = v95 + -2.0;
      *a10 = v96 + 2.0;
    }
    else
    {
      v93 = v33[1];
      v94 = v33[3] + -2.0;
      *a10 = v92 + (float)(v91 * 0.5);
      a10[3] = v94;
      a10[2] = v92 + (float)(v28 * 0.5);
      a10[1] = v93 + 2.0;
    }
  }
  else
  {
    v76 = *(_QWORD *)v33;
    *(_QWORD *)a10 = *(_QWORD *)v33;
    *((_QWORD *)a10 + 1) = v76;
  }
  return v31;
}


// ======================================================================
// ADDR: 0xaa5a8
// SYMBOL: sub_AA5A8
int __fastcall sub_AA5A8(
        float *a1,
        int a2,
        int a3,
        float *a4,
        float a5,
        float a6,
        int a7,
        float a8,
        char a9,
        float *a10)
{
  float v11; // s26
  float v12; // s24
  unsigned int v13; // r10
  float v15; // s30
  float v16; // s27
  __int64 v17; // r0
  float v18; // s0
  float v19; // s19
  int v20; // r9
  bool v21; // r2
  int v22; // r2
  float v23; // s23
  float v24; // s2
  float v25; // s22
  float v26; // s17
  float v27; // s25
  float v28; // s2
  float v29; // r4
  float v30; // s0
  float v31; // s21
  float v32; // s17
  int v33; // r0
  int v34; // r5
  int v35; // r1
  float v36; // s2
  bool v37; // fnf
  float v38; // s29
  int v39; // r0
  bool v40; // zf
  float v41; // s31
  float v42; // s0
  float *v43; // r5
  int v44; // r6
  float v45; // r0
  float v46; // s2
  float v47; // s0
  float v48; // s2
  float v49; // s2
  float v50; // s4
  float v51; // s0
  bool v52; // fzf
  bool v53; // fnf
  float v54; // s4
  float v55; // s0
  float v56; // r0
  float v57; // s4
  int v58; // r5
  int v59; // r0
  float v60; // s0
  int v61; // r0
  float v62; // s2
  bool v63; // cc
  __int64 v64; // d17
  float v65; // s19
  float v66; // s21
  int v67; // r6
  float v68; // s2
  float v69; // s4
  float v70; // s0
  bool v71; // fzf
  bool v72; // fnf
  float v73; // s2
  float v74; // s0
  float v75; // s17
  float v76; // s2
  float v77; // s4
  float v78; // s4
  float v79; // s2
  bool v81; // fnf
  int v84; // [sp+14h] [bp-74h]
  int v85; // [sp+18h] [bp-70h]
  float v86[2]; // [sp+1Ch] [bp-6Ch] BYREF

  v11 = a6;
  v12 = a5;
  v13 = a3 & 0xFFFFFFFE;
  v15 = a6 - a5;
  v16 = a5 - a6;
  v85 = a9 & 1;
  HIDWORD(v17) = &a1[v85];
  LODWORD(v17) = 0;
  v18 = *(float *)HIDWORD(v17);
  v19 = *(float *)(HIDWORD(v17) + 8);
  v20 = dword_1ACF68;
  v21 = (a3 & 0xFFFFFFFE) == 8;
  if ( a5 < a6 )
    v16 = a6 - a5;
  v22 = v21 && a8 != 1.0;
  v23 = (float)(v19 - v18) + -4.0;
  v24 = *(float *)(dword_1ACF68 + 5512);
  if ( v13 != 8 && v16 >= 0.0 && (float)(v23 / (float)(v16 + 1.0)) >= v24 )
    v24 = v23 / (float)(v16 + 1.0);
  v25 = (float)(v19 - v18) + -4.0;
  if ( v24 < v23 )
    v25 = v24;
  v26 = v18 + 2.0;
  v27 = v25 * 0.5;
  if ( (float)(a5 * a6) >= 0.0 )
    LODWORD(v17) = 1;
  v84 = v22;
  HIDWORD(v17) = v22 ^ 1;
  if ( v17 )
  {
    v31 = 0.0;
    if ( a5 < 0.0 )
      v31 = 1.0;
  }
  else
  {
    v28 = -a5;
    if ( a5 >= 0.0 )
      v28 = a5;
    v29 = powf(v28, 1.0 / a8);
    v30 = -a6;
    if ( a6 >= 0.0 )
      v30 = a6;
    v31 = v29 / (float)(v29 + powf(v30, 1.0 / a8));
  }
  v32 = v27 + v26;
  if ( *(_DWORD *)(v20 + 6608) != a2 )
    goto LABEL_98;
  v33 = *(_DWORD *)(v20 + 6648);
  v34 = 0;
  if ( v33 == 2 )
  {
    sub_99284(v86, 3, 5, 0.0, 0.0);
    v38 = -v86[1];
    if ( (a9 & 1) == 0 )
      v38 = v86[0];
    v39 = *(_DWORD *)(v20 + 6852);
    v40 = v39 == a2;
    if ( v39 == a2 )
      v40 = *(_BYTE *)(v20 + 6620) == 0;
    if ( !v40 )
    {
      if ( v38 != 0.0 )
      {
        if ( a5 == a6 )
        {
          v41 = 0.0;
        }
        else
        {
          v49 = a5;
          v50 = a6;
          v51 = *a4;
          if ( a5 < a6 )
          {
            v49 = a6;
            v50 = a5;
          }
          v52 = v50 == v51;
          v53 = v50 < v51;
          if ( v49 < v51 )
            v51 = v49;
          if ( !v53 && !v52 )
            v51 = v50;
          if ( v84 )
          {
            if ( v51 >= 0.0 )
            {
              v57 = a5;
              if ( a5 <= 0.0 )
                v57 = 0.0;
              v41 = v31 + (float)(powf((float)(v51 - v57) / (float)(a6 - v57), 1.0 / a8) * (float)(1.0 - v31));
            }
            else
            {
              v54 = a6;
              if ( a6 > 0.0 )
                v54 = 0.0;
              v41 = v31 * (float)(1.0 - powf(1.0 - (float)((float)(v51 - a5) / (float)(v54 - a5)), 1.0 / a8));
            }
          }
          else
          {
            v41 = (float)(v51 - a5) / v15;
          }
        }
        v58 = 0;
        v59 = 0;
        if ( v13 == 8 )
          v59 = sub_AB7D0(a7, 3);
        if ( v59 < 1 )
          v58 = 1;
        if ( (~v84 & v58) != 0 )
        {
          if ( ((v61 = dword_1ACF68, v16 < -100.0) || v16 > 100.0) && *(float *)(dword_1ACF68 + 820) <= 0.0 )
          {
            v60 = v38 / 100.0;
          }
          else
          {
            v62 = 1.0;
            if ( v38 < 0.0 )
              v62 = -1.0;
            v60 = v62 / v16;
          }
        }
        else
        {
          v60 = v38 / 100.0;
          v61 = dword_1ACF68;
          if ( *(float *)(dword_1ACF68 + 820) > 0.0 )
            v60 = v60 / 10.0;
        }
        if ( *(float *)(v61 + 824) > 0.0 )
          v60 = v60 * 10.0;
        v63 = v41 <= 1.0;
        if ( v41 >= 1.0 )
          v63 = v60 <= 0.0;
        if ( v63 && (v41 > 0.0 || v60 >= 0.0) )
        {
          v42 = v41 + v60;
          v81 = v42 < 0.0;
          if ( v42 > 1.0 )
            v42 = 1.0;
          if ( v81 )
            v42 = 0.0;
          goto LABEL_41;
        }
      }
LABEL_98:
      v34 = 0;
      goto LABEL_99;
    }
LABEL_37:
    sub_8B080();
    goto LABEL_98;
  }
  if ( v33 != 1 )
    goto LABEL_99;
  if ( !*(_BYTE *)(v20 + 232) )
    goto LABEL_37;
  if ( (float)(v23 - v25) <= 0.0 )
  {
    v36 = 0.0;
    v35 = a9 & 1;
  }
  else
  {
    v35 = a9 & 1;
    v36 = (float)(*(float *)(v20 + 4 * v85 + 224) - v32) / (float)(v23 - v25);
    v37 = v36 < 0.0;
    if ( v36 > 1.0 )
      v36 = 1.0;
    if ( v37 )
      v36 = 0.0;
  }
  v42 = 1.0 - v36;
  if ( !v35 )
    v42 = v36;
LABEL_41:
  if ( v84 )
  {
    v44 = a3;
    v43 = a4;
    if ( v42 >= v31 )
    {
      if ( fabsf(v31 + -1.0) > 0.000001 )
        v42 = (float)(v42 - v31) / (float)(1.0 - v31);
      v45 = powf(v42, a8);
      v46 = 0.0;
      if ( a5 >= 0.0 )
        v46 = a5;
      v47 = a6 - v46;
    }
    else
    {
      v45 = powf(1.0 - (float)(v42 / v31), a8);
      v46 = 0.0;
      if ( a6 < 0.0 )
        v46 = a6;
      v47 = a5 - v46;
    }
    v48 = v46 + (float)(v47 * v45);
  }
  else
  {
    if ( v13 == 8 )
    {
      v48 = a5 + (float)(v15 * v42);
    }
    else
    {
      v55 = v15 * v42;
      if ( v55 < (float)(v55 + 0.5) )
        v55 = v55 + 0.5;
      v48 = v55 + a5;
    }
    v44 = a3;
    v43 = a4;
  }
  v56 = sub_AF7EC(a7, v44, LODWORD(v48));
  if ( *v43 == v56 )
  {
    v34 = 0;
  }
  else
  {
    *v43 = v56;
    v34 = 1;
  }
LABEL_99:
  if ( v23 >= 1.0 )
  {
    v65 = (float)(v19 + -2.0) - v27;
    if ( a5 == a6 )
    {
      v66 = 0.0;
      v67 = a9 & 1;
    }
    else
    {
      v68 = a5;
      v69 = a6;
      v70 = *a4;
      if ( a5 < a6 )
      {
        v68 = a6;
        v69 = a5;
      }
      v71 = v69 == v70;
      v72 = v69 < v70;
      if ( v68 < v70 )
        v70 = v68;
      if ( !v72 && !v71 )
        v70 = v69;
      v67 = a9 & 1;
      if ( v84 )
      {
        if ( v70 >= 0.0 )
        {
          if ( a5 <= 0.0 )
            v12 = 0.0;
          v66 = v31 + (float)(powf((float)(v70 - v12) / (float)(a6 - v12), 1.0 / a8) * (float)(1.0 - v31));
        }
        else
        {
          if ( a6 > 0.0 )
            v11 = 0.0;
          v66 = v31 * (float)(1.0 - powf(1.0 - (float)((float)(v70 - a5) / (float)(v11 - a5)), 1.0 / a8));
        }
      }
      else
      {
        v66 = (float)(v70 - a5) / v15;
      }
    }
    v73 = 1.0 - v66;
    if ( !v67 )
      v73 = v66;
    v74 = -v25;
    v75 = v32 + (float)((float)(v65 - v32) * v73);
    if ( v67 )
    {
      v78 = a1[2];
      v79 = *a1;
      a10[1] = v75 + (float)(v74 * 0.5);
      a10[3] = v75 + (float)(v25 * 0.5);
      a10[2] = v78 + -2.0;
      *a10 = v79 + 2.0;
    }
    else
    {
      v76 = a1[1];
      v77 = a1[3] + -2.0;
      *a10 = v75 + (float)(v74 * 0.5);
      a10[3] = v77;
      a10[2] = v75 + (float)(v25 * 0.5);
      a10[1] = v76 + 2.0;
    }
  }
  else
  {
    v64 = *(_QWORD *)a1;
    *(_QWORD *)a10 = *(_QWORD *)a1;
    *((_QWORD *)a10 + 1) = v64;
  }
  return v34;
}


// ======================================================================
// ADDR: 0xaac70
// SYMBOL: sub_AAC70
int __fastcall sub_AAC70(
        float *a1,
        int a2,
        int a3,
        double *a4,
        double a5,
        double a6,
        int a7,
        float a8,
        char a9,
        float *a10)
{
  double v12; // d12
  double v13; // d13
  float v14; // s0
  float v15; // s19
  float v16; // s28
  __int64 v17; // r0
  int v18; // r10
  int v19; // r11
  double v20; // d15
  float v21; // s23
  float v22; // s2
  bool v23; // r2
  int v24; // r9
  double v25; // d16
  float v26; // s4
  float v27; // s22
  float v28; // s29
  double v29; // kr00_8
  double v30; // d17
  double v31; // kr08_8
  double v32; // d16
  float v33; // s21
  float v34; // s17
  int v35; // r0
  int v36; // r5
  float v37; // s2
  bool v38; // fnf
  float v39; // s20
  int v40; // r0
  bool v41; // zf
  float v42; // s6
  float v43; // s0
  float v44; // r0
  double v45; // d16
  double v46; // d17
  double v47; // d17
  double v48; // d18
  double v49; // d19
  double v50; // d16
  double v51; // d18
  float v52; // s2
  double v53; // d16
  double v54; // d18
  float v55; // s2
  int v56; // r5
  int v57; // r0
  float v58; // s0
  int v59; // r0
  float v60; // s2
  float v61; // s4
  bool v62; // cc
  bool v63; // fnf
  double v64; // d17
  double v65; // d16
  double v66; // d17
  double v67; // d16
  __int64 v68; // d17
  float v69; // s21
  double v70; // d17
  double v71; // d18
  double v72; // d19
  double v73; // d16
  float v74; // s2
  float v75; // s2
  float v76; // s2
  float v77; // s0
  float v78; // s17
  float v79; // s2
  float v80; // s4
  float v81; // s2
  float v82; // s4
  int v84; // [sp+4h] [bp-94h]
  unsigned int v86; // [sp+14h] [bp-84h]
  double v87; // [sp+18h] [bp-80h]
  int v89; // [sp+28h] [bp-70h]
  float v90[2]; // [sp+2Ch] [bp-6Ch] BYREF

  v12 = a5;
  v13 = a6;
  v89 = a9 & 1;
  HIDWORD(v17) = &a1[v89];
  v14 = *(float *)HIDWORD(v17);
  v15 = *(float *)(HIDWORD(v17) + 8);
  v16 = a8;
  LODWORD(v17) = 0;
  v18 = dword_1ACF68;
  v19 = dword_1ACF68 + 5512;
  v20 = a5 - a6;
  v21 = (float)(v15 - *(float *)HIDWORD(v17)) + -4.0;
  v87 = a6 - a5;
  if ( a5 < a6 )
    v20 = a6 - a5;
  v86 = a3 & 0xFFFFFFFE;
  v22 = *(float *)v19;
  v23 = (a3 & 0xFFFFFFFE) == 8;
  v24 = v23 && a8 != 1.0;
  if ( !v23 && v20 >= 0.0 )
  {
    v25 = v21 / (v20 + 1.0);
    v26 = v25;
    if ( v22 <= v26 )
      v22 = v25;
  }
  v27 = (float)(v15 - *(float *)HIDWORD(v17)) + -4.0;
  if ( v22 < v21 )
    v27 = v22;
  v28 = v27 * 0.5;
  if ( a5 * a6 >= 0.0 )
    LODWORD(v17) = 1;
  HIDWORD(v17) = !v23 || a8 == 1.0;
  if ( v17 )
  {
    v33 = 0.0;
    if ( a5 < 0.0 )
      v33 = 1.0;
  }
  else
  {
    v29 = 1.0 / a8;
    v30 = -a5;
    if ( a5 >= 0.0 )
      v30 = a5;
    v84 = v23 && a8 != 1.0;
    v31 = pow(v30, v29);
    v32 = -a6;
    if ( a6 >= 0.0 )
      v32 = a6;
    v24 = v84;
    v33 = v31 / (v31 + pow(v32, v29));
  }
  v34 = v28 + (float)(v14 + 2.0);
  if ( *(_DWORD *)(v19 + 1096) != a2 )
    goto LABEL_103;
  v35 = *(_DWORD *)(v19 + 1136);
  v36 = 0;
  if ( v35 == 2 )
  {
    sub_99284(v90, 3, 5, 0.0, 0.0);
    v39 = -v90[1];
    if ( (a9 & 1) == 0 )
      v39 = v90[0];
    v40 = *(_DWORD *)(v19 + 1340);
    v41 = v40 == a2;
    if ( v40 == a2 )
      v41 = *(_BYTE *)(v19 + 1108) == 0;
    if ( !v41 )
    {
      if ( v39 == 0.0 )
        goto LABEL_103;
      if ( a5 == a6 )
      {
        v42 = 0.0;
      }
      else
      {
        v47 = *a4;
        v48 = a5;
        if ( a5 < a6 )
          v48 = a6;
        v49 = a6;
        if ( a5 < a6 )
          v49 = a5;
        v50 = *a4;
        if ( v48 < v47 )
          v50 = v48;
        if ( v49 > v47 )
          v50 = v49;
        if ( v24 )
        {
          if ( v50 >= 0.0 )
          {
            v54 = a5;
            if ( a5 <= 0.0 )
              v54 = 0.0;
            v55 = (v50 - v54) / (a6 - v54);
            v42 = v33 + (float)(powf(v55, 1.0 / a8) * (float)(1.0 - v33));
          }
          else
          {
            v51 = a6;
            if ( a6 > 0.0 )
              v51 = 0.0;
            v52 = (v50 - a5) / (v51 - a5);
            v42 = v33 * (float)(1.0 - powf(1.0 - v52, 1.0 / a8));
          }
        }
        else
        {
          v42 = (v50 - a5) / v87;
        }
      }
      v56 = 0;
      v57 = 0;
      if ( v86 == 8 )
      {
        v57 = sub_AB7D0(a7, 3);
        v16 = a8;
      }
      if ( v57 < 1 )
        v56 = 1;
      if ( (~v24 & v56) != 0 )
      {
        if ( ((v59 = dword_1ACF68, v20 < -100.0) || v20 > 100.0) && *(float *)(dword_1ACF68 + 820) <= 0.0 )
        {
          v58 = v39 / 100.0;
        }
        else
        {
          v61 = 1.0;
          if ( v39 < 0.0 )
            v61 = -1.0;
          v60 = v20;
          v58 = v61 / v60;
        }
      }
      else
      {
        v58 = v39 / 100.0;
        v59 = dword_1ACF68;
        if ( *(float *)(dword_1ACF68 + 820) > 0.0 )
          v58 = v58 / 10.0;
      }
      if ( *(float *)(v59 + 824) > 0.0 )
        v58 = v58 * 10.0;
      v62 = v42 <= 1.0;
      if ( v42 >= 1.0 )
        v62 = v58 <= 0.0;
      if ( !v62 || v42 <= 0.0 && v58 < 0.0 )
        goto LABEL_103;
      v43 = v42 + v58;
      v63 = v43 < 0.0;
      if ( v43 > 1.0 )
        v43 = 1.0;
      if ( v63 )
        v43 = 0.0;
      if ( v24 )
        goto LABEL_42;
      goto LABEL_96;
    }
LABEL_37:
    sub_8B080();
    goto LABEL_103;
  }
  if ( v35 != 1 )
    goto LABEL_104;
  if ( !*(_BYTE *)(v18 + 232) )
    goto LABEL_37;
  if ( (float)(v21 - v27) <= 0.0 )
  {
    v37 = 0.0;
  }
  else
  {
    v37 = (float)(*(float *)(v18 + 4 * v89 + 224) - v34) / (float)(v21 - v27);
    v38 = v37 < 0.0;
    if ( v37 > 1.0 )
      v37 = 1.0;
    if ( v38 )
      v37 = 0.0;
  }
  v43 = 1.0 - v37;
  if ( (a9 & 1) == 0 )
    v43 = v37;
  if ( v24 )
  {
LABEL_42:
    if ( v43 >= v33 )
    {
      if ( fabsf(v33 + -1.0) > 0.000001 )
        v43 = (float)(v43 - v33) / (float)(1.0 - v33);
      v44 = powf(v43, v16);
      v45 = 0.0;
      if ( a5 >= 0.0 )
        v45 = a5;
      v46 = a6 - v45;
    }
    else
    {
      v44 = powf(1.0 - (float)(v43 / v33), v16);
      v45 = 0.0;
      if ( a6 < 0.0 )
        v45 = a6;
      v46 = a5 - v45;
    }
    v53 = v45 + v46 * v44;
    goto LABEL_101;
  }
LABEL_96:
  v64 = v43;
  if ( v86 == 8 )
  {
    v53 = a5 + v87 * v64;
  }
  else
  {
    v65 = v87 * v64;
    v66 = v87 * v64 + 0.5;
    if ( v65 < v66 )
      v65 = v66;
    v53 = v65 + a5;
  }
LABEL_101:
  v67 = COERCE_DOUBLE(sub_AF8D8(a7, a3, LODWORD(v53), HIDWORD(v53)));
  if ( *a4 != v67 )
  {
    v36 = 1;
    *a4 = v67;
    goto LABEL_104;
  }
LABEL_103:
  v36 = 0;
LABEL_104:
  if ( v21 >= 1.0 )
  {
    if ( a5 == a6 )
    {
      v69 = 0.0;
    }
    else
    {
      v70 = *a4;
      v71 = a5;
      if ( a5 < a6 )
        v71 = a6;
      v72 = a6;
      if ( a5 < a6 )
        v72 = a5;
      v73 = *a4;
      if ( v71 < v70 )
        v73 = v71;
      if ( v72 > v70 )
        v73 = v72;
      if ( v24 )
      {
        if ( v73 >= 0.0 )
        {
          if ( a5 <= 0.0 )
            v12 = 0.0;
          v75 = (v73 - v12) / (a6 - v12);
          v69 = v33 + (float)(powf(v75, 1.0 / v16) * (float)(1.0 - v33));
        }
        else
        {
          if ( a6 > 0.0 )
            v13 = 0.0;
          v74 = (v73 - a5) / (v13 - a5);
          v69 = v33 * (float)(1.0 - powf(1.0 - v74, 1.0 / v16));
        }
      }
      else
      {
        v69 = (v73 - a5) / v87;
      }
    }
    v76 = 1.0 - v69;
    if ( (a9 & 1) == 0 )
      v76 = v69;
    v77 = -v27;
    v78 = v34 + (float)((float)((float)((float)(v15 + -2.0) - v28) - v34) * v76);
    if ( (a9 & 1) != 0 )
    {
      v81 = *a1;
      v82 = a1[2] + -2.0;
      a10[1] = v78 + (float)(v77 * 0.5);
      a10[2] = v82;
      a10[3] = v78 + (float)(v27 * 0.5);
      *a10 = v81 + 2.0;
    }
    else
    {
      v79 = a1[1];
      v80 = a1[3] + -2.0;
      *a10 = v78 + (float)(v77 * 0.5);
      a10[3] = v80;
      a10[2] = v78 + (float)(v27 * 0.5);
      a10[1] = v79 + 2.0;
    }
  }
  else
  {
    v68 = *(_QWORD *)a1;
    *(_QWORD *)a10 = *(_QWORD *)a1;
    *((_QWORD *)a10 + 1) = v68;
  }
  return v36;
}


// ======================================================================
