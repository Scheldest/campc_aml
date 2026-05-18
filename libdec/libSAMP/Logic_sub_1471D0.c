// ADDR: 0x14b5b4
// SYMBOL: sub_14B5B4
int __fastcall sub_14B5B4(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 296);
  if ( result )
  {
    result = sub_104108(result);
    if ( result )
    {
      sub_104B1C(*(_DWORD *)(a1 + 296), 0, 0, 0);
      return sub_105414(*(_DWORD *)(a1 + 296));
    }
  }
  return result;
}


// ======================================================================
