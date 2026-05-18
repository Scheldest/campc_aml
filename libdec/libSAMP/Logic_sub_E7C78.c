// ADDR: 0xeb088
// SYMBOL: sub_EB088
int sub_EB088(int a1, int a2, int a3, int a4, ...)
{
  va_list va; // [sp+18h] [bp+0h] BYREF

  va_start(va, a4);
  return _vsnprintf_chk(a1, a3, 0, 9, "<U+%.4X>", va);
}


// ======================================================================
