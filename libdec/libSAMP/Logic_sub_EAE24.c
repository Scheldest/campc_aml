// ADDR: 0xeaffc
// SYMBOL: sub_EAFFC
int __fastcall sub_EAFFC(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int result; // r0

  sub_E57FC((void ***)a1 + 2, *a1);
  result = 6;
  *((_DWORD *)a1 + 2) = a3;
  *((_DWORD *)a1 + 3) = a4;
  *a1 = 6;
  return result;
}


// ======================================================================
