// ADDR: 0xdd6fc
// SYMBOL: sub_DD6FC
int __fastcall sub_DD6FC(int *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v10; // r0
  int v11; // r0
  int v12; // r1
  _BYTE v14[8]; // [sp+10h] [bp-20h] BYREF
  void *v15; // [sp+18h] [bp-18h]

  v10 = sub_DD758(v14, a7, 1);
  v11 = sub_DD7D8(*a1, *a1, a3, a4, a5, a6, v10);
  v12 = v14[0];
  *a1 = v11;
  if ( v12 << 31 )
    operator delete(v15);
  return 1;
}


// ======================================================================
// ADDR: 0xddb98
// SYMBOL: sub_DDB98
int __fastcall sub_DDB98(int a1, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  int v9; // r5
  int v10; // r5
  unsigned int i; // r4
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r1
  int v16; // r6
  int result; // r0
  _DWORD v18[2]; // [sp+4h] [bp-2Ch] BYREF
  char v19[34]; // [sp+Eh] [bp-22h] BYREF

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = v7 - v9;
  for ( i = *a5 & 0xFFFFFF; i; i >>= 8 )
  {
    v12 = *(_DWORD *)(a1 + 8);
    v13 = v12 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v12 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v12 = *(_DWORD *)(a1 + 8);
      v13 = v12 + 1;
    }
    v14 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v13;
    *(_BYTE *)(v14 + v12) = i;
  }
  v15 = a5[2];
  v19[0] = 48;
  v16 = sub_DD9D2(a1, v15, v19);
  sub_DCEB4(v18, (int)v19, a5[3], a5[4]);
  result = sub_DCF1C((int)v19, v18[1], v16);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xddc48
// SYMBOL: sub_DDC48
int __fastcall sub_DDC48(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  int v9; // r10
  unsigned int i; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r10
  int v16; // r0
  int v17; // r3
  unsigned int v18; // r4
  int v19; // r2
  __int64 v20; // r0
  int v21; // r6
  unsigned int v22; // r3
  int v23; // r4
  _BYTE *v24; // r3
  int v25; // r6
  bool v26; // zf
  _BYTE *v27; // r1
  _BYTE *v28; // r6
  const char *v29; // r3
  int v30; // r5
  char v32; // [sp+6h] [bp-22h] BYREF
  _BYTE v33[33]; // [sp+7h] [bp-21h] BYREF

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  for ( i = *(_DWORD *)a5 & 0xFFFFFF; i; i >>= 8 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = v11 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v11 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v11 = *(_DWORD *)(a1 + 8);
      v12 = v11 + 1;
    }
    v13 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v12;
    *(_BYTE *)(v13 + v11) = i;
  }
  v14 = *(_DWORD *)(a5 + 8);
  v32 = 48;
  v15 = v7 - v9;
  v16 = sub_DD9D2(a1, v14, &v32);
  v18 = *(_DWORD *)(v16 + 12);
  v17 = *(_DWORD *)(v16 + 8);
  v19 = v16;
  v20 = *(_QWORD *)(a5 + 12);
  v21 = *(unsigned __int8 *)(a5 + 20);
  v22 = v17 + HIDWORD(v20);
  if ( v18 >= v22 && (v23 = *(_DWORD *)(v19 + 4), *(_DWORD *)(v19 + 8) = v22, v23) )
  {
    v24 = (_BYTE *)(v22 + v23 - 1);
    HIDWORD(v20) = "0123456789abcdef";
    if ( v21 )
      HIDWORD(v20) = "0123456789ABCDEF";
    do
    {
      v25 = v20 & 0xF;
      LODWORD(v20) = (unsigned int)v20 >> 4;
      *v24-- = *(_BYTE *)(HIDWORD(v20) + v25);
    }
    while ( (_DWORD)v20 );
  }
  else
  {
    v26 = v21 == 0;
    v27 = &v33[HIDWORD(v20)];
    v28 = v27 - 1;
    v29 = "0123456789abcdef";
    if ( !v26 )
      v29 = "0123456789ABCDEF";
    do
    {
      v30 = v20 & 0xF;
      LODWORD(v20) = (unsigned int)v20 >> 4;
      *v28-- = v29[v30];
    }
    while ( (_DWORD)v20 );
    v19 = sub_DCF1C((int)v33, (int)v27, v19);
  }
  if ( v15 )
    return sub_DD992(v19, v15, v6);
  return v19;
}


// ======================================================================
// ADDR: 0xddd64
// SYMBOL: sub_DDD64
int __fastcall sub_DDD64(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  int v9; // r10
  unsigned int i; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r5
  int v15; // r1
  int v16; // r0
  int v17; // r3
  unsigned int v18; // r6
  int v19; // r2
  __int64 v20; // r0
  unsigned int v21; // r3
  int v22; // r6
  bool v23; // zf
  char *v24; // r1
  char *v25; // r3
  char v27[57]; // [sp+7h] [bp-39h] BYREF

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  for ( i = *(_DWORD *)a5 & 0xFFFFFF; i; i >>= 8 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = v11 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v11 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v11 = *(_DWORD *)(a1 + 8);
      v12 = v11 + 1;
    }
    v13 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v12;
    *(_BYTE *)(v13 + v11) = i;
  }
  v14 = v7 - v9;
  v15 = *(_DWORD *)(a5 + 8);
  v27[0] = 48;
  v16 = sub_DD9D2(a1, v15, v27);
  v18 = *(_DWORD *)(v16 + 12);
  v17 = *(_DWORD *)(v16 + 8);
  v19 = v16;
  v20 = *(_QWORD *)(a5 + 12);
  v21 = v17 + HIDWORD(v20);
  if ( v18 >= v21 && (v22 = *(_DWORD *)(v19 + 4), *(_DWORD *)(v19 + 8) = v21, v22) )
  {
    HIDWORD(v20) = v21 + v22 - 1;
    do
    {
      v23 = (unsigned int)v20 >> 1 == 0;
      *(_BYTE *)HIDWORD(v20) = v20 & 1 | 0x30;
      --HIDWORD(v20);
      LODWORD(v20) = (unsigned int)v20 >> 1;
    }
    while ( !v23 );
  }
  else
  {
    v24 = &v27[HIDWORD(v20)];
    v25 = v24 - 1;
    do
    {
      v23 = (unsigned int)v20 >> 1 == 0;
      *v25-- = v20 & 1 | 0x30;
      LODWORD(v20) = (unsigned int)v20 >> 1;
    }
    while ( !v23 );
    v19 = sub_DCF1C((int)v27, (int)v24, v19);
  }
  if ( v14 )
    return sub_DD992(v19, v14, v6);
  return v19;
}


// ======================================================================
// ADDR: 0xdde4c
// SYMBOL: sub_DDE4C
int __fastcall sub_DDE4C(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  int v9; // r10
  unsigned int i; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r5
  int v16; // r0
  int v17; // r3
  unsigned int v18; // r6
  int v19; // r2
  __int64 v20; // r0
  unsigned int v21; // r3
  int v22; // r6
  bool v23; // zf
  _BYTE *v24; // r1
  _BYTE *v25; // r3
  char v27; // [sp+4h] [bp-24h] BYREF
  _BYTE v28[35]; // [sp+5h] [bp-23h] BYREF

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  for ( i = *(_DWORD *)a5 & 0xFFFFFF; i; i >>= 8 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = v11 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v11 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v11 = *(_DWORD *)(a1 + 8);
      v12 = v11 + 1;
    }
    v13 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v12;
    *(_BYTE *)(v13 + v11) = i;
  }
  v14 = *(_DWORD *)(a5 + 8);
  v27 = 48;
  v15 = v7 - v9;
  v16 = sub_DD9D2(a1, v14, &v27);
  v18 = *(_DWORD *)(v16 + 12);
  v17 = *(_DWORD *)(v16 + 8);
  v19 = v16;
  v20 = *(_QWORD *)(a5 + 12);
  v21 = v17 + HIDWORD(v20);
  if ( v18 >= v21 && (v22 = *(_DWORD *)(v19 + 4), *(_DWORD *)(v19 + 8) = v21, v22) )
  {
    HIDWORD(v20) = v21 + v22 - 1;
    do
    {
      v23 = (unsigned int)v20 >> 3 == 0;
      *(_BYTE *)HIDWORD(v20) = v20 & 7 | 0x30;
      --HIDWORD(v20);
      LODWORD(v20) = (unsigned int)v20 >> 3;
    }
    while ( !v23 );
  }
  else
  {
    v24 = &v28[HIDWORD(v20)];
    v25 = v24 - 1;
    do
    {
      v23 = (unsigned int)v20 >> 3 == 0;
      *v25-- = v20 & 7 | 0x30;
      LODWORD(v20) = (unsigned int)v20 >> 3;
    }
    while ( !v23 );
    v19 = sub_DCF1C((int)v28, (int)v24, v19);
  }
  if ( v15 )
    return sub_DD992(v19, v15, v6);
  return v19;
}


// ======================================================================
// ADDR: 0xddf34
// SYMBOL: sub_DDF34
int __fastcall sub_DDF34(int a1, int a2, int a3, unsigned int a4, _BYTE *a5)
{
  int v6; // r8
  unsigned int v7; // r5
  char v8; // r0
  int v9; // r6
  int v10; // r6
  int v11; // r0
  int v12; // r1
  int v13; // r2
  char v14; // r3
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91D40[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = v7 - v9;
  if ( *a5 )
  {
    a1 = sub_DDFC4(a1, (unsigned __int8)a5[1]);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = v11 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v11 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v11 = *(_DWORD *)(a1 + 8);
      v12 = v11 + 1;
    }
    v13 = *(_DWORD *)(a1 + 4);
    v14 = a5[1];
    *(_DWORD *)(a1 + 8) = v12;
    *(_BYTE *)(v13 + v11) = v14;
  }
  result = a1;
  if ( v10 )
    return sub_DD992(a1, v10, v6);
  return result;
}


// ======================================================================
