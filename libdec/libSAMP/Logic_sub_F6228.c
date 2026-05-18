// ADDR: 0xf6246
// SYMBOL: sub_F6246
void __fastcall sub_F6246(int *a1, int a2)
{
  int v3; // r0
  __int64 v4; // r0

  v3 = *a1;
  *a1 = a2;
  if ( v3 )
  {
    v4 = sub_F6260();
    operator delete((void *)v4, (const std::nothrow_t *)HIDWORD(v4));
  }
}


// ======================================================================
