// ADDR: 0xb0798
// SYMBOL: sub_B0798
void __fastcall sub_B0798(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_B0798(a1, *a2);
    sub_B0798(a1, a2[1]);
    operator delete(a2, v4);
  }
}


// ======================================================================
