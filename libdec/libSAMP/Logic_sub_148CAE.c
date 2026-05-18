// ADDR: 0x13df08
// SYMBOL: sub_13DF08
_DWORD *__fastcall sub_13DF08(_DWORD *a1)
{
  void *v2; // r0

  if ( *a1 )
  {
    v2 = (void *)sub_1492FC();
    operator delete(v2);
    *a1 = 0;
  }
  return a1;
}


// ======================================================================
