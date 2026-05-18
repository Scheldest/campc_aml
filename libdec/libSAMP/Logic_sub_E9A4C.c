// ADDR: 0xe5e4c
// SYMBOL: sub_E5E4C
int *__fastcall sub_E5E4C(int *result)
{
  int v1; // r12
  _DWORD *v2; // r2
  _DWORD *v3; // r1

  v1 = *result;
  v2 = *(_DWORD **)(*result + 4);
  if ( v2 )
  {
    do
    {
      v3 = v2;
      v2 = (_DWORD *)*v2;
    }
    while ( v2 );
  }
  else
  {
    while ( 1 )
    {
      v3 = *(_DWORD **)(v1 + 8);
      if ( *v3 == v1 )
        break;
      v1 = *(_DWORD *)(v1 + 8);
    }
  }
  *result = (int)v3;
  return result;
}


// ======================================================================
