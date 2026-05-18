// ADDR: 0x8cc0c
// SYMBOL: sub_8CC0C
int __fastcall sub_8CC0C(int result)
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

  v1 = *(_DWORD *)(dword_1ACF68 + 6812);
  if ( v1 )
  {
    if ( result && v1 >= 1 )
    {
      v2 = 0;
      v3 = 1;
      v4 = *(_DWORD *)(dword_1ACF68 + 6820);
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
      return sub_98854(v2);
  }
  return result;
}


// ======================================================================
