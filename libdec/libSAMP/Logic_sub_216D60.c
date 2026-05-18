// ADDR: 0x21b270
// SYMBOL: sub_21B270
int __fastcall sub_21B270(_DWORD *a1, int a2, _BYTE *a3, _BYTE *a4)
{
  int v4; // r6
  _DWORD *v8; // r4
  int result; // r0

  v4 = a4 - a3;
  v8 = sub_216EF0(a2 + 408, a4 - a3);
  sub_21AB64(a3, a4, v8);
  result = v4 >> 2;
  *a1 = v8;
  a1[1] = v4 >> 2;
  return result;
}


// ======================================================================
