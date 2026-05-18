// ADDR: 0xe036c
// SYMBOL: sub_E036C
int __fastcall sub_E036C(unsigned __int8 **a1, unsigned __int8 *a2, int a3)
{
  int v3; // r8
  unsigned __int8 *v5; // r5
  int v6; // r6
  unsigned __int8 *v7; // lr
  int result; // r0
  int v9; // r4
  int v10; // t1
  int v11; // r1

  v3 = (int)*a1;
  v5 = *a1 + 1;
  v6 = **a1;
  v7 = &a2[~(unsigned int)*a1 + (_DWORD)*a1];
  result = 0;
  while ( 1 )
  {
    v9 = result;
    result = v6 + 10 * result - 48;
    if ( v5 == a2 )
      break;
    v10 = *v5++;
    v6 = v10;
    if ( (unsigned int)(v10 - 48) >= 0xA )
    {
      a2 = v5 - 1;
      v7 = v5 - 2;
      break;
    }
  }
  *a1 = a2;
  v11 = (int)&a2[-v3];
  if ( v11 >= 10 )
  {
    if ( v11 == 10 )
    {
      if ( 10LL * (unsigned int)v9 + (unsigned __int64)((unsigned int)*v7 - 48) >= 0x80000000 )
        return a3;
    }
    else
    {
      return a3;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xe03e4
// SYMBOL: sub_E03E4
int __fastcall sub_E03E4(fmt::v8::detail::error_handler *a1)
{
  int result; // r0

  result = sub_E0408((char *)a1 + 24);
  if ( result <= -1 )
    fmt::v8::detail::error_handler::on_error(a1, (fmt::v8::detail *)"argument not found");
  return result;
}


// ======================================================================
