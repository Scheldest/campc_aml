// ADDR: 0x177b4c
// SYMBOL: sub_177B4C
int __fastcall sub_177B4C(int a1)
{
  int result; // r0
  __int16 v3; // r2
  __int16 v4; // r3

  result = *(_DWORD *)(a1 + 88);
  if ( result <= -1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      v3 = 2;
      v4 = 2;
    }
    else
    {
      v3 = 217;
      v4 = 27;
    }
    result = sub_1757F0((_DWORD *)a1, 0x80000000, v3, v4);
    *(_DWORD *)(a1 + 88) = result;
  }
  return result;
}


// ======================================================================
// ADDR: 0x177b80
// SYMBOL: sub_177B80
int __fastcall sub_177B80(int *a1, int a2)
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
      v6 = (void *)sub_1654B0(4 * v5);
      v7 = (const void *)a1[2];
      v8 = (int)v6;
      if ( v7 )
      {
        j_memcpy(v6, v7, 4 * *a1);
        sub_165578(a1[2]);
      }
      a1[1] = v5;
      a1[2] = v8;
    }
  }
  v9 = a1[2];
  *a1 = v4;
  return sub_22178C(v9, 4 * v4);
}


// ======================================================================
// ADDR: 0x177be0
// SYMBOL: sub_177BE0
unsigned int __fastcall sub_177BE0(int a1, int a2)
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
      v21 = (unsigned int)&aSilkLpcInverse[v16 + 24 - v3] & (unsigned int)"LSFCosTab_FIX_Q12";
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
LABEL_10:
    v7 = v10;
    if ( v10 <= v9 )
      return 0;
  }
  v12 = v8 + 12 * v10;
  if ( bswap32(*(_DWORD *)(v12 + 4)) < a2 )
  {
    v9 = v10 + 1;
    v10 = v7;
    goto LABEL_10;
  }
  v24 = a2 - v11;
  result = bswap32(*(_DWORD *)(v12 + 8));
  if ( v5 == 12 )
    result += v24;
  return result;
}


// ======================================================================
// ADDR: 0x177d7c
// SYMBOL: sub_177D7C
float __fastcall sub_177D7C(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, float *a6)
{
  float v6; // s0
  float v7; // s1
  float result; // r0
  int v12; // r4
  int v13; // r6
  int v14; // r5
  int v15; // r1
  unsigned __int16 *v16; // r0
  unsigned __int16 v17; // r2
  unsigned __int16 v18; // r3

  if ( *(_DWORD *)(a1 + 60) )
  {
    result = COERCE_FLOAT(sub_1792C4(a1));
    v13 = 0;
    v12 = 0;
    v14 = 0;
    v15 = 0;
    if ( result == 0.0 )
    {
      v14 = 0;
      v15 = 0;
      v12 = 0;
      v13 = 0;
    }
LABEL_7:
    if ( a3 )
    {
      result = floorf((float)((float)v15 * v6) + 0.0);
      *a3 = (int)result;
    }
    if ( a4 )
    {
      result = floorf((float)((float)-v14 * v7) + 0.0);
      *a4 = (int)result;
    }
    if ( a5 )
    {
      result = ceilf((float)((float)v12 * v6) + 0.0);
      *a5 = (int)result;
    }
    if ( a6 )
    {
      LODWORD(result) = (int)ceilf((float)((float)-v13 * v7) + 0.0);
LABEL_15:
      *a6 = result;
      return result;
    }
    return result;
  }
  result = COERCE_FLOAT(sub_17926E(a1));
  if ( result >= 0.0 )
  {
    v16 = (unsigned __int16 *)(LODWORD(result) + *(_DWORD *)(a1 + 4));
    v17 = v16[3];
    v18 = v16[2];
    v14 = (__int16)bswap16(v16[4]);
    LODWORD(result) = v16[1];
    v12 = (__int16)bswap16(v17);
    v13 = (__int16)bswap16(v18);
    v15 = (__int16)bswap16(LOWORD(result));
    goto LABEL_7;
  }
  if ( a3 )
  {
    result = 0.0;
    *a3 = 0;
  }
  if ( a4 )
  {
    result = 0.0;
    *a4 = 0;
  }
  if ( a5 )
  {
    result = 0.0;
    *a5 = 0;
  }
  if ( a6 )
  {
    result = 0.0;
    goto LABEL_15;
  }
  return result;
}


// ======================================================================
// ADDR: 0x177ee8
// SYMBOL: sub_177EE8
int __fastcall sub_177EE8(_DWORD *a1, int a2)
{
  signed int v2; // r5
  _DWORD *v3; // r6
  int v6; // r9
  int v7; // r0
  _DWORD *v8; // r1
  int *v9; // r2
  int v10; // t1
  int result; // r0
  unsigned __int16 *v12; // r0
  int v13; // r1
  int v14; // r6
  int v15; // r2
  int v16; // r12
  unsigned __int16 v17; // r3
  int v18; // r2
  char *v19; // [sp+Ch] [bp-1Ch]

  v2 = a1[16];
  v3 = 0;
  v19 = 0;
  if ( v2 >= 1 )
  {
    v6 = a1[16];
    if ( (unsigned int)v2 <= 8 )
      v6 = 8;
    v3 = (_DWORD *)sub_1654B0(16 * v6);
    v19 = (char *)v3;
  }
  sub_22178C((int)v3, 16 * v2);
  v7 = a1[16];
  if ( v7 >= 1 )
  {
    v8 = v3 + 1;
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
  sub_177FA4(a2, v3, v2);
  result = (int)v19;
  if ( v2 >= 1 )
  {
    v12 = (unsigned __int16 *)(v19 + 6);
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
      --v2;
    }
    while ( v2 );
    result = (int)v19;
  }
  if ( result )
    return sub_165578(result);
  return result;
}


// ======================================================================
// ADDR: 0x177fa4
// SYMBOL: sub_177FA4
void __fastcall sub_177FA4(_DWORD *a1, char *base, signed int nmemb)
{
  signed int v3; // r4
  unsigned __int16 *v4; // r8
  _DWORD *v6; // r0
  int i; // r1
  int v8; // r1
  unsigned __int16 *v9; // r2
  int v10; // r9
  int v11; // r6
  int v12; // r4
  unsigned __int16 *v13; // r5
  int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r12
  int v19; // r1
  int v20; // r8
  int v21; // r6
  unsigned __int16 *v22; // r4
  int v23; // r0
  int v24; // r1
  unsigned __int16 *v25; // r1
  int v26; // r0
  unsigned __int16 *v27; // r4
  unsigned __int16 *v28; // r11
  unsigned __int16 *v29; // r10
  int v30; // r9
  unsigned __int16 *v31; // r1
  int v32; // r8
  unsigned __int16 *v33; // r0
  int v34; // r0
  unsigned __int16 *v35; // r5
  int v36; // r0
  unsigned __int16 *v37; // r2
  int v38; // r3
  _WORD *v39; // r6
  _DWORD *v40; // r3
  unsigned __int16 *v41; // r5
  int v42; // r1
  _WORD *v43; // r2
  int v44; // r3
  unsigned __int16 *v45; // r0
  _BOOL4 v46; // r1
  unsigned __int16 *v47; // [sp+0h] [bp-50h]
  signed int v48; // [sp+4h] [bp-4Ch]
  int v49; // [sp+8h] [bp-48h]
  unsigned __int16 *v50; // [sp+Ch] [bp-44h]
  unsigned __int16 *v51; // [sp+10h] [bp-40h]
  int v52; // [sp+14h] [bp-3Ch]
  int v53; // [sp+18h] [bp-38h]
  _DWORD *v54; // [sp+1Ch] [bp-34h]
  int v55; // [sp+20h] [bp-30h]
  int v56; // [sp+20h] [bp-30h]
  unsigned __int16 *v57; // [sp+24h] [bp-2Ch]
  int v58; // [sp+28h] [bp-28h]
  int v59; // [sp+2Ch] [bp-24h] BYREF
  int v60[8]; // [sp+30h] [bp-20h] BYREF

  v3 = nmemb;
  v4 = (unsigned __int16 *)base;
  if ( nmemb < 1 )
  {
    qsort(base, nmemb, 0x10u, (__compar_fn_t)sub_179D84);
LABEL_67:
    sub_2243AC(v4, v3, 16, sub_179DAC);
    return;
  }
  v6 = base + 12;
  for ( i = 0; i != nmemb; ++i )
  {
    *v6 = i;
    v6 += 4;
  }
  qsort(v4, nmemb, 0x10u, (__compar_fn_t)sub_179D84);
  if ( v3 < 1 )
    goto LABEL_67;
  v8 = 0;
  v50 = (unsigned __int16 *)(a1 + 6);
  v47 = v4;
  v48 = v3;
  v54 = a1;
  do
  {
    v9 = &v4[8 * v8];
    if ( !v9[2] || !v9[3] )
    {
      *((_DWORD *)v9 + 2) = 0;
      goto LABEL_60;
    }
    v51 = &v4[8 * v8];
    v52 = v8;
    v10 = v9[3];
    v49 = v9[2];
    v11 = *a1;
    v12 = v49 + a1[2] - 1;
    v13 = (unsigned __int16 *)a1[6];
    sub_2211C4(v12);
    v15 = v14;
    v16 = *v13;
    v17 = v12 - v15;
    v58 = v12 - v15;
    if ( v12 - v15 + v16 > v11 )
    {
      v57 = 0;
      v18 = a1[4];
      v19 = 0x40000000;
      v20 = 0x40000000;
      v53 = 0;
      v21 = v10;
      goto LABEL_29;
    }
    v57 = 0;
    v55 = 0x40000000;
    v20 = 0x40000000;
    v22 = v50;
    do
    {
      v23 = sub_179DC0(v13, v16, v17, v60);
      v18 = a1[4];
      if ( !v18 )
      {
        v25 = v57;
        if ( v23 < v20 )
          v25 = v22;
        v57 = v25;
        if ( v23 < v20 )
          v20 = v23;
LABEL_20:
        v17 = v58;
        goto LABEL_24;
      }
      if ( v23 + v10 > a1[1] )
        goto LABEL_20;
      if ( v23 < v20 )
      {
        v24 = v60[0];
        v17 = v58;
LABEL_23:
        v20 = v23;
        v55 = v24;
        v57 = v22;
        goto LABEL_24;
      }
      if ( v23 != v20 )
        goto LABEL_20;
      v24 = v60[0];
      v17 = v58;
      if ( v60[0] < v55 )
        goto LABEL_23;
LABEL_24:
      v22 = v13 + 2;
      v13 = (unsigned __int16 *)*((_DWORD *)v13 + 1);
      v16 = *v13;
    }
    while ( v17 + v16 <= *a1 );
    v21 = v10;
    if ( v57 )
    {
      v26 = **(unsigned __int16 **)v57;
    }
    else
    {
      v57 = 0;
      v26 = 0;
    }
    v53 = v26;
    v19 = v55;
LABEL_29:
    v56 = v20;
    if ( v18 == 1 )
    {
      v27 = *(unsigned __int16 **)v50;
      v28 = *(unsigned __int16 **)v50;
      if ( v17 > **(unsigned __int16 **)v50 )
      {
        v28 = *(unsigned __int16 **)v50;
        do
          v28 = (unsigned __int16 *)*((_DWORD *)v28 + 1);
        while ( v17 > *v28 );
      }
      v29 = v50;
      do
      {
        v30 = v19;
        v31 = v27;
        v32 = *v28 - v17;
        v33 = v29;
        do
        {
          v29 = v33;
          v27 = v31;
          v33 = v31 + 2;
          v31 = (unsigned __int16 *)*((_DWORD *)v31 + 1);
        }
        while ( v32 >= *v31 );
        v34 = sub_179DC0(v27, *v28 - v17, v17, &v59);
        if ( v34 + v21 >= v54[1] || v34 > v56 )
        {
          v19 = v30;
          v17 = v58;
        }
        else
        {
          v17 = v58;
          v19 = v59;
          if ( v34 >= v56 && v59 >= v30 )
          {
            if ( v59 != v30 )
            {
              v19 = v30;
              goto LABEL_42;
            }
            v19 = v30;
            if ( v32 >= v53 )
              goto LABEL_42;
          }
          v56 = v34;
          v57 = v29;
          v53 = v32;
        }
LABEL_42:
        v28 = (unsigned __int16 *)*((_DWORD *)v28 + 1);
      }
      while ( v28 );
    }
    v35 = v57;
    a1 = v54;
    if ( v57 && v56 + v21 <= v54[1] && (v36 = v54[7]) != 0 )
    {
      v54[7] = *(_DWORD *)(v36 + 4);
      v37 = *(unsigned __int16 **)v57;
      *(_WORD *)v36 = v53;
      v38 = *v37;
      *(_WORD *)(v36 + 2) = v56 + v21;
      v4 = v47;
      v3 = v48;
      if ( v53 <= v38 )
      {
        v39 = v37;
      }
      else
      {
        v39 = (_WORD *)*((_DWORD *)v37 + 1);
        v35 = v37 + 2;
      }
      *(_DWORD *)v35 = v36;
      v40 = v39 + 2;
      v41 = (unsigned __int16 *)*((_DWORD *)v39 + 1);
      v42 = v49 + v53;
      if ( v41 )
      {
        while ( 1 )
        {
          v43 = v41;
          if ( v42 < *v41 )
            break;
          *v40 = v54[7];
          v40 = v41 + 2;
          v41 = (unsigned __int16 *)*((_DWORD *)v41 + 1);
          v54[7] = v39;
          v39 = v43;
          if ( !v41 )
            goto LABEL_63;
        }
      }
      v43 = v39;
LABEL_63:
      v44 = (unsigned __int16)*v43;
      *(_DWORD *)(v36 + 4) = v43;
      if ( v42 > v44 )
        *v43 = v42;
      v51[5] = v56;
      v51[4] = v53;
    }
    else
    {
      v4 = v47;
      v3 = v48;
      v51[4] = -1;
      v51[5] = -1;
    }
    v8 = v52;
LABEL_60:
    ++v8;
  }
  while ( v8 != v3 );
  qsort(v4, v3, 0x10u, (__compar_fn_t)sub_179DAC);
  v45 = v4 + 4;
  do
  {
    v46 = *v45 == 0xFFFF && v45[1] == 0xFFFF;
    *((_DWORD *)v45 + 1) = !v46;
    --v3;
    v45 += 8;
  }
  while ( v3 );
}


// ======================================================================
// ADDR: 0x178290
// SYMBOL: sub_178290
int __fastcall sub_178290(
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
  int v24; // r3
  float v25; // s0
  int v26; // r0
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
      v19 = (void *)sub_1654B0(40 * v15);
      v20 = *(const void **)(a1 + 40);
      v21 = v19;
      if ( v20 )
      {
        j_memcpy(v19, v20, 40 * *(_DWORD *)(a1 + 32));
        sub_165578(*(_DWORD *)(a1 + 40));
      }
      *(_DWORD *)(a1 + 36) = v15;
      *(_DWORD *)(a1 + 40) = v21;
    }
  }
  v22 = *(_DWORD *)(a1 + 60);
  v23 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = v13 + 1;
  v24 = *(unsigned __int8 *)(v22 + 28);
  v25 = *(float *)(v22 + 32) + a11;
  *(_WORD *)(v23 + 40 * v13) = a2;
  v26 = v23 + 40 * v13;
  *(float *)(v26 + 36) = a10;
  *(_DWORD *)(v26 + 8) = a3;
  *(_DWORD *)(v26 + 12) = a4;
  *(float *)(v26 + 16) = a5;
  *(float *)(v26 + 4) = v25;
  *(float *)(v26 + 20) = a6;
  *(float *)(v26 + 24) = a7;
  *(float *)(v26 + 28) = a8;
  *(float *)(v26 + 32) = a9;
  if ( v24 )
    *(float *)(v26 + 4) = (float)(int)(float)(v25 + 0.5);
  result = *(_DWORD *)(a1 + 80)
         + (int)(float)((float)((float)(a10 - a8) * (float)*(int *)(*(_DWORD *)(a1 + 56) + 32)) + 1.99)
         * (int)(float)((float)((float)(a9 - a7) * (float)*(int *)(*(_DWORD *)(a1 + 56) + 28)) + 1.99);
  *(_BYTE *)(a1 + 84) = 1;
  *(_DWORD *)(a1 + 80) = result;
  return result;
}


// ======================================================================
// ADDR: 0x1783c0
// SYMBOL: sub_1783C0
unsigned int __fastcall sub_1783C0(int a1)
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
          result = sub_178290(
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
        result = sub_178630();
        v24 = *(_DWORD *)(a1 + 52);
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1785e0
// SYMBOL: sub_1785E0
int __fastcall sub_1785E0(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int result; // r0

  v2 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    sub_165578(v2);
    *(_DWORD *)(a1 + 40) = 0;
  }
  v3 = *(_DWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = 0;
    sub_165578(v3);
    *(_DWORD *)(a1 + 8) = 0;
  }
  v4 = *(_DWORD *)(a1 + 28);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    sub_165578(v4);
    *(_DWORD *)(a1 + 28) = 0;
  }
  *(_BYTE *)(a1 + 84) = 1;
  result = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x178e38
// SYMBOL: sub_178E38
unsigned int __fastcall sub_178E38(int a1, int a2, unsigned __int8 *a3)
{
  int v3; // r12
  unsigned int v4; // r0
  int v5; // lr
  int v6; // r0
  int v7; // r1

  v3 = a1 + a2;
  v4 = bswap32(*(unsigned __int16 *)(a1 + a2 + 4) << 16);
  if ( !v4 )
    return 0;
  v5 = 16 * v4;
  v6 = 0;
  while ( 1 )
  {
    v7 = v3 + v6;
    if ( *(unsigned __int8 *)(v3 + v6 + 12) == *a3
      && *(unsigned __int8 *)(v7 + 13) == a3[1]
      && *(unsigned __int8 *)(v7 + 14) == a3[2]
      && *(unsigned __int8 *)(v7 + 15) == a3[3] )
    {
      break;
    }
    v6 += 16;
    if ( v5 == v6 )
      return 0;
  }
  return bswap32(*(_DWORD *)(v7 + 20));
}


// ======================================================================
// ADDR: 0x178e84
// SYMBOL: sub_178E84
_DWORD *__fastcall sub_178E84(_DWORD *result, _DWORD *a2)
{
  __int64 v2; // kr00_8
  int v3; // r3
  int v4; // r4
  int v5; // r2
  int v6; // r5
  int v7; // r5
  int v8; // r4
  int v9; // r4
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r5
  int v14; // r5
  int v15; // r3
  int v16; // r3
  bool v17; // cc
  int v18; // r1

  v2 = *(_QWORD *)(a2 + 1);
  v3 = 0;
  v4 = 2;
  v5 = a2[1];
  do
  {
    if ( v5 >= SHIDWORD(v2) )
    {
      v7 = 0;
    }
    else
    {
      v6 = *a2;
      a2[1] = v5 + 1;
      v7 = *(unsigned __int8 *)(v6 + v5++);
    }
    --v4;
    v3 = (v3 << 8) | v7;
  }
  while ( v4 );
  if ( v3 )
  {
    if ( v5 >= SHIDWORD(v2) )
    {
      v9 = 0;
    }
    else
    {
      v8 = *a2;
      a2[1] = v5 + 1;
      v9 = *(unsigned __int8 *)(v8 + v5++);
    }
    v10 = v5 + v9 * v3;
    v11 = v10;
    if ( SHIDWORD(v2) < v10 )
      v11 = HIDWORD(v2);
    if ( v10 < 0 )
      v11 = HIDWORD(v2);
    if ( v9 )
    {
      v12 = 0;
      do
      {
        if ( v11 >= SHIDWORD(v2) )
        {
          v14 = 0;
        }
        else
        {
          v13 = *a2;
          a2[1] = v11 + 1;
          v14 = *(unsigned __int8 *)(v13 + v11++);
        }
        --v9;
        v12 = (v12 << 8) | v14;
      }
      while ( v9 );
      v15 = v12 - 1;
    }
    else
    {
      v15 = -1;
    }
    v16 = v15 + v11;
    v5 = v16;
    if ( SHIDWORD(v2) < v16 )
      v5 = HIDWORD(v2);
    if ( v16 < 0 )
      v5 = HIDWORD(v2);
    a2[1] = v5;
  }
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  if ( (int)((v5 - v2) | v2) >= 0 )
  {
    v17 = SHIDWORD(v2) < (int)v2;
    if ( SHIDWORD(v2) >= (int)v2 )
      v17 = SHIDWORD(v2) < v5;
    if ( !v17 )
    {
      v18 = *a2;
      result[2] = v5 - v2;
      *result = v18 + v2;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x178f3a
// SYMBOL: sub_178F3A
_DWORD *__fastcall sub_178F3A(_DWORD *result, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v6; // r8
  int v7; // r6
  int v8; // r2
  int v9; // r12
  int v10; // r2
  int v11; // r9
  int v12; // r5
  int v13; // r6
  int v14; // r2
  int v15; // r6
  int v16; // r2
  int v17; // r4
  int v18; // r6
  int v19; // r2
  bool v20; // cc
  int v21; // r3

  v5 = a4 & (a4 >> 31);
  v6 = 0;
  v7 = 2;
  do
  {
    if ( v5 >= a4 )
      v8 = 0;
    else
      v8 = *(unsigned __int8 *)(a2 + v5++);
    v6 = (v6 << 8) | v8;
    --v7;
  }
  while ( v7 );
  if ( v5 >= a4 )
    v9 = 0;
  else
    v9 = *(unsigned __int8 *)(a2 + v5++);
  v10 = v5 + v9 * a5;
  v11 = 0;
  v12 = v10;
  if ( a4 < v10 )
    v12 = a4;
  if ( v10 < 0 )
    v12 = a4;
  if ( v9 )
  {
    v13 = v9;
    do
    {
      if ( v12 >= a4 )
        v14 = 0;
      else
        v14 = *(unsigned __int8 *)(a2 + v12++);
      v11 = (v11 << 8) | v14;
      --v13;
    }
    while ( v13 );
    v15 = 0;
    v16 = v9;
    do
    {
      if ( v12 >= a4 )
        v17 = 0;
      else
        v17 = *(unsigned __int8 *)(a2 + v12++);
      --v16;
      v15 = (v15 << 8) | v17;
    }
    while ( v16 );
  }
  else
  {
    v15 = 0;
  }
  v18 = v15 - v11;
  *result = 0;
  result[1] = 0;
  result[2] = 0;
  v19 = v11 + v9 * (v6 + 1) + 2;
  if ( (v18 | v19) >= 0 )
  {
    v20 = a4 < v19;
    v21 = a4 - v19;
    if ( !v20 && v21 >= v18 )
    {
      result[2] = v18;
      *result = a2 + v19;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x178ffe
// SYMBOL: sub_178FFE
int __fastcall sub_178FFE(int *a1, int a2, int a3, int a4)
{
  int result; // r0
  int v9; // r3
  int v10; // r1
  int v11; // r11
  int v12; // r2
  int v13; // r4
  unsigned int v14; // r3
  int v15; // r3
  char v16; // r3
  bool v17; // zf
  int v18; // r5
  int v19; // r5
  bool v20; // cc
  int v21; // r1
  bool v22; // cc
  int v23; // r5
  bool v24; // cc
  int v25; // [sp+0h] [bp-28h] BYREF
  int v26; // [sp+4h] [bp-24h]
  int v27; // [sp+8h] [bp-20h]

  result = a1[2];
  v9 = result & (result >> 31);
  v10 = result;
  a1[1] = v9;
  while ( v9 < v10 )
  {
    v11 = v9;
    v12 = v9;
    while ( 1 )
    {
      v13 = *a1;
      v14 = *(unsigned __int8 *)(*a1 + v12);
      if ( v14 < 0x1C )
        break;
      if ( v14 == 30 )
      {
        v15 = v10;
        if ( v12 >= -1 )
          v15 = v12 + 1;
        a1[1] = v15;
        if ( v15 > v10 )
          v10 = v15;
        while ( v10 != v15 )
        {
          v12 = v15 + 1;
          a1[1] = v15 + 1;
          v16 = *(_BYTE *)(v13 + v15);
          if ( (v16 & 0xF) != 0xF )
          {
            v17 = (v16 & 0xF0) == 240;
            v15 = v12;
            if ( !v17 )
              continue;
          }
          goto LABEL_17;
        }
        v12 = v10;
      }
      else
      {
        sub_1791AA(a1);
        result = a1[2];
        v12 = a1[1];
      }
LABEL_17:
      v10 = result;
      if ( v12 >= result )
      {
        v18 = 0;
        v10 = result;
        v9 = v12;
        goto LABEL_24;
      }
    }
    v9 = v12 + 1;
    a1[1] = v12 + 1;
    v18 = *(unsigned __int8 *)(v13 + v12);
    if ( v18 == 12 )
    {
      if ( v9 >= v10 )
      {
        v19 = 0;
      }
      else
      {
        a1[1] = v12 + 2;
        v19 = *(unsigned __int8 *)(v13 + v9);
        v9 = v12 + 2;
      }
      v18 = v19 + 256;
    }
LABEL_24:
    if ( v18 == a2 )
    {
      v26 = 0;
      result = v12 - v11;
      if ( ((v12 - v11) | v11) >= 0 )
      {
        v20 = v10 < v11;
        if ( v10 >= v11 )
          v20 = v10 < v12;
        if ( !v20 )
        {
          v21 = *a1;
          v22 = a3 < 1;
          v27 = v12 - v11;
          v25 = v21 + v11;
          if ( a3 >= 1 )
            v22 = result < 1;
          if ( !v22 )
          {
            v23 = 0;
            do
            {
              result = sub_1791AA(&v25);
              *(_DWORD *)(a4 + 4 * v23++) = result;
              v24 = v23 < a3;
              if ( v23 < a3 )
              {
                result = v26;
                v24 = v26 < v27;
              }
            }
            while ( v24 );
          }
        }
      }
      return result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x1790ec
// SYMBOL: sub_1790EC
_DWORD *__fastcall sub_1790EC(_DWORD *a1, int a2, int a3, int a4, __int64 a5, int a6)
{
  _DWORD *result; // r0
  int v10; // r4
  int v11; // r2
  int v12; // r1
  int v13[3]; // [sp+4h] [bp-4Ch] BYREF
  __int64 v14; // [sp+10h] [bp-40h] BYREF
  int v15; // [sp+1Ch] [bp-34h] BYREF
  __int64 v16; // [sp+20h] [bp-30h] BYREF
  int v17; // [sp+28h] [bp-28h]
  _DWORD v18[9]; // [sp+2Ch] [bp-24h] BYREF

  v16 = a5;
  v18[2] = a4;
  v17 = a6;
  v18[0] = a2;
  v15 = 0;
  v14 = 0LL;
  result = (_DWORD *)sub_178FFE((int *)&v16, 18, 2, (int)&v14);
  v10 = HIDWORD(v14);
  if ( HIDWORD(v14) && (result = (_DWORD *)v14) != 0 )
  {
    if ( (int)(v14 | HIDWORD(v14)) < 0 )
    {
      result = 0;
      v11 = 0;
    }
    else
    {
      v11 = a2 + HIDWORD(v14);
      if ( a4 < SHIDWORD(v14) || a4 - HIDWORD(v14) < (int)v14 )
      {
        v11 = 0;
        result = 0;
      }
    }
    v13[2] = (int)result;
    v13[0] = v11;
    v13[1] = 0;
    sub_178FFE(v13, 19, 1, (int)&v15);
    if ( v15 )
    {
      v12 = v15 + v10;
      if ( a4 < v15 + v10 )
        v12 = a4;
      if ( v15 + v10 < 0 )
        v12 = a4;
      v18[1] = v12;
      return sub_178E84(a1, v18);
    }
    else
    {
      result = 0;
      *a1 = 0;
      a1[1] = 0;
      a1[2] = 0;
    }
  }
  else
  {
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return result;
}


// ======================================================================
// ADDR: 0x179e44
// SYMBOL: sub_179E44
int __fastcall sub_179E44(_DWORD *a1, int a2, int *a3)
{
  int v6; // r0
  int v7; // r11
  int v8; // r5
  int v9; // r0
  int v10; // r1
  int v11; // r0
  unsigned int v12; // r4
  unsigned __int8 *v13; // r6
  int v14; // r8
  int v15; // r9
  unsigned int v16; // r11
  int v17; // r0
  unsigned __int8 v18; // r3
  int v19; // r2
  unsigned __int8 *v20; // r12
  int v21; // r1
  int v22; // r4
  __int16 *v23; // r9
  unsigned __int8 *v24; // r5
  unsigned __int8 *v25; // r6
  __int16 v26; // r2
  int v27; // r0
  unsigned __int8 *v28; // r3
  int v29; // t1
  int v30; // r1
  int v31; // t1
  __int16 v32; // r2
  int v33; // r0
  int v34; // t1
  int v35; // r1
  int v36; // t1
  int v37; // r1
  int v38; // r11
  int v39; // r5
  unsigned int v40; // r12
  int v41; // r3
  int v42; // lr
  int v43; // r2
  __int16 *v44; // r4
  int v45; // r8
  __int16 *v46; // r0
  int v47; // r6
  int v48; // r9
  __int16 *v49; // r0
  int v50; // r0
  int v51; // r2
  __int16 *v52; // r0
  unsigned int v53; // r2
  __int16 v54; // r0
  int v55; // r8
  int v56; // r3
  __int16 v57; // r5
  int v58; // r6
  __int16 *v59; // r0
  __int16 v60; // r6
  __int16 v61; // r6
  bool v62; // zf
  char v63; // r2
  int v64; // r2
  __int16 *v65; // r4
  int v66; // r4
  int v67; // r8
  int v68; // r10
  int v69; // r0
  float v70; // s22
  float v71; // s24
  int v72; // r1
  int v73; // r2
  __int16 v74; // r2
  unsigned __int16 v75; // r3
  float v76; // s26
  float v77; // s28
  float v78; // s17
  float v79; // s30
  unsigned __int16 v80; // t1
  unsigned __int16 v81; // r1
  unsigned __int16 v82; // r2
  int v83; // s2
  int v84; // r1
  int v85; // s0
  int v86; // r2
  int v87; // r0
  int v88; // r6
  int v89; // r1
  __int16 *v90; // r0
  float v91; // s0
  float v92; // s2
  float v93; // s4
  float v94; // s6
  float v95; // s8
  float v96; // s12
  __int16 *v97; // r0
  __int16 *v98; // r5
  int *v100; // [sp+1Ch] [bp-E4h]
  int v101; // [sp+20h] [bp-E0h]
  int v102; // [sp+24h] [bp-DCh]
  int v103; // [sp+28h] [bp-D8h]
  _BOOL4 v104; // [sp+2Ch] [bp-D4h]
  int v105; // [sp+30h] [bp-D0h]
  int v106; // [sp+34h] [bp-CCh]
  int v107; // [sp+38h] [bp-C8h]
  _DWORD *v108; // [sp+38h] [bp-C8h]
  void *src; // [sp+3Ch] [bp-C4h]
  void *srca; // [sp+3Ch] [bp-C4h]
  _BYTE v111[40]; // [sp+40h] [bp-C0h] BYREF
  __int64 v112; // [sp+68h] [bp-98h]
  int v113; // [sp+70h] [bp-90h] BYREF
  __int64 v114; // [sp+74h] [bp-8Ch]
  __int64 v115; // [sp+7Ch] [bp-84h]
  __int64 v116; // [sp+84h] [bp-7Ch]
  int v117; // [sp+8Ch] [bp-74h]
  __int64 v118; // [sp+90h] [bp-70h]
  __int64 v119; // [sp+98h] [bp-68h]

  if ( a1[15] )
  {
    v114 = 0LL;
    v115 = 0LL;
    v116 = 0LL;
    v117 = 0;
    v118 = 0LL;
    v119 = 0LL;
    v113 = 1;
    memset(v111, 0, sizeof(v111));
    v112 = 0LL;
    if ( sub_1792C4(a1, a2, (int)&v113) )
    {
      v6 = sub_1654B0(14 * HIDWORD(v119));
      *a3 = v6;
      LODWORD(v112) = v6;
      if ( sub_1792C4(a1, a2, (int)v111) )
        return HIDWORD(v112);
    }
    v7 = 0;
    *a3 = 0;
    return v7;
  }
  v8 = a1[1];
  v9 = sub_17926E(a1, a2);
  v7 = 0;
  *a3 = 0;
  if ( v9 < 0 )
    return v7;
  v10 = *(unsigned __int16 *)(v8 + v9);
  v11 = v9 + v8;
  v12 = bswap32(v10 << 16);
  if ( (__int16)v12 >= 1 )
  {
    v101 = v11 + 10;
    v13 = (unsigned __int8 *)(v11 + 10 + 2 * v12);
    v14 = *v13;
    v15 = v13[1];
    v16 = bswap32(*((unsigned __int16 *)v13 - 1) << 16);
    v17 = sub_1654B0(14 * (v16 + 2 * v12) + 14);
    if ( !v17 )
      return 0;
    v18 = 0;
    v107 = 2 * v12;
    v19 = -1;
    v20 = &v13[(v15 | (v14 << 8)) + 2];
    v21 = 7 * v12;
    v22 = 0;
    v23 = (__int16 *)v17;
    v24 = (unsigned __int8 *)(v17 + 4 * v21 + 12);
    v25 = v24;
    do
    {
      if ( v22 << 24 )
      {
        --v22;
      }
      else
      {
        v18 = *v20;
        if ( (*v20 & 8) != 0 )
        {
          v22 = v20[1];
          v20 += 2;
        }
        else
        {
          v22 = 0;
          ++v20;
        }
      }
      ++v19;
      *v25 = v18;
      v25 += 14;
    }
    while ( v16 != v19 );
    v26 = 0;
    v27 = -1;
    v28 = v24;
    while ( (*v28 & 2) == 0 )
    {
      if ( (*v28 & 0x10) == 0 )
      {
        v29 = *(unsigned __int16 *)v20;
        v20 += 2;
        LOWORD(v30) = bswap32(v29 << 16);
LABEL_22:
        v26 += v30;
      }
      *((_WORD *)v28 - 6) = v26;
      ++v27;
      v28 += 14;
      if ( v16 == v27 )
      {
        v32 = 0;
        v33 = -1;
        v100 = a3;
        while ( (*v24 & 4) == 0 )
        {
          if ( (*v24 & 0x20) == 0 )
          {
            v34 = *(unsigned __int16 *)v20;
            v20 += 2;
            LOWORD(v35) = bswap32(v34 << 16);
LABEL_30:
            v32 += v35;
          }
          *((_WORD *)v24 - 5) = v32;
          ++v33;
          v24 += 14;
          if ( v16 == v33 )
          {
            src = (void *)v16;
            v102 = 0;
            v103 = 0;
            v106 = 0;
            v105 = 0;
            v37 = 0;
            v38 = 0;
            v39 = 0;
            v40 = 0;
            v41 = 0;
            v42 = 0;
            v43 = 0;
            v104 = 0;
            while ( 1 )
            {
              v44 = v23;
              v45 = v23[7 * v38 + 7 * v107];
              v46 = &v23[7 * v38 + 7 * v107];
              v47 = v46[1];
              v48 = *((unsigned __int8 *)v46 + 12);
              if ( v40 == v38 )
              {
                if ( v38 )
                  v37 = sub_17A43C(v44, v37, v43, v104, v42, v41, v103, v102, v105, v106);
                v104 = !(v48 & 1);
                if ( (v48 & 1) != 0 )
                {
                  v42 = v45;
                  v41 = v47;
                  v50 = v38;
                  v23 = v44;
                }
                else
                {
                  v23 = v44;
                  v49 = &v44[7 * v38 + 7 + 7 * v107];
                  v42 = *v49;
                  if ( *((unsigned __int8 *)v49 + 12) << 31 )
                  {
                    v41 = v49[1];
                    v50 = v38 + 1;
                    v102 = v47;
                    v103 = v45;
                  }
                  else
                  {
                    v102 = v47;
                    v103 = v45;
                    v42 = (v42 + v45) >> 1;
                    v41 = (v49[1] + v47) >> 1;
                    v50 = v38;
                  }
                }
                v64 = 7 * v37++;
                v65 = &v23[v64];
                *v65 = v42;
                v43 = 0;
                *((_BYTE *)v65 + 12) = 1;
                *((_DWORD *)v65 + 1) = 0;
                v65[1] = v41;
                v66 = *(unsigned __int16 *)(v101 + 2 * v39++);
                v40 = bswap32(v66 << 16) + 1;
                goto LABEL_53;
              }
              if ( v48 << 31 )
              {
                v54 = v45;
                v55 = v41;
                v56 = v39;
                v57 = v47;
                v58 = 7 * v37;
                v23 = v44;
                ++v37;
                v44[v58] = v54;
                v59 = &v44[v58];
                v60 = v43;
                if ( v43 )
                  v60 = v106;
                v59[3] = v60;
                v61 = v43;
                if ( v43 )
                  v61 = v105;
                v62 = v43 == 0;
                v63 = 3;
                v59[1] = v57;
                v39 = v56;
                v59[2] = v61;
                if ( v62 )
                  v63 = 2;
                *((_BYTE *)v59 + 12) = v63;
                v41 = v55;
                v43 = 0;
              }
              else
              {
                if ( !v43 )
                {
                  v43 = 1;
                  v105 = v45;
                  v106 = v46[1];
                  v50 = v38;
                  v23 = v44;
                  goto LABEL_53;
                }
                v51 = 7 * v37;
                v23 = v44;
                ++v37;
                v44[v51] = (unsigned int)(v105 + v45) >> 1;
                v52 = &v44[v51];
                v52[3] = v106;
                v53 = v106 + v47;
                v52[2] = v105;
                v105 = v45;
                v106 = v47;
                v52[1] = v53 >> 1;
                *((_BYTE *)v52 + 12) = 3;
                v43 = 1;
              }
              v50 = v38;
LABEL_53:
              v38 = v50 + 1;
              if ( v50 >= (int)src )
              {
                v7 = sub_17A43C(v23, v37, v43, v104, v42, v41, v103, v102, v105, v106);
                goto LABEL_83;
              }
            }
          }
        }
        v36 = *v20++;
        v35 = v36;
        if ( (*v24 & 0x20) == 0 )
          v35 = -v35;
        goto LABEL_30;
      }
    }
    v31 = *v20++;
    v30 = v31;
    if ( (*v28 & 0x10) == 0 )
      v30 = -v30;
    goto LABEL_22;
  }
  v100 = a3;
  if ( v12 != 0xFFFF )
  {
    v7 = 0;
    v23 = 0;
LABEL_83:
    *v100 = (int)v23;
    return v7;
  }
  v67 = v11 + 10;
  v23 = 0;
  v7 = 0;
  v108 = a1;
  while ( 1 )
  {
    v113 = 0;
    v68 = *(unsigned __int8 *)(v67 + 1);
    v69 = *(unsigned __int16 *)(v67 + 2);
    if ( (v68 & 2) != 0 )
    {
      LOWORD(v72) = *(unsigned __int8 *)(v67 + 4);
      if ( v68 << 31 )
      {
        v74 = *(unsigned __int8 *)(v67 + 5);
        v75 = *(_WORD *)(v67 + 6);
        v67 += 8;
        LOWORD(v72) = v74 | ((_WORD)v72 << 8);
        v73 = (__int16)bswap16(v75);
        v72 = (__int16)v72;
      }
      else
      {
        v73 = *(char *)(v67 + 5);
        v72 = (char)v72;
        v67 += 6;
      }
      v70 = (float)v73;
      v71 = (float)v72;
    }
    else
    {
      v67 += 4;
      v70 = 0.0;
      v71 = 0.0;
    }
    if ( (v68 & 8) != 0 )
    {
      v80 = *(_WORD *)v67;
      v67 += 2;
      v77 = 0.0;
      v78 = 0.0;
      v76 = (float)(__int16)bswap16(v80) * 0.000061035;
      v79 = v76;
    }
    else if ( (v68 & 0x40) != 0 )
    {
      v81 = *(_WORD *)(v67 + 2);
      v77 = 0.0;
      v82 = *(_WORD *)v67;
      v67 += 4;
      v78 = 0.0;
      v76 = (float)(__int16)bswap16(v81) * 0.000061035;
      v79 = (float)(__int16)bswap16(v82) * 0.000061035;
    }
    else if ( (v68 & 0x80) != 0 )
    {
      v83 = (__int16)bswap16(*(_WORD *)(v67 + 4));
      v84 = (__int16)bswap16(*(_WORD *)v67);
      v85 = (__int16)bswap16(*(_WORD *)(v67 + 6));
      v86 = (__int16)bswap16(*(_WORD *)(v67 + 2));
      v67 += 8;
      v76 = (float)v85 * 0.000061035;
      v77 = (float)v83 * 0.000061035;
      v78 = (float)v86 * 0.000061035;
      v79 = (float)v84 * 0.000061035;
    }
    else
    {
      v76 = 1.0;
      v77 = 0.0;
      v78 = 0.0;
      v79 = 1.0;
    }
    v87 = sub_179E44(v108, bswap32(v69 << 16), &v113);
    if ( v87 >= 1 )
      break;
LABEL_80:
    if ( (v68 & 0x20) == 0 )
      goto LABEL_83;
  }
  v88 = v87;
  srca = (void *)v113;
  v89 = v87;
  v90 = (__int16 *)(v113 + 4);
  v91 = sqrtf((float)(v76 * v76) + (float)(v77 * v77));
  v92 = sqrtf((float)(v78 * v78) + (float)(v79 * v79));
  do
  {
    --v89;
    v93 = (float)v90[1];
    v94 = (float)*(v90 - 1);
    v95 = (float)*v90;
    v96 = (float)*(v90 - 2);
    *v90 = (int)(float)(v92 * (float)(v71 + (float)((float)(v77 * v93) + (float)(v79 * v95))));
    v90 += 7;
    *(v90 - 6) = (int)(float)(v91 * (float)(v70 + (float)((float)(v76 * v93) + (float)(v78 * v95))));
    *(v90 - 8) = (int)(float)(v91 * (float)(v70 + (float)((float)(v76 * v94) + (float)(v78 * v96))));
    *(v90 - 9) = (int)(float)(v92 * (float)(v71 + (float)((float)(v77 * v94) + (float)(v79 * v96))));
  }
  while ( v89 );
  v97 = (__int16 *)sub_1654B0(14 * (v88 + v7));
  if ( v97 )
  {
    v98 = v97;
    if ( v7 >= 1 )
      j_memcpy(v97, v23, 14 * v7);
    j_memcpy(&v98[7 * v7], srca, 14 * v88);
    if ( v23 )
      sub_165578((int)v23);
    sub_165578((int)srca);
    v23 = v98;
    v7 += v88;
    goto LABEL_80;
  }
  if ( v23 )
    sub_165578((int)v23);
  sub_165578((int)srca);
  return 0;
}


// ======================================================================
// ADDR: 0x17a4ce
// SYMBOL: sub_17A4CE
int __fastcall sub_17A4CE(int result, int *a2, int a3, int a4)
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
      result = sub_17A4CE(v15, a2, v12++, a4);
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
// ADDR: 0x17a5be
// SYMBOL: sub_17A5BE
int __fastcall sub_17A5BE(int result, int *a2, int a3, int a4)
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
      result = sub_17A5BE(v17, a2, v14++, a4);
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
// ADDR: 0x17a718
// SYMBOL: sub_17A718
int __fastcall sub_17A718(int result, int a2)
{
  int v2; // r6
  int v3; // r9
  float v4; // s0
  int v5; // r5
  int v6; // r0
  float v7; // s4
  float v8; // s2
  int v9; // r2
  int v10; // r2
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
  int v24; // r4
  int v25; // r1
  int v26; // r5
  int v27; // [sp+4h] [bp-34h]
  __int64 v28; // [sp+8h] [bp-30h]
  __int64 v29; // [sp+8h] [bp-30h]
  __int64 v30; // [sp+10h] [bp-28h]
  __int64 v31; // [sp+10h] [bp-28h]
  int v32; // [sp+18h] [bp-20h]
  int v33; // [sp+18h] [bp-20h]

  if ( a2 >= 13 )
  {
    v2 = a2;
    v3 = result;
    do
    {
      v4 = *(float *)(v3 + 4);
      v27 = v2;
      v5 = v3 + 20 * ((unsigned int)v2 >> 1);
      v6 = v2 - 1;
      v7 = *(float *)(v5 + 4);
      v8 = *(float *)(v3 + 20 * (v2 - 1) + 4);
      if ( v4 >= v7 == v7 < v8 )
      {
        v9 = v2 - 1;
        if ( v4 >= v8 != v7 < v8 )
          v9 = 0;
        v10 = v3 + 20 * v9;
        v28 = *(_QWORD *)v10;
        v30 = *(_QWORD *)(v10 + 8);
        v32 = *(_DWORD *)(v10 + 16);
        v11 = *(_QWORD *)(v5 + 8);
        v12 = *(_DWORD *)(v5 + 16);
        *(_QWORD *)v10 = *(_QWORD *)v5;
        *(_QWORD *)(v10 + 8) = v11;
        *(_DWORD *)(v10 + 16) = v12;
        *(_DWORD *)(v5 + 16) = v32;
        *(_QWORD *)v5 = v28;
        *(_QWORD *)(v5 + 8) = v30;
      }
      v29 = *(_QWORD *)v3;
      v31 = *(_QWORD *)(v3 + 8);
      v33 = *(_DWORD *)(v3 + 16);
      v13 = *(_QWORD *)(v5 + 8);
      v14 = *(_DWORD *)(v5 + 16);
      *(_QWORD *)v3 = *(_QWORD *)v5;
      *(_QWORD *)(v3 + 8) = v13;
      *(_DWORD *)(v3 + 16) = v14;
      v15 = 1;
      while ( 1 )
      {
        *(_QWORD *)v5 = v29;
        *(_QWORD *)(v5 + 8) = v31;
        *(_DWORD *)(v5 + 16) = v33;
        v16 = *(float *)(v3 + 4);
        v17 = 20 * v15 + 4;
        v18 = 20 * v15 - 20;
        do
        {
          v19 = (float *)(v3 + v17);
          v17 += 20;
          v18 += 20;
          ++v15;
        }
        while ( *v19 < v16 );
        v5 = v3 + 20 + 20 * v6;
        do
        {
          v20 = *(float *)(v5 - 16);
          v5 -= 20;
          --v6;
        }
        while ( v16 < v20 );
        v2 = v6 + 1;
        if ( v15 - 1 >= v6 + 1 )
          break;
        v21 = v3 + v18;
        v29 = *(_QWORD *)(v3 + v18);
        v31 = *(_QWORD *)(v3 + v18 + 8);
        v33 = *(_DWORD *)(v3 + v18 + 16);
        v22 = *(_QWORD *)(v5 + 8);
        v23 = *(_DWORD *)(v5 + 16);
        *(_QWORD *)v21 = *(_QWORD *)v5;
        *(_QWORD *)(v21 + 8) = v22;
        *(_DWORD *)(v21 + 16) = v23;
      }
      v24 = v18 + v3;
      v25 = v27 - v15 + 1;
      if ( v2 >= v25 )
      {
        result = sub_17A718(v24, v25);
      }
      else
      {
        v26 = v27 - v15 + 1;
        result = sub_17A718(v3, v2);
        v2 = v26;
        v3 = v24;
      }
    }
    while ( v2 > 12 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x17a8aa
// SYMBOL: sub_17A8AA
float *__fastcall sub_17A8AA(float *result, int a2, float *a3)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  float v7; // s4
  float v8; // s6

  if ( v4 != v6 )
  {
    v7 = a3[6];
    if ( v7 >= v4 )
    {
      v8 = a3[5];
      if ( v8 <= v6 )
      {
        if ( v8 <= v4 )
          v8 = v4;
        else
          v3 = (float)((float)((float)(v5 - v3) * (float)(v8 - v4)) / (float)(v6 - v4)) + v3;
        if ( v7 >= v6 )
          v7 = v6;
        else
          v5 = (float)((float)((float)(v7 - v6) * (float)(v5 - v3)) / (float)(v6 - v8)) + v5;
        if ( v3 > (float)a2 )
        {
          if ( v3 < (float)(a2 + 1) )
          {
            result += a2;
            *result = *result
                    + (float)((float)((float)(v7 - v8) * a3[4])
                            * (float)((float)((float)((float)(v3 - (float)a2) + (float)(v5 - (float)a2)) * -0.5) + 1.0));
          }
        }
        else
        {
          result += a2;
          *result = *result + (float)(a3[4] * (float)(v7 - v8));
        }
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x220a40
// SYMBOL: sub_220A40
int __fastcall sub_220A40(int a1, int a2)
{
  return (sub_220A6C(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
}


// ======================================================================
