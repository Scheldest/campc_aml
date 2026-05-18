// ADDR: 0x10306c
// SYMBOL: sub_10306C
int sub_10306C(int a1, int a2, int a3, const char *a4, ...)
{
  va_list va; // [sp+20h] [bp+8h] BYREF

  va_start(va, a4);
  return _vsnprintf_chk(a1, a3, 0, a2, a4, va, va);
}


// ======================================================================
