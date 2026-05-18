// ADDR: 0x21c2b0
// SYMBOL: sub_21C2B0
_DWORD *__fastcall sub_21C2B0(int a1, int *a2, int *a3, _BYTE *a4)
{
  _DWORD *result; // r0
  int v8; // r2
  int v9; // r1

  result = sub_216EF0(a1 + 408, 20);
  result[1] = 16843081;
  v8 = *a2;
  *result = &off_233664;
  v9 = *a3;
  result[2] = v8;
  result[3] = v9;
  *((_BYTE *)result + 16) = *a4;
  return result;
}


// ======================================================================
