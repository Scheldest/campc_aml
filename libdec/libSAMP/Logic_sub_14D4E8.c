// ADDR: 0x141388
// SYMBOL: sub_141388
int __fastcall sub_141388(int a1, unsigned __int8 *a2)
{
  int result; // r0

  _android_log_print(4, "AXL", "ApplySpecialAction type %i", *a2);
  *(_BYTE *)(a1 + 26) = *a2;
  result = *a2;
  if ( result == 2 )
    return sub_106164(*(_DWORD *)(a1 + 28));
  return result;
}


// ======================================================================
