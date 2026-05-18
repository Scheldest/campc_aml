// ADDR: 0xe5ef8
// SYMBOL: sub_E5EF8
int __fastcall sub_E5EF8(int *a1)
{
  return std::wstreambuf::sgetc(*a1);
}


// ======================================================================
// ADDR: 0xe5f04
// SYMBOL: sub_E5F04
_DWORD *__fastcall sub_E5F04(_DWORD *a1)
{
  std::wstreambuf::sbumpc(*a1);
  return a1;
}


// ======================================================================
// ADDR: 0xec820
// SYMBOL: sub_EC820
bool __fastcall sub_EC820(unsigned __int8 *a1)
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
