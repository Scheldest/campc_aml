// ADDR: 0x144c20
// SYMBOL: sub_144C20
void __fastcall sub_144C20(int a1, _DWORD *a2)
{
  const std::nothrow_t *v4; // r1

  if ( a2 )
  {
    sub_144C20(a1, *a2);
    sub_144C20(a1, a2[1]);
    sub_113328((int)(a2 + 5));
    operator delete(a2, v4);
  }
}


// ======================================================================
