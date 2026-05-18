// ADDR: 0x21ab64
// SYMBOL: sub_21AB64
_BYTE *__fastcall sub_21AB64(_BYTE *src, _BYTE *a2, void *dest)
{
  if ( a2 != src )
    return j_memmove(dest, src, a2 - src);
  return src;
}


// ======================================================================
