// ADDR: 0x1420bc
// SYMBOL: sub_1420BC
int __fastcall sub_1420BC(int a1, int a2)
{
  unsigned __int8 v3; // r5
  _BYTE v5[276]; // [sp+4h] [bp-444h] BYREF
  char v6[277]; // [sp+118h] [bp-330h] BYREF
  char v7[269]; // [sp+22Dh] [bp-21Bh] BYREF
  _BYTE dest[260]; // [sp+33Ah] [bp-10Eh] BYREF
  unsigned __int8 v9; // [sp+43Eh] [bp-Ah] BYREF
  _BYTE v10[9]; // [sp+43Fh] [bp-9h] BYREF

  sub_17D4F2((int)v6, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  if ( (unsigned int)(*(_DWORD *)(a1 + 536) - 7) >= 0xFFFFFFFA )
  {
    sub_17DA96(v6, 8);
    sub_17D786((int)v6, (int)&v9);
    sub_17D744((int)v6, dest);
    dest[v9] = 0;
    sub_18E6C8(v7, dest);
    v3 = _strlen_chk(v7, 0x10Du);
    sub_17D4A8(v5);
    v10[0] = 12;
    sub_17D628(v5, v10, 8, 1);
    v10[0] = v3;
    sub_17D628(v5, v10, 8, 1);
    sub_17D566(v5, v7, v3);
    (*(void (__fastcall **)(_DWORD, _BYTE *, _DWORD, int, _DWORD))(**(_DWORD **)(a1 + 528) + 32))(
      *(_DWORD *)(a1 + 528),
      v5,
      0,
      8,
      0);
    sub_17D542(v5);
  }
  return sub_17D542(v6);
}


// ======================================================================
// ADDR: 0x142198
// SYMBOL: sub_142198
int __fastcall sub_142198(int a1)
{
  int v2; // r5
  int result; // r0
  const char *v4; // [sp+0h] [bp-10h] BYREF

  if ( dword_23DEEC )
  {
    v2 = *(_DWORD *)(dword_23DEEC + 96);
    sub_F1E90((int)&v4, byte_901C3);
    sub_12D5E8(v2, v4);
  }
  result = 1;
  *(_DWORD *)(a1 + 536) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x1421d4
// SYMBOL: sub_1421D4
int __fastcall sub_1421D4(int a1)
{
  int v2; // r5
  int result; // r0
  const char *v4; // [sp+0h] [bp-10h] BYREF

  if ( dword_23DEEC )
  {
    v2 = *(_DWORD *)(dword_23DEEC + 96);
    sub_F1E90((int)&v4, byte_87BBC);
    sub_12D5E8(v2, v4);
  }
  result = 1;
  *(_DWORD *)(a1 + 536) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x142210
// SYMBOL: sub_142210
int __fastcall sub_142210(int a1)
{
  int result; // r0
  int v3; // r5
  const char *v4; // [sp+0h] [bp-10h] BYREF

  if ( dword_23DF1C != 4
    || !dword_239034 && ((14392 - (unsigned __int16)word_239038) ^ (4 * (unsigned __int16)word_239038)) == 0x7627
    || (result = (unsigned __int8)byte_23903A, byte_23903A) )
  {
    if ( dword_23DEEC )
    {
      v3 = *(_DWORD *)(dword_23DEEC + 96);
      sub_F1E90((int)&v4, byte_9020A);
      sub_12D5E8(v3, v4);
    }
    if ( dword_23DF04 )
      sub_E317C((unsigned __int8 *)dword_23DF04, 1);
    return (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 528) + 12))(*(_DWORD *)(a1 + 528), 2000, 0);
  }
  return result;
}


// ======================================================================
// ADDR: 0x14229c
// SYMBOL: sub_14229C
int __fastcall sub_14229C(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r2
  char *v5; // r1
  int v6; // r5
  int i; // r6
  int v8; // r5
  int result; // r0
  const char *v10[7]; // [sp+4h] [bp-1Ch] BYREF

  v2 = *(_DWORD *)(a1 + 528);
  if ( v2 )
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v2 + 12))(v2, 0, 0);
  if ( dword_23DEEC )
  {
    v3 = *(_DWORD *)(dword_23DEEC + 96);
    v4 = 0;
    do
      v5 = &byte_8A5D2[v4++];
    while ( v5[1] );
    sub_F1E90((int)v10, byte_8A5D2);
    sub_12D5E8(v3, v10[0]);
  }
  sub_143388(a1);
  v6 = **(_DWORD **)(a1 + 944);
  if ( v6 )
  {
    for ( i = 0; i != 1004; ++i )
    {
      if ( *(_BYTE *)(v6 + i + 4020) )
        sub_148CAE(v6, (unsigned __int16)i, 0);
    }
  }
  sub_10421C(*(_DWORD *)(*(_DWORD *)(v6 + 5052) + 28), 1);
  if ( dword_23DF04 )
    sub_E317C((unsigned __int8 *)dword_23DF04, 1);
  v8 = dword_381BF4;
  if ( dword_381BF4 )
  {
    sub_DC6DC(v10, &byte_8F794);
    sub_17CAF8(v8, 255, 255, v10);
    if ( LOBYTE(v10[0]) << 31 )
      operator delete((void *)v10[2]);
    sub_17C270(dword_381BF4);
  }
  result = 1;
  *(_DWORD *)(a1 + 536) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x1423a0
// SYMBOL: sub_1423A0
int __fastcall sub_1423A0(int a1, int a2)
{
  int v3; // r0
  const char *v4; // r0
  _BYTE *v5; // r4
  unsigned __int8 v6; // r6
  int v7; // r5
  unsigned __int8 v8; // r9
  _QWORD *v9; // r0
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  int v13; // r4
  char *v14; // r1
  char *v15; // r1
  const char *v16; // r0
  unsigned __int8 v17; // r4
  char *v18; // r1
  int v19; // r4
  unsigned __int8 v20; // r4
  const char *v21; // r0
  unsigned __int8 v22; // r4
  char *v23; // r1
  const char *v25[2]; // [sp+1Ch] [bp-26Ch] BYREF
  _BYTE v26[276]; // [sp+24h] [bp-264h] BYREF
  _DWORD v27[2]; // [sp+138h] [bp-150h] BYREF
  void *v28; // [sp+140h] [bp-148h]
  int v29; // [sp+144h] [bp-144h] BYREF
  int v30; // [sp+148h] [bp-140h]
  void *v31; // [sp+14Ch] [bp-13Ch]
  const char *v32; // [sp+150h] [bp-138h] BYREF
  _BYTE v33[2]; // [sp+156h] [bp-132h] BYREF
  _BYTE v34[304]; // [sp+158h] [bp-130h] BYREF

  v3 = sub_17D4F2((int)v34, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  sub_17DA96(v3, 8);
  sub_17DA96(v34, 32);
  sub_17DA96(v34, 16);
  sub_17D786((int)v34, (int)v33);
  sub_17D786((int)v34, (int)&v32);
  v4 = v32;
  *(_DWORD *)(a1 + 536) = 6;
  v32 = (const char *)((unsigned int)v4 ^ 0xFD9);
  sub_1436D4(a1);
  v5 = (_BYTE *)operator new(0x30u);
  v30 = 43;
  v29 = 49;
  v31 = v5;
  j_memcpy(v5, &unk_B94E0, 0x2Bu);
  v5[43] = 0;
  sub_144BC2(v5);
  v6 = _strlen_chk((const char *)(**(_DWORD **)(a1 + 944) + 5026), 0xFFFFFFFF);
  LOBYTE(v7) = v30;
  if ( !((unsigned __int8)v29 << 31) )
    v7 = (unsigned __int8)v29 >> 1;
  v8 = _strlen_chk("arizona-mobile", 0xFu);
  v9 = (_QWORD *)operator new(0x20u);
  v28 = v9;
  *v9 = unk_B9510;
  v9[1] = unk_B9518;
  *(_QWORD *)((char *)v9 + 15) = unk_B951F;
  *((_BYTE *)v9 + 23) = 0;
  v27[1] = 23;
  v27[0] = 33;
  sub_144BF2(v9);
  sub_17D4A8(v26);
  v25[0] = (_BYTE *)(&stru_FD0 + 9);
  sub_17D628(v26, v25, 32, 1);
  LOBYTE(v25[0]) = 1;
  sub_17D628(v26, v25, 8, 1);
  v10 = dword_23DF1C == 4;
  if ( dword_23DF1C == 4 )
    v10 = dword_23DEEC == 0;
  if ( v10 )
  {
    LOBYTE(v25[0]) = v6;
    sub_17D628(v26, v25, 8, 1);
    sub_17D566(v26, **(_DWORD **)(a1 + 944) + 5026, v6);
    LOBYTE(v25[0]) = v8;
    sub_17D628(v26, v25, 8, 1);
    v14 = (char *)v28;
    if ( !(LOBYTE(v27[0]) << 31) )
      v14 = (char *)v27 + 1;
    sub_17D566(v26, v14, v8);
  }
  else
  {
    LOBYTE(v25[0]) = v6;
    sub_17D628(v26, v25, 8, 1);
    sub_17D566(v26, **(_DWORD **)(a1 + 944) + 5026, v6);
    v11 = dword_23DF1C;
    v12 = dword_23DF1C == 4;
    if ( dword_23DF1C != 4 )
    {
      v11 = dword_23DEEC;
      v12 = dword_23DEEC == 0;
    }
    if ( !v12 )
    {
      v13 = *(_DWORD *)(v11 + 96);
      sub_F1E90((int)v25, byte_891C7);
      sub_12D5E8(v13, v25[0]);
    }
  }
  v25[0] = v32;
  sub_17D628(v26, v25, 32, 1);
  LOBYTE(v25[0]) = v7;
  sub_17D628(v26, v25, 8, 1);
  v15 = (char *)v31;
  if ( !((unsigned __int8)v29 << 31) )
    v15 = (char *)&v29 + 1;
  sub_17D566(v26, v15, (unsigned __int8)v7);
  if ( dword_23DF1C == 4 )
  {
    v16 = (const char *)v28;
    if ( !(LOBYTE(v27[0]) << 31) )
      v16 = (char *)v27 + 1;
    v17 = _strlen_chk(v16, 0xFFFFFFFF);
    LOBYTE(v25[0]) = v17;
    sub_17D628(v26, v25, 8, 1);
    v18 = (char *)v28;
    if ( !(LOBYTE(v27[0]) << 31) )
      v18 = (char *)v27 + 1;
    sub_17D566(v26, v18, v17);
    if ( dword_23DEEC )
    {
      v25[0] = v32;
      sub_17D628(v26, v25, 32, 1);
      v19 = *(_DWORD *)(dword_23DEEC + 96);
      sub_F1E90((int)v25, byte_891C7);
      sub_12D5E8(v19, v25[0]);
    }
  }
  else
  {
    LOBYTE(v25[0]) = v8;
    sub_17D628(v26, v25, 8, 1);
    sub_17D566(v26, "arizona-mobile", v8);
  }
  if ( dword_23DF1C == 4 )
  {
    v20 = _strlen_chk("arizona-mobile", 0xFu);
    LOBYTE(v25[0]) = v20;
    sub_17D628(v26, v25, 8, 1);
    sub_17D566(v26, "arizona-mobile", v20);
  }
  else
  {
    v21 = (const char *)v28;
    if ( !(LOBYTE(v27[0]) << 31) )
      v21 = (char *)v27 + 1;
    v22 = _strlen_chk(v21, 0xFFFFFFFF);
    LOBYTE(v25[0]) = v22;
    sub_17D628(v26, v25, 8, 1);
    v23 = (char *)v28;
    if ( !(LOBYTE(v27[0]) << 31) )
      v23 = (char *)v27 + 1;
    sub_17D566(v26, v23, v22);
  }
  (*(void (__fastcall **)(_DWORD, void *, _BYTE *, int, int, _DWORD, _DWORD, int, int, int, _DWORD))(**(_DWORD **)(a1 + 528) + 108))(
    *(_DWORD *)(a1 + 528),
    &unk_23C73C,
    v26,
    1,
    8,
    0,
    0,
    -1,
    0xFFFF,
    0xFFFF,
    0);
  sub_ED150(6);
  sub_17D542(v26);
  if ( LOBYTE(v27[0]) << 31 )
    operator delete(v28);
  if ( (unsigned __int8)v29 << 31 )
    operator delete(v31);
  return sub_17D542(v34);
}


// ======================================================================
// ADDR: 0x142780
// SYMBOL: sub_142780
void sub_142780()
{
  int v0; // r4
  const char *v1; // [sp+0h] [bp-10h] BYREF

  if ( dword_23DEEC )
  {
    v0 = *(_DWORD *)(dword_23DEEC + 96);
    sub_F1E90((int)&v1, byte_874FA);
    sub_12D5E8(v0, v1);
  }
}


// ======================================================================
// ADDR: 0x1427b4
// SYMBOL: sub_1427B4
int __fastcall sub_1427B4(int a1)
{
  int v2; // r5
  int result; // r0
  const char *v4; // [sp+0h] [bp-10h] BYREF

  if ( dword_23DEEC )
  {
    v2 = *(_DWORD *)(dword_23DEEC + 96);
    sub_F1E90((int)&v4, byte_87545);
    sub_12D5E8(v2, v4);
  }
  result = **(_DWORD **)(a1 + 944);
  if ( result )
  {
    result = *(_DWORD *)(result + 5052);
    if ( result )
      return sub_10421C(*(_DWORD *)(result + 28), 1);
  }
  return result;
}


// ======================================================================
// ADDR: 0x142800
// SYMBOL: sub_142800
int __fastcall sub_142800(int a1)
{
  int v2; // r5
  int v3; // r5
  int result; // r0
  const char *v5[4]; // [sp+0h] [bp-10h] BYREF

  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 528) + 24))(*(_DWORD *)(a1 + 528)) )
  {
    if ( dword_23DEEC )
    {
      v2 = *(_DWORD *)(dword_23DEEC + 96);
      sub_F1E90((int)v5, byte_8FD07);
      sub_12D5E8(v2, v5[0]);
    }
    (*(void (__fastcall **)(_DWORD, char *))(**(_DWORD **)(a1 + 528) + 20))(*(_DWORD *)(a1 + 528), &byte_8F794);
    *(_DWORD *)(a1 + 536) = 1;
  }
  else
  {
    if ( dword_23DEEC )
    {
      v3 = *(_DWORD *)(dword_23DEEC + 96);
      sub_F1E90((int)v5, byte_87C00);
      sub_12D5E8(v3, v5[0]);
    }
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a1 + 528) + 12))(*(_DWORD *)(a1 + 528), 0, 0);
  }
  result = **(_DWORD **)(a1 + 944);
  if ( result )
  {
    result = *(_DWORD *)(result + 5052);
    if ( result )
      return sub_10421C(*(_DWORD *)(result + 28), 1);
  }
  return result;
}


// ======================================================================
// ADDR: 0x14289c
// SYMBOL: sub_14289C
int __fastcall sub_14289C(int a1, int a2)
{
  int v4; // r0
  _BYTE *v5; // r0
  float v6; // s2
  int v7; // r1
  char v8; // r2
  int v9; // r2
  int v10; // r0
  char v11; // r1
  int v12; // r3
  int v13; // r2
  int v14; // r6
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int *v21; // r0
  int v22; // r0
  char v24; // [sp+8h] [bp-180h] BYREF
  unsigned __int8 v25; // [sp+9h] [bp-17Fh] BYREF
  unsigned __int16 v26; // [sp+Ah] [bp-17Eh] BYREF
  unsigned int v27; // [sp+Ch] [bp-17Ch] BYREF
  unsigned int v28; // [sp+10h] [bp-178h] BYREF
  unsigned int v29; // [sp+14h] [bp-174h] BYREF
  unsigned int v30; // [sp+18h] [bp-170h] BYREF
  unsigned __int16 v31; // [sp+1Eh] [bp-16Ah] BYREF
  __int64 src; // [sp+20h] [bp-168h] BYREF
  unsigned __int64 v33; // [sp+28h] [bp-160h]
  unsigned __int64 v34; // [sp+30h] [bp-158h]
  __int64 v35; // [sp+38h] [bp-150h] BYREF
  __int64 v36; // [sp+40h] [bp-148h] BYREF
  _BYTE v37[15]; // [sp+48h] [bp-140h] BYREF
  __int64 v38; // [sp+57h] [bp-131h] BYREF
  char v39; // [sp+5Fh] [bp-129h] BYREF
  int v40; // [sp+60h] [bp-128h] BYREF
  _DWORD v41[2]; // [sp+64h] [bp-124h] BYREF
  int v42; // [sp+6Ch] [bp-11Ch]
  int v43; // [sp+70h] [bp-118h]

  sub_17D4F2((int)v41, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  v4 = *(_DWORD *)(a1 + 536);
  v40 = 0;
  if ( v4 != 5 )
    return sub_17D542(v41);
  v5 = *(_BYTE **)(a2 + 20);
  src = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  if ( *v5 == 40 )
  {
    sub_17D786((int)v41, (int)&v39);
    sub_17D786((int)v41, (int)&v40);
  }
  sub_17D786((int)v41, (int)&v39);
  sub_17D786((int)v41, (int)&v31);
  sub_17D786((int)v41, (int)&src);
  sub_17D786((int)v41, (int)&src + 2);
  sub_17D786((int)v41, (int)&src + 4);
  sub_17D786((int)v41, (int)&src + 6);
  sub_143758((int)v41, (int)&v30, (int)&v29, (int)&v28, (int)&v27);
  v33 = __PAIR64__(v29, v30);
  v34 = __PAIR64__(v27, v28);
  sub_17D744((int)v41, &v35);
  sub_1438F0(v41, (char *)&v36 + 4, v37, &v37[4]);
  sub_17D786((int)v41, (int)&v26);
  v6 = (float)v26 + 65536.0;
  if ( v26 > 0xF9u )
    v6 = (float)v26;
  if ( v6 < 250.0 )
    v6 = 250.0;
  *(float *)&v37[8] = v6;
  sub_17D786((int)v41, (int)&v25);
  v7 = v25 & 0xF;
  v8 = 7 * v7;
  if ( v7 == 15 )
    v8 = 100;
  v37[13] = v8;
  v9 = 7 * (v25 >> 4);
  if ( v25 < 0x10u )
    LOBYTE(v9) = 0;
  if ( v25 >> 4 == 15 )
    LOBYTE(v9) = 100;
  v37[12] = v9;
  sub_17D786((int)v41, (int)&v24);
  v10 = v41[0];
  v11 = v42;
  v37[14] = (v24 & 0x3F) + (v37[14] & 0xC0);
  if ( v42 >= v41[0] )
  {
    v13 = v42;
    goto LABEL_18;
  }
  v12 = *(unsigned __int8 *)(v43 + (v42 >> 3));
  v13 = ++v42;
  if ( ((v12 << (v11 & 7)) & 0x80) != 0 )
  {
LABEL_18:
    v14 = 1;
    LOBYTE(v38) = 1;
    goto LABEL_19;
  }
  v14 = 0;
LABEL_19:
  if ( v13 >= v41[0] )
  {
    v16 = v13;
  }
  else
  {
    v15 = *(unsigned __int8 *)(v43 + (v13 >> 3));
    v16 = v13 + 1;
    v42 = v13 + 1;
    v14 = (unsigned __int8)(v15 << (v13 & 7)) >> 7;
  }
  if ( v14 )
    BYTE1(v38) = 1;
  if ( v16 >= v41[0] )
  {
    v18 = v16;
  }
  else
  {
    v17 = *(unsigned __int8 *)(v43 + (v16 >> 3));
    v18 = v16 + 1;
    v42 = v16 + 1;
    v14 = (unsigned __int8)(v17 << (v16 & 7)) >> 7;
  }
  if ( v14 )
  {
    sub_17D786((int)v41, (int)&v38 + 4);
    v10 = v41[0];
    v18 = v42;
  }
  if ( v18 < v10 )
  {
    v19 = *(unsigned __int8 *)(v43 + (v18 >> 3));
    v42 = v18 + 1;
    v14 = (unsigned __int8)(v19 << (v18 & 7)) >> 7;
  }
  if ( v14 )
    sub_17D786((int)v41, (int)&v38 + 2);
  if ( v31 <= 0x3ECu )
  {
    v20 = **(_DWORD **)(a1 + 944);
    if ( *(_BYTE *)(v20 + v31 + 4020) )
    {
      v21 = *(int **)(v20 + 4 * v31 + 4);
      if ( v21 )
      {
        v22 = *v21;
        if ( v22 )
          sub_14A8E8(v22, &src);
      }
    }
  }
  return sub_17D542(v41);
}


// ======================================================================
// ADDR: 0x142b24
// SYMBOL: sub_142B24
int __fastcall sub_142B24(int a1, int a2)
{
  int v3; // r1
  int *v4; // r0
  int v5; // r0
  _BYTE v7[32]; // [sp+0h] [bp-140h] BYREF
  unsigned __int16 v8; // [sp+20h] [bp-120h] BYREF
  char v9; // [sp+23h] [bp-11Dh] BYREF
  _BYTE v10[284]; // [sp+24h] [bp-11Ch] BYREF

  sub_17D4F2((int)v10, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  if ( *(_DWORD *)(a1 + 536) == 5 )
  {
    sub_17D786((int)v10, (int)&v9);
    sub_17D786((int)v10, (int)&v8);
    sub_17D744((int)v10, v7);
    if ( v8 <= 0x3ECu )
    {
      v3 = **(_DWORD **)(a1 + 944);
      if ( *(_BYTE *)(v3 + v8 + 4020) )
      {
        v4 = *(int **)(v3 + 4 * v8 + 4);
        if ( v4 )
        {
          v5 = *v4;
          if ( v5 )
            sub_14AAD8(v5, v7);
        }
      }
    }
  }
  return sub_17D542(v10);
}


// ======================================================================
// ADDR: 0x142ba4
// SYMBOL: sub_142BA4
int __fastcall sub_142BA4(int a1, int a2)
{
  int v3; // r1
  int *v4; // r0
  int v5; // r0
  unsigned __int16 v7; // [sp+0h] [bp-148h] BYREF
  char v8; // [sp+3h] [bp-145h] BYREF
  _BYTE dest[40]; // [sp+4h] [bp-144h] BYREF
  _BYTE v10[284]; // [sp+2Ch] [bp-11Ch] BYREF

  sub_17D4F2((int)v10, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  if ( *(_DWORD *)(a1 + 536) == 5 )
  {
    v8 = 0;
    v7 = 0;
    sub_17D786((int)v10, (int)&v8);
    sub_17D786((int)v10, (int)&v7);
    sub_17D744((int)v10, dest);
    if ( v7 <= 0x3ECu )
    {
      v3 = **(_DWORD **)(a1 + 944);
      if ( *(_BYTE *)(v3 + v7 + 4020) )
      {
        v4 = *(int **)(v3 + 4 * v7 + 4);
        if ( v4 )
        {
          v5 = *v4;
          if ( v5 )
            sub_14AC7C(v5, dest);
        }
      }
    }
  }
  return sub_17D542(v10);
}


// ======================================================================
// ADDR: 0x142c2e
// SYMBOL: sub_142C2E
int __fastcall sub_142C2E(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  char v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r0
  int v10; // r2
  int v11; // r0
  char v12; // r2
  char v13; // r2
  int v14; // r0
  char v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r0
  int v19; // r1
  void **v20; // r0
  void *v21; // r0
  char v23; // [sp+6h] [bp-182h] BYREF
  unsigned __int8 v24; // [sp+7h] [bp-181h] BYREF
  int v25; // [sp+8h] [bp-180h] BYREF
  int v26; // [sp+Ch] [bp-17Ch] BYREF
  int v27; // [sp+10h] [bp-178h] BYREF
  int v28; // [sp+14h] [bp-174h] BYREF
  unsigned __int16 v29; // [sp+18h] [bp-170h] BYREF
  char v30; // [sp+1Bh] [bp-16Dh] BYREF
  int v31; // [sp+1Ch] [bp-16Ch] BYREF
  _BYTE src[2]; // [sp+20h] [bp-168h] BYREF
  __int16 v33; // [sp+22h] [bp-166h] BYREF
  _WORD v34[15]; // [sp+24h] [bp-164h] BYREF
  char v35; // [sp+42h] [bp-146h]
  char v36; // [sp+43h] [bp-145h]
  char v37; // [sp+44h] [bp-144h]
  _BYTE v38[5]; // [sp+45h] [bp-143h] BYREF
  int v39; // [sp+4Ah] [bp-13Eh]
  int v40; // [sp+4Eh] [bp-13Ah]
  __int16 v41; // [sp+52h] [bp-136h] BYREF
  __int16 v42; // [sp+5Eh] [bp-12Ah] BYREF
  int v43; // [sp+60h] [bp-128h] BYREF
  _DWORD v44[2]; // [sp+64h] [bp-124h] BYREF
  int v45; // [sp+6Ch] [bp-11Ch]
  int v46; // [sp+70h] [bp-118h]

  sub_17D4F2((int)v44, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  v4 = *(_DWORD *)(a1 + 536);
  v31 = 0;
  if ( v4 != 5 )
    return sub_17D542(v44);
  sub_22178C((int)src, 0x44u);
  if ( **(_BYTE **)(a2 + 20) == 40 )
  {
    sub_17D786((int)v44, (int)&v30);
    sub_17D786((int)v44, (int)&v31);
  }
  sub_17D786((int)v44, (int)&v30);
  sub_17D786((int)v44, (int)&v29);
  v5 = v44[0];
  v6 = v45;
  if ( v45 >= v44[0]
    || (v7 = *(unsigned __int8 *)(v46 + (v45 >> 3)), v8 = v45 + 1, ++v45, ((v7 << (v6 & 7)) & 0x80) != 0) )
  {
    sub_17D786((int)v44, (int)src);
    v5 = v44[0];
    v8 = v45;
  }
  if ( v8 >= v5 || (v9 = *(unsigned __int8 *)(v46 + (v8 >> 3)), v45 = v8 + 1, ((v9 << (v8 & 7)) & 0x80) != 0) )
    sub_17D786((int)v44, (int)&v33);
  sub_17D786((int)v44, (int)v34);
  sub_17D744((int)v44, &v34[1]);
  sub_143758((int)v44, (int)&v28, (int)&v27, (int)&v26, (int)&v25);
  *(_DWORD *)&v34[13] = v25;
  *(_DWORD *)&v34[11] = v26;
  *(_DWORD *)&v34[9] = v27;
  *(_DWORD *)&v34[7] = v28;
  sub_17D786((int)v44, (int)&v24);
  v10 = v24 & 0xF;
  v11 = v24 >> 4;
  if ( v10 )
  {
    if ( v10 == 15 )
      v12 = 100;
    else
      v12 = 7 * v10;
  }
  else
  {
    v12 = 0;
  }
  v36 = v12;
  v13 = 7 * v11;
  if ( v24 < 0x10u )
    v13 = 0;
  if ( v11 == 15 )
    v13 = 100;
  v35 = v13;
  v23 = 0;
  sub_17D786((int)v44, (int)&v23);
  v37 = (v23 & 0x3F) + (v37 & 0xC0);
  sub_17D786((int)v44, (int)v38);
  sub_1438F0(v44, &v27, &v26, &v25);
  v14 = v44[0];
  v15 = v45;
  *(_DWORD *)&v38[1] = v27;
  v39 = v26;
  v40 = v25;
  if ( v45 < v44[0] )
  {
    v16 = *(unsigned __int8 *)(v46 + (v45 >> 3));
    v17 = ++v45;
    if ( ((v16 << (v15 & 7)) & 0x80) != 0 )
    {
      sub_17D786((int)v44, (int)&v42);
      sub_17D744((int)v44, &v41);
      v14 = v44[0];
      v17 = v45;
      goto LABEL_24;
    }
  }
  else
  {
    v17 = v45;
  }
  v42 = -1;
LABEL_24:
  if ( v17 < v14 && (v18 = *(unsigned __int8 *)(v46 + (v17 >> 3)), v45 = v17 + 1, ((v18 << (v17 & 7)) & 0x80) != 0) )
    sub_17D786((int)v44, (int)&v43);
  else
    v43 = 0;
  if ( v29 <= 0x3ECu )
  {
    v19 = **(_DWORD **)(a1 + 944);
    if ( *(_BYTE *)(v19 + v29 + 4020) )
    {
      v20 = *(void ***)(v19 + 4 * v29 + 4);
      if ( v20 )
      {
        v21 = *v20;
        if ( v21 )
          sub_14A6A0(v21, src);
      }
    }
  }
  return sub_17D542(v44);
}


// ======================================================================
// ADDR: 0x142e8a
// SYMBOL: sub_142E8A
int __fastcall sub_142E8A(int a1, int a2)
{
  int v2; // r8
  int v4; // r6
  int i; // r5
  char v6; // r0
  int v7; // r1
  _DWORD *v8; // r0
  _DWORD v10[2]; // [sp+0h] [bp-140h] BYREF
  int v11; // [sp+8h] [bp-138h]
  int v12; // [sp+Ch] [bp-134h]
  __int16 v13; // [sp+114h] [bp-2Ch] BYREF
  __int16 v14; // [sp+116h] [bp-2Ah] BYREF
  __int16 v15; // [sp+118h] [bp-28h] BYREF
  unsigned __int16 v16; // [sp+11Ah] [bp-26h] BYREF
  int v17; // [sp+11Ch] [bp-24h] BYREF
  _BYTE v18[29]; // [sp+123h] [bp-1Dh] BYREF

  v18[0] = 0;
  v17 = 0;
  v4 = **(_DWORD **)(a1 + 944);
  sub_17D4F2((int)v10, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  if ( *(_DWORD *)(a1 + 536) == 5 )
  {
    sub_17D786((int)v10, (int)v18);
    sub_17D786((int)v10, (int)&v17);
    if ( v17 > 0 )
    {
      for ( i = 0; i < v17; ++i )
      {
        sub_17D786((int)v10, (int)&v16);
        v6 = v11;
        if ( v11 < v10[0] )
        {
          v7 = *(unsigned __int8 *)(v12 + (v11++ >> 3));
          v2 = (unsigned __int8)(v7 << (v6 & 7)) >> 7;
        }
        if ( v2 << 24 )
        {
          sub_17D786((int)v10, (int)&v15);
          sub_17D786((int)v10, (int)&v14);
          sub_17D786((int)v10, (int)&v13);
        }
        if ( v16 <= 0x3ECu )
        {
          if ( *(_BYTE *)(v4 + v16 + 4020) )
          {
            v8 = *(_DWORD **)(v4 + 4 * v16 + 4);
            if ( v8 )
            {
              if ( *v8 )
              {
                if ( v2 << 24 )
                  sub_14B5E4();
                else
                  sub_14B674();
              }
            }
          }
        }
      }
    }
  }
  return sub_17D542(v10);
}


// ======================================================================
// ADDR: 0x142f9e
// SYMBOL: sub_142F9E
int __fastcall sub_142F9E(int a1, int a2)
{
  int result; // r0
  int v4; // r1
  int *v5; // r0
  int v6; // r0
  _BYTE v7[74]; // [sp+0h] [bp-168h] BYREF
  unsigned __int16 v8; // [sp+4Ah] [bp-11Eh] BYREF
  _BYTE v9[284]; // [sp+4Ch] [bp-11Ch] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    sub_17D4F2((int)v9, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
    sub_22178C((int)v7, 0x43u);
    sub_17DA96(v9, 8);
    sub_17D786((int)v9, (int)&v8);
    sub_17D744((int)v9, v7);
    if ( v8 <= 0x3ECu )
    {
      v4 = **(_DWORD **)(a1 + 944);
      if ( *(_BYTE *)(v4 + v8 + 4020) )
      {
        v5 = *(int **)(v4 + 4 * v8 + 4);
        if ( v5 )
        {
          v6 = *v5;
          if ( v6 )
            sub_14B194(v6, v7);
        }
      }
    }
    return sub_17D542(v9);
  }
  return result;
}


// ======================================================================
// ADDR: 0x143028
// SYMBOL: sub_143028
int __fastcall sub_143028(int a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r1
  int *v6; // r0
  int v7; // r0
  _BYTE v8[22]; // [sp+0h] [bp-158h] BYREF
  __int64 v9; // [sp+16h] [bp-142h]
  unsigned __int16 v10; // [sp+38h] [bp-120h] BYREF
  char v11; // [sp+3Bh] [bp-11Dh] BYREF
  _BYTE v12[284]; // [sp+3Ch] [bp-11Ch] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    v4 = sub_17D4F2((int)v12, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
    *(_QWORD *)&v8[14] = 1065353216LL;
    v9 = 0LL;
    sub_17D786(v4, (int)&v11);
    sub_17D786((int)v12, (int)&v10);
    sub_17D744((int)v12, v8);
    if ( v10 <= 0x3ECu )
    {
      v5 = **(_DWORD **)(a1 + 944);
      if ( *(_BYTE *)(v5 + v10 + 4020) )
      {
        v6 = *(int **)(v5 + 4 * v10 + 4);
        if ( v6 )
        {
          v7 = *v6;
          if ( v7 )
            sub_14AE1C(v7, v8);
        }
      }
    }
    return sub_17D542(v12);
  }
  return result;
}


// ======================================================================
// ADDR: 0x1430c8
// SYMBOL: sub_1430C8
int __fastcall sub_1430C8(int a1, int a2)
{
  int v3; // r1
  int *v4; // r0
  int v5; // r0
  _BYTE v7[24]; // [sp+0h] [bp-138h] BYREF
  unsigned __int16 v8; // [sp+18h] [bp-120h] BYREF
  char v9; // [sp+1Bh] [bp-11Dh] BYREF
  _BYTE v10[284]; // [sp+1Ch] [bp-11Ch] BYREF

  sub_17D4F2((int)v10, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
  if ( *(_DWORD *)(a1 + 536) == 5 )
  {
    sub_17D786((int)v10, (int)&v9);
    sub_17D786((int)v10, (int)&v8);
    sub_17D744((int)v10, v7);
    if ( v8 <= 0x3ECu )
    {
      v3 = **(_DWORD **)(a1 + 944);
      if ( *(_BYTE *)(v3 + v8 + 4020) )
      {
        v4 = *(int **)(v3 + 4 * v8 + 4);
        if ( v4 )
        {
          v5 = *v4;
          if ( v5 )
            sub_14ABC8(v5, v7);
        }
      }
    }
  }
  return sub_17D542(v10);
}


// ======================================================================
// ADDR: 0x143148
// SYMBOL: sub_143148
int __fastcall sub_143148(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r4
  int *v7; // r1
  unsigned int v8; // r5
  int *v9; // r3
  int v10; // r3
  char v11; // r1
  _BYTE v12[279]; // [sp+0h] [bp-238h] BYREF
  unsigned __int8 v13; // [sp+117h] [bp-121h] BYREF
  _BYTE v14[279]; // [sp+118h] [bp-120h] BYREF
  _BYTE v15[9]; // [sp+22Fh] [bp-9h] BYREF

  result = *(_DWORD *)(a1 + 536);
  if ( result == 5 )
  {
    v5 = sub_17D4F2((int)v14, *(void **)(a2 + 20), *(_DWORD *)(a2 + 12));
    sub_17DA96(v5, 8);
    sub_17D786((int)v14, (int)&v13);
    sub_17D4F2((int)v12, (void *)(*(_DWORD *)(a2 + 20) + 2), *(_DWORD *)(a2 + 12) - 2);
    if ( v13 > 0x4Cu )
    {
      if ( v13 <= 0x5Bu )
      {
        if ( v13 > 0x53u )
        {
          if ( v13 == 84 )
          {
            sub_143EC8(84, (int)v12);
            goto LABEL_56;
          }
          if ( v13 == 91 )
          {
            sub_143FD8(91, v12);
            goto LABEL_56;
          }
        }
        else
        {
          if ( v13 == 77 )
          {
            sub_143E90(77, (int)v12);
            goto LABEL_56;
          }
          if ( v13 == 78 )
          {
            sub_143F84(a1, (int)v12);
            goto LABEL_56;
          }
        }
      }
      else if ( v13 <= 0x78u )
      {
        if ( v13 == 92 )
        {
          sub_14400C(92, v12);
          goto LABEL_56;
        }
        if ( v13 == 108 )
        {
          sub_144040(108, (int)v12);
          goto LABEL_56;
        }
      }
      else
      {
        switch ( v13 )
        {
          case 'y':
            sub_1440DC(v12);
            goto LABEL_56;
          case 'z':
            sub_1440A4(v12);
            goto LABEL_56;
          case '|':
            sub_144154(v12);
            goto LABEL_56;
        }
      }
    }
    else
    {
      if ( v13 > 0x26u )
      {
        switch ( v13 )
        {
          case '\'':
            sub_143A60(v13, (int)v12);
            break;
          case '(':
          case ')':
          case '*':
          case ',':
          case '-':
          case '.':
            goto LABEL_31;
          case '+':
            v15[0] = 0;
            sub_17D786((int)v12, (int)v15);
            v11 = v15[0];
            if ( v15[0] )
              v11 = 1;
            *(_BYTE *)(*(_DWORD *)(a1 + 524) + 73) = v11;
            break;
          case '/':
            sub_13DF62((int)&qword_314304, (int)v12);
            break;
          case '0':
            sub_13E172(&qword_314304, (int)v12);
            break;
          case '1':
            sub_13E2A0(&qword_314304);
            break;
          default:
            switch ( v13 )
            {
              case '<':
                sub_143ABC(v13, (int)v12);
                break;
              case '=':
                sub_143BDC(v13, (int)v12);
                break;
              case '>':
                sub_143CA0((int)v12);
                break;
              case 'C':
                sub_143D34(v12);
                break;
              case 'D':
                sub_143DB8(v13, (int)v12);
                break;
              default:
                goto LABEL_31;
            }
            break;
        }
        goto LABEL_56;
      }
      switch ( v13 )
      {
        case 3u:
          sub_17D786((int)v12, (int)v15);
          sub_10A784((float)v15[0]);
          goto LABEL_56;
        case 8u:
          sub_17D786((int)v12, (int)v15);
          sub_10A4A4(v15[0]);
          goto LABEL_56;
        case 9u:
          sub_143A0C(9, (int)v12);
LABEL_56:
          sub_17D542(v12);
          return sub_17D542(v14);
      }
    }
LABEL_31:
    v6 = dword_3142FC;
    if ( dword_3142FC )
    {
      v7 = &dword_3142FC;
      do
      {
        v8 = *(unsigned __int8 *)(v6 + 16);
        v9 = (int *)v6;
        if ( v8 < v13 )
          v9 = (int *)(v6 + 4);
        v10 = *v9;
        if ( v8 >= v13 )
          v7 = (int *)v6;
        v6 = v10;
      }
      while ( v10 );
      if ( v7 != &dword_3142FC && v13 >= (unsigned int)*((unsigned __int8 *)v7 + 16) )
        sub_1441A4(v7 + 5, v12);
    }
    goto LABEL_56;
  }
  return result;
}


// ======================================================================
