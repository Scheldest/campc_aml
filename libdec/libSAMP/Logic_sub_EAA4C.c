// ADDR: 0xeac24
// SYMBOL: sub_EAC24
int __fastcall sub_EAC24(unsigned __int8 *a1, int a2, int a3, int a4)
{
  int result; // r0

  sub_E57FC((void ***)a1 + 2, *a1);
  result = 5;
  *((_DWORD *)a1 + 2) = a3;
  *((_DWORD *)a1 + 3) = a4;
  *a1 = 5;
  return result;
}


// ======================================================================
