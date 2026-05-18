// ADDR: 0xe9a78
// SYMBOL: sub_E9A78
unsigned __int8 **__fastcall sub_E9A78(unsigned __int8 **result)
{
  _BYTE *v1; // r1
  int v2; // r2
  int v3; // r1

  v1 = *result;
  v2 = **result;
  if ( !**result )
  {
    v3 = 1;
LABEL_7:
    result[3] = (unsigned __int8 *)v3;
    return result;
  }
  if ( v2 != 2 )
  {
    if ( v2 == 1 )
    {
      result[1] = (unsigned __int8 *)**((_DWORD **)v1 + 2);
      return result;
    }
    v3 = 0;
    goto LABEL_7;
  }
  result[2] = (unsigned __int8 *)**((_DWORD **)v1 + 2);
  return result;
}


// ======================================================================
