// ADDR: 0xf629e
// SYMBOL: sub_F629E
void __fastcall sub_F629E(int *a1, int a2)
{
  int v2; // r4
  __int64 v3; // r0

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    sub_F62C0(v2 + 20);
    v3 = sub_F62E6(v2);
    operator delete((void *)v3, (const std::nothrow_t *)HIDWORD(v3));
  }
}


// ======================================================================
