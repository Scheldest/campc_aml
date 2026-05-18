// ADDR: 0x14a66c
// SYMBOL: sub_14A66C
int __fastcall sub_14A66C(int a1)
{
  int v2; // r0

  v2 = *(_DWORD *)(a1 + 296);
  if ( v2 )
  {
    sub_104B1C(v2, 0, 0, 0);
    sub_104154(*(_DWORD *)(a1 + 296));
  }
  if ( *(_BYTE *)(a1 + 25) != 32 )
    *(_BYTE *)(a1 + 25) = 32;
  return sub_149278(a1);
}


// ======================================================================
