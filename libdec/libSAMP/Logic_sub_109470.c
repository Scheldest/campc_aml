// ADDR: 0x108ef8
// SYMBOL: sub_108EF8
_DWORD *__fastcall sub_108EF8(int a1)
{
  _DWORD *result; // r0

  _android_log_print(4, "AXL", "GamePrepareTrain");
  result = *(_DWORD **)(a1 + 1124);
  if ( result )
  {
    if ( result[359] >= 2u )
    {
      (*(void (__fastcall **)(_DWORD *))(*result + 4))(result);
      result = 0;
      *(_DWORD *)(a1 + 1124) = 0;
    }
  }
  return result;
}


// ======================================================================
