// ADDR: 0x9bf30
// SYMBOL: sub_9BF30
int __fastcall sub_9BF30(int *a1, int a2)
{
  int v3; // r0
  int v4; // r5
  int result; // r0
  bool v6; // zf
  int v7; // r8
  _DWORD *v8; // r6
  bool v9; // zf
  _DWORD *v10; // r9
  int v11; // r1
  const void *v12; // r1
  bool v13; // zf

  v3 = a1[19];
  if ( v3 )
  {
    a2 = a1[21];
    v4 = *(_DWORD *)(a2 + 4 * v3 - 4);
  }
  else
  {
    v4 = 0;
  }
  result = *a1;
  v6 = *a1 == 0;
  if ( *a1 )
  {
    a2 = a1[2];
    v6 = a2 == 0;
  }
  if ( v6 )
    return sub_9BD30(a1);
  v7 = result - 1;
  v8 = (_DWORD *)(a2 + 40 * (result - 1));
  v9 = *v8 == 0;
  if ( *v8 )
    v9 = v8[5] == v4;
  if ( !v9 || v8[8] )
    return sub_9BD30(a1);
  v10 = 0;
  if ( result > 1 )
    v10 = v8 - 10;
  if ( *v8 )
    goto LABEL_23;
  if ( result < 2 )
    goto LABEL_23;
  result = v10[5];
  if ( result != v4 )
    goto LABEL_23;
  v11 = a1[16];
  v12 = (const void *)(v11 ? a1[18] + 16 * v11 - 16 : a1[10] + 20);
  result = memcmp(v10 + 1, v12, 0x10u);
  v13 = result == 0;
  if ( !result )
  {
    result = v10[8];
    v13 = result == 0;
  }
  if ( v13 )
    *a1 = v7;
  else
LABEL_23:
    v8[5] = v4;
  return result;
}


// ======================================================================
