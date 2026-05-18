// ADDR: 0x125f2c
// SYMBOL: sub_125F2C
int __fastcall sub_125F2C(int a1, int a2)
{
  int result; // r0
  int v5; // r6
  int v6; // t1

  result = *(_DWORD *)(a1 + 4);
  if ( result != a2 )
  {
    v5 = result;
    do
    {
      v6 = *(unsigned __int8 *)(v5 - 12);
      v5 -= 12;
      if ( v6 << 31 )
        operator delete(*(void **)(result - 4));
      result = v5;
    }
    while ( v5 != a2 );
  }
  *(_DWORD *)(a1 + 4) = a2;
  return result;
}


// ======================================================================
