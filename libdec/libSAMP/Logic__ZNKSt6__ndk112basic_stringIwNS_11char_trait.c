// ADDR: 0x21407c
// SYMBOL: sub_21407C
_DWORD *__fastcall sub_21407C(_DWORD *result, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r4
  unsigned int v5; // r4

  v4 = a2[1];
  if ( v4 < a3 )
    sub_EE13C((int)"string_view::substr");
  v5 = v4 - a3;
  if ( v5 < a4 )
    a4 = v5;
  *result = *a2 + 4 * a3;
  result[1] = a4;
  return result;
}


// ======================================================================
