// ADDR: 0x21e258
// SYMBOL: sub_21E258
void __fastcall __noreturn sub_21E258(void (*a1)(void))
{
  void *v1; // r0
  void *v2; // r4

  a1();
  v1 = (void *)((int (__fastcall *)(const char *))loc_21E164)("terminate_handler unexpectedly returned");
  j___cxa_begin_catch(v1);
  v2 = (void *)((int (__fastcall *)(const char *))loc_21E164)("terminate_handler unexpectedly threw an exception");
  j___cxa_end_catch();
  sub_DC924(v2);
}


// ======================================================================
// ADDR: 0x22497c
// SYMBOL: sub_22497C
int __fastcall sub_22497C(int a1)
{
  return j___cxa_decrement_exception_refcount(a1);
}


// ======================================================================
