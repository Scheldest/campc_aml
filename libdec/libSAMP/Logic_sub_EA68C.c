// ADDR: 0xea862
// SYMBOL: sub_EA862
int __fastcall sub_EA862(unsigned __int8 *a1, int a2)
{
  int result; // r0

  sub_E57FC((void ***)a1 + 2, *a1);
  *((_DWORD *)a1 + 2) = a2;
  *((_DWORD *)a1 + 3) = 0;
  result = 4;
  *a1 = 4;
  return result;
}


// ======================================================================
