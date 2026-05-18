// ADDR: 0x151830
// SYMBOL: sub_151830
int __fastcall sub_151830(int a1, int a2, char a3, char a4, int a5, unsigned __int8 a6, int a7)
{
  int result; // r0

  *(_DWORD *)(a1 + 32) = a5;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_WORD *)(a1 + 21) = a6;
  *(_BYTE *)(a1 + 20) = 0;
  *(_WORD *)(a1 + 18) = 0;
  *(_BYTE *)(a1 + 17) = a4;
  *(_BYTE *)(a1 + 16) = a3;
  *(_DWORD *)a1 = &off_22F32C;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 12) = a7;
  *(_DWORD *)(a1 + 36) = sub_17E2E4();
  *(_DWORD *)(a1 + 40) = 0;
  result = a1;
  *(_DWORD *)(a1 + 44) = 0;
  return result;
}


// ======================================================================
