// ADDR: 0xe157c
// SYMBOL: sub_E157C
int __fastcall sub_E157C(int a1, fmt::v8::detail::error_handler *this)
{
  unsigned int v2; // r2
  __int16 v4; // r0
  bool v5; // zf
  char *v6; // r2

  v2 = *(unsigned __int8 *)(a1 + 8);
  if ( v2 - 1 < 6 )
    return 0;
  if ( v2 > 0x12 || ((1 << v2) & 0x48001) == 0 )
  {
    v6 = "invalid type specifier";
LABEL_11:
    fmt::v8::detail::error_handler::on_error(this, (fmt::v8::detail *)v6);
  }
  v4 = *(_WORD *)(a1 + 9);
  if ( (v4 & 0xF) == 4 )
    goto LABEL_10;
  v5 = (v4 & 0x70) == 0;
  if ( (v4 & 0x70) == 0 )
    v5 = (v4 & 0x80) == 0;
  if ( !v5 )
  {
LABEL_10:
    v6 = "invalid format specifier for char";
    goto LABEL_11;
  }
  return 1;
}


// ======================================================================
