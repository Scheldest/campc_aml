// ADDR: 0x13d014
// SYMBOL: sub_13D014
int __fastcall sub_13D014(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 104);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 24))(result);
  return result;
}


// ======================================================================
