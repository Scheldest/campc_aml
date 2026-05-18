// ADDR: 0x18a1e0
// SYMBOL: sub_18A1E0
int __fastcall sub_18A1E0(int result, unsigned int a2)
{
  unsigned int v2; // r2
  int v3; // r4
  unsigned int v4; // r5

  v2 = *(_DWORD *)(result + 8);
  if ( v2 < a2 )
  {
    v3 = result + 4;
    v4 = a2 - v2;
    do
    {
      operator new(0x154u);
      result = sub_18A206(v3);
      --v4;
    }
    while ( v4 );
  }
  return result;
}


// ======================================================================
