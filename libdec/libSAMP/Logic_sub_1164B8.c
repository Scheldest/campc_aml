// ADDR: 0x116828
// SYMBOL: sub_116828
int sub_116828(int a1, int a2, const char *a3, ...)
{
  va_list va; // [sp+14h] [bp-4h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 16, a3, va);
}


// ======================================================================
