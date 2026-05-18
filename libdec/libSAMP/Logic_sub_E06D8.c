// ADDR: 0xe0a24
// SYMBOL: sub_E0A24
unsigned __int8 *__fastcall sub_E0A24(unsigned __int8 *a1, unsigned __int8 *a2, _DWORD *a3)
{
  int v5; // r0
  unsigned __int8 *v7; // r0
  int v8; // r1
  unsigned __int8 *v9; // r0
  int v10; // r2
  int v11; // t1
  int v12; // r0
  unsigned __int8 *v14; // [sp+4h] [bp-14h] BYREF
  _BYTE v15[4]; // [sp+8h] [bp-10h] BYREF
  _BYTE v16[12]; // [sp+Ch] [bp-Ch] BYREF

  v5 = *a1;
  v14 = a1;
  if ( (unsigned int)(v5 - 48) > 9 )
  {
    if ( v5 != 95 && (v5 & 0xDFu) - 65 > 0x19 )
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v16,
        (fmt::v8::detail *)"invalid format string");
    v9 = a1 + 1;
    while ( v9 != a2 )
    {
      v11 = *v9++;
      v10 = v11;
      if ( (unsigned int)(v11 - 48) >= 0xA && v10 != 95 && (v10 & 0xDFu) - 65 >= 0x1A )
      {
        a2 = v9 - 1;
        break;
      }
    }
    sub_E0B5C(*a3, a1, a2 - a1);
  }
  else
  {
    if ( v5 == 48 )
    {
      v7 = a1 + 1;
      v8 = 0;
      v14 = v7;
    }
    else
    {
      v8 = sub_E036C(&v14, a2, 0x7FFFFFFF);
      v7 = v14;
    }
    if ( v7 == a2 || (v12 = *v7, v12 != 58) && v12 != 125 )
      fmt::v8::detail::error_handler::on_error(
        (fmt::v8::detail::error_handler *)v15,
        (fmt::v8::detail *)"invalid format string");
    sub_E0ACC(*a3, v8);
    return v14;
  }
  return a2;
}


// ======================================================================
// ADDR: 0xe0b80
// SYMBOL: sub_E0B80
int __fastcall sub_E0B80(int a1)
{
  int result; // r0
  unsigned __int64 v3; // [sp+0h] [bp-18h] BYREF
  int v4; // [sp+8h] [bp-10h]

  sub_E09F8((int)&v3, a1);
  result = sub_E0AF0(v3, v4);
  *(_DWORD *)(*(_DWORD *)a1 + 4) = result;
  return result;
}


// ======================================================================
