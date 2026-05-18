// ADDR: 0x214c00
// SYMBOL: sub_214C00
int sub_214C00(char *a1, int a2, int a3, int a4, ...)
{
  int v5; // [sp+4h] [bp-4h]
  va_list va; // [sp+10h] [bp+8h] BYREF

  va_start(va, a4);
  vsnprintf(a1, 0x400u, "Unknown error %d", va);
  return v5;
}


// ======================================================================
