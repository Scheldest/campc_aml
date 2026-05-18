// ADDR: 0xf7c48
// SYMBOL: sub_F7C48
int __fastcall sub_F7C48(int a1, int a2, int a3, int *a4)
{
  int v7; // r0
  int v8; // r1
  int v9; // r5
  int result; // r0

  v7 = operator new(0x20u);
  v8 = *a4;
  v9 = v7;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = a2 + 4;
  std::string::basic_string(v7 + 16, v8);
  result = 1;
  *(_DWORD *)(v9 + 28) = 0;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}


// ======================================================================
