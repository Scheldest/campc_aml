// ADDR: 0xf7cc6
// SYMBOL: sub_F7CC6
void __fastcall sub_F7CC6(int a1, void **a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_F7CC6(a1, *a2);
    sub_F7CC6(a1, a2[1]);
    sub_F7A5E(a2 + 5);
    operator delete(a2, v4);
  }
}


// ======================================================================
