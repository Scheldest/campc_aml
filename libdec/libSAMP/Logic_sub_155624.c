// ADDR: 0x15601c
// SYMBOL: sub_15601C
int __fastcall sub_15601C(unsigned __int8 *a1, float *a2)
{
  int result; // r0
  float v5; // s0
  _DWORD *exception; // r4
  char *v7; // r0
  int v8; // r0
  double v9; // d16
  _DWORD v10[3]; // [sp+4h] [bp-2Ch] BYREF
  double v11; // [sp+10h] [bp-20h] BYREF
  int v12; // [sp+18h] [bp-18h]

  result = *a1 - 4;
  switch ( result )
  {
    case 0:
      result = a1[8];
      v5 = 0.0;
      if ( a1[8] )
        v5 = 1.0;
      break;
    case 1:
      *(float *)&result = COERCE_FLOAT(sub_220CD8(*((_DWORD *)a1 + 2), *((_DWORD *)a1 + 3)));
      goto LABEL_8;
    case 2:
      *(float *)&result = COERCE_FLOAT(sub_220DFC(*((_DWORD *)a1 + 2), *((_DWORD *)a1 + 3)));
LABEL_8:
      v5 = *(float *)&result;
      break;
    case 3:
      v5 = *((double *)a1 + 1);
      break;
    default:
      exception = j___cxa_allocate_exception(0x10u);
      v7 = (char *)sub_E9DFC((char *)a1);
      sub_DC6DC(v10, v7);
      v8 = std::string::insert((int)v10, 0, "type must be number, but is ");
      v9 = *(double *)v8;
      v12 = *(_DWORD *)(v8 + 8);
      v11 = v9;
      *(_DWORD *)v8 = 0;
      *(_DWORD *)(v8 + 4) = 0;
      *(_DWORD *)(v8 + 8) = 0;
      sub_E9CB0(exception, 302, (unsigned __int8 *)&v11);
      j___cxa_throw(
        exception,
        (struct type_info *)&`typeinfo for'nlohmann::detail::type_error,
        (void (*)(void *))sub_E9438);
  }
  *a2 = v5;
  return result;
}


// ======================================================================
