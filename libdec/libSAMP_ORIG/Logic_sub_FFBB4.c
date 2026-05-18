// ADDR: 0x105530
// SYMBOL: sub_105530
_DWORD *__fastcall sub_105530(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_FFA98(a1 + 408, 12);
  *result = &off_113C08;
  result[2] = *a2;
  result[1] = 16843049;
  return result;
}


// ======================================================================
