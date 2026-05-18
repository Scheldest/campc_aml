// ADDR: 0x9f268
// SYMBOL: sub_9F268
int __fastcall sub_9F268(_DWORD *a1, int a2, __int16 a3, __int16 a4)
{
  int v5; // r0
  int v6; // r5
  int v7; // r5
  int v8; // r1
  void *v9; // r0
  const void *v10; // r1
  void *v11; // r8
  _QWORD *v12; // r0
  int result; // r0
  __int64 v14; // [sp+0h] [bp-38h]

  v6 = a1[17];
  v5 = a1[16];
  HIWORD(v14) = a4;
  WORD2(v14) = a3;
  LODWORD(v14) = a2;
  if ( v5 == v6 )
  {
    v7 = v5 + 1;
    if ( v5 )
      v8 = v5 + v5 / 2;
    else
      v8 = 8;
    if ( v8 > v7 )
      v7 = v8;
    if ( v5 < v7 )
    {
      v9 = (void *)sub_885E4(28 * v7);
      v10 = (const void *)a1[18];
      v11 = v9;
      if ( v10 )
      {
        j_memcpy(v9, v10, 28 * a1[16]);
        sub_88614(a1[18]);
      }
      v5 = a1[16];
      a1[17] = v7;
      a1[18] = v11;
    }
  }
  v12 = (_QWORD *)(a1[18] + 28 * v5);
  *v12 = v14;
  v12[1] = 0xFFFFFFFFLL;
  v12 = (_QWORD *)((char *)v12 + 12);
  *v12 = 0LL;
  v12[1] = 0LL;
  result = a1[16];
  a1[16] = result + 1;
  return result;
}


// ======================================================================
// ADDR: 0xa24bc
// SYMBOL: sub_A24BC
int __fastcall sub_A24BC(int *a1, int a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r5
  void *v6; // r0
  const void *v7; // r1
  int v8; // r8
  int v9; // r0

  v3 = a1[1];
  v4 = (a2 + 31) >> 5;
  if ( v3 < v4 )
  {
    if ( v3 )
      v5 = v3 + v3 / 2;
    else
      v5 = 8;
    if ( v5 <= v4 )
      v5 = (a2 + 31) >> 5;
    if ( v3 < v5 )
    {
      v6 = (void *)sub_885E4(4 * v5);
      v7 = (const void *)a1[2];
      v8 = (int)v6;
      if ( v7 )
      {
        j_memcpy(v6, v7, 4 * *a1);
        sub_88614(a1[2]);
      }
      a1[1] = v5;
      a1[2] = v8;
    }
  }
  v9 = a1[2];
  *a1 = v4;
  return sub_10967C(v9, 4 * v4);
}


// ======================================================================
// ADDR: 0xa251c
// SYMBOL: sub_A251C
unsigned int __fastcall sub_A251C(int a1, int a2)
{
  int v2; // r2
  int v3; // lr
  int v4; // r12
  unsigned int v5; // r3
  unsigned int result; // r0
  int v7; // r6
  int v8; // r12
  int v9; // r5
  int v10; // r2
  unsigned int v11; // r4
  int v12; // r0
  int v13; // r3
  unsigned int v14; // r8
  int v15; // r4
  int v16; // r3
  unsigned int v17; // r4
  unsigned int v18; // r5
  int v19; // r0
  int v20; // r6
  unsigned int v21; // r3
  signed int v22; // r5
  unsigned int v23; // r0
  unsigned int v24; // r1

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 44);
  v4 = v2 + v3;
  v5 = bswap32(*(unsigned __int16 *)(v2 + v3) << 16);
  result = 0;
  switch ( v5 )
  {
    case 0u:
      if ( (int)(bswap32(*(unsigned __int16 *)(v4 + 2) << 16) - 6) <= a2 )
        return 0;
      return *(unsigned __int8 *)(v4 + a2 + 6);
    case 2u:
      return result;
    case 4u:
      if ( a2 >= 0x10000 )
        return 0;
      v13 = *(_BYTE *)(v4 + 13) & 0xFE | (*(unsigned __int8 *)(v4 + 12) << 8);
      v14 = bswap32(*(unsigned __int16 *)(v4 + 6) << 16);
      v15 = v3;
      if ( (int)bswap32(*(unsigned __int16 *)(v4 + v13 + 14) << 16) <= a2 )
        v15 = v3 + v13;
      v16 = v15 + 12;
      v17 = bswap32(*(unsigned __int16 *)(v4 + 10)) >> 16;
      if ( v17 )
      {
        v18 = bswap32(*(unsigned __int16 *)(v4 + 8)) >> 16;
        do
        {
          v19 = (v18 >> 1) & 0x7FFE;
          --v17;
          v18 = (unsigned __int16)v18 >> 1;
          if ( (int)bswap32(*(unsigned __int16 *)(v2 + v16 + v19) << 16) < a2 )
            v16 += v19;
        }
        while ( v17 << 16 );
      }
      v20 = v4 + 14;
      v21 = (unsigned int)&aZnkst6Ndk18tim_34[v16 + 22 - v3] & (unsigned int)"reambuf_iteratorIwNS_11char_traitsIwEEEEE17__get_white_spaceERS4_S4_RjRKNS_5ctypeIwEE";
      v22 = bswap32(*(unsigned __int16 *)((v14 & 0xFFFFFFFE) + v4 + 14 + v21 + 2) << 16);
      if ( v22 <= a2 )
      {
        result = bswap32(*(unsigned __int16 *)(v20 + 6 * (v14 >> 1) + v21 + 2) << 16);
        if ( result )
          LOWORD(result) = bswap32(*(unsigned __int16 *)(result + v2 + 2 * (a2 - v22) + v3 + 6 * (v14 >> 1) + v21 + 16) << 16);
        else
          return (unsigned __int16)(bswap32(*(unsigned __int16 *)(v20 + 4 * (v14 >> 1) + v21 + 2) << 16) + a2);
      }
      else
      {
        LOWORD(result) = 0;
      }
      return (unsigned __int16)result;
    case 6u:
      v23 = bswap32(*(unsigned __int16 *)(v4 + 6) << 16);
      if ( v23 > a2 || bswap32(*(unsigned __int16 *)(v4 + 8) << 16) + v23 <= a2 )
        return 0;
      return bswap32(*(unsigned __int16 *)(v4 + 2 * (a2 - v23) + 10) << 16);
    default:
      if ( (v5 & 0xFFFFFFFE) != 0xC )
        return 0;
      v7 = bswap32(*(_DWORD *)(v4 + 12));
      if ( v7 < 1 )
        return 0;
      v8 = v4 + 16;
      v9 = 0;
      break;
  }
  while ( 1 )
  {
    v10 = v9 + ((v7 - v9) >> 1);
    v11 = bswap32(*(_DWORD *)(v8 + 12 * v10));
    if ( v11 <= a2 )
      break;
LABEL_7:
    v7 = v10;
    if ( v10 <= v9 )
      return 0;
  }
  v12 = v8 + 12 * v10;
  if ( bswap32(*(_DWORD *)(v12 + 4)) < a2 )
  {
    v9 = v10 + 1;
    v10 = v7;
    goto LABEL_7;
  }
  v24 = a2 - v11;
  result = bswap32(*(_DWORD *)(v12 + 8));
  if ( v5 == 12 )
    result += v24;
  return result;
}


// ======================================================================
// ADDR: 0xa26c8
// SYMBOL: sub_A26C8
int __fastcall sub_A26C8(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  float v6; // s0
  float v7; // s1
  _DWORD *v9; // r8
  int v11; // r0
  int v12; // r1
  int v13; // r4
  int v14; // r10
  int v15; // r5
  int v16; // r0
  int v17; // r6
  int v19; // r2
  int v20; // r3
  unsigned int v21; // r6
  unsigned int v22; // r3
  int v23; // r1
  int v24; // r6
  unsigned __int8 *v25; // r1
  int v26; // r3
  int v27; // r0
  unsigned __int16 *v28; // r0
  int v29; // [sp+34h] [bp-34h]

  v9 = a4;
  if ( a1[15] )
  {
    v11 = sub_A41EC();
    v12 = 0;
    v9 = a4;
    v14 = 0;
    v13 = 0;
    v15 = 0;
    if ( !v11 )
    {
      v15 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
    }
    if ( a3 )
      goto LABEL_5;
    goto LABEL_6;
  }
  if ( a1[3] > a2 )
  {
    v17 = a1[12];
    if ( v17 <= 1 )
    {
      v19 = a1[1];
      v20 = a1[4] + v19;
      if ( v17 )
      {
        v21 = *(_DWORD *)(v20 + 4 * a2);
        v22 = *(_DWORD *)(v20 + 4 * a2 + 4);
        v23 = bswap32(v21);
        if ( v23 == bswap32(v22) )
          goto LABEL_14;
      }
      else
      {
        v24 = *(unsigned __int8 *)(v20 + 2 * a2);
        v25 = (unsigned __int8 *)(v20 + 2 * a2);
        v26 = (2 * v25[3]) | (v25[2] << 9);
        v23 = (2 * v25[1]) | (v24 << 9);
        if ( v23 == v26 )
          goto LABEL_14;
      }
      v27 = a1[6] + v23;
      if ( v27 >= 0 )
      {
        v28 = (unsigned __int16 *)(v27 + v19);
        v15 = (__int16)bswap16(v28[4]);
        v13 = (__int16)bswap16(v28[3]);
        v14 = (__int16)bswap16(v28[2]);
        v12 = (__int16)bswap16(v28[1]);
        if ( a3 )
LABEL_5:
          *a3 = (int)floorf((float)((float)v12 * v6) + 0.0);
LABEL_6:
        if ( v9 )
          *v9 = (int)floorf((float)((float)-v15 * v7) + 0.0);
        if ( a5 )
          *a5 = (int)ceilf((float)((float)v13 * v6) + 0.0);
        if ( a6 )
        {
          v16 = (int)ceilf((float)((float)-v14 * v7) + 0.0);
LABEL_22:
          *a6 = v16;
          return v29;
        }
        return v29;
      }
    }
  }
LABEL_14:
  if ( a3 )
    *a3 = 0;
  if ( v9 )
    *v9 = 0;
  if ( a5 )
    *a5 = 0;
  if ( a6 )
  {
    v16 = 0;
    goto LABEL_22;
  }
  return v29;
}


// ======================================================================
// ADDR: 0xa28ac
// SYMBOL: sub_A28AC
int __fastcall sub_A28AC(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6
  signed int v5; // r5
  int v6; // r9
  int v7; // r0
  _DWORD *v8; // r1
  int *v9; // r2
  int v10; // t1
  int v11; // r0
  unsigned __int16 *v12; // r0
  int v13; // r1
  int v14; // r6
  int v15; // r2
  int v16; // r12
  unsigned __int16 v17; // r3
  int v18; // r2
  char *v20; // [sp+8h] [bp-20h]
  int v21; // [sp+Ch] [bp-1Ch]

  v4 = 0;
  v5 = a1[16];
  v20 = 0;
  if ( v5 >= 1 )
  {
    v6 = a1[16];
    if ( (unsigned int)v5 <= 8 )
      v6 = 8;
    v4 = (_DWORD *)sub_885E4(16 * v6);
    v20 = (char *)v4;
  }
  sub_10967C((int)v4, 16 * v5);
  v7 = a1[16];
  if ( v7 >= 1 )
  {
    v8 = v4 + 1;
    v9 = (int *)(a1[18] + 4);
    do
    {
      v10 = *v9;
      v9 += 7;
      --v7;
      *v8 = v10;
      v8 += 4;
    }
    while ( v7 );
  }
  sub_A2994(a2, v4, v5);
  v11 = (int)v20;
  if ( v5 >= 1 )
  {
    v12 = (unsigned __int16 *)(v20 + 6);
    v13 = 0;
    do
    {
      if ( *(_DWORD *)(v12 + 3) )
      {
        v14 = v12[2];
        v15 = a1[8];
        v16 = a1[18];
        v17 = v12[1];
        if ( v15 < *v12 + v14 )
          v15 = *v12 + v14;
        a1[8] = v15;
        v18 = v16 + v13;
        *(_WORD *)(v18 + 8) = v17;
        *(_WORD *)(v18 + 10) = v14;
      }
      v13 += 28;
      v12 += 8;
      --v5;
    }
    while ( v5 );
    v11 = (int)v20;
  }
  if ( v11 )
    sub_88614(v11);
  return v21;
}


// ======================================================================
// ADDR: 0xa2994
// SYMBOL: sub_A2994
void __fastcall sub_A2994(_DWORD *a1, char *base, signed int nmemb)
{
  signed int v3; // r4
  unsigned __int16 *v4; // r8
  _DWORD *v5; // r0
  int i; // r1
  int v7; // r1
  unsigned __int16 *v8; // r2
  int v9; // r8
  unsigned __int16 *v10; // r4
  int v11; // r5
  unsigned int v12; // r6
  int v13; // r1
  int v14; // r1
  int v15; // r5
  int v16; // r2
  unsigned __int16 *v17; // r0
  unsigned __int16 **v18; // r9
  int v19; // r1
  unsigned __int16 **v20; // r0
  unsigned __int16 *v21; // t1
  unsigned __int16 **v22; // r10
  int v23; // lr
  unsigned __int16 *v24; // r1
  unsigned int v25; // r3
  int v26; // r12
  int v27; // r8
  unsigned __int16 *v28; // r9
  int v29; // r0
  int v30; // r2
  int v31; // r11
  int v32; // r4
  int v33; // r0
  int v34; // r2
  int v35; // r0
  unsigned __int16 *v36; // r5
  unsigned __int16 *v37; // r8
  unsigned __int16 *v38; // r2
  int v39; // r11
  unsigned __int16 *v40; // r0
  unsigned __int16 *v41; // r9
  unsigned int v42; // r2
  unsigned int v43; // r10
  int v44; // r3
  int v45; // r4
  int v46; // r12
  int v47; // r0
  unsigned int v48; // r6
  int v49; // lr
  int v50; // r0
  int v51; // r6
  int v52; // r5
  __int16 v53; // r1
  int v54; // r12
  unsigned __int16 v55; // lr
  unsigned __int16 *v56; // r2
  int v57; // r3
  _WORD *v58; // r6
  _DWORD *v59; // r0
  _DWORD *v60; // r3
  unsigned __int16 *v61; // r5
  int v62; // r1
  _WORD *v63; // r2
  int v64; // r3
  unsigned __int16 *v65; // r0
  _BOOL4 v66; // r1
  unsigned __int16 *v67; // [sp+4h] [bp-5Ch]
  signed int v68; // [sp+8h] [bp-58h]
  int v69; // [sp+Ch] [bp-54h]
  unsigned __int16 *v70; // [sp+10h] [bp-50h]
  int v71; // [sp+14h] [bp-4Ch]
  int v72; // [sp+18h] [bp-48h]
  unsigned int v73; // [sp+1Ch] [bp-44h]
  int v75; // [sp+24h] [bp-3Ch]
  unsigned __int16 **v76; // [sp+28h] [bp-38h]
  int v77; // [sp+2Ch] [bp-34h]
  int v78; // [sp+30h] [bp-30h]
  unsigned __int16 *v79; // [sp+30h] [bp-30h]
  unsigned __int16 *v80; // [sp+34h] [bp-2Ch]
  unsigned __int16 *v81; // [sp+34h] [bp-2Ch]
  int v82; // [sp+38h] [bp-28h]
  int v83; // [sp+38h] [bp-28h]
  int v84; // [sp+3Ch] [bp-24h]
  unsigned int v85; // [sp+3Ch] [bp-24h]
  int v86; // [sp+40h] [bp-20h]

  v3 = nmemb;
  v4 = (unsigned __int16 *)base;
  if ( nmemb < 1 )
  {
    qsort(base, nmemb, 0x10u, (__compar_fn_t)sub_A52C8);
LABEL_89:
    sub_10C1B8(v4, v3, 16, sub_A52F0);
    return;
  }
  v5 = base + 12;
  for ( i = 0; i != nmemb; ++i )
  {
    *v5 = i;
    v5 += 4;
  }
  qsort(v4, nmemb, 0x10u, (__compar_fn_t)sub_A52C8);
  if ( v3 < 1 )
    goto LABEL_89;
  v7 = 0;
  v67 = v4;
  v68 = v3;
  do
  {
    v8 = &v4[8 * v7];
    if ( !v8[2] || (v77 = v8[3]) == 0 )
    {
      *((_DWORD *)v8 + 2) = 0;
      goto LABEL_7;
    }
    v70 = &v4[8 * v7];
    v71 = v7;
    v9 = *a1;
    v10 = (unsigned __int16 *)a1[6];
    v11 = v8[2] + a1[2] - 1;
    v84 = a1[4];
    v69 = v8[2];
    sub_1090B0(v11);
    v12 = *v10;
    v14 = v11 - v13;
    v86 = v14;
    v15 = v14 + v12;
    if ( (int)(v14 + v12) > v9 )
    {
      v76 = 0;
      v75 = 0x40000000;
      v16 = 0x40000000;
      v72 = 0;
      goto LABEL_41;
    }
    v76 = 0;
    v75 = 0x40000000;
    v17 = v10;
    v73 = *v10;
    v80 = v10;
    v18 = (unsigned __int16 **)(a1 + 6);
    v82 = 0x40000000;
    v78 = v9;
    do
    {
      v22 = v18;
      if ( v14 < 1 )
      {
        v28 = v17;
        v27 = 0;
        v23 = 0;
      }
      else
      {
        v23 = 0;
        v24 = v17;
        v25 = v12;
        v26 = 0;
        v27 = 0;
        v28 = v17;
        do
        {
          v33 = v24[1];
          if ( v27 >= v33 )
          {
            v24 = (unsigned __int16 *)*((_DWORD *)v24 + 1);
            v29 = v27 - v33;
            v30 = *v24;
            v31 = v30 - v25;
            if ( (int)(v30 - v25 + v26) > v86 )
              v31 = v86 - v26;
            v32 = v31 * v29;
          }
          else
          {
            v24 = (unsigned __int16 *)*((_DWORD *)v24 + 1);
            v34 = v33 - v27;
            v27 = v33;
            v32 = v34 * v26;
            v30 = *v24;
            if ( v25 >= v12 )
              v31 = v30 - v25;
            else
              v31 = v30 - v12;
          }
          v25 = v30;
          v26 += v31;
          v23 += v32;
        }
        while ( v15 > v30 );
      }
      if ( !v84 )
      {
        v19 = v82;
        v20 = v76;
        if ( v27 < v82 )
          v20 = v22;
        v76 = v20;
        if ( v27 < v82 )
          v19 = v27;
        v82 = v19;
LABEL_18:
        v14 = v86;
        goto LABEL_19;
      }
      if ( v77 + v27 > a1[1] )
        goto LABEL_18;
      v14 = v86;
      if ( v27 < v82 || v27 == v82 && v23 < v75 )
      {
        v82 = v27;
        v75 = v23;
        v76 = v22;
      }
LABEL_19:
      v21 = (unsigned __int16 *)*((_DWORD *)v28 + 1);
      v18 = (unsigned __int16 **)(v28 + 2);
      v17 = v21;
      v12 = *v21;
      v15 = v14 + v12;
    }
    while ( (int)(v14 + v12) <= v78 );
    if ( v76 )
    {
      v35 = **v76;
    }
    else
    {
      v76 = 0;
      v35 = 0;
    }
    v72 = v35;
    v12 = v73;
    v10 = v80;
    v16 = v82;
LABEL_41:
    if ( v84 == 1 )
    {
      v36 = v10;
      if ( v14 > (int)v12 )
      {
        do
          v36 = (unsigned __int16 *)*((_DWORD *)v36 + 1);
        while ( v14 > *v36 );
        goto LABEL_46;
      }
      v36 = v10;
      if ( v10 )
      {
LABEL_46:
        v37 = (unsigned __int16 *)(a1 + 6);
        do
        {
          v83 = v16;
          v38 = v10;
          v39 = *v36 - v14;
          v85 = *v36;
          v40 = v37;
          do
          {
            v37 = v40;
            v41 = v38;
            v40 = v38 + 2;
            v38 = (unsigned __int16 *)*((_DWORD *)v38 + 1);
          }
          while ( v39 >= *v38 );
          v42 = *v36;
          v43 = *v41;
          v79 = v36;
          v81 = v41;
          if ( v85 <= v43 )
          {
            v46 = 0;
            v44 = 0;
          }
          else
          {
            v44 = 0;
            v45 = 0;
            v46 = 0;
            do
            {
              v50 = v41[1];
              if ( v46 >= v50 )
              {
                v41 = (unsigned __int16 *)*((_DWORD *)v41 + 1);
                v47 = v46 - v50;
                v48 = *v41 - v43;
                v43 = *v41;
                v42 = v85;
                v14 = v86;
                if ( (int)(v48 + v45) > v86 )
                  v48 = v86 - v45;
                v49 = v48 * v47;
              }
              else
              {
                v41 = (unsigned __int16 *)*((_DWORD *)v41 + 1);
                v51 = v50 - v46;
                v46 = v50;
                v49 = v51 * v45;
                v52 = *v41;
                if ( (int)v43 >= v39 )
                  v48 = v52 - v43;
                else
                  v48 = v52 - v39;
                v43 = *v41;
              }
              v45 += v48;
              v44 += v49;
            }
            while ( v43 < v42 );
          }
          if ( v77 + v46 >= a1[1] )
          {
            v10 = v81;
            v16 = v83;
          }
          else
          {
            v16 = v83;
            if ( v46 > v83 )
            {
              v10 = v81;
            }
            else
            {
              v10 = v81;
              if ( v46 < v83 || v44 < v75 || v44 == v75 && v39 < v72 )
              {
                v16 = v46;
                v72 = v39;
                v75 = v44;
                v76 = (unsigned __int16 **)v37;
              }
            }
          }
          v36 = (unsigned __int16 *)*((_DWORD *)v79 + 1);
        }
        while ( v36 );
      }
    }
    if ( v76 && (v53 = v77 + v16, v77 + v16 <= a1[1]) && (v54 = a1[7]) != 0 )
    {
      v55 = v16;
      a1[7] = *(_DWORD *)(v54 + 4);
      v56 = *v76;
      *(_WORD *)v54 = v72;
      v4 = v67;
      v3 = v68;
      v57 = *v56;
      *(_WORD *)(v54 + 2) = v53;
      if ( v72 <= v57 )
      {
        v59 = v76;
        v58 = v56;
      }
      else
      {
        v58 = (_WORD *)*((_DWORD *)v56 + 1);
        v59 = v56 + 2;
      }
      *v59 = v54;
      v60 = v58 + 2;
      v61 = (unsigned __int16 *)*((_DWORD *)v58 + 1);
      v62 = v72 + v69;
      if ( v61 )
      {
        while ( 1 )
        {
          v63 = v61;
          if ( v62 < *v61 )
            break;
          *v60 = a1[7];
          v60 = v61 + 2;
          v61 = (unsigned __int16 *)*((_DWORD *)v61 + 1);
          a1[7] = v58;
          v58 = v63;
          if ( !v61 )
            goto LABEL_85;
        }
      }
      v63 = v58;
LABEL_85:
      v64 = (unsigned __int16)*v63;
      *(_DWORD *)(v54 + 4) = v63;
      if ( v62 > v64 )
        *v63 = v62;
      v70[5] = v55;
      v70[4] = v72;
    }
    else
    {
      v4 = v67;
      v3 = v68;
      v70[4] = -1;
      v70[5] = -1;
    }
    v7 = v71;
LABEL_7:
    ++v7;
  }
  while ( v7 != v3 );
  qsort(v4, v3, 0x10u, (__compar_fn_t)sub_A52F0);
  v65 = v4 + 4;
  do
  {
    v66 = *v65 == 0xFFFF && v65[1] == 0xFFFF;
    *((_DWORD *)v65 + 1) = !v66;
    --v3;
    v65 += 8;
  }
  while ( v3 );
}


// ======================================================================
// ADDR: 0xa2d54
// SYMBOL: sub_A2D54
int __fastcall sub_A2D54(int a1, int a2, int a3, int a4, float a5)
{
  int v7; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int result; // r0

  if ( !*(_BYTE *)(a3 + 60) )
  {
    v7 = *(_DWORD *)(a2 + 40);
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 16) = 0;
    if ( v7 )
    {
      *(_DWORD *)(a2 + 32) = 0;
      *(_DWORD *)(a2 + 36) = 0;
      sub_88614(v7);
      *(_DWORD *)(a2 + 40) = 0;
    }
    v10 = *(_DWORD *)(a2 + 8);
    if ( v10 )
    {
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 4) = 0;
      sub_88614(v10);
      *(_DWORD *)(a2 + 8) = 0;
    }
    v11 = *(_DWORD *)(a2 + 28);
    if ( v11 )
    {
      *(_DWORD *)(a2 + 20) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      sub_88614(v11);
      *(_DWORD *)(a2 + 28) = 0;
    }
    *(_DWORD *)(a2 + 60) = a3;
    *(_BYTE *)(a2 + 84) = 1;
    *(_DWORD *)(a2 + 44) = 0;
    *(_DWORD *)(a2 + 80) = 0;
    *(_DWORD *)(a2 + 72) = a4;
    *(float *)(a2 + 76) = a5;
    v12 = *(_DWORD *)(a3 + 16);
    *(_DWORD *)(a2 + 56) = a1;
    *(_DWORD *)(a2 + 16) = v12;
  }
  result = *(unsigned __int16 *)(a2 + 64) + 1;
  *(_WORD *)(a2 + 64) = result;
  return result;
}


// ======================================================================
// ADDR: 0xa2ddc
// SYMBOL: sub_A2DDC
int __fastcall sub_A2DDC(
        int a1,
        __int16 a2,
        int a3,
        int a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11)
{
  int v12; // r0
  __int64 v13; // kr00_8
  int v15; // r5
  int v18; // r1
  void *v19; // r0
  const void *v20; // r1
  void *v21; // r8
  int v22; // r1
  int v23; // r0
  float v24; // s0
  int v25; // r0
  float v26; // s0
  int v27; // r3
  int result; // r0

  v13 = *(_QWORD *)(a1 + 32);
  v12 = *(_DWORD *)(a1 + 36);
  v15 = v13 + 1;
  if ( v12 <= (int)v13 )
  {
    if ( v12 )
      v18 = v12 + v12 / 2;
    else
      v18 = 8;
    if ( v18 > v15 )
      v15 = v18;
    if ( v12 < v15 )
    {
      v19 = (void *)sub_885E4(40 * v15);
      v20 = *(const void **)(a1 + 40);
      v21 = v19;
      if ( v20 )
      {
        j_memcpy(v19, v20, 40 * *(_DWORD *)(a1 + 32));
        sub_88614(*(_DWORD *)(a1 + 40));
      }
      *(_DWORD *)(a1 + 36) = v15;
      *(_DWORD *)(a1 + 40) = v21;
    }
  }
  v22 = *(_DWORD *)(a1 + 60);
  v23 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = v13 + 1;
  v24 = *(float *)(v22 + 32);
  *(_WORD *)(v23 + 40 * v13) = a2;
  v25 = v23 + 40 * v13;
  v26 = v24 + a11;
  v27 = *(unsigned __int8 *)(v22 + 28);
  *(float *)(v25 + 36) = a10;
  *(_DWORD *)(v25 + 8) = a3;
  *(_DWORD *)(v25 + 12) = a4;
  *(float *)(v25 + 16) = a5;
  *(float *)(v25 + 20) = a6;
  *(float *)(v25 + 4) = v26;
  *(float *)(v25 + 24) = a7;
  *(float *)(v25 + 28) = a8;
  *(float *)(v25 + 32) = a9;
  if ( v27 )
    *(float *)(v25 + 4) = (float)(int)(float)(v26 + 0.5);
  result = *(_DWORD *)(a1 + 80)
         + (int)(float)((float)((float)(a10 - a8) * (float)*(int *)(*(_DWORD *)(a1 + 56) + 32)) + 1.99)
         * (int)(float)((float)((float)(a9 - a7) * (float)*(int *)(*(_DWORD *)(a1 + 56) + 28)) + 1.99);
  *(_BYTE *)(a1 + 84) = 1;
  *(_DWORD *)(a1 + 80) = result;
  return result;
}


// ======================================================================
// ADDR: 0xa2f10
// SYMBOL: sub_A2F10
unsigned int __fastcall sub_A2F10(int a1)
{
  int v2; // r10
  int v3; // r1
  unsigned __int16 *v4; // r9
  unsigned __int16 *v5; // r11
  int v6; // r6
  int v7; // lr
  int i; // r5
  char v9; // r3
  int v10; // r2
  int v11; // r1
  bool v12; // zf
  char v13; // r2
  int v14; // r1
  int v15; // r0
  int v16; // r2
  unsigned int result; // r0
  float v18; // s0
  int v19; // r5
  int v20; // r6
  int v21; // r1
  int v22; // r1
  unsigned int v23; // r12
  int v24; // r1
  int j; // r5
  int v26; // [sp+20h] [bp-20h]

  v2 = *(_DWORD *)(a1 + 28);
  v3 = *(_DWORD *)(a1 + 72) + 28 * *(_DWORD *)(a1 + 88);
  v4 = (unsigned __int16 *)(v3 + 8);
  v26 = v3;
  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
  {
    v15 = *v4 + v2 * *(unsigned __int16 *)(v3 + 10);
    *(_BYTE *)(*(_DWORD *)(a1 + 20) + v15 + v2 + 1) = -1;
    *(_BYTE *)(*(_DWORD *)(a1 + 20) + v15 + v2) = -1;
    *(_BYTE *)(*(_DWORD *)(a1 + 20) + v15 + 1) = -1;
    *(_BYTE *)(*(_DWORD *)(a1 + 20) + v15) = -1;
  }
  else
  {
    v5 = (unsigned __int16 *)(v3 + 10);
    v6 = 0;
    v7 = 0;
    do
    {
      for ( i = 0; i != 108; ++i )
      {
        v9 = 0;
        v10 = (unsigned __int8)aXxxxxxxXXXxxxx[v7 + i];
        v11 = *v4 + v2 * (*v5 + v6);
        if ( v10 == 46 )
          v9 = -1;
        v12 = v10 == 88;
        v13 = 0;
        *(_BYTE *)(*(_DWORD *)(a1 + 20) + v11 + i) = v9;
        if ( v12 )
          v13 = -1;
        v14 = v11 + *(_DWORD *)(a1 + 20) + i;
        *(_BYTE *)(v14 + 109) = v13;
      }
      ++v6;
      v7 += 108;
    }
    while ( v6 != 27 );
  }
  v16 = *(_DWORD *)(a1 + 64);
  result = *(unsigned __int16 *)(v26 + 10);
  v18 = *(float *)(a1 + 40) * (float)((float)result + 0.5);
  *(float *)(a1 + 44) = *(float *)(a1 + 36) * (float)((float)*v4 + 0.5);
  *(float *)(a1 + 48) = v18;
  if ( v16 >= 1 )
  {
    v19 = 0;
    v20 = 24;
    do
    {
      v21 = *(_DWORD *)(a1 + 72);
      result = *(_DWORD *)(v21 + v20);
      if ( result )
      {
        v22 = v21 + v20;
        v23 = *(_DWORD *)(v22 - 24);
        if ( v23 <= 0x10000 )
        {
          result = sub_A2DDC(
                     result,
                     v23,
                     *(_DWORD *)(v22 - 8),
                     *(_DWORD *)(v22 - 4),
                     *(float *)(v22 - 8) + (float)*(unsigned __int16 *)(v22 - 20),
                     *(float *)(v22 - 4) + (float)*(unsigned __int16 *)(v22 - 18),
                     *(float *)(a1 + 36) * (float)*(unsigned __int16 *)(v22 - 16),
                     *(float *)(a1 + 40) * (float)*(unsigned __int16 *)(v22 - 14),
                     *(float *)(a1 + 36) * (float)(*(unsigned __int16 *)(v22 - 20) + *(unsigned __int16 *)(v22 - 16)),
                     *(float *)(a1 + 40) * (float)(*(unsigned __int16 *)(v22 - 14) + *(unsigned __int16 *)(v22 - 18)),
                     *(float *)(v22 - 12));
          v16 = *(_DWORD *)(a1 + 64);
        }
      }
      ++v19;
      v20 += 28;
    }
    while ( v19 < v16 );
  }
  v24 = *(_DWORD *)(a1 + 52);
  if ( v24 >= 1 )
  {
    for ( j = 0; j < v24; ++j )
    {
      result = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4 * j);
      if ( *(_BYTE *)(result + 84) )
      {
        result = sub_A3138();
        v24 = *(_DWORD *)(a1 + 52);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xa3e34
// SYMBOL: sub_A3E34
_DWORD *__fastcall sub_A3E34(_DWORD *result, int a2, int a3, int a4, int a5)
{
  int v5; // r5
  int v6; // r2
  int v7; // r4
  int v8; // r2
  int v9; // r8
  int v10; // r12
  int v11; // r2
  int v12; // r9
  int v13; // r5
  int v14; // r6
  int v15; // r2
  int v16; // r6
  int v17; // r2
  int v18; // r4
  int v19; // r6
  int v20; // r2
  bool v21; // cc
  int v22; // r3

  v5 = a4 & (a4 >> 31);
  if ( a4 < 1 )
  {
    v7 = 0;
    if ( v5 < a4 )
      goto LABEL_3;
  }
  else
  {
    v6 = *(unsigned __int8 *)(a2 + v5++);
    v7 = v6 << 8;
    if ( v5 < a4 )
    {
LABEL_3:
      v8 = *(unsigned __int8 *)(a2 + v5++);
      goto LABEL_6;
    }
  }
  v8 = 0;
LABEL_6:
  if ( v5 >= a4 )
    v9 = 0;
  else
    v9 = *(unsigned __int8 *)(a2 + v5++);
  v10 = v7 | v8;
  v12 = 0;
  v13 = v5 + v9 * a5;
  v11 = v13;
  if ( a4 < v13 )
    v13 = a4;
  if ( v11 < 0 )
    v13 = a4;
  if ( v9 )
  {
    v14 = v9;
    do
    {
      if ( v13 < a4 )
        v15 = *(unsigned __int8 *)(a2 + v13++);
      else
        v15 = 0;
      v12 = (v12 << 8) | v15;
      --v14;
    }
    while ( v14 );
    v16 = 0;
    v17 = v9;
    do
    {
      if ( v13 < a4 )
        v18 = *(unsigned __int8 *)(a2 + v13++);
      else
        v18 = 0;
      --v17;
      v16 = (v16 << 8) | v18;
    }
    while ( v17 );
  }
  else
  {
    v16 = 0;
  }
  v19 = v16 - v12;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  v20 = v12 + v9 * (v10 + 1) + 2;
  if ( (v19 | v20) >= 0 )
  {
    v21 = a4 < v20;
    v22 = a4 - v20;
    if ( !v21 && v22 >= v19 )
    {
      result[2] = v19;
      *result = a2 + v20;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xa3efc
// SYMBOL: sub_A3EFC
int __fastcall sub_A3EFC(int *a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r3
  int v10; // r1
  int v11; // r5
  int v12; // r11
  int v13; // r2
  int v14; // r4
  unsigned int v15; // r3
  int v16; // r3
  char v17; // r3
  bool v18; // zf
  int v19; // r5
  bool v20; // cc
  int v21; // r1
  bool v22; // cc
  int v23; // r5
  bool v24; // cc
  int v26; // [sp+4h] [bp-2Ch] BYREF
  int v27; // [sp+8h] [bp-28h]
  int v28; // [sp+Ch] [bp-24h]
  int v29; // [sp+10h] [bp-20h]

  v8 = a1[2];
  v9 = v8 & (v8 >> 31);
  v10 = v8;
  a1[1] = v9;
  while ( v9 < v10 )
  {
    v12 = v9;
    v13 = v9;
    while ( 1 )
    {
      v14 = *a1;
      v15 = *(unsigned __int8 *)(*a1 + v13);
      if ( v15 < 0x1C )
        break;
      if ( v15 == 30 )
      {
        v16 = v10;
        if ( v13 >= -1 )
          v16 = v13 + 1;
        a1[1] = v16;
        if ( v16 > v10 )
          v10 = v16;
        while ( v10 != v16 )
        {
          v13 = v16 + 1;
          a1[1] = v16 + 1;
          v17 = *(_BYTE *)(v14 + v16);
          if ( (v17 & 0xF) != 0xF )
          {
            v18 = (v17 & 0xF0) == 240;
            v16 = v13;
            if ( !v18 )
              continue;
          }
          goto LABEL_7;
        }
        v13 = v10;
      }
      else
      {
        sub_A40F8(a1);
        v8 = a1[2];
        v13 = a1[1];
      }
LABEL_7:
      v10 = v8;
      if ( v13 >= v8 )
      {
        v11 = 0;
        v10 = v8;
        v9 = v13;
        goto LABEL_3;
      }
    }
    v9 = v13 + 1;
    a1[1] = v13 + 1;
    v11 = *(unsigned __int8 *)(v14 + v13);
    if ( v11 == 12 )
    {
      if ( v9 >= v10 )
      {
        v19 = 0;
      }
      else
      {
        a1[1] = v13 + 2;
        v19 = *(unsigned __int8 *)(v14 + v9);
        v9 = v13 + 2;
      }
      v11 = v19 + 256;
    }
LABEL_3:
    if ( v11 == a2 )
    {
      v27 = 0;
      if ( ((v13 - v12) | v12) >= 0 )
      {
        v20 = v10 < v12;
        if ( v10 >= v12 )
          v20 = v10 < v13;
        if ( !v20 )
        {
          v21 = *a1;
          v22 = a3 < 1;
          v28 = v13 - v12;
          v26 = v21 + v12;
          if ( a3 >= 1 )
            v22 = v13 - v12 < 1;
          if ( !v22 )
          {
            v23 = 0;
            do
            {
              *(_DWORD *)(a4 + 4 * v23++) = sub_A40F8(&v26);
              v24 = v23 < a3;
              if ( v23 < a3 )
                v24 = v27 < v28;
            }
            while ( v24 );
          }
        }
      }
      return v29;
    }
  }
  return v29;
}


// ======================================================================
// ADDR: 0xa4014
// SYMBOL: sub_A4014
int __fastcall sub_A4014(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r0
  int v11; // r4
  bool v12; // zf
  int v13; // r2
  int v14; // r1
  int v16[3]; // [sp+4h] [bp-4Ch] BYREF
  int v17; // [sp+10h] [bp-40h] BYREF
  int v18; // [sp+14h] [bp-3Ch]
  int v19; // [sp+18h] [bp-38h] BYREF
  int v20[3]; // [sp+1Ch] [bp-34h] BYREF
  _DWORD v21[10]; // [sp+28h] [bp-28h] BYREF

  v21[2] = a4;
  v20[0] = a5;
  v20[1] = a6;
  v20[2] = a7;
  v21[0] = a2;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  v10 = sub_A3EFC(v20, 18, 2, (int)&v17);
  v11 = v18;
  v12 = v18 == 0;
  if ( v18 )
  {
    v10 = v17;
    v12 = v17 == 0;
  }
  if ( v12 )
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  else
  {
    if ( (v10 | v18) < 0 )
    {
      v10 = 0;
      v13 = 0;
    }
    else
    {
      v13 = a2 + v18;
      if ( a4 < v18 || a4 - v18 < v10 )
      {
        v13 = 0;
        v10 = 0;
      }
    }
    v16[2] = v10;
    v16[0] = v13;
    v16[1] = 0;
    sub_A3EFC(v16, 19, 1, (int)&v19);
    if ( v19 )
    {
      v14 = v19 + v11;
      if ( a4 < v19 + v11 )
        v14 = a4;
      if ( v19 + v11 < 0 )
        v14 = a4;
      v21[1] = v14;
      sub_A3D60(a1, v21);
    }
    else
    {
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
    }
  }
  return v21[3];
}


// ======================================================================
// ADDR: 0xa5304
// SYMBOL: sub_A5304
int __fastcall sub_A5304(_DWORD *a1, int a2, int *a3)
{
  int v6; // r0
  int v7; // r4
  int v8; // r2
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r3
  int v12; // r1
  int v14; // r3
  unsigned __int8 *v15; // r1
  int v16; // r2
  int v17; // r2
  int v18; // r1
  int v19; // r2
  int v20; // r0
  unsigned int v21; // r11
  unsigned __int8 *v22; // r5
  int v23; // r10
  int v24; // r6
  unsigned int v25; // r4
  int v26; // r0
  int v27; // r1
  unsigned __int8 v28; // r3
  unsigned __int8 *v29; // r12
  int v30; // r0
  int v31; // r11
  int v32; // r5
  unsigned __int8 *v33; // r6
  int v34; // r0
  unsigned __int8 *v35; // r1
  __int16 v36; // r0
  int v37; // r1
  unsigned __int8 *v38; // r3
  int v39; // r2
  int v40; // t1
  int v41; // t1
  __int16 v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // t1
  int v46; // t1
  int v47; // r9
  signed int v48; // r10
  unsigned int v49; // lr
  int v50; // r12
  int v51; // r1
  __int16 v52; // r0
  int v53; // r3
  __int16 v54; // r0
  bool v55; // zf
  char v56; // r0
  int v57; // r11
  signed int v58; // r5
  __int16 *v59; // r5
  int v60; // r3
  int v61; // r8
  int v62; // r5
  __int16 v63; // r11
  int v64; // r4
  int v65; // r0
  __int16 v66; // r12
  int v67; // r6
  int v68; // r0
  _WORD *v69; // r4
  _BYTE *v70; // r11
  __int16 v71; // r0
  int v72; // r0
  int v73; // r4
  int v74; // r6
  int v75; // r2
  int v76; // r4
  int v77; // r2
  int v78; // r2
  int v79; // r11
  __int16 v80; // r1
  __int16 v81; // r6
  int v82; // r10
  int v83; // r5
  int v84; // r0
  float v85; // s22
  float v86; // s24
  float v87; // s26
  float v88; // s28
  float v89; // s17
  float v90; // s30
  int v91; // r1
  int v92; // r2
  unsigned __int16 v93; // r1
  unsigned __int16 v94; // r2
  __int16 v95; // r2
  unsigned __int16 v96; // r3
  unsigned __int16 v97; // t1
  int v98; // s2
  int v99; // r1
  int v100; // s0
  int v101; // r2
  int v102; // r0
  int v103; // r8
  int v104; // r1
  __int16 *v105; // r0
  float v106; // s0
  float v107; // s2
  float v108; // s4
  float v109; // s6
  float v110; // s8
  float v111; // s12
  void *v112; // r0
  int v113; // r0
  _BYTE *v114; // r2
  int v115; // r2
  int v116; // r0
  int v117; // r0
  int *v118; // [sp+0h] [bp-F8h]
  int v119; // [sp+4h] [bp-F4h]
  int v120; // [sp+8h] [bp-F0h]
  int v121; // [sp+Ch] [bp-ECh]
  _BOOL4 v122; // [sp+10h] [bp-E8h]
  __int16 v123; // [sp+14h] [bp-E4h]
  unsigned __int16 v124; // [sp+18h] [bp-E0h]
  int v125; // [sp+1Ch] [bp-DCh]
  int v126; // [sp+20h] [bp-D8h]
  signed int v127; // [sp+24h] [bp-D4h]
  void *v128; // [sp+28h] [bp-D0h]
  void *v129; // [sp+28h] [bp-D0h]
  void *src; // [sp+2Ch] [bp-CCh]
  void *srca; // [sp+2Ch] [bp-CCh]
  float v132[10]; // [sp+30h] [bp-C8h] BYREF
  __int64 v133; // [sp+58h] [bp-A0h]
  int v134; // [sp+64h] [bp-94h] BYREF
  __int64 v135; // [sp+68h] [bp-90h]
  __int64 v136; // [sp+70h] [bp-88h]
  __int64 v137; // [sp+78h] [bp-80h]
  int v138; // [sp+80h] [bp-78h]
  __int64 v139; // [sp+84h] [bp-74h]
  __int64 v140; // [sp+8Ch] [bp-6Ch]

  if ( a1[15] )
  {
    v135 = 0LL;
    v136 = 0LL;
    v137 = 0LL;
    v138 = 0;
    v139 = 0LL;
    v140 = 0LL;
    v134 = 1;
    memset(v132, 0, sizeof(v132));
    v133 = 0LL;
    if ( sub_A41EC((int)a1, a2, (float *)&v134) )
    {
      v6 = sub_885E4(14 * HIDWORD(v140));
      *a3 = v6;
      LODWORD(v133) = v6;
      if ( sub_A41EC((int)a1, a2, v132) )
        return HIDWORD(v133);
    }
LABEL_9:
    v7 = 0;
    *a3 = 0;
    return v7;
  }
  if ( a1[3] <= a2 )
    goto LABEL_9;
  v8 = a1[12];
  if ( v8 > 1 )
    goto LABEL_9;
  v9 = a1[1];
  v10 = a1[4] + v9;
  if ( v8 )
  {
    v11 = *(_DWORD *)(v10 + 4 * a2 + 4);
    v12 = bswap32(*(_DWORD *)(v10 + 4 * a2));
    if ( v12 == bswap32(v11) )
      goto LABEL_9;
  }
  else
  {
    v14 = *(unsigned __int8 *)(v10 + 2 * a2);
    v15 = (unsigned __int8 *)(v10 + 2 * a2);
    v16 = (2 * v15[3]) | (v15[2] << 9);
    v12 = (2 * v15[1]) | (v14 << 9);
    if ( v12 == v16 )
      goto LABEL_9;
  }
  v17 = a1[6];
  v7 = 0;
  *a3 = 0;
  v18 = v12 + v17;
  if ( v18 < 0 )
    return v7;
  v19 = *(unsigned __int16 *)(v9 + v18);
  v20 = v9 + v18;
  v118 = a3;
  v21 = bswap32(v19 << 16);
  if ( (__int16)v21 >= 1 )
  {
    v121 = v20 + 10;
    v22 = (unsigned __int8 *)(v20 + 10 + 2 * v21);
    v23 = *v22;
    v24 = v22[1];
    v25 = bswap32(*((unsigned __int16 *)v22 - 1) << 16);
    v26 = sub_885E4(14 * (v25 + 2 * v21) + 14);
    if ( !v26 )
      return 0;
    v27 = v26;
    src = (void *)(2 * v21);
    v28 = 0;
    v29 = &v22[(v24 | (v23 << 8)) + 2];
    v30 = 7 * v21;
    v31 = v27;
    v32 = 0;
    v33 = (unsigned __int8 *)(v27 + 4 * v30 + 12);
    v34 = -1;
    v35 = v33;
    do
    {
      if ( v32 << 24 )
      {
        --v32;
      }
      else
      {
        v28 = *v29;
        if ( (*v29 & 8) != 0 )
        {
          v32 = v29[1];
          v29 += 2;
        }
        else
        {
          v32 = 0;
          ++v29;
        }
      }
      ++v34;
      *v35 = v28;
      v35 += 14;
    }
    while ( v25 != v34 );
    v36 = 0;
    v37 = -1;
    v38 = v33;
    while ( 1 )
    {
      if ( (*v38 & 2) != 0 )
      {
        v40 = *v29++;
        v39 = v40;
        if ( (*v38 & 0x10) == 0 )
          v39 = -v39;
      }
      else
      {
        if ( (*v38 & 0x10) != 0 )
          goto LABEL_26;
        v41 = *(unsigned __int16 *)v29;
        v29 += 2;
        LOWORD(v39) = bswap32(v41 << 16);
      }
      v36 += v39;
LABEL_26:
      *((_WORD *)v38 - 6) = v36;
      ++v37;
      v38 += 14;
      if ( v25 == v37 )
      {
        v42 = 0;
        v43 = -1;
        while ( 1 )
        {
          if ( (*v33 & 4) != 0 )
          {
            v45 = *v29++;
            v44 = v45;
            if ( (*v33 & 0x20) == 0 )
              v44 = -v44;
          }
          else
          {
            if ( (*v33 & 0x20) != 0 )
              goto LABEL_34;
            v46 = *(unsigned __int16 *)v29;
            v29 += 2;
            LOWORD(v44) = bswap32(v46 << 16);
          }
          v42 += v44;
LABEL_34:
          *((_WORD *)v33 - 5) = v42;
          ++v43;
          v33 += 14;
          if ( v25 == v43 )
          {
            v47 = 0;
            v128 = 0;
            v120 = 0;
            v119 = 0;
            v124 = 0;
            v123 = 0;
            v126 = 0;
            v125 = 0;
            v48 = 0;
            v49 = 0;
            v50 = 0;
            v51 = v31;
            v122 = 0;
            v127 = v25;
            do
            {
              v59 = (__int16 *)(v51 + 14 * ((_DWORD)src + v48));
              v60 = *v59;
              v61 = v59[1];
              v62 = *((unsigned __int8 *)v59 + 12);
              if ( v49 == v48 )
              {
                if ( v48 )
                {
                  if ( v122 )
                  {
                    if ( v50 )
                    {
                      v63 = v119;
                      v64 = 7 * v47++;
                      *(_WORD *)(v51 + 2 * v64) = (unsigned int)(v125 + v119) >> 1;
                      v65 = v51 + 2 * v64;
                      *(_WORD *)(v65 + 4) = v125;
                      v66 = v120;
                      *(_WORD *)(v65 + 6) = v126;
                      *(_WORD *)(v65 + 2) = (unsigned int)(v126 + v120) >> 1;
                      *(_BYTE *)(v65 + 12) = 3;
                    }
                    else
                    {
                      v66 = v120;
                      v63 = v119;
                    }
                    *(_WORD *)(v51 + 14 * v47) = v123;
                    v72 = v51 + 14 * v47;
                    *(_WORD *)(v72 + 4) = v63;
                    *(_WORD *)(v72 + 2) = v124;
                    *(_BYTE *)(v72 + 12) = 3;
                    v71 = v66;
                  }
                  else
                  {
                    v69 = (_WORD *)(v51 + 14 * v47);
                    v70 = v69 + 6;
                    *v69 = v123;
                    if ( v50 )
                    {
                      *v70 = 3;
                      v69[2] = v125;
                      v69[1] = v124;
                      v71 = v126;
                    }
                    else
                    {
                      *v70 = 2;
                      v71 = 0;
                      *(_DWORD *)(v69 + 1) = v124;
                    }
                  }
                  v73 = 7 * v47++;
                  *(_WORD *)(v51 + 2 * v73 + 6) = v71;
                }
                v122 = !(v62 & 1);
                if ( (v62 & 1) != 0 )
                {
                  LOWORD(v75) = v60;
                  LOWORD(v76) = v61;
                  v58 = v48;
                }
                else
                {
                  v74 = v51 + 14 * ((_DWORD)src + v48 + 1);
                  if ( *(unsigned __int8 *)(v74 + 12) << 31 )
                  {
                    LOWORD(v76) = *(_WORD *)(v74 + 2);
                    v58 = v48 + 1;
                    LOWORD(v75) = *(_WORD *)(v51 + 14 * ((_DWORD)src + v48 + 1));
                    v119 = v60;
                    v120 = v61;
                  }
                  else
                  {
                    v119 = v60;
                    v120 = v61;
                    v58 = v48;
                    v75 = (*(__int16 *)(v51 + 14 * ((_DWORD)src + v48 + 1)) + v60) >> 1;
                    v76 = (*(__int16 *)(v74 + 2) + v61) >> 1;
                  }
                }
                v123 = v75;
                v50 = 0;
                v57 = 1;
                *(_WORD *)(v51 + 14 * v47) = v75;
                v77 = v51 + 14 * v47++;
                *(_DWORD *)(v77 + 4) = 0;
                *(_WORD *)(v77 + 2) = v76;
                *(_BYTE *)(v77 + 12) = 1;
                v124 = v76;
                v78 = *(unsigned __int16 *)(v121 + 2 * (_DWORD)v128);
                v128 = (char *)v128 + 1;
                v49 = bswap32(v78 << 16) + 1;
              }
              else
              {
                if ( v62 << 31 )
                {
                  v52 = v50;
                  *(_WORD *)(v51 + 14 * v47) = v60;
                  v53 = v51 + 14 * v47++;
                  if ( v50 )
                    v52 = v126;
                  *(_WORD *)(v53 + 6) = v52;
                  v54 = v50;
                  if ( v50 )
                    v54 = v125;
                  *(_WORD *)(v53 + 4) = v54;
                  v55 = v50 == 0;
                  v56 = 3;
                  v50 = 0;
                  v57 = 1;
                  *(_WORD *)(v53 + 2) = v61;
                  if ( v55 )
                    v56 = 2;
                  *(_BYTE *)(v53 + 12) = v56;
                }
                else
                {
                  if ( v50 )
                  {
                    v67 = 7 * v47++;
                    *(_WORD *)(v51 + 2 * v67) = (unsigned int)(v125 + v60) >> 1;
                    v68 = v51 + 2 * v67;
                    *(_WORD *)(v68 + 6) = v126;
                    *(_WORD *)(v68 + 4) = v125;
                    *(_WORD *)(v68 + 2) = (unsigned int)(v126 + v61) >> 1;
                    *(_BYTE *)(v68 + 12) = 3;
                  }
                  v50 = 1;
                  v57 = 0;
                  v125 = v60;
                  v126 = v61;
                }
                v58 = v48;
              }
              v48 = v58 + 1;
            }
            while ( v58 < v127 );
            if ( v122 )
            {
              if ( v57 )
              {
                v79 = v51;
                v81 = v119;
                v80 = v120;
              }
              else
              {
                v81 = v119;
                v115 = 7 * v47;
                v79 = v51;
                ++v47;
                *(_WORD *)(v51 + 2 * v115) = (unsigned int)(v119 + v125) >> 1;
                v116 = v51 + 2 * v115;
                v80 = v120;
                *(_WORD *)(v116 + 6) = v126;
                *(_WORD *)(v116 + 4) = v125;
                *(_WORD *)(v116 + 2) = (unsigned int)(v126 + v120) >> 1;
                *(_BYTE *)(v116 + 12) = 3;
              }
              *(_WORD *)(v79 + 14 * v47) = v123;
              v117 = v79 + 14 * v47;
              *(_WORD *)(v117 + 4) = v81;
              *(_WORD *)(v117 + 2) = v124;
              *(_BYTE *)(v117 + 12) = 3;
            }
            else
            {
              v113 = v51 + 14 * v47;
              v114 = (_BYTE *)(v113 + 12);
              *(_WORD *)v113 = v123;
              if ( v57 )
              {
                v79 = v51;
                v80 = 0;
                *v114 = 2;
                *(_DWORD *)(v113 + 2) = v124;
              }
              else
              {
                v79 = v51;
                *v114 = 3;
                *(_WORD *)(v113 + 4) = v125;
                *(_WORD *)(v113 + 2) = v124;
                v80 = v126;
              }
            }
            v7 = v47 + 1;
            *(_WORD *)(v79 + 14 * v47 + 6) = v80;
            goto LABEL_108;
          }
        }
      }
    }
  }
  if ( v21 != 0xFFFF )
  {
    v7 = 0;
    v79 = 0;
    goto LABEL_108;
  }
  v82 = v20 + 10;
  v79 = 0;
  v7 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v134 = 0;
      v83 = *(unsigned __int8 *)(v82 + 1);
      v84 = *(unsigned __int16 *)(v82 + 2);
      srca = (void *)v79;
      if ( (v83 & 2) != 0 )
      {
        LOWORD(v91) = *(unsigned __int8 *)(v82 + 4);
        if ( v83 << 31 )
        {
          v95 = *(unsigned __int8 *)(v82 + 5);
          v96 = *(_WORD *)(v82 + 6);
          v82 += 8;
          LOWORD(v91) = v95 | ((_WORD)v91 << 8);
          v92 = (__int16)bswap16(v96);
          v91 = (__int16)v91;
        }
        else
        {
          v92 = *(char *)(v82 + 5);
          v91 = (char)v91;
          v82 += 6;
        }
        v85 = (float)v92;
        v86 = (float)v91;
        if ( (v83 & 8) != 0 )
        {
LABEL_85:
          v97 = *(_WORD *)v82;
          v82 += 2;
          v88 = 0.0;
          v89 = 0.0;
          v87 = (float)(__int16)bswap16(v97) * 0.000061035;
          v90 = v87;
          goto LABEL_87;
        }
      }
      else
      {
        v82 += 4;
        v85 = 0.0;
        v86 = 0.0;
        if ( (v83 & 8) != 0 )
          goto LABEL_85;
      }
      if ( (v83 & 0x40) != 0 )
      {
        v93 = *(_WORD *)(v82 + 2);
        v88 = 0.0;
        v94 = *(_WORD *)v82;
        v82 += 4;
        v89 = 0.0;
        v87 = (float)(__int16)bswap16(v93) * 0.000061035;
        v90 = (float)(__int16)bswap16(v94) * 0.000061035;
      }
      else if ( (v83 & 0x80) != 0 )
      {
        v98 = (__int16)bswap16(*(_WORD *)(v82 + 4));
        v99 = (__int16)bswap16(*(_WORD *)v82);
        v100 = (__int16)bswap16(*(_WORD *)(v82 + 6));
        v101 = (__int16)bswap16(*(_WORD *)(v82 + 2));
        v82 += 8;
        v87 = (float)v100 * 0.000061035;
        v88 = (float)v98 * 0.000061035;
        v89 = (float)v101 * 0.000061035;
        v90 = (float)v99 * 0.000061035;
      }
      else
      {
        v87 = 1.0;
        v88 = 0.0;
        v89 = 0.0;
        v90 = 1.0;
      }
LABEL_87:
      v102 = sub_A5304(a1, bswap32(v84 << 16), &v134);
      if ( v102 >= 1 )
        break;
      if ( (v83 & 0x20) == 0 )
        goto LABEL_108;
    }
    v103 = v102;
    v129 = (void *)v134;
    v104 = v102;
    v105 = (__int16 *)(v134 + 4);
    v106 = sqrtf((float)(v87 * v87) + (float)(v88 * v88));
    v107 = sqrtf((float)(v89 * v89) + (float)(v90 * v90));
    do
    {
      --v104;
      v108 = (float)v105[1];
      v109 = (float)*(v105 - 1);
      v110 = (float)*v105;
      v111 = (float)*(v105 - 2);
      *v105 = (int)(float)(v107 * (float)(v86 + (float)((float)(v88 * v108) + (float)(v90 * v110))));
      v105 += 7;
      *(v105 - 6) = (int)(float)(v106 * (float)(v85 + (float)((float)(v87 * v108) + (float)(v89 * v110))));
      *(v105 - 8) = (int)(float)(v106 * (float)(v85 + (float)((float)(v87 * v109) + (float)(v89 * v111))));
      *(v105 - 9) = (int)(float)(v107 * (float)(v86 + (float)((float)(v88 * v109) + (float)(v90 * v111))));
    }
    while ( v104 );
    v112 = (void *)sub_885E4(14 * (v103 + v7));
    if ( !v112 )
      break;
    v79 = (int)v112;
    if ( v7 >= 1 )
      j_memcpy(v112, srca, 14 * v7);
    j_memcpy((void *)(v79 + 14 * v7), v129, 14 * v103);
    if ( srca )
      sub_88614((int)srca);
    sub_88614((int)v129);
    v7 += v103;
    if ( (v83 & 0x20) == 0 )
    {
LABEL_108:
      *v118 = v79;
      return v7;
    }
  }
  if ( v79 )
    sub_88614(v79);
  sub_88614((int)v129);
  return 0;
}


// ======================================================================
// ADDR: 0xa5a74
// SYMBOL: sub_A5A74
int __fastcall sub_A5A74(int result, int *a2, int a3, int a4)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s18
  int v12; // r6
  float v14; // s24
  int v15; // r5
  float v16; // s22
  float v17; // s4
  float v18; // s2
  float v19; // s26
  float v20; // s28
  int v21; // r0
  float *v22; // r1

  if ( a3 <= 16 )
  {
    v11 = v8;
    v12 = a3 + 1;
    v14 = v6;
    v15 = result;
    v16 = v7;
    v17 = (float)(v7 + v7) + v5;
    v18 = (float)(v6 + v6) + v4;
    while ( 1 )
    {
      v19 = (float)(v17 + v9) * 0.25;
      v20 = (float)(v18 + v11) * 0.25;
      if ( (float)((float)((float)((float)((float)(v5 + v9) * 0.5) - v19)
                         * (float)((float)((float)(v5 + v9) * 0.5) - v19))
                 + (float)((float)((float)((float)(v4 + v11) * 0.5) - v20)
                         * (float)((float)((float)(v4 + v11) * 0.5) - v20))) <= v10 )
        break;
      result = sub_A5A74(v15, a2, v12++, a4);
      v5 = (float)(v17 + v9) * 0.25;
      v16 = (float)(v16 + v9) * 0.5;
      v14 = (float)(v14 + v11) * 0.5;
      v17 = (float)(v16 + v16) + v19;
      v18 = (float)(v14 + v14) + v20;
      v4 = v20;
      if ( v12 == 18 )
        return result;
    }
    v21 = *a2;
    if ( v15 )
    {
      v22 = (float *)(v15 + 8 * v21);
      *v22 = v11;
      v22[1] = v9;
    }
    result = v21 + 1;
    *a2 = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xa5b66
// SYMBOL: sub_A5B66
int __fastcall sub_A5B66(int result, int *a2, int a3, int a4)
{
  float v4; // s0
  float v5; // s1
  float v6; // s2
  float v7; // s3
  float v8; // s4
  float v9; // s5
  float v10; // s6
  float v11; // s7
  float v12; // s8
  float v13; // s28
  int v14; // r6
  float v16; // s24
  int v17; // r5
  float v18; // s20
  float v19; // s18
  float v20; // s22
  float v21; // s26
  float v22; // s2
  float v23; // s4
  float v24; // s6
  float v25; // s8
  float v26; // s10
  float v27; // s4
  float v28; // s3
  float v29; // s2
  float v30; // s17
  int v31; // r0
  float *v32; // r1

  if ( a3 <= 16 )
  {
    v13 = v6;
    v14 = a3 + 1;
    v16 = v8;
    v17 = result;
    v18 = v12;
    v19 = v10;
    v20 = v9;
    v21 = v7;
    v22 = sqrtf((float)((float)(v11 - v5) * (float)(v11 - v5)) + (float)((float)(v10 - v4) * (float)(v10 - v4)));
    while ( 1 )
    {
      v23 = sqrtf((float)((float)(v20 - v21) * (float)(v20 - v21)) + (float)((float)(v16 - v13) * (float)(v16 - v13)));
      v24 = sqrtf((float)((float)(v21 - v5) * (float)(v21 - v5)) + (float)((float)(v13 - v4) * (float)(v13 - v4)));
      v25 = sqrtf((float)((float)(v11 - v20) * (float)(v11 - v20)) + (float)((float)(v19 - v16) * (float)(v19 - v16)));
      if ( (float)((float)((float)(v25 + (float)(v24 + v23)) * (float)(v25 + (float)(v24 + v23))) - (float)(v22 * v22)) <= v18 )
        break;
      v26 = v13 + v16;
      v27 = (float)(v21 + v20) * 0.5;
      v20 = (float)(v20 + v11) * 0.5;
      v28 = (float)(v5 + v21) * 0.5;
      v16 = (float)(v16 + v19) * 0.5;
      v29 = (float)(v4 + v13) * 0.5;
      v21 = (float)(v27 + v20) * 0.5;
      v13 = (float)((float)(v26 * 0.5) + v16) * 0.5;
      v30 = (float)((float)((float)(v29 + (float)(v26 * 0.5)) * 0.5) + v13) * 0.5;
      result = sub_A5B66(v17, a2, v14++, a4);
      v5 = (float)((float)((float)(v28 + v27) * 0.5) + v21) * 0.5;
      v22 = sqrtf((float)((float)(v11 - v5) * (float)(v11 - v5)) + (float)((float)(v19 - v30) * (float)(v19 - v30)));
      v4 = v30;
      if ( v14 == 18 )
        return result;
    }
    v31 = *a2;
    if ( v17 )
    {
      v32 = (float *)(v17 + 8 * v31);
      *v32 = v19;
      v32[1] = v11;
    }
    result = v31 + 1;
    *a2 = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0xa5cc4
// SYMBOL: sub_A5CC4
int __fastcall sub_A5CC4(float *a1, int a2)
{
  int v3; // r6
  float v4; // s0
  int v5; // r5
  int v6; // r0
  float v7; // s4
  float v8; // s2
  int v9; // r2
  float *v10; // r2
  __int64 v11; // d17
  int v12; // r12
  __int64 v13; // d17
  int v14; // r3
  int v15; // r2
  float v16; // s0
  int v17; // r1
  int v18; // r4
  float *v19; // r3
  float v20; // s2
  int v21; // r6
  __int64 v22; // d17
  int v23; // r1
  float *v24; // r4
  int v25; // r1
  int v26; // r5
  int v28; // [sp+4h] [bp-3Ch]
  __int64 v29; // [sp+8h] [bp-38h]
  __int64 v30; // [sp+8h] [bp-38h]
  __int64 v31; // [sp+10h] [bp-30h]
  __int64 v32; // [sp+10h] [bp-30h]
  int v33; // [sp+18h] [bp-28h]
  int v34; // [sp+18h] [bp-28h]
  int v35; // [sp+20h] [bp-20h]

  if ( a2 >= 13 )
  {
    v3 = a2;
    do
    {
      while ( 1 )
      {
        v4 = a1[1];
        v28 = v3;
        v5 = (int)&a1[5 * ((unsigned int)v3 >> 1)];
        v6 = v3 - 1;
        v7 = *(float *)(v5 + 4);
        v8 = a1[5 * v3 - 4];
        if ( v4 >= v7 == v7 < v8 )
        {
          v9 = v3 - 1;
          if ( v4 >= v8 != v7 < v8 )
            v9 = 0;
          v10 = &a1[5 * v9];
          v29 = *(_QWORD *)v10;
          v31 = *((_QWORD *)v10 + 1);
          v33 = *((_DWORD *)v10 + 4);
          v11 = *(_QWORD *)(v5 + 8);
          v12 = *(_DWORD *)(v5 + 16);
          *(_QWORD *)v10 = *(_QWORD *)v5;
          *((_QWORD *)v10 + 1) = v11;
          *((_DWORD *)v10 + 4) = v12;
          *(_DWORD *)(v5 + 16) = v33;
          *(_QWORD *)v5 = v29;
          *(_QWORD *)(v5 + 8) = v31;
        }
        v30 = *(_QWORD *)a1;
        v32 = *((_QWORD *)a1 + 1);
        v34 = *((_DWORD *)a1 + 4);
        v13 = *(_QWORD *)(v5 + 8);
        v14 = *(_DWORD *)(v5 + 16);
        *(_QWORD *)a1 = *(_QWORD *)v5;
        *((_QWORD *)a1 + 1) = v13;
        *((_DWORD *)a1 + 4) = v14;
        v15 = 1;
        while ( 1 )
        {
          *(_QWORD *)v5 = v30;
          *(_QWORD *)(v5 + 8) = v32;
          *(_DWORD *)(v5 + 16) = v34;
          v16 = a1[1];
          v17 = 20 * v15 + 4;
          v18 = 20 * v15 - 20;
          do
          {
            v19 = (float *)((char *)a1 + v17);
            v17 += 20;
            v18 += 20;
            ++v15;
          }
          while ( *v19 < v16 );
          v5 = (int)&a1[5 * v6 + 5];
          do
          {
            v20 = *(float *)(v5 - 16);
            v5 -= 20;
            --v6;
          }
          while ( v16 < v20 );
          v3 = v6 + 1;
          if ( v15 - 1 >= v6 + 1 )
            break;
          v21 = (int)a1 + v18;
          v30 = *(_QWORD *)((char *)a1 + v18);
          v32 = *(_QWORD *)((char *)a1 + v18 + 8);
          v34 = *(_DWORD *)((char *)a1 + v18 + 16);
          v22 = *(_QWORD *)(v5 + 8);
          v23 = *(_DWORD *)(v5 + 16);
          *(_QWORD *)v21 = *(_QWORD *)v5;
          *(_QWORD *)(v21 + 8) = v22;
          *(_DWORD *)(v21 + 16) = v23;
        }
        v24 = (float *)((char *)a1 + v18);
        v25 = v28 - v15 + 1;
        if ( v3 < v25 )
          break;
        sub_A5CC4(v24, v25);
        if ( v3 <= 12 )
          return v35;
      }
      v26 = v28 - v15 + 1;
      sub_A5CC4(a1, v3);
      v3 = v26;
      a1 = v24;
    }
    while ( v26 > 12 );
  }
  return v35;
}


// ======================================================================
// ADDR: 0x108848
// SYMBOL: sub_108848
int __fastcall sub_108848(int a1, int a2)
{
  return (sub_108874(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
}


// ======================================================================
// ADDR: 0x108874
// SYMBOL: sub_108874
unsigned int __fastcall sub_108874(unsigned int result, unsigned int a2)
{
  unsigned int v2; // r12
  unsigned int v3; // r3

  if ( !a2 )
    return nullsub_1(0);
  if ( a2 != 1 )
  {
    if ( result >= a2 )
    {
      v2 = __clz(result);
      v3 = __clz(a2);
      return ((int (*)())((char *)sub_108A30 - 4 * (v3 - v2) + -8 * (v3 - v2)))();
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// ======================================================================
