// ADDR: 0xbfdd4
// SYMBOL: sub_BFDD4
size_t __fastcall sub_BFDD4(__int16 *a1, int a2, int a3, int a4)
{
  char *v4; // lr
  bool v5; // cc
  int v6; // r11
  __int16 *v7; // r10
  int v8; // r6
  char *v9; // r5
  __int16 *v10; // r3
  __int16 v11; // r4
  bool v12; // cc
  int v13; // r9
  __int16 *v14; // r10
  char *v15; // r11
  __int16 *v16; // r6
  _WORD *v17; // r4
  int v18; // r5
  __int16 v19; // r12
  size_t n[3]; // [sp+0h] [bp-28h] BYREF

  v4 = (char *)n - ((2 * a2 * a3 + 7) & 0xFFFFFFF8);
  n[0] = 2 * a2 * a3;
  if ( a4 )
  {
    v5 = a3 < 1;
    if ( a3 >= 1 )
      v5 = a2 < 1;
    if ( !v5 )
    {
      v6 = 0;
      v7 = a1;
      do
      {
        v8 = a2;
        v9 = &v4[2 * a2 * dword_5B2A8[a3 - 2 + v6]];
        v10 = v7;
        do
        {
          v11 = *v10;
          v10 += a3;
          *(_WORD *)v9 = v11;
          v9 += 2;
          --v8;
        }
        while ( v8 );
        ++v6;
        ++v7;
      }
      while ( v6 != a3 );
    }
  }
  else
  {
    v12 = a3 < 1;
    if ( a3 >= 1 )
      v12 = a2 < 1;
    if ( !v12 )
    {
      v13 = 0;
      v14 = a1;
      v15 = (char *)n - ((2 * a2 * a3 + 7) & 0xFFFFFFF8);
      do
      {
        v16 = v14;
        v17 = v15;
        v18 = a2;
        do
        {
          v19 = *v16;
          v16 += a3;
          *v17++ = v19;
          --v18;
        }
        while ( v18 );
        ++v13;
        v15 += 2 * a2;
        ++v14;
      }
      while ( v13 != a3 );
    }
  }
  j_memcpy(a1, v4, n[0]);
  return _stack_chk_guard - n[1];
}


// ======================================================================
// ADDR: 0xbfebc
// SYMBOL: sub_BFEBC
int __fastcall sub_BFEBC(int *a1, int a2, int a3, int a4, int a5, __int16 *a6, int a7, int a8, int a9)
{
  int v12; // r3
  __int64 v13; // kr08_8
  int v14; // r0
  int v15; // r1
  unsigned int v16; // r6
  int v17; // r0
  __int16 *v18; // r8
  unsigned int v19; // r6
  int v20; // r2
  int v21; // r11
  int v22; // r5
  int v23; // r0
  unsigned int v24; // r10
  int v25; // r5
  unsigned int v26; // r1
  int v27; // r12
  int v28; // r6
  unsigned int v29; // r12
  int v30; // r12
  int v31; // r12
  int v32; // r12
  int v33; // r12
  int v34; // r10
  int v35; // r1
  int v36; // r5
  int v37; // r10
  int v38; // r5
  int v39; // r3
  _WORD *v40; // r0
  __int16 v41; // t1
  int v42; // r8
  int v44; // r3
  __int16 *v45; // r10
  signed int v46; // r0
  int v47; // kr00_4
  bool v48; // cc
  int v49; // r1
  int v50; // r4
  int v51; // r0
  int v52; // r3
  int v53; // r8
  int v54; // r0
  int v55; // r11
  int v56; // r3
  int v57; // r0
  int v58; // r0
  int v59; // r6
  _WORD *v60; // r5
  int v61; // [sp+20h] [bp-60h]
  int v62; // [sp+28h] [bp-58h]
  __int16 v63; // [sp+2Ch] [bp-54h]
  __int16 v64; // [sp+30h] [bp-50h]
  int v65; // [sp+30h] [bp-50h]
  int v66; // [sp+34h] [bp-4Ch]
  int v67; // [sp+34h] [bp-4Ch]
  int v68; // [sp+38h] [bp-48h]
  int v69; // [sp+38h] [bp-48h]
  int v70; // [sp+3Ch] [bp-44h]
  int v71; // [sp+40h] [bp-40h]
  char v72[4]; // [sp+44h] [bp-3Ch] BYREF
  int v73; // [sp+48h] [bp-38h]
  int v74; // [sp+4Ch] [bp-34h]
  int v75; // [sp+50h] [bp-30h]
  int v76; // [sp+54h] [bp-2Ch]
  int v77; // [sp+58h] [bp-28h]
  int v78; // [sp+5Ch] [bp-24h] BYREF

  v78 = a4;
  v12 = *a1;
  v13 = *((_QWORD *)a1 + 1);
  v66 = a1[5];
  v14 = *(_DWORD *)(v13 + 92);
  v15 = *(__int16 *)(*(_DWORD *)(v13 + 88) + 2 * (HIDWORD(v13) + *(_DWORD *)(v13 + 8) * (a7 + 1)));
  v16 = *(unsigned __int8 *)(v14 + v15);
  v17 = v14 + v15;
  v18 = a6;
  if ( a7 != -1 && a3 >= 3 && *(unsigned __int8 *)(v17 + v16) + 12 < a4 )
  {
    v19 = (unsigned int)a3 >> 1;
    v20 = a5 + 1;
    if ( a5 == 1 )
      a9 = a9 & 1 | (2 * a9);
    v21 = a7 - 1;
    v68 = v20 >> 1;
    v22 = 0;
    v70 = a2 + 2 * v19;
    sub_C040C(a1, v72, a2, v70, v19, &v78, v20 >> 1, a5, a7 - 1, 0, &a9);
    v63 = v73;
    v23 = v75;
    v64 = v74;
    v67 = v76;
    if ( a5 >= 2 && (v76 & 0x3FFF) != 0 )
    {
      if ( v76 <= 0x2000 )
        v23 = (v75 + ((int)(8 * v19) >> (6 - a7))) & ((v75 + ((int)(8 * v19) >> (6 - a7))) >> 31);
      else
        v23 = v75 - (v75 >> (5 - a7));
    }
    v44 = v78;
    v45 = a6;
    v47 = v78 - v23;
    v46 = v78 - v23 + ((unsigned int)(v78 - v23) >> 31);
    v62 = a1[8] - v77;
    v48 = v78 < v47 / 2;
    v49 = v78;
    a1[8] = v62;
    if ( !v48 )
      v49 = v46 >> 1;
    if ( v49 > 0 )
      v22 = v49;
    v50 = v44 - v22;
    if ( a6 )
      v45 = &a6[v19];
    if ( v22 >= v50 )
    {
      v55 = a9;
      v71 = sub_BFEBC(a1, a2, v19, v22, v68, a6, a7 - 1, (__int16)((v63 * (__int16)a8 + 0x4000) >> 15), a9);
      v56 = v50;
      v57 = a1[8] - v62 + v22;
      if ( v57 > 24 )
        v56 = v50 + v57 - 24;
      if ( !v67 )
        v56 = v50;
      return (sub_BFEBC(a1, v70, v19, v56, v68, v45, a7 - 1, (__int16)((v64 * (__int16)a8 + 0x4000) >> 15), v55 >> v68) << (a5 >> 1)) | v71;
    }
    else
    {
      v61 = a9;
      v51 = sub_BFEBC(a1, v70, v19, v44 - v22, v68, v45, v21, (__int16)((v64 * (__int16)a8 + 0x4000) >> 15), a9 >> v68);
      v52 = v22;
      v53 = v51 << (a5 >> 1);
      v54 = a1[8] - v62 + v50;
      if ( v54 > 24 )
        v52 = v22 + v54 - 24;
      if ( v67 == 0x4000 )
        v52 = v22;
      return sub_BFEBC(a1, a2, v19, v52, v68, a6, v21, (__int16)((v63 * (__int16)a8 + 0x4000) >> 15), v61) | v53;
    }
  }
  v24 = v16 + 1;
  v69 = a9;
  v65 = a1[7];
  v25 = a4 - 1;
  v26 = (v16 + 1) >> 1;
  v27 = *(unsigned __int8 *)(v17 + v26);
  if ( a4 - 1 > v27 )
    v26 = v16;
  v28 = 0;
  if ( a4 - 1 > v27 )
    v28 = v24 >> 1;
  v29 = v28 + v26 + 1;
  if ( v25 > *(unsigned __int8 *)(v17 + (v29 >> 1)) )
    v28 = v29 >> 1;
  else
    v26 = v29 >> 1;
  v30 = v28 + v26 + 1;
  if ( v25 > *(unsigned __int8 *)(v17 + (v30 >> 1)) )
    v28 = v30 >> 1;
  else
    v26 = v30 >> 1;
  v31 = v28 + v26 + 1;
  if ( v25 > *(unsigned __int8 *)(v17 + (v31 >> 1)) )
    v28 = v31 >> 1;
  else
    v26 = v31 >> 1;
  v32 = v28 + v26 + 1;
  if ( v25 > *(unsigned __int8 *)(v17 + (v32 >> 1)) )
    v28 = v32 >> 1;
  else
    v26 = v32 >> 1;
  v33 = v28 + v26 + 1;
  if ( v25 > *(unsigned __int8 *)(v17 + (v33 >> 1)) )
    v28 = v33 >> 1;
  else
    v26 = v33 >> 1;
  if ( v28 )
    v34 = *(unsigned __int8 *)(v17 + v28);
  else
    v34 = -1;
  if ( v25 - v34 > *(unsigned __int8 *)(v17 + v26) - v25 )
    v28 = v26;
  if ( !v28 )
  {
LABEL_38:
    if ( !a1[1] )
      return 0;
    v37 = ((1 << a5) - 1) & v69;
    a9 = v37;
    if ( v37 )
    {
      if ( a6 )
      {
        if ( a3 >= 1 )
        {
          v38 = a3;
          v39 = a1[10];
          v40 = (_WORD *)a2;
          do
          {
            v39 = v39 * (_DWORD)&unk_19660D + 1013904223;
            v41 = *v18++;
            --v38;
            *v40++ = v41 + ((((16 * v39) & 0x80000u) - 0x40000) >> 16);
          }
          while ( v38 );
          a1[10] = v39;
        }
        v42 = a8;
      }
      else
      {
        v42 = a8;
        if ( a3 >= 1 )
        {
          v58 = a1[10];
          v59 = a3;
          v60 = (_WORD *)a2;
          do
          {
            v58 = v58 * (_DWORD)&unk_19660D + 1013904223;
            --v59;
            *v60++ = v58 >> 20;
          }
          while ( v59 );
          a1[10] = v58;
        }
        v37 = (1 << a5) - 1;
      }
      j_renormalise_vector(a2, a3, v42, a1[11]);
    }
    else
    {
      sub_10967C(a2, 2 * a3);
      return 0;
    }
    return v37;
  }
  while ( 1 )
  {
    v35 = a1[8];
    v36 = v35 - (*(unsigned __int8 *)(v17 + v28) + 1);
    a1[8] = v36;
    if ( v28 < 1 || v36 > -1 )
      break;
    --v28;
    a1[8] = v35;
    if ( !v28 )
      goto LABEL_38;
  }
  if ( v28 >= 8 )
    v28 = (v28 & 7 | 8) << (((unsigned int)v28 >> 3) - 1);
  if ( v12 )
    return j_alg_quant(a2, a3, v28, v66, a5, v65, a8, a1[1], a1[11]);
  else
    return j_alg_unquant(a2, a3, v28, v66, a5, v65, a8);
}


// ======================================================================
// ADDR: 0xc0324
// SYMBOL: sub_C0324
size_t __fastcall sub_C0324(char *a1, int a2, int a3, int a4)
{
  bool v4; // cc
  int v5; // r10
  char *v6; // r9
  _WORD *v7; // r6
  int v8; // r5
  char *v9; // r3
  __int16 v10; // t1
  bool v11; // cc
  int v12; // r9
  __int16 *v13; // r10
  char *v14; // r11
  __int16 *v15; // r6
  _WORD *v16; // r3
  int v17; // r5
  __int16 v18; // t1
  size_t n[3]; // [sp+0h] [bp-28h] BYREF

  n[0] = 2 * a2 * a3;
  if ( a4 )
  {
    v4 = a3 < 1;
    if ( a3 >= 1 )
      v4 = a2 < 1;
    if ( !v4 )
    {
      v5 = 0;
      v6 = (char *)n - ((2 * a2 * a3 + 7) & 0xFFFFFFF8);
      do
      {
        v7 = v6;
        v8 = a2;
        v9 = &a1[2 * dword_5B2A8[a3 - 2 + v5] * a2];
        do
        {
          v10 = *(_WORD *)v9;
          v9 += 2;
          --v8;
          *v7 = v10;
          v7 += a3;
        }
        while ( v8 );
        ++v5;
        v6 += 2;
      }
      while ( v5 != a3 );
    }
  }
  else
  {
    v11 = a3 < 1;
    if ( a3 >= 1 )
      v11 = a2 < 1;
    if ( !v11 )
    {
      v12 = 0;
      v13 = (__int16 *)a1;
      v14 = (char *)n - ((2 * a2 * a3 + 7) & 0xFFFFFFF8);
      do
      {
        v15 = v13;
        v16 = v14;
        v17 = a2;
        do
        {
          v18 = *v15++;
          --v17;
          *v16 = v18;
          v16 += a3;
        }
        while ( v17 );
        ++v12;
        v13 += a2;
        v14 += 2;
      }
      while ( v12 != a3 );
    }
  }
  j_memcpy(a1, (char *)n - ((2 * a2 * a3 + 7) & 0xFFFFFFF8), n[0]);
  return _stack_chk_guard - n[1];
}


// ======================================================================
