// ADDR: 0x83928
// SYMBOL: sub_83928
_DWORD *__fastcall sub_83928(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = sub_8004C(a1, a2);
  result[2] = a3;
  *result = &off_1114F4;
  return result;
}


// ======================================================================
