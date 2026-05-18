// ADDR: 0xf4d00
// SYMBOL: sub_F4D00
int __fastcall sub_F4D00(int a1, int a2)
{
  int result; // r0
  int v5; // r1

  result = *(_DWORD *)(a1 + 8);
  if ( result != a2 )
  {
    do
    {
      v5 = result - 12;
      *(_DWORD *)(a1 + 8) = result - 12;
      if ( *(unsigned __int8 *)(result - 12) << 31 )
      {
        operator delete(*(void **)(result - 4));
        v5 = *(_DWORD *)(a1 + 8);
      }
      result = v5;
    }
    while ( v5 != a2 );
  }
  return result;
}


// ======================================================================
