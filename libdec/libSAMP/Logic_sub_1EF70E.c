// ADDR: 0x1ef740
// SYMBOL: sub_1EF740
int __fastcall sub_1EF740(int a1)
{
  int v1; // r0

  v1 = sub_1EEFF8(a1);
  return sub_220A6C(v1, 56);
}


// ======================================================================
// ADDR: 0x1ef750
// SYMBOL: sub_1EF750
int __fastcall sub_1EF750(int result)
{
  int i; // r2
  int v2; // r1

  v2 = *(_DWORD *)(result + 8) - 4;
  for ( i = *(_DWORD *)(result + 8); i != v2; *(_DWORD *)(result + 8) = i )
    i -= 4;
  return result;
}


// ======================================================================
