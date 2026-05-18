// ADDR: 0x144b8e
// SYMBOL: sub_144B8E
void **__fastcall sub_144B8E(void **a1)
{
  int *v1; // r5
  int *v3; // r6
  void *v4; // r0

  v1 = (int *)*a1;
  if ( *a1 )
  {
    v3 = (int *)a1[1];
    v4 = *a1;
    if ( v3 != v1 )
    {
      do
      {
        sub_13E4F0(v3 - 1, 0);
        v3 -= 15;
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
