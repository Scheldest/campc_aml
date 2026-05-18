// ADDR: 0xea660
// SYMBOL: sub_EA660
int __fastcall sub_EA660(unsigned __int8 *a1, int a2, unsigned int a3, unsigned int a4)
{
  int result; // r0

  sub_E57FC((void ***)a1 + 2, *a1);
  result = 7;
  *a1 = 7;
  *((_QWORD *)a1 + 1) = __PAIR64__(a4, a3);
  return result;
}


// ======================================================================
