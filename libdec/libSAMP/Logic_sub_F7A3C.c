// ADDR: 0xf7a5e
// SYMBOL: sub_F7A5E
void **__fastcall sub_F7A5E(void **a1)
{
  char *v1; // r4
  char *v3; // r5
  void *v4; // r0

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    if ( v3 == v1 )
    {
      v4 = *a1;
    }
    else
    {
      do
      {
        v3 -= 28;
        sub_F7A9E(a1 + 2, v3);
      }
      while ( v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
