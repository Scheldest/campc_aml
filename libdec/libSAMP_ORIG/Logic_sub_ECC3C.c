// ADDR: 0xf62bc
// SYMBOL: sub_F62BC
int __fastcall sub_F62BC(int *a1, unsigned int a2)
{
  int result; // r0

  if ( a2 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  result = sub_F631C(a1 + 4);
  *a1 = result;
  a1[1] = result;
  a1[2] = result + 4 * a2;
  return result;
}


// ======================================================================
// ADDR: 0xf62e4
// SYMBOL: sub_F62E4
int __fastcall sub_F62E4(int result, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  int i; // r1

  v2 = *(_DWORD **)(result + 4);
  v3 = &v2[a2];
  for ( i = 4 * a2; i; i -= 4 )
    *v2++ = 0;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


// ======================================================================
