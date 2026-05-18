// ADDR: 0x172ab2
// SYMBOL: sub_172AB2
int __fastcall sub_172AB2(int *a1)
{
  int v2; // r0
  _QWORD *v3; // r9
  unsigned int v4; // r5
  int v5; // r0
  __int64 v6; // d17
  bool v7; // cc
  unsigned int v8; // r11
  int v9; // r6
  int result; // r0
  _DWORD *v11; // r10
  int v12; // r1
  int v13; // r1
  bool v14; // zf
  __int64 v15; // d17
  _QWORD v16[6]; // [sp+0h] [bp-30h] BYREF

  v2 = a1[16];
  if ( v2 )
    v3 = (_QWORD *)(a1[18] + 16 * v2 - 16);
  else
    v3 = (_QWORD *)(a1[10] + 20);
  v4 = *a1;
  v5 = a1[2];
  v6 = v3[1];
  v7 = *a1 < 1;
  v16[0] = *v3;
  v16[1] = v6;
  if ( v7 )
    return sub_1729EA(a1);
  if ( !v5 )
    return sub_1729EA(a1);
  v8 = v5 + 40 * (v4 - 1);
  v9 = *(_DWORD *)v8;
  if ( *(_DWORD *)v8 )
  {
    if ( memcmp((const void *)(v8 + 4), v16, 0x10u) )
      return sub_1729EA(a1);
  }
  if ( *(_DWORD *)(v8 + 32) )
    return sub_1729EA(a1);
  v11 = 0;
  if ( v4 > 1 )
    v11 = (_DWORD *)(v8 - 40);
  if ( v9 || v4 < 2 || memcmp(v11 + 1, v16, 0x10u) )
    goto LABEL_21;
  v12 = a1[19];
  result = v11[5];
  v13 = v12 ? *(_DWORD *)(a1[21] + 4 * v12 - 4) : 0;
  v14 = result == v13;
  if ( result == v13 )
  {
    result = v11[8];
    v14 = result == 0;
  }
  if ( v14 )
  {
    *a1 = v4 - 1;
  }
  else
  {
LABEL_21:
    v15 = v3[1];
    result = v8 + 4;
    *(_QWORD *)(v8 + 4) = *v3;
    *(_QWORD *)(v8 + 12) = v15;
  }
  return result;
}


// ======================================================================
