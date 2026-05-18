// ADDR: 0x20e238
// SYMBOL: sub_20E238
void __fastcall sub_20E238(_BYTE *a1, _BYTE *a2)
{
  if ( a1 == a2 )
    a1[112] = 0;
  else
    operator delete(a2, (const std::nothrow_t *)a2);
}


// ======================================================================
