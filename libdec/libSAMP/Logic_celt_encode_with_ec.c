// ADDR: 0x1b7648
// SYMBOL: sub_1B7648
int __fastcall sub_1B7648(
        _DWORD *a1,
        char *a2,
        char *src,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _WORD *a8,
        int *a9,
        int a10,
        int a11)
{
  int v12; // r9
  int v13; // r6
  char *v14; // r5
  int v15; // r0
  int v16; // r4
  char *v17; // r6
  int v18; // r10
  char *v19; // r5
  _DWORD *v20; // r4
  int v21; // r0
  int *v22; // r10
  __int16 *v23; // r4
  int v24; // t1
  __int16 v25; // r0
  int v26; // r2
  int *v27; // lr
  unsigned int v28; // r1
  int v29; // r0
  int v30; // r3
  unsigned int v31; // r1
  int v32; // r0
  __int16 v33; // r6
  int v34; // r12
  int v35; // r5
  _DWORD *v36; // r4
  int v37; // r2
  int v38; // r6
  int v39; // r2
  char *v40; // r11
  int v41; // r2
  bool v42; // cc
  int v43; // r1
  int v44; // r2
  int v45; // r8
  char *v46; // r6
  _DWORD *v47; // r4
  int v48; // r9
  int v49; // r5
  int v50; // r10
  int v51; // r3
  _DWORD *v52; // r4
  char *v53; // r5
  _DWORD *v54; // r9
  char *v55; // r6
  char *v56; // r4
  char *v57; // r10
  _DWORD *v58; // r6
  int v59; // r9
  int v60; // r5
  int v61; // r10
  _DWORD *v62; // r5
  char *v63; // r9
  _DWORD *v64; // r11
  size_t v65; // r5
  char *v66; // r10
  char *v67; // r4
  char *v68; // r11
  unsigned int v70; // [sp+4h] [bp-9Ch]
  int v71; // [sp+20h] [bp-80h] BYREF
  int v72; // [sp+24h] [bp-7Ch]
  int v73; // [sp+28h] [bp-78h]
  size_t v74; // [sp+2Ch] [bp-74h]
  size_t v75; // [sp+30h] [bp-70h]
  size_t v76; // [sp+34h] [bp-6Ch]
  int v77; // [sp+38h] [bp-68h]
  _DWORD *v78; // [sp+3Ch] [bp-64h]
  int v79; // [sp+40h] [bp-60h]
  int v80; // [sp+44h] [bp-5Ch]
  void *v81; // [sp+48h] [bp-58h]
  int *v82; // [sp+4Ch] [bp-54h]
  int v83; // [sp+50h] [bp-50h]
  void *dest; // [sp+54h] [bp-4Ch]
  _DWORD *v85; // [sp+58h] [bp-48h]
  int v86; // [sp+5Ch] [bp-44h]
  void *v87; // [sp+60h] [bp-40h]
  size_t n; // [sp+64h] [bp-3Ch]
  _DWORD *v89; // [sp+68h] [bp-38h]
  int v90; // [sp+6Ch] [bp-34h]
  int v91; // [sp+70h] [bp-30h] BYREF
  _DWORD v92[2]; // [sp+74h] [bp-2Ch] BYREF

  v12 = a5 + 1024;
  v85 = a1;
  v89 = (_DWORD *)*a1;
  v13 = v89[1];
  v92[0] = (char *)&v71 - ((4 * a4 * (a5 + 1024) + 7) & 0xFFFFFFF8);
  v92[1] = v92[0] + 4 * (a5 + 1024);
  v14 = &a2[4 * v13];
  v90 = v13;
  v15 = 4 * (v13 + a5);
  v16 = 0;
  v17 = src;
  dest = a2;
  v87 = src;
  v86 = v15;
  n = 4 * a5;
  do
  {
    v18 = v92[v16];
    j_memcpy((void *)v18, v17, 0x1000u);
    j_memcpy((void *)(v18 + 4096), v14, n);
    ++v16;
    v17 += 4096;
    v14 += v86;
  }
  while ( v16 < a4 );
  if ( a10 )
  {
    v19 = (char *)&v71 - (((v12 & 0xFFFFFFFE) + 7) & 0xFFFFFFF8);
    v20 = v85;
    j_pitch_downsample((int)v92, v19, v12, a4, v85[18]);
    j_pitch_search(v19 + 1024, v19, a5, 979, &v91, v20[18]);
    v91 = 1024 - v91;
    v21 = v20[26];
    v22 = v20 + 26;
    v24 = *((__int16 *)v20 + 54);
    v23 = (__int16 *)(v20 + 27);
    v25 = j_remove_doubling((int)v19, 1024, 0xFu, a5, &v91, v21, v24);
    v26 = v91;
    v27 = v22;
    if ( v91 >= 1023 )
    {
      v26 = 1022;
      v91 = 1022;
    }
    v28 = 22938 * v25;
    v29 = v85[14];
    v30 = 2 * v28;
    v31 = v28 >> 15;
    if ( v29 > 2 )
      v31 = v30 >> 17;
    if ( v29 >= 5 )
      v31 = (unsigned int)(__int16)v31 >> 1;
    if ( v29 > 8 )
      LOWORD(v31) = 0;
  }
  else
  {
    v26 = 15;
    LOWORD(v31) = 0;
    v91 = 15;
    v23 = (__int16 *)(v85 + 27);
    v27 = v85 + 26;
  }
  v32 = *v27;
  v33 = 6554;
  v34 = *v23;
  v35 = v26 - *v27;
  if ( v35 < 0 )
    v35 = *v27 - v26;
  v36 = v85;
  if ( 10 * v35 > v26 )
    v33 = 13108;
  if ( a11 < 25 )
    v33 += 3277;
  if ( a11 < 35 )
    v33 += 3277;
  if ( v34 >= 13108 )
  {
    if ( v34 < 18023 )
      v33 -= 3277;
    else
      v33 -= 6554;
  }
  v37 = v33;
  v38 = 6554;
  if ( v37 > 6554 )
    v38 = v37;
  if ( v38 <= (__int16)v31 )
  {
    v41 = (__int16)v31 - v34;
    v40 = (char *)dest;
    if ( v41 < 0 )
      v41 = v34 - (__int16)v31;
    v42 = v41 < 3277;
    LOWORD(v41) = 21846;
    if ( v42 )
      LOWORD(v31) = v34;
    HIWORD(v41) = 21845;
    v43 = ((__int16)v31 + 1536) >> 10;
    v44 = ((unsigned __int64)(v43 * (__int64)v41) >> 32)
        + ((unsigned int)((unsigned __int64)(v43 * (__int64)v41) >> 32) >> 31)
        - 1;
    if ( v44 >= 7 )
      v44 = 7;
    if ( v43 <= 5 )
      v44 = 0;
    v73 = v44;
    v39 = 3072 * v44 + 3072;
    v71 = 1;
  }
  else
  {
    v39 = 0;
    v71 = 0;
    v73 = 0;
    v40 = (char *)dest;
  }
  dest = (void *)a4;
  v83 = -(unsigned __int16)v39;
  v72 = v39;
  v82 = v27;
  v45 = 4 * v90;
  if ( a5 <= 1024 )
  {
    v57 = (char *)(v85 + 61);
    v58 = v92;
    v59 = 0;
    v76 = 4 * (1024 - a5);
    v75 = v76 - 4096;
    v80 = 1;
    while ( 1 )
    {
      if ( v32 <= 15 )
        v32 = 15;
      v60 = v89[9];
      *v27 = v32;
      v81 = v57;
      j_memcpy(v40, v57, v45);
      v77 = v59;
      v78 = v58;
      v61 = v60 - v90;
      v79 = v60;
      if ( v60 == v90 )
      {
        v62 = v58;
      }
      else
      {
        j_comb_filter(
          (int)&v40[v45],
          (char *)(*v58 + 4096),
          v36[26],
          v36[26],
          v60 - v90,
          (__int16)-*((_WORD *)v36 + 54),
          (__int16)-*((_WORD *)v36 + 54),
          v36[28],
          v36[28],
          0,
          0);
        v62 = &v92[v59];
      }
      v63 = v40;
      v64 = v62;
      j_comb_filter(
        (int)&v63[4 * v79],
        (char *)(*v62 + 4 * v61 + 4096),
        v36[26],
        v91,
        a5 - v61,
        (__int16)-*((_WORD *)v36 + 54),
        (__int16)v83,
        v36[28],
        a6,
        v89[13],
        v90);
      v65 = n;
      v66 = (char *)v81;
      j_memcpy(v81, &v63[n], v45);
      v67 = (char *)v87;
      j_memmove(v87, (char *)v87 + v65, v76);
      j_memcpy(&v67[v75 + 4096], (const void *)(*v64 + 4096), v65);
      v68 = v63;
      if ( v80 >= (int)dest )
        break;
      v27 = v82;
      v57 = &v66[v45];
      v59 = v77 + 1;
      v87 = v67 + 4096;
      v58 = v78 + 1;
      ++v80;
      v40 = &v68[v86];
      v32 = *v82;
      v36 = v85;
    }
  }
  else
  {
    v46 = (char *)(v85 + 61);
    v47 = v92;
    v48 = 0;
    v80 = 1;
    v74 = 4 * v90;
    while ( 1 )
    {
      if ( v32 <= 15 )
        v32 = 15;
      v49 = v89[9];
      *v27 = v32;
      j_memcpy(v40, v46, v45);
      v79 = v49;
      v50 = v49 - v90;
      v81 = v46;
      v77 = v48;
      v78 = v47;
      if ( v49 == v90 )
      {
        v54 = v47;
        v53 = v40;
        v52 = v85;
      }
      else
      {
        v51 = *v47;
        v70 = (__int16)-*((_WORD *)v85 + 54);
        v52 = v85;
        j_comb_filter(
          (int)&v40[v45],
          (char *)(v51 + 4096),
          v85[26],
          v85[26],
          v49 - v90,
          v70,
          v70,
          v85[28],
          v85[28],
          0,
          0);
        v53 = v40;
        v54 = &v92[v48];
      }
      j_comb_filter(
        (int)&v53[4 * v79],
        (char *)(*v54 + 4 * v50 + 4096),
        v52[26],
        v91,
        a5 - v50,
        (__int16)-*((_WORD *)v52 + 54),
        (__int16)v83,
        v52[28],
        a6,
        v89[13],
        v90);
      v45 = v74;
      v55 = (char *)v81;
      j_memcpy(v81, &v53[n], v74);
      v56 = (char *)v87;
      j_memcpy(v87, (const void *)(*v54 + 4 * a5), 0x1000u);
      if ( v80 >= (int)dest )
        break;
      v27 = v82;
      v46 = &v55[v45];
      v87 = v56 + 4096;
      v48 = v77 + 1;
      v40 = &v53[v86];
      ++v80;
      v32 = *v82;
      v47 = v78 + 1;
    }
  }
  *a8 = v72;
  *a7 = v91;
  *a9 = v73;
  return v71;
}


// ======================================================================
// ADDR: 0x1b7bd8
// SYMBOL: sub_1B7BD8
bool __fastcall sub_1B7BD8(int a1, int a2, int a3, _WORD *a4, _DWORD *a5, int a6, _DWORD *a7)
{
  _DWORD *v10; // r8
  int v11; // r3
  int v12; // r12
  int v13; // lr
  int v14; // r10
  unsigned int v15; // r4
  int v16; // r0
  int v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r6
  int v24; // r6
  __int16 *v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r6
  int v29; // t1
  int v30; // r0
  signed int v31; // r0
  __int16 *v32; // r2
  int v33; // r3
  __int16 v34; // r0
  signed int v35; // r1
  int v36; // r6
  int v37; // t1
  unsigned int v38; // r0
  _WORD *v39; // r1
  int v40; // r2
  int v41; // r1
  int v42; // r2
  int v43; // r0
  unsigned int v44; // r3
  char *v45; // r5
  int v46; // r1
  int v47; // r2
  int v48; // r10
  bool v49; // cc
  __int16 v50; // r5
  __int16 v51; // r0
  int v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r0
  int v56; // r3
  int v57; // r6
  int v58; // r6
  int v59; // r5
  unsigned __int8 *v60; // r6
  int v61; // r0
  int v62; // r2
  _BOOL4 v63; // r4
  int v64; // r5
  int v65; // r0
  int v66; // r2
  int v67; // r0
  _WORD *v69; // [sp+0h] [bp-60h] BYREF
  char *v70; // [sp+4h] [bp-5Ch]
  int v71; // [sp+8h] [bp-58h]
  int v72; // [sp+Ch] [bp-54h]
  __int16 *v73; // [sp+10h] [bp-50h]
  int v74; // [sp+14h] [bp-4Ch]
  int v75; // [sp+18h] [bp-48h]
  int v76; // [sp+1Ch] [bp-44h]
  unsigned int v77; // [sp+20h] [bp-40h]
  int v78; // [sp+24h] [bp-3Ch]
  int v79; // [sp+28h] [bp-38h]
  int v80; // [sp+2Ch] [bp-34h]
  int v81; // [sp+30h] [bp-30h]
  int v82; // [sp+34h] [bp-2Ch]
  int v83; // [sp+38h] [bp-28h]

  v10 = (_WORD **)((char *)&v69 - ((2 * a2 + 7) & 0xFFFFFFF8));
  v11 = 0;
  v12 = 4;
  *a7 = 0;
  if ( a6 )
    v12 = 5;
  v80 = a3;
  if ( a3 < 1 )
  {
    v63 = 0;
  }
  else
  {
    v69 = a4;
    v13 = 0;
    v14 = a2 / 2;
    v78 = 6 * (a2 / 2) - 102;
    v15 = (unsigned int)(1 << v12) >> 1;
    v70 = (char *)v10 - 2;
    v73 = (__int16 *)v10 + 1;
    v72 = a2 - 1;
    v76 = 4 * a2;
    v71 = a2 / 2 - 5;
    v75 = (a2 / 2) << 20;
    v74 = (__int16)((a2 / 2) >> 1);
    v83 = 0;
    v79 = v12;
    v81 = a2 / 2;
    v77 = v15;
    do
    {
      v16 = 0;
      v82 = v13;
      if ( a2 <= 0 )
      {
        *v10 = 0;
        v10[1] = 0;
        v27 = 0;
        v10[2] = 0;
        v10[3] = 0;
        v10[4] = 0;
        v10[5] = 0;
      }
      else
      {
        v17 = 0;
        v18 = 0;
        do
        {
          v19 = *(_DWORD *)(a1 + 4 * v16);
          v20 = v17 + (v19 >> 12);
          v21 = v19 >> 12;
          v22 = v18 + v20;
          v23 = -32767;
          if ( (v20 + 2) >> 2 > -32767 )
            v23 = (v20 + 2) >> 2;
          if ( v23 >= 0x7FFF )
            LOWORD(v23) = 0x7FFF;
          *((_WORD *)v10 + v16) = v23;
          v24 = v21 - (v20 >> 1);
          v17 = v22 - 2 * v21;
          ++v16;
          v18 = v24;
        }
        while ( a2 != v16 );
        *v10 = 0;
        v10[1] = 0;
        v10[2] = 0;
        v10[3] = 0;
        v10[4] = 0;
        v10[5] = 0;
        if ( a2 == 1 )
        {
          LOWORD(v27) = 0;
          LOWORD(v16) = 0;
          v14 = v81;
        }
        else
        {
          v25 = v73;
          v26 = v72;
          LOWORD(v16) = 0;
          v14 = v81;
          LOWORD(v27) = 0;
          do
          {
            v29 = *v25++;
            v28 = v29;
            if ( (__int16)v16 >= v29 )
              LOWORD(v16) = v28;
            if ( (__int16)v27 <= v28 )
              LOWORD(v27) = v28;
            --v26;
          }
          while ( v26 );
        }
        v27 = (__int16)v27;
      }
      v30 = -(__int16)v16;
      if ( v27 > v30 )
        v30 = v27;
      if ( v30 < 1 )
      {
        v31 = 1;
      }
      else
      {
        if ( a2 < 1 )
        {
          v34 = 0;
          v35 = 0;
        }
        else
        {
          if ( a2 == 1 )
          {
            LOWORD(v35) = 0;
            v34 = 0;
          }
          else
          {
            v32 = v73;
            v33 = v72;
            v34 = 0;
            LOWORD(v35) = 0;
            do
            {
              v37 = *v32++;
              v36 = v37;
              if ( v34 >= v37 )
                v34 = v36;
              if ( (__int16)v35 <= v36 )
                LOWORD(v35) = v36;
              --v33;
            }
            while ( v33 );
          }
          v35 = (__int16)v35;
        }
        v31 = -v34;
        if ( v35 > v31 )
          v31 = v35;
      }
      v38 = __clz(v31) - 17;
      if ( v38 )
      {
        if ( a2 >= 1 )
        {
          *(_WORD *)v10 = 0;
          v39 = v73;
          v40 = v72;
          if ( a2 != 1 )
          {
            do
            {
              --v40;
              *v39 = (unsigned __int16)*v39 << v38;
              ++v39;
            }
            while ( v40 );
          }
        }
      }
      if ( a2 < 2 )
      {
        v43 = 0;
        v48 = 0;
      }
      else
      {
        v41 = 0;
        v42 = 0;
        v43 = 0;
        do
        {
          v44 = SHIWORD(v10[v41]) * SHIWORD(v10[v41]) + SLOWORD(v10[v41]) * SLOWORD(v10[v41]) + 0x8000;
          v43 += HIWORD(v44);
          LOWORD(v42) = v42 + ((int)(v15 - v42 + HIWORD(v44)) >> v12);
          *((_WORD *)v10 + v41++) = v42;
          v42 = (__int16)v42;
        }
        while ( v14 != v41 );
        v45 = v70;
        v46 = v14;
        v47 = 0;
        v48 = 0;
        do
        {
          LOWORD(v47) = v47 + ((unsigned int)(*(__int16 *)&v45[2 * v46] + 4 - v47) >> 3);
          *(_WORD *)&v45[2 * v46] = v47;
          v47 = (__int16)v47;
          if ( (__int16)v47 >= v48 )
            v48 = (__int16)v47;
          v49 = v46-- <= 1;
        }
        while ( !v49 );
      }
      v50 = j_celt_sqrt(v43);
      v51 = j_celt_sqrt(v48 * v74);
      v52 = sub_220A40(v75, ((v51 * v50) >> 1) + 1);
      if ( a2 < 36 )
      {
        v55 = 0;
        v14 = v81;
      }
      else
      {
        v53 = (unsigned __int16)v52;
        v14 = v81;
        v54 = 2 * (v52 >> 16);
        v55 = 0;
        v56 = 12;
        do
        {
          v57 = LOWORD(v10[v56 / 2u]);
          v56 += 4;
          v58 = (((v57 << 16) + 0x10000) >> 16) * v54 + (((((v57 << 16) + 0x10000) >> 16) * v53) >> 15);
          v59 = v58;
          if ( v58 >= 127 )
            v59 = 127;
          v49 = v58 <= 0;
          v60 = (unsigned __int8 *)&unk_C3EEF;
          if ( !v49 )
            v60 = (unsigned __int8 *)&unk_C3EEF + v59;
          v55 += *v60;
        }
        while ( v56 < v71 );
      }
      v61 = sub_220A40(v55 << 8, v78);
      v13 = v82;
      v62 = v83;
      if ( v61 > v82 )
      {
        *a5 = v83;
        v13 = v61;
      }
      LOBYTE(v12) = v79;
      a1 += v76;
      v15 = v77;
      v83 = v62 + 1;
    }
    while ( v62 + 1 != v80 );
    v63 = v13 > 200;
    if ( a6 )
    {
      a4 = v69;
      v11 = v13;
      if ( (unsigned int)(v13 - 201) <= 0x18E )
      {
        *a7 = 1;
        v63 = 0;
      }
    }
    else
    {
      v11 = v13;
      a4 = v69;
    }
  }
  v64 = 27 * v11;
  if ( j_celt_sqrt(27 * v11) >= 42 )
    v65 = ((j_celt_sqrt(v64) << 16) - 2752512) >> 16;
  else
    v65 = 0;
  if ( v65 >= 163 )
    v65 = 163;
  v66 = 1851392 * v65;
  v67 = 1851392 * v65 - 37312528;
  if ( v66 < 37312528 )
    v67 = 0;
  *a4 = j_celt_sqrt(v67);
  return v63;
}


// ======================================================================
// ADDR: 0x1b7fb4
// SYMBOL: sub_1B7FB4
_DWORD *__fastcall sub_1B7FB4(_DWORD *result, int a2, int a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, int a7, int a8)
{
  _DWORD *v8; // r6
  _DWORD *v9; // r5
  int v10; // r4
  int v11; // r8
  int v12; // r11
  int v13; // r12
  int v14; // r0
  int v15; // r5
  int *v16; // r11
  int v17; // r10
  int v18; // r5
  _DWORD *v19; // r8
  int v20; // r9
  int v21; // r5
  int v22; // r10
  bool v23; // zf
  int i; // r1
  int v25; // r10
  int v26; // r1
  size_t v27; // r9
  _DWORD *v28; // r6
  int v29; // r5
  int v30; // r0
  _DWORD *v31; // r1
  int v32; // r2
  int v33; // r6
  int v34; // r4
  int v35; // [sp+14h] [bp-44h]
  _DWORD *v36; // [sp+18h] [bp-40h]
  int v37; // [sp+1Ch] [bp-3Ch]
  int v38; // [sp+20h] [bp-38h]
  _DWORD *v39; // [sp+24h] [bp-34h]
  int v40; // [sp+28h] [bp-30h]
  int v41; // [sp+2Ch] [bp-2Ch]
  int v42; // [sp+34h] [bp-24h]
  int v43; // [sp+38h] [bp-20h]

  v8 = result;
  v9 = a5;
  v10 = result[1];
  v11 = result[9];
  v36 = a4;
  if ( a2 )
  {
    v12 = v11 * a2;
    if ( a2 < 1 )
      goto LABEL_10;
    v13 = result[7];
  }
  else
  {
    v12 = v11 << a7;
    v13 = result[7] - a7;
    a2 = 1;
    v11 <<= a7;
  }
  v14 = 4 * v12;
  v35 = v12;
  v15 = 4 * (v12 + v10);
  v16 = v8 + 14;
  v38 = v15;
  v17 = 4 * v11;
  v18 = 0;
  v19 = a4;
  v37 = v14;
  v43 = a2;
  v42 = v17;
  do
  {
    v40 = v18;
    v20 = 0;
    v21 = a3;
    v41 = a3;
    v39 = v19;
    do
    {
      v22 = v13;
      j_clt_mdct_forward_c(v16, v21, v19, v8[13], v10, v13, a2);
      v16 = v8 + 14;
      v13 = v22;
      a2 = v43;
      ++v20;
      ++v19;
      v21 += v42;
    }
    while ( v20 < v43 );
    a3 = v41 + v38;
    v19 = (_DWORD *)((char *)v39 + v37);
    result = a6;
    v18 = v40 + 1;
  }
  while ( v40 + 1 < (int)a6 );
  v9 = a5;
  v12 = v35;
  a4 = v36;
LABEL_10:
  v23 = v9 == (int *)((char *)&dword_0 + 1);
  if ( v9 == (int *)((char *)&dword_0 + 1) )
    v23 = a6 == (int *)((char *)&dword_0 + 2);
  if ( v23 && v12 >= 1 )
  {
    for ( i = 0; i < v12; ++i )
      a4[i] = ((int)a4[v12 + i] >> 1) + ((int)a4[i] >> 1);
  }
  if ( a8 != 1 )
  {
    v25 = sub_220A40(v12, a8);
    v26 = v12;
    v27 = 4 * (v12 - v25);
    if ( v25 <= 0 )
    {
      v33 = 0;
      v34 = (int)&v36[v25];
      do
      {
        sub_22178C(v34, v27);
        result = a5;
        ++v33;
        v34 += 4 * v12;
      }
      while ( v33 < (int)a5 );
    }
    else
    {
      v28 = v36;
      v29 = 0;
      do
      {
        v30 = v26 * v29;
        v31 = v28;
        v32 = v25;
        do
        {
          --v32;
          *v31++ *= a8;
        }
        while ( v32 );
        sub_22178C((int)&v36[v30 + v25], v27);
        result = a5;
        ++v29;
        v28 += v12;
        v26 = v12;
      }
      while ( v29 < (int)a5 );
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1b8124
// SYMBOL: sub_1B8124
int __fastcall sub_1B8124(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int *a16,
        int a17,
        int a18,
        int a19,
        unsigned int *a20)
{
  char *v21; // r10
  int v22; // r3
  int i; // r2
  int v25; // r4
  int v26; // r1
  __int16 v27; // r2
  int v28; // r0
  int v29; // r3
  int v30; // r5
  int v31; // r4
  __int16 v32; // r9
  __int16 *v33; // r11
  _WORD *v34; // r10
  int v35; // r3
  int v36; // r0
  __int16 *v37; // r6
  __int16 *v38; // r3
  __int16 *v39; // r2
  __int16 *v40; // r0
  int v41; // r1
  int v42; // r6
  int v43; // t1
  int v44; // t1
  int v45; // r6
  int v46; // lr
  int v47; // r0
  __int16 *v48; // r1
  int v49; // r2
  int v50; // r3
  __int16 *v51; // r1
  int v52; // r3
  int v53; // r0
  _BOOL4 v54; // r1
  int v55; // r0
  int v56; // r2
  int v57; // r6
  int v58; // t1
  __int16 v59; // r5
  int v60; // r6
  bool v61; // cc
  int v62; // r12
  int v63; // r4
  int v64; // r8
  int v65; // r1
  char *v66; // r3
  char *v67; // r10
  int v68; // r11
  int v69; // r2
  int v70; // r2
  int v71; // r5
  int v72; // r0
  int v73; // r2
  int v74; // r6
  int v75; // r5
  char *v76; // r1
  __int16 v77; // r6
  int v78; // r0
  int v79; // r2
  int v80; // r6
  int v81; // r12
  int v82; // lr
  int v83; // r1
  int v84; // r8
  int v85; // r6
  int v86; // r2
  char *v87; // r0
  int v88; // r5
  int v89; // r3
  int v90; // r10
  __int16 v91; // r4
  bool v92; // cc
  __int16 v93; // r2
  char *v94; // r4
  int v95; // r5
  int v96; // r1
  int v97; // r2
  int v98; // r0
  int v99; // r3
  __int16 v100; // r0
  int v101; // r1
  int v102; // r0
  int v103; // r3
  int v104; // r6
  int v105; // r0
  int v106; // r2
  __int16 v107; // r0
  int v108; // r4
  __int16 *v109; // r2
  int v110; // r0
  char *v111; // r6
  __int16 v112; // r1
  int v113; // t1
  int v114; // r6
  int v115; // lr
  char *v116; // r1
  int v117; // r4
  int v118; // r10
  char *v119; // r2
  int v120; // r8
  int v121; // r5
  int v122; // r5
  int v123; // r0
  int v124; // r5
  _DWORD *v125; // r1
  int v126; // r0
  int v127; // r0
  char *v128; // r1
  __int16 *v129; // r2
  int v130; // t1
  __int16 v131; // r3
  int v132; // r0
  __int16 *v133; // r2
  int v134; // r3
  char *v135; // r12
  __int16 *v136; // r1
  __int16 v137; // r6
  int v138; // t1
  int *v139; // r2
  int v140; // lr
  int v141; // r1
  int v142; // r1
  int v143; // r4
  int v144; // r6
  bool v145; // zf
  int v146; // r0
  char *v147; // r1
  int v148; // r0
  char *v149; // r2
  unsigned int v150; // r1
  int v151; // r0
  int v152; // r4
  __int16 v153; // lr
  bool v154; // zf
  int v155; // r6
  int v156; // r1
  int v157; // r2
  int v158; // r0
  int v159; // r3
  int v160; // r5
  int v161; // r1
  int v162; // r4
  int v163; // r0
  int *v165; // r10
  char *v166; // r2
  int v167; // r8
  __int16 *v168; // r5
  int v169; // r1
  int v170; // r3
  int v171; // r3
  int v172; // r4
  int v173; // r1
  _BOOL4 v174; // [sp+0h] [bp-80h] BYREF
  int v175; // [sp+4h] [bp-7Ch]
  int v176; // [sp+8h] [bp-78h]
  __int16 *v177; // [sp+Ch] [bp-74h]
  int v178; // [sp+10h] [bp-70h]
  int v179; // [sp+14h] [bp-6Ch]
  int v180; // [sp+18h] [bp-68h]
  int v181; // [sp+1Ch] [bp-64h]
  int v182; // [sp+20h] [bp-60h]
  int v183; // [sp+24h] [bp-5Ch]
  int v184; // [sp+28h] [bp-58h]
  int v185; // [sp+2Ch] [bp-54h]
  char *v186; // [sp+30h] [bp-50h]
  int v187; // [sp+34h] [bp-4Ch]
  int v188; // [sp+38h] [bp-48h]
  int v189; // [sp+3Ch] [bp-44h]
  int v190; // [sp+40h] [bp-40h]
  char *v191; // [sp+44h] [bp-3Ch]
  int v192; // [sp+48h] [bp-38h]
  char *v193; // [sp+4Ch] [bp-34h]
  int v194; // [sp+50h] [bp-30h]
  int v195; // [sp+54h] [bp-2Ch]
  char *v196; // [sp+58h] [bp-28h]

  v195 = a2;
  v175 = a1;
  v184 = 2 * a3;
  v196 = (char *)&v174 - ((a6 * 2 * a3 + 7) & 0xFFFFFFF8);
  v21 = v196;
  v182 = a3;
  sub_22178C(a7, 4 * a3);
  v176 = a4;
  v177 = (__int16 *)v21;
  if ( a5 < 1 )
  {
    v32 = -32666;
    j_memcpy((char *)&v174 - ((v184 + 7) & 0xFFFFFFF8), (char *)&v174 - ((v184 + 7) & 0xFFFFFFF8), 2 * a5);
    v181 = 0;
    v46 = a5;
    v54 = a6 == 2;
    v183 = a5 - 2;
  }
  else
  {
    v22 = 327680;
    for ( i = 0; i != a5; ++i )
    {
      v25 = (i + 5) * v22;
      v22 += 0x10000;
      *(_WORD *)&v21[2 * i] = (((9 - a8) << 10) | 0x200)
                            + 6 * HIWORD(v25)
                            + (*(_WORD *)(a9 + 2 * i) << 6)
                            - (eMeans[i] << 6);
    }
    v26 = v175;
    v27 = -32666;
    v28 = 0;
    do
    {
      v29 = 0;
      do
      {
        v30 = *(__int16 *)&v21[2 * v29];
        v31 = *(__int16 *)(v26 + 2 * v29++);
        v32 = v31 - v30;
        if ( v31 - v30 < v27 )
          v32 = v27;
        v27 = v32;
      }
      while ( a5 != v29 );
      ++v28;
      v26 += v184;
      v27 = v32;
    }
    while ( v28 < a6 );
    v33 = (__int16 *)((char *)&v174 - ((v184 + 7) & 0xFFFFFFF8));
    v34 = v33;
    v35 = v175;
    v36 = 0;
    v37 = v177;
    do
    {
      v33[v36] = *(_WORD *)(v35 + 2 * v36) - v37[v36];
      ++v36;
    }
    while ( a5 != v36 );
    v174 = a6 == 2;
    if ( a6 == 2 )
    {
      v38 = v33;
      v39 = v177;
      v40 = (__int16 *)(v175 + 2 * v182);
      v41 = a5;
      do
      {
        v43 = *v39++;
        v42 = v43;
        v44 = *v40++;
        v45 = v44 - v42;
        if ( v45 < *v38 )
          LOWORD(v45) = *v38;
        --v41;
        *v38++ = v45;
      }
      while ( v41 );
    }
    j_memcpy(v33, v33, 2 * a5);
    v46 = a5;
    if ( a5 <= 1 )
    {
      v183 = a5 - 2;
      v53 = 0;
    }
    else
    {
      v47 = a5 - 1;
      v48 = v33 + 1;
      LOWORD(v49) = *v33;
      v50 = a5 - 1;
      do
      {
        v49 = (__int16)v49 - 2048;
        if ( v49 < *v48 )
          LOWORD(v49) = *v48;
        --v50;
        *v48++ = v49;
      }
      while ( v50 );
      v183 = a5 - 2;
      v51 = &v33[a5 - 2];
      do
      {
        --v47;
        v52 = v51[1] - 3072;
        if ( v52 < *v51 )
          LOWORD(v52) = *v51;
        *v51-- = v52;
      }
      while ( v47 > 0 );
      v53 = 1;
    }
    v181 = v53;
    v55 = v32 - 12288;
    if ( v32 < 12288 )
      v55 = 0;
    v56 = a5;
    do
    {
      v58 = *v33++;
      v57 = v58;
      LOWORD(v58) = *v34++;
      v59 = v58;
      if ( v55 > v57 )
        LOWORD(v57) = v55;
      v60 = (__int16)(v59 - v57) & ((__int16)(v59 - v57) >> 15);
      if ( v60 <= -5120 )
        v60 = -5120;
      --v56;
      *a20++ = 0x20u >> -(char)((v60 + 512) >> 10);
    }
    while ( v56 );
    a4 = v176;
    v54 = v174;
  }
  v61 = a14 < 1;
  if ( a14 >= 1 )
    v61 = a15 < 51;
  if ( v61 || a17 )
  {
    if ( a4 < v46 )
    {
      v125 = (_DWORD *)(a19 + 4 * a4);
      v126 = v46 - a4;
      do
      {
        *v125++ = 13;
        --v126;
      }
      while ( v126 );
    }
    goto LABEL_192;
  }
  v62 = v46 - 1;
  v63 = 0;
  v180 = v183 - 2;
  v64 = v195 - 2;
  v174 = v54;
  v65 = v195;
  v66 = v196 - 2;
  v67 = v196 + 2;
  v68 = 0;
  v69 = 0;
  v178 = v46 - 3;
  v179 = v46 - 1;
  do
  {
    v188 = v69;
    v70 = v69 * v182;
    v71 = *(__int16 *)(v195 + 2 * v70);
    v194 = v70;
    v187 = v71;
    *(_WORD *)&v196[2 * v70] = v71;
    if ( v181 == 1 )
    {
      v72 = 0;
      LOWORD(v73) = v71;
      do
      {
        v73 = (__int16)v73 + 1536;
        v74 = *(__int16 *)(v65 + 2 * v72 + 2);
        v75 = *(__int16 *)(v65 + 2 * v72) + 512;
        if ( v73 >= v74 )
          LOWORD(v73) = *(_WORD *)(v65 + 2 * v72 + 2);
        *(_WORD *)&v67[2 * v72++] = v73;
        if ( v75 < v74 )
          v68 = v72;
      }
      while ( v62 != v72 );
    }
    v189 = v65;
    v191 = v67;
    v185 = v195 + 2 * v194;
    v76 = &v196[2 * v194];
    if ( v68 >= 1 )
    {
      v77 = *(_WORD *)&v76[2 * v68];
      v78 = v68;
      do
      {
        v79 = *(__int16 *)(v64 + 2 * v78);
        v80 = v77 + 2048;
        if ( v80 < v79 )
          v79 = v80;
        if ( v79 > *(__int16 *)&v66[2 * v78] )
          LOWORD(v79) = *(_WORD *)&v66[2 * v78];
        *(_WORD *)&v66[2 * v78] = v79;
        v61 = v78-- <= 1;
        v77 = v79;
      }
      while ( !v61 );
    }
    v186 = v76;
    v61 = v46 < 5;
    v192 = v64;
    v193 = v66;
    v81 = v63;
    v82 = v180;
    v190 = v63;
    if ( !v61 )
    {
      do
      {
        v83 = *(__int16 *)(v195 + v81);
        v84 = *(__int16 *)(v195 + v81 + 4);
        v85 = *(__int16 *)(v195 + v81 + 6);
        v86 = *(__int16 *)(v195 + v81 + 2);
        v87 = &v196[v81];
        v88 = *(__int16 *)&v196[v81 + 4];
        if ( v83 > v86 )
        {
          v86 = *(__int16 *)(v195 + v81);
          v83 = *(__int16 *)(v195 + v81 + 2);
        }
        v89 = *(__int16 *)(v195 + v81 + 8);
        if ( v85 > v89 )
        {
          v89 = *(__int16 *)(v195 + v81 + 6);
          v85 = *(__int16 *)(v195 + v81 + 8);
        }
        v90 = v86;
        if ( v83 > v85 )
        {
          v90 = v89;
          LOWORD(v89) = v86;
          LOWORD(v85) = v83;
        }
        v91 = v89;
        if ( v84 <= v90 )
        {
          if ( v84 < (__int16)v85 )
          {
            v93 = v85;
            if ( (__int16)v90 < (__int16)v85 )
              v93 = v90;
            goto LABEL_78;
          }
          v92 = v84 < (__int16)v89;
          v93 = v89;
        }
        else
        {
          if ( (__int16)v90 >= (__int16)v85 )
          {
            v93 = v90;
            if ( (__int16)v89 < (__int16)v90 )
              v93 = v89;
            goto LABEL_78;
          }
          v92 = v84 < (__int16)v85;
          v93 = v85;
        }
        if ( v92 )
          v93 = *(_WORD *)(v195 + v81 + 4);
LABEL_78:
        if ( v93 - 1024 >= v88 )
        {
          if ( v84 <= (__int16)v90 )
          {
            if ( v84 >= (__int16)v85 )
            {
              if ( v84 < (__int16)v89 )
                v91 = *(_WORD *)(v195 + v81 + 4);
              LOWORD(v85) = v91;
            }
            else if ( (__int16)v90 < (__int16)v85 )
            {
              LOWORD(v85) = v90;
            }
          }
          else if ( (__int16)v90 >= (__int16)v85 )
          {
            if ( (__int16)v89 < (__int16)v90 )
              LOWORD(v90) = v89;
            LOWORD(v85) = v90;
          }
          else if ( v84 < (__int16)v85 )
          {
            LOWORD(v85) = *(_WORD *)(v195 + v81 + 4);
          }
          LOWORD(v88) = v85 - 1024;
        }
        --v82;
        v81 += 2;
        *((_WORD *)v87 + 2) = v88;
      }
      while ( v82 );
    }
    v94 = v186;
    v95 = v187;
    v96 = *(__int16 *)(v185 + 4);
    v97 = *(__int16 *)v186;
    v98 = *(__int16 *)(v185 + 2);
    v99 = *((__int16 *)v186 + 1);
    if ( v187 > v98 )
    {
      v98 = v187;
      v95 = *(__int16 *)(v185 + 2);
    }
    if ( v95 < v96 )
      LOWORD(v95) = *(_WORD *)(v185 + 4);
    if ( v98 < v96 )
      LOWORD(v95) = v98;
    v100 = v95 - 1024;
    if ( (__int16)(v95 - 1024) >= v97 )
      LOWORD(v97) = v95 - 1024;
    *(_WORD *)v186 = v97;
    if ( v100 < v99 )
      v100 = v99;
    *((_WORD *)v94 + 1) = v100;
    v101 = *(__int16 *)(v195 + 2 * (v178 + v194));
    v102 = v195 + 2 * (v178 + v194);
    v103 = *(__int16 *)&v94[2 * v183];
    v104 = *(__int16 *)(v102 + 2);
    v105 = *(__int16 *)(v102 + 4);
    v106 = v104;
    if ( v101 > v104 )
    {
      v106 = *(__int16 *)(v195 + 2 * (v178 + v194));
      v101 = v104;
    }
    if ( v101 < v105 )
      LOWORD(v101) = v105;
    if ( v106 < v105 )
      LOWORD(v101) = v106;
    v107 = v101 - 1024;
    if ( (__int16)(v101 - 1024) >= v103 )
      LOWORD(v103) = v101 - 1024;
    v62 = v179;
    *(_WORD *)&v94[2 * v183] = v103;
    if ( v107 < *(__int16 *)&v94[2 * v62] )
      v107 = *(_WORD *)&v94[2 * v62];
    *(_WORD *)&v94[2 * v62] = v107;
    v46 = a5;
    v108 = v190;
    if ( a5 >= 1 )
    {
      v109 = v177;
      v110 = a5;
      v111 = v196;
      do
      {
        v113 = *v109++;
        v112 = v113;
        if ( *(__int16 *)&v111[v108] > v113 )
          v112 = *(_WORD *)&v111[v108];
        --v110;
        *(_WORD *)&v111[v108] = v112;
        v111 += 2;
      }
      while ( v110 );
    }
    v63 = v108 + v184;
    v66 = &v193[v184];
    v64 = v192 + v184;
    v65 = v189 + v184;
    v67 = &v191[v184];
    v69 = v188 + 1;
  }
  while ( v188 + 1 < a6 );
  if ( v174 )
  {
    v114 = v176;
    if ( v176 >= a5 )
      goto LABEL_161;
    v115 = a5 - v176;
    v116 = &v196[2 * v176];
    v117 = 0;
    v118 = v175 + 2 * v176;
    v119 = &v116[2 * v182];
    v120 = v118 + 2 * v182;
    do
    {
      v121 = *(__int16 *)&v116[2 * v117] - 4096;
      if ( v121 < *(__int16 *)&v119[2 * v117] )
        LOWORD(v121) = *(_WORD *)&v119[2 * v117];
      *(_WORD *)&v119[2 * v117] = v121;
      v122 = (__int16)v121 - 4096;
      if ( v122 < *(__int16 *)&v116[2 * v117] )
        LOWORD(v122) = *(_WORD *)&v116[2 * v117];
      *(_WORD *)&v116[2 * v117] = v122;
      v123 = *(__int16 *)(v120 + 2 * v117) - *(__int16 *)&v119[2 * v117];
      v124 = *(__int16 *)(v118 + 2 * v117) - (__int16)v122;
      if ( v123 <= 0 )
        v123 = 0;
      if ( v124 > 0 )
        v123 += v124;
      *(_WORD *)&v116[2 * v117++] = (unsigned int)v123 >> 1;
    }
    while ( v115 != v117 );
  }
  else
  {
    v114 = v176;
    if ( v176 >= a5 )
      goto LABEL_161;
    v127 = a5 - v176;
    v128 = &v196[2 * v176];
    v129 = (__int16 *)(v175 + 2 * v176);
    do
    {
      v130 = *v129++;
      v131 = v130 - *(_WORD *)v128;
      if ( v130 - *(__int16 *)v128 <= 0 )
        v131 = 0;
      --v127;
      *(_WORD *)v128 = v131;
      v128 += 2;
    }
    while ( v127 );
  }
  v114 = v176;
  v46 = a5;
  if ( v176 < a5 )
  {
    v132 = a5 - v176;
    v133 = (__int16 *)(a18 + 2 * v176);
    v134 = a5 - v176;
    v135 = &v196[2 * v176];
    v136 = (__int16 *)v135;
    do
    {
      v138 = *v133++;
      v137 = v138;
      if ( *v136 > v138 )
        v137 = *v136;
      --v134;
      *v136++ = v137;
    }
    while ( v134 );
    v114 = v176;
    if ( v176 < a5 )
    {
      v139 = (int *)(a19 + 4 * v176);
      do
      {
        v140 = *(__int16 *)v135;
        if ( v140 >= 4096 )
          v140 = 4096;
        v141 = v140 >> 10;
        if ( v140 >> 10 <= 14 )
        {
          if ( v141 >= -15 )
          {
            v143 = -2 - v141;
            v144 = (int)(((2
                         * (__int16)((((2
                                      * (__int16)((20408 * ((16 * (_WORD)v140) & 0x3FF0u) + 971177984) >> 16)
                                      * ((16 * (_WORD)v140) & 0x3FF0)) & 0x7FFF0000u)
                                    + 1494482944) >> 16)
                         * ((16 * (_WORD)v140) & 0x3FF0)) & 0xFFFF0000)
                       + 1073676288) >> 16;
            v142 = v144 << (v141 + 2);
            if ( v143 > 0 )
              v142 = v144 >> v143;
            v114 = v176;
          }
          else
          {
            v142 = 0;
          }
        }
        else
        {
          v142 = 2130706432;
        }
        --v132;
        v135 += 2;
        v46 = a5;
        *v139++ = (13 * v142 + 0x8000) >> 16;
      }
      while ( v132 );
    }
  }
LABEL_161:
  if ( v114 < v46 )
  {
    v145 = a10 == 0;
    if ( !a10 )
      v145 = a12 != 0 || a11 == 0;
    if ( v145 )
    {
      v146 = v46 - v114;
      v147 = &v196[2 * v114];
      do
      {
        --v146;
        *(_WORD *)v147 = (unsigned int)*(__int16 *)v147 >> 1;
        v147 += 2;
      }
      while ( v146 );
    }
  }
  if ( v114 >= v46 )
  {
LABEL_192:
    v151 = 0;
    goto LABEL_193;
  }
  v148 = v114;
  do
  {
    if ( v148 > 7 )
    {
      if ( v148 < 12 )
        goto LABEL_175;
      v149 = v196;
      v150 = (unsigned int)*(__int16 *)&v196[2 * v148] >> 1;
    }
    else
    {
      v149 = v196;
      LOWORD(v150) = 2 * *(_WORD *)&v196[2 * v148];
    }
    *(_WORD *)&v149[2 * v148] = v150;
LABEL_175:
    ++v148;
  }
  while ( v46 != v148 );
  v151 = 0;
  v152 = v114;
  if ( v114 < v46 )
  {
    v153 = *(_WORD *)(a13 + 2 * v114);
    v154 = a11 == 0;
    if ( a11 )
      v154 = a12 != 0 && a10 == 0;
    if ( v154 )
    {
      v155 = 0;
      v156 = v152;
      v157 = 2 * a15 / 3;
      while ( 1 )
      {
        v158 = *(__int16 *)&v196[2 * v156];
        if ( v158 >= 4096 )
          v158 = 4096;
        *(_WORD *)&v196[2 * v156] = v158;
        v159 = v156;
        v160 = *(__int16 *)(a13 + 2 * v156 + 2);
        v161 = ((v160 - v153) * a6) << a14;
        if ( v161 > 5 )
        {
          if ( v161 < 49 )
          {
            v162 = (v158 * v161 / 6) >> 10;
            v163 = 48 * v162;
          }
          else
          {
            v162 = v158 >> 7;
            v163 = (8 * (v158 >> 7) * v161) >> 3;
          }
        }
        else
        {
          v162 = v158 >> 10;
          v163 = 8 * (v158 >> 10) * v161;
        }
        v151 = v163 + v155;
        if ( v151 >> 6 > v157 )
          break;
        v156 = v159 + 1;
        *(_DWORD *)(a7 + 4 * v159) = v162;
        v153 = v160;
        v155 = v151;
        if ( v159 + 1 >= a5 )
          goto LABEL_193;
      }
      *(_DWORD *)(a7 + 4 * v159) = (v157 << 6) - v155;
      v151 = v157 << 6;
    }
    else
    {
      v165 = (int *)(a7 + 4 * v114);
      v166 = &v196[2 * v114];
      v167 = a5 - v114;
      v168 = (__int16 *)(a13 + 2 * v114 + 2);
      v151 = 0;
      do
      {
        v169 = *(__int16 *)v166;
        v170 = v153;
        if ( v169 >= 4096 )
          v169 = 4096;
        *(_WORD *)v166 = v169;
        v153 = *v168;
        v171 = ((*v168 - v170) * a6) << a14;
        if ( v171 >= 6 )
        {
          if ( v171 <= 48 )
          {
            v172 = (v169 * v171 / 6) >> 10;
            v173 = 48 * v172;
          }
          else
          {
            v172 = v169 >> 7;
            v173 = (8 * (v169 >> 7) * v171) >> 3;
          }
        }
        else
        {
          v172 = v169 >> 10;
          v173 = 8 * (v169 >> 10) * v171;
        }
        *v165++ = v172;
        v151 += v173;
        v166 += 2;
        ++v168;
        --v167;
      }
      while ( v167 );
    }
  }
LABEL_193:
  *a16 = v151;
  return v32;
}


// ======================================================================
// ADDR: 0x1b8a7c
// SYMBOL: sub_1B8A7C
int __fastcall sub_1B8A7C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int *a11)
{
  unsigned int v11; // r10
  int v12; // r0
  int v13; // r9
  __int16 *v14; // r11
  __int16 v15; // r6
  int v16; // r1
  int v17; // r4
  int v18; // r5
  int v19; // r3
  int v20; // r4
  int v21; // r8
  int v22; // r6
  int v23; // r0
  _BOOL4 v24; // r2
  bool v25; // zf
  int v26; // r1
  int v27; // r10
  unsigned int v28; // r0
  __int16 *v29; // r4
  __int16 *v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // t1
  bool v34; // zf
  unsigned int v35; // r0
  int v36; // r2
  int v37; // r3
  int v38; // t1
  int v39; // r0
  int v40; // r9
  int v41; // r11
  __int16 *v42; // r5
  int v43; // r0
  unsigned int v44; // r1
  __int16 *v45; // r2
  int v46; // r3
  int v47; // r5
  int v48; // t1
  int v49; // r2
  int v50; // r1
  int v51; // r6
  int v52; // r12
  int v53; // lr
  _BOOL4 v54; // r5
  unsigned __int8 *v55; // r0
  int v56; // r1
  int v57; // r2
  int v58; // r0
  int v59; // r6
  int v60; // r11
  int v61; // r12
  int *v62; // r3
  int *v63; // r8
  int v64; // r6
  int v65; // r10
  int v66; // r4
  int *v67; // r1
  int v68; // r5
  int v69; // t1
  int v70; // lr
  int v71; // r9
  int v72; // t1
  int v73; // r2
  int v74; // r2
  unsigned __int8 *v75; // r2
  int v76; // r1
  int v77; // r3
  int v78; // r2
  int v79; // r12
  int v80; // lr
  int v81; // r2
  int *v82; // r10
  int v83; // r4
  int v84; // r1
  int v85; // r6
  int v86; // r4
  int v87; // t1
  int v88; // r5
  int v89; // r6
  int v90; // r3
  int v91; // t1
  int v92; // r6
  int v93; // r3
  __int16 *v94; // r8
  int v95; // r6
  int v96; // r8
  unsigned __int8 *v97; // r1
  int v98; // r0
  int v99; // r3
  int v100; // r2
  int v101; // r1
  int v102; // r0
  int v103; // r3
  int v104; // r6
  int v105; // r1
  int v106; // r3
  int v107; // r1
  int v108; // r4
  int v109; // r1
  unsigned __int8 *v110; // r0
  int v111; // r2
  int v112; // r3
  int v113; // r1
  int v114; // r6
  int v115; // r1
  int v116; // r5
  int v117; // r6
  int v118; // r0
  int v119; // r8
  _DWORD *v120; // r9
  int *v121; // r10
  _DWORD *v122; // r12
  int *v123; // r11
  int v124; // r4
  int v125; // r2
  int v126; // t1
  int v127; // lr
  int v128; // r3
  int v129; // t1
  int v130; // r2
  int v131; // r2
  int v132; // r0
  int v133; // r3
  __int64 v134; // kr10_8
  _DWORD *v135; // r1
  int v136; // r0
  int v138; // [sp+0h] [bp-78h] BYREF
  __int64 v139; // [sp+4h] [bp-74h]
  int v140; // [sp+Ch] [bp-6Ch]
  int v141; // [sp+10h] [bp-68h]
  int v142; // [sp+14h] [bp-64h]
  int v143; // [sp+18h] [bp-60h]
  int v144; // [sp+1Ch] [bp-5Ch]
  int v145; // [sp+20h] [bp-58h]
  int v146; // [sp+24h] [bp-54h]
  int v147; // [sp+28h] [bp-50h]
  void *dest; // [sp+2Ch] [bp-4Ch]
  int v149; // [sp+30h] [bp-48h]
  unsigned int *v150; // [sp+34h] [bp-44h]
  size_t n; // [sp+38h] [bp-40h]
  _BOOL4 v152; // [sp+3Ch] [bp-3Ch]
  int v153; // [sp+40h] [bp-38h]
  int v154; // [sp+44h] [bp-34h]
  unsigned int v155; // [sp+48h] [bp-30h]
  int v156; // [sp+4Ch] [bp-2Ch]
  __int16 *v157; // [sp+50h] [bp-28h]

  v140 = a4;
  v150 = (unsigned int *)((char *)&v138 - ((4 * a2 + 7) & 0xFFFFFFF8));
  v145 = a1;
  v12 = *(_DWORD *)(a1 + 24);
  v13 = a8;
  v14 = (__int16 *)((char *)&v138
                  - ((2 * ((*(__int16 *)(v12 + 2 * a2) - *(__int16 *)(v12 + 2 * (a2 - 1))) << a8) + 7) & 0xFFFFFFF8));
  HIDWORD(v139) = v150;
  LODWORD(v139) = v150;
  v149 = a2;
  v141 = a2 - 1;
  if ( a2 <= 0 )
  {
    v52 = a5;
    if ( a3 )
      v52 = 0;
    v53 = *a11;
    v51 = 4 * a3;
    LOBYTE(v54) = a3 != 0;
  }
  else
  {
    v15 = -4096;
    dest = v14;
    if ( 0x2000 - a9 >= -4096 && a9 != 12288 )
      v15 = 0x2000 - a9;
    v16 = 5244 * v15;
    v17 = a3;
    if ( a3 )
      v17 = a8 << 16;
    v157 = v14;
    v147 = a10 * a7;
    v144 = (((a8 << 16) + 0x10000) * (v16 >> 16)) >> 16;
    v18 = a3;
    v146 = ((v16 >> 16) * v17) >> 16;
    v143 = 1 << a8;
    v142 = -2 * a8;
    v19 = 0;
    v156 = a8 + 0xFFFF;
    v155 = v16 & 0xFFFF0000;
    while ( 1 )
    {
      v26 = *(__int16 *)(v12 + 2 * v19);
      v152 = v19;
      v153 = v19 + 1;
      v154 = *(__int16 *)(v12 + 2 * (v19 + 1)) - v26;
      v27 = v154 << v13;
      n = 2 * (v154 << v13);
      j_memcpy(v14, (const void *)(a6 + 2 * ((v26 << v13) + v147)), n);
      v28 = 0;
      if ( v27 < 1 )
      {
        v29 = (__int16 *)dest;
      }
      else
      {
        v29 = (__int16 *)dest;
        v30 = v14;
        v31 = v27;
        do
        {
          v33 = *v30++;
          v32 = v33;
          if ( v33 < 0 )
            v32 = -v32;
          --v31;
          v28 += v32;
        }
        while ( v31 );
      }
      v34 = v18 == 0;
      v21 = 0;
      v22 = (__int16)(v28 >> 15) * (__int16)v146 + v28 + (((__int16)(v28 & 0x7FFF) * (__int16)v146) >> 15);
      if ( v18 )
        v34 = v154 == 1;
      if ( !v34 )
      {
        j_memcpy(v29, v14, n);
        j_haar1(v29, v27 >> v13, v143);
        v35 = 0;
        if ( v27 >= 1 )
        {
          v36 = v27;
          do
          {
            v38 = *v29++;
            v37 = v38;
            if ( v38 < 0 )
              v37 = -v37;
            --v36;
            v35 += v37;
          }
          while ( v36 );
        }
        v21 = 0;
        v39 = (__int16)(v35 >> 15) * (__int16)v144 + v35 + (((__int16)(v35 & 0x7FFF) * (__int16)v144) >> 15);
        if ( v39 < v22 )
        {
          v21 = -1;
          v22 = v39;
        }
      }
      v40 = v13 + (v154 != 1 && v18 == 0);
      if ( v40 >= 1 )
      {
        v20 = 0;
        if ( v27 < 1 )
        {
          if ( v18 )
          {
            do
            {
              j_haar1(v157, v27 >> v20, 1 << v20);
              ++v20;
              if ( v22 > 0 )
              {
                v21 = v20;
                v22 = 0;
              }
            }
            while ( v40 != v20 );
          }
          else
          {
            do
            {
              j_haar1(v157, v27 >> v20, 1 << v20);
              ++v20;
              if ( v22 > 0 )
              {
                v21 = v20;
                v22 = 0;
              }
            }
            while ( v40 != v20 );
          }
        }
        else
        {
          do
          {
            v41 = v18;
            v42 = v157;
            j_haar1(v157, v27 >> v20, 1 << v20);
            v43 = v20 + 1;
            v44 = 0;
            v45 = v42;
            v46 = v27;
            do
            {
              v48 = *v45++;
              v47 = v48;
              if ( v48 < 0 )
                v47 = -v47;
              --v46;
              v44 += v47;
            }
            while ( v46 );
            v18 = v41;
            v49 = v20 + 1;
            if ( v41 )
              v49 = v156 - v20;
            ++v20;
            v50 = (__int16)(v44 >> 15) * (__int16)((v49 * v155) >> 16)
                + v44
                + (((__int16)(v44 & 0x7FFF) * (__int16)((v49 * v155) >> 16)) >> 15);
            if ( v50 < v22 )
            {
              v21 = v43;
              v22 = v50;
            }
          }
          while ( v43 != v40 );
        }
      }
      v23 = -2 * v21;
      if ( v18 )
        v23 = 2 * v21;
      v24 = v152;
      v150[v152] = v23;
      if ( v154 == 1 )
      {
        v25 = v23 == 0;
        if ( v23 )
          v25 = v23 == v142;
        if ( v25 )
          v150[v24] = v23 - 1;
      }
      v13 = a8;
      if ( v153 == v149 )
        break;
      v19 = v153;
      v14 = v157;
      v12 = *(_DWORD *)(v145 + 24);
    }
    v51 = 4 * v18;
    v52 = a5;
    if ( v18 )
      v52 = 0;
    v53 = *a11;
    v11 = *v150;
    v54 = v18 != 0;
    if ( v149 > 1 )
    {
      v153 = v51;
      v55 = &tf_select_table[8 * a8];
      v56 = (char)v55[v51 | 1];
      v57 = (char)v55[v51];
      v58 = v11 - 2 * v56;
      v59 = v11 - 2 * v57;
      if ( v58 < 0 )
        v58 = 2 * v56 - v11;
      v157 = (__int16 *)(v149 > 1);
      v60 = v52 + v58 * v53;
      v152 = v54;
      v154 = v52;
      v155 = v11;
      if ( v59 < 0 )
        v59 = 2 * v57 - v11;
      v61 = v59 * v53;
      v62 = a11 + 1;
      v63 = (int *)(v150 + 1);
      v64 = v141;
      v65 = 2 * v56;
      v66 = 2 * v57;
      v67 = (int *)(v150 + 1);
      v156 = v53;
      n = (size_t)(a11 + 1);
      do
      {
        v69 = *v62++;
        v68 = v69;
        v70 = v60 + a5;
        if ( v61 < v60 + a5 )
          v70 = v61;
        v72 = *v67++;
        v71 = v72;
        if ( a5 + v61 < v60 )
          v60 = a5 + v61;
        v73 = v71 - v65;
        if ( v71 - v65 < 0 )
          v73 = v65 - v71;
        v60 += v73 * v68;
        v74 = v71 - v66;
        if ( v71 - v66 < 0 )
          v74 = v66 - v71;
        --v64;
        v61 = v70 + v74 * v68;
      }
      while ( v64 );
      v75 = &tf_select_table[8 * a8];
      if ( v61 < v60 )
        v60 = v61;
      v76 = (char)v75[v153 | 3];
      v77 = (char)v75[v153 | 2];
      v78 = v155 - 2 * v76;
      v79 = 2 * v76;
      v80 = 2 * v77;
      if ( v78 < 0 )
        v78 = 2 * v76 - v155;
      v81 = v154 + v78 * v156;
      v82 = (int *)n;
      v83 = v155 - 2 * v77;
      v84 = v141;
      if ( v83 < 0 )
        v83 = 2 * v77 - v155;
      v85 = v83 * v156;
      do
      {
        v87 = *v82++;
        v86 = v87;
        v88 = v81 + a5;
        if ( v85 < v81 + a5 )
          v88 = v85;
        v89 = v85 + a5;
        v91 = *v63++;
        v90 = v91;
        if ( v89 < v81 )
          v81 = v89;
        v92 = v90 - v79;
        if ( v90 - v79 < 0 )
          v92 = v79 - v90;
        v93 = v90 - v80;
        if ( v93 < 0 )
          v93 = -v93;
        v81 += v92 * v86;
        --v84;
        v85 = v88 + v93 * v86;
      }
      while ( v84 );
      if ( v85 < v81 )
        v81 = v88 + v93 * v86;
      v94 = v157;
      v53 = v156;
      v11 = v155;
      LOBYTE(v54) = v152;
      v95 = v153;
      v52 = v154;
      goto LABEL_105;
    }
  }
  v96 = v51;
  v97 = &tf_select_table[8 * v13];
  v98 = (char)v97[v51 | 3];
  v99 = (char)v97[v51 | 1];
  v100 = (char)v97[v51 | 2];
  v101 = (char)v97[v51];
  v102 = v11 - 2 * v98;
  v103 = v11 - 2 * v99;
  if ( v102 < 0 )
    v102 = -v102;
  v104 = v11 - 2 * v100;
  if ( v103 < 0 )
    v103 = -v103;
  v105 = v11 - 2 * v101;
  if ( v104 < 0 )
    v104 = 2 * v100 - v11;
  if ( v105 < 0 )
    v105 = -v105;
  v60 = v52 + v103 * v53;
  v106 = v104 * v53;
  v95 = v96;
  v94 = 0;
  v81 = v52 + v102 * v53;
  v107 = v105 * v53;
  if ( v106 < v81 )
    v81 = v106;
  if ( v107 < v60 )
    v60 = v107;
LABEL_105:
  v108 = v54 && v81 < v60;
  v109 = v95 | (2 * v108);
  v110 = &tf_select_table[8 * a8];
  v111 = (char)v110[v109 | 1];
  v112 = (char)v110[v109];
  v113 = v11 - 2 * v111;
  v114 = v11 - 2 * v112;
  if ( v113 < 0 )
    v113 = 2 * v111 - v11;
  if ( v114 < 0 )
    v114 = 2 * v112 - v11;
  v115 = v52 + v113 * v53;
  v116 = v141;
  v117 = v114 * v53;
  if ( v94 == (__int16 *)((char *)&dword_0 + 1) )
  {
    v156 = v108;
    v157 = (_WORD *)(&dword_0 + 1);
    v118 = 2 * v111;
    v119 = 2 * v112;
    v120 = (_DWORD *)(v139 + 4);
    v121 = (int *)(v150 + 1);
    v122 = (_DWORD *)(HIDWORD(v139) + 4);
    v123 = a11 + 1;
    do
    {
      v124 = v115 + a5;
      *v122++ = v117 >= v115 + a5;
      *v120++ = a5 + v117 >= v115;
      v126 = *v121++;
      v125 = v126;
      if ( a5 + v117 < v115 )
        v115 = a5 + v117;
      v127 = v125 - v118;
      if ( v125 - v118 < 0 )
        v127 = v118 - v125;
      v129 = *v123++;
      v128 = v129;
      if ( v117 < v124 )
        v124 = v117;
      v130 = v125 - v119;
      if ( v130 < 0 )
        v130 = -v130;
      v115 += v127 * v128;
      --v116;
      v117 = v124 + v130 * v128;
    }
    while ( v116 );
    v131 = v117 >= v115;
    v133 = v141;
    v132 = v140;
    *(_DWORD *)(v140 + 4 * v141) = v131;
    v134 = v139;
    v108 = v156;
    if ( v157 == (__int16 *)((char *)&dword_0 + 1) )
    {
      v135 = (_DWORD *)(v132 + 4 * v149 - 8);
      do
      {
        v136 = HIDWORD(v134);
        if ( v131 == 1 )
          v136 = v134;
        v131 = *(_DWORD *)(v136 + 4 * v133--);
        *v135-- = v131;
      }
      while ( v133 > 0 );
    }
  }
  else
  {
    *(_DWORD *)(v140 + 4 * v141) = v117 >= v115;
  }
  return v108;
}


// ======================================================================
