// ADDR: 0xe08d0
// SYMBOL: sub_E08D0
int __fastcall sub_E08D0(unsigned __int64 a1, int a2)
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
        (fmt::v8::detail *)"negative width");
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
        (fmt::v8::detail *)"width is not integer");
  }
}


// ======================================================================
// ADDR: 0xe093c
// SYMBOL: sub_E093C
int __fastcall sub_E093C(int a1, int a2, int a3)
{
  int *v4; // r0
  int v5; // r1

  v4 = *(int **)(a2 + 4);
  if ( v4[2] >= 1 )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)v4,
      (fmt::v8::detail *)"cannot switch from automatic to manual argument indexing");
  v5 = *(_DWORD *)(a2 + 8);
  v4[2] = -1;
  return sub_E0290(a1, v5, a3);
}


// ======================================================================
