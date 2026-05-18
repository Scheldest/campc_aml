// ADDR: 0xf6228
// SYMBOL: sub_F6228
void __fastcall sub_F6228(void **a1, void *a2)
{
  void *v2; // r4
  const std::nothrow_t *v3; // r1

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    sub_F6246(v2, 0);
    operator delete(v2, v3);
  }
}


// ======================================================================
