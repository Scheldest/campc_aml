// ADDR: 0x107b4c
// SYMBOL: sub_107B4C
int __fastcall sub_107B4C(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int result; // r0

  v4 = *(_DWORD *)(a2 + 16);
  if ( v4 )
  {
    if ( v4 == a3 )
    {
      result = *(_DWORD *)(a2 + 24);
      if ( result == 2 )
        *(_DWORD *)(a2 + 24) = a4;
    }
    else
    {
      *(_BYTE *)(a2 + 54) = 1;
      *(_DWORD *)(a2 + 24) = 2;
      result = *(_DWORD *)(a2 + 36) + 1;
      *(_DWORD *)(a2 + 36) = result;
    }
  }
  else
  {
    result = 1;
    *(_DWORD *)(a2 + 24) = a4;
    *(_DWORD *)(a2 + 36) = 1;
    *(_DWORD *)(a2 + 16) = a3;
  }
  return result;
}


// ======================================================================
