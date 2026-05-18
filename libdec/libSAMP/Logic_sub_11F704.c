// ADDR: 0x163db4
// SYMBOL: sub_163DB4
int sub_163DB4()
{
  int result; // r0
  std::bad_alloc *exception; // r0
  void *v2; // r0

  result = ((int (*)(void))(dword_23DF24 + 4124185))();
  if ( !result )
  {
    exception = (std::bad_alloc *)j___cxa_allocate_exception(4u);
    v2 = (void *)std::bad_alloc::bad_alloc(exception);
    j___cxa_throw(v2, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::exception::~exception);
  }
  return result;
}


// ======================================================================
// ADDR: 0x163df8
// SYMBOL: sub_163DF8
int __fastcall sub_163DF8(int result, int a2)
{
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = a2;
  if ( a2 )
    *(_DWORD *)(a2 + 12) = result;
  return result;
}


// ======================================================================
// ADDR: 0x163e96
// SYMBOL: sub_163E96
_DWORD *__fastcall sub_163E96(int a1, int a2)
{
  _DWORD *v3; // r6

  v3 = (_DWORD *)sub_163ECC(12);
  *v3 = a2;
  sub_163EBA();
  return v3;
}


// ======================================================================
