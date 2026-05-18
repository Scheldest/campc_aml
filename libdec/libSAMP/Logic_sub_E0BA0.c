// ADDR: 0xe1110
// SYMBOL: sub_E1110
int __fastcall sub_E1110(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  int v9; // r5
  int v10; // r9
  unsigned int i; // r5
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r1
  int v16; // r6
  int result; // r0
  _DWORD v18[2]; // [sp+4h] [bp-34h] BYREF
  char v19[44]; // [sp+Ch] [bp-2Ch] BYREF

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = v7 - v9;
  for ( i = *(_DWORD *)a5 & 0xFFFFFF; i; i >>= 8 )
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
  v15 = *(_DWORD *)(a5 + 8);
  v19[0] = 48;
  v16 = sub_DD9D2(a1, v15, v19);
  sub_DD0CC(v18, (int)v19, *(_QWORD *)(a5 + 16), *(_DWORD *)(a5 + 24));
  result = sub_DCF1C((int)v19, v18[1], v16);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xe11c8
// SYMBOL: sub_E11C8
int __fastcall sub_E11C8(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r5
  char v8; // r0
  int v9; // r9
  unsigned int i; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r9
  int v16; // lr
  int v17; // r1
  __int64 v18; // kr08_8
  unsigned int v19; // r0
  unsigned int v20; // r3
  int v21; // r12
  int v22; // r4
  int v23; // r5
  const char *v24; // r1
  _BYTE *v25; // r6
  int v26; // r5
  int v27; // r4
  char *v28; // r1
  char *v29; // r6
  const char *v30; // r4
  int v31; // r5
  int v32; // r2
  char v34[45]; // [sp+3h] [bp-2Dh] BYREF

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
  v15 = v7 - v9;
  v34[0] = 48;
  v16 = sub_DD9D2(a1, v14, v34);
  v17 = *(_DWORD *)(a5 + 24);
  v18 = *(_QWORD *)(v16 + 8);
  v19 = *(_DWORD *)(a5 + 20);
  v20 = *(_DWORD *)(a5 + 16);
  v21 = *(unsigned __int8 *)(a5 + 28);
  v22 = v18 + v17;
  if ( HIDWORD(v18) >= (unsigned int)(v18 + v17) && (v23 = *(_DWORD *)(v16 + 4), *(_DWORD *)(v16 + 8) = v22, v23) )
  {
    v24 = "0123456789abcdef";
    if ( v21 )
      v24 = "0123456789ABCDEF";
    v25 = (_BYTE *)(v22 + v23 - 1);
    do
    {
      v26 = v20 & 0xF;
      v20 = (v20 >> 4) | (v19 << 28);
      v27 = v20 | (v19 >> 4);
      v19 >>= 4;
      *v25-- = v24[v26];
    }
    while ( v27 );
  }
  else
  {
    v28 = &v34[v17];
    v29 = v28 - 1;
    v30 = "0123456789abcdef";
    if ( v21 )
      v30 = "0123456789ABCDEF";
    do
    {
      v31 = v20 & 0xF;
      v20 = (v20 >> 4) | (v19 << 28);
      v32 = v20 | (v19 >> 4);
      v19 >>= 4;
      *v29-- = v30[v31];
    }
    while ( v32 );
    v16 = sub_DCF1C((int)v34, (int)v28, v16);
  }
  if ( v15 )
    return sub_DD992(v16, v15, v6);
  return v16;
}


// ======================================================================
// ADDR: 0xe1304
// SYMBOL: sub_E1304
int __fastcall sub_E1304(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  int v9; // r9
  unsigned int i; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r9
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r12
  __int64 v19; // r2
  unsigned int v20; // r6
  int v21; // r4
  _BYTE *v22; // r1
  char v23; // cf
  char *v24; // r1
  char *v25; // r6
  char v27[89]; // [sp+7h] [bp-59h] BYREF

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
  v15 = v7 - v9;
  v27[0] = 48;
  v16 = (_DWORD *)sub_DD9D2(a1, v14, v27);
  v17 = *(_DWORD *)(a5 + 24);
  v18 = (int)v16;
  v19 = *(_QWORD *)(a5 + 16);
  v20 = v16[2] + v17;
  if ( v16[3] >= v20 && (v21 = v16[1], v16[2] = v20, v21) )
  {
    v22 = (_BYTE *)(v20 + v21 - 1);
    do
    {
      v23 = BYTE4(v19) & 1;
      HIDWORD(v19) >>= 1;
      *v22-- = v19 & 1 | 0x30;
      LODWORD(v19) = ((unsigned int)v19 >> 1) | (v23 << 31);
    }
    while ( v19 );
  }
  else
  {
    v24 = &v27[v17];
    v25 = v24 - 1;
    do
    {
      v23 = BYTE4(v19) & 1;
      HIDWORD(v19) >>= 1;
      *v25-- = v19 & 1 | 0x30;
      LODWORD(v19) = ((unsigned int)v19 >> 1) | (v23 << 31);
    }
    while ( v19 );
    v18 = sub_DCF1C((int)v27, (int)v24, (int)v16);
  }
  if ( v15 )
    return sub_DD992(v18, v15, v6);
  return v18;
}


// ======================================================================
// ADDR: 0xe140c
// SYMBOL: sub_E140C
int __fastcall sub_E140C(int a1, int a2, int a3, unsigned int a4, _DWORD *a5)
{
  int v6; // r8
  unsigned int v7; // r4
  char v8; // r0
  int v9; // r9
  unsigned int i; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r9
  _DWORD *v16; // r2
  int v17; // r1
  unsigned int v18; // r0
  unsigned int v19; // r3
  unsigned int v20; // r6
  int v21; // r4
  _BYTE *v22; // r1
  int v23; // r5
  char *v24; // r1
  char *v25; // r6
  int v26; // r4
  char v28[46]; // [sp+2h] [bp-2Eh] BYREF

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  for ( i = *a5 & 0xFFFFFF; i; i >>= 8 )
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
  v14 = a5[2];
  v15 = v7 - v9;
  v28[0] = 48;
  v16 = (_DWORD *)sub_DD9D2(a1, v14, v28);
  v17 = a5[6];
  v18 = a5[5];
  v19 = a5[4];
  v20 = v16[2] + v17;
  if ( v16[3] >= v20 && (v21 = v16[1], v16[2] = v20, v21) )
  {
    v22 = (_BYTE *)(v20 + v21 - 1);
    do
    {
      *v22-- = v19 & 7 | 0x30;
      v19 = (v19 >> 3) | (v18 << 29);
      v23 = v19 | (v18 >> 3);
      v18 >>= 3;
    }
    while ( v23 );
  }
  else
  {
    v24 = &v28[v17];
    v25 = v24 - 1;
    do
    {
      *v25-- = v19 & 7 | 0x30;
      v19 = (v19 >> 3) | (v18 << 29);
      v26 = v19 | (v18 >> 3);
      v18 >>= 3;
    }
    while ( v26 );
    v16 = (_DWORD *)sub_DCF1C((int)v28, (int)v24, (int)v16);
  }
  if ( v15 )
    return sub_DD992((int)v16, v15, v6);
  return (int)v16;
}


// ======================================================================
