// ADDR: 0x21563c
// SYMBOL: sub_21563C
_DWORD *__fastcall sub_21563C(_DWORD *a1, char *s)
{
  *a1 = s;
  a1[1] = &s[strlen(s)];
  return a1;
}


// ======================================================================
