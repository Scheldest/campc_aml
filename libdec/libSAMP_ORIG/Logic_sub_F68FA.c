// ADDR: 0xf6914
// SYMBOL: sub_F6914
int __fastcall sub_F6914(int a1, int a2, int a3)
{
  return a3;
}


// ======================================================================
// ADDR: 0xf695c
// SYMBOL: sub_F695C
int __fastcall sub_F695C(char *a1, char *a2, char *a3)
{
  if ( a1 + 1 == a2 )
    return std::__rotate_left<std::__wrap_iter<char *>>(a1);
  if ( a2 + 1 == a3 )
    return std::__rotate_right<std::__wrap_iter<char *>>();
  return std::__rotate_gcd<std::__wrap_iter<char *>>();
}


// ======================================================================
