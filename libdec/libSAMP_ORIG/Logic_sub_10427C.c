// ADDR: 0x104c38
// SYMBOL: sub_104C38
_DWORD *__fastcall sub_104C38(int a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = sub_FFA98(a1 + 408, 12);
  result[1] = 16843012;
  *result = &off_113770;
  result[2] = *a2;
  return result;
}


// ======================================================================
