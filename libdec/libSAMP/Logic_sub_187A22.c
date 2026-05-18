// ADDR: 0x17e0ba
// SYMBOL: sub_17E0BA
int __fastcall sub_17E0BA(int a1)
{
  return *(unsigned __int8 *)(a1 + 600);
}


// ======================================================================
// ADDR: 0x17e1fc
// SYMBOL: sub_17E1FC
int __fastcall sub_17E1FC(int a1, char *a2, int a3, char *a4, size_t *a5)
{
  int result; // r0
  int v9; // r11
  int v10; // r6
  int v11; // r4
  char *v12; // r10
  int v13; // r8
  char *v14; // r0
  int v15; // r1
  int v16; // r4
  int v17; // r6
  size_t v18; // r2
  char *v19; // r1
  int v21; // [sp+8h] [bp-28h] BYREF
  __int16 v22; // [sp+Ch] [bp-24h]
  int v23; // [sp+10h] [bp-20h]

  v22 = 22719;
  v21 = -831661711;
  result = 0;
  v23 = 0;
  if ( a2 && a3 >= 16 && (a3 & 0xF) == 0 )
  {
    v9 = a1 + 288;
    v10 = a1 + 576;
    if ( (unsigned int)a3 >= 0x20 )
    {
      v11 = a3 - 16;
      v12 = a2 + 16;
      v13 = 16;
      do
      {
        sub_18E136(v10, v9);
        v13 += 16;
        v14 = a2;
        v15 = 0;
        if ( v13 != a3 )
          v14 = &a2[v13];
        do
        {
          v12[v15] ^= v14[v15];
          ++v15;
        }
        while ( v15 != 16 );
        v12 += 16;
      }
      while ( v13 <= v11 );
    }
    sub_18E136(v10, v9);
    v16 = a2[5] & 0xF;
    v17 = *(_DWORD *)a2;
    *a5 = a3 - v16 - 6;
    sub_17DAA2((unsigned __int16 *)&v21, (unsigned __int8 *)a2 + 4, a3 - 4);
    if ( v17 == v23 )
    {
      v18 = *a5;
      v19 = &a2[v16 + 6];
      if ( a2 == a4 )
        j_memmove(a2, v19, v18);
      else
        j_memcpy(a4, v19, v18);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x188098
// SYMBOL: sub_188098
int __fastcall sub_188098(int a1, int *a2)
{
  int v2; // r5
  int v5; // r6
  int v6; // r6
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  unsigned __int16 v12; // [sp+2h] [bp-26h] BYREF
  unsigned __int16 v13; // [sp+4h] [bp-24h] BYREF
  unsigned __int16 v14; // [sp+6h] [bp-22h] BYREF
  int v15[8]; // [sp+8h] [bp-20h] BYREF

  sub_18A188(a1, 0);
  v5 = 1;
  sub_17D9C0(a2, &v14, 16, 1);
  if ( v14 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = a2[2];
      if ( v7 < *a2 )
      {
        v8 = *(unsigned __int8 *)(a2[3] + (v7 >> 3));
        a2[2] = v7 + 1;
        v2 = (unsigned __int8)(v8 << (v7 & 7)) >> 7;
      }
      if ( !sub_17D786(a2, &v13, 16, 1) )
        break;
      if ( v2 << 24 )
      {
        v9 = v13;
        v12 = v13;
        v10 = v13;
      }
      else
      {
        if ( !sub_17D786(a2, &v12, 16, 1) )
          return 0;
        v10 = v13;
        v9 = v12;
        if ( v12 < (unsigned int)v13 )
          return 0;
      }
      v15[0] = v10 | (v9 << 16);
      sub_18A49E(a1, v15);
      if ( ++v6 >= (unsigned int)v14 )
        return 1;
    }
    return 0;
  }
  return v5;
}


// ======================================================================
// ADDR: 0x188150
// SYMBOL: sub_188150
int __fastcall sub_188150(int a1, int *a2, int a3, int a4)
{
  __int64 v5; // r4
  _DWORD *v6; // r8
  int v7; // r9
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r1
  void *v15; // r0
  unsigned __int16 v17; // [sp+4h] [bp-1Ch] BYREF
  _BYTE v18[25]; // [sp+7h] [bp-19h] BYREF

  LODWORD(v5) = a3;
  if ( *a2 - a2[2] < 16 )
    return 0;
  v6 = (_DWORD *)(a1 + 1696);
  HIDWORD(v5) = a4;
  v7 = sub_1889FC(a1 + 1696);
  *(_QWORD *)(v7 + 32) = v5;
  if ( !sub_17D786(a2, (_BYTE *)v7, 16, 1) )
    goto LABEL_20;
  v8 = sub_17D786(a2, v18, 4, 1);
  v9 = v18[0];
  *(_DWORD *)(v7 + 12) = v18[0];
  if ( !v8
    || v9 <= 0xA
    && ((1 << v9) & 0x680) != 0
    && (!sub_17D786(a2, (_BYTE *)(v7 + 16), 5, 1) || !sub_17D786(a2, (_BYTE *)(v7 + 18), 16, 1)) )
  {
    goto LABEL_20;
  }
  v10 = a2[2];
  if ( v10 >= *a2 )
    goto LABEL_20;
  v11 = *(unsigned __int8 *)(a2[3] + (v10 >> 3));
  a2[2] = v10 + 1;
  if ( ((v11 << (v10 & 7)) & 0x80) != 0 )
  {
    if ( !sub_17D786(a2, (_BYTE *)(v7 + 20), 16, 1)
      || !sub_17D9C0(a2, (_BYTE *)(v7 + 24), 32, 1)
      || !sub_17D9C0(a2, (_BYTE *)(v7 + 28), 32, 1) )
    {
      goto LABEL_20;
    }
  }
  else
  {
    *(_DWORD *)(v7 + 24) = 0;
    *(_DWORD *)(v7 + 28) = 0;
  }
  if ( !sub_17D9C0(a2, &v17, 16, 1) || (v12 = v17, *(_DWORD *)(v7 + 48) = v17, (unsigned int)(v12 - 1) > 0x1177) )
  {
LABEL_20:
    sub_17E56C(v6, v7);
    return 0;
  }
  v13 = operator new[]((unsigned int)(v12 + 7) >> 3);
  v14 = *(_DWORD *)(v7 + 48);
  *(_DWORD *)(v7 + 52) = v13;
  *(_BYTE *)(v13 + ((unsigned int)(v14 + 7) >> 3) - 1) = 0;
  if ( !sub_17D8B8(a2, *(void **)(v7 + 52), (unsigned int)(*(_DWORD *)(v7 + 48) + 7) >> 3) )
  {
    v15 = *(void **)(v7 + 52);
    if ( v15 )
      operator delete[](v15);
    goto LABEL_20;
  }
  return v7;
}


// ======================================================================
// ADDR: 0x18829c
// SYMBOL: sub_18829C
unsigned int __fastcall sub_18829C(int a1, int a2)
{
  void *v3; // r0
  unsigned int v5; // r0
  unsigned int result; // r0

  v3 = *(void **)a1;
  if ( v3 )
    operator delete[](v3);
  v5 = 8 * a2;
  if ( a2 != (a2 & 0x1FFFFFFF) )
    v5 = -1;
  result = operator new[](v5);
  *(_QWORD *)a1 = result;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = a2;
  return result;
}


// ======================================================================
// ADDR: 0x1882d2
// SYMBOL: sub_1882D2
void __fastcall sub_1882D2(int a1, __int64 *a2)
{
  int v2; // r5
  int v5; // r0
  _QWORD *v6; // r6
  __int64 v7; // kr00_8
  int v8; // r11
  int v9; // r0
  bool v10; // zf
  int v11; // r1
  unsigned int v12; // r0
  _QWORD *v13; // r10
  int v14; // r4
  _QWORD *v15; // r8
  int v16; // r1
  _QWORD *v17; // r0
  __int64 v18; // r2

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v5 = *(_DWORD *)(a1 + 8);
    v6 = *(_QWORD **)a1;
    v7 = *a2;
    v8 = v5 + 1;
    *(_DWORD *)(a1 + 8) = v5 + 1;
    v6[v5] = v7;
    if ( v5 + 1 == v2 )
    {
      v8 = 0;
      *(_DWORD *)(a1 + 8) = 0;
    }
    if ( v8 == *(_DWORD *)(a1 + 4) )
    {
      v9 = (2 * v2) & 0x1FFFFFFE;
      v11 = v9 - 2 * v2;
      v10 = v9 == 2 * v2;
      v12 = 16 * v2;
      if ( !v10 )
        v11 = 1;
      if ( v11 )
        v12 = -1;
      v13 = (_QWORD *)operator new[](v12);
      v14 = 0;
      v15 = v13;
      do
      {
        sub_221798(v8 + v14++, v2);
        *v15++ = v6[v16];
      }
      while ( v2 != v14 );
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)(a1 + 8) = v2;
      *(_DWORD *)(a1 + 12) = 2 * v2;
      operator delete[](v6);
      *(_DWORD *)a1 = v13;
    }
  }
  else
  {
    v17 = (_QWORD *)operator new[](0x80u);
    v18 = *a2;
    *(_DWORD *)a1 = v17;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 8) = 1;
    *(_DWORD *)(a1 + 12) = 16;
    *v17 = v18;
  }
}


// ======================================================================
// ADDR: 0x1883a0
// SYMBOL: sub_1883A0
_DWORD *__fastcall sub_1883A0(_DWORD *result)
{
  int v1; // r10
  unsigned int v2; // r1
  unsigned int v3; // r6
  _DWORD *v4; // r9
  int v5; // r8
  unsigned int v6; // r11
  int v7; // r0
  unsigned int v8; // r5
  unsigned int v9; // r0
  _QWORD *v10; // r0
  _QWORD *v11; // r4
  _QWORD *v12; // r9
  int v13; // r8
  int v14; // r1
  _DWORD *v15; // [sp+0h] [bp-28h]
  unsigned int v16; // [sp+4h] [bp-24h]
  _DWORD *v17; // [sp+8h] [bp-20h]

  v1 = result[3];
  if ( v1 )
  {
    v2 = result[2];
    v3 = result[1];
    v4 = result;
    v5 = result[3];
    if ( v2 >= v3 )
      v5 = 0;
    v6 = v5 + v2 - v3;
    v7 = 1;
    v16 = v2;
    do
    {
      v8 = v7;
      v7 *= 2;
    }
    while ( v8 <= v6 );
    v9 = 8 * v8;
    if ( v8 != (v8 & 0x1FFFFFFF) )
      v9 = -1;
    v10 = (_QWORD *)operator new[](v9);
    v11 = (_QWORD *)*v4;
    v17 = v10;
    if ( v6 )
    {
      v15 = v4;
      v12 = v10;
      v13 = v5 + v16;
      do
      {
        sub_221798(v3++, v1);
        *v12++ = v11[v14];
      }
      while ( v13 != v3 );
      v4 = v15;
      v15[1] = 0;
      v15[2] = v6;
      v15[3] = v8;
    }
    else
    {
      v4[1] = 0;
      v4[2] = 0;
      v4[3] = v8;
      if ( !v11 )
      {
LABEL_14:
        result = v17;
        *v4 = v17;
        return result;
      }
    }
    operator delete[](v11);
    goto LABEL_14;
  }
  return result;
}


// ======================================================================
// ADDR: 0x188454
// SYMBOL: sub_188454
int __fastcall sub_188454(int result, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r12
  int v5; // r8
  _DWORD *v6; // r11
  int *v7; // r4
  unsigned int v10; // r5
  int v11; // r1
  _DWORD *v12; // r6
  int v13; // r2
  int i; // r8
  void *v15; // r0
  int v16; // r2
  int v17; // [sp+0h] [bp-20h]

  v4 = *(_DWORD *)(result + 172);
  if ( v4 )
  {
    v5 = result;
    v6 = (_DWORD *)(result + 1696);
    v7 = (int *)(result + 168);
    result = 10000000;
    v10 = 0;
    v17 = v5;
    do
    {
      v11 = *v7;
      v12 = *(_DWORD **)(*v7 + 4 * v10);
      if ( *(_QWORD *)v12 + 10000000LL < __SPAIR64__(a4, a3)
        && (v13 = *(_DWORD *)v12[2], (*(_DWORD *)(v13 + 12) & 0xFFFFFFFE) == 6) )
      {
        if ( v12[3] )
        {
          for ( i = 0; ; ++i )
          {
            v15 = *(void **)(v13 + 52);
            if ( v15 )
            {
              operator delete[](v15);
              v11 = *v7;
            }
            sub_17E56C(v6, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v11 + 4 * v10) + 8) + 4 * i));
            v11 = *v7;
            v12 = *(_DWORD **)(*v7 + 4 * v10);
            if ( (unsigned int)(i + 1) >= v12[3] )
              break;
            v16 = v12[2] + 4 * i;
            v13 = *(_DWORD *)(v16 + 4);
          }
          v5 = v17;
        }
        sub_18A128(v12 + 2);
        operator delete(v12);
        sub_18B9EC(v7, v10);
        result = 10000000;
        v4 = *(_DWORD *)(v5 + 172);
      }
      else
      {
        ++v10;
      }
    }
    while ( v10 < v4 );
  }
  return result;
}


// ======================================================================
// ADDR: 0x188520
// SYMBOL: sub_188520
void __fastcall sub_188520(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r5
  int v5; // r4
  int v10; // r10
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r6
  int v19; // r4
  unsigned int v20; // r5
  int v21; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r1
  int v25; // r2
  __int64 v26; // r0
  int v27; // [sp+4h] [bp-2Ch] BYREF
  _DWORD *v28; // [sp+8h] [bp-28h] BYREF
  char v29; // [sp+Fh] [bp-21h] BYREF
  _DWORD v30[8]; // [sp+10h] [bp-20h] BYREF

  v4 = a1 + 42;
  v5 = a2 + 20;
  v30[0] = a2;
  v10 = sub_189F4A(a1 + 42, a2 + 20, &v29);
  if ( !v29 )
  {
    v11 = (_DWORD *)operator new(0x18u);
    v11[2] = 0;
    v11[3] = 0;
    v11[4] = 0;
    v28 = v11;
    v10 = sub_189F9A(v4, v5, &v28);
  }
  sub_189FE4(*(_DWORD *)(a1[42] + 4 * v10) + 8, a2 + 24, v30);
  v12 = a1[12];
  v13 = *(_DWORD *)(a1[42] + 4 * v10);
  *(_DWORD *)v13 = a3;
  *(_DWORD *)(v13 + 4) = a4;
  if ( v12 )
  {
    v14 = **(_DWORD **)(v13 + 8);
    if ( !*(_DWORD *)(v14 + 24) )
    {
      v15 = *(_DWORD *)(v13 + 12);
      if ( v15 != *(_DWORD *)(v14 + 28) )
      {
        sub_221798(v15, v12);
        if ( !v16 )
        {
          v17 = sub_1889FC(a1 + 424);
          v18 = a1[42];
          v19 = v17;
          v27 = v17;
          v20 = ((unsigned int)(*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(v18 + 4 * v10) + 8) + 48) + 7) >> 3) + 13;
          v21 = operator new[](v20);
          *(_DWORD *)(v19 + 52) = v21;
          v22 = *(_DWORD *)(v18 + 4 * v10);
          v23 = v30[0];
          *(_DWORD *)(v19 + 48) = 8 * v20;
          *(_DWORD *)(v21 + 1) = *(_DWORD *)(v22 + 12);
          v24 = *(_DWORD *)(v23 + 28);
          v25 = v27;
          *(_DWORD *)(*(_DWORD *)(v19 + 52) + 5) = v24;
          *(_DWORD *)(*(_DWORD *)(v25 + 52) + 9) = (unsigned int)(*(_DWORD *)(**(_DWORD **)(*(_DWORD *)(a1[42] + 4 * v10)
                                                                                          + 8)
                                                                            + 48)
                                                                + 7) >> 3;
          v26 = *(_QWORD *)(**(_DWORD **)(*(_DWORD *)(a1[42] + 4 * v10) + 8) + 48);
          j_memcpy((void *)(*(_DWORD *)(v25 + 52) + 13), (const void *)HIDWORD(v26), (unsigned int)(v26 + 7) >> 3);
          sub_17E430(a1 + 3, &v27);
        }
      }
    }
  }
}


// ======================================================================
// ADDR: 0x18863a
// SYMBOL: sub_18863A
int __fastcall sub_18863A(int a1, __int16 a2, int a3, int a4)
{
  int *v4; // r9
  int v7; // r11
  unsigned int v8; // r4
  int v9; // r8
  __int64 v10; // kr00_8
  int v11; // r6
  int v12; // r0
  int v13; // r10
  int v14; // r1
  int v15; // r0
  __int64 v16; // r2
  int *v17; // r2
  int v18; // r1
  int v19; // t1
  int v20; // r0
  _DWORD *v21; // r4
  int v22; // r1
  int v23; // r5
  int v24; // r6
  int v25; // r1
  unsigned int v26; // r0
  int v27; // r0
  int v28; // r3
  unsigned int v29; // r5
  void *v30; // r0
  _DWORD *v32; // [sp+0h] [bp-28h]
  char v34; // [sp+9h] [bp-1Fh] BYREF
  __int16 v35[15]; // [sp+Ah] [bp-1Eh] BYREF

  v4 = (int *)(a1 + 168);
  v35[0] = a2;
  v7 = sub_189F4A(a1 + 168, v35, &v34);
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 168) + 4 * v7) + 8);
  v11 = *(_DWORD *)v10;
  if ( HIDWORD(v10) == *(_DWORD *)(*(_DWORD *)v10 + 28) )
  {
    v32 = (_DWORD *)(a1 + 1696);
    v12 = sub_1889FC(a1 + 1696);
    v13 = *(_DWORD *)(a1 + 168);
    v9 = v12;
    *(_DWORD *)(v12 + 52) = 0;
    *(_DWORD *)(v12 + 36) = a4;
    v14 = *(_DWORD *)(v13 + 4 * v7);
    *(_WORD *)(v12 + 18) = *(_WORD *)(v11 + 18);
    *(_WORD *)v12 = *(_WORD *)v11;
    v15 = *(_DWORD *)(v14 + 12);
    *(_DWORD *)(v9 + 32) = a3;
    *(_BYTE *)(v9 + 16) = *(_BYTE *)(v11 + 16);
    v16 = *(_QWORD *)(v11 + 8);
    *(_DWORD *)(v9 + 40) = 0;
    *(_DWORD *)(v9 + 44) = 0;
    *(_DWORD *)(v9 + 48) = 0;
    *(_QWORD *)(v9 + 8) = v16;
    if ( v15 )
    {
      v17 = *(int **)(v14 + 8);
      v18 = 0;
      do
      {
        v19 = *v17++;
        --v15;
        v18 += *(_DWORD *)(v19 + 48);
        *(_DWORD *)(v9 + 48) = v18;
      }
      while ( v15 );
      v8 = (unsigned int)(v18 + 7) >> 3;
    }
    v20 = operator new[](v8);
    *(_DWORD *)(v9 + 52) = v20;
    v21 = *(_DWORD **)(v13 + 4 * v7);
    if ( v21[3] )
    {
      v22 = v21[2];
      v23 = 0;
      v24 = 0;
      while ( 1 )
      {
        j_memcpy(
          (void *)(v20 + v23),
          *(const void **)(*(_DWORD *)(v22 + 4 * v24) + 52),
          (unsigned int)(*(_DWORD *)(*(_DWORD *)(v22 + 4 * v24) + 48) + 7) >> 3);
        v25 = *v4;
        v21 = *(_DWORD **)(*v4 + 4 * v7);
        v26 = v21[3];
        if ( v24 + 1 >= v26 )
          break;
        v22 = v21[2];
        v27 = *(_DWORD *)(v22 + 4 * v24++);
        v28 = *(_DWORD *)(v27 + 48);
        v20 = *(_DWORD *)(v9 + 52);
        v23 += (unsigned int)(v28 + 7) >> 3;
      }
      if ( v26 )
      {
        v29 = 0;
        do
        {
          v30 = *(void **)(*(_DWORD *)(v21[2] + 4 * v29) + 52);
          if ( v30 )
          {
            operator delete[](v30);
            v25 = *v4;
          }
          sub_17E56C(v32, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v25 + 4 * v7) + 8) + 4 * v29));
          v25 = *v4;
          ++v29;
          v21 = *(_DWORD **)(*v4 + 4 * v7);
        }
        while ( v29 < v21[3] );
      }
    }
    sub_18A128(v21 + 2);
    operator delete(v21);
    sub_18B9EC(v4, v7);
  }
  return v9;
}


// ======================================================================
// ADDR: 0x188780
// SYMBOL: sub_188780
void **__fastcall sub_188780(void **result, int a2)
{
  unsigned int v2; // r5
  unsigned int v3; // r6
  void **v4; // r4
  int v5; // r0
  _DWORD *v6; // r10
  char *v7; // r0
  void *v8; // r0
  void *v9; // r9
  void *v10; // r8
  char *v11; // r0
  int v12; // r1
  int v13[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = *(unsigned __int8 *)(a2 + 16);
  v13[0] = a2;
  if ( v2 <= 0x1F )
  {
    v3 = (unsigned int)result[1];
    v4 = result;
    if ( v3 <= v2 || (v5 = *((_DWORD *)*result + v2)) == 0 )
    {
      v6 = (_DWORD *)operator new(0xCu);
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      if ( v3 <= v2 )
      {
        if ( (unsigned int)v4[2] <= v2 )
        {
          v4[2] = (void *)(v2 + 1);
          v8 = (void *)operator new[](4 * (v2 + 1));
          v9 = *v4;
          v10 = v8;
          j_memcpy(v8, *v4, 4 * v3);
          if ( v9 )
          {
            operator delete[](v9);
            v3 = (unsigned int)v4[1];
          }
          *v4 = v10;
        }
        if ( v3 < v2 )
        {
          do
            *((_DWORD *)*v4 + v3++) = 0;
          while ( v2 != v3 );
          v3 = v2;
        }
        v11 = (char *)*v4;
        v4[1] = (void *)(v3 + 1);
        v7 = &v11[4 * v3];
      }
      else
      {
        v7 = (char *)*v4 + 4 * v2;
      }
      *(_DWORD *)v7 = v6;
      v5 = *((_DWORD *)*v4 + *(unsigned __int8 *)(v13[0] + 16));
    }
    v12 = *(_DWORD *)(v5 + 4);
    if ( v12 )
      *(_DWORD *)(v5 + 8) = *(_DWORD *)(v12 + 4);
    return (void **)sub_18A02E(v5, v13);
  }
  return result;
}


// ======================================================================
// ADDR: 0x189d76
// SYMBOL: sub_189D76
int __fastcall sub_189D76(int a1, unsigned int a2, _DWORD *a3)
{
  int result; // r0
  int v5; // r5
  int v6; // r3
  int v7; // r4
  int v8; // r0
  int v9; // r4
  int v10; // r3
  unsigned int v11; // r6
  char v12; // [sp+Fh] [bp-19h] BYREF
  _BYTE v13[4]; // [sp+10h] [bp-18h] BYREF
  int v14; // [sp+14h] [bp-14h]

  result = 0;
  v5 = *(_DWORD *)(a1 + 16);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    v14 = 0;
    v12 = 0;
    if ( v5 == v6 )
    {
      v8 = *(_DWORD *)(v5 + 4) - 1;
      v9 = *(_DWORD *)(v5 + 4) / 2;
      v10 = 0;
      while ( 1 )
      {
        v11 = *(unsigned __int16 *)(v5 + 2 * v9 + 8);
        if ( v11 == a2 )
          break;
        if ( v11 <= a2 )
          v10 = v9 + 1;
        else
          v8 = v9 - 1;
        v9 = v10 + (v8 - v10) / 2;
        if ( v8 < v10 )
          return 0;
      }
      *a3 = *(_DWORD *)(v5 + 4 * v9 + 72);
      sub_18AC28(a1, v9, *(_DWORD *)(a1 + 16), v10);
      if ( !*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) )
      {
        sub_18A206(a1 + 4);
        sub_22178C(*(_DWORD *)(a1 + 16), 0x154u);
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 20) = 0;
      }
    }
    else
    {
      if ( !sub_18AC96(a1, a2, v5, &v12, *(unsigned __int16 *)(v5 + 8), v13, a3) )
        return 0;
      if ( v12 )
      {
        v7 = *(_DWORD *)(a1 + 16);
        if ( !*(_DWORD *)(v7 + 4) )
        {
          *(_DWORD *)(a1 + 16) = *(_DWORD *)(v7 + 208);
          sub_18A206(a1 + 4);
          sub_22178C(v7, 0x154u);
        }
      }
    }
    return 1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x189e52
// SYMBOL: sub_189E52
int __fastcall sub_189E52(int *a1, unsigned __int16 a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r3
  unsigned int v6; // r2
  int v7; // r0
  int result; // r0
  int v9; // t1
  __int16 v10; // r2
  bool v11; // cf
  _WORD *v12; // r2
  int v13; // r5
  unsigned int v14; // r12
  int v15; // r1
  _WORD *v16; // r1
  int v17; // t1
  int v18; // lr
  unsigned int v19; // r8
  bool v20; // zf
  _WORD v21[3]; // [sp+4h] [bp-24h] BYREF
  char v22; // [sp+Bh] [bp-1Dh] BYREF
  _WORD v23[3]; // [sp+Ch] [bp-1Ch] BYREF
  unsigned __int16 v24; // [sp+12h] [bp-16h] BYREF
  int v25[5]; // [sp+14h] [bp-14h] BYREF

  v3 = a1[1];
  v24 = a2;
  if ( !v3 )
  {
    v23[1] = a2;
    v12 = v23;
    v23[0] = a2;
    return sub_18B104(a1, &v24, v12);
  }
  v4 = sub_18B156(a1, &v24, &v22);
  v5 = a1[1];
  v6 = v4;
  if ( v4 != v5 )
  {
    v13 = *a1;
    v14 = *(unsigned __int16 *)(*a1 + 4 * v4);
    result = v14 - 1;
    if ( (int)(v14 - 1) > v24 )
    {
      v25[0] = v24 | (v24 << 16);
      return sub_18B1A0(a1, v25, v6);
    }
    if ( v14 - 1 == v24 )
    {
      *(_WORD *)(v13 + 4 * v6) = result;
      if ( !v6 )
        return result;
      result = (unsigned __int16)result;
      v15 = v13 + 4 * v6;
      v17 = *(unsigned __int16 *)(v15 - 2);
      v16 = (_WORD *)(v15 - 2);
      if ( v17 + 1 != (unsigned __int16)result )
        return result;
      *v16 = *(_WORD *)(v13 + 4 * v6 + 2);
    }
    else
    {
      v18 = v13 + 4 * v6;
      v19 = *(unsigned __int16 *)(v18 + 2);
      result = v24 < v14 || v24 > v19;
      v20 = result == 1;
      if ( result == 1 )
      {
        result = v19 + 1;
        v20 = v19 + 1 == v24;
      }
      if ( !v20 )
        return result;
      *(_WORD *)(v18 + 2) = result;
      if ( v6 >= v5 - 1 )
        return result;
      result = (unsigned __int16)result + 1;
      if ( result != *(unsigned __int16 *)(v13 + 4 * (v6 + 1)) )
        return result;
      *(_WORD *)(v13 + 4 * (v6 + 1)) = v14;
    }
    return sub_18B242(a1, v6);
  }
  v7 = *a1 + 4 * v4;
  v9 = *(unsigned __int16 *)(v7 - 2);
  result = v7 - 2;
  v10 = v9 + 1;
  v11 = v9 + 1 >= (unsigned int)v24;
  if ( v9 + 1 == v24 )
  {
    *(_WORD *)result = v10;
    return result;
  }
  if ( !v11 )
  {
    v21[1] = v24;
    v12 = v21;
    v21[0] = v24;
    return sub_18B104(a1, &v24, v12);
  }
  return result;
}


// ======================================================================
