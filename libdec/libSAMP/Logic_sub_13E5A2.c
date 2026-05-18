// ADDR: 0x13e5ce
// SYMBOL: sub_13E5CE
unsigned int __fastcall sub_13E5CE(int a1, unsigned int a2)
{
  unsigned int result; // r0
  int v5; // r1
  int v6; // r2

  result = a2 >> 3;
  if ( a2 >> 3 <= 0x7C )
  {
    v5 = a2 + a1;
    result = *(unsigned __int8 *)(v5 + 4000);
    if ( *(_BYTE *)(v5 + 4000) )
    {
      result = *(_DWORD *)(a1 + 4 * a2);
      if ( result )
      {
        v6 = *(_DWORD *)result;
        *(_BYTE *)(v5 + 4000) = 0;
        (*(void (__fastcall **)(unsigned int))(v6 + 4))(result);
        result = a1 + 4 * a2;
        *(_DWORD *)result = 0;
        *(_DWORD *)(result + 5000) = 0;
      }
    }
  }
  return result;
}


// ======================================================================
