// ADDR: 0x20e75e
// SYMBOL: sub_20E75E
int __fastcall sub_20E75E(int a1, int a2, int a3)
{
  return a3;
}


// ======================================================================
// ADDR: 0x20e7a6
// SYMBOL: sub_20E7A6
int __fastcall sub_20E7A6(char *a1, char *a2, char *a3)
{
  if ( a1 + 1 == a2 )
    return std::__rotate_left<std::__wrap_iter<char *>>(a1);
  if ( a2 + 1 == a3 )
    return std::__rotate_right<std::__wrap_iter<char *>>();
  return std::__rotate_gcd<std::__wrap_iter<char *>>();
}


// ======================================================================
