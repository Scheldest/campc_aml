// ADDR: 0x1fdec4
// SYMBOL: sub_1FDEC4
int __fastcall sub_1FDEC4(int *a1)
{
  return std::wstreambuf::sgetc(*a1);
}


// ======================================================================
// ADDR: 0x1fded0
// SYMBOL: sub_1FDED0
_DWORD *__fastcall sub_1FDED0(_DWORD *a1)
{
  std::wstreambuf::sbumpc(*a1);
  return a1;
}


// ======================================================================
// ADDR: 0x2046d8
// SYMBOL: sub_2046D8
bool __fastcall sub_2046D8(unsigned __int8 *a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r0

  v1 = *((_DWORD *)a1 + 1);
  v2 = *a1;
  if ( !(v2 << 31) )
    v1 = v2 >> 1;
  return v1 == 0;
}


// ======================================================================
