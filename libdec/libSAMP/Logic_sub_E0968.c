// ADDR: 0xe098c
// SYMBOL: sub_E098C
int __fastcall sub_E098C(int a1, int a2)
{
  int result; // r0
  _BYTE v4[12]; // [sp+4h] [bp-Ch] BYREF

  sub_E09B0(a1, a2 + 8);
  result = *(_DWORD *)(a1 + 8);
  if ( !result )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v4,
      (fmt::v8::detail *)"argument not found");
  return result;
}


// ======================================================================
