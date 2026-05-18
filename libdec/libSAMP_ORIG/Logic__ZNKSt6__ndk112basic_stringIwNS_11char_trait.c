// ADDR: 0xfc394
// SYMBOL: sub_FC394
_DWORD *__fastcall sub_FC394(_DWORD *result, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r4
  unsigned int v5; // r4

  v4 = a2[1];
  if ( v4 < a3 )
    sub_F8454((int)"string_view::substr");
  v5 = v4 - a3;
  if ( v5 < a4 )
    a4 = v5;
  *result = *a2 + 4 * a3;
  result[1] = a4;
  return result;
}


// ======================================================================
