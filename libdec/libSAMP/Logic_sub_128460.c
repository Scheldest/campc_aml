// ADDR: 0x128650
// SYMBOL: sub_128650
int __fastcall sub_128650(int a1)
{
  void *v2; // r5
  const void *v3; // r6
  void *v4; // r5
  const void *v5; // r6
  void *v6; // r5
  const void *v7; // r6
  int v8; // r1
  int v9; // r6
  int v10; // r1
  int v11; // r1
  int v12; // r1
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0
  _DWORD v17[4]; // [sp+0h] [bp-30h] BYREF
  _DWORD *v18; // [sp+10h] [bp-20h]

  sub_164196(dword_23DF24 + 6762576, *(_DWORD *)(a1 + 24), 0);
  v2 = *(void **)(a1 + 12);
  v3 = *(const void **)(dword_23DF24 + 6782424);
  sub_1641C4(dword_23DF24 + 6782424);
  *(_DWORD *)(dword_23DF24 + 6782424) = v2;
  j_memcpy(v2, v3, (size_t)&unk_807F0);
  v4 = *(void **)(a1 + 16);
  v5 = *(const void **)(dword_23DF24 + 6788820);
  sub_1641C4(dword_23DF24 + 6788820);
  *(_DWORD *)(dword_23DF24 + 6788820) = v4;
  j_memcpy(v4, v5, 0x13880u);
  v6 = *(void **)(a1 + 20);
  v7 = *(const void **)(dword_23DF24 + 6788020);
  sub_1641C4(dword_23DF24 + 6788020);
  *(_DWORD *)(dword_23DF24 + 6788020) = v6;
  j_memcpy(v6, v7, 0x1680u);
  v18 = v17;
  v17[0] = &off_22D60C;
  sub_1642EC(dword_23DF24 + 2949120, v17);
  if ( v17 == v18 )
  {
    v8 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_6;
    v8 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v8))();
LABEL_6:
  v18 = v17;
  v17[0] = &off_22D64C;
  v9 = sub_1642EC((char *)&unk_2D3000 + dword_23DF24, v17);
  if ( v17 == v18 )
  {
    v10 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_11;
    v10 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v10))();
LABEL_11:
  if ( v9 )
    goto LABEL_17;
  v18 = v17;
  v17[0] = &off_22D68C;
  sub_1642EC((char *)&unk_2D3000 + dword_23DF24, v17);
  if ( v17 == v18 )
  {
    v11 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_17;
    v11 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v11))();
LABEL_17:
  v18 = v17;
  v17[0] = &off_22D6CC;
  sub_1642EC(dword_23DF24 + 4636672, v17);
  if ( v17 == v18 )
  {
    v12 = 4;
  }
  else
  {
    if ( !v18 )
      goto LABEL_22;
    v12 = 5;
  }
  (*(void (**)(void))(*v18 + 4 * v12))();
LABEL_22:
  v13 = *(void **)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  if ( v13 )
    operator delete[](v13);
  v14 = *(void **)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 0;
  if ( v14 )
    operator delete[](v14);
  v15 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  if ( v15 )
    operator delete[](v15);
  return a1;
}


// ======================================================================
