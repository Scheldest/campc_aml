// ADDR: 0x1f2f20
// SYMBOL: sub_1F2F20
_BYTE *__fastcall sub_1F2F20(_BYTE *result, _BYTE *a2)
{
  int v2; // r2

  if ( result == a2 || *result != 47 )
    return 0;
  v2 = -1;
  if ( result < a2 )
    v2 = 1;
  while ( 1 )
  {
    result += v2;
    if ( result == a2 )
      break;
    if ( *result != 47 )
      return result;
  }
  return a2;
}


// ======================================================================
// ADDR: 0x1f2f4c
// SYMBOL: sub_1F2F4C
_BYTE *__fastcall sub_1F2F4C(_BYTE *result, _BYTE *a2)
{
  bool v2; // zf
  int v3; // r2

  v2 = result == a2;
  if ( result != a2 )
    v2 = *result == 47;
  if ( v2 )
    return 0;
  v3 = -1;
  if ( result < a2 )
    v3 = 1;
  while ( 1 )
  {
    result += v3;
    if ( result == a2 )
      break;
    if ( *result == 47 )
      return result;
  }
  return a2;
}


// ======================================================================
