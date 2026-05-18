// ADDR: 0xe483c
// SYMBOL: sub_E483C
int __fastcall sub_E483C(int *a1)
{
  return (unsigned __int8)std::streambuf::sgetc(*a1);
}


// ======================================================================
// ADDR: 0xe484a
// SYMBOL: sub_E484A
_DWORD *__fastcall sub_E484A(_DWORD *a1)
{
  std::streambuf::sbumpc(*a1);
  return a1;
}


// ======================================================================
// ADDR: 0xe82f0
// SYMBOL: sub_E82F0
bool __fastcall sub_E82F0(unsigned __int8 *a1)
{
  unsigned int v1; // r1
  unsigned int v2; // r0

  v1 = *((_DWORD *)a1 + 1);
  v2 = *a1;
  if ( !(v2 << 31) )
    v1 = v2 >> 1;
  return v1 == 0;
}


// ======================================================================
// ADDR: 0xf6866
// SYMBOL: sub_F6866
int __fastcall sub_F6866(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  if ( result )
    return (*(int (**)(void))(a1 + 4))();
  return result;
}


// ======================================================================
// ADDR: 0xf687c
// SYMBOL: sub_F687C
int __fastcall sub_F687C(int a1)
{
  sub_F6866(a1, 0);
  return a1;
}


// ======================================================================
