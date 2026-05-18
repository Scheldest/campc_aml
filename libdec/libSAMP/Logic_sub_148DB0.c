// ADDR: 0x13ded4
// SYMBOL: sub_13DED4
int __fastcall sub_13DED4(int a1, int a2, char a3)
{
  int v4; // r5
  int result; // r0

  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 29) = a3;
  _strcpy_chk(a1 + 4, a2, 25);
  v4 = operator new(0x140u);
  sub_149210();
  result = a1;
  *(_DWORD *)a1 = v4;
  return result;
}


// ======================================================================
