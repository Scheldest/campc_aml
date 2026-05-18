// ADDR: 0x100d0c
// SYMBOL: sub_100D0C
void __fastcall sub_100D0C(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_100D0C(a1, *a2);
    sub_100D0C(a1, a2[1]);
    operator delete(a2, v4);
  }
}


// ======================================================================
