// ADDR: 0xf3a84
// SYMBOL: sub_F3A84
int __fastcall sub_F3A84(int a1)
{
  void **v1; // r5
  void *v3; // r0

  v1 = *(void ***)(a1 + 4);
  if ( v1 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      v1[1] = v3;
      operator delete(v3);
    }
    operator delete(v1);
  }
  return a1;
}


// ======================================================================
