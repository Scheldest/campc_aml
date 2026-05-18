// ADDR: 0xf6348
// SYMBOL: sub_F6348
void __fastcall sub_F6348(_BYTE *a1, _BYTE *a2)
{
  if ( a1 == a2 )
    a1[112] = 0;
  else
    operator delete(a2, (const std::nothrow_t *)a2);
}


// ======================================================================
