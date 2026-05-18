// ADDR: 0x17d89e
// SYMBOL: sub_17D89E
unsigned __int8 *__fastcall sub_17D89E(unsigned __int8 *result, const void *a2, size_t a3)
{
  if ( *(_DWORD *)result )
    *(_DWORD *)result += -*(_DWORD *)result & 7;
  return sub_17D566(result, a2, a3);
}


// ======================================================================
// ADDR: 0x17defa
// SYMBOL: sub_17DEFA
int __fastcall sub_17DEFA(int result, void *a2, int a3, int a4)
{
  int *v4; // r9
  int v6; // r5
  int v7; // r6
  bool v8; // zf
  int v9; // r0
  _BYTE v10[300]; // [sp+4h] [bp-12Ch] BYREF

  if ( a3 )
  {
    v4 = (int *)result;
    v6 = a3;
    sub_17D4F2((int)v10, a2, (unsigned int)(a3 + 7) >> 3, 0);
    v7 = *v4;
    do
    {
      v8 = sub_17D884((int)v10) == 0;
      v9 = 8;
      if ( !v8 )
        v9 = 12;
      v7 = *(_DWORD *)(v7 + v9);
      if ( !*(_DWORD *)(v7 + 8) && !*(_DWORD *)(v7 + 12) )
      {
        sub_17D628(a4, (_BYTE *)v7, 8, 1);
        v7 = *v4;
      }
      --v6;
    }
    while ( v6 );
    return sub_17D542((int)v10);
  }
  return result;
}


// ======================================================================
// ADDR: 0x17e75c
// SYMBOL: sub_17E75C
char *__fastcall sub_17E75C(char *result, unsigned int a2)
{
  int v3; // r1
  char *v4; // r5
  const void **v5; // r4
  _DWORD *v6; // r2
  int v7; // r2
  void *v8; // r0
  unsigned int *v9; // r10
  char *v10; // r1
  void *v11; // r0
  char *v12; // r0
  void *v13; // r9
  char *v14; // r8
  char *v15; // r0

  v4 = (char *)*((_DWORD *)result + 1);
  v3 = *(_DWORD *)result;
  v5 = (const void **)result;
  if ( v4 )
  {
    result = 0;
    while ( 1 )
    {
      v6 = *(_DWORD **)(v3 + 4 * (_DWORD)result);
      if ( v6 )
      {
        if ( *v6 == a2 )
          break;
      }
      if ( v4 == ++result )
        goto LABEL_6;
    }
    v7 = (unsigned __int8)result;
  }
  else
  {
LABEL_6:
    v7 = 255;
  }
  if ( v7 != a2 )
  {
    if ( v7 != 255 )
    {
      v8 = *(void **)(v3 + 4 * v7);
      *(_DWORD *)(v3 + 4 * v7) = 0;
      if ( v8 )
      {
        operator delete(v8);
        v4 = (char *)v5[1];
      }
    }
    v9 = (unsigned int *)operator new(0xCu);
    *v9 = a2;
    v9[1] = 0;
    if ( (unsigned int)v4 <= a2 )
    {
      if ( (unsigned int)v5[2] <= a2 )
      {
        v5[2] = (const void *)(a2 + 1);
        v12 = (char *)operator new[](4 * (a2 + 1));
        v13 = (void *)*v5;
        v14 = v12;
        j_memcpy(v12, *v5, 4 * (_DWORD)v4);
        if ( v13 )
        {
          operator delete[](v13);
          v4 = (char *)v5[1];
        }
        *v5 = v14;
      }
      if ( (unsigned int)v4 < a2 )
      {
        do
          *((_DWORD *)*v5 + (_DWORD)v4++) = 0;
        while ( (char *)a2 != v4 );
        v4 = (char *)a2;
      }
      v15 = (char *)*v5;
      v5[1] = v4 + 1;
      result = &v15[4 * (_DWORD)v4];
    }
    else
    {
      v10 = (char *)*v5;
      v11 = (void *)*((_DWORD *)*v5 + a2);
      if ( v11 )
      {
        operator delete(v11);
        v10 = (char *)*v5;
      }
      result = &v10[4 * a2];
    }
    *(_DWORD *)result = v9;
  }
  return result;
}


// ======================================================================
// ADDR: 0x182516
// SYMBOL: sub_182516
int __fastcall sub_182516(unsigned __int8 *a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // r6
  int result; // r0
  int v12; // r1
  int v13; // [sp+18h] [bp-28h]
  int v14; // [sp+18h] [bp-28h]
  char v15; // [sp+26h] [bp-1Ah] BYREF
  char v16[25]; // [sp+27h] [bp-19h] BYREF

  v10 = sub_182A56();
  if ( v10 >= (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 24))(a1) )
  {
    v16[0] = 31;
    v14 = sub_17E2E4();
    sub_1825E8(a1, v16, 8, 0, 8, 0, a3, a4, 0, 0, v14, 0);
    goto LABEL_6;
  }
  if ( a6 - 1 != a1[828] || memcmp((const void *)(a5 + 1), a1 + 572, a6 - 1) )
  {
    v15 = 37;
    v13 = sub_17E2E4();
    sub_1825E8(a1, &v15, 8, 0, 8, 0, a3, a4, 0, 0, v13, 0);
LABEL_6:
    result = 2;
    *(_DWORD *)(a2 + 2108) = 2;
    return result;
  }
  v12 = a1[2413];
  *(_DWORD *)(a2 + 2108) = 5;
  if ( v12 )
    return sub_182980(a1, a3, a4);
  else
    return sub_1828B4(a1, a2, 0, 0);
}


// ======================================================================
// ADDR: 0x182c30
// SYMBOL: sub_182C30
int __fastcall sub_182C30(int a1, int a2, int a3)
{
  int v6; // r1
  __int64 v7; // d17
  __int64 v8; // d18
  __int64 v9; // d19
  int v10; // r0
  int v11; // r8
  char *v12; // r6
  int v13; // r1
  __int16 v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r1
  __int64 *v18; // r4
  unsigned int v19; // r6
  bool v20; // cf
  int i; // r1
  __int64 v22; // d16
  __int64 v23; // d17
  __int64 v24; // d20
  __int64 v25; // d21
  __int64 v26; // kr00_8
  int v27; // r0
  unsigned __int8 v29; // [sp+27h] [bp-1F9h] BYREF
  __int64 v30; // [sp+28h] [bp-1F8h]
  __int64 v31; // [sp+30h] [bp-1F0h]
  int v32; // [sp+38h] [bp-1E8h]
  __int64 v33; // [sp+3Ch] [bp-1E4h]
  __int64 v34; // [sp+44h] [bp-1DCh]
  __int64 v35; // [sp+4Ch] [bp-1D4h]
  __int64 v36; // [sp+54h] [bp-1CCh]
  _BYTE v37[308]; // [sp+5Ch] [bp-1C4h] BYREF
  _QWORD v38[4]; // [sp+190h] [bp-90h] BYREF
  _QWORD v39[2]; // [sp+1B0h] [bp-70h] BYREF
  int v40; // [sp+1C0h] [bp-60h]
  int v41; // [sp+1C4h] [bp-5Ch]
  int v42; // [sp+1C8h] [bp-58h]
  int v43; // [sp+1CCh] [bp-54h]
  _QWORD s1[4]; // [sp+1D0h] [bp-50h] BYREF
  _QWORD v45[2]; // [sp+1F0h] [bp-30h]
  int v46; // [sp+200h] [bp-20h]

  sub_1848C6(v37);
  if ( *(_DWORD *)(a2 + 2108) == 4 )
  {
    v6 = *(unsigned __int8 *)(a1 + 2413);
    v7 = *(_QWORD *)(a3 + 33);
    v8 = *(_QWORD *)(a3 + 41);
    v9 = *(_QWORD *)(a3 + 49);
    v10 = *(unsigned __int8 *)(a1 + 2412);
    v11 = *(_DWORD *)(a3 + 21);
    s1[0] = *(_QWORD *)(a3 + 25);
    s1[1] = v7;
    s1[2] = v8;
    s1[3] = v9;
    if ( !v6 || v10 || v11 == *(_DWORD *)(a1 + 2376) && (v10 = memcmp(s1, (const void *)(a1 + 2380), 0x20u)) == 0 )
    {
      v18 = (__int64 *)(a3 + 1);
      v19 = 0;
      do
      {
        *(_DWORD *)((char *)v45 + v19) = sub_187150(v10);
        v10 = v19 + 4;
        v20 = v19 >= 0x10;
        v19 += 4;
      }
      while ( !v20 );
      v39[0] = v45[0];
      v39[1] = v45[1];
      v40 = v46;
      v41 = 0;
      v42 = 0;
      v43 = 0;
      sub_182E34(v37, v11, s1);
      sub_182E82(v37, v39, v38);
      for ( i = 0; i != 16; ++i )
        *(_BYTE *)(a2 + 2076 + i) = *((_BYTE *)v18 + i) ^ *((_BYTE *)v45 + i);
      v22 = v38[0];
      v23 = v38[1];
      *(_BYTE *)(a2 + 2092) = 1;
      v24 = *v18;
      v25 = v18[1];
      v33 = v22;
      v34 = v23;
      v35 = v38[2];
      v36 = v38[3];
      v26 = *(_QWORD *)(a2 + 4);
      v30 = v24;
      v31 = v25;
      v32 = *((_DWORD *)v18 + 4);
      v29 = 16;
      v27 = sub_17E2E4();
      sub_1825E8(a1, &v29, 424, 0, 6, 0, v26, 0, 0, v27, 0);
    }
    else
    {
      v12 = (char *)malloc(0x1Du);
      v13 = *(_DWORD *)(a2 + 4);
      v12[28] = 28;
      v14 = *(_WORD *)(a2 + 8);
      v12[24] = 0;
      *((_WORD *)v12 + 4) = v14;
      *((_DWORD *)v12 + 5) = v12 + 28;
      *((_DWORD *)v12 + 3) = 1;
      *((_DWORD *)v12 + 4) = 8;
      *((_DWORD *)v12 + 1) = v13;
      *(_WORD *)v12 = sub_1811B4(a1, v13, *((_DWORD *)v12 + 2), 1);
      EnterCriticalSection_0((pthread_mutex_t *)&unk_381C10);
      *(_DWORD *)sub_184892(a1 + 2472) = v12;
      v15 = *(_DWORD *)(a1 + 2484);
      v16 = *(_DWORD *)(a1 + 2492);
      *(_BYTE *)(v15 + 4) = 1;
      v17 = *(_DWORD *)(v15 + 8);
      *(_DWORD *)(a1 + 2492) = v16 + 1;
      *(_DWORD *)(a1 + 2484) = v17;
      LeaveCriticalSection_0((pthread_mutex_t *)&unk_381C10);
      *(_DWORD *)(a2 + 2108) = 2;
    }
  }
  return sub_1848C6(v37);
}


// ======================================================================
// ADDR: 0x18483c
// SYMBOL: sub_18483C
int __fastcall sub_18483C(int result, int a2, int a3)
{
  if ( *(_BYTE *)(result + 128) )
    return sub_186AF0(
             a3,
             a2,
             result + 132,
             result + 196,
             result + 244,
             result + 292,
             result + 212,
             result + 228,
             result + 260,
             result + 276);
  return result;
}


// ======================================================================
// ADDR: 0x1876dc
// SYMBOL: sub_1876DC
int __fastcall sub_1876DC(int a1)
{
  return *(_DWORD *)(a1 + 736);
}


// ======================================================================
// ADDR: 0x1876e2
// SYMBOL: sub_1876E2
_DWORD *__fastcall sub_1876E2(_DWORD *result, unsigned int a2)
{
  int v2; // r12
  unsigned int v3; // r3
  int v4; // lr
  int v5; // r1
  int v6; // r2

  v2 = result[422];
  v3 = a2;
  v4 = result[423];
  if ( a2 <= 0x1E )
    v3 = 30;
  if ( result[184] < a2 )
    v3 = 500;
  if ( v3 < 2 * (v4 + v2) )
    v3 = 2 * (v4 + v2);
  result[182] = v3;
  v6 = (1000 * (unsigned __int64)(3 * v3)) >> 32;
  v5 = 3000 * v3;
  if ( 3 * v3 < 0x1E )
  {
    v6 = 0;
    v5 = 30000;
  }
  result[414] = v5;
  result[415] = v6;
  return result;
}


// ======================================================================
// ADDR: 0x188832
// SYMBOL: sub_188832
int __fastcall sub_188832(int a1, _DWORD *a2)
{
  int v2; // r4
  __int64 v3; // kr00_8
  int v4; // r3
  int v5; // r12
  int v6; // r2
  int v7; // r4
  int v8; // r2

  v2 = 0;
  if ( !*(_BYTE *)(a1 + 1664) )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 24);
    if ( HIDWORD(v3) < (unsigned int)v3 )
      v4 = -v5;
    if ( HIDWORD(v3) - (_DWORD)v3 != v4 )
    {
      v6 = *(_DWORD *)(a1 + 12);
      v7 = v3 + 1 - v5;
      if ( (_DWORD)v3 + 1 != v5 )
        v7 = v3 + 1;
      *(_DWORD *)(a1 + 16) = v7;
      if ( !v7 )
        v7 = v5;
      v8 = *(_DWORD *)(v6 + 4 * v7 - 4);
      v2 = *(_DWORD *)(v8 + 48);
      *a2 = *(_DWORD *)(v8 + 52);
      sub_17E56C((_DWORD *)(a1 + 1696), v8);
    }
  }
  return v2;
}


// ======================================================================
// ADDR: 0x188d78
// SYMBOL: sub_188D78
int __fastcall sub_188D78(int a1, int a2, int a3, int a4, int a5, __int64 a6, int a7)
{
  unsigned int v9; // r8
  __int64 v10; // r0
  double v12; // r0
  double v13; // d17
  double v14; // d16
  int v15; // r0
  __int64 v16; // kr08_8
  int v17; // r5
  double v18; // d8
  _DWORD *v19; // r4
  int v20; // r10
  int v21; // r5
  unsigned int v22; // r9
  int v23; // r6
  int v24; // r10
  unsigned int v25; // r5
  unsigned int v26; // r0
  unsigned int v27; // r1
  int v28; // r1
  int v29; // r1
  int v30; // r2
  int v31; // r3
  unsigned __int64 v32; // kr10_8
  unsigned int v33; // r1
  unsigned int v34; // r2
  __int64 v35; // kr28_8
  float v36; // s0
  double v37; // d17
  int v38; // r1
  double v39; // d18
  double v40; // d17
  double v41; // d18
  double v42; // d16
  double v43; // d17
  double v44; // d19
  double v45; // d19
  double v46; // d16
  int v47; // r1
  int v48; // r2
  int v49; // r3
  __int64 v50; // kr30_8
  unsigned int v51; // r6
  size_t *v52; // r1
  void *v53; // r0
  double v54; // d19
  int v56; // [sp+1Ch] [bp-44h]
  double *v57; // [sp+20h] [bp-40h]
  int v58; // [sp+24h] [bp-3Ch]
  int v60; // [sp+2Ch] [bp-34h]
  _DWORD *v61; // [sp+30h] [bp-30h]
  _BYTE v62[41]; // [sp+37h] [bp-29h] BYREF

  v9 = a6;
  v10 = *(_QWORD *)(a1 + 968);
  if ( v10 >= a6 )
  {
    *(_QWORD *)(a1 + 968) = a6;
    return v10;
  }
  v12 = sub_220C98((int)a6 - (int)v10, (unsigned __int64)(a6 - v10) >> 32, (unsigned __int64)(v10 - a6) >> 32);
  v13 = *(double *)(a1 + 1024);
  v14 = *(double *)(a1 + 1032) + v13 * (v12 / 1000000.0);
  if ( v14 > v13 )
    v14 = *(double *)(a1 + 1024);
  v15 = *(unsigned __int8 *)(a1 + 1664);
  *(_QWORD *)(a1 + 968) = a6;
  v57 = (double *)(a1 + 1024);
  *(double *)(a1 + 1032) = v14;
  if ( v15 )
    *(_BYTE *)(a1 + 1664) = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v16 = *(_QWORD *)(a1 + 184);
    if ( v16 < a6 && v16 && 1000LL * *(unsigned int *)(a1 + 736) < a6 - v16 )
    {
      LODWORD(v10) = 1;
      *(_BYTE *)(a1 + 724) = 1;
      return v10;
    }
  }
  v17 = a4;
  v18 = (float)(8 * a5 + 224);
  if ( v13 < v18 )
    v18 = v13;
  v58 = a1;
  v19 = (_DWORD *)(a1 + 192);
  v61 = v19;
  v60 = a2;
  if ( v14 > v18 )
  {
    v56 = a4;
    while ( 1 )
    {
      sub_17D55E(v19);
      v20 = v17;
      sub_1892D4(v58, v19, a5, v62, v9, HIDWORD(a6), a3, v17, a7);
      v21 = *(_DWORD *)(v58 + 192);
      if ( v21 <= 0 )
        break;
      v22 = *(_DWORD *)(v58 + 1688);
      v23 = *(_DWORD *)(v58 + 1692);
      if ( *(_QWORD *)(v58 + 1688) )
      {
        v24 = operator new(0x240u);
        v25 = (unsigned int)(v21 + 7) >> 3;
        _memcpy_chk(v24, *(_DWORD *)(v58 + 204), v25, 576);
        *(_DWORD *)(v24 + 560) = v25;
        *(_QWORD *)(v24 + 568) = 1000LL * v22 + a6;
        if ( v23 )
        {
          v26 = sub_187150();
          sub_221798(v26, *(_DWORD *)(v58 + 1692));
          *(_QWORD *)(v24 + 568) += v27;
        }
        sub_1897DA(v58 + 1668, v24);
        v17 = v56;
        v9 = a6;
        v19 = v61;
      }
      else
      {
        v17 = v20;
        v19 = v61;
        sub_189848(v58, v60, a3, v20, v61);
        v9 = a6;
      }
      v14 = v57[1] - (double)(*v19 + 224);
      v57[1] = v14;
      if ( v14 <= v18 )
        goto LABEL_25;
    }
    v17 = v20;
    v9 = a6;
    v14 = v57[1];
  }
LABEL_25:
  v28 = *(unsigned __int8 *)(v58 + 1040);
  *(_BYTE *)(v58 + 1040) = v14 < v18;
  if ( v14 >= v18 || v28 )
  {
    v34 = *(_DWORD *)(v58 + 980);
    v33 = *(_DWORD *)(v58 + 976);
  }
  else
  {
    v29 = 2000 * *(_DWORD *)(v58 + 728);
    v30 = *(_DWORD *)(v58 + 992) + 1;
    *(_DWORD *)(v58 + 1000) = 0;
    *(_DWORD *)(v58 + 1004) = 0;
    v31 = v30 + 1;
    if ( v30 != -1 )
      v31 = v30;
    v32 = __PAIR64__(HIDWORD(a6), v29) + v9;
    v34 = (v32 + 250000) >> 32;
    v33 = v32 + 250000;
    *(_QWORD *)(v58 + 976) = v32 + 250000;
    *(_QWORD *)(v58 + 984) = v32;
    *(_DWORD *)(v58 + 992) = v31;
  }
  if ( __SPAIR64__(HIDWORD(a6), v9) >= __SPAIR64__(v34, v33) )
  {
    v35 = *(_QWORD *)(v58 + 1000);
    if ( HIDWORD(v35) + (_DWORD)v35 )
    {
      v36 = (float)(unsigned int)v35 / (float)((float)HIDWORD(v35) + (float)(unsigned int)v35);
      if ( v14 >= v18 )
      {
        if ( v36 > 0.02 )
        {
          v39 = 0.9;
          if ( v36 > 0.2 )
            v39 = 0.5;
          v40 = *(double *)(v58 + 1008) * v39;
          v41 = *v57;
          *(double *)(v58 + 1008) = v40;
          *(double *)(v58 + 1016) = v41;
          if ( v40 < 14400.0 )
          {
            v40 = 14400.0;
            *(_DWORD *)(v58 + 1008) = 0;
            *(_DWORD *)(v58 + 1012) = 1087119360;
          }
          *(_DWORD *)(v58 + 996) = 0;
          *v57 = v40 + (v41 - v40) * 0.5;
        }
        goto LABEL_63;
      }
      if ( v36 > 0.02 )
      {
        v37 = *v57;
        *(double *)(v58 + 1016) = *v57;
        goto LABEL_39;
      }
    }
    else
    {
      if ( v14 >= v18 )
      {
LABEL_63:
        v47 = 2000 * *(_DWORD *)(v58 + 728);
        v48 = *(_DWORD *)(v58 + 992) + 1;
        *(_DWORD *)(v58 + 1000) = 0;
        *(_DWORD *)(v58 + 1004) = 0;
        v49 = v48 + 1;
        if ( v48 != -1 )
          v49 = v48;
        v50 = (__int64)&unk_7A120 + __PAIR64__(HIDWORD(a6), v47) + v9;
        *(_QWORD *)(v58 + 976) = v50 + 250000;
        *(_QWORD *)(v58 + 984) = v50;
        *(_DWORD *)(v58 + 992) = v49;
        goto LABEL_66;
      }
      v36 = 0.0;
    }
    v37 = *v57;
    *(double *)(v58 + 1008) = *v57;
LABEL_39:
    if ( v36 == 0.0 )
    {
      v38 = *(_DWORD *)(v58 + 996) + 1;
      *(_DWORD *)(v58 + 996) = v38;
      if ( v38 != 10 )
        goto LABEL_49;
      *(_DWORD *)(v58 + 1016) = 0;
      *(_DWORD *)(v58 + 1020) = 0;
    }
    *(_DWORD *)(v58 + 996) = 0;
LABEL_49:
    v42 = *(double *)(v58 + 1016);
    if ( v42 == 0.0 )
    {
      v46 = v37 + v37;
LABEL_62:
      *v57 = v46;
      goto LABEL_63;
    }
    v43 = *(double *)(v58 + 1008);
    if ( v36 > 0.2 )
    {
      v43 = v43 * 0.5;
      *(double *)(v58 + 1008) = v43;
      if ( v43 < 14400.0 )
      {
        v43 = 14400.0;
        *(_DWORD *)(v58 + 1008) = 0;
        *(_DWORD *)(v58 + 1012) = 1087119360;
      }
    }
    v44 = (v42 - v43) * 0.5;
    if ( v44 >= 3600.0 )
    {
LABEL_61:
      v46 = v44 + v43;
      goto LABEL_62;
    }
    if ( v36 == 0.0 )
    {
      v45 = 1.5;
    }
    else
    {
      if ( v36 >= 0.02 )
      {
        if ( v36 < 0.04 )
        {
          v54 = v43 * 0.9;
          v43 = 14400.0;
          *(double *)(v58 + 1008) = v54;
          if ( v54 >= 14400.0 )
          {
            v43 = v54;
          }
          else
          {
            *(_DWORD *)(v58 + 1008) = 0;
            *(_DWORD *)(v58 + 1012) = 1087119360;
          }
        }
        goto LABEL_60;
      }
      v45 = 1.05;
    }
    v42 = v42 * v45;
    *(double *)(v58 + 1016) = v42;
LABEL_60:
    v44 = (v42 - v43) * 0.5;
    goto LABEL_61;
  }
LABEL_66:
  LODWORD(v10) = *(_DWORD *)(v58 + 1672);
  if ( (_DWORD)v10 )
  {
    v51 = 0;
    do
    {
      if ( *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(v58 + 1668) + 4 * v51) + 568) < __SPAIR64__(HIDWORD(a6), v9) )
      {
        sub_17D55E(v61);
        v52 = *(size_t **)(*(_DWORD *)(v58 + 1668) + 4 * v51);
        sub_17D566((unsigned __int8 *)v61, v52, v52[140]);
        sub_189848(v58, v60, a3, v17, v61);
        v53 = *(void **)(*(_DWORD *)(v58 + 1668) + 4 * v51);
        if ( v53 )
          operator delete(v53);
        LODWORD(v10) = *(_DWORD *)(v58 + 1672) - 1;
        if ( v51 != (_DWORD)v10 )
          *(_DWORD *)(*(_DWORD *)(v58 + 1668) + 4 * v51) = *(_DWORD *)(*(_DWORD *)(v58 + 1668) + 4 * v10);
        *(_DWORD *)(v58 + 1672) = v10;
      }
      else
      {
        ++v51;
      }
    }
    while ( v51 < (unsigned int)v10 );
  }
  return v10;
}


// ======================================================================
// ADDR: 0x189cca
// SYMBOL: sub_189CCA
bool __fastcall sub_189CCA(_DWORD *a1)
{
  int i; // r1
  __int64 v2; // kr00_8
  int v3; // r2
  int v4; // r1
  int v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r2
  bool v8; // cf
  unsigned int v9; // r2
  bool v10; // zf

  for ( i = 0; i != 16; i += 4 )
  {
    v2 = *(_QWORD *)&a1[i + 27];
    v3 = 0;
    if ( HIDWORD(v2) < (unsigned int)v2 )
      v3 = -a1[i + 29];
    if ( HIDWORD(v2) - (_DWORD)v2 != v3 )
      return 1;
  }
  v4 = 1;
  if ( !a1[8] && !a1[20] )
  {
    v5 = 0;
    v6 = a1[4];
    v7 = a1[5];
    v8 = v7 >= v6;
    v9 = v7 - v6;
    if ( !v8 )
      v5 = -a1[6];
    v10 = v9 == v5;
    v4 = 1;
    if ( v9 == v5 )
      v10 = a1[1] == 0;
    if ( v10 )
      return a1[43] != 0;
  }
  return v4;
}


// ======================================================================
// ADDR: 0x189d32
// SYMBOL: sub_189D32
bool __fastcall sub_189D32(int a1)
{
  return *(_DWORD *)(a1 + 32) != 0;
}


// ======================================================================
// ADDR: 0x18a098
// SYMBOL: sub_18A098
int __fastcall sub_18A098(int a1)
{
  return *(unsigned __int8 *)(a1 + 725);
}


// ======================================================================
// ADDR: 0x18a09e
// SYMBOL: sub_18A09E
int __fastcall sub_18A09E(int a1)
{
  return *(unsigned __int8 *)(a1 + 724);
}


// ======================================================================
// ADDR: 0x18cc74
// SYMBOL: sub_18CC74
int __fastcall sub_18CC74(int a1, int fd, _DWORD *a3, _DWORD *a4)
{
  ssize_t v6; // r3
  int result; // r0
  socklen_t v8; // [sp+Ch] [bp-24Ch] BYREF
  struct sockaddr addr; // [sp+10h] [bp-248h] BYREF
  unsigned __int8 buf[568]; // [sp+20h] [bp-238h] BYREF

  addr.sa_family = 2;
  v8 = 16;
  if ( fd == -1 )
  {
    result = -1;
  }
  else
  {
    v6 = recvfrom(fd, buf, 0x230u, 0, &addr, &v8);
    if ( v6 <= 0 && v6 != -1 )
      return 1;
    if ( v6 != -1 )
    {
      sub_183004(*(int *)&addr.sa_data[2], bswap32(*(unsigned __int16 *)addr.sa_data) >> 16, buf, v6, a3);
      return 1;
    }
    result = 0;
  }
  *a4 = result;
  return result;
}


// ======================================================================
