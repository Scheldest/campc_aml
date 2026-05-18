// ADDR: 0xf4a5c
// SYMBOL: sub_F4A5C
int __fastcall sub_F4A5C(int a1)
{
  int v2; // r5
  int i; // r5

  sub_164196(dword_23DF24 + 6757488, *(_DWORD *)(a1 + 3052), 0);
  v2 = 1524;
  do
  {
    if ( *(unsigned __int8 *)(a1 + v2 + 1516) << 31 )
      operator delete(*(void **)(a1 + v2 + 1524));
    v2 -= 12;
  }
  while ( v2 );
  for ( i = 1520; i != 1012; i -= 4 )
    sub_1630A8(a1 + i);
  return a1;
}


// ======================================================================
