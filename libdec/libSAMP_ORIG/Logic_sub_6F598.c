// ADDR: 0x6f00e
// SYMBOL: sub_6F00E
int __fastcall sub_6F00E(__int64 *a1)
{
  __int64 v2; // kr00_8
  int v3; // r4
  __int64 v4; // kr08_8
  size_t v5; // r2
  size_t v6; // r0
  __int64 v7; // r2
  int v8; // r0

  v2 = *(__int64 *)((char *)a1 + 12);
  v3 = (unsigned __int8)*(_BYTE *)HIDWORD(v2);
  if ( HIDWORD(v2) >= (unsigned int)v2 )
  {
    if ( !*((_BYTE *)a1 + 28) )
    {
      v4 = *a1;
      v5 = *((_DWORD *)a1 + 2);
      *((_DWORD *)a1 + 6) += *((_DWORD *)a1 + 5);
      v6 = fread((void *)HIDWORD(v4), 1u, v5, (FILE *)v4);
      v7 = *(__int64 *)((char *)a1 + 4);
      *((_DWORD *)a1 + 5) = v6;
      *((_DWORD *)a1 + 3) = v7 + v6 - 1;
      *((_DWORD *)a1 + 4) = v7;
      if ( v6 < HIDWORD(v7) )
      {
        *(_BYTE *)(v7 + v6) = 0;
        v8 = *((_DWORD *)a1 + 3);
        *((_BYTE *)a1 + 28) = 1;
        *((_DWORD *)a1 + 3) = v8 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a1 + 4) = HIDWORD(v2) + 1;
  }
  return v3;
}


// ======================================================================
// ADDR: 0x70f08
// SYMBOL: sub_70F08
int __fastcall sub_70F08(int a1, void *a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r5
  __int64 v9; // kr00_8
  int v10; // r1
  void *v11; // r0
  void *v13; // r9
  size_t v14; // r10
  int v15; // r0
  void *v16; // r9
  size_t v17; // r10
  int v18; // r0
  int v19; // r0
  int v20; // r5
  char *v21; // r0
  int v22; // r0
  int v23; // r5
  char *v24; // r0

  v9 = *(_QWORD *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 40);
  v8 = (char *)v9;
  v10 = v7 - v9;
  if ( a4 )
  {
    if ( v10 <= 15 )
    {
      v13 = *(void **)(a1 + 32);
      if ( v13 )
      {
        v14 = v7 - (_DWORD)v13 + ((unsigned int)(v7 - (_DWORD)v13 + 1) >> 1);
        v15 = *(_DWORD *)(a1 + 32);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 24) )
        {
          v19 = operator new(1u);
          *(_DWORD *)(a1 + 24) = v19;
          *(_DWORD *)(a1 + 28) = v19;
        }
        v14 = *(_DWORD *)(a1 + 44);
        v15 = 0;
      }
      v20 = v9 - v15;
      if ( v14 < (int)v9 - v15 + 16 )
        v14 = v20 + 16;
      if ( v14 )
      {
        v21 = (char *)realloc(v13, v14);
      }
      else
      {
        free(v13);
        v21 = 0;
      }
      v8 = &v21[v20];
      *(_DWORD *)(a1 + 40) = &v21[v14];
      *(_DWORD *)(a1 + 32) = v21;
    }
    *(_DWORD *)(a1 + 36) = v8 + 16;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    sub_71334(v8);
  }
  else
  {
    if ( v10 <= 15 )
    {
      v16 = *(void **)(a1 + 32);
      if ( v16 )
      {
        v17 = v7 - (_DWORD)v16 + ((unsigned int)(v7 - (_DWORD)v16 + 1) >> 1);
        v18 = *(_DWORD *)(a1 + 32);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 24) )
        {
          v22 = operator new(1u);
          *(_DWORD *)(a1 + 24) = v22;
          *(_DWORD *)(a1 + 28) = v22;
        }
        v17 = *(_DWORD *)(a1 + 44);
        v18 = 0;
      }
      v23 = v9 - v18;
      if ( v17 < (int)v9 - v18 + 16 )
        v17 = v23 + 16;
      if ( v17 )
      {
        v24 = (char *)realloc(v16, v17);
      }
      else
      {
        free(v16);
        v24 = 0;
      }
      v8 = &v24[v23];
      *(_DWORD *)(a1 + 40) = &v24[v17];
      *(_DWORD *)(a1 + 32) = v24;
    }
    *(_DWORD *)(a1 + 36) = v8 + 16;
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
    v11 = &unk_50F8C;
    *((_WORD *)v8 + 7) = 1029;
    *(_DWORD *)v8 = a3;
    if ( a2 )
      v11 = a2;
    *((_DWORD *)v8 + 2) = v11;
  }
  return 1;
}


// ======================================================================
// ADDR: 0x71068
// SYMBOL: sub_71068
int __fastcall sub_71068(int a1, __int64 *a2, int a3)
{
  int v4; // r5
  int v5; // r4
  unsigned __int8 *v6; // r0
  int v7; // r8
  int v8; // r9
  __int64 v9; // kr00_8
  size_t v10; // r2
  size_t v11; // r0
  __int64 v12; // kr08_8
  int v13; // r0

  v4 = 4;
  v5 = 0;
  while ( 1 )
  {
    v6 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
    v7 = *v6;
    if ( (unsigned int)(v7 - 48) >= 0xA )
      break;
    v8 = -48;
LABEL_10:
    if ( (unsigned int)v6 < *((_DWORD *)a2 + 3) )
    {
      *((_DWORD *)a2 + 4) = v6 + 1;
    }
    else if ( !*((_BYTE *)a2 + 28) )
    {
      v9 = *a2;
      v10 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v11 = fread((void *)HIDWORD(v9), 1u, v10, (FILE *)v9);
      v12 = *(__int64 *)((char *)a2 + 4);
      *((_DWORD *)a2 + 5) = v11;
      *((_DWORD *)a2 + 3) = v12 + v11 - 1;
      *((_DWORD *)a2 + 4) = v12;
      if ( v11 < HIDWORD(v12) )
      {
        *(_BYTE *)(v12 + v11) = 0;
        v13 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        *((_DWORD *)a2 + 3) = v13 + 1;
      }
    }
    --v4;
    v5 = v7 + 16 * v5 + v8;
    if ( !v4 )
      return v5;
  }
  if ( (unsigned int)(v7 - 65) < 6 )
  {
    v8 = -55;
    goto LABEL_10;
  }
  if ( (unsigned int)(v7 - 97) <= 5 )
  {
    v8 = -87;
    goto LABEL_10;
  }
  v5 = 0;
  *(_DWORD *)(a1 + 24) = 8;
  *(_DWORD *)(a1 + 28) = a3;
  return v5;
}


// ======================================================================
// ADDR: 0x71120
// SYMBOL: sub_71120
int __fastcall sub_71120(int *a1, unsigned int a2)
{
  int v4; // r6
  __int64 v5; // r0
  int *v6; // r5
  int v7; // r6
  unsigned int v8; // r5
  __int64 v9; // r0
  int v10; // r0
  int v11; // r4
  _BYTE *v12; // r0
  char v13; // r8
  int v14; // r6
  unsigned int v15; // r5
  __int64 v16; // r0
  int v17; // r10
  unsigned int v18; // r6
  __int64 v19; // r0
  int v20; // r6
  unsigned int v21; // r5
  __int64 v22; // r0
  int v23; // r10
  __int64 v24; // r0
  char v25; // r6
  int v26; // r6
  int result; // r0

  if ( a2 > 0x7F )
  {
    if ( a2 >> 11 )
    {
      if ( HIWORD(a2) )
      {
        v20 = *a1;
        v21 = (a2 >> 18) | 0xFFFFFFF0;
        v22 = *(_QWORD *)(*a1 + 12);
        if ( HIDWORD(v22) - (int)v22 <= 0 )
        {
          sub_712D0(*a1, 1);
          LODWORD(v22) = *(_DWORD *)(v20 + 12);
        }
        *(_DWORD *)(v20 + 12) = v22 + 1;
        *(_BYTE *)v22 = v21;
        v6 = a1 + 1;
        v23 = *a1;
        ++a1[1];
        v24 = *(_QWORD *)(v23 + 12);
        if ( HIDWORD(v24) - (int)v24 <= 0 )
        {
          sub_712D0(v23, 1);
          LODWORD(v24) = *(_DWORD *)(v23 + 12);
        }
        *(_DWORD *)(v23 + 12) = v24 + 1;
        *(_BYTE *)v24 = (a2 >> 12) & 0x3F | 0x80;
        v18 = a2 >> 6;
        v17 = *a1;
        ++a1[1];
        v19 = *(_QWORD *)(v17 + 12);
      }
      else
      {
        v14 = *a1;
        v15 = (a2 >> 12) | 0xFFFFFFE0;
        v16 = *(_QWORD *)(*a1 + 12);
        if ( HIDWORD(v16) - (int)v16 <= 0 )
        {
          sub_712D0(*a1, 1);
          LODWORD(v16) = *(_DWORD *)(v14 + 12);
        }
        *(_DWORD *)(v14 + 12) = v16 + 1;
        *(_BYTE *)v16 = v15;
        v6 = a1 + 1;
        v17 = *a1;
        v18 = a2 >> 6;
        ++a1[1];
        v19 = *(_QWORD *)(v17 + 12);
      }
      v25 = v18 & 0x3F | 0x80;
      if ( HIDWORD(v19) - (int)v19 <= 0 )
      {
        sub_712D0(v17, 1);
        LODWORD(v19) = *(_DWORD *)(v17 + 12);
      }
      *(_DWORD *)(v17 + 12) = v19 + 1;
      *(_BYTE *)v19 = v25;
      v13 = a2 & 0x3F | 0x80;
      v26 = *a1;
      ++a1[1];
      v12 = *(_BYTE **)(v26 + 12);
      if ( *(_DWORD *)(v26 + 16) - (int)v12 <= 0 )
      {
        sub_712D0(v26, 1);
        v12 = *(_BYTE **)(v26 + 12);
      }
      *(_DWORD *)(v26 + 12) = v12 + 1;
    }
    else
    {
      v7 = *a1;
      v8 = (a2 >> 6) | 0xFFFFFFC0;
      v9 = *(_QWORD *)(*a1 + 12);
      if ( HIDWORD(v9) - (int)v9 <= 0 )
      {
        sub_712D0(*a1, 1);
        LODWORD(v9) = *(_DWORD *)(v7 + 12);
      }
      *(_DWORD *)(v7 + 12) = v9 + 1;
      *(_BYTE *)v9 = v8;
      v6 = a1 + 1;
      v10 = a1[1];
      v11 = *a1;
      *v6 = v10 + 1;
      v12 = *(_BYTE **)(v11 + 12);
      v13 = a2 & 0x3F | 0x80;
      if ( *(_DWORD *)(v11 + 16) - (int)v12 <= 0 )
      {
        sub_712D0(v11, 1);
        v12 = *(_BYTE **)(v11 + 12);
      }
      *(_DWORD *)(v11 + 12) = v12 + 1;
    }
    *v12 = v13;
  }
  else
  {
    v4 = *a1;
    v5 = *(_QWORD *)(*a1 + 12);
    if ( HIDWORD(v5) - (int)v5 <= 0 )
    {
      sub_712D0(*a1, 1);
      LODWORD(v5) = *(_DWORD *)(v4 + 12);
    }
    *(_DWORD *)(v4 + 12) = v5 + 1;
    *(_BYTE *)v5 = a2;
    v6 = a1 + 1;
  }
  result = *v6 + 1;
  *v6 = result;
  return result;
}


// ======================================================================
// ADDR: 0x712d0
// SYMBOL: sub_712D0
char *__fastcall sub_712D0(_DWORD *a1, int a2)
{
  void *v2; // r5
  size_t v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r9
  char *result; // r0

  v2 = (void *)a1[2];
  if ( v2 )
  {
    v5 = a1[4] - (_DWORD)v2 + ((unsigned int)(a1[4] - (_DWORD)v2 + 1) >> 1);
    v6 = a1[2];
  }
  else
  {
    if ( !*a1 )
    {
      v7 = operator new(1u);
      *a1 = v7;
      a1[1] = v7;
    }
    v5 = a1[5];
    v6 = 0;
  }
  v8 = a1[3] - v6;
  if ( v5 < v8 + a2 )
    v5 = v8 + a2;
  if ( v5 )
  {
    result = (char *)realloc(v2, v5);
  }
  else
  {
    free(v2);
    result = 0;
  }
  a1[4] = &result[v5];
  a1[2] = result;
  a1[3] = &result[v8];
  return result;
}


// ======================================================================
// ADDR: 0x71334
// SYMBOL: sub_71334
int __fastcall sub_71334(_WORD *dest, int a2, unsigned int *a3)
{
  char *v5; // r6
  int v6; // r0
  _DWORD *v7; // r11
  unsigned int v8; // r9
  _DWORD *v10; // r10
  _DWORD *v11; // r1
  unsigned int v12; // r6
  unsigned int v13; // r0
  unsigned int v14; // r8
  _DWORD *v15; // r0
  int result; // r0

  if ( *(_DWORD *)(a2 + 4) > 0xDu )
  {
    dest[7] = 3077;
    *(_DWORD *)dest = *(_DWORD *)(a2 + 4);
    v6 = *(_DWORD *)(a2 + 4);
    if ( v6 != -1 )
    {
      v7 = (_DWORD *)a3[2];
      v8 = (v6 + 8) & 0xFFFFFFF8;
      v10 = (_DWORD *)*v7;
      v5 = *(char **)(*v7 + 4);
      if ( (unsigned int)&v5[v8] <= *(_DWORD *)*v7 )
      {
        v11 = v10 + 1;
        goto LABEL_6;
      }
      v12 = *a3;
      if ( *a3 <= v8 )
        v12 = (v6 + 8) & 0xFFFFFFF8;
      if ( !a3[1] )
      {
        v13 = operator new(1u);
        a3[1] = v13;
        v7[1] = v13;
      }
      if ( v12 != -16 )
      {
        v14 = v12;
        v15 = malloc(v12 + 16);
        v5 = 0;
        if ( !v15 )
          goto LABEL_15;
        v15[2] = v10;
        v15[1] = 0;
        v11 = v15 + 1;
        v10 = v15;
        *v15 = v14;
        *v7 = v15;
LABEL_6:
        *v11 = &v5[v8];
        v5 = &v5[(_DWORD)v10 + 16];
LABEL_15:
        *((_DWORD *)dest + 2) = v5;
        goto LABEL_16;
      }
    }
    v5 = 0;
    goto LABEL_15;
  }
  v5 = (char *)dest;
  dest[7] = 7173;
  *((_BYTE *)dest + 13) = 13 - *(_BYTE *)(a2 + 4);
LABEL_16:
  j_memcpy(v5, *(const void **)a2, *(_DWORD *)(a2 + 4));
  result = *(_DWORD *)(a2 + 4);
  v5[result] = 0;
  return result;
}


// ======================================================================
