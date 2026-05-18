// ADDR: 0x1f45f8
// SYMBOL: sub_1F45F8
void __fastcall __noreturn sub_1F45F8(int a1)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(8u);
  sub_1F4630(exception, a1);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::overflow_error,
    (void (*)(void *))std::underflow_error::~underflow_error);
}


// ======================================================================
