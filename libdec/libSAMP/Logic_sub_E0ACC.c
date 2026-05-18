// ADDR: 0xe0af0
// SYMBOL: sub_E0AF0
int __fastcall sub_E0AF0(unsigned __int64 a1, int a2)
{
  _BYTE v3[12]; // [sp+4h] [bp-Ch] BYREF

  switch ( a2 )
  {
    case 1:
      if ( (int)a1 <= -1 )
        goto LABEL_10;
      return a1;
    case 2:
      HIDWORD(a1) = 0;
      goto LABEL_6;
    case 3:
      if ( SHIDWORD(a1) > -1 )
        goto LABEL_6;
LABEL_10:
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v3,
        (fmt::v8::detail *)"negative precision");
    case 4:
LABEL_6:
      if ( a1 >= 0x80000000 )
        fmt::v8::detail::error_handler::on_error(
          (fmt::v8::detail::error_handler *)v3,
          (fmt::v8::detail *)"number is too big");
      return a1;
    default:
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v3,
        (fmt::v8::detail *)"precision is not integer");
  }
}


// ======================================================================
