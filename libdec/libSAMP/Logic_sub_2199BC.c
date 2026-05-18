// ADDR: 0x21ae0c
// SYMBOL: sub_21AE0C
_DWORD *__fastcall sub_21AE0C(int a1, _QWORD *a2)
{
  _DWORD *result; // r0

  result = sub_216EF0(a1 + 408, 16);
  *((_QWORD *)result + 1) = *a2;
  *result = &off_2332E4;
  result[1] = 16843067;
  return result;
}


// ======================================================================
