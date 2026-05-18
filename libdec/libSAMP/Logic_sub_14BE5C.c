// ADDR: 0x13e7f2
// SYMBOL: sub_13E7F2
int __fastcall sub_13E7F2(int a1, int a2, int a3)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4 * a2);
  if ( result )
    *(_DWORD *)(result + 20) = a3;
  return result;
}


// ======================================================================
