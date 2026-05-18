// ADDR: 0x17e650
// SYMBOL: sub_17E650
int __fastcall sub_17E650(_DWORD *a1, unsigned int a2)
{
  if ( a1[1] > a2 )
    return *(_DWORD *)(*a1 + 4 * a2);
  else
    return 0;
}


// ======================================================================
// ADDR: 0x17e660
// SYMBOL: sub_17E660
int __fastcall sub_17E660(int *a1, int a2)
{
  int v2; // r12
  int v3; // r3
  int result; // r0
  _DWORD *v5; // r2

  v2 = a1[1];
  if ( v2 )
  {
    v3 = *a1;
    result = 0;
    while ( 1 )
    {
      v5 = *(_DWORD **)(v3 + 4 * result);
      if ( v5 )
      {
        if ( *v5 == a2 )
          break;
      }
      if ( v2 == ++result )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    LOBYTE(result) = -1;
  }
  return (unsigned __int8)result;
}


// ======================================================================
