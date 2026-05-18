// ADDR: 0x13c248
// SYMBOL: sub_13C248
int __fastcall sub_13C248(_DWORD *a1, unsigned int a2)
{
  int result; // r0

  if ( a2 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  result = operator new(4 * a2);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 4 * a2;
  return result;
}


// ======================================================================
