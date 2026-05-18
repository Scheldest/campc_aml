// ADDR: 0x21c988
// SYMBOL: sub_21C988
_DWORD *__fastcall sub_21C988(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_216EF0(a1 + 408, 12);
  *result = &off_2339E4;
  result[2] = *a2;
  result[1] = 16843049;
  return result;
}


// ======================================================================
