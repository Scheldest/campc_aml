// ADDR: 0x13e7fc
// SYMBOL: sub_13E7FC
int __fastcall sub_13E7FC(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4 * a2);
  if ( result )
    *(_DWORD *)(result + 20) = *(_DWORD *)(result + 16);
  return result;
}


// ======================================================================
