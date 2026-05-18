// ADDR: 0x6858c
// SYMBOL: sub_6858C
int sub_6858C(int a1, int a2, int a3, ...)
{
  int v4; // [sp+8h] [bp-Ch]
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  _vsprintf_chk(a1, 0, 20, "%02X", va);
  return v4;
}


// ======================================================================
