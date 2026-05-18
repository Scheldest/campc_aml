// ADDR: 0x12df4c
// SYMBOL: sub_12DF4C
void __fastcall sub_12DF4C(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_12DF4C(a1, *a2);
    sub_12DF4C(a1, a2[1]);
    sub_12DF78(a2 + 5);
    operator delete(a2, v4);
  }
}


// ======================================================================
