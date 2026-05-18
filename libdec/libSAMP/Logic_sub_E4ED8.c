// ADDR: 0xec880
// SYMBOL: sub_EC880
int __fastcall sub_EC880(int a1)
{
  unsigned int i; // [sp+0h] [bp-Ch]

  if ( *(unsigned __int8 *)(a1 + 8) << 31 )
    return *(_DWORD *)a1;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    *(_BYTE *)(*(_DWORD *)a1 + i) ^= *(_BYTE *)(a1 + 9);
  *(_BYTE *)(a1 + 8) = 1;
  return *(_DWORD *)a1;
}


// ======================================================================
// ADDR: 0x224280
// SYMBOL: sub_224280
int __fastcall sub_224280(int a1, int a2, int a3)
{
  return std::string::assign(a1, a2, a3);
}


// ======================================================================
