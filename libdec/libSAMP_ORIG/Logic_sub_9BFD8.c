// ADDR: 0x9be2c
// SYMBOL: sub_9BE2C
int __fastcall sub_9BE2C(int *a1)
{
  int v2; // r0
  _QWORD *v3; // r9
  unsigned int v4; // r5
  int v5; // r0
  __int64 v6; // d17
  bool v7; // cc
  unsigned int v8; // r11
  int v9; // r6
  _DWORD *v11; // r10
  int v12; // r1
  int v13; // r0
  int v14; // r1
  bool v15; // zf
  __int64 v16; // d17
  _QWORD v17[2]; // [sp+0h] [bp-30h] BYREF
  int v18; // [sp+10h] [bp-20h]

  v2 = a1[16];
  if ( v2 )
    v3 = (_QWORD *)(a1[18] + 16 * v2 - 16);
  else
    v3 = (_QWORD *)(a1[10] + 20);
  v4 = *a1;
  v5 = a1[2];
  v6 = v3[1];
  v7 = *a1 < 1;
  v17[0] = *v3;
  v17[1] = v6;
  if ( v7 )
    return sub_9BD30(a1);
  if ( !v5 )
    return sub_9BD30(a1);
  v8 = v5 + 40 * (v4 - 1);
  v9 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 )
  {
    if ( memcmp((const void *)(v8 + 4), v17, 0x10u) )
      return sub_9BD30(a1);
  }
  if ( *(_DWORD *)(v8 + 32) )
    return sub_9BD30(a1);
  v11 = 0;
  if ( v4 > 1 )
    v11 = (_DWORD *)(v8 - 40);
  if ( v9 || v4 < 2 || memcmp(v11 + 1, v17, 0x10u) )
    goto LABEL_21;
  v12 = a1[19];
  v13 = v11[5];
  v14 = v12 ? *(_DWORD *)(a1[21] + 4 * v12 - 4) : 0;
  v15 = v13 == v14;
  if ( v13 == v14 )
    v15 = v11[8] == 0;
  if ( v15 )
  {
    *a1 = v4 - 1;
  }
  else
  {
LABEL_21:
    v16 = v3[1];
    *(_QWORD *)(v8 + 4) = *v3;
    *(_QWORD *)(v8 + 12) = v16;
  }
  return v18;
}


// ======================================================================
