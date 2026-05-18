// ADDR: 0x170b40
// SYMBOL: sub_170B40
int sub_170B40(char *format, ...)
{
  int result; // r0
  FILE *v3; // r0
  va_list va; // [sp+Ch] [bp-Ch] BYREF

  va_start(va, format);
  result = 11552;
  if ( *(_BYTE *)(dword_381B58 + 11552) )
  {
    v3 = *(FILE **)(dword_381B58 + 11560);
    if ( v3 )
      return vfprintf(v3, format, va);
    else
      return sub_165A70((size_t *)(dword_381B58 + 11564), format, va);
  }
  return result;
}


// ======================================================================
