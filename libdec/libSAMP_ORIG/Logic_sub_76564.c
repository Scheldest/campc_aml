// ADDR: 0x767b0
// SYMBOL: sub_767B0
int sub_767B0(char *a1, int a2, int a3, char *format, ...)
{
  int v5; // [sp+4h] [bp-Ch]
  va_list va; // [sp+10h] [bp+0h] BYREF

  va_start(va, format);
  vsnprintf(a1, 0x100u, format, va);
  return v5;
}


// ======================================================================
// ADDR: 0x10c17c
// SYMBOL: sub_10C17C
int __fastcall sub_10C17C(FILE *stream)
{
  return fclose(stream);
}


// ======================================================================
