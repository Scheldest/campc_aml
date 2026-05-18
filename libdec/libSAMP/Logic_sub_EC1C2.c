// ADDR: 0xec212
// SYMBOL: sub_EC212
int __fastcall sub_EC212(_DWORD *a1, signed int a2)
{
  int result; // r0

  if ( a2 <= -1 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  result = operator new(a2);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + a2;
  return result;
}


// ======================================================================
