// ADDR: 0xe5754
// SYMBOL: sub_E5754
void __noreturn sub_E5754()
{
  std::bad_cast *exception; // r0
  void *v1; // r0

  exception = (std::bad_cast *)j___cxa_allocate_exception(4u);
  v1 = (void *)std::bad_cast::bad_cast(exception);
  j___cxa_throw(v1, (struct type_info *)&`typeinfo for'std::bad_cast, (void (*)(void *))std::bad_cast::~bad_cast);
}


// ======================================================================
