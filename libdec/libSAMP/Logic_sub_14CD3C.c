// ADDR: 0x105486
// SYMBOL: sub_105486
_DWORD *__fastcall sub_105486(_DWORD *result, int a2, int a3)
{
  int v3; // r12
  int v4; // lr
  _DWORD *v5; // r3

  v3 = result[23];
  if ( v3 )
  {
    v4 = result[28];
    if ( v4 == -1 )
    {
      v5 = (_DWORD *)(v3 + 1444);
      v4 = 0;
      while ( 1 )
      {
        result = (_DWORD *)*v5;
        if ( *v5 == a2 )
          break;
        ++v4;
        v5 += 7;
        if ( v4 == 13 )
          return result;
      }
    }
    result = (_DWORD *)(v3 + 28 * v4);
    result[364] = a3;
  }
  return result;
}


// ======================================================================
