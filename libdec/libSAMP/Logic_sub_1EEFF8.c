// ADDR: 0x1ef13c
// SYMBOL: sub_1EF13C
int __fastcall sub_1EF13C(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4);
  if ( result )
    return 56 * (result >> 2) - 1;
  return result;
}


// ======================================================================
