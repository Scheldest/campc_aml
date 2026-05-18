// ADDR: 0x99fec
// SYMBOL: sub_99FEC
int sub_99FEC(char *format, ...)
{
  FILE *v2; // r0
  int v4; // [sp+8h] [bp-18h]
  va_list va; // [sp+14h] [bp-Ch] BYREF

  va_start(va, format);
  if ( *(_BYTE *)(dword_1ACF68 + 11552) )
  {
    v2 = *(FILE **)(dword_1ACF68 + 11560);
    if ( v2 )
      vfprintf(v2, format, va);
    else
      sub_88F60((size_t *)(dword_1ACF68 + 11564), format, va);
  }
  return v4;
}


// ======================================================================
