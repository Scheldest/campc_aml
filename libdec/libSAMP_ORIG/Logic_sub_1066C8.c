// ADDR: 0x106e00
// SYMBOL: sub_106E00
void __fastcall __noreturn sub_106E00(void (*a1)(void))
{
  void *v1; // r0
  void *v2; // r4

  a1();
  v1 = (void *)((int (__fastcall *)(const char *))loc_106D0C)("terminate_handler unexpectedly returned");
  j___cxa_begin_catch(v1);
  v2 = (void *)((int (__fastcall *)(const char *))loc_106D0C)("terminate_handler unexpectedly threw an exception");
  j___cxa_end_catch();
  sub_71D14(v2);
}


// ======================================================================
// ADDR: 0x10c62c
// SYMBOL: sub_10C62C
int __fastcall sub_10C62C(int a1)
{
  return j___cxa_decrement_exception_refcount(a1);
}


// ======================================================================
