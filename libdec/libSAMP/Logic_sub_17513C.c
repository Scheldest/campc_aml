// ADDR: 0x175064
// SYMBOL: sub_175064
_DWORD *__fastcall sub_175064(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r0
  _DWORD *result; // r0

  v6 = a1[5];
  if ( !v6 )
  {
    if ( !a1[19] )
      sub_1750AC(a1, 0);
    sub_17598C(a1);
    v6 = a1[5];
  }
  *a2 = v6;
  if ( a3 )
    *a3 = a1[7];
  result = a5;
  if ( a4 )
    *a4 = a1[8];
  if ( a5 )
    *a5 = 1;
  return result;
}


// ======================================================================
