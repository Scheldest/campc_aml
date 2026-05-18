// ADDR: 0x220a28
// SYMBOL: sub_220A28
void **__fastcall sub_220A28(void **a1)
{
  void *v2; // r0

  v2 = *a1;
  if ( v2 )
  {
    operator delete[](v2);
    *a1 = 0;
  }
  return a1;
}


// ======================================================================
