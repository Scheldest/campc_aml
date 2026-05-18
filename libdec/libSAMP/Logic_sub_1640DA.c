// ADDR: 0x1640ac
// SYMBOL: sub_1640AC
unsigned int __fastcall sub_1640AC(const char *a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r1
  _DWORD *i; // r2

  v3 = sub_163FF8(a1);
  if ( !v3 )
    return 0;
  v4 = *(unsigned __int16 *)(v3 + 44);
  if ( !*(_WORD *)(v3 + 44) )
    return 0;
  for ( i = (_DWORD *)(*(_DWORD *)(v3 + 28) + v3 + 4); *(i - 1) != a2; i += 8 )
  {
    if ( !--v4 )
      return 0;
  }
  return v3 + *i;
}


// ======================================================================
