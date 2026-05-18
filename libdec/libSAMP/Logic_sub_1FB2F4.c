// ADDR: 0x1fc808
// SYMBOL: sub_1FC808
int __fastcall sub_1FC808(int *a1)
{
  return (unsigned __int8)std::streambuf::sgetc(*a1);
}


// ======================================================================
// ADDR: 0x1fc816
// SYMBOL: sub_1FC816
_DWORD *__fastcall sub_1FC816(_DWORD *a1)
{
  std::streambuf::sbumpc(*a1);
  return a1;
}


// ======================================================================
// ADDR: 0x20e6d6
// SYMBOL: sub_20E6D6
int __fastcall sub_20E6D6(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  if ( result )
    return (*(int (**)(void))(a1 + 4))();
  return result;
}


// ======================================================================
// ADDR: 0x20e6ec
// SYMBOL: sub_20E6EC
int __fastcall sub_20E6EC(int a1)
{
  sub_20E6D6(a1, 0);
  return a1;
}


// ======================================================================
