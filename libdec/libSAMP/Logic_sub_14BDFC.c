// ADDR: 0x13e7d0
// SYMBOL: sub_13E7D0
void *__fastcall sub_13E7D0(int a1, int a2)
{
  void *result; // r0

  result = *(void **)(a1 + 4 * a2);
  if ( result )
  {
    operator delete(result);
    result = 0;
    *(_DWORD *)(a1 + 4 * a2) = 0;
    *(_BYTE *)(a1 + a2 + 4096) = 0;
  }
  return result;
}


// ======================================================================
