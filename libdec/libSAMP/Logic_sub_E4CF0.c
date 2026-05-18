// ADDR: 0xec7a8
// SYMBOL: sub_EC7A8
unsigned int __fastcall sub_EC7A8(int a1, _WORD *a2)
{
  unsigned int result; // r0
  _DWORD *exception; // r4
  char *v5; // r0
  int v6; // r0
  double v7; // d16
  _DWORD v8[3]; // [sp+4h] [bp-2Ch] BYREF
  double v9; // [sp+10h] [bp-20h] BYREF
  int v10; // [sp+18h] [bp-18h]

  switch ( *(_BYTE *)a1 )
  {
    case 4:
      result = *(unsigned __int8 *)(a1 + 8);
      break;
    case 5:
    case 6:
      result = *(unsigned __int16 *)(a1 + 8);
      break;
    case 7:
      result = (unsigned int)*(double *)(a1 + 8);
      break;
    default:
      exception = j___cxa_allocate_exception(0x10u);
      v5 = (char *)sub_E9DFC((char *)a1);
      sub_DC6DC(v8, v5);
      v6 = std::string::insert((int)v8, 0, "type must be number, but is ");
      v7 = *(double *)v6;
      v10 = *(_DWORD *)(v6 + 8);
      v9 = v7;
      *(_DWORD *)v6 = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      sub_E9CB0(exception, 302, (unsigned __int8 *)&v9);
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
        (void (*)(void *))sub_E9438);
  }
  *a2 = result;
  return result;
}


// ======================================================================
