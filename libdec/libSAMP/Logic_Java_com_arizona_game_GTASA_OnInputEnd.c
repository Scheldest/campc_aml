// ADDR: 0x12f968
// SYMBOL: sub_12F968
int __fastcall sub_12F968(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 136);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 32))(result);
    return sub_12F5E0(a1);
  }
  return result;
}


// ======================================================================
