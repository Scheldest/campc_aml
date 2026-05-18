// ADDR: 0x14a618
// SYMBOL: sub_14A618
int __fastcall sub_14A618(int a1)
{
  int result; // r0

  if ( *(_DWORD *)(a1 + 296) )
  {
    sub_149278(a1);
    _android_log_print(3, "AXL", "Remove player %p", *(const void **)(a1 + 296));
    sub_F9E64(dword_23DEF0, *(unsigned __int8 **)(a1 + 296));
    *(_DWORD *)(a1 + 296) = 0;
  }
  if ( *(_BYTE *)(a1 + 25) )
    *(_BYTE *)(a1 + 25) = 0;
  result = 1;
  *(_BYTE *)a1 = 1;
  return result;
}


// ======================================================================
