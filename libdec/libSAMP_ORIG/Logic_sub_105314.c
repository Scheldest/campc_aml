// ADDR: 0xfe1e4
// SYMBOL: sub_FE1E4
_DWORD *__fastcall sub_FE1E4(_DWORD *a1, char *s)
{
  *a1 = s;
  a1[1] = &s[strlen(s)];
  return a1;
}


// ======================================================================
