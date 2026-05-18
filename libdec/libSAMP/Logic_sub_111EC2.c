// ADDR: 0x111f24
// SYMBOL: sub_111F24
int __fastcall sub_111F24(_DWORD *a1, unsigned int a2)
{
  int result; // r0

  if ( a2 >= 0x20000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  result = operator new(8 * a2);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 8 * a2;
  return result;
}


// ======================================================================
