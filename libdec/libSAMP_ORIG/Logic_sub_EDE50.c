// ADDR: 0xee674
// SYMBOL: sub_EE674
int __fastcall sub_EE674(int a1, unsigned int a2)
{
  __int64 v2; // kr00_8
  int result; // r0
  std::bad_cast *exception; // r0
  void *v5; // r0

  v2 = *(_QWORD *)(a1 + 8);
  if ( a2 >= (HIDWORD(v2) - (int)v2) >> 2 || (result = *(_DWORD *)(v2 + 4 * a2)) == 0 )
  {
    exception = (std::bad_cast *)j___cxa_allocate_exception(4u);
    v5 = (void *)std::bad_cast::bad_cast(exception);
    j___cxa_throw(v5, (struct type_info *)&`typeinfo for'std::bad_cast, (void (*)(void *))std::bad_cast::~bad_cast);
  }
  return result;
}


// ======================================================================
