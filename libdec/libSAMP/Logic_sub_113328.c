// ADDR: 0x1133e2
// SYMBOL: sub_1133E2
void **__fastcall sub_1133E2(void **a1)
{
  void *v1; // r5
  int v3; // r0
  void *v4; // r0

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (int)a1[1];
    if ( (void *)v3 == v1 )
    {
      v4 = v1;
    }
    else
    {
      do
        v3 = sub_1133AC(v3 - 8);
      while ( (void *)v3 != v1 );
      v4 = *a1;
    }
    a1[1] = v1;
    operator delete(v4);
  }
  return a1;
}


// ======================================================================
