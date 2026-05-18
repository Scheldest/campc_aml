// ADDR: 0x21c090
// SYMBOL: sub_21C090
_DWORD *__fastcall sub_21C090(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_216EF0(a1 + 408, 12);
  result[1] = 16843012;
  *result = &off_23354C;
  result[2] = *a2;
  return result;
}


// ======================================================================
