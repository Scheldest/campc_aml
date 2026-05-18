// ADDR: 0xdc8d4
// SYMBOL: sub_DC8D4
void __fastcall __noreturn sub_DC8D4(int a1)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(8u);
  sub_DC90C(exception, a1);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (*)(void *))std::invalid_argument::~invalid_argument);
}


// ======================================================================
