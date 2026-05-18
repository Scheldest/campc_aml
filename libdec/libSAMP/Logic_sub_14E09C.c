// ADDR: 0x15018e
// SYMBOL: sub_15018E
int __fastcall sub_15018E(int a1, unsigned int a2, int a3)
{
  int result; // r0

  result = sub_F2396(a1, a2);
  if ( result )
  {
    result = *(_DWORD *)(a1 + 4 * a2);
    if ( result )
      return sub_109C04(result, a3);
  }
  return result;
}


// ======================================================================
