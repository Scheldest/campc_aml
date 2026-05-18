// ADDR: 0x13dd5c
// SYMBOL: sub_13DD5C
int __fastcall sub_13DD5C(int a1)
{
  int result; // r0

  result = sub_12BC78(a1);
  *(_DWORD *)(result + 84) = 0;
  *(_DWORD *)(result + 88) = 0;
  *(_WORD *)(result + 92) = 257;
  *(_DWORD *)result = &off_22F14C;
  return result;
}


// ======================================================================
