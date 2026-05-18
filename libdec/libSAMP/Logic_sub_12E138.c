// ADDR: 0x12e19a
// SYMBOL: sub_12E19A
int __fastcall sub_12E19A(_DWORD *a1, unsigned int a2)
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
