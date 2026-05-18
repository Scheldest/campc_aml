// ADDR: 0x186ee8
// SYMBOL: sub_186EE8
_DWORD *__fastcall sub_186EE8(_DWORD *result, unsigned int a2)
{
  unsigned int v2; // r2
  _DWORD *v3; // r4

  v2 = result[1];
  if ( v2 > a2 )
  {
    v3 = result;
    j_memmove((void *)(*result + 12 * a2), (const void *)(*result + 12 * a2 + 12), 12 * (~a2 + v2));
    result = (_DWORD *)(v3[1] - 1);
    v3[1] = result;
  }
  return result;
}


// ======================================================================
