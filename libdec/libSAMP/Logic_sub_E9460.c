// ADDR: 0xdc92c
// SYMBOL: sub_DC92C
void __noreturn sub_DC92C()
{
  _DWORD *exception; // r0

  exception = j___cxa_allocate_exception(4u);
  *exception = &off_22A558;
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_function_call,
    (void (*)(void *))std::exception::~exception);
}


// ======================================================================
