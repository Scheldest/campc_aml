// ADDR: 0x1090d0
// SYMBOL: sub_1090D0
int __fastcall sub_1090D0(int a1, int a2, _DWORD *a3)
{
  int result; // r0

  result = (sub_109114(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
  *a3 = (*a3 ^ (a1 >> 31)) - (a1 >> 31);
  return result;
}


// ======================================================================
