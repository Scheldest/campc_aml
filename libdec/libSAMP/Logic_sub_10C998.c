// ADDR: 0x10cc44
// SYMBOL: sub_10CC44
int sub_10CC44(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 32, a3, va);
}


// ======================================================================
