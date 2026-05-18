// ADDR: 0x118cf4
// SYMBOL: sub_118CF4
int sub_118CF4(int a1, int a2, int a3, const char *a4, ...)
{
  va_list va; // [sp+18h] [bp+0h] BYREF

  va_start(va, a4);
  return _vsnprintf_chk(a1, a3, 0, a2, a4, va);
}


// ======================================================================
