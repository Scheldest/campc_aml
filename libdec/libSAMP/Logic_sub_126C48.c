// ADDR: 0x126d14
// SYMBOL: sub_126D14
int __fastcall sub_126D14(int a1)
{
  int result; // r0
  std::runtime_error *exception; // r4

  result = *(_DWORD *)(a1 + 4);
  if ( !result )
  {
    exception = (std::runtime_error *)j___cxa_allocate_exception(8u);
    std::runtime_error::runtime_error(exception, "descent_builder: object not created yet");
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::runtime_error,
      (void (*)(void *))std::underflow_error::~underflow_error);
  }
  return result;
}


// ======================================================================
// ADDR: 0x126d58
// SYMBOL: sub_126D58
_DWORD *__fastcall sub_126D58(int a1, int *a2)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r2

  v2 = *(_DWORD **)(a1 + 4);
  if ( !v2 )
LABEL_8:
    sub_EE13C((int)"map::at:  key not found");
  v3 = *a2;
  while ( 1 )
  {
    v4 = v2[4];
    if ( v3 >= v4 )
      break;
    v2 = (_DWORD *)*v2;
LABEL_7:
    if ( !v2 )
      goto LABEL_8;
  }
  if ( v4 < v3 )
  {
    v2 = (_DWORD *)v2[1];
    goto LABEL_7;
  }
  return v2 + 5;
}


// ======================================================================
// ADDR: 0x129e00
// SYMBOL: sub_129E00
_DWORD *__fastcall sub_129E00(int a1, int a2, int a3)
{
  int v6; // r2
  _DWORD *result; // r0
  int v8; // r0

  v6 = **(_DWORD **)(dword_23DEF4 + 944);
  result = *(_DWORD **)(*(_DWORD *)(v6 + 5052) + 28);
  if ( result[23] != a1 )
  {
    v8 = sub_148F74(v6, a1, 1);
    if ( v8 == 0xFFFF )
      return 0;
    result = *(_DWORD **)(**(_DWORD **)(**(_DWORD **)(dword_23DEF4 + 944) + 4 * v8 + 4) + 296);
    if ( !result )
      return 0;
  }
  result[27] = a2;
  result[28] = a3;
  return result;
}


// ======================================================================
// ADDR: 0x129e64
// SYMBOL: sub_129E64
int __fastcall sub_129E64(int result)
{
  if ( result )
  {
    *(_DWORD *)(result + 108) = -1;
    *(_DWORD *)(result + 112) = -1;
  }
  return result;
}


// ======================================================================
