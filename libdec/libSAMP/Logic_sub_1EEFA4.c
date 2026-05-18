// ADDR: 0x1eeff8
// SYMBOL: sub_1EEFF8
int __fastcall sub_1EEFF8(int a1)
{
  return sub_1EF13C() - (*(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20));
}


// ======================================================================
// ADDR: 0x1ef00c
// SYMBOL: sub_1EF00C
int __fastcall sub_1EF00C(int a1)
{
  unsigned int v2; // r0
  int *v3; // r0
  int v4; // t1
  __int64 v5; // r0
  int v6; // r2
  unsigned int v7; // r6
  int v8; // r5
  int v9; // r5
  int v10; // r12
  __int64 v11; // r2
  int v12; // r1
  __int64 v13; // kr00_8
  int v15; // [sp+0h] [bp-38h] BYREF
  _DWORD v16[3]; // [sp+4h] [bp-34h] BYREF
  int v17; // [sp+10h] [bp-28h] BYREF
  int v18; // [sp+14h] [bp-24h]
  __int64 v19; // [sp+18h] [bp-20h]
  int v20; // [sp+20h] [bp-18h]
  int v21; // [sp+24h] [bp-14h]

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 >= 0x38 )
  {
    *(_DWORD *)(a1 + 16) = v2 - 56;
LABEL_3:
    v3 = *(int **)(a1 + 4);
    v4 = *v3;
    *(_DWORD *)(a1 + 4) = v3 + 1;
    v17 = v4;
    sub_1EF15C(a1, &v17);
    return v21;
  }
  v5 = *(_QWORD *)(a1 + 8);
  v6 = HIDWORD(v5) - *(_DWORD *)a1;
  v7 = ((int)v5 - *(_DWORD *)(a1 + 4)) >> 2;
  if ( v7 < v6 >> 2 )
  {
    if ( HIDWORD(v5) != (_DWORD)v5 )
    {
      v17 = operator new(0xFC0u);
      sub_1EF238(a1, &v17);
      return v21;
    }
    v17 = operator new(0xFC0u);
    sub_1EF314(a1, &v17);
    goto LABEL_3;
  }
  v8 = v6 >> 1;
  if ( !v6 )
    v8 = 1;
  v20 = a1 + 12;
  v17 = sub_1EF628();
  LODWORD(v19) = v17 + 4 * v7;
  HIDWORD(v19) = v17 + 4 * v8;
  v18 = v19;
  v16[1] = a1 + 20;
  v16[2] = 56;
  v15 = operator new(0xFC0u);
  v16[0] = v15;
  sub_1EF3F4(&v17, &v15);
  v9 = *(_DWORD *)(a1 + 8);
  v16[0] = 0;
  while ( v9 != *(_DWORD *)(a1 + 4) )
  {
    v9 -= 4;
    sub_1EF4D0(&v17, v9);
  }
  v10 = v17;
  v11 = v19;
  *(_DWORD *)(a1 + 4) = v18;
  v12 = *(_DWORD *)a1;
  v13 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)a1 = v10;
  *(_QWORD *)(a1 + 8) = v11;
  v17 = v12;
  v18 = v9;
  v19 = v13;
  sub_1EF5B0(v16);
  sub_1EF5C0(&v17);
  return v21;
}


// ======================================================================
// ADDR: 0x1ef666
// SYMBOL: sub_1EF666
int __fastcall sub_1EF666(__int64 a1)
{
  int v1; // r5
  _DWORD *v2; // r4

  v1 = a1;
  *(_DWORD *)a1 = *(_DWORD *)HIDWORD(a1);
  v2 = (_DWORD *)HIDWORD(a1);
  *(_QWORD *)(a1 + 4) = *(_QWORD *)(HIDWORD(a1) + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(HIDWORD(a1) + 12);
  LODWORD(a1) = HIDWORD(a1) + 4;
  sub_1EE5C6(a1);
  std::__fs::filesystem::directory_entry::directory_entry(v1 + 16, v2 + 4);
  *v2 = 0;
  return v1;
}


// ======================================================================
