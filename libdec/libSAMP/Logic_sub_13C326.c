// ADDR: 0x13c33e
// SYMBOL: sub_13C33E
_DWORD *__fastcall sub_13C33E(_DWORD *result, int a2)
{
  int v3; // r1
  _DWORD *v4; // r5
  int v5; // r2
  _DWORD *v6; // t1

  v3 = result[2];
  if ( v3 != a2 )
  {
    v4 = result;
    v5 = result[2];
    do
    {
      v6 = *(_DWORD **)(v5 - 12);
      v5 -= 12;
      result = v6;
      v4[2] = v5;
      if ( v6 )
      {
        *(_DWORD *)(v3 - 8) = result;
        operator delete(result);
        v5 = v4[2];
      }
      v3 = v5;
    }
    while ( v5 != a2 );
  }
  return result;
}


// ======================================================================
