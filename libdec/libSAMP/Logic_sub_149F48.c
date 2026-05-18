// ADDR: 0x104d60
// SYMBOL: sub_104D60
int __fastcall sub_104D60(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 92);
  if ( result )
  {
    result = sub_1082F4(*(_DWORD *)(a1 + 8));
    if ( result )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1372) = sub_108728(a2);
      result = sub_108728(a2);
      *(_DWORD *)(*(_DWORD *)(a1 + 92) + 1376) = result;
    }
  }
  return result;
}


// ======================================================================
