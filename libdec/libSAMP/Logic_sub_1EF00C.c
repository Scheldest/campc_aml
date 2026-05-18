// ADDR: 0x1ef15c
// SYMBOL: sub_1EF15C
int __fastcall sub_1EF15C(__int64 *a1, _DWORD *a2)
{
  _DWORD *v4; // r1
  __int64 v5; // kr08_8
  unsigned int v6; // r6
  int v7; // r6
  int v8; // r1
  int v9; // r2
  int v10; // r0
  __int64 v11; // kr18_8
  __int64 v12; // kr20_8
  int v13; // r2
  __int64 v15; // [sp+0h] [bp-28h] BYREF
  __int64 v16; // [sp+8h] [bp-20h]
  int v17; // [sp+10h] [bp-18h]
  int v18; // [sp+14h] [bp-14h]

  v4 = (_DWORD *)*((_DWORD *)a1 + 2);
  if ( v4 == *((_DWORD **)a1 + 3) )
  {
    v5 = *a1;
    if ( HIDWORD(v5) <= (unsigned int)v5 )
    {
      v7 = (int)((int)v4 - v5) >> 1;
      if ( v4 == (_DWORD *)v5 )
        v7 = 1;
      v17 = (int)a1 + 12;
      LODWORD(v15) = sub_1EF628();
      LODWORD(v16) = (v7 & 0xFFFFFFFC) + v15;
      HIDWORD(v15) = v16;
      v9 = *((_DWORD *)a1 + 2);
      v8 = *((_DWORD *)a1 + 1);
      HIDWORD(v16) = v15 + 4 * v7;
      sub_1EF5D6(&v15, v8, v9);
      v10 = HIDWORD(v15);
      v11 = *a1;
      *(_DWORD *)a1 = v15;
      *((_DWORD *)a1 + 1) = v10;
      v12 = a1[1];
      v13 = HIDWORD(v16);
      *((_DWORD *)a1 + 2) = v16;
      *((_DWORD *)a1 + 3) = v13;
      v15 = v11;
      v16 = v12;
      sub_1EF5C0(&v15);
      v4 = (_DWORD *)*((_DWORD *)a1 + 2);
    }
    else
    {
      v6 = (((HIDWORD(v5) - (int)v5) >> 2) + 1 + ((unsigned int)(((HIDWORD(v5) - (int)v5) >> 2) + 1) >> 31)) >> 1;
      v4 = (_DWORD *)sub_1EF5F2((void *)HIDWORD(v5), (int)v4, (void *)(HIDWORD(v5) - 4 * v6));
      *((_DWORD *)a1 + 2) = v4;
      *((_DWORD *)a1 + 1) -= 4 * v6;
    }
  }
  *v4 = *a2;
  *((_DWORD *)a1 + 2) += 4;
  return v18;
}


// ======================================================================
// ADDR: 0x1ef238
// SYMBOL: sub_1EF238
int __fastcall sub_1EF238(__int64 *a1, _DWORD *a2)
{
  _DWORD *v4; // r1
  __int64 v5; // kr08_8
  unsigned int v6; // r6
  int v7; // r6
  int v8; // r1
  int v9; // r2
  int v10; // r0
  __int64 v11; // kr18_8
  __int64 v12; // kr20_8
  int v13; // r2
  __int64 v15; // [sp+0h] [bp-28h] BYREF
  __int64 v16; // [sp+8h] [bp-20h]
  int v17; // [sp+10h] [bp-18h]
  int v18; // [sp+14h] [bp-14h]

  v4 = (_DWORD *)*((_DWORD *)a1 + 2);
  if ( v4 == *((_DWORD **)a1 + 3) )
  {
    v5 = *a1;
    if ( HIDWORD(v5) <= (unsigned int)v5 )
    {
      v7 = (int)((int)v4 - v5) >> 1;
      if ( v4 == (_DWORD *)v5 )
        v7 = 1;
      v17 = (int)a1 + 12;
      LODWORD(v15) = sub_1EF628();
      LODWORD(v16) = (v7 & 0xFFFFFFFC) + v15;
      HIDWORD(v15) = v16;
      v9 = *((_DWORD *)a1 + 2);
      v8 = *((_DWORD *)a1 + 1);
      HIDWORD(v16) = v15 + 4 * v7;
      sub_1EF5D6(&v15, v8, v9);
      v10 = HIDWORD(v15);
      v11 = *a1;
      *(_DWORD *)a1 = v15;
      *((_DWORD *)a1 + 1) = v10;
      v12 = a1[1];
      v13 = HIDWORD(v16);
      *((_DWORD *)a1 + 2) = v16;
      *((_DWORD *)a1 + 3) = v13;
      v15 = v11;
      v16 = v12;
      sub_1EF5C0(&v15);
      v4 = (_DWORD *)*((_DWORD *)a1 + 2);
    }
    else
    {
      v6 = (((HIDWORD(v5) - (int)v5) >> 2) + 1 + ((unsigned int)(((HIDWORD(v5) - (int)v5) >> 2) + 1) >> 31)) >> 1;
      v4 = (_DWORD *)sub_1EF5F2((void *)HIDWORD(v5), (int)v4, (void *)(HIDWORD(v5) - 4 * v6));
      *((_DWORD *)a1 + 2) = v4;
      *((_DWORD *)a1 + 1) -= 4 * v6;
    }
  }
  *v4 = *a2;
  *((_DWORD *)a1 + 2) += 4;
  return v18;
}


// ======================================================================
// ADDR: 0x1ef314
// SYMBOL: sub_1EF314
int __fastcall sub_1EF314(__int64 *a1, _DWORD *a2)
{
  void *v4; // r0
  __int64 v5; // kr00_8
  __int64 v6; // kr08_8
  int v7; // r1
  int v8; // r0
  int v9; // r6
  int v10; // r0
  __int64 v11; // kr10_8
  int v12; // r0
  __int64 v13; // kr18_8
  __int64 v14; // kr20_8
  int v15; // r2
  __int64 v17; // [sp+0h] [bp-28h] BYREF
  __int64 v18; // [sp+8h] [bp-20h]
  int v19; // [sp+10h] [bp-18h]
  int v20; // [sp+14h] [bp-14h]

  v5 = *a1;
  v4 = (void *)*((_DWORD *)a1 + 1);
  if ( v4 == (void *)v5 )
  {
    v6 = a1[1];
    if ( (unsigned int)v6 >= HIDWORD(v6) )
    {
      v8 = HIDWORD(v6) - (_DWORD)v4;
      v9 = v8 >> 1;
      if ( !v8 )
        v9 = 1;
      v19 = (int)a1 + 12;
      v10 = sub_1EF628();
      HIDWORD(v18) = v10 + 4 * v9;
      LODWORD(v17) = v10;
      v11 = *(__int64 *)((char *)a1 + 4);
      HIDWORD(v17) = v10 + ((v9 + 3) & 0xFFFFFFFC);
      LODWORD(v18) = HIDWORD(v17);
      sub_1EF5D6(&v17, v11, HIDWORD(v11));
      v12 = HIDWORD(v17);
      v13 = *a1;
      *(_DWORD *)a1 = v17;
      *((_DWORD *)a1 + 1) = v12;
      v14 = a1[1];
      v15 = HIDWORD(v18);
      *((_DWORD *)a1 + 2) = v18;
      *((_DWORD *)a1 + 3) = v15;
      v17 = v13;
      v18 = v14;
      sub_1EF5C0(&v17);
      v4 = (void *)*((_DWORD *)a1 + 1);
    }
    else
    {
      v4 = (void *)sub_1EF60C(v4);
      v7 = *((_DWORD *)a1 + 2);
      *((_DWORD *)a1 + 1) = v4;
      *((_DWORD *)a1 + 2) = v7
                          + ((2
                            * (((HIDWORD(v6) - (int)v6) >> 2)
                             + 1
                             + ((unsigned int)(((HIDWORD(v6) - (int)v6) >> 2) + 1) >> 31))) & 0xFFFFFFFD);
    }
  }
  *((_DWORD *)v4 - 1) = *a2;
  *((_DWORD *)a1 + 1) -= 4;
  return v20;
}


// ======================================================================
// ADDR: 0x1ef3f4
// SYMBOL: sub_1EF3F4
int __fastcall sub_1EF3F4(__int64 *a1, _DWORD *a2)
{
  _DWORD *v4; // r1
  __int64 v5; // kr08_8
  unsigned int v6; // r6
  int v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r0
  __int64 v12; // kr18_8
  __int64 v13; // kr20_8
  int v14; // r2
  __int64 v16; // [sp+0h] [bp-28h] BYREF
  __int64 v17; // [sp+8h] [bp-20h]
  int v18; // [sp+10h] [bp-18h]
  int v19; // [sp+14h] [bp-14h]

  v4 = (_DWORD *)*((_DWORD *)a1 + 2);
  if ( v4 == *((_DWORD **)a1 + 3) )
  {
    v5 = *a1;
    if ( HIDWORD(v5) <= (unsigned int)v5 )
    {
      v7 = (int)v4 - v5;
      v18 = *((_DWORD *)a1 + 4);
      v8 = v7 >> 1;
      if ( !v7 )
        v8 = 1;
      LODWORD(v16) = sub_1EF628();
      LODWORD(v17) = (v8 & 0xFFFFFFFC) + v16;
      HIDWORD(v16) = v17;
      v10 = *((_DWORD *)a1 + 2);
      v9 = *((_DWORD *)a1 + 1);
      HIDWORD(v17) = v16 + 4 * v8;
      sub_1EF5D6(&v16, v9, v10);
      v11 = HIDWORD(v16);
      v12 = *a1;
      *(_DWORD *)a1 = v16;
      *((_DWORD *)a1 + 1) = v11;
      v13 = a1[1];
      v14 = HIDWORD(v17);
      *((_DWORD *)a1 + 2) = v17;
      *((_DWORD *)a1 + 3) = v14;
      v16 = v12;
      v17 = v13;
      sub_1EF5C0(&v16);
      v4 = (_DWORD *)*((_DWORD *)a1 + 2);
    }
    else
    {
      v6 = (((HIDWORD(v5) - (int)v5) >> 2) + 1 + ((unsigned int)(((HIDWORD(v5) - (int)v5) >> 2) + 1) >> 31)) >> 1;
      v4 = (_DWORD *)sub_1EF5F2((void *)HIDWORD(v5), (int)v4, (void *)(HIDWORD(v5) - 4 * v6));
      *((_DWORD *)a1 + 2) = v4;
      *((_DWORD *)a1 + 1) -= 4 * v6;
    }
  }
  *v4 = *a2;
  *((_DWORD *)a1 + 2) += 4;
  return v19;
}


// ======================================================================
// ADDR: 0x1ef4d0
// SYMBOL: sub_1EF4D0
int __fastcall sub_1EF4D0(__int64 *a1, _DWORD *a2)
{
  void *v4; // r0
  __int64 v5; // kr00_8
  __int64 v6; // kr08_8
  int v7; // r1
  int v8; // r1
  int v9; // r0
  int v10; // r6
  int v11; // r0
  __int64 v12; // kr10_8
  int v13; // r0
  __int64 v14; // kr18_8
  __int64 v15; // kr20_8
  int v16; // r2
  __int64 v18; // [sp+0h] [bp-28h] BYREF
  __int64 v19; // [sp+8h] [bp-20h]
  int v20; // [sp+10h] [bp-18h]
  int v21; // [sp+14h] [bp-14h]

  v5 = *a1;
  v4 = (void *)*((_DWORD *)a1 + 1);
  if ( v4 == (void *)v5 )
  {
    v6 = a1[1];
    if ( (unsigned int)v6 >= HIDWORD(v6) )
    {
      v8 = *((_DWORD *)a1 + 4);
      v9 = HIDWORD(v6) - (_DWORD)v4;
      v20 = v8;
      v10 = v9 >> 1;
      if ( !v9 )
        v10 = 1;
      v11 = sub_1EF628(v8, v10);
      HIDWORD(v19) = v11 + 4 * v10;
      LODWORD(v18) = v11;
      v12 = *(__int64 *)((char *)a1 + 4);
      HIDWORD(v18) = v11 + ((v10 + 3) & 0xFFFFFFFC);
      LODWORD(v19) = HIDWORD(v18);
      sub_1EF5D6(&v18, v12, HIDWORD(v12));
      v13 = HIDWORD(v18);
      v14 = *a1;
      *(_DWORD *)a1 = v18;
      *((_DWORD *)a1 + 1) = v13;
      v15 = a1[1];
      v16 = HIDWORD(v19);
      *((_DWORD *)a1 + 2) = v19;
      *((_DWORD *)a1 + 3) = v16;
      v18 = v14;
      v19 = v15;
      sub_1EF5C0(&v18);
      v4 = (void *)*((_DWORD *)a1 + 1);
    }
    else
    {
      v4 = (void *)sub_1EF60C(v4);
      v7 = *((_DWORD *)a1 + 2);
      *((_DWORD *)a1 + 1) = v4;
      *((_DWORD *)a1 + 2) = v7
                          + ((2
                            * (((HIDWORD(v6) - (int)v6) >> 2)
                             + 1
                             + ((unsigned int)(((HIDWORD(v6) - (int)v6) >> 2) + 1) >> 31))) & 0xFFFFFFFD);
    }
  }
  *((_DWORD *)v4 - 1) = *a2;
  *((_DWORD *)a1 + 1) -= 4;
  return v21;
}


// ======================================================================
// ADDR: 0x1ef5b0
// SYMBOL: sub_1EF5B0
int __fastcall sub_1EF5B0(int a1)
{
  sub_1EF644(a1, 0);
  return a1;
}


// ======================================================================
// ADDR: 0x1ef5c0
// SYMBOL: sub_1EF5C0
void **__fastcall sub_1EF5C0(void **a1)
{
  sub_1EF652();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
// ADDR: 0x1ef628
// SYMBOL: sub_1EF628
int __fastcall sub_1EF628(int a1, unsigned int a2)
{
  if ( a2 >= 0x40000000 )
    sub_DC8D4((int)"allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
  return operator new[](4 * a2);
}


// ======================================================================
