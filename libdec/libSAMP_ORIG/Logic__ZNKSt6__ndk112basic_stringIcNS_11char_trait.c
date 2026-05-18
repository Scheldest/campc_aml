// ADDR: 0xfc33c
// SYMBOL: sub_FC33C
_DWORD *__fastcall sub_FC33C(_DWORD *result, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r4
  unsigned int v5; // r4

  v4 = a2[1];
  if ( v4 < a3 )
    sub_F8454((int)"string_view::substr");
  v5 = v4 - a3;
  if ( v5 < a4 )
    a4 = v5;
  *result = *a2 + a3;
  result[1] = a4;
  return result;
}


// ======================================================================
