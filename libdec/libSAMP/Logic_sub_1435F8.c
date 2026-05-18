// ADDR: 0x14f7d8
// SYMBOL: sub_14F7D8
int __fastcall sub_14F7D8(int a1)
{
  int i; // r5
  int v3; // r5

  for ( i = 0; i != 2048; ++i )
  {
    if ( *(_BYTE *)(a1 + i + 81920) )
      sub_14F844(a1);
  }
  v3 = 81920;
  do
  {
    if ( *(unsigned __int8 *)(a1 + v3 - 40) << 31 )
      operator delete(*(void **)(a1 + v3 - 32));
    v3 -= 40;
  }
  while ( v3 );
  return a1;
}


// ======================================================================
