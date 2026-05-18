// ADDR: 0x2211e0
// SYMBOL: sub_2211E0
int __fastcall sub_2211E0(int a1, int a2, _DWORD *a3)
{
  int result; // r0

  result = (sub_221224(abs32(a1), abs32(a2)) ^ ((a1 ^ a2) >> 31)) - ((a1 ^ a2) >> 31);
  *a3 = (*a3 ^ (a1 >> 31)) - (a1 >> 31);
  return result;
}


// ======================================================================
