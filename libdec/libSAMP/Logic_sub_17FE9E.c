// ADDR: 0x17ff4a
// SYMBOL: sub_17FF4A
int __fastcall sub_17FF4A(int a1)
{
  int v1; // r5
  int v3; // r1
  unsigned int v4; // r6
  int v5; // r0
  __int64 v6; // d17
  int v7; // r4
  int result; // r0

  v1 = a1 + 2420;
  v3 = a1 + 2440;
  v4 = -4;
  v5 = a1 + 2420;
  v6 = *(_QWORD *)(v5 + 8);
  *(_QWORD *)v3 = *(_QWORD *)v5;
  *(_QWORD *)(v3 + 8) = v6;
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v5 + 16);
  do
  {
    v7 = v1 + v4;
    v4 += 4;
    *(_DWORD *)(v7 + 4) = sub_187150();
  }
  while ( v4 < 0x10 );
  result = sub_17E2E4() + 5000;
  *(_DWORD *)(a1 + 2416) = result;
  return result;
}


// ======================================================================
// ADDR: 0x17ff90
// SYMBOL: sub_17FF90
int __fastcall sub_17FF90(int a1)
{
  int v3; // [sp+0h] [bp-30h] BYREF
  _BYTE v4[32]; // [sp+10h] [bp-20h] BYREF

  sub_184910(v4);
  sub_184910(&v3);
  return sub_17FFBE(a1);
}


// ======================================================================
// ADDR: 0x17ffbe
// SYMBOL: sub_17FFBE
int __fastcall sub_17FFBE(int a1, __int64 *a2, _QWORD *a3)
{
  int v4; // r0
  unsigned int v5; // r3
  unsigned int v6; // r6
  bool v7; // zf
  __int64 v8; // d16
  __int64 v9; // d17
  __int64 *v10; // r1
  _QWORD *v11; // r0
  __int64 v12; // d17
  __int64 v13; // d17
  __int64 v14; // d16
  __int64 v15; // d17
  int v16; // r1
  unsigned int v17; // r2
  __int64 v18; // d17
  int v19; // r1
  unsigned int v20; // r2
  int v21; // r3
  __int64 v23; // [sp+0h] [bp-30h] BYREF
  __int64 v24; // [sp+8h] [bp-28h]
  __int64 v25; // [sp+10h] [bp-20h] BYREF
  __int64 v26; // [sp+18h] [bp-18h]

  *(_BYTE *)(a1 + 128) = 1;
  v4 = 12;
  while ( 1 )
  {
    v5 = *(_DWORD *)((char *)a3 + v4);
    v6 = *(_DWORD *)((char *)a2 + v4);
    if ( v6 > v5 )
      break;
    if ( v6 >= v5 )
    {
      v7 = v4 == 0;
      v4 -= 4;
      if ( !v7 )
        continue;
    }
    v8 = *a2;
    v9 = a2[1];
    v10 = (__int64 *)(a1 + 196);
    *(_QWORD *)(a1 + 196) = v8;
    *(_QWORD *)(a1 + 204) = v9;
    v11 = (_QWORD *)(a1 + 244);
    goto LABEL_8;
  }
  v12 = a2[1];
  *(_QWORD *)(a1 + 244) = *a2;
  *(_QWORD *)(a1 + 252) = v12;
  v11 = (_QWORD *)(a1 + 196);
  v10 = (__int64 *)(a1 + 196);
LABEL_8:
  v13 = a3[1];
  *v11 = *a3;
  v11[1] = v13;
  v14 = *v10;
  v15 = v10[1];
  v16 = 0;
  v25 = v14;
  v26 = v15;
  do
  {
    v17 = *((_DWORD *)&v25 + v16);
    *((_DWORD *)&v25 + v16) = v17 - 1;
    if ( v17 - 1 < v17 )
      break;
    v7 = v16++ == 3;
  }
  while ( !v7 );
  v18 = *(_QWORD *)(a1 + 252);
  v19 = 0;
  v23 = *(_QWORD *)(a1 + 244);
  v24 = v18;
  do
  {
    v20 = *((_DWORD *)&v23 + v19);
    *((_DWORD *)&v23 + v19) = v20 - 1;
    if ( v20 - 1 < v20 )
      break;
    v7 = v19++ == 3;
  }
  while ( !v7 );
  ((void (__fastcall *)(__int64 *, __int64 *, int))sub_184D2E)(&v25, &v23, a1 + 164);
  sub_1851BC(a1 + 164, a1);
  sub_185718(a1, a1 + 164);
  sub_18525C(a1 + 196, a1 + 244);
  sub_184D2E(
    a1 + 196,
    a1 + 244,
    a1 + 32,
    v21,
    v23,
    HIDWORD(v23),
    v24,
    HIDWORD(v24),
    v25,
    HIDWORD(v25),
    v26,
    HIDWORD(v26));
  sub_1854A8(a1 + 32, a1 + 64);
  sub_18553A(a1 + 32, a1 + 96);
  sub_18559E(a1 + 196, a1 + 212);
  sub_185604(a1 + 196, a1 + 228);
  sub_18559E(a1 + 244, a1 + 260);
  return sub_185604(a1 + 244, a1 + 276);
}


// ======================================================================
// ADDR: 0x186ff8
// SYMBOL: sub_186FF8
int __fastcall sub_186FF8(int a1)
{
  int result; // r0
  int i; // r2

  result = a1 | 1;
  dword_381D88[0] = result;
  dword_2390B4 = 0;
  for ( i = 1; i != 624; ++i )
  {
    result *= (_DWORD)&elf_gnu_hash_bucket[452] + 1;
    dword_381D88[i] = result;
  }
  return result;
}


// ======================================================================
