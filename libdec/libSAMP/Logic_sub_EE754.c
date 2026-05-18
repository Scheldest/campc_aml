// ADDR: 0xee93c
// SYMBOL: sub_EE93C
void __noreturn sub_EE93C()
{
  std::runtime_error *exception; // r4

  exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
  sub_EE924(exception, "no format");
  j___cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'fmt::v8::format_error,
    (void (*)(void *))fmt::v8::format_error::~format_error);
}


// ======================================================================
