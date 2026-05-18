// ADDR: 0xf7220
// SYMBOL: sub_F7220
double __fastcall sub_F7220(std::__ndk1 *a1, char **a2)
{
  struct __locale_t *v4; // r0

  v4 = (struct __locale_t *)std::__cloc(a1);
  return strtold_l((const char *)a1, a2, v4);
}


// ======================================================================
