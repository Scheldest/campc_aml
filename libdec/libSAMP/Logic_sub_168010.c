// ADDR: 0x1683f8
// SYMBOL: sub_1683F8
int __fastcall sub_1683F8(int result)
{
  int v1; // r10
  int v2; // r9
  int v3; // r8
  int v4; // r12
  int *i; // lr
  int v6; // r2
  int v7; // r5
  int v8; // r6
  int *j; // r4
  int v10; // t1

  v1 = *(_DWORD *)(dword_381B58 + 6812);
  if ( v1 )
  {
    if ( result && v1 >= 1 )
    {
      v2 = 0;
      v3 = 1;
      v4 = *(_DWORD *)(dword_381B58 + 6820);
      for ( i = (int *)(v4 + 40); ; i += 9 )
      {
        v6 = *(_DWORD *)(v4 + 36 * v2 + 4);
        if ( v6 && !(*(unsigned __int8 *)(v6 + 11) << 31) )
        {
          v7 = 0;
          v8 = v3;
          for ( j = i; ; j += 9 )
          {
            if ( v6 )
              v7 |= *(_DWORD *)(v6 + 764) == *(_DWORD *)(result + 764);
            if ( v8 >= v1 || v7 << 31 )
              break;
            v10 = *j;
            v6 = v10;
            ++v8;
          }
          if ( !(v7 << 31) )
            break;
        }
        ++v2;
        ++v3;
        if ( v2 == v1 )
          return result;
      }
    }
    else
    {
      v2 = 0;
    }
    if ( v2 < v1 )
      return sub_1702CC(v2);
  }
  return result;
}


// ======================================================================
// ADDR: 0x16fdb0
// SYMBOL: sub_16FDB0
int __fastcall sub_16FDB0(int a1)
{
  _DWORD *v2; // r6
  int v3; // r1
  int result; // r0
  int v5; // r1
  int i; // r2

  v2 = (_DWORD *)(dword_381B58 + 6520);
  v3 = *(_DWORD *)(dword_381B58 + 6520);
  result = *(_DWORD *)(dword_381B58 + 6528) + 4 * v3;
  if ( *(_DWORD *)(result - 4) != a1 && v3 >= 2 )
  {
    v5 = v3 - 1;
    for ( i = 0; *(_DWORD *)(result + i - 8) != a1; i -= 4 )
    {
      if ( --v5 <= 0 )
        return result;
    }
    j_memmove((void *)(result + i - 8), (const void *)(result + i - 4), 4 - i);
    result = v2[2] + 4 * *v2;
    *(_DWORD *)(result - 4) = a1;
  }
  return result;
}


// ======================================================================
// ADDR: 0x16fe18
// SYMBOL: sub_16FE18
int __fastcall sub_16FE18(int a1)
{
  _DWORD *v2; // r6
  int v3; // r1
  int result; // r0
  int v5; // r2
  bool v6; // zf
  int v7; // r1
  int i; // r2

  v2 = (_DWORD *)(dword_381B58 + 6508);
  v3 = *(_DWORD *)(dword_381B58 + 6508);
  result = *(_DWORD *)(dword_381B58 + 6516) + 4 * v3;
  v5 = *(_DWORD *)(result - 4);
  v6 = v5 == a1;
  if ( v5 != a1 )
    v6 = *(_DWORD *)(v5 + 764) == a1;
  if ( !v6 && v3 >= 2 )
  {
    v7 = v3 - 1;
    for ( i = 0; *(_DWORD *)(result + i - 8) != a1; i -= 4 )
    {
      if ( --v7 <= 0 )
        return result;
    }
    j_memmove((void *)(result + i - 8), (const void *)(result + i - 4), 4 - i);
    result = v2[2] + 4 * *v2;
    *(_DWORD *)(result - 4) = a1;
  }
  return result;
}


// ======================================================================
