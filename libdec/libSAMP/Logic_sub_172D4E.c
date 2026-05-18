// ADDR: 0x172b7a
// SYMBOL: sub_172B7A
int __fastcall sub_172B7A(int *a1)
{
  int v2; // r0
  int v3; // r5
  int result; // r0
  int v5; // r1
  int v6; // r8
  _DWORD *v7; // r6
  _DWORD *v8; // r9
  int v9; // r1
  const void *v10; // r1

  v2 = a1[19];
  if ( v2 )
    v3 = *(_DWORD *)(a1[21] + 4 * v2 - 4);
  else
    v3 = 0;
  result = *a1;
  if ( !*a1 )
    return sub_1729EA(a1);
  v5 = a1[2];
  if ( !v5 )
    return sub_1729EA(a1);
  v6 = result - 1;
  v7 = (_DWORD *)(v5 + 40 * (result - 1));
  if ( *v7 )
  {
    if ( v7[5] != v3 )
      return sub_1729EA(a1);
  }
  if ( v7[8] )
    return sub_1729EA(a1);
  v8 = 0;
  if ( result > 1 )
    v8 = v7 - 10;
  if ( *v7
    || result < 2
    || (result = v8[5], result != v3)
    || ((v9 = a1[16]) == 0 ? (v10 = (const void *)(a1[10] + 20)) : (v10 = (const void *)(a1[18] + 16 * v9 - 16)),
        (result = memcmp(v8 + 1, v10, 0x10u)) != 0 || (result = v8[8]) != 0) )
  {
    v7[5] = v3;
  }
  else
  {
    *a1 = v6;
  }
  return result;
}


// ======================================================================
