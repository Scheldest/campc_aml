// ADDR: 0xdfacc
// SYMBOL: sub_DFACC
int __fastcall sub_DFACC(int a1, int a2, int a3)
{
  unsigned int v3; // r1
  int v5; // [sp+4h] [bp-14h] BYREF
  _DWORD v6[4]; // [sp+8h] [bp-10h] BYREF

  if ( *(_BYTE *)(a3 + 8) && *(_BYTE *)(a3 + 8) != 17 )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)&v5,
      (fmt::v8::detail *)"invalid type specifier");
  v6[0] = a2;
  v3 = __clz(a2 | 1);
  v6[1] = 8 - (v3 >> 2);
  return ((int (__fastcall *)(int, int, unsigned int, unsigned int, _DWORD *, int))sub_DFB10)(
           a1,
           a3,
           10 - (v3 >> 2),
           10 - (v3 >> 2),
           v6,
           v5);
}


// ======================================================================
