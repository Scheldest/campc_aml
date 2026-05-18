// ADDR: 0x86c14
// SYMBOL: sub_86C14
_DWORD *__fastcall sub_86C14(_DWORD *result)
{
  result[2] = 0;
  *result = 0;
  return result;
}


// ======================================================================
// ADDR: 0x87112
// SYMBOL: sub_87112
int __fastcall sub_87112(int *a1, _DWORD *a2)
{
  int v2; // r6
  unsigned int v5; // r4
  void *v6; // r0

  v2 = *a1;
  v5 = (*a1 + 7) >> 3;
  v6 = (void *)operator new[](v5);
  *a2 = v6;
  j_memcpy(v6, (const void *)a1[3], v5);
  return v2;
}


// ======================================================================
// ADDR: 0x8714c
// SYMBOL: sub_8714C
void __fastcall sub_8714C(int *a1)
{
  int v1; // r4
  _DWORD *v2; // r11
  int v3; // r6
  unsigned int v4; // r8
  unsigned int v5; // r9
  unsigned int v6; // r0
  int v7; // r0
  _DWORD *v8; // r4
  int v9; // r0
  unsigned int v10; // r0
  int v11; // r0
  int v12; // r1
  unsigned int v13; // r0
  _DWORD *v14; // r5
  int v15; // r10
  int i; // r4
  int v17; // r1
  int v18; // r0
  unsigned int v19; // r0
  _DWORD *v20; // r8
  int v21; // r0
  int v22; // r1
  unsigned int v23; // r0
  _DWORD *v24; // r5
  int v25; // r4
  int v26; // r1
  int v27; // r0
  const std::nothrow_t *v28; // r1
  int j; // r5
  void *v30; // r0
  bool v31; // zf
  _DWORD *v33; // [sp+8h] [bp-20h]

  v1 = *a1;
  if ( !*a1 )
    return;
  v2 = (_DWORD *)operator new[](0x40u);
  v3 = 16;
  v4 = 1;
  v5 = 0;
  *v2 = v1;
  do
  {
    v6 = v5 + 1;
    v5 = v5 + 1 - v3;
    if ( v5 )
      v5 = v6;
    v7 = v5;
    if ( !v5 )
      v7 = v3;
    v8 = (_DWORD *)v2[v7 - 1];
    v9 = v8[2];
    if ( !v9 )
      goto LABEL_19;
    if ( !v3 )
    {
      v2 = (_DWORD *)operator new[](0x40u);
      *v2 = v8[2];
      v3 = 16;
      v18 = v8[3];
      v4 = 1;
      v5 = 0;
      if ( !v18 )
        goto LABEL_35;
      goto LABEL_25;
    }
    v2[v4] = v9;
    v10 = v4 + 1;
    v4 = v4 + 1 - v3;
    if ( v4 )
      v4 = v10;
    if ( v4 == v5 )
    {
      v33 = v8;
      v11 = (2 * v3) & 0x3FFFFFFE;
      v12 = v11 - 2 * v3;
      v31 = v11 == 2 * v3;
      v13 = 8 * v3;
      if ( !v31 )
        v12 = 1;
      if ( v12 )
        v13 = -1;
      v14 = (_DWORD *)operator new[](v13);
      v15 = 2 * v3;
      for ( i = 0; i != v3; ++i )
      {
        sub_109688(v5 + i, v3);
        v14[i] = v2[v17];
      }
      operator delete[](v2);
      v8 = v33;
      v5 = 0;
      v4 = v3;
      v2 = v14;
    }
    else
    {
LABEL_19:
      v15 = v3;
    }
    v18 = v8[3];
    if ( !v18 )
    {
      v3 = v15;
      goto LABEL_35;
    }
    v3 = v15;
    if ( !v15 )
    {
      v2 = (_DWORD *)operator new[](0x40u);
      v3 = 16;
      v4 = 1;
      v5 = 0;
      *v2 = v8[3];
LABEL_35:
      operator delete(v8);
      goto LABEL_36;
    }
LABEL_25:
    v2[v4] = v18;
    v19 = v4 + 1;
    v4 = v4 + 1 - v3;
    if ( v4 )
      v4 = v19;
    if ( v4 != v5 )
      goto LABEL_35;
    v20 = v8;
    v21 = (2 * v3) & 0x3FFFFFFE;
    v22 = v21 - 2 * v3;
    v31 = v21 == 2 * v3;
    v23 = 8 * v3;
    if ( !v31 )
      v22 = 1;
    if ( v22 )
      v23 = -1;
    v24 = (_DWORD *)operator new[](v23);
    v25 = 0;
    do
    {
      sub_109688(v5 + v25, v3);
      v24[v25++] = v2[v26];
    }
    while ( v3 != v25 );
    operator delete[](v2);
    v5 = 0;
    v8 = v20;
    v31 = v20 == 0;
    v4 = v3;
    v2 = v24;
    v3 *= 2;
    if ( !v31 )
      goto LABEL_35;
LABEL_36:
    v27 = 0;
    v28 = (const std::nothrow_t *)(v4 - v5);
    if ( v4 < v5 )
      v27 = -v3;
  }
  while ( v28 != (const std::nothrow_t *)v27 );
  for ( j = 0; j != 256; ++j )
  {
    v30 = (void *)a1[2 * j + 1];
    if ( v30 )
      operator delete[](v30);
  }
  v31 = v3 == 0;
  *a1 = 0;
  if ( v3 )
    v31 = v2 == 0;
  if ( !v31 )
    operator delete[](v2, v28);
}


// ======================================================================
// ADDR: 0x87510
// SYMBOL: sub_87510
int __fastcall sub_87510(int a1, int a2, int *a3)
{
  int v4; // r9
  _DWORD *v5; // r6
  int v7; // r1
  _DWORD *v8; // r5
  unsigned int v9; // r0
  _DWORD *v10; // r2
  _DWORD *v12; // r0
  int v13; // r2
  _DWORD v14[8]; // [sp+0h] [bp-20h] BYREF

  v4 = *a3;
  v14[0] = a2;
  if ( v4 )
  {
    v5 = (_DWORD *)a3[1];
    v7 = v4;
    if ( v5 )
    {
      a3[2] = (int)v5;
      v8 = v5;
    }
    else
    {
      v8 = (_DWORD *)a3[2];
    }
    v9 = *(_DWORD *)(a2 + 4);
    while ( *(_DWORD *)(*v8 + 4) < v9 )
    {
      v10 = (_DWORD *)v8[2];
      if ( v10 != v5 )
      {
        a3[2] = (int)v10;
        v8 = v10;
      }
      if ( !--v7 )
      {
        if ( v5 )
        {
          v8 = (_DWORD *)v5[1];
          a3[2] = (int)v8;
        }
        v12 = (_DWORD *)operator new(0xCu);
        if ( v4 == 1 )
        {
          v5[1] = v12;
          v5[2] = v12;
          a3[2] = (int)v5;
          *a3 = 2;
          *v12 = a2;
          v12[1] = v5;
          v12[2] = v5;
        }
        else
        {
          v12[2] = v8[2];
          v13 = v8[2];
          v12[1] = v8;
          *v12 = a2;
          *a3 = v4 + 1;
          v8[2] = v12;
          *(_DWORD *)(v13 + 4) = v12;
        }
        return v14[1];
      }
    }
  }
  sub_8767C(a3, v14);
  return v14[1];
}


// ======================================================================
// ADDR: 0x875e4
// SYMBOL: sub_875E4
int *__fastcall sub_875E4(int *a1)
{
  int v2; // r0
  void *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r5

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v3 = (void *)a1[1];
      if ( v3 )
        operator delete(v3);
    }
    else
    {
      v4 = (_DWORD *)a1[1];
      do
      {
        v5 = (_DWORD *)v4[2];
        operator delete(v4);
        v4 = v5;
      }
      while ( v5 != (_DWORD *)a1[1] );
    }
    *a1 = 0;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}


// ======================================================================
