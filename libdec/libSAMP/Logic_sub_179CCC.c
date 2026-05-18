// ADDR: 0x179d36
// SYMBOL: sub_179D36
_DWORD *__fastcall sub_179D36(_DWORD *result, int a2, int a3)
{
  if ( result[7] >= a2 )
  {
    if ( !result[1] )
      result[7] = a2;
  }
  else
  {
    result[7] = a2;
  }
  if ( result[9] >= a3 )
  {
    if ( !result[1] )
      result[9] = a3;
  }
  else
  {
    result[9] = a3;
  }
  if ( result[6] <= a2 )
  {
    if ( !result[1] )
      result[6] = a2;
  }
  else
  {
    result[6] = a2;
  }
  if ( result[8] <= a3 )
  {
    if ( !result[1] )
      result[8] = a3;
  }
  else
  {
    result[8] = a3;
  }
  result[1] = 1;
  return result;
}


// ======================================================================
