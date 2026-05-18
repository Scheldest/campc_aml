// ADDR: 0xe09f8
// SYMBOL: sub_E09F8
int __fastcall sub_E09F8(int a1, int a2)
{
  fmt::v8::detail::error_handler *v3; // r0
  int v4; // r2
  int v5; // r1

  v3 = *(fmt::v8::detail::error_handler **)(a2 + 4);
  v4 = *((_DWORD *)v3 + 2);
  if ( v4 <= -1 )
    fmt::v8::detail::error_handler::on_error(
      v3,
      (fmt::v8::detail *)"cannot switch from manual to automatic argument indexing");
  v5 = *(_DWORD *)(a2 + 8);
  *((_DWORD *)v3 + 2) = v4 + 1;
  return sub_E0290(a1, v5, v4);
}


// ======================================================================
