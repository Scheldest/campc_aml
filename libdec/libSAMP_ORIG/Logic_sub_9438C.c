// ADDR: 0x88f1c
// SYMBOL: sub_88F1C
int sub_88F1C(int a1, char *a2, ...)
{
  int v3; // [sp+4h] [bp-14h]
  va_list va; // [sp+10h] [bp-8h] BYREF

  va_start(va, a2);
  sub_88F60(a1, a2, va);
  return v3;
}


// ======================================================================
