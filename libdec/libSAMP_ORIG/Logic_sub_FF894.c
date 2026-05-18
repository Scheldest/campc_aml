// ADDR: 0x10370c
// SYMBOL: sub_10370C
_BYTE *__fastcall sub_10370C(_BYTE *src, _BYTE *a2, void *dest)
{
  if ( a2 != src )
    return j_memmove(dest, src, a2 - src);
  return src;
}


// ======================================================================
