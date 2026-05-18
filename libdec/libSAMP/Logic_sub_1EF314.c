// ADDR: 0x1ef60c
// SYMBOL: sub_1EF60C
char *__fastcall sub_1EF60C(_BYTE *src, _BYTE *a2, char *a3)
{
  size_t v4; // r2

  v4 = a2 - src;
  if ( a2 != src )
  {
    a3 -= v4;
    j_memmove(a3, src, v4);
  }
  return a3;
}


// ======================================================================
