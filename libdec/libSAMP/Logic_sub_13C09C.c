// ADDR: 0x13c0b6
// SYMBOL: sub_13C0B6
_DWORD *__fastcall sub_13C0B6(_DWORD *result)
{
  int v1; // r1
  int v2; // r5
  _DWORD *v3; // r4
  int v4; // r6
  _DWORD *v5; // t1

  v1 = result[1];
  v2 = *result;
  v3 = result;
  if ( v1 != *result )
  {
    v4 = result[1];
    do
    {
      v5 = *(_DWORD **)(v4 - 12);
      v4 -= 12;
      result = v5;
      if ( v5 )
      {
        *(_DWORD *)(v1 - 8) = result;
        operator delete(result);
      }
      v1 = v4;
    }
    while ( v4 != v2 );
  }
  v3[1] = v2;
  return result;
}


// ======================================================================
