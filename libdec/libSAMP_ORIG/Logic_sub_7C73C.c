// ADDR: 0x7c4f0
// SYMBOL: sub_7C4F0
char *__fastcall sub_7C4F0(int a1, int a2, char *a3)
{
  unsigned int v3; // r5
  signed int v4; // r6
  unsigned int v6; // r0
  int v7; // r8
  unsigned int v8; // r3
  char *v9; // r9
  int v10; // r11
  signed int v11; // r2
  char *v12; // r0
  char *v13; // r1
  int v14; // r12
  unsigned int v15; // r8
  char *v16; // r3
  int v17; // r0
  char *v18; // r4
  char *v19; // lr
  char *v20; // r0
  unsigned int v21; // r3
  bool v22; // cf
  int v23; // lr
  _QWORD *v24; // r4
  char *v25; // r3
  int v26; // r6
  __int64 v27; // d16
  unsigned int v28; // r9
  int v29; // r0
  char *v30; // r4
  char *v31; // r3
  char *v32; // r2
  _BYTE *v33; // r5
  unsigned int v34; // r0
  char *v35; // r11
  int v36; // t1
  unsigned int v37; // r9
  int v38; // r0
  char *v39; // r8
  _DWORD *v40; // r4
  signed int v41; // r6
  void *v42; // r0
  char *v44; // [sp+4h] [bp-24h]

  v3 = *(_DWORD *)(a1 + 4);
  v4 = *(_DWORD *)a1;
  v6 = *(_DWORD *)(a1 + 8);
  v7 = a2 - v4;
  v8 = (a2 - v4) & 0xFFFFFFFC;
  v9 = (char *)(v4 + v8);
  v10 = (a2 - v4) >> 2;
  if ( v3 < v6 )
  {
    if ( v9 == (char *)v3 )
    {
      *(_DWORD *)v9 = *(_DWORD *)a3;
      *(_DWORD *)(a1 + 4) = v9 + 4;
      return v9;
    }
    v11 = v3 - (_DWORD)v9 - 4;
    v12 = (char *)v3;
    v13 = &v9[v11 & 0xFFFFFFFC];
    v14 = v11 >> 2;
    if ( (unsigned int)v13 >= v3 )
      goto LABEL_33;
    v15 = v8 + (v11 & 0xFFFFFFFC);
    v16 = v13 + 4;
    v17 = ~v4;
    v18 = v13 + 4;
    if ( v3 > (unsigned int)(v13 + 4) )
      v18 = (char *)v3;
    v19 = &v18[v17 - v15];
    if ( !((unsigned int)v19 >> 2) )
      goto LABEL_31;
    if ( v3 > (unsigned int)v16 )
      v16 = (char *)v3;
    v20 = &v16[v17 - v15];
    v21 = v4 + 4 * (v14 + v10 + ((unsigned int)v20 >> 2)) + 4;
    v22 = v3 >= v21;
    if ( v3 < v21 )
      v22 = (unsigned int)v13 >= v3 + 4 * ((unsigned int)v20 >> 2) + 4;
    if ( v22 )
    {
      v23 = ((unsigned int)v19 >> 2) + 1;
      v24 = (_QWORD *)v3;
      v12 = (char *)(v3 + 4 * (v23 & 0x7FFFFFFE));
      v25 = &v13[4 * (v23 & 0x7FFFFFFE)];
      v26 = v23 & 0x7FFFFFFE;
      do
      {
        v27 = *(_QWORD *)v13;
        v13 += 8;
        v26 -= 2;
        *v24++ = v27;
      }
      while ( v26 );
      if ( v23 == (v23 & 0x7FFFFFFE) )
        goto LABEL_33;
    }
    else
    {
LABEL_31:
      v25 = &v9[v11 & 0xFFFFFFFC];
      v12 = (char *)v3;
    }
    do
    {
      v36 = *(_DWORD *)v25;
      v25 += 4;
      *(_DWORD *)v12 = v36;
      v12 += 4;
    }
    while ( (unsigned int)v25 < v3 );
LABEL_33:
    *(_DWORD *)(a1 + 4) = v12;
    if ( v3 - (_DWORD)v9 != 4 )
    {
      j_memmove((void *)(v3 - 4 * v14), v9, v11);
      v12 = *(char **)(a1 + 4);
    }
    *(_DWORD *)v9 = *(_DWORD *)&a3[4 * (v12 > a3 && v9 <= a3)];
    return v9;
  }
  v44 = (char *)(v4 + v8);
  v28 = ((int)(v3 - v4) >> 2) + 1;
  if ( v28 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v29 = v6 - v4;
  if ( v28 <= v29 >> 1 )
    v28 = v29 >> 1;
  if ( (unsigned int)v29 >= 0x7FFFFFFC )
    v28 = 0x3FFFFFFF;
  if ( v28 )
  {
    if ( v28 >= 0x40000000 )
      sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    v30 = (char *)operator new(4 * v28);
  }
  else
  {
    v30 = 0;
  }
  v31 = &v30[4 * v28];
  v32 = &v30[4 * v10];
  if ( v10 == v28 )
  {
    v33 = v44;
    if ( v7 < 1 )
    {
      v37 = v7 >> 1;
      if ( !v7 )
        v37 = 1;
      if ( v37 >= 0x40000000 )
        sub_7B270((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
      v38 = operator new(4 * v37);
      v35 = (char *)(v38 + 4 * v37);
      v9 = (char *)(v38 + (v37 & 0xFFFFFFFC));
      if ( v30 )
      {
        operator delete(v30);
        v4 = *(_DWORD *)a1;
      }
      v33 = v44;
    }
    else
    {
      v34 = v10 + 1;
      v35 = &v30[4 * v28];
      v9 = &v32[-((2 * (v34 + (v34 >> 31))) & 0xFFFFFFFD)];
    }
  }
  else
  {
    v33 = v44;
    v9 = &v30[4 * v10];
    v35 = v31;
  }
  v39 = (char *)(v9 - &v33[-v4]);
  *(_DWORD *)v9 = *(_DWORD *)a3;
  v40 = v9 + 4;
  if ( (int)&v33[-v4] >= 1 )
    j_memcpy((void *)(v9 - &v33[-v4]), (const void *)v4, (size_t)&v33[-v4]);
  v41 = *(_DWORD *)(a1 + 4) - (_DWORD)v33;
  if ( v41 >= 1 )
  {
    j_memcpy(v9 + 4, v33, v41);
    v40 = (_DWORD *)((char *)v40 + v41);
  }
  v42 = *(void **)a1;
  *(_DWORD *)(a1 + 4) = v40;
  *(_DWORD *)(a1 + 8) = v35;
  *(_DWORD *)a1 = v39;
  if ( v42 )
    operator delete(v42);
  return v9;
}


// ======================================================================
