// ADDR: 0x77d8a
// SYMBOL: sub_77D8A
int *__fastcall sub_77D8A(int *result, int *a2)
{
  int v2; // r3
  int *v3; // lr
  int *v4; // r2
  _BYTE *v5; // r2
  int v6; // t1
  int v7; // r2
  int v8; // t1
  int *v9; // r1
  int v10; // r0
  int *v11; // r2
  _DWORD *v12; // r2
  int v13; // t1
  int v14; // r0
  int *v15; // r2
  int **v16; // r2
  int v17; // t1
  int v18; // r1
  int **v19; // r1
  int **v20; // r3
  int **v21; // r3
  int *v22; // t1
  int v23; // r1
  int **v24; // r3
  int **v25; // r3
  int *v26; // t1

  *((_BYTE *)a2 + 12) = a2 == result;
  if ( a2 != result )
  {
    do
    {
      v2 = a2[2];
      if ( *(_BYTE *)(v2 + 12) )
        return result;
      v3 = *(int **)(v2 + 8);
      v4 = (int *)*v3;
      if ( *v3 == v2 )
      {
        v7 = v3[1];
        if ( !v7 || (v8 = *(unsigned __int8 *)(v7 + 12), v5 = (_BYTE *)(v7 + 12), v8) )
        {
          if ( *(int **)v2 == a2 )
          {
            v9 = (int *)a2[2];
          }
          else
          {
            v9 = *(int **)(v2 + 4);
            v10 = *v9;
            *(_DWORD *)(v2 + 4) = *v9;
            if ( v10 )
            {
              *(_DWORD *)(v10 + 8) = v2;
              v3 = *(int **)(v2 + 8);
            }
            v9[2] = (int)v3;
            v11 = *(int **)(v2 + 8);
            v13 = *v11;
            v12 = v11 + 1;
            if ( v13 == v2 )
              v12 = *(_DWORD **)(v2 + 8);
            *v12 = v9;
            *(_DWORD *)(v2 + 8) = v9;
            v3 = (int *)v9[2];
            *v9 = v2;
          }
          result = (int *)*v3;
          *((_BYTE *)v9 + 12) = 1;
          *((_BYTE *)v3 + 12) = 0;
          v23 = result[1];
          *v3 = v23;
          if ( v23 )
            *(_DWORD *)(v23 + 8) = v3;
          v19 = (int **)(v3 + 2);
          result[2] = v3[2];
          v24 = (int **)v3[2];
          v26 = *v24;
          v25 = v24 + 1;
          if ( v26 == v3 )
            v25 = (int **)v3[2];
          *v25 = result;
          result[1] = (int)v3;
          goto LABEL_35;
        }
      }
      else if ( !v4 || (v6 = *((unsigned __int8 *)v4 + 12), v5 = v4 + 3, v6) )
      {
        if ( *(int **)v2 == a2 )
        {
          v14 = a2[1];
          *(_DWORD *)v2 = v14;
          if ( v14 )
          {
            *(_DWORD *)(v14 + 8) = v2;
            v3 = *(int **)(v2 + 8);
          }
          a2[2] = (int)v3;
          v15 = *(int **)(v2 + 8);
          v17 = *v15;
          v16 = (int **)(v15 + 1);
          if ( v17 == v2 )
            v16 = *(int ***)(v2 + 8);
          *v16 = a2;
          *(_DWORD *)(v2 + 8) = a2;
          v3 = (int *)a2[2];
          a2[1] = v2;
        }
        else
        {
          a2 = (int *)a2[2];
        }
        result = (int *)v3[1];
        *((_BYTE *)a2 + 12) = 1;
        *((_BYTE *)v3 + 12) = 0;
        v18 = *result;
        v3[1] = *result;
        if ( v18 )
          *(_DWORD *)(v18 + 8) = v3;
        v19 = (int **)(v3 + 2);
        result[2] = v3[2];
        v20 = (int **)v3[2];
        v22 = *v20;
        v21 = v20 + 1;
        if ( v22 == v3 )
          v21 = (int **)v3[2];
        *v21 = result;
        *result = (int)v3;
LABEL_35:
        *v19 = result;
        return result;
      }
      *(_BYTE *)(v2 + 12) = 1;
      *((_BYTE *)v3 + 12) = v3 == result;
      a2 = v3;
      *v5 = 1;
    }
    while ( v3 != result );
  }
  return result;
}


// ======================================================================
// ADDR: 0x77ed2
// SYMBOL: sub_77ED2
int *__fastcall sub_77ED2(int a1, _DWORD *a2, unsigned __int8 *a3)
{
  int *v3; // r5
  int *v4; // r10
  unsigned int v5; // r1
  const void *v6; // r9
  size_t v7; // r11
  int *v8; // r0
  size_t v9; // r4
  unsigned int v10; // r2
  size_t v11; // r8
  const void *v12; // r6
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r0

  v3 = (int *)(a1 + 4);
  v4 = *(int **)(a1 + 4);
  if ( !v4 )
  {
    *a2 = v3;
    return v3;
  }
  v3 = (int *)(a1 + 4);
  v5 = *a3;
  v6 = (const void *)*((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 1);
  if ( (v5 & 1) == 0 )
  {
    v6 = a3 + 1;
    v7 = v5 >> 1;
  }
  while ( 1 )
  {
    v9 = v7;
    v10 = *((unsigned __int8 *)v4 + 16);
    v11 = v4[5];
    if ( (v10 & 1) == 0 )
      v11 = v10 >> 1;
    if ( v11 < v7 )
      v9 = v11;
    if ( !v9 )
    {
      if ( v7 < v11 )
        goto LABEL_5;
LABEL_23:
      if ( v11 >= v7 )
        goto LABEL_26;
      goto LABEL_24;
    }
    v12 = (const void *)v4[6];
    if ( (v10 & 1) == 0 )
      v12 = (char *)v4 + 17;
    v13 = memcmp(v6, v12, v9);
    if ( !v13 )
      break;
    if ( v13 <= -1 )
      goto LABEL_5;
LABEL_20:
    v14 = memcmp(v12, v6, v9);
    if ( !v14 )
      goto LABEL_23;
    if ( v14 > -1 )
      goto LABEL_26;
LABEL_24:
    v3 = v4 + 1;
    v8 = (int *)v4[1];
    if ( !v8 )
    {
LABEL_26:
      v15 = a2;
      goto LABEL_29;
    }
    ++v4;
LABEL_6:
    v3 = v4;
    v4 = v8;
  }
  if ( v7 >= v11 )
    goto LABEL_20;
LABEL_5:
  v8 = (int *)*v4;
  if ( *v4 )
    goto LABEL_6;
  v15 = a2;
  v3 = v4;
LABEL_29:
  *v15 = v4;
  return v3;
}


// ======================================================================
// ADDR: 0x77f90
// SYMBOL: sub_77F90
int __fastcall sub_77F90(int a1, unsigned __int8 *a2)
{
  unsigned int v3; // r0
  int v4; // r6
  int v5; // r8
  int v6; // t1
  const void *v7; // r9
  size_t v8; // r10
  int v9; // r5
  int v10; // r0
  bool v11; // nf
  int *v12; // r0
  int v13; // r0
  unsigned int v14; // r0
  size_t v15; // r4
  int v16; // r3
  size_t v17; // r2
  const void *v18; // r0
  size_t v19; // r2
  unsigned int v20; // r1
  size_t v21; // r4
  int v22; // r3
  const void *v23; // r1
  int v24; // r0

  v3 = *a2;
  v6 = *(_DWORD *)(a1 + 4);
  v5 = a1 + 4;
  v4 = v6;
  v7 = (const void *)*((_DWORD *)a2 + 2);
  v8 = *((_DWORD *)a2 + 1);
  if ( (v3 & 1) == 0 )
  {
    v7 = a2 + 1;
    v8 = v3 >> 1;
  }
  if ( !v4 )
    return v5;
  v9 = v5;
  do
  {
    v14 = *(unsigned __int8 *)(v4 + 16);
    v15 = *(_DWORD *)(v4 + 20);
    v16 = v14 & 1;
    if ( (v14 & 1) == 0 )
      v15 = v14 >> 1;
    v17 = v15;
    if ( v8 < v15 )
      v17 = v8;
    if ( !v17 )
      goto LABEL_5;
    v18 = *(const void **)(v4 + 24);
    if ( !v16 )
      v18 = (const void *)(v4 + 17);
    v10 = memcmp(v18, v7, v17);
    if ( !v10 )
    {
LABEL_5:
      v10 = v8 < v15;
      if ( v15 < v8 )
        v10 = -1;
    }
    v11 = v10 < 0;
    v12 = (int *)v4;
    if ( v11 )
      v12 = (int *)(v4 + 4);
    v13 = *v12;
    if ( !v11 )
      v9 = v4;
    v4 = v13;
  }
  while ( v13 );
  if ( v9 == v5 )
    return v5;
  v19 = v8;
  v20 = *(unsigned __int8 *)(v9 + 16);
  v21 = *(_DWORD *)(v9 + 20);
  v22 = v20 & 1;
  if ( (v20 & 1) == 0 )
    v21 = v20 >> 1;
  if ( v21 < v8 )
    v19 = v21;
  if ( !v19 )
    goto LABEL_32;
  v23 = *(const void **)(v9 + 24);
  if ( !v22 )
    v23 = (const void *)(v9 + 17);
  v24 = memcmp(v7, v23, v19);
  if ( v24 )
  {
    if ( v24 <= -1 )
      return v5;
  }
  else
  {
LABEL_32:
    if ( v8 < v21 )
      return v5;
  }
  return v9;
}


// ======================================================================
// ADDR: 0x78052
// SYMBOL: sub_78052
int *__fastcall sub_78052(int a1, _DWORD *a2, unsigned __int8 *a3)
{
  int *v3; // r5
  int *v4; // r10
  unsigned int v5; // r1
  const void *v6; // r9
  size_t v7; // r11
  int *v8; // r0
  size_t v9; // r4
  unsigned int v10; // r2
  size_t v11; // r8
  const void *v12; // r6
  int v13; // r0
  int v14; // r0
  _DWORD *v15; // r0

  v3 = (int *)(a1 + 4);
  v4 = *(int **)(a1 + 4);
  if ( !v4 )
  {
    *a2 = v3;
    return v3;
  }
  v3 = (int *)(a1 + 4);
  v5 = *a3;
  v6 = (const void *)*((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 1);
  if ( (v5 & 1) == 0 )
  {
    v6 = a3 + 1;
    v7 = v5 >> 1;
  }
  while ( 1 )
  {
    v9 = v7;
    v10 = *((unsigned __int8 *)v4 + 16);
    v11 = v4[5];
    if ( (v10 & 1) == 0 )
      v11 = v10 >> 1;
    if ( v11 < v7 )
      v9 = v11;
    if ( !v9 )
    {
      if ( v7 < v11 )
        goto LABEL_5;
LABEL_23:
      if ( v11 >= v7 )
        goto LABEL_26;
      goto LABEL_24;
    }
    v12 = (const void *)v4[6];
    if ( (v10 & 1) == 0 )
      v12 = (char *)v4 + 17;
    v13 = memcmp(v6, v12, v9);
    if ( !v13 )
      break;
    if ( v13 <= -1 )
      goto LABEL_5;
LABEL_20:
    v14 = memcmp(v12, v6, v9);
    if ( !v14 )
      goto LABEL_23;
    if ( v14 > -1 )
      goto LABEL_26;
LABEL_24:
    v3 = v4 + 1;
    v8 = (int *)v4[1];
    if ( !v8 )
    {
LABEL_26:
      v15 = a2;
      goto LABEL_29;
    }
    ++v4;
LABEL_6:
    v3 = v4;
    v4 = v8;
  }
  if ( v7 >= v11 )
    goto LABEL_20;
LABEL_5:
  v8 = (int *)*v4;
  if ( *v4 )
    goto LABEL_6;
  v15 = a2;
  v3 = v4;
LABEL_29:
  *v15 = v4;
  return v3;
}


// ======================================================================
