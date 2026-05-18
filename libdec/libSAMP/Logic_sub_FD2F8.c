// ADDR: 0x17c33c
// SYMBOL: sub_17C33C
int __fastcall sub_17C33C(int a1)
{
  int i; // r6
  int result; // r0

  for ( i = 0; i != 28; ++i )
  {
    result = a1 + i;
    if ( *(_BYTE *)(a1 + i + 76) )
    {
      *(_BYTE *)(result + 76) = 0;
      result = sub_17C2A4(a1, (unsigned __int8)i, 1);
    }
  }
  return result;
}


// ======================================================================
