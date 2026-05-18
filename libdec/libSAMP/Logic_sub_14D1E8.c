// ADDR: 0x141424
// SYMBOL: sub_141424
int __fastcall sub_141424(int result, unsigned int a2)
{
  int v2; // r2

  if ( a2 <= 0x3EC )
  {
    v2 = **(_DWORD **)(dword_23DEF4 + 944);
    if ( v2 )
    {
      if ( *(_BYTE *)(v2 + a2 + 4020) )
      {
        if ( (*(unsigned __int8 *)(**(_DWORD **)(v2 + 4 * a2 + 4) + 25) | 0x20) != 0x20 )
        {
          *(_DWORD *)(result + 4) = a2;
          *(_BYTE *)(result + 8) = 0;
          *(_BYTE *)(result + 17) = 1;
        }
      }
    }
  }
  return result;
}


// ======================================================================
