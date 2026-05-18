// ADDR: 0x139c38
// SYMBOL: sub_139C38
void **__fastcall sub_139C38(void **a1)
{
  void *v1; // r4
  int v3; // r5
  void *v4; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (int)a1[1];
    if ( (void *)v3 == v1 )
    {
      v4 = *a1;
    }
    else
    {
      do
      {
        v3 -= 60;
        sub_138F68((int)(a1 + 2), v3);
      }
      while ( (void *)v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
