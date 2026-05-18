// ADDR: 0x12fbf8
// SYMBOL: sub_12FBF8
bool __fastcall sub_12FBF8(int a1, unsigned int a2, int a3)
{
  int v4; // r0
  int v5; // t1
  unsigned int v6; // r3
  unsigned int v7; // r5

  v5 = *(_DWORD *)(a1 + 124);
  v4 = a1 + 124;
  v6 = -1431655765 * ((*(_DWORD *)(v4 + 4) - v5) >> 2);
  v7 = v6 - 1;
  if ( v6 - 1 >= a2 )
  {
    if ( v6 <= a2 )
      std::__vector_base_common<true>::__throw_out_of_range(v4);
    std::string::operator=(a3);
  }
  return v7 >= a2;
}


// ======================================================================
