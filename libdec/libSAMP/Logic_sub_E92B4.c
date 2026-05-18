// ADDR: 0xea428
// SYMBOL: sub_EA428
_DWORD *__fastcall sub_EA428(_DWORD *a1, int a2)
{
  int v3; // r2

  v3 = *(_DWORD *)(a2 + 4);
  *a1 = &off_22A820;
  a1[1] = v3;
  std::runtime_error::runtime_error((std::runtime_error *)(a1 + 2), (const std::runtime_error *)(a2 + 8));
  *a1 = &off_22A880;
  return a1;
}


// ======================================================================
