// ADDR: 0x13b6e8
// SYMBOL: sub_13B6E8
int __fastcall sub_13B6E8(int a1, int a2, int a3, int a4, _WORD **a5)
{
  int v8; // r6
  _WORD *v9; // r0
  int result; // r0

  v8 = operator new(0x1Cu);
  *(_DWORD *)(a1 + 4) = a2 + 8;
  v9 = *a5;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v8;
  *(_WORD *)(v8 + 8) = *v9;
  *(_QWORD *)(v8 + 12) = 0LL;
  *(_QWORD *)(v8 + 20) = 0LL;
  sub_DC6DC((_DWORD *)(v8 + 16), &byte_8F794);
  result = 1;
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = a3;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}


// ======================================================================
