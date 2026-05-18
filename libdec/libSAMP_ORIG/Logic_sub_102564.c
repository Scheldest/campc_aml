// ADDR: 0x1039b4
// SYMBOL: sub_1039B4
_DWORD *__fastcall sub_1039B4(int a1, _QWORD *a2)
{
  _DWORD *result; // r0

  result = sub_FFA98(a1 + 408, 16);
  *((_QWORD *)result + 1) = *a2;
  *result = &off_113508;
  result[1] = 16843067;
  return result;
}


// ======================================================================
