// ADDR: 0x1ee6f0
// SYMBOL: sub_1EE6F0
void __fastcall sub_1EE6F0(void **a1, const std::nothrow_t *a2)
{
  void *v3; // r0

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
    operator delete(v3, a2);
}


// ======================================================================
