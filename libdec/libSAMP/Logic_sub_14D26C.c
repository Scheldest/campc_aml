// ADDR: 0x141468
// SYMBOL: sub_141468
int __fastcall sub_141468(int a1, unsigned int a2)
{
  int result; // r0

  result = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 4);
  if ( result )
  {
    result = sub_F2396(result, a2);
    if ( result )
    {
      *(_DWORD *)(a1 + 4) = a2;
      *(_BYTE *)(a1 + 8) = 0;
      result = 2;
      *(_BYTE *)(a1 + 17) = 2;
    }
  }
  return result;
}


// ======================================================================
