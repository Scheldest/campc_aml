// ADDR: 0x143388
// SYMBOL: sub_143388
void __fastcall sub_143388(int a1)
{
  int i; // r5
  int v3; // r0
  int *v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r2
  int v8; // r3
  int j; // r6
  int v10; // r1
  int v11; // r1
  _WORD *v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r3
  int v19; // r4
  const char *v20; // [sp+0h] [bp-18h] BYREF
  int v21; // [sp+4h] [bp-14h]
  int v22; // [sp+8h] [bp-10h]
  int v23; // [sp+Ch] [bp-Ch]
  int v24; // [sp+10h] [bp-8h]
  int v25; // [sp+14h] [bp-4h]
  int savedregs[2]; // [sp+18h] [bp+0h]

  for ( i = 0; i != 1004; ++i )
  {
    v3 = **(_DWORD **)(a1 + 944);
    if ( *(_BYTE *)(v3 + i + 4020) )
    {
      v4 = *(int **)(v3 + 4 * i + 4);
      if ( v4 )
      {
        v5 = *v4;
        if ( v5 )
        {
          *(_BYTE *)(v5 + 18) = -1;
          sub_149278();
        }
      }
    }
  }
  sub_13E934(*(_DWORD *)(**(_DWORD **)(a1 + 944) + 5052));
  sub_13F01C(*(_DWORD *)(**(_DWORD **)(a1 + 944) + 5052), 0);
  sub_10421C(*(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 944) + 5052) + 28), 1);
  sub_F84A0();
  v6 = *(_DWORD **)(a1 + 944);
  *(_DWORD *)(a1 + 536) = 11;
  sub_149014(*v6);
  sub_148D6A(**(_DWORD **)(a1 + 944));
  sub_143520(a1);
  sub_143556(a1);
  sub_14358C(a1);
  sub_1435C2(a1);
  sub_1435F8(a1);
  for ( j = 136; j != 236; ++j )
  {
    v10 = *(_DWORD *)(a1 + 4 * j);
    if ( v10 )
    {
      sub_107188(word_B9528, v10, v7, v8, (int)v20, v21, v22, v23, v24, v25, savedregs[0]);
      *(_DWORD *)(a1 + 4 * j) = 0;
    }
  }
  sub_14362E(a1);
  sub_143668(a1);
  sub_14369E(a1);
  v11 = *(_DWORD *)(a1 + 524);
  *(_DWORD *)(v11 + 32) = 1114636288;
  *(_BYTE *)(v11 + 16) = 0;
  v12 = (_WORD *)dword_23DEF0;
  *(_DWORD *)(v11 + 37) = 16842764;
  *(_BYTE *)(v11 + 24) = 1;
  *(_BYTE *)v11 = 0;
  *(_DWORD *)(v11 + 12) = 1006834287;
  *(_DWORD *)(v11 + 4) = 0;
  *v12 = 0;
  v13 = sub_E35A0((int)v12);
  sub_105034(v13, 0, 1, v14);
  sub_FA328(dword_23DEF0);
  v15 = sub_E35A0(dword_23DEF0);
  sub_104154(v15);
  v16 = sub_E35A0(dword_23DEF0);
  sub_10431C(v16, 0);
  sub_F9480(dword_23DEF0, 0, v17, v18, (int)v20, v21, v22, v23, v24, v25, savedregs[0]);
  *(_BYTE *)(*(_DWORD *)(a1 + 524) + 26) = 0;
  sub_107138();
  sub_F9B50(dword_23DEF0, *(_DWORD *)(*(_DWORD *)(a1 + 524) + 12));
  sub_FA2A8(dword_23DEF0, 0);
  sub_F9478(dword_23DEF0, 0);
  if ( dword_23DEEC )
  {
    v19 = *(_DWORD *)(dword_23DEEC + 96);
    sub_F1E90((int)&v20, byte_883E8);
    sub_12D490(v19, v20);
  }
}


// ======================================================================
// ADDR: 0x148cae
// SYMBOL: sub_148CAE
int __fastcall sub_148CAE(_DWORD *a1, unsigned int a2)
{
  char *v4; // r1
  _DWORD *v5; // r6
  _DWORD *v6; // r0
  _DWORD **v7; // r6
  _DWORD *v8; // t1
  _BYTE *v9; // r9
  int v10; // r1
  _DWORD *v12; // r0
  int v13; // r0
  int v14; // r2
  char *v15; // r0
  char *v16; // r6
  size_t v17; // r4

  if ( a2 >> 2 > 0xFA )
    return 0;
  v4 = (char *)a1 + a2;
  if ( !v4[4020] )
    return 0;
  v5 = &a1[a2];
  v8 = (_DWORD *)v5[1];
  v7 = (_DWORD **)(v5 + 1);
  v6 = v8;
  if ( !v8 )
    return 0;
  v9 = v4 + 4020;
  v10 = a1[1263];
  if ( !v10 || !*(_BYTE *)(v10 + 432) || *(_DWORD *)(v10 + 4) != a2 )
  {
    *v9 = 0;
    goto LABEL_11;
  }
  sub_13F01C(a1[1263], 0);
  v6 = *v7;
  *v9 = 0;
  if ( v6 )
  {
LABEL_11:
    v12 = sub_13DF08(v6);
    operator delete(v12);
  }
  v13 = 0;
  v14 = 0;
  *v7 = 0;
  do
  {
    if ( *((_BYTE *)a1 + v13 + 4020) )
      v14 = v13;
    ++v13;
  }
  while ( v13 != 1004 );
  v15 = (char *)a1[1518];
  v16 = (char *)a1[1517];
  *a1 = v14;
  if ( v16 != v15 )
  {
    while ( *(_DWORD *)v16 != a2 )
    {
      v16 += 4;
      if ( v16 == v15 )
        return 1;
    }
  }
  if ( v16 != v15 )
  {
    v17 = v15 - (v16 + 4);
    if ( v15 != v16 + 4 )
      j_memmove(v16, v16 + 4, v17);
    a1[1518] = &v16[v17];
  }
  return 1;
}


// ======================================================================
// ADDR: 0x17caf8
// SYMBOL: sub_17CAF8
void __fastcall sub_17CAF8(int a1, int a2, int a3, unsigned __int8 *a4)
{
  int v5; // r0
  int v6; // r4
  unsigned int v7; // r0
  unsigned __int8 *v8; // r1
  int v9; // r2
  char *v10; // r1
  int v11; // [sp+4h] [bp-2Ch]
  void *v12[2]; // [sp+Ch] [bp-24h] BYREF
  void *v13; // [sp+14h] [bp-1Ch]

  v5 = sub_17C080();
  if ( v5 )
  {
    v6 = v5;
    v7 = *a4;
    v8 = (unsigned __int8 *)*((_DWORD *)a4 + 2);
    v9 = *((_DWORD *)a4 + 1);
    if ( (v7 & 1) == 0 )
    {
      v8 = a4 + 1;
      v9 = v7 >> 1;
    }
    sub_164D04(v12, v8, v9);
    v10 = (char *)v13;
    if ( !(LOBYTE(v12[0]) << 31) )
      v10 = (char *)v12 + 1;
    v11 = (*(int (__fastcall **)(int, char *))(*(_DWORD *)v6 + 668))(v6, v10);
    sub_17C1B8(v6);
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 92))(v6, v11);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 912))(v6) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 64))(v6);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 68))(v6);
    }
    if ( LOBYTE(v12[0]) << 31 )
      operator delete(v13);
  }
  else
  {
    sub_2242C8(4, "AXL", "Env not loaded. (SendFrontendMessage)");
  }
}


// ======================================================================
