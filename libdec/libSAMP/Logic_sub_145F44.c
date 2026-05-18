// ADDR: 0x12d678
// SYMBOL: sub_12D678
// attributes: thunk
void __fastcall sub_12D678(int a1, int a2, __int64 *a3)
{
  sub_12D3E0(a1, a2, a3);
}


// ======================================================================
// ADDR: 0x146128
// SYMBOL: sub_146128
int sub_146128(char *a1, int a2, int a3, int a4, ...)
{
  va_list va; // [sp+10h] [bp+0h] BYREF

  va_start(va, a4);
  return vsnprintf(a1, 8u, "[%d]", va);
}


// ======================================================================
