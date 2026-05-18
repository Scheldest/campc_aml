// ADDR: 0xf5474
// SYMBOL: sub_F5474
void __fastcall sub_F5474(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_F5474(a1, *a2);
    sub_F5474(a1, a2[1]);
    operator delete(a2, v4);
  }
}


// ======================================================================
