// ADDR: 0x12b3c0
// SYMBOL: sub_12B3C0
int __fastcall sub_12B3C0(int a1)
{
  int result; // r0
  int v3; // r5

  result = *(_DWORD *)(a1 + 28);
  if ( result )
  {
    v3 = sub_167F4C();
    off_2636C8(*(_DWORD *)(a1 + 28));
    result = *(_DWORD *)(v3 + 140);
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(result + 8) = 0;
  }
  return result;
}


// ======================================================================
