// ADDR: 0x7dffc
// SYMBOL: sub_7DFFC
void __fastcall sub_7DFFC(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_7DFFC(a1, *a2);
    sub_7DFFC(a1, a2[1]);
    operator delete(a2, v4);
  }
}


// ======================================================================
