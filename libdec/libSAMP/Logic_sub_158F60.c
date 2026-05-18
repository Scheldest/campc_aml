// ADDR: 0x158fc0
// SYMBOL: sub_158FC0
void __fastcall sub_158FC0(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  const std::nothrow_t *v3; // r1

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    sub_164BE4(*v2);
    operator delete(v2, v3);
  }
}


// ======================================================================
// ADDR: 0x15bc16
// SYMBOL: sub_15BC16
int __fastcall sub_15BC16(int a1)
{
  void *v2; // r0

  v2 = *(void **)(a1 + 8);
  if ( v2 )
    operator delete[](v2);
  return a1;
}


// ======================================================================
// ADDR: 0x164b58
// SYMBOL: sub_164B58
int sub_164B58()
{
  if ( off_381B0C )
    return off_381B0C();
  else
    return 0;
}


// ======================================================================
