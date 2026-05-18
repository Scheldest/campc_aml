// ADDR: 0x222e84
// SYMBOL: sub_222E84
int __fastcall sub_222E84(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


// ======================================================================
// ADDR: 0x222e9c
// SYMBOL: sub_222E9C
int __fastcall sub_222E9C(int a1, int a2)
{
  int result; // r0

  (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 36))(a1, a2);
  result = 0;
  if ( !*(_DWORD *)(a2 + 4) )
    return -6549;
  return result;
}


// ======================================================================
