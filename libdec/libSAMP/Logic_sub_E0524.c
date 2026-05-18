// ADDR: 0xe079c
// SYMBOL: sub_E079C
int *__fastcall sub_E079C(int *result, const char *a2, unsigned int a3)
{
  int v3; // r12
  _BYTE *v4; // lr
  char v5; // t1

  if ( a3 > 4 )
    fmt::v8::detail::throw_format_error((fmt::v8::detail *)"invalid fill", a2);
  v3 = *result;
  if ( a3 )
  {
    v4 = (_BYTE *)(v3 + 11);
    result = (int *)a3;
    do
    {
      v5 = *a2++;
      result = (int *)((char *)result - 1);
      *v4++ = v5;
    }
    while ( result );
  }
  *(_BYTE *)(v3 + 15) = a3;
  return result;
}


// ======================================================================
// ADDR: 0xe07d0
// SYMBOL: sub_E07D0
int __fastcall sub_E07D0(int *a1, int a2)
{
  int result; // r0
  char v3; // [sp+4h] [bp-Ch] BYREF

  if ( a2 == 4 && (unsigned int)(a1[3] - 1) >= 0xB )
    fmt::v8::detail::error_handler::on_error(
      (fmt::v8::detail::error_handler *)&v3,
      (fmt::v8::detail *)"format specifier requires numeric argument");
  result = *a1;
  *(_WORD *)(result + 9) = *(_WORD *)(result + 9) & 0xFFF0 | a2 & 0xF;
  return result;
}


// ======================================================================
