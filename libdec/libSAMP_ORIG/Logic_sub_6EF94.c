// ADDR: 0x6f07a
// SYMBOL: sub_6F07A
int __fastcall sub_6F07A(int a1, __int64 *a2, int a3)
{
  __int64 v5; // r0
  unsigned int v6; // r2
  __int64 v7; // kr00_8
  __int64 v9; // kr08_8
  size_t v10; // r2
  unsigned int v11; // r6
  __int64 v12; // kr18_8
  size_t v13; // r2
  unsigned int v14; // r6
  __int64 v15; // kr28_8
  size_t v16; // r2
  unsigned int v17; // r6
  __int64 v18; // kr38_8
  size_t v19; // r2
  size_t v20; // r0
  __int64 v21; // r2
  int v22; // r0

  v7 = *(__int64 *)((char *)a2 + 12);
  HIDWORD(v5) = *((_DWORD *)a2 + 4);
  v6 = v7;
  if ( HIDWORD(v5) >= (unsigned int)v7 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v9 = *a2;
      v10 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v9), 1u, v10, (FILE *)v9);
      v11 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v11 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) != 117 )
    goto LABEL_27;
  if ( HIDWORD(v5) >= v6 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v12 = *a2;
      v13 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v12), 1u, v13, (FILE *)v12);
      v14 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v14 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) != 108 )
    goto LABEL_27;
  if ( HIDWORD(v5) >= v6 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v15 = *a2;
      v16 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v15), 1u, v16, (FILE *)v15);
      v17 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v17 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) == 108 )
  {
    if ( HIDWORD(v5) >= v6 )
    {
      if ( !*((_BYTE *)a2 + 28) )
      {
        v18 = *a2;
        v19 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v20 = fread((void *)HIDWORD(v18), 1u, v19, (FILE *)v18);
        v21 = *(__int64 *)((char *)a2 + 4);
        *((_DWORD *)a2 + 5) = v20;
        *((_DWORD *)a2 + 3) = v21 + v20 - 1;
        *((_DWORD *)a2 + 4) = v21;
        if ( v20 < HIDWORD(v21) )
        {
          *(_BYTE *)(v21 + v20) = 0;
          v22 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          *((_DWORD *)a2 + 3) = v22 + 1;
        }
      }
    }
    else
    {
      *((_DWORD *)a2 + 4) = HIDWORD(v5) + 1;
    }
    v5 = *(_QWORD *)(a3 + 36);
    if ( HIDWORD(v5) - (int)v5 <= 15 )
    {
      sub_70EA2(a3 + 24, 1);
      LODWORD(v5) = *(_DWORD *)(a3 + 36);
    }
    *(_DWORD *)(a3 + 36) = v5 + 16;
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
  }
  else
  {
LABEL_27:
    LODWORD(v5) = 3;
    HIDWORD(v5) = HIDWORD(v5) + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 1);
    *(_QWORD *)(a1 + 24) = v5;
  }
  return v5;
}


// ======================================================================
// ADDR: 0x6f20e
// SYMBOL: sub_6F20E
int __fastcall sub_6F20E(int a1, __int64 *a2, int a3)
{
  __int64 v5; // r0
  unsigned int v6; // r2
  __int64 v7; // kr00_8
  __int64 v9; // kr08_8
  size_t v10; // r2
  unsigned int v11; // r6
  __int64 v12; // kr18_8
  size_t v13; // r2
  unsigned int v14; // r6
  __int64 v15; // kr28_8
  size_t v16; // r2
  unsigned int v17; // r6
  __int64 v18; // kr38_8
  size_t v19; // r2
  size_t v20; // r0
  __int64 v21; // r2
  int v22; // r0

  v7 = *(__int64 *)((char *)a2 + 12);
  HIDWORD(v5) = *((_DWORD *)a2 + 4);
  v6 = v7;
  if ( HIDWORD(v5) >= (unsigned int)v7 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v9 = *a2;
      v10 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v9), 1u, v10, (FILE *)v9);
      v11 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v11 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) != 114 )
    goto LABEL_27;
  if ( HIDWORD(v5) >= v6 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v12 = *a2;
      v13 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v12), 1u, v13, (FILE *)v12);
      v14 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v14 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) != 117 )
    goto LABEL_27;
  if ( HIDWORD(v5) >= v6 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v15 = *a2;
      v16 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v15), 1u, v16, (FILE *)v15);
      v17 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v17 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) == 101 )
  {
    if ( HIDWORD(v5) >= v6 )
    {
      if ( !*((_BYTE *)a2 + 28) )
      {
        v18 = *a2;
        v19 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v20 = fread((void *)HIDWORD(v18), 1u, v19, (FILE *)v18);
        v21 = *(__int64 *)((char *)a2 + 4);
        *((_DWORD *)a2 + 5) = v20;
        *((_DWORD *)a2 + 3) = v21 + v20 - 1;
        *((_DWORD *)a2 + 4) = v21;
        if ( v20 < HIDWORD(v21) )
        {
          *(_BYTE *)(v21 + v20) = 0;
          v22 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          *((_DWORD *)a2 + 3) = v22 + 1;
        }
      }
    }
    else
    {
      *((_DWORD *)a2 + 4) = HIDWORD(v5) + 1;
    }
    v5 = *(_QWORD *)(a3 + 36);
    if ( HIDWORD(v5) - (int)v5 <= 15 )
    {
      sub_70EA2(a3 + 24, 1);
      LODWORD(v5) = *(_DWORD *)(a3 + 36);
    }
    *(_DWORD *)(a3 + 36) = v5 + 16;
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    LODWORD(v5) = v5 + 14;
    *(_WORD *)v5 = 10;
  }
  else
  {
LABEL_27:
    LODWORD(v5) = 3;
    HIDWORD(v5) = HIDWORD(v5) + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 1);
    *(_QWORD *)(a1 + 24) = v5;
  }
  return v5;
}


// ======================================================================
// ADDR: 0x6f3a8
// SYMBOL: sub_6F3A8
int __fastcall sub_6F3A8(int a1, __int64 *a2, int a3)
{
  __int64 v5; // r0
  unsigned int v6; // r2
  __int64 v7; // kr00_8
  __int64 v9; // kr08_8
  size_t v10; // r2
  unsigned int v11; // r6
  __int64 v12; // kr18_8
  size_t v13; // r2
  unsigned int v14; // r6
  __int64 v15; // kr28_8
  size_t v16; // r2
  unsigned int v17; // r6
  __int64 v18; // kr38_8
  size_t v19; // r2
  unsigned int v20; // r6
  __int64 v21; // kr48_8
  size_t v22; // r2
  size_t v23; // r0
  __int64 v24; // r2
  int v25; // r0

  v7 = *(__int64 *)((char *)a2 + 12);
  HIDWORD(v5) = *((_DWORD *)a2 + 4);
  v6 = v7;
  if ( HIDWORD(v5) >= (unsigned int)v7 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v9 = *a2;
      v10 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v9), 1u, v10, (FILE *)v9);
      v11 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v11 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) != 97 )
    goto LABEL_33;
  if ( HIDWORD(v5) >= v6 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v12 = *a2;
      v13 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v12), 1u, v13, (FILE *)v12);
      v14 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v14 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) != 108 )
    goto LABEL_33;
  if ( HIDWORD(v5) >= v6 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v15 = *a2;
      v16 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v15), 1u, v16, (FILE *)v15);
      v17 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v17 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) != 115 )
    goto LABEL_33;
  if ( HIDWORD(v5) >= v6 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v18 = *a2;
      v19 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      LODWORD(v5) = fread((void *)HIDWORD(v18), 1u, v19, (FILE *)v18);
      v20 = *((_DWORD *)a2 + 2);
      HIDWORD(v5) = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v5;
      v6 = HIDWORD(v5) + v5 - 1;
      *((_DWORD *)a2 + 3) = v6;
      *((_DWORD *)a2 + 4) = HIDWORD(v5);
      if ( (unsigned int)v5 < v20 )
      {
        *(_BYTE *)(HIDWORD(v5) + v5) = 0;
        v5 = *(__int64 *)((char *)a2 + 12);
        *((_BYTE *)a2 + 28) = 1;
        v6 = v5 + 1;
        *((_DWORD *)a2 + 3) = v5 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = ++HIDWORD(v5);
  }
  if ( *(_BYTE *)HIDWORD(v5) == 101 )
  {
    if ( HIDWORD(v5) >= v6 )
    {
      if ( !*((_BYTE *)a2 + 28) )
      {
        v21 = *a2;
        v22 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v23 = fread((void *)HIDWORD(v21), 1u, v22, (FILE *)v21);
        v24 = *(__int64 *)((char *)a2 + 4);
        *((_DWORD *)a2 + 5) = v23;
        *((_DWORD *)a2 + 3) = v24 + v23 - 1;
        *((_DWORD *)a2 + 4) = v24;
        if ( v23 < HIDWORD(v24) )
        {
          *(_BYTE *)(v24 + v23) = 0;
          v25 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          *((_DWORD *)a2 + 3) = v25 + 1;
        }
      }
    }
    else
    {
      *((_DWORD *)a2 + 4) = HIDWORD(v5) + 1;
    }
    v5 = *(_QWORD *)(a3 + 36);
    if ( HIDWORD(v5) - (int)v5 <= 15 )
    {
      sub_70EA2(a3 + 24, 1);
      LODWORD(v5) = *(_DWORD *)(a3 + 36);
    }
    *(_DWORD *)(a3 + 36) = v5 + 16;
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(v5 + 8) = 0LL;
    LODWORD(v5) = v5 + 14;
    *(_WORD *)v5 = 9;
  }
  else
  {
LABEL_33:
    LODWORD(v5) = 3;
    HIDWORD(v5) = HIDWORD(v5) + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 1);
    *(_QWORD *)(a1 + 24) = v5;
  }
  return v5;
}


// ======================================================================
// ADDR: 0x6f598
// SYMBOL: sub_6F598
int __fastcall sub_6F598(int a1, __int64 *a2, int a3, int a4)
{
  unsigned int v6; // r0
  void *v7; // r0
  FILE *v8; // r3
  size_t v9; // r2
  size_t v10; // r0
  __int64 v11; // r2
  int v12; // r0
  _BYTE *v13; // r4
  unsigned int v14; // r10
  __int64 v15; // kr08_8
  size_t v16; // r2
  size_t v17; // r0
  __int64 v18; // r2
  int v19; // r0
  _DWORD *v20; // r11
  int v21; // r0
  char *v22; // r5
  unsigned int v23; // r1
  void *v24; // r10
  int v25; // r11
  unsigned __int8 *v26; // r2
  void *v27; // r2
  size_t v28; // r4
  int v29; // r0
  FILE *v30; // r3
  size_t v31; // r2
  size_t v32; // r0
  size_t v33; // r5
  int v34; // r0
  int v35; // r0
  char v36; // r5
  __int64 v37; // kr28_8
  size_t v38; // r2
  size_t v39; // r0
  __int64 v40; // r2
  int v41; // r0
  int v42; // r4
  __int64 v43; // r0
  void *v44; // r4
  int v45; // r0
  char *v46; // r5
  char *v47; // r0
  int v48; // r5
  unsigned int v49; // r10
  __int64 v50; // r0
  unsigned int v51; // r2
  __int64 v52; // kr30_8
  size_t v53; // r2
  unsigned int v54; // r12
  __int64 v55; // kr40_8
  size_t v56; // r2
  size_t v57; // r0
  __int64 v58; // kr48_8
  int v59; // r0
  int v60; // r0
  int v61; // r9
  int v62; // r0
  __int64 v63; // kr50_8
  size_t v64; // r2
  size_t v65; // r0
  __int64 v66; // r2
  int v67; // r0
  int v68; // r4
  __int64 v69; // r0
  int v70; // r5
  int v71; // r0
  int v72; // r8
  void *v73; // r4
  int v74; // r0
  __int64 v75; // r0
  int v79; // [sp+Ch] [bp-34h]
  int v80; // [sp+10h] [bp-30h] BYREF
  int i; // [sp+14h] [bp-2Ch]
  void *v82; // [sp+18h] [bp-28h]
  int v83; // [sp+1Ch] [bp-24h]
  int v84; // [sp+20h] [bp-20h]

  v6 = *((_DWORD *)a2 + 4);
  if ( v6 >= *((_DWORD *)a2 + 3) )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v7 = (void *)*((_DWORD *)a2 + 1);
      v8 = *(FILE **)a2;
      v9 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v10 = fread(v7, 1u, v9, v8);
      v11 = *(__int64 *)((char *)a2 + 4);
      *((_DWORD *)a2 + 5) = v10;
      *((_DWORD *)a2 + 3) = v11 + v10 - 1;
      *((_DWORD *)a2 + 4) = v11;
      if ( v10 < HIDWORD(v11) )
      {
        *(_BYTE *)(v11 + v10) = 0;
        v12 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        *((_DWORD *)a2 + 3) = v12 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = v6 + 1;
  }
  v79 = a1;
  v80 = a1;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      v13 = (_BYTE *)*((_DWORD *)a2 + 4);
      v14 = (unsigned __int8)*v13;
      if ( v14 != 92 )
        break;
      v23 = *((_DWORD *)a2 + 3);
      v24 = (void *)*((_DWORD *)a2 + 1);
      v25 = *((_DWORD *)a2 + 6);
      if ( (unsigned int)v13 >= v23 )
      {
        v26 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
        if ( !*((_BYTE *)a2 + 28) )
        {
          v30 = *(FILE **)a2;
          v31 = *((_DWORD *)a2 + 2);
          *((_DWORD *)a2 + 6) = *((_DWORD *)a2 + 5) + v25;
          v32 = fread(v24, 1u, v31, v30);
          v33 = *((_DWORD *)a2 + 2);
          v26 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
          *((_DWORD *)a2 + 5) = v32;
          v23 = (unsigned int)&v26[v32 - 1];
          *((_DWORD *)a2 + 3) = v23;
          *((_DWORD *)a2 + 4) = v26;
          if ( v32 < v33 )
          {
            v26[v32] = 0;
            v26 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
            v34 = *((_DWORD *)a2 + 3);
            *((_BYTE *)a2 + 28) = 1;
            v23 = v34 + 1;
            *((_DWORD *)a2 + 3) = v34 + 1;
          }
        }
      }
      else
      {
        v26 = v13 + 1;
        *((_DWORD *)a2 + 4) = v13 + 1;
      }
      v35 = *v26;
      v36 = byte_50E8C[v35];
      if ( v36 )
      {
        if ( (unsigned int)v26 >= v23 )
        {
          if ( !*((_BYTE *)a2 + 28) )
          {
            v37 = *a2;
            v38 = *((_DWORD *)a2 + 2);
            *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
            v39 = fread((void *)HIDWORD(v37), 1u, v38, (FILE *)v37);
            v40 = *(__int64 *)((char *)a2 + 4);
            *((_DWORD *)a2 + 5) = v39;
            *((_DWORD *)a2 + 3) = v40 + v39 - 1;
            *((_DWORD *)a2 + 4) = v40;
            if ( v39 < HIDWORD(v40) )
            {
              *(_BYTE *)(v40 + v39) = 0;
              v41 = *((_DWORD *)a2 + 3);
              *((_BYTE *)a2 + 28) = 1;
              *((_DWORD *)a2 + 3) = v41 + 1;
            }
          }
        }
        else
        {
          *((_DWORD *)a2 + 4) = v26 + 1;
        }
        v42 = v80;
        v43 = *(_QWORD *)(v80 + 12);
        if ( HIDWORD(v43) - (int)v43 <= 0 )
        {
          sub_712D0(v80, 1);
          LODWORD(v43) = *(_DWORD *)(v42 + 12);
        }
        *(_DWORD *)(v42 + 12) = v43 + 1;
        *(_BYTE *)v43 = v36;
        goto LABEL_17;
      }
      v48 = &v13[v25] - (_BYTE *)v24;
      if ( v35 != 117 )
      {
        v62 = 10;
LABEL_68:
        *(_DWORD *)(v79 + 24) = v62;
        *(_DWORD *)(v79 + 28) = v48;
        return v84;
      }
      sub_6F00E(a2);
      v49 = sub_71068(v79, a2, v48);
      if ( *(_DWORD *)(v79 + 24) )
        return v84;
      if ( (v49 & 0xFFFFF800) == 0xD800 )
      {
        if ( v49 >> 10 > 0x36 )
          goto LABEL_85;
        HIDWORD(v50) = *((_DWORD *)a2 + 4);
        if ( *(_BYTE *)HIDWORD(v50) != 92 )
          goto LABEL_85;
        v51 = *((_DWORD *)a2 + 3);
        if ( HIDWORD(v50) >= v51 )
        {
          if ( !*((_BYTE *)a2 + 28) )
          {
            v52 = *a2;
            v53 = *((_DWORD *)a2 + 2);
            *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
            LODWORD(v50) = fread((void *)HIDWORD(v52), 1u, v53, (FILE *)v52);
            v54 = *((_DWORD *)a2 + 2);
            HIDWORD(v50) = *((_DWORD *)a2 + 1);
            *((_DWORD *)a2 + 5) = v50;
            v51 = HIDWORD(v50) + v50 - 1;
            *((_DWORD *)a2 + 3) = v51;
            *((_DWORD *)a2 + 4) = HIDWORD(v50);
            if ( (unsigned int)v50 < v54 )
            {
              *(_BYTE *)(HIDWORD(v50) + v50) = 0;
              v50 = *(__int64 *)((char *)a2 + 12);
              *((_BYTE *)a2 + 28) = 1;
              v51 = v50 + 1;
              *((_DWORD *)a2 + 3) = v50 + 1;
            }
          }
        }
        else
        {
          *((_DWORD *)a2 + 4) = ++HIDWORD(v50);
        }
        if ( *(_BYTE *)HIDWORD(v50) != 117 )
          goto LABEL_85;
        if ( HIDWORD(v50) >= v51 )
        {
          if ( !*((_BYTE *)a2 + 28) )
          {
            v55 = *a2;
            v56 = *((_DWORD *)a2 + 2);
            *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
            v57 = fread((void *)HIDWORD(v55), 1u, v56, (FILE *)v55);
            v58 = *(__int64 *)((char *)a2 + 4);
            *((_DWORD *)a2 + 5) = v57;
            *((_DWORD *)a2 + 3) = v58 + v57 - 1;
            *((_DWORD *)a2 + 4) = v58;
            if ( v57 < HIDWORD(v58) )
            {
              *(_BYTE *)(v58 + v57) = 0;
              v59 = *((_DWORD *)a2 + 3);
              *((_BYTE *)a2 + 28) = 1;
              *((_DWORD *)a2 + 3) = v59 + 1;
            }
          }
        }
        else
        {
          *((_DWORD *)a2 + 4) = HIDWORD(v50) + 1;
        }
        v60 = sub_71068(v79, a2, v48);
        if ( *(_DWORD *)(v79 + 24) )
          return v84;
        if ( (unsigned int)(v60 - 57344) < 0xFFFFFC00 )
        {
LABEL_85:
          v62 = 9;
          goto LABEL_68;
        }
        v49 = ((v60 - 56320) | ((v49 << 10) - 56623104)) + 0x10000;
      }
      sub_71120(&v80, v49);
    }
    if ( v14 == 34 )
      break;
    if ( v14 <= 0x1F )
    {
      v62 = 12;
      if ( !*v13 )
        v62 = 11;
      v48 = (int)&v13[*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 1)];
      goto LABEL_68;
    }
    if ( (unsigned int)v13 >= *((_DWORD *)a2 + 3) )
    {
      if ( !*((_BYTE *)a2 + 28) )
      {
        v15 = *a2;
        v16 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v17 = fread((void *)HIDWORD(v15), 1u, v16, (FILE *)v15);
        v18 = *(__int64 *)((char *)a2 + 4);
        *((_DWORD *)a2 + 5) = v17;
        *((_DWORD *)a2 + 3) = v18 + v17 - 1;
        *((_DWORD *)a2 + 4) = v18;
        if ( v17 < HIDWORD(v18) )
        {
          *(_BYTE *)(v18 + v17) = 0;
          v19 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          *((_DWORD *)a2 + 3) = v19 + 1;
        }
      }
    }
    else
    {
      *((_DWORD *)a2 + 4) = v13 + 1;
    }
    v20 = (_DWORD *)v80;
    v21 = *(_DWORD *)(v80 + 16);
    v22 = *(char **)(v80 + 12);
    if ( v21 - (int)v22 <= 0 )
    {
      v27 = *(void **)(v80 + 8);
      if ( v27 )
      {
        v28 = v21 - (_DWORD)v27 + ((unsigned int)(v21 - (_DWORD)v27 + 1) >> 1);
        v29 = *(_DWORD *)(v80 + 8);
      }
      else
      {
        if ( !*(_DWORD *)v80 )
        {
          v44 = *(void **)(v80 + 8);
          v45 = operator new(1u);
          v27 = v44;
          *v20 = v45;
          v20[1] = v45;
        }
        v28 = v20[5];
        v29 = 0;
      }
      v46 = &v22[-v29];
      if ( v28 < (unsigned int)(v46 + 1) )
        v28 = (size_t)(v46 + 1);
      if ( v28 )
      {
        v47 = (char *)realloc(v27, v28);
      }
      else
      {
        free(v27);
        v47 = 0;
      }
      v22 = &v47[(_DWORD)v46];
      v20[4] = &v47[v28];
      v20[2] = v47;
    }
    v20[3] = v22 + 1;
    *v22 = v14;
LABEL_17:
    ;
  }
  if ( (unsigned int)v13 >= *((_DWORD *)a2 + 3) )
  {
    v61 = v79;
    if ( !*((_BYTE *)a2 + 28) )
    {
      v63 = *a2;
      v64 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v65 = fread((void *)HIDWORD(v63), 1u, v64, (FILE *)v63);
      v66 = *(__int64 *)((char *)a2 + 4);
      *((_DWORD *)a2 + 5) = v65;
      *((_DWORD *)a2 + 3) = v66 + v65 - 1;
      *((_DWORD *)a2 + 4) = v66;
      if ( v65 < HIDWORD(v66) )
      {
        *(_BYTE *)(v66 + v65) = 0;
        v67 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        *((_DWORD *)a2 + 3) = v67 + 1;
      }
    }
  }
  else
  {
    *((_DWORD *)a2 + 4) = v13 + 1;
    v61 = v79;
  }
  v68 = v80;
  v69 = *(_QWORD *)(v80 + 12);
  if ( HIDWORD(v69) - (int)v69 <= 0 )
  {
    sub_712D0(v80, 1);
    LODWORD(v69) = *(_DWORD *)(v68 + 12);
  }
  *(_DWORD *)(v68 + 12) = v69 + 1;
  *(_BYTE *)v69 = 0;
  v70 = i;
  v71 = *(_DWORD *)(v61 + 24);
  ++i;
  if ( !v71 )
  {
    v72 = *(_DWORD *)(v80 + 12);
    v73 = (void *)(v72 + ~v70);
    *(_DWORD *)(v80 + 12) = v73;
    if ( a4 )
    {
      if ( !sub_70F08(a3, v72 + ~v70, v70, 1) )
      {
        v74 = *((_DWORD *)a2 + 4) + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 1);
        *(_DWORD *)(v61 + 24) = 16;
        *(_DWORD *)(v61 + 28) = v74;
      }
    }
    else
    {
      v75 = *(_QWORD *)(a3 + 36);
      if ( HIDWORD(v75) - (int)v75 <= 15 )
      {
        sub_70EA2(a3 + 24, 1);
        LODWORD(v75) = *(_DWORD *)(a3 + 36);
      }
      *(_DWORD *)(a3 + 36) = v75 + 16;
      *(_QWORD *)v75 = 0LL;
      *(_QWORD *)(v75 + 8) = 0LL;
      v83 = v70;
      if ( !v72 )
        v73 = &unk_50F8C;
      v82 = v73;
      sub_71334((void *)v75);
    }
  }
  return v84;
}


// ======================================================================
// ADDR: 0x6fa18
// SYMBOL: sub_6FA18
unsigned __int8 *__fastcall sub_6FA18(int a1, int a2, int a3)
{
  unsigned int v6; // r0
  void *v7; // r0
  FILE *v8; // r3
  size_t v9; // r2
  size_t v10; // r0
  __int64 v11; // r2
  int v12; // r0
  __int64 v13; // r0
  unsigned __int8 *result; // r0
  int v15; // r1
  __int64 v16; // kr08_8
  size_t v17; // r2
  size_t v18; // r0
  __int64 v19; // r2
  int v20; // r0
  __int64 v21; // kr10_8
  size_t v22; // r2
  size_t v23; // r0
  __int64 v24; // r2
  int v25; // r0
  int v26; // r1
  __int64 v27; // kr18_8
  size_t v28; // r2
  size_t v29; // r0
  __int64 v30; // r2
  int v31; // r0
  unsigned int v32; // r1
  FILE *v33; // r3
  void *v34; // r0
  size_t v35; // r2
  size_t v36; // r0
  int v37; // r3
  size_t v38; // r6
  int v39; // r0
  int v40; // r0
  unsigned __int8 *v41; // r2
  unsigned int v42; // r3
  int v43; // r1
  __int64 v44; // kr20_8
  size_t v45; // r2
  size_t v46; // r0
  __int64 v47; // r2
  int v48; // r0
  int v49; // r2
  unsigned int v50; // r1
  __int64 v51; // kr28_8
  size_t v52; // r2
  size_t v53; // r0
  __int64 v54; // kr30_8
  int v55; // r0
  int v56; // r2
  int v57; // r3
  __int64 v58; // kr38_8
  size_t v59; // r2
  size_t v60; // r0
  __int64 v61; // kr40_8
  int v62; // r1
  int v63; // r2
  unsigned __int8 *v64; // r0
  __int64 v65; // kr48_8
  size_t v66; // r2
  size_t v67; // r0
  __int64 v68; // r2
  _BYTE *v69; // r1
  int v70; // r0
  void *v71; // r1
  int v72; // [sp+0h] [bp-20h]

  v6 = *(_DWORD *)(a2 + 16);
  if ( v6 >= *(_DWORD *)(a2 + 12) )
  {
    if ( !*(_BYTE *)(a2 + 28) )
    {
      v7 = *(void **)(a2 + 4);
      v8 = *(FILE **)a2;
      v9 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
      v10 = fread(v7, 1u, v9, v8);
      v11 = *(_QWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 20) = v10;
      *(_DWORD *)(a2 + 12) = v11 + v10 - 1;
      *(_DWORD *)(a2 + 16) = v11;
      if ( v10 < HIDWORD(v11) )
      {
        *(_BYTE *)(v11 + v10) = 0;
        v12 = *(_DWORD *)(a2 + 12);
        *(_BYTE *)(a2 + 28) = 1;
        *(_DWORD *)(a2 + 12) = v12 + 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v6 + 1;
  }
  v13 = *(_QWORD *)(a3 + 36);
  if ( HIDWORD(v13) - (int)v13 <= 15 )
  {
    sub_70EA2(a3 + 24, 1);
    LODWORD(v13) = *(_DWORD *)(a3 + 36);
  }
  *(_DWORD *)(a3 + 36) = v13 + 16;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_WORD *)(v13 + 14) = 3;
  while ( 1 )
  {
    result = *(unsigned __int8 **)(a2 + 16);
    v15 = *result;
    if ( (unsigned int)(v15 - 9) > 0x17 || ((1 << (v15 - 9)) & 0x800013) == 0 )
      break;
    if ( (unsigned int)result < *(_DWORD *)(a2 + 12) )
    {
      *(_DWORD *)(a2 + 16) = result + 1;
    }
    else if ( !*(_BYTE *)(a2 + 28) )
    {
      v16 = *(_QWORD *)a2;
      v17 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
      v18 = fread((void *)HIDWORD(v16), 1u, v17, (FILE *)v16);
      v19 = *(_QWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 20) = v18;
      *(_DWORD *)(a2 + 12) = v19 + v18 - 1;
      *(_DWORD *)(a2 + 16) = v19;
      if ( v18 < HIDWORD(v19) )
      {
        *(_BYTE *)(v19 + v18) = 0;
        v20 = *(_DWORD *)(a2 + 12);
        *(_BYTE *)(a2 + 28) = 1;
        *(_DWORD *)(a2 + 12) = v20 + 1;
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( v15 == 125 )
    {
      if ( (unsigned int)result >= *(_DWORD *)(a2 + 12) )
      {
        if ( !*(_BYTE *)(a2 + 28) )
        {
          v21 = *(_QWORD *)a2;
          v22 = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
          v23 = fread((void *)HIDWORD(v21), 1u, v22, (FILE *)v21);
          v24 = *(_QWORD *)(a2 + 4);
          *(_DWORD *)(a2 + 20) = v23;
          *(_DWORD *)(a2 + 12) = v24 + v23 - 1;
          *(_DWORD *)(a2 + 16) = v24;
          if ( v23 < HIDWORD(v24) )
          {
            *(_BYTE *)(v24 + v23) = 0;
            v25 = *(_DWORD *)(a2 + 12);
            *(_BYTE *)(a2 + 28) = 1;
            *(_DWORD *)(a2 + 12) = v25 + 1;
          }
        }
      }
      else
      {
        *(_DWORD *)(a2 + 16) = result + 1;
      }
      result = *(unsigned __int8 **)(a3 + 36);
      *((_WORD *)result - 1) = 3;
      *((_DWORD *)result - 4) = 0;
      *((_DWORD *)result - 3) = 0;
      *((_DWORD *)result - 2) = 0;
    }
    else if ( v15 == 34 )
    {
      v72 = 0;
      while ( 1 )
      {
        sub_6F598(a1, (__int64 *)a2, a3, 1);
        result = *(unsigned __int8 **)(a1 + 24);
        if ( result )
          break;
        while ( 1 )
        {
          result = *(unsigned __int8 **)(a2 + 16);
          v26 = *result;
          if ( (unsigned int)(v26 - 9) > 0x17 || ((1 << (v26 - 9)) & 0x800013) == 0 )
            break;
          if ( (unsigned int)result < *(_DWORD *)(a2 + 12) )
          {
            *(_DWORD *)(a2 + 16) = result + 1;
          }
          else if ( !*(_BYTE *)(a2 + 28) )
          {
            v27 = *(_QWORD *)a2;
            v28 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
            v29 = fread((void *)HIDWORD(v27), 1u, v28, (FILE *)v27);
            v30 = *(_QWORD *)(a2 + 4);
            *(_DWORD *)(a2 + 20) = v29;
            *(_DWORD *)(a2 + 12) = v30 + v29 - 1;
            *(_DWORD *)(a2 + 16) = v30;
            if ( v29 < HIDWORD(v30) )
            {
              *(_BYTE *)(v30 + v29) = 0;
              v31 = *(_DWORD *)(a2 + 12);
              *(_BYTE *)(a2 + 28) = 1;
              *(_DWORD *)(a2 + 12) = v31 + 1;
            }
          }
        }
        if ( *(_DWORD *)(a1 + 24) )
          break;
        if ( v26 != 58 )
        {
          v62 = 5;
          goto LABEL_84;
        }
        v32 = *(_DWORD *)(a2 + 12);
        if ( (unsigned int)result >= v32 )
        {
          if ( !*(_BYTE *)(a2 + 28) )
          {
LABEL_45:
            v33 = *(FILE **)a2;
            v34 = *(void **)(a2 + 4);
            v35 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
            v36 = fread(v34, 1u, v35, v33);
            v37 = *(_DWORD *)(a2 + 4);
            v38 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 16) = v37;
            v32 = v37 + v36 - 1;
            *(_DWORD *)(a2 + 12) = v32;
            *(_DWORD *)(a2 + 20) = v36;
            if ( v36 < v38 )
            {
              *(_BYTE *)(v37 + v36) = 0;
              v39 = *(_DWORD *)(a2 + 12);
              *(_BYTE *)(a2 + 28) = 1;
              v32 = v39 + 1;
              *(_DWORD *)(a2 + 12) = v39 + 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(a2 + 16) = result + 1;
        }
        v40 = *(unsigned __int8 *)(a2 + 28);
        while ( 1 )
        {
          v41 = *(unsigned __int8 **)(a2 + 16);
          v42 = *v41 - 9;
          if ( v42 > 0x17 || ((1 << v42) & 0x800013) == 0 )
            break;
          if ( (unsigned int)v41 < v32 )
          {
            *(_DWORD *)(a2 + 16) = v41 + 1;
          }
          else if ( !v40 )
          {
            goto LABEL_45;
          }
        }
        result = *(unsigned __int8 **)(a1 + 24);
        if ( result )
          return result;
        sub_6EF94(a1, a2, a3);
        result = *(unsigned __int8 **)(a1 + 24);
        if ( result )
          return result;
        while ( 1 )
        {
          result = *(unsigned __int8 **)(a2 + 16);
          v43 = *result;
          if ( (unsigned int)(v43 - 9) > 0x17 || ((1 << (v43 - 9)) & 0x800013) == 0 )
            break;
          if ( (unsigned int)result < *(_DWORD *)(a2 + 12) )
          {
            *(_DWORD *)(a2 + 16) = result + 1;
          }
          else if ( !*(_BYTE *)(a2 + 28) )
          {
            v44 = *(_QWORD *)a2;
            v45 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
            v46 = fread((void *)HIDWORD(v44), 1u, v45, (FILE *)v44);
            v47 = *(_QWORD *)(a2 + 4);
            *(_DWORD *)(a2 + 20) = v46;
            *(_DWORD *)(a2 + 12) = v47 + v46 - 1;
            *(_DWORD *)(a2 + 16) = v47;
            if ( v46 < HIDWORD(v47) )
            {
              *(_BYTE *)(v47 + v46) = 0;
              v48 = *(_DWORD *)(a2 + 12);
              *(_BYTE *)(a2 + 28) = 1;
              *(_DWORD *)(a2 + 12) = v48 + 1;
            }
          }
        }
        if ( *(_DWORD *)(a1 + 24) )
          return result;
        v49 = v72 + 1;
        if ( v43 != 44 )
        {
          if ( v43 != 125 )
          {
            v62 = 6;
            goto LABEL_84;
          }
          if ( (unsigned int)result >= *(_DWORD *)(a2 + 12) )
          {
            if ( !*(_BYTE *)(a2 + 28) )
            {
              v65 = *(_QWORD *)a2;
              v66 = *(_DWORD *)(a2 + 8);
              *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
              v67 = fread((void *)HIDWORD(v65), 1u, v66, (FILE *)v65);
              v68 = *(_QWORD *)(a2 + 4);
              *(_DWORD *)(a2 + 20) = v67;
              v69 = (_BYTE *)(v68 + v67);
              *(_DWORD *)(a2 + 12) = v68 + v67 - 1;
              *(_DWORD *)(a2 + 16) = v68;
              v49 = v72 + 1;
              if ( v67 < HIDWORD(v68) )
              {
                *v69 = 0;
                v70 = *(_DWORD *)(a2 + 12);
                *(_BYTE *)(a2 + 28) = 1;
                *(_DWORD *)(a2 + 12) = v70 + 1;
              }
            }
          }
          else
          {
            *(_DWORD *)(a2 + 16) = result + 1;
          }
          v71 = (void *)(*(_DWORD *)(a3 + 36) - 32 * v49);
          *(_DWORD *)(a3 + 36) = v71;
          return (unsigned __int8 *)sub_713F6((int)v71 - 16, v71);
        }
        v50 = *(_DWORD *)(a2 + 12);
        ++v72;
        if ( (unsigned int)result >= v50 )
        {
          if ( !*(_BYTE *)(a2 + 28) )
          {
            v51 = *(_QWORD *)a2;
            v52 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
            v53 = fread((void *)HIDWORD(v51), 1u, v52, (FILE *)v51);
            v54 = *(_QWORD *)(a2 + 4);
            *(_DWORD *)(a2 + 20) = v53;
            v50 = v54 + v53 - 1;
            *(_DWORD *)(a2 + 12) = v50;
            *(_DWORD *)(a2 + 16) = v54;
            if ( v53 < HIDWORD(v54) )
            {
              *(_BYTE *)(v54 + v53) = 0;
LABEL_71:
              v55 = *(_DWORD *)(a2 + 12);
              *(_BYTE *)(a2 + 28) = 1;
              v50 = v55 + 1;
              *(_DWORD *)(a2 + 12) = v55 + 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(a2 + 16) = result + 1;
        }
LABEL_72:
        v56 = *(unsigned __int8 *)(a2 + 28);
        while ( 1 )
        {
          result = *(unsigned __int8 **)(a2 + 16);
          v57 = *result;
          if ( (unsigned int)(v57 - 9) > 0x17 || ((1 << (v57 - 9)) & 0x800013) == 0 )
            break;
          if ( (unsigned int)result < v50 )
          {
            *(_DWORD *)(a2 + 16) = result + 1;
          }
          else if ( !v56 )
          {
            v58 = *(_QWORD *)a2;
            v59 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
            v60 = fread((void *)HIDWORD(v58), 1u, v59, (FILE *)v58);
            v61 = *(_QWORD *)(a2 + 4);
            *(_DWORD *)(a2 + 20) = v60;
            v50 = v61 + v60 - 1;
            *(_DWORD *)(a2 + 12) = v50;
            *(_DWORD *)(a2 + 16) = v61;
            if ( v60 >= HIDWORD(v61) )
              goto LABEL_72;
            *(_BYTE *)(v61 + v60) = 0;
            goto LABEL_71;
          }
        }
        if ( *(_DWORD *)(a1 + 24) )
          return result;
        if ( v57 != 34 )
          goto LABEL_90;
      }
    }
    else
    {
LABEL_90:
      v62 = 4;
LABEL_84:
      v63 = *(_DWORD *)(a2 + 4);
      v64 = &result[*(_DWORD *)(a2 + 24)];
      *(_DWORD *)(a1 + 24) = v62;
      result = &v64[-v63];
      *(_DWORD *)(a1 + 28) = result;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x6fe4c
// SYMBOL: sub_6FE4C
unsigned __int8 *__fastcall sub_6FE4C(int a1, int a2, int a3)
{
  unsigned int v6; // r0
  void *v7; // r0
  FILE *v8; // r3
  size_t v9; // r2
  size_t v10; // r0
  __int64 v11; // r2
  int v12; // r0
  __int64 v13; // r0
  unsigned __int8 *result; // r0
  int v15; // r1
  __int64 v16; // kr08_8
  size_t v17; // r2
  size_t v18; // r0
  __int64 v19; // r2
  int v20; // r0
  __int64 v21; // kr10_8
  size_t v22; // r2
  size_t v23; // r0
  __int64 v24; // r2
  int v25; // r0
  int v26; // r1
  __int64 v27; // kr18_8
  size_t v28; // r2
  size_t v29; // r0
  __int64 v30; // r2
  int v31; // r0
  int v32; // r2
  unsigned int v33; // r1
  FILE *v34; // r3
  void *v35; // r0
  size_t v36; // r2
  size_t v37; // r0
  int v38; // r3
  size_t v39; // r6
  int v40; // r0
  int v41; // r0
  unsigned __int8 *v42; // r2
  unsigned int v43; // r3
  __int64 v44; // kr20_8
  size_t v45; // r2
  size_t v46; // r0
  __int64 v47; // r2
  _BYTE *v48; // r1
  int v49; // r0
  void *v50; // r1
  int v51; // [sp+0h] [bp-20h]

  v6 = *(_DWORD *)(a2 + 16);
  if ( v6 >= *(_DWORD *)(a2 + 12) )
  {
    if ( !*(_BYTE *)(a2 + 28) )
    {
      v7 = *(void **)(a2 + 4);
      v8 = *(FILE **)a2;
      v9 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
      v10 = fread(v7, 1u, v9, v8);
      v11 = *(_QWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 20) = v10;
      *(_DWORD *)(a2 + 12) = v11 + v10 - 1;
      *(_DWORD *)(a2 + 16) = v11;
      if ( v10 < HIDWORD(v11) )
      {
        *(_BYTE *)(v11 + v10) = 0;
        v12 = *(_DWORD *)(a2 + 12);
        *(_BYTE *)(a2 + 28) = 1;
        *(_DWORD *)(a2 + 12) = v12 + 1;
      }
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = v6 + 1;
  }
  v13 = *(_QWORD *)(a3 + 36);
  if ( HIDWORD(v13) - (int)v13 <= 15 )
  {
    sub_70EA2(a3 + 24, 1);
    LODWORD(v13) = *(_DWORD *)(a3 + 36);
  }
  *(_DWORD *)(a3 + 36) = v13 + 16;
  *(_QWORD *)v13 = 0LL;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_WORD *)(v13 + 14) = 4;
  while ( 1 )
  {
    result = *(unsigned __int8 **)(a2 + 16);
    v15 = *result;
    if ( (unsigned int)(v15 - 9) > 0x17 || ((1 << (v15 - 9)) & 0x800013) == 0 )
      break;
    if ( (unsigned int)result < *(_DWORD *)(a2 + 12) )
    {
      *(_DWORD *)(a2 + 16) = result + 1;
    }
    else if ( !*(_BYTE *)(a2 + 28) )
    {
      v16 = *(_QWORD *)a2;
      v17 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
      v18 = fread((void *)HIDWORD(v16), 1u, v17, (FILE *)v16);
      v19 = *(_QWORD *)(a2 + 4);
      *(_DWORD *)(a2 + 20) = v18;
      *(_DWORD *)(a2 + 12) = v19 + v18 - 1;
      *(_DWORD *)(a2 + 16) = v19;
      if ( v18 < HIDWORD(v19) )
      {
        *(_BYTE *)(v19 + v18) = 0;
        v20 = *(_DWORD *)(a2 + 12);
        *(_BYTE *)(a2 + 28) = 1;
        *(_DWORD *)(a2 + 12) = v20 + 1;
      }
    }
  }
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( v15 == 93 )
    {
      if ( (unsigned int)result >= *(_DWORD *)(a2 + 12) )
      {
        if ( !*(_BYTE *)(a2 + 28) )
        {
          v21 = *(_QWORD *)a2;
          v22 = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
          v23 = fread((void *)HIDWORD(v21), 1u, v22, (FILE *)v21);
          v24 = *(_QWORD *)(a2 + 4);
          *(_DWORD *)(a2 + 20) = v23;
          *(_DWORD *)(a2 + 12) = v24 + v23 - 1;
          *(_DWORD *)(a2 + 16) = v24;
          if ( v23 < HIDWORD(v24) )
          {
            *(_BYTE *)(v24 + v23) = 0;
            v25 = *(_DWORD *)(a2 + 12);
            *(_BYTE *)(a2 + 28) = 1;
            *(_DWORD *)(a2 + 12) = v25 + 1;
          }
        }
      }
      else
      {
        *(_DWORD *)(a2 + 16) = result + 1;
      }
      result = *(unsigned __int8 **)(a3 + 36);
      *((_WORD *)result - 1) = 4;
      *((_DWORD *)result - 4) = 0;
      *((_DWORD *)result - 3) = 0;
      *((_DWORD *)result - 2) = 0;
    }
    else
    {
      v51 = 0;
      do
      {
        sub_6EF94(a1, a2, a3);
        result = *(unsigned __int8 **)(a1 + 24);
        if ( result )
          break;
        while ( 1 )
        {
          result = *(unsigned __int8 **)(a2 + 16);
          v26 = *result;
          if ( (unsigned int)(v26 - 9) > 0x17 || ((1 << (v26 - 9)) & 0x800013) == 0 )
            break;
          if ( (unsigned int)result < *(_DWORD *)(a2 + 12) )
          {
            *(_DWORD *)(a2 + 16) = result + 1;
          }
          else if ( !*(_BYTE *)(a2 + 28) )
          {
            v27 = *(_QWORD *)a2;
            v28 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
            v29 = fread((void *)HIDWORD(v27), 1u, v28, (FILE *)v27);
            v30 = *(_QWORD *)(a2 + 4);
            *(_DWORD *)(a2 + 20) = v29;
            *(_DWORD *)(a2 + 12) = v30 + v29 - 1;
            *(_DWORD *)(a2 + 16) = v30;
            if ( v29 < HIDWORD(v30) )
            {
              *(_BYTE *)(v30 + v29) = 0;
              v31 = *(_DWORD *)(a2 + 12);
              *(_BYTE *)(a2 + 28) = 1;
              *(_DWORD *)(a2 + 12) = v31 + 1;
            }
          }
        }
        if ( *(_DWORD *)(a1 + 24) )
          break;
        v32 = v51 + 1;
        if ( v26 != 44 )
        {
          if ( v26 == 93 )
          {
            if ( (unsigned int)result >= *(_DWORD *)(a2 + 12) )
            {
              if ( !*(_BYTE *)(a2 + 28) )
              {
                v44 = *(_QWORD *)a2;
                v45 = *(_DWORD *)(a2 + 8);
                *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
                v46 = fread((void *)HIDWORD(v44), 1u, v45, (FILE *)v44);
                v47 = *(_QWORD *)(a2 + 4);
                *(_DWORD *)(a2 + 20) = v46;
                v48 = (_BYTE *)(v47 + v46);
                *(_DWORD *)(a2 + 12) = v47 + v46 - 1;
                *(_DWORD *)(a2 + 16) = v47;
                v32 = v51 + 1;
                if ( v46 < HIDWORD(v47) )
                {
                  *v48 = 0;
                  v49 = *(_DWORD *)(a2 + 12);
                  *(_BYTE *)(a2 + 28) = 1;
                  *(_DWORD *)(a2 + 12) = v49 + 1;
                }
              }
            }
            else
            {
              *(_DWORD *)(a2 + 16) = result + 1;
            }
            v50 = (void *)(*(_DWORD *)(a3 + 36) - 16 * v32);
            *(_DWORD *)(a3 + 36) = v50;
            return (unsigned __int8 *)sub_71498((int)v50 - 16, v50);
          }
          else
          {
            result = &result[*(_DWORD *)(a2 + 24) - *(_DWORD *)(a2 + 4)];
            *(_DWORD *)(a1 + 24) = 7;
            *(_DWORD *)(a1 + 28) = result;
          }
          return result;
        }
        v33 = *(_DWORD *)(a2 + 12);
        ++v51;
        if ( (unsigned int)result >= v33 )
        {
          if ( !*(_BYTE *)(a2 + 28) )
          {
LABEL_41:
            v34 = *(FILE **)a2;
            v35 = *(void **)(a2 + 4);
            v36 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 24) += *(_DWORD *)(a2 + 20);
            v37 = fread(v35, 1u, v36, v34);
            v38 = *(_DWORD *)(a2 + 4);
            v39 = *(_DWORD *)(a2 + 8);
            *(_DWORD *)(a2 + 16) = v38;
            v33 = v38 + v37 - 1;
            *(_DWORD *)(a2 + 12) = v33;
            *(_DWORD *)(a2 + 20) = v37;
            if ( v37 < v39 )
            {
              *(_BYTE *)(v38 + v37) = 0;
              v40 = *(_DWORD *)(a2 + 12);
              *(_BYTE *)(a2 + 28) = 1;
              v33 = v40 + 1;
              *(_DWORD *)(a2 + 12) = v40 + 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(a2 + 16) = result + 1;
        }
        v41 = *(unsigned __int8 *)(a2 + 28);
        while ( 1 )
        {
          v42 = *(unsigned __int8 **)(a2 + 16);
          v43 = *v42 - 9;
          if ( v43 > 0x17 || ((1 << v43) & 0x800013) == 0 )
            break;
          if ( (unsigned int)v42 < v33 )
          {
            *(_DWORD *)(a2 + 16) = v42 + 1;
          }
          else if ( !v41 )
          {
            goto LABEL_41;
          }
        }
        result = *(unsigned __int8 **)(a1 + 24);
      }
      while ( !result );
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x70140
// SYMBOL: sub_70140
int __fastcall sub_70140(int a1, __int64 *a2, int a3)
{
  unsigned __int8 *v3; // r6
  int v5; // r10
  int v6; // r8
  void *v7; // r5
  unsigned __int8 *v8; // r11
  int v9; // r4
  FILE *v10; // r3
  size_t v11; // r2
  size_t v12; // r0
  bool v13; // cf
  int v14; // r0
  int v15; // r4
  unsigned int v16; // r12
  __int64 v17; // kr18_8
  size_t v18; // r2
  size_t v19; // r0
  __int64 v20; // r2
  int v21; // r0
  double v22; // d8
  unsigned int v23; // r10
  unsigned __int64 v24; // r2
  unsigned int v25; // r5
  unsigned int v26; // r0
  _DWORD *v27; // r6
  int v28; // r4
  int v29; // r8
  unsigned int v30; // r0
  __int64 v31; // kr20_8
  size_t v32; // r2
  size_t v33; // r0
  size_t v34; // r2
  int v35; // r0
  unsigned int v36; // r0
  __int64 v37; // kr38_8
  size_t v38; // r2
  size_t v39; // r0
  size_t v40; // r2
  int v41; // r0
  unsigned int v42; // r4
  int v43; // r11
  void *v44; // r0
  FILE *v45; // r3
  size_t v46; // r2
  size_t v47; // r0
  int v48; // r0
  int v49; // lr
  int v50; // r11
  void *v51; // r0
  FILE *v52; // r3
  size_t v53; // r2
  size_t v54; // r0
  int v55; // r0
  _DWORD *v56; // r5
  unsigned int v57; // r6
  __int64 v58; // r0
  int v59; // r0
  __int64 v60; // kr90_8
  size_t v61; // r2
  size_t v62; // r0
  size_t v63; // r2
  int v64; // r0
  int v65; // r5
  unsigned int v66; // r5
  void *v67; // r0
  FILE *v68; // r3
  size_t v69; // r2
  size_t v70; // r0
  int v71; // r0
  unsigned int v72; // r0
  int v73; // r1
  unsigned int v74; // r4
  double v75; // d9
  int v76; // r2
  int v77; // r5
  __int64 v78; // krC0_8
  size_t v79; // r2
  size_t v80; // r0
  __int64 v81; // r2
  int v82; // r0
  int v83; // r4
  __int64 v84; // krC8_8
  size_t v85; // r2
  size_t v86; // r0
  __int64 v87; // r2
  _BYTE *v88; // r1
  int v89; // r0
  bool v90; // zf
  unsigned __int8 **v91; // r4
  unsigned int v92; // r11
  unsigned int v93; // r5
  FILE *v94; // r3
  void *v95; // r0
  size_t v96; // r2
  size_t v97; // r0
  int v98; // r2
  size_t v99; // r3
  _BYTE *v100; // r1
  int v101; // r0
  unsigned int v102; // r6
  __int64 v103; // r0
  unsigned int v104; // r2
  double v105; // d9
  int v106; // r0
  int v107; // r10
  __int64 v108; // krD0_8
  size_t v109; // r2
  size_t v110; // r0
  __int64 v111; // r2
  int v112; // r0
  unsigned int v113; // r0
  int v114; // r2
  int v115; // r5
  __int64 v116; // krD8_8
  size_t v117; // r2
  size_t v118; // r0
  __int64 v119; // r2
  _BYTE *v120; // r1
  int v121; // r0
  __int64 v122; // r0
  int v123; // r11
  int v124; // r10
  __int64 v125; // krE0_8
  size_t v126; // r2
  size_t v127; // r0
  __int64 v128; // r2
  int v129; // r0
  unsigned int v130; // r2
  int v131; // r10
  unsigned int v132; // r0
  int v133; // r8
  __int64 v134; // krE8_8
  size_t v135; // r2
  size_t v136; // r0
  __int64 v137; // r2
  int v138; // r0
  int v139; // r0
  double v140; // d8
  int v141; // r4
  __int64 v142; // r0
  void *v143; // r0
  FILE *v144; // r3
  size_t v145; // r2
  size_t v146; // r0
  int v147; // r0
  __int64 v148; // kr108_8
  size_t v149; // r2
  size_t v150; // r0
  __int64 v151; // r2
  __int64 v152; // kr110_8
  size_t v153; // r2
  unsigned int v154; // r3
  signed __int64 v155; // kr120_8
  unsigned int v156; // r5
  int v157; // r4
  int v158; // r4
  bool v159; // cc
  int v162; // [sp+4h] [bp-64h]
  _BYTE *v163; // [sp+Ch] [bp-5Ch]
  int v164; // [sp+10h] [bp-58h]
  unsigned __int8 *v165; // [sp+14h] [bp-54h]
  int v166; // [sp+18h] [bp-50h]
  unsigned int v167; // [sp+1Ch] [bp-4Ch]
  unsigned int v168; // [sp+1Ch] [bp-4Ch]
  unsigned int v169; // [sp+20h] [bp-48h]
  int v170; // [sp+20h] [bp-48h]
  int v171; // [sp+24h] [bp-44h]
  int v172; // [sp+28h] [bp-40h]
  int v173; // [sp+28h] [bp-40h]
  unsigned int v174; // [sp+28h] [bp-40h]
  unsigned int v175; // [sp+28h] [bp-40h]
  int v176; // [sp+28h] [bp-40h]
  _DWORD *v177; // [sp+2Ch] [bp-3Ch]

  v3 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
  v177 = a2 + 2;
  v5 = *((_DWORD *)a2 + 6);
  v6 = *v3;
  v7 = (void *)*((_DWORD *)a2 + 1);
  if ( v6 == 45 )
  {
    if ( (unsigned int)v3 >= *((_DWORD *)a2 + 3) )
    {
      v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
      if ( !*((_BYTE *)a2 + 28) )
      {
        v9 = a3;
        v10 = *(FILE **)a2;
        v11 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) = *((_DWORD *)a2 + 5) + v5;
        v12 = fread(v7, 1u, v11, v10);
        v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
        v13 = v12 >= *((_DWORD *)a2 + 2);
        a3 = v9;
        *((_DWORD *)a2 + 5) = v12;
        *((_DWORD *)a2 + 3) = &v8[v12 - 1];
        *((_DWORD *)a2 + 4) = v8;
        if ( !v13 )
        {
          v8[v12] = 0;
          v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
          v14 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          *((_DWORD *)a2 + 3) = v14 + 1;
        }
      }
    }
    else
    {
      v8 = v3 + 1;
      *v177 = v3 + 1;
    }
    v15 = *v8;
  }
  else
  {
    v15 = *v3;
    v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
  }
  v162 = a3;
  v165 = v3;
  v166 = v6;
  v163 = v7;
  v164 = v5;
  if ( v15 == 48 )
  {
    v16 = *((_DWORD *)a2 + 3);
    v22 = 0.0;
    if ( (unsigned int)v8 >= v16 )
    {
      if ( *((_BYTE *)a2 + 28) )
      {
        HIDWORD(v24) = 0;
      }
      else
      {
        v143 = (void *)*((_DWORD *)a2 + 1);
        v144 = *(FILE **)a2;
        v145 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v146 = fread(v143, 1u, v145, v144);
        v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
        v24 = *((unsigned int *)a2 + 2);
        *((_DWORD *)a2 + 5) = v146;
        v16 = (unsigned int)&v8[v146 - 1];
        *((_DWORD *)a2 + 3) = v16;
        *((_DWORD *)a2 + 4) = v8;
        if ( v146 < (unsigned int)v24 )
        {
          v8[v146] = 0;
          v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
          v147 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          v16 = v147 + 1;
          *((_DWORD *)a2 + 3) = v147 + 1;
        }
      }
      LODWORD(v24) = 0;
      v29 = 0;
      v171 = 0;
      v49 = 0;
      v23 = 0;
      v27 = v177;
    }
    else
    {
      v27 = v177;
      ++v8;
      v24 = 0LL;
      v29 = 0;
      *v177 = v8;
      v49 = 0;
      v171 = 0;
      v23 = 0;
    }
    goto LABEL_71;
  }
  if ( (unsigned int)(v15 - 49) > 8 )
  {
    LODWORD(v142) = 3;
LABEL_168:
    HIDWORD(v142) = &v8[*((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 1)];
    *(_QWORD *)(a1 + 24) = v142;
    return v142;
  }
  v16 = *((_DWORD *)a2 + 3);
  if ( (unsigned int)v8 >= v16 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v17 = *a2;
      v18 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v19 = fread((void *)HIDWORD(v17), 1u, v18, (FILE *)v17);
      v20 = *(__int64 *)((char *)a2 + 4);
      *((_DWORD *)a2 + 5) = v19;
      v16 = v20 + v19 - 1;
      *((_DWORD *)a2 + 3) = v16;
      *((_DWORD *)a2 + 4) = v20;
      if ( v19 < HIDWORD(v20) )
      {
        *(_BYTE *)(v20 + v19) = 0;
        v21 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        v16 = v21 + 1;
        *((_DWORD *)a2 + 3) = v21 + 1;
      }
    }
  }
  else
  {
    *v177 = v8 + 1;
  }
  v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
  v22 = 0.0;
  v23 = v15 - 48;
  HIDWORD(v24) = 0;
  v25 = *v8;
  v26 = v25 - 48;
  if ( v6 != 45 )
  {
    if ( v26 <= 9 )
    {
      v27 = v177;
      v28 = 429496729;
      v29 = 0;
      while ( 1 )
      {
        if ( v23 > 0x19999998 )
        {
          if ( v23 != 429496729 )
          {
LABEL_165:
            v28 = v23;
            goto LABEL_39;
          }
          if ( v25 > 0x35 )
            goto LABEL_39;
        }
        if ( (unsigned int)v8 < v16 )
        {
          *v27 = ++v8;
        }
        else if ( !*((_BYTE *)a2 + 28) )
        {
          v37 = *a2;
          v38 = *((_DWORD *)a2 + 2);
          *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
          v27 = v177;
          v39 = fread((void *)HIDWORD(v37), 1u, v38, (FILE *)v37);
          v40 = *((_DWORD *)a2 + 2);
          v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
          *((_DWORD *)a2 + 5) = v39;
          v16 = (unsigned int)&v8[v39 - 1];
          *((_DWORD *)a2 + 3) = v16;
          *((_DWORD *)a2 + 4) = v8;
          if ( v39 < v40 )
          {
            v8[v39] = 0;
            v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
            v41 = *((_DWORD *)a2 + 3);
            *((_BYTE *)a2 + 28) = 1;
            v16 = v41 + 1;
            *((_DWORD *)a2 + 3) = v41 + 1;
          }
        }
        ++v29;
        v36 = 10 * v23 + v25;
        v25 = *v8;
        v23 = v36 - 48;
        if ( v25 - 48 >= 0xA )
        {
LABEL_51:
          v24 = 0LL;
          v171 = 0;
          v49 = 0;
          goto LABEL_71;
        }
      }
    }
    goto LABEL_169;
  }
  if ( v26 > 9 )
  {
LABEL_169:
    LODWORD(v24) = 0;
    v29 = 0;
    v171 = 0;
    v49 = 0;
    v27 = v177;
    goto LABEL_71;
  }
  v27 = v177;
  v28 = 214748364;
  v29 = 0;
  while ( 1 )
  {
    if ( v23 > 0xCCCCCCB )
    {
      if ( v23 != 214748364 )
        goto LABEL_165;
      if ( v25 > 0x38 )
        break;
    }
    if ( (unsigned int)v8 < v16 )
    {
      *v27 = ++v8;
    }
    else if ( !*((_BYTE *)a2 + 28) )
    {
      v31 = *a2;
      v32 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v27 = v177;
      v33 = fread((void *)HIDWORD(v31), 1u, v32, (FILE *)v31);
      v34 = *((_DWORD *)a2 + 2);
      v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v33;
      v16 = (unsigned int)&v8[v33 - 1];
      *((_DWORD *)a2 + 3) = v16;
      *((_DWORD *)a2 + 4) = v8;
      if ( v33 < v34 )
      {
        v8[v33] = 0;
        v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
        v35 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        v16 = v35 + 1;
        *((_DWORD *)a2 + 3) = v35 + 1;
      }
    }
    ++v29;
    v30 = 10 * v23 + v25;
    v25 = *v8;
    v23 = v30 - 48;
    if ( v25 - 48 >= 0xA )
      goto LABEL_51;
  }
  v25 = 57;
LABEL_39:
  v169 = v28;
  if ( v166 == 45 )
  {
    HIDWORD(v24) = v28;
    LODWORD(v24) = 0;
    while ( 1 )
    {
      v42 = v25;
      if ( __PAIR64__(v24, HIDWORD(v24)) >= 0xCCCCCCCCCCCCCCCLL && (v24 != 0xCCCCCCCC0CCCCCCCLL || v25 > 0x38) )
        break;
      if ( (unsigned int)v8 < v16 )
      {
        *v27 = ++v8;
      }
      else if ( !*((_BYTE *)a2 + 28) )
      {
        v43 = HIDWORD(v24);
        v172 = v24;
        v44 = (void *)*((_DWORD *)a2 + 1);
        v45 = *(FILE **)a2;
        v46 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v27 = v177;
        v47 = fread(v44, 1u, v46, v45);
        HIDWORD(v24) = v43;
        v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
        v13 = v47 >= *((_DWORD *)a2 + 2);
        LODWORD(v24) = v172;
        v16 = (unsigned int)&v8[v47 - 1];
        *((_DWORD *)a2 + 3) = v16;
        *((_DWORD *)a2 + 4) = v8;
        *((_DWORD *)a2 + 5) = v47;
        if ( !v13 )
        {
          v8[v47] = 0;
          v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
          v48 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          v16 = v48 + 1;
          *((_DWORD *)a2 + 3) = v48 + 1;
        }
      }
      v25 = *v8;
      ++v29;
      LODWORD(v24) = (10 * __PAIR64__(v24, HIDWORD(v24)) + v42 - 48) >> 32;
      HIDWORD(v24) = 10 * HIDWORD(v24) + v42 - 48;
      if ( v25 - 48 >= 0xA )
        goto LABEL_69;
    }
  }
  else
  {
    HIDWORD(v24) = v28;
    LODWORD(v24) = 0;
    while ( 1 )
    {
      v42 = v25;
      if ( __PAIR64__(v24, HIDWORD(v24)) >= 0x1999999999999999LL && (v24 != 0x9999999919999999LL || v25 > 0x35) )
        break;
      if ( (unsigned int)v8 < v16 )
      {
        *v27 = ++v8;
      }
      else if ( !*((_BYTE *)a2 + 28) )
      {
        v50 = HIDWORD(v24);
        v173 = v24;
        v51 = (void *)*((_DWORD *)a2 + 1);
        v52 = *(FILE **)a2;
        v53 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v27 = v177;
        v54 = fread(v51, 1u, v53, v52);
        HIDWORD(v24) = v50;
        v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
        v13 = v54 >= *((_DWORD *)a2 + 2);
        LODWORD(v24) = v173;
        v16 = (unsigned int)&v8[v54 - 1];
        *((_DWORD *)a2 + 3) = v16;
        *((_DWORD *)a2 + 4) = v8;
        *((_DWORD *)a2 + 5) = v54;
        if ( !v13 )
        {
          v8[v54] = 0;
          v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
          v55 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          v16 = v55 + 1;
          *((_DWORD *)a2 + 3) = v55 + 1;
        }
      }
      v25 = *v8;
      ++v29;
      LODWORD(v24) = (10 * __PAIR64__(v24, HIDWORD(v24)) + v42 - 48) >> 32;
      HIDWORD(v24) = 10 * HIDWORD(v24) + v42 - 48;
      if ( v25 - 48 >= 0xA )
      {
LABEL_69:
        v22 = 0.0;
        v49 = 1;
        v171 = 0;
        v23 = v169;
        goto LABEL_71;
      }
    }
  }
  v56 = v27;
  v57 = v16;
  v167 = HIDWORD(v24);
  v174 = v24;
  v58 = sub_108CB0(HIDWORD(v24), v24);
  v16 = v57;
  v27 = v56;
  v22 = *(double *)&v58;
  do
  {
    if ( (unsigned int)v8 < v16 )
    {
      *v27 = ++v8;
    }
    else if ( !*((_BYTE *)a2 + 28) )
    {
      v60 = *a2;
      v61 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v27 = v177;
      v62 = fread((void *)HIDWORD(v60), 1u, v61, (FILE *)v60);
      v63 = *((_DWORD *)a2 + 2);
      v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 5) = v62;
      v16 = (unsigned int)&v8[v62 - 1];
      *((_DWORD *)a2 + 3) = v16;
      *((_DWORD *)a2 + 4) = v8;
      if ( v62 < v63 )
      {
        v8[v62] = 0;
        v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
        v64 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        v16 = v64 + 1;
        *((_DWORD *)a2 + 3) = v64 + 1;
      }
    }
    v59 = v42 - 48;
    v42 = *v8;
    v22 = (double)v59 + v22 * 10.0;
  }
  while ( v42 - 48 < 0xA );
  v23 = v169;
  v24 = __PAIR64__(v167, v174);
  v49 = 1;
  v171 = 1;
LABEL_71:
  v65 = *v8;
  if ( v65 != 46 )
  {
    v170 = 0;
    goto LABEL_100;
  }
  v175 = v24;
  if ( (unsigned int)v8 >= v16 )
  {
    if ( !*((_BYTE *)a2 + 28) )
    {
      v66 = HIDWORD(v24);
      v67 = (void *)*((_DWORD *)a2 + 1);
      v68 = *(FILE **)a2;
      v69 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v27 = v177;
      v70 = fread(v67, 1u, v69, v68);
      v8 = (unsigned __int8 *)*((_DWORD *)a2 + 1);
      v13 = v70 >= *((_DWORD *)a2 + 2);
      v24 = __PAIR64__(v66, v175);
      v16 = (unsigned int)&v8[v70 - 1];
      *((_DWORD *)a2 + 3) = v16;
      *((_DWORD *)a2 + 4) = v8;
      *((_DWORD *)a2 + 5) = v70;
      if ( !v13 )
      {
        v8[v70] = 0;
        v8 = (unsigned __int8 *)*((_DWORD *)a2 + 4);
        v71 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        v16 = v71 + 1;
        *((_DWORD *)a2 + 3) = v71 + 1;
      }
    }
  }
  else
  {
    *v27 = ++v8;
  }
  v65 = *v8;
  if ( (unsigned int)(v65 - 48) >= 0xA )
  {
    LODWORD(v142) = 14;
    goto LABEL_168;
  }
  v72 = v23;
  v73 = v49;
  v168 = HIDWORD(v24);
  if ( v49 )
  {
    v72 = HIDWORD(v24);
    v73 = v24;
  }
  v74 = v16;
  v75 = COERCE_DOUBLE(sub_108CB0(v72, v73));
  v16 = v74;
  v76 = 0;
  if ( v171 )
    v75 = v22;
  do
  {
    if ( v29 > 16 )
    {
      if ( (unsigned int)v8 < v16 )
      {
        *v27 = v8 + 1;
      }
      else if ( !*((_BYTE *)a2 + 28) )
      {
        v77 = v76;
        v78 = *a2;
        v79 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v80 = fread((void *)HIDWORD(v78), 1u, v79, (FILE *)v78);
        v81 = *(__int64 *)((char *)a2 + 4);
        *((_DWORD *)a2 + 5) = v80;
        v16 = v81 + v80 - 1;
        *((_DWORD *)a2 + 3) = v16;
        *((_DWORD *)a2 + 4) = v81;
        if ( v80 < HIDWORD(v81) )
        {
          *(_BYTE *)(v81 + v80) = 0;
          v82 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          v16 = v82 + 1;
          *((_DWORD *)a2 + 3) = v82 + 1;
        }
        v27 = v177;
        v76 = v77;
      }
    }
    else
    {
      if ( (unsigned int)v8 >= v16 )
      {
        if ( !*((_BYTE *)a2 + 28) )
        {
          v83 = v76;
          v84 = *a2;
          v85 = *((_DWORD *)a2 + 2);
          *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
          v27 = v177;
          v86 = fread((void *)HIDWORD(v84), 1u, v85, (FILE *)v84);
          v87 = *(__int64 *)((char *)a2 + 4);
          *((_DWORD *)a2 + 5) = v86;
          v88 = (_BYTE *)(v87 + v86);
          v16 = v87 + v86 - 1;
          *((_DWORD *)a2 + 3) = v16;
          *((_DWORD *)a2 + 4) = v87;
          v76 = v83;
          if ( v86 < HIDWORD(v87) )
          {
            *v88 = 0;
            v89 = *((_DWORD *)a2 + 3);
            *((_BYTE *)a2 + 28) = 1;
            v16 = v89 + 1;
            *((_DWORD *)a2 + 3) = v89 + 1;
          }
        }
      }
      else
      {
        *v27 = v8 + 1;
      }
      --v76;
      if ( (double)(v65 - 48) + v75 * 10.0 > 0.0 )
        ++v29;
      v75 = (double)(v65 - 48) + v75 * 10.0;
    }
    v8 = (unsigned __int8 *)*v27;
    v65 = *(unsigned __int8 *)*v27;
  }
  while ( (unsigned int)(v65 - 48) < 0xA );
  v22 = v75;
  v170 = v76;
  v24 = __PAIR64__(v168, v175);
  v171 = 1;
LABEL_100:
  v90 = v65 == 101;
  if ( v65 != 101 )
    v90 = v65 == 69;
  if ( v90 )
  {
    if ( (unsigned int)v8 >= v16 )
    {
      v91 = (unsigned __int8 **)v27;
      if ( !*((_BYTE *)a2 + 28) )
      {
        v92 = HIDWORD(v24);
        v93 = v24;
        v94 = *(FILE **)a2;
        v95 = (void *)*((_DWORD *)a2 + 1);
        v96 = *((_DWORD *)a2 + 2);
        *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
        v91 = (unsigned __int8 **)v177;
        v97 = fread(v95, 1u, v96, v94);
        v98 = *((_DWORD *)a2 + 1);
        v99 = *((_DWORD *)a2 + 2);
        v100 = (_BYTE *)(v98 + v97);
        *((_DWORD *)a2 + 4) = v98;
        v16 = v98 + v97 - 1;
        v13 = v97 >= v99;
        v24 = __PAIR64__(v92, v93);
        *((_DWORD *)a2 + 3) = v16;
        *((_DWORD *)a2 + 5) = v97;
        if ( !v13 )
        {
          *v100 = 0;
          v101 = *((_DWORD *)a2 + 3);
          *((_BYTE *)a2 + 28) = 1;
          v16 = v101 + 1;
          *((_DWORD *)a2 + 3) = v101 + 1;
        }
      }
    }
    else
    {
      *v27 = v8 + 1;
      v91 = (unsigned __int8 **)v27;
    }
    if ( v49 )
      v23 = HIDWORD(v24);
    else
      LODWORD(v24) = 0;
    v102 = v16;
    v103 = sub_108CB0(v23, v24);
    v104 = (unsigned int)*v91;
    v105 = *(double *)&v103;
    v106 = **v91;
    if ( v171 )
      v105 = v22;
    if ( v106 == 43 )
    {
      if ( v104 < v102 )
      {
        *v91 = (unsigned __int8 *)(v104 + 1);
        v107 = 0;
LABEL_123:
        v113 = (unsigned int)*v91;
        v114 = v170;
        v115 = **v91 - 48;
        if ( (unsigned int)v115 > 9 )
        {
          LODWORD(v142) = v113 + *((_DWORD *)a2 + 6) - *((_DWORD *)a2 + 1);
          *(_DWORD *)(a1 + 24) = 15;
          *(_DWORD *)(a1 + 28) = v142;
          return v142;
        }
        if ( v113 >= v102 )
        {
          if ( !*((_BYTE *)a2 + 28) )
          {
            v116 = *a2;
            v117 = *((_DWORD *)a2 + 2);
            *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
            v91 = (unsigned __int8 **)v177;
            v118 = fread((void *)HIDWORD(v116), 1u, v117, (FILE *)v116);
            v119 = *(__int64 *)((char *)a2 + 4);
            *((_DWORD *)a2 + 5) = v118;
            v120 = (_BYTE *)(v119 + v118);
            v102 = v119 + v118 - 1;
            *((_DWORD *)a2 + 3) = v102;
            *((_DWORD *)a2 + 4) = v119;
            v114 = v170;
            if ( v118 < HIDWORD(v119) )
            {
              *v120 = 0;
              v121 = *((_DWORD *)a2 + 3);
              *((_BYTE *)a2 + 28) = 1;
              v102 = v121 + 1;
              *((_DWORD *)a2 + 3) = v121 + 1;
            }
          }
        }
        else
        {
          *v91 = (unsigned __int8 *)(v113 + 1);
        }
        v176 = v107;
        if ( v107 )
        {
          HIDWORD(v122) = *((_DWORD *)a2 + 4);
          v123 = (unsigned __int8)*(_BYTE *)HIDWORD(v122);
          if ( (unsigned int)(v123 - 48) <= 9 )
          {
            v124 = (v114 + 2147483639) / 10;
            while ( 1 )
            {
              if ( HIDWORD(v122) >= v102 )
              {
                if ( !*((_BYTE *)a2 + 28) )
                {
                  v125 = *a2;
                  v126 = *((_DWORD *)a2 + 2);
                  *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
                  v91 = (unsigned __int8 **)v177;
                  v127 = fread((void *)HIDWORD(v125), 1u, v126, (FILE *)v125);
                  v128 = *(__int64 *)((char *)a2 + 4);
                  *((_DWORD *)a2 + 5) = v127;
                  v102 = v128 + v127 - 1;
                  *((_DWORD *)a2 + 3) = v102;
                  *((_DWORD *)a2 + 4) = v128;
                  if ( v127 < HIDWORD(v128) )
                  {
                    *(_BYTE *)(v128 + v127) = 0;
                    v129 = *((_DWORD *)a2 + 3);
                    *((_BYTE *)a2 + 28) = 1;
                    v102 = v129 + 1;
                    *((_DWORD *)a2 + 3) = v129 + 1;
                  }
                }
              }
              else
              {
                *v91 = (unsigned __int8 *)(HIDWORD(v122) + 1);
              }
              HIDWORD(v122) = *v91;
              v115 = 10 * v115 + v123 - 48;
              v130 = **v91 - 48;
              if ( v115 > v124 )
                break;
              v123 = **v91;
              if ( v130 >= 0xA )
                goto LABEL_149;
            }
            if ( v130 <= 9 )
            {
              do
              {
                if ( HIDWORD(v122) >= v102 )
                {
                  if ( !*((_BYTE *)a2 + 28) )
                  {
                    v152 = *a2;
                    v153 = *((_DWORD *)a2 + 2);
                    *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
                    LODWORD(v122) = fread((void *)HIDWORD(v152), 1u, v153, (FILE *)v152);
                    v154 = *((_DWORD *)a2 + 2);
                    HIDWORD(v122) = *((_DWORD *)a2 + 1);
                    *((_DWORD *)a2 + 5) = v122;
                    *((_DWORD *)a2 + 3) = HIDWORD(v122) + v122 - 1;
                    *((_DWORD *)a2 + 4) = HIDWORD(v122);
                    v102 = HIDWORD(v122) + v122 - 1;
                    if ( (unsigned int)v122 < v154 )
                    {
                      *(_BYTE *)(HIDWORD(v122) + v122) = 0;
                      v122 = *(__int64 *)((char *)a2 + 12);
                      *((_BYTE *)a2 + 28) = 1;
                      LODWORD(v122) = v122 + 1;
                      *((_DWORD *)a2 + 3) = v122;
                      v102 = v122;
                    }
                  }
                }
                else
                {
                  *v177 = ++HIDWORD(v122);
                }
              }
              while ( (unsigned int)(unsigned __int8)*(_BYTE *)HIDWORD(v122) - 48 < 0xA );
            }
          }
        }
        else
        {
          v131 = 308 - v114;
          while ( 1 )
          {
            v132 = (unsigned int)*v91;
            v133 = **v91;
            if ( (unsigned int)(v133 - 48) > 9 )
              break;
            if ( v132 < v102 )
            {
              *v91 = (unsigned __int8 *)(v132 + 1);
            }
            else if ( !*((_BYTE *)a2 + 28) )
            {
              v134 = *a2;
              v135 = *((_DWORD *)a2 + 2);
              *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
              v91 = (unsigned __int8 **)v177;
              v136 = fread((void *)HIDWORD(v134), 1u, v135, (FILE *)v134);
              v137 = *(__int64 *)((char *)a2 + 4);
              *((_DWORD *)a2 + 5) = v136;
              v102 = v137 + v136 - 1;
              *((_DWORD *)a2 + 3) = v102;
              *((_DWORD *)a2 + 4) = v137;
              if ( v136 < HIDWORD(v137) )
              {
                *(_BYTE *)(v137 + v136) = 0;
                v138 = *((_DWORD *)a2 + 3);
                *((_BYTE *)a2 + 28) = 1;
                v102 = v138 + 1;
                *((_DWORD *)a2 + 3) = v138 + 1;
              }
            }
            v115 = 10 * v115 + v133 - 48;
            if ( v115 > v131 )
              goto LABEL_158;
          }
        }
LABEL_149:
        if ( v176 )
          v115 = -v115;
LABEL_151:
        v139 = v170 + v115;
        if ( v170 + v115 >= -308 )
        {
          v141 = v162;
          if ( v139 < 0 )
            v140 = v105 / dbl_50F90[-v139];
          else
            v140 = v105 * dbl_50F90[v139];
        }
        else
        {
          v140 = 0.0;
          v141 = v162;
          if ( (unsigned int)v139 < 0xFFFFFD98 )
          {
LABEL_159:
            v142 = *(_QWORD *)(v141 + 36);
            if ( v166 == 45 )
              v140 = -v140;
            if ( HIDWORD(v142) - (int)v142 <= 15 )
            {
              sub_70EA2(v141 + 24, 1);
              LODWORD(v142) = *(_DWORD *)(v141 + 36);
            }
            *(_DWORD *)(v141 + 36) = v142 + 16;
            *(double *)v142 = v140;
            *(_DWORD *)(v142 + 8) = 0;
            *(_DWORD *)(v142 + 12) = 34996224;
            return v142;
          }
          v140 = v105 / 1.0e308 / dbl_50F90[-308 - v139];
        }
        if ( v140 > 1.79769313e308 )
        {
LABEL_158:
          *(_DWORD *)(a1 + 24) = 13;
          LODWORD(v142) = &v165[v164] - v163;
          *(_DWORD *)(a1 + 28) = v142;
          return v142;
        }
        goto LABEL_159;
      }
      if ( *((_BYTE *)a2 + 28) )
      {
LABEL_118:
        v107 = 0;
        goto LABEL_123;
      }
      v108 = *a2;
      v109 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v110 = fread((void *)HIDWORD(v108), 1u, v109, (FILE *)v108);
      v111 = *(__int64 *)((char *)a2 + 4);
      v107 = 0;
      *((_DWORD *)a2 + 5) = v110;
      v102 = v111 + v110 - 1;
      *((_DWORD *)a2 + 3) = v102;
      *((_DWORD *)a2 + 4) = v111;
      if ( v110 < HIDWORD(v111) )
      {
        *(_BYTE *)(v111 + v110) = 0;
        v112 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
LABEL_121:
        v102 = v112 + 1;
        *((_DWORD *)a2 + 3) = v112 + 1;
      }
    }
    else
    {
      if ( v106 != 45 )
        goto LABEL_118;
      if ( v104 < v102 )
      {
        *v91 = (unsigned __int8 *)(v104 + 1);
        v107 = 1;
        goto LABEL_123;
      }
      if ( *((_BYTE *)a2 + 28) )
      {
        v107 = 1;
        goto LABEL_123;
      }
      v107 = 1;
      v148 = *a2;
      v149 = *((_DWORD *)a2 + 2);
      *((_DWORD *)a2 + 6) += *((_DWORD *)a2 + 5);
      v150 = fread((void *)HIDWORD(v148), 1u, v149, (FILE *)v148);
      v151 = *(__int64 *)((char *)a2 + 4);
      *((_DWORD *)a2 + 5) = v150;
      v102 = v151 + v150 - 1;
      *((_DWORD *)a2 + 3) = v102;
      *((_DWORD *)a2 + 4) = v151;
      if ( v150 < HIDWORD(v151) )
      {
        *(_BYTE *)(v151 + v150) = 0;
        v112 = *((_DWORD *)a2 + 3);
        *((_BYTE *)a2 + 28) = 1;
        goto LABEL_121;
      }
    }
    v91 = (unsigned __int8 **)v177;
    goto LABEL_123;
  }
  if ( v171 )
  {
    v115 = 0;
    v105 = v22;
    goto LABEL_151;
  }
  if ( v49 )
  {
    v155 = v24;
    if ( v166 == 45 )
    {
      v156 = -HIDWORD(v24);
      v157 = (unsigned __int64)-__SPAIR64__(v24, HIDWORD(v24)) >> 32;
      LODWORD(v142) = *(_DWORD *)(v162 + 36);
      if ( *(_DWORD *)(v162 + 40) - (int)v142 <= 15 )
      {
        sub_70EA2(v162 + 24, 1);
        LODWORD(v142) = *(_DWORD *)(v162 + 36);
      }
      *(_DWORD *)(v162 + 36) = v142 + 16;
      *(_DWORD *)v142 = v156;
      *(_DWORD *)(v142 + 4) = v157;
      *(_DWORD *)(v142 + 8) = 0;
      *(_DWORD *)(v142 + 12) = 9830400;
      if ( v157 < 0 )
      {
        if ( __PAIR64__(v157, v156) >= 0xFFFFFFFF80000000LL )
          *(_WORD *)(v142 + 14) = 182;
      }
      else
      {
        WORD2(v142) = 406;
        if ( !v157 )
          WORD2(v142) = 470;
        *(_WORD *)(v142 + 14) = WORD2(v142);
        if ( !((v156 >> 31) | (2 * v157) | ((unsigned int)v157 >> 31)) )
          *(_WORD *)(v142 + 14) = WORD2(v142) | 0x20;
      }
    }
    else
    {
      LODWORD(v142) = *(_DWORD *)(v162 + 36);
      if ( *(_DWORD *)(v162 + 40) - (int)v142 <= 15 )
      {
        sub_70EA2(v162 + 24, 1);
        LODWORD(v142) = *(_DWORD *)(v162 + 36);
      }
      *(_DWORD *)(v162 + 36) = v142 + 16;
      *(_DWORD *)(v142 + 4) = v155;
      *(_DWORD *)(v142 + 8) = 0;
      *(_DWORD *)(v142 + 12) = 0;
      WORD2(v142) = 278;
      *(_DWORD *)v142 = HIDWORD(v155);
      if ( (int)v155 > -1 )
        WORD2(v142) = 406;
      *(_WORD *)(v142 + 14) = WORD2(v142);
      if ( !(_DWORD)v155 )
      {
        *(_WORD *)(v142 + 14) = WORD2(v142) | 0x40;
        if ( v155 >= 0 )
          *(_WORD *)(v142 + 14) = WORD2(v142) | 0x60;
      }
    }
  }
  else
  {
    if ( v166 == 45 )
    {
      v158 = -v23;
      LODWORD(v142) = *(_DWORD *)(v162 + 36);
      if ( *(_DWORD *)(v162 + 40) - (int)v142 <= 15 )
      {
        sub_70EA2(v162 + 24, 1);
        LODWORD(v142) = *(_DWORD *)(v162 + 36);
      }
      *(_DWORD *)(v162 + 36) = v142 + 16;
      *(_DWORD *)(v142 + 8) = 0;
      *(_DWORD *)(v142 + 12) = 0;
      WORD2(v142) = 182;
      *(_QWORD *)v142 = v158;
      v159 = v158 <= -1;
    }
    else
    {
      LODWORD(v142) = *(_DWORD *)(v162 + 36);
      if ( *(_DWORD *)(v162 + 40) - (int)v142 <= 15 )
      {
        sub_70EA2(v162 + 24, 1);
        LODWORD(v142) = *(_DWORD *)(v162 + 36);
      }
      *(_DWORD *)(v162 + 36) = v142 + 16;
      v159 = (int)v23 <= -1;
      *(_DWORD *)v142 = v23;
      *(_DWORD *)(v142 + 4) = 0;
      *(_DWORD *)(v142 + 8) = 0;
      *(_DWORD *)(v142 + 12) = 0;
      WORD2(v142) = 470;
    }
    if ( !v159 )
      WORD2(v142) = 502;
    *(_WORD *)(v142 + 14) = WORD2(v142);
  }
  return v142;
}


// ======================================================================
