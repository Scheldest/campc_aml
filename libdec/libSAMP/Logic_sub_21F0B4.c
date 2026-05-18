// ADDR: 0x21eebc
// SYMBOL: sub_21EEBC
int __fastcall sub_21EEBC(int a1, int a2, int a3)
{
  int v3; // r0

  if ( !a3 )
  {
    v3 = *(_DWORD *)(a1 + 4) - *(_DWORD *)(a2 + 4);
    return v3 == 0;
  }
  if ( a1 != a2 )
  {
    v3 = strcmp(*(const char **)(a1 + 4), *(const char **)(a2 + 4));
    return v3 == 0;
  }
  return 1;
}


// ======================================================================
