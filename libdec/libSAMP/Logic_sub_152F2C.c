// ADDR: 0x153336
// SYMBOL: sub_153336
void __fastcall sub_153336(void **a1, void *a2)
{
  char *v2; // r4
  const std::nothrow_t *v3; // r1

  v2 = (char *)*a1;
  *a1 = a2;
  if ( v2 )
  {
    sub_15E0E8(v2 + 4);
    operator delete(v2, v3);
  }
}


// ======================================================================
