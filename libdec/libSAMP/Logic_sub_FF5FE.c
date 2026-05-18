// ADDR: 0xff5e8
// SYMBOL: sub_FF5E8
int __fastcall sub_FF5E8(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = sub_1082E4(a1, a2, a3, a4);
  if ( result == a2 )
    *(_DWORD *)(a2 + 1376) = a1;
  return result;
}


// ======================================================================
