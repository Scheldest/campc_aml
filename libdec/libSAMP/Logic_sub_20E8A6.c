// ADDR: 0x20e8c0
// SYMBOL: sub_20E8C0
int __fastcall sub_20E8C0(int a1, int a2, int a3)
{
  return a3;
}


// ======================================================================
// ADDR: 0x20e90e
// SYMBOL: sub_20E90E
int __fastcall sub_20E90E(char *a1, char *a2, char *a3)
{
  if ( a1 + 4 == a2 )
    return std::__rotate_left<std::__wrap_iter<wchar_t *>>(a1);
  if ( a2 + 4 == a3 )
    return std::__rotate_right<std::__wrap_iter<wchar_t *>>();
  return std::__rotate_gcd<std::__wrap_iter<wchar_t *>>();
}


// ======================================================================
