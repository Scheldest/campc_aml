// ADDR: 0xf6a76
// SYMBOL: sub_F6A76
int __fastcall sub_F6A76(int a1, int a2, int a3)
{
  return a3;
}


// ======================================================================
// ADDR: 0xf6ac4
// SYMBOL: sub_F6AC4
int __fastcall sub_F6AC4(char *a1, char *a2, char *a3)
{
  if ( a1 + 4 == a2 )
    return std::__rotate_left<std::__wrap_iter<wchar_t *>>(a1);
  if ( a2 + 4 == a3 )
    return std::__rotate_right<std::__wrap_iter<wchar_t *>>();
  return std::__rotate_gcd<std::__wrap_iter<wchar_t *>>();
}


// ======================================================================
