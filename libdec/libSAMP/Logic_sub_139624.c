// ADDR: 0x139754
// SYMBOL: sub_139754
int __fastcall sub_139754(int a1, _DWORD *a2)
{
  char *v3; // r5
  char *v5; // r6
  char *v6; // r10
  bool v7; // zf
  size_t v8; // r9
  int v9; // kr00_4
  char *v10; // r5
  unsigned int v11; // r9
  int v12; // r0
  char *v13; // lr
  int v14; // r1
  int v15; // r3
  _DWORD *v16; // r1
  int v17; // t1
  int result; // r0

  v3 = *(char **)(a1 + 8);
  if ( v3 == *(char **)(a1 + 12) )
  {
    v5 = *(char **)(a1 + 4);
    v6 = *(char **)a1;
    if ( (unsigned int)v5 <= *(_DWORD *)a1 )
    {
      v11 = (v3 - v6) >> 1;
      if ( v3 == v6 )
        v11 = 1;
      if ( v11 >= 0x40000000 )
        sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      v12 = operator new(4 * v11);
      v13 = (char *)(v12 + (v11 & 0x3FFFFFFC));
      v14 = v3 - v5;
      v7 = v3 == v5;
      v3 = v13;
      if ( !v7 )
      {
        v3 = &v13[v14 & 0xFFFFFFFC];
        v15 = 4 * (v14 >> 2);
        v16 = (_DWORD *)(v12 + (v11 & 0x3FFFFFFC));
        do
        {
          v17 = *(_DWORD *)v5;
          v5 += 4;
          v15 -= 4;
          *v16++ = v17;
        }
        while ( v15 );
      }
      *(_DWORD *)a1 = v12;
      *(_DWORD *)(a1 + 4) = v13;
      *(_DWORD *)(a1 + 8) = v3;
      *(_DWORD *)(a1 + 12) = v12 + 4 * v11;
      if ( v6 )
      {
        operator delete(v6);
        v3 = *(char **)(a1 + 8);
      }
    }
    else
    {
      v8 = v3 - v5;
      v7 = v3 == v5;
      v9 = ((v5 - v6) >> 2) + 1;
      v10 = &v5[-4 * (v9 / 2)];
      if ( !v7 )
      {
        j_memmove(&v5[-4 * (v9 / 2)], v5, v8);
        v5 = *(char **)(a1 + 4);
      }
      v3 = &v10[v8];
      *(_DWORD *)(a1 + 4) = &v5[4 * (v9 / -2)];
      *(_DWORD *)(a1 + 8) = v3;
    }
  }
  *(_DWORD *)v3 = *a2;
  result = *(_DWORD *)(a1 + 8) + 4;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0x13982c
// SYMBOL: sub_13982C
int __fastcall sub_13982C(int a1, _DWORD *a2)
{
  char *v3; // r5
  char *v5; // r6
  char *v6; // r10
  bool v7; // zf
  size_t v8; // r9
  int v9; // kr00_4
  char *v10; // r5
  unsigned int v11; // r9
  int v12; // r0
  char *v13; // lr
  int v14; // r1
  int v15; // r3
  _DWORD *v16; // r1
  int v17; // t1
  int result; // r0

  v3 = *(char **)(a1 + 8);
  if ( v3 == *(char **)(a1 + 12) )
  {
    v5 = *(char **)(a1 + 4);
    v6 = *(char **)a1;
    if ( (unsigned int)v5 <= *(_DWORD *)a1 )
    {
      v11 = (v3 - v6) >> 1;
      if ( v3 == v6 )
        v11 = 1;
      if ( v11 >= 0x40000000 )
        sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      v12 = operator new(4 * v11);
      v13 = (char *)(v12 + (v11 & 0x3FFFFFFC));
      v14 = v3 - v5;
      v7 = v3 == v5;
      v3 = v13;
      if ( !v7 )
      {
        v3 = &v13[v14 & 0xFFFFFFFC];
        v15 = 4 * (v14 >> 2);
        v16 = (_DWORD *)(v12 + (v11 & 0x3FFFFFFC));
        do
        {
          v17 = *(_DWORD *)v5;
          v5 += 4;
          v15 -= 4;
          *v16++ = v17;
        }
        while ( v15 );
      }
      *(_DWORD *)a1 = v12;
      *(_DWORD *)(a1 + 4) = v13;
      *(_DWORD *)(a1 + 8) = v3;
      *(_DWORD *)(a1 + 12) = v12 + 4 * v11;
      if ( v6 )
      {
        operator delete(v6);
        v3 = *(char **)(a1 + 8);
      }
    }
    else
    {
      v8 = v3 - v5;
      v7 = v3 == v5;
      v9 = ((v5 - v6) >> 2) + 1;
      v10 = &v5[-4 * (v9 / 2)];
      if ( !v7 )
      {
        j_memmove(&v5[-4 * (v9 / 2)], v5, v8);
        v5 = *(char **)(a1 + 4);
      }
      v3 = &v10[v8];
      *(_DWORD *)(a1 + 4) = &v5[4 * (v9 / -2)];
      *(_DWORD *)(a1 + 8) = v3;
    }
  }
  *(_DWORD *)v3 = *a2;
  result = *(_DWORD *)(a1 + 8) + 4;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0x139904
// SYMBOL: sub_139904
int __fastcall sub_139904(int a1, _DWORD *a2)
{
  int *v3; // r11
  char *v5; // r10
  unsigned int v6; // r0
  int v7; // r9
  __int64 v8; // kr08_8
  size_t v9; // r2
  int v10; // kr00_4
  int v11; // r0
  unsigned int v12; // r5
  unsigned int v13; // r6
  int v14; // r0
  int v15; // r3
  int v16; // r12
  char *v17; // r2
  int v18; // r3
  _DWORD *v19; // r5
  int *v20; // r6
  int v21; // t1
  int result; // r0

  v3 = *(int **)(a1 + 4);
  if ( v3 == *(int **)a1 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 12);
    v7 = v8;
    if ( (unsigned int)v8 >= v6 )
    {
      v11 = v6 - (_DWORD)v3;
      v12 = v11 >> 1;
      if ( !v11 )
        v12 = 1;
      if ( v12 >= 0x40000000 )
        sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      v13 = (v12 + 3) & 0xFFFFFFFC;
      v14 = operator new(4 * v12);
      v5 = (char *)(v14 + v13);
      v15 = v8 - (_DWORD)v3;
      v16 = v14 + 4 * v12;
      v17 = (char *)(v14 + v13);
      if ( (int *)v8 != v3 )
      {
        v17 = &v5[v15 & 0xFFFFFFFC];
        v18 = 4 * (v15 >> 2);
        v19 = (_DWORD *)(v14 + v13);
        v20 = v3;
        do
        {
          v21 = *v20++;
          v18 -= 4;
          *v19++ = v21;
        }
        while ( v18 );
      }
      *(_DWORD *)a1 = v14;
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = v17;
      *(_DWORD *)(a1 + 12) = v16;
      if ( v3 )
      {
        operator delete(v3);
        v5 = *(char **)(a1 + 4);
      }
    }
    else
    {
      v9 = v8 - (_DWORD)v3;
      v10 = ((int)(v6 - v8) >> 2) + 1;
      v5 = (char *)(v8 + 4 * (v10 / 2));
      if ( (int *)v8 != v3 )
      {
        v5 -= v9;
        j_memmove(v5, *(const void **)(a1 + 4), v9);
        v7 = *(_DWORD *)(a1 + 8);
      }
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = v7 + 4 * (v10 / 2);
    }
  }
  else
  {
    v5 = *(char **)(a1 + 4);
  }
  *((_DWORD *)v5 - 1) = *a2;
  result = *(_DWORD *)(a1 + 4) - 4;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}


// ======================================================================
// ADDR: 0x1399e0
// SYMBOL: sub_1399E0
int __fastcall sub_1399E0(int a1, _DWORD *a2)
{
  char *v3; // r5
  char *v5; // r6
  char *v6; // r10
  bool v7; // zf
  size_t v8; // r9
  int v9; // kr00_4
  char *v10; // r5
  unsigned int v11; // r9
  int v12; // r0
  char *v13; // lr
  int v14; // r1
  int v15; // r3
  _DWORD *v16; // r1
  int v17; // t1
  int result; // r0

  v3 = *(char **)(a1 + 8);
  if ( v3 == *(char **)(a1 + 12) )
  {
    v5 = *(char **)(a1 + 4);
    v6 = *(char **)a1;
    if ( (unsigned int)v5 <= *(_DWORD *)a1 )
    {
      v11 = (v3 - v6) >> 1;
      if ( v3 == v6 )
        v11 = 1;
      if ( v11 >= 0x40000000 )
        sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      v12 = operator new(4 * v11);
      v13 = (char *)(v12 + (v11 & 0x3FFFFFFC));
      v14 = v3 - v5;
      v7 = v3 == v5;
      v3 = v13;
      if ( !v7 )
      {
        v3 = &v13[v14 & 0xFFFFFFFC];
        v15 = 4 * (v14 >> 2);
        v16 = (_DWORD *)(v12 + (v11 & 0x3FFFFFFC));
        do
        {
          v17 = *(_DWORD *)v5;
          v5 += 4;
          v15 -= 4;
          *v16++ = v17;
        }
        while ( v15 );
      }
      *(_DWORD *)a1 = v12;
      *(_DWORD *)(a1 + 4) = v13;
      *(_DWORD *)(a1 + 8) = v3;
      *(_DWORD *)(a1 + 12) = v12 + 4 * v11;
      if ( v6 )
      {
        operator delete(v6);
        v3 = *(char **)(a1 + 8);
      }
    }
    else
    {
      v8 = v3 - v5;
      v7 = v3 == v5;
      v9 = ((v5 - v6) >> 2) + 1;
      v10 = &v5[-4 * (v9 / 2)];
      if ( !v7 )
      {
        j_memmove(&v5[-4 * (v9 / 2)], v5, v8);
        v5 = *(char **)(a1 + 4);
      }
      v3 = &v10[v8];
      *(_DWORD *)(a1 + 4) = &v5[4 * (v9 / -2)];
      *(_DWORD *)(a1 + 8) = v3;
    }
  }
  *(_DWORD *)v3 = *a2;
  result = *(_DWORD *)(a1 + 8) + 4;
  *(_DWORD *)(a1 + 8) = result;
  return result;
}


// ======================================================================
// ADDR: 0x139ab8
// SYMBOL: sub_139AB8
int __fastcall sub_139AB8(int a1, _DWORD *a2)
{
  int *v3; // r11
  char *v5; // r10
  unsigned int v6; // r0
  int v7; // r9
  __int64 v8; // kr08_8
  size_t v9; // r2
  int v10; // kr00_4
  int v11; // r0
  unsigned int v12; // r5
  unsigned int v13; // r6
  int v14; // r0
  int v15; // r3
  int v16; // r12
  char *v17; // r2
  int v18; // r3
  _DWORD *v19; // r5
  int *v20; // r6
  int v21; // t1
  int result; // r0

  v3 = *(int **)(a1 + 4);
  if ( v3 == *(int **)a1 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v6 = *(_DWORD *)(a1 + 12);
    v7 = v8;
    if ( (unsigned int)v8 >= v6 )
    {
      v11 = v6 - (_DWORD)v3;
      v12 = v11 >> 1;
      if ( !v11 )
        v12 = 1;
      if ( v12 >= 0x40000000 )
        sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      v13 = (v12 + 3) & 0xFFFFFFFC;
      v14 = operator new(4 * v12);
      v5 = (char *)(v14 + v13);
      v15 = v8 - (_DWORD)v3;
      v16 = v14 + 4 * v12;
      v17 = (char *)(v14 + v13);
      if ( (int *)v8 != v3 )
      {
        v17 = &v5[v15 & 0xFFFFFFFC];
        v18 = 4 * (v15 >> 2);
        v19 = (_DWORD *)(v14 + v13);
        v20 = v3;
        do
        {
          v21 = *v20++;
          v18 -= 4;
          *v19++ = v21;
        }
        while ( v18 );
      }
      *(_DWORD *)a1 = v14;
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = v17;
      *(_DWORD *)(a1 + 12) = v16;
      if ( v3 )
      {
        operator delete(v3);
        v5 = *(char **)(a1 + 4);
      }
    }
    else
    {
      v9 = v8 - (_DWORD)v3;
      v10 = ((int)(v6 - v8) >> 2) + 1;
      v5 = (char *)(v8 + 4 * (v10 / 2));
      if ( (int *)v8 != v3 )
      {
        v5 -= v9;
        j_memmove(v5, *(const void **)(a1 + 4), v9);
        v7 = *(_DWORD *)(a1 + 8);
      }
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = v7 + 4 * (v10 / 2);
    }
  }
  else
  {
    v5 = *(char **)(a1 + 4);
  }
  *((_DWORD *)v5 - 1) = *a2;
  result = *(_DWORD *)(a1 + 4) - 4;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}


// ======================================================================
