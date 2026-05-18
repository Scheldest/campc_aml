// ADDR: 0xdc514
// SYMBOL: sub_DC514
void __fastcall __noreturn sub_DC514(int a1)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(8u);
  sub_DC54C(exception, a1);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::overflow_error,
    (void (*)(void *))std::underflow_error::~underflow_error);
}


// ======================================================================
