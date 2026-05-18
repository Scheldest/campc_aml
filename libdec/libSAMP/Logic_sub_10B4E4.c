// ADDR: 0x10b594
// SYMBOL: sub_10B594
int sub_10B594(int a1, int a2, int a3, ...)
{
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 128, "%d", va);
}


// ======================================================================
