// ADDR: 0xfd49c
// SYMBOL: sub_FD49C
int __fastcall sub_FD49C(_DWORD *a1, unsigned int a2)
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
// ADDR: 0xfd4cc
// SYMBOL: sub_FD4CC
int __fastcall sub_FD4CC(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int result; // r0

  sub_FD512(a1 + 2, *a1, a1[1], a2 + 1);
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
// ADDR: 0xfd4fc
// SYMBOL: sub_FD4FC
void **__fastcall sub_FD4FC(void **a1)
{
  sub_FD524();
  if ( *a1 )
    operator delete(*a1);
  return a1;
}


// ======================================================================
