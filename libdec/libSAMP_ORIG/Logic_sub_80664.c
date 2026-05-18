// ADDR: 0x80734
// SYMBOL: sub_80734
int sub_80734(int a1, int a2, int a3, ...)
{
  int v4; // [sp+8h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  _vsprintf_chk(a1, 0, 255, "%sSAMP/%s", (const char *)va, (const char *)va);
  return v4;
}


// ======================================================================
