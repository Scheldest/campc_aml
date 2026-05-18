// ADDR: 0x15be94
// SYMBOL: sub_15BE94
int __fastcall sub_15BE94(int a1)
{
  _DWORD *i; // r5

  for ( i = *(_DWORD **)(a1 + 32); i; i = (_DWORD *)*i )
    sub_15BEC4(a1, i + 3);
  return sub_15DEA4(a1 + 24);
}


// ======================================================================
