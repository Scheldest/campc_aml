// ADDR: 0x158400
// SYMBOL: sub_158400
void __fastcall __noreturn sub_158400(int a1, const std::logic_error *a2)
{
  std::logic_error *exception; // r0
  _QWORD *v4; // r0

  exception = (std::logic_error *)j___cxa_allocate_exception(0x10u);
  v4 = (_QWORD *)std::logic_error::logic_error(exception, a2);
  *(_DWORD *)v4 = &off_231254;
  v4[1] = *((_QWORD *)a2 + 1);
  j___cxa_throw(
    v4,
    (struct type_info *)&`typeinfo for'std::future_error,
    (void (*)(void *))std::future_error::~future_error);
}


// ======================================================================
