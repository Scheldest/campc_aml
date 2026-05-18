// ADDR: 0x20e5b6
// SYMBOL: sub_20E5B6
int __fastcall sub_20E5B6(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r2
  int result; // r0

  v4 = a3 - a2;
  result = *a4 - v4;
  *a4 = result;
  if ( v4 >= 1 )
    return sub_2242EC(result, a2, v4);
  return result;
}


// ======================================================================
