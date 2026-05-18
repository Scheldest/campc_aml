// ADDR: 0xf6260
// SYMBOL: sub_F6260
void **__fastcall sub_F6260(void **a1)
{
  void *v2; // r0

  sub_F627C();
  v2 = *a1;
  *a1 = 0;
  if ( v2 )
    operator delete(v2);
  return a1;
}


// ======================================================================
