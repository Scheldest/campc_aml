// ADDR: 0xf7fbc
// SYMBOL: sub_F7FBC
int __fastcall sub_F7FBC(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    result = sub_1082F4(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      result = sub_108728(a2);
      *(_DWORD *)(*(_DWORD *)(a1 + 12) + 1376) = result;
    }
  }
  return result;
}


// ======================================================================
