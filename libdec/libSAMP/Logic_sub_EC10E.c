// ADDR: 0xec16e
// SYMBOL: sub_EC16E
int __fastcall sub_EC16E(_DWORD *a1, unsigned int a2)
{
  int result; // r0

  if ( a2 >= 0x10000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  result = operator new(16 * a2);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 16 * a2;
  return result;
}


// ======================================================================
