// ADDR: 0x21f590
// SYMBOL: sub_21F590
int __fastcall sub_21F590(int a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v6; // r3
  int v7; // r2

  result = *(_DWORD *)(a2 + 4);
  *(_BYTE *)(a2 + 53) = 1;
  if ( result != a4 )
    return result;
  v6 = *(_DWORD *)(a2 + 16);
  result = a5;
  *(_BYTE *)(a2 + 52) = 1;
  if ( !v6 )
  {
    *(_DWORD *)(a2 + 24) = a5;
    *(_DWORD *)(a2 + 36) = 1;
    *(_DWORD *)(a2 + 16) = a3;
    if ( a5 != 1 )
      return result;
    result = *(_DWORD *)(a2 + 48);
    if ( result != 1 )
      return result;
LABEL_13:
    result = 1;
    *(_BYTE *)(a2 + 54) = 1;
    return result;
  }
  if ( v6 != a3 )
  {
    ++*(_DWORD *)(a2 + 36);
    goto LABEL_13;
  }
  v7 = *(_DWORD *)(a2 + 24);
  if ( v7 == 2 )
  {
    *(_DWORD *)(a2 + 24) = a5;
    v7 = a5;
  }
  result = *(_DWORD *)(a2 + 48);
  if ( result == 1 && v7 == 1 )
    goto LABEL_13;
  return result;
}


// ======================================================================
