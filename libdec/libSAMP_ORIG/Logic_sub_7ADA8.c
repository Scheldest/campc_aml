// ADDR: 0x7b270
// SYMBOL: sub_7B270
void __fastcall __noreturn sub_7B270(int a1)
{
  void *exception; // r4

  exception = j___cxa_allocate_exception(8u);
  sub_7B2A8(exception, a1);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::length_error,
    (void (*)(void *))std::invalid_argument::~invalid_argument);
}


// ======================================================================
