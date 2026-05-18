// ADDR: 0x1492fc
// SYMBOL: sub_1492FC
int __fastcall sub_1492FC(int a1)
{
  unsigned __int8 *v2; // r1

  if ( *(_DWORD *)(a1 + 300) )
  {
    sub_F9A3C(dword_23DEF0);
    *(_DWORD *)(a1 + 300) = 0;
  }
  v2 = *(unsigned __int8 **)(a1 + 296);
  if ( v2 )
  {
    sub_F9E64(dword_23DEF0, v2);
    *(_DWORD *)(a1 + 296) = 0;
  }
  return a1;
}


// ======================================================================
