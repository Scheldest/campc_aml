// ADDR: 0x158460
// SYMBOL: sub_158460
void __fastcall __noreturn sub_158460(int a1)
{
  std::__ndk1 *exception; // r4
  int v3; // r0

  exception = (std::__ndk1 *)j___cxa_allocate_exception(0x10u);
  v3 = std::future_category(exception);
  std::future_error::future_error(exception, a1, v3);
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::future_error,
    (void (*)(void *))std::future_error::~future_error);
}


// ======================================================================
