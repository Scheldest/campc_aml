// ADDR: 0x886c0
// SYMBOL: sub_886C0
int sub_886C0(char *s, signed int a2, const char *a3, ...)
{
  int result; // r0
  int v6; // r2
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  result = vsnprintf(s, a2, a3, va);
  if ( s )
  {
    v6 = a2 - 1;
    if ( result < a2 )
      v6 = result;
    if ( result == -1 )
      v6 = a2 - 1;
    s[v6] = 0;
    return v6;
  }
  return result;
}


// ======================================================================
