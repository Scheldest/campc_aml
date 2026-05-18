// ADDR: 0x215168
// SYMBOL: sub_215168
int __fastcall sub_215168(_DWORD *a1, unsigned int a2)
{
  int v2; // r0

  if ( a2 >= 0x40000000 )
    std::__vector_base_common<true>::__throw_length_error(a1);
  v2 = a1[2] - *a1;
  if ( a2 <= v2 >> 1 )
    a2 = v2 >> 1;
  if ( (unsigned int)v2 >= 0x7FFFFFFC )
    return 0x3FFFFFFF;
  return a2;
}


// ======================================================================
// ADDR: 0x215198
// SYMBOL: sub_215198
int __fastcall sub_215198(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0

  sub_2151DE(a1 + 2, *a1, a1[1], a2 + 1);
  v4 = *a1;
  *a1 = a2[1];
  a2[1] = v4;
  v5 = a1[1];
  a1[1] = a2[2];
  a2[2] = v5;
  v6 = a1[2];
  a1[2] = a2[3];
  a2[3] = v6;
  result = a2[1];
  *a2 = result;
  return result;
}


// ======================================================================
// ADDR: 0x2151c8
// SYMBOL: sub_2151C8
void **__fastcall sub_2151C8(void **a1)
{
  sub_2151F0();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
