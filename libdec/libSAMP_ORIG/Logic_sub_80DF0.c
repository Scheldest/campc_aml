// ADDR: 0x7e294
// SYMBOL: sub_7E294
int __fastcall sub_7E294(int a1, int a2)
{
  int result; // r0
  int *i; // r5
  int *v5; // r10
  void *v6; // r4
  int v7; // r0

  *(_DWORD *)(a1 + 88) = a2;
  result = sub_85328();
  v5 = *(int **)(result + 4);
  for ( i = *(int **)result; i != v5; ++i )
  {
    v6 = off_1ABF5C;
    v7 = sub_7DB44(*i);
    result = ((int (__fastcall *)(int, _DWORD, _DWORD, _DWORD, int, int, int))v6)(
               v7,
               0,
               *(float *)(a1 + 88) * 0.1,
               *(_DWORD *)(a1 + 88),
               -1,
               -1,
               -1082130432);
  }
  return result;
}


// ======================================================================
// ADDR: 0x81bc0
// SYMBOL: sub_81BC0
int __fastcall sub_81BC0(_DWORD *a1, int *a2, const char *a3)
{
  _DWORD *v6; // r10
  int v7; // r9
  size_t v8; // r0
  size_t v9; // r6
  char *v10; // r4
  unsigned int v11; // r5
  int v12; // r0
  _DWORD v14[2]; // [sp+4h] [bp-2Ch] BYREF
  void *v15; // [sp+Ch] [bp-24h]
  int v16; // [sp+10h] [bp-20h]

  v6 = (_DWORD *)operator new(0x58u);
  v7 = *a2;
  v8 = strlen(a3);
  if ( v8 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v14);
  v9 = v8;
  if ( v8 >= 0xB )
  {
    v11 = (v8 + 16) & 0xFFFFFFF0;
    v10 = (char *)operator new(v11);
    v14[1] = v9;
    v14[0] = v11 | 1;
    v15 = v10;
    goto LABEL_6;
  }
  LOBYTE(v14[0]) = 2 * v8;
  v10 = (char *)v14 + 1;
  if ( v8 )
LABEL_6:
    j_memcpy(v10, a3, v9);
  v10[v9] = 0;
  sub_7E024(v6, v7, (int)v14);
  v12 = LOBYTE(v14[0]);
  *a1 = v6;
  if ( v12 << 31 )
    operator delete(v15);
  return v16;
}


// ======================================================================
// ADDR: 0x81c80
// SYMBOL: sub_81C80
int __fastcall sub_81C80(int *a1, int *a2, const char *a3, float *a4, int a5)
{
  int v9; // r11
  int v10; // r6
  size_t v11; // r0
  size_t v12; // r5
  char *v13; // r4
  int v14; // r0
  _DWORD v16[2]; // [sp+Ch] [bp-2Ch] BYREF
  void *v17; // [sp+14h] [bp-24h]
  int v18; // [sp+18h] [bp-20h]

  v9 = operator new(0x68u);
  v10 = *a2;
  v11 = strlen(a3);
  if ( v11 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v16);
  v12 = v11;
  if ( v11 >= 0xB )
  {
    v13 = (char *)operator new((v11 + 16) & 0xFFFFFFF0);
    v16[1] = v12;
    v16[0] = (v12 + 16) & 0xFFFFFFF0 | 1;
    v17 = v13;
    goto LABEL_6;
  }
  LOBYTE(v16[0]) = 2 * v11;
  v13 = (char *)v16 + 1;
  if ( v11 )
LABEL_6:
    j_memcpy(v13, a3, v12);
  v13[v12] = 0;
  sub_85C48(v9, v10, (int)v16, *a4, a5);
  v14 = LOBYTE(v16[0]);
  *a1 = v9;
  if ( v14 << 31 )
    operator delete(v17);
  return v18;
}


// ======================================================================
// ADDR: 0x81d50
// SYMBOL: sub_81D50
int __fastcall sub_81D50(int *a1, unsigned int *a2, const char *a3, float *a4, unsigned __int16 *a5)
{
  int v9; // r10
  unsigned int v10; // r5
  size_t v11; // r0
  size_t v12; // r6
  char *v13; // r4
  int v14; // r0
  __int16 v16; // [sp+8h] [bp-30h]
  _DWORD v17[2]; // [sp+Ch] [bp-2Ch] BYREF
  void *v18; // [sp+14h] [bp-24h]
  int v19; // [sp+18h] [bp-20h]

  v9 = operator new(0x60u);
  v10 = *a2;
  v11 = strlen(a3);
  if ( v11 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v17);
  v12 = v11;
  if ( v11 >= 0xB )
  {
    v16 = *a2;
    v10 = (v11 + 16) & 0xFFFFFFF0;
    v13 = (char *)operator new(v10);
    v17[1] = v12;
    v17[0] = v10 | 1;
    v18 = v13;
    LOWORD(v10) = v16;
    goto LABEL_6;
  }
  LOBYTE(v17[0]) = 2 * v11;
  v13 = (char *)v17 + 1;
  if ( v11 )
LABEL_6:
    j_memcpy(v13, a3, v12);
  v13[v12] = 0;
  sub_85DAC(v9, (unsigned __int16)v10, (int)v17, *a4, *a5);
  v14 = LOBYTE(v17[0]);
  *a1 = v9;
  if ( v14 << 31 )
    operator delete(v18);
  return v19;
}


// ======================================================================
// ADDR: 0x81e1c
// SYMBOL: sub_81E1C
int __fastcall sub_81E1C(int *a1, int *a2, const char *a3, float *a4, unsigned __int16 *a5)
{
  int v9; // r11
  int v10; // r6
  size_t v11; // r0
  size_t v12; // r5
  char *v13; // r4
  int v14; // r0
  _DWORD v16[2]; // [sp+Ch] [bp-2Ch] BYREF
  void *v17; // [sp+14h] [bp-24h]
  int v18; // [sp+18h] [bp-20h]

  v9 = operator new(0x60u);
  v10 = *a2;
  v11 = strlen(a3);
  if ( v11 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v16);
  v12 = v11;
  if ( v11 >= 0xB )
  {
    v13 = (char *)operator new((v11 + 16) & 0xFFFFFFF0);
    v16[1] = v12;
    v16[0] = (v12 + 16) & 0xFFFFFFF0 | 1;
    v17 = v13;
    goto LABEL_6;
  }
  LOBYTE(v16[0]) = 2 * v11;
  v13 = (char *)v16 + 1;
  if ( v11 )
LABEL_6:
    j_memcpy(v13, a3, v12);
  v13[v12] = 0;
  sub_85944(v9, v10, (int)v16, *a4, *a5);
  v14 = LOBYTE(v16[0]);
  *a1 = v9;
  if ( v14 << 31 )
    operator delete(v17);
  return v18;
}


// ======================================================================
// ADDR: 0x81eec
// SYMBOL: sub_81EEC
int __fastcall sub_81EEC(int *a1, int *a2, const char *a3, float *a4, unsigned __int16 *a5)
{
  int v9; // r11
  int v10; // r6
  size_t v11; // r0
  size_t v12; // r5
  char *v13; // r4
  int v14; // r0
  _DWORD v16[2]; // [sp+Ch] [bp-2Ch] BYREF
  void *v17; // [sp+14h] [bp-24h]
  int v18; // [sp+18h] [bp-20h]

  v9 = operator new(0x60u);
  v10 = *a2;
  v11 = strlen(a3);
  if ( v11 >= 0xFFFFFFF0 )
    std::__basic_string_common<true>::__throw_length_error(v16);
  v12 = v11;
  if ( v11 >= 0xB )
  {
    v13 = (char *)operator new((v11 + 16) & 0xFFFFFFF0);
    v16[1] = v12;
    v16[0] = (v12 + 16) & 0xFFFFFFF0 | 1;
    v17 = v13;
    goto LABEL_6;
  }
  LOBYTE(v16[0]) = 2 * v11;
  v13 = (char *)v16 + 1;
  if ( v11 )
LABEL_6:
    j_memcpy(v13, a3, v12);
  v13[v12] = 0;
  sub_8566C(v9, v10, (int)v16, *a4, *a5);
  v14 = LOBYTE(v16[0]);
  *a1 = v9;
  if ( v14 << 31 )
    operator delete(v17);
  return v18;
}


// ======================================================================
// ADDR: 0x82284
// SYMBOL: sub_82284
int __fastcall sub_82284(_DWORD *a1, unsigned int *a2)
{
  _DWORD *v3; // r0
  _DWORD *v4; // lr
  unsigned int v5; // r1
  _DWORD *v6; // r4
  _DWORD *v7; // r2
  _DWORD *v8; // r3
  _DWORD *v9; // r3
  _DWORD *v11; // r2
  _DWORD *v12; // r1
  int v13; // r3
  int v14; // lr
  _DWORD *v15; // t1
  int v16; // r0

  v4 = a1 + 1;
  v3 = (_DWORD *)a1[1];
  if ( !v3 )
    return 0;
  v5 = *a2;
  v6 = v4;
  v7 = v3;
  do
  {
    v8 = v7;
    if ( v7[4] < v5 )
      v8 = v7 + 1;
    v9 = (_DWORD *)*v8;
    if ( v7[4] >= v5 )
      v6 = v7;
    v7 = v9;
  }
  while ( v9 );
  if ( v6 == v4 || v5 < v6[4] )
    return 0;
  v11 = (_DWORD *)v6[1];
  if ( v11 )
  {
    do
    {
      v12 = v11;
      v11 = (_DWORD *)*v11;
    }
    while ( v11 );
  }
  else
  {
    v13 = (int)(v6 + 2);
    v12 = (_DWORD *)v6[2];
    if ( (_DWORD *)*v12 != v6 )
    {
      do
      {
        v14 = *(_DWORD *)v13;
        v15 = *(_DWORD **)(*(_DWORD *)v13 + 8);
        v13 = *(_DWORD *)v13 + 8;
        v12 = v15;
      }
      while ( *v15 != v14 );
    }
  }
  if ( (_DWORD *)*a1 == v6 )
    *a1 = v12;
  --a1[2];
  sub_8231C();
  v16 = v6[5];
  v6[5] = 0;
  if ( v16 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 4))(v16);
  operator delete(v6);
  return 1;
}


// ======================================================================
// ADDR: 0x84dd6
// SYMBOL: sub_84DD6
int __fastcall sub_84DD6(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v6; // r8
  int **v7; // r4
  int **v8; // r6
  int *v9; // r0
  unsigned int v10; // r0
  int *v11; // r5
  int *v12; // r0
  int v13; // r0
  int *v14; // r1
  int result; // r0
  int *i; // r4
  int *v17; // r6
  int v18; // t1

  v6 = (_DWORD *)operator new(0xCu);
  sub_83928(v6, a2, a3);
  v7 = (int **)(a1 + 17);
  v8 = (int **)a1[17];
  if ( !v8 )
  {
    v8 = (int **)(a1 + 17);
    goto LABEL_11;
  }
  v7 = (int **)(a1 + 17);
  while ( 1 )
  {
    v10 = *((unsigned __int8 *)v8 + 16);
    if ( v10 > a2 )
      break;
    if ( v10 >= a2 )
      goto LABEL_11;
    v7 = v8 + 1;
    v9 = v8[1];
    if ( !v9 )
      goto LABEL_11;
    ++v8;
LABEL_4:
    v7 = v8;
    v8 = (int **)v9;
  }
  v9 = *v8;
  if ( *v8 )
    goto LABEL_4;
  v7 = v8;
LABEL_11:
  v11 = *v7;
  if ( !*v7 )
  {
    v11 = (int *)operator new(0x18u);
    v11[5] = 0;
    *v11 = 0;
    v11[1] = 0;
    v11[2] = (int)v8;
    *v7 = v11;
    v12 = (int *)a1[16];
    *((_BYTE *)v11 + 16) = a2;
    v13 = *v12;
    if ( v13 )
    {
      a1[16] = v13;
      v14 = *v7;
    }
    else
    {
      v14 = v11;
    }
    sub_77D8A((int *)a1[17], v14);
    ++a1[18];
  }
  result = v11[5];
  v11[5] = (int)v6;
  if ( result )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  v17 = (int *)a1[8];
  for ( i = (int *)a1[7]; i != v17; result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v11[5] + 8))(v11[5], v18) )
    v18 = *i++;
  return result;
}


// ======================================================================
// ADDR: 0x84ea0
// SYMBOL: sub_84EA0
int __fastcall sub_84EA0(_DWORD *a1, unsigned int a2, float a3, float a4, unsigned int a5)
{
  int v9; // r8
  int **v10; // r4
  int **v11; // r6
  int *v12; // r0
  unsigned int v13; // r0
  int *v14; // r5
  int *v15; // r0
  int v16; // r0
  int *v17; // r1
  int result; // r0
  int *i; // r4
  int *v20; // r6
  int v21; // t1

  v9 = operator new(0x20u);
  sub_8396C(v9, a2, a3, a4, a5);
  v10 = (int **)(a1 + 17);
  v11 = (int **)a1[17];
  if ( !v11 )
  {
    v11 = (int **)(a1 + 17);
    goto LABEL_11;
  }
  v10 = (int **)(a1 + 17);
  while ( 1 )
  {
    v13 = *((unsigned __int8 *)v11 + 16);
    if ( v13 > a2 )
      break;
    if ( v13 >= a2 )
      goto LABEL_11;
    v10 = v11 + 1;
    v12 = v11[1];
    if ( !v12 )
      goto LABEL_11;
    ++v11;
LABEL_4:
    v10 = v11;
    v11 = (int **)v12;
  }
  v12 = *v11;
  if ( *v11 )
    goto LABEL_4;
  v10 = v11;
LABEL_11:
  v14 = *v10;
  if ( !*v10 )
  {
    v14 = (int *)operator new(0x18u);
    v14[5] = 0;
    *v14 = 0;
    v14[1] = 0;
    v14[2] = (int)v11;
    *v10 = v14;
    v15 = (int *)a1[16];
    *((_BYTE *)v14 + 16) = a2;
    v16 = *v15;
    if ( v16 )
    {
      a1[16] = v16;
      v17 = *v10;
    }
    else
    {
      v17 = v14;
    }
    sub_77D8A((int *)a1[17], v17);
    ++a1[18];
  }
  result = v14[5];
  v14[5] = v9;
  if ( result )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  v20 = (int *)a1[8];
  for ( i = (int *)a1[7]; i != v20; result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v14[5] + 8))(v14[5], v21) )
    v21 = *i++;
  return result;
}


// ======================================================================
// ADDR: 0x84f78
// SYMBOL: sub_84F78
int __fastcall sub_84F78(int a1, unsigned int a2, int a3, int a4, const void *a5, int a6)
{
  _DWORD *v10; // r9
  int **v11; // r5
  int **v12; // r6
  int *v13; // r0
  int *v14; // r0
  int *v15; // r4
  int *v16; // r0
  int v17; // r0
  int *v18; // r1
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  int *i; // r5
  int *v22; // r6
  int v23; // t1
  int v25; // [sp+Ch] [bp-1Ch]

  v10 = (_DWORD *)operator new(0x20u);
  sub_7DD96(v10, a3, a4, a5, a6);
  v12 = (int **)(a1 + 80);
  v11 = *(int ***)(a1 + 80);
  if ( !v11 )
  {
    v11 = (int **)(a1 + 80);
    goto LABEL_11;
  }
  v12 = (int **)(a1 + 80);
  while ( 1 )
  {
    v14 = v11[4];
    if ( (unsigned int)v14 > a2 )
      break;
    if ( (unsigned int)v14 >= a2 )
      goto LABEL_11;
    v12 = v11 + 1;
    v13 = v11[1];
    if ( !v13 )
      goto LABEL_11;
    ++v11;
LABEL_4:
    v12 = v11;
    v11 = (int **)v13;
  }
  v13 = *v11;
  if ( *v11 )
    goto LABEL_4;
  v12 = v11;
LABEL_11:
  v15 = *v12;
  if ( !*v12 )
  {
    v15 = (int *)operator new(0x18u);
    v15[5] = 0;
    *v15 = 0;
    v15[1] = 0;
    v15[2] = (int)v11;
    *v12 = v15;
    v16 = *(int **)(a1 + 76);
    v15[4] = a2;
    v17 = *v16;
    if ( v17 )
    {
      *(_DWORD *)(a1 + 76) = v17;
      v18 = *v12;
    }
    else
    {
      v18 = v15;
    }
    sub_77D8A(*(int **)(a1 + 80), v18);
    ++*(_DWORD *)(a1 + 84);
  }
  v19 = (_DWORD *)v15[5];
  v15[5] = (int)v10;
  if ( v19 )
  {
    v20 = sub_7DE3C(v19);
    operator delete(v20);
  }
  v22 = *(int **)(a1 + 32);
  for ( i = *(int **)(a1 + 28); i != v22; ++i )
  {
    v23 = *i;
    sub_7DED0(v15[5], v23);
  }
  return v25;
}


// ======================================================================
// ADDR: 0x8509a
// SYMBOL: sub_8509A
int __fastcall sub_8509A(int result, unsigned int a2)
{
  _DWORD *v2; // r3
  int v3; // r12
  _DWORD *v4; // lr
  _DWORD *v5; // r2
  _DWORD *v6; // r2

  v3 = result + 80;
  v2 = *(_DWORD **)(result + 80);
  if ( v2 )
  {
    result += 76;
    v4 = (_DWORD *)v3;
    do
    {
      v5 = v2;
      if ( v2[4] < a2 )
        v5 = v2 + 1;
      v6 = (_DWORD *)*v5;
      if ( v2[4] >= a2 )
        v4 = v2;
      v2 = v6;
    }
    while ( v6 );
    if ( v4 != (_DWORD *)v3 && v4[4] <= a2 )
      return sub_85418(result, v4);
  }
  return result;
}


// ======================================================================
// ADDR: 0x850dc
// SYMBOL: sub_850DC
int __fastcall sub_850DC(_DWORD *a1, int a2)
{
  int v3; // r2
  _DWORD *v4; // r4
  unsigned int v5; // r6
  int v6; // r0
  _DWORD *v7; // r2
  int v8; // r5
  unsigned int v9; // r0
  _DWORD *v10; // r0
  int v11; // r2
  unsigned int v12; // r0
  int v13; // r4

  v4 = a1 + 10;
  v3 = a1[10];
  v5 = a1[11];
  v6 = v5 - v3;
  if ( v5 == v3 )
  {
LABEL_6:
    if ( v5 >= a1[12] )
    {
      sub_85478(v4);
      v12 = a1[11];
      return -1431655765 * ((int)(v12 - *v4) >> 3) - 1;
    }
    v10 = (_DWORD *)(a2 + 16);
    v11 = *(_DWORD *)(a2 + 16);
    if ( v11 )
    {
      if ( a2 == v11 )
      {
        *(_DWORD *)(v5 + 16) = v5;
        (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)*v10 + 12))(*v10, v5);
        goto LABEL_18;
      }
      *(_DWORD *)(v5 + 16) = v11;
    }
    else
    {
      v10 = (_DWORD *)(v5 + 16);
    }
    *v10 = 0;
LABEL_18:
    v12 = v5 + 24;
    a1[11] = v5 + 24;
    return -1431655765 * ((int)(v12 - *v4) >> 3) - 1;
  }
  v7 = (_DWORD *)(v3 + 16);
  v8 = 0;
  v9 = v6 / 24;
  if ( v9 <= 1 )
    v9 = 1;
  while ( *v7 )
  {
    ++v8;
    v7 += 6;
    if ( v9 == v8 )
      goto LABEL_6;
  }
  *v7 = 0;
  v13 = *(_DWORD *)(a2 + 16);
  if ( v13 )
  {
    if ( a2 == v13 )
    {
      *v7 = v7 - 4;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), v7 - 4);
      return v8;
    }
    *v7 = v13;
    v7 = (_DWORD *)(a2 + 16);
  }
  *v7 = 0;
  return v8;
}


// ======================================================================
// ADDR: 0x851aa
// SYMBOL: sub_851AA
int __fastcall sub_851AA(_DWORD *a1, int a2)
{
  int v3; // r2
  _DWORD *v4; // r4
  unsigned int v5; // r6
  int v6; // r0
  _DWORD *v7; // r2
  int v8; // r5
  unsigned int v9; // r0
  _DWORD *v10; // r0
  int v11; // r2
  unsigned int v12; // r0
  int v13; // r4

  v4 = a1 + 13;
  v3 = a1[13];
  v5 = a1[14];
  v6 = v5 - v3;
  if ( v5 == v3 )
  {
LABEL_6:
    if ( v5 >= a1[15] )
    {
      sub_85478(v4);
      v12 = a1[14];
      return -1431655765 * ((int)(v12 - *v4) >> 3) - 1;
    }
    v10 = (_DWORD *)(a2 + 16);
    v11 = *(_DWORD *)(a2 + 16);
    if ( v11 )
    {
      if ( a2 == v11 )
      {
        *(_DWORD *)(v5 + 16) = v5;
        (*(void (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)*v10 + 12))(*v10, v5);
        goto LABEL_18;
      }
      *(_DWORD *)(v5 + 16) = v11;
    }
    else
    {
      v10 = (_DWORD *)(v5 + 16);
    }
    *v10 = 0;
LABEL_18:
    v12 = v5 + 24;
    a1[14] = v5 + 24;
    return -1431655765 * ((int)(v12 - *v4) >> 3) - 1;
  }
  v7 = (_DWORD *)(v3 + 16);
  v8 = 0;
  v9 = v6 / 24;
  if ( v9 <= 1 )
    v9 = 1;
  while ( *v7 )
  {
    ++v8;
    v7 += 6;
    if ( v9 == v8 )
      goto LABEL_6;
  }
  *v7 = 0;
  v13 = *(_DWORD *)(a2 + 16);
  if ( v13 )
  {
    if ( a2 == v13 )
    {
      *v7 = v7 - 4;
      (*(void (__fastcall **)(_DWORD, _DWORD *))(**(_DWORD **)(a2 + 16) + 12))(*(_DWORD *)(a2 + 16), v7 - 4);
      return v8;
    }
    *v7 = v13;
    v7 = (_DWORD *)(a2 + 16);
  }
  *v7 = 0;
  return v8;
}


// ======================================================================
// ADDR: 0x85ccc
// SYMBOL: sub_85CCC
int __fastcall sub_85CCC(int a1, __int64 *a2)
{
  __int64 v2; // d16
  int v3; // r8
  int result; // r0
  int *i; // r5
  int *v6; // r9
  void *v7; // r6
  int v8; // r0

  v2 = *a2;
  v3 = a1 + 92;
  *(_DWORD *)(a1 + 100) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(a1 + 92) = v2;
  result = sub_85328(a1);
  v6 = *(int **)(result + 4);
  for ( i = *(int **)result; i != v6; ++i )
  {
    v7 = off_1ABF60;
    v8 = sub_7DB44(*i);
    result = ((int (__fastcall *)(int, int, _DWORD, _DWORD))v7)(v8, v3, 0, 0);
  }
  return result;
}


// ======================================================================
