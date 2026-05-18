// ADDR: 0x10fc70
// SYMBOL: sub_10FC70
int __fastcall sub_10FC70(int a1, int a2)
{
  int result; // r0
  int v5; // r1

  result = *(_DWORD *)(a1 + 8);
  if ( result != a2 )
  {
    do
    {
      v5 = result - 20;
      *(_DWORD *)(a1 + 8) = result - 20;
      if ( *(unsigned __int8 *)(result - 20) << 31 )
      {
        operator delete(*(void **)(result - 12));
        v5 = *(_DWORD *)(a1 + 8);
      }
      result = v5;
    }
    while ( v5 != a2 );
  }
  return result;
}


// ======================================================================
