// ADDR: 0x1eea00
// SYMBOL: sub_1EEA00
void __fastcall sub_1EEA00(void **a1, const std::nothrow_t *a2)
{
  void *v3; // r0

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
    operator delete(v3, a2);
}


// ======================================================================
