// ADDR: 0x117044
// SYMBOL: sub_117044
int sub_117044(int a1, int a2, int a3, ...)
{
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 4, "%d", va);
}


// ======================================================================
