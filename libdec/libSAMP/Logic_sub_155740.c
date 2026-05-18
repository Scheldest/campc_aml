// ADDR: 0x15621e
// SYMBOL: sub_15621E
_DWORD *__fastcall sub_15621E(int a1, char **a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r8
  _DWORD *v5; // r5
  bool v6; // nf
  _DWORD *v7; // r0
  _DWORD *v8; // r0

  v3 = (_DWORD *)(a1 + 4);
  v2 = *(_DWORD **)(a1 + 4);
  if ( !v2 )
    return v3;
  v5 = (_DWORD *)(a1 + 4);
  do
  {
    v6 = std::string::compare((int)(v2 + 4), *a2) < 0;
    v7 = v2;
    if ( v6 )
      v7 = v2 + 1;
    v8 = (_DWORD *)*v7;
    if ( !v6 )
      v5 = v2;
    v2 = v8;
  }
  while ( v8 );
  if ( v5 == v3 || std::string::compare((int)(v5 + 4), *a2) >= 1 )
    return v3;
  return v5;
}


// ======================================================================
// ADDR: 0x15626c
// SYMBOL: sub_15626C
_BYTE *__fastcall sub_15626C(int a1)
{
  _BYTE *result; // r0
  int v3; // r1
  _DWORD *v4; // r4
  _DWORD *exception; // r4
  void *v6[2]; // [sp+4h] [bp-1Ch] BYREF

  result = *(_BYTE **)a1;
  v3 = (unsigned __int8)*result;
  if ( v3 == 1 )
    return (_BYTE *)(*(_DWORD *)(a1 + 4) + 32);
  if ( v3 == 2 )
    return *(_BYTE **)(a1 + 8);
  if ( !*result )
  {
    exception = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(v6, "cannot get value");
    sub_E9B38(exception, 214, (unsigned __int8 *)v6);
    j___cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'nlohmann::detail::invalid_iterator,
      (void (*)(void *))sub_E9438);
  }
  if ( *(_DWORD *)(a1 + 12) )
  {
    v4 = j___cxa_allocate_exception(0x10u);
    sub_DC6DC(v6, "cannot get value");
    sub_E9B38(v4, 214, (unsigned __int8 *)v6);
    j___cxa_throw(
      v4,
      (struct type_info *)&`typeinfo for'nlohmann::detail::invalid_iterator,
      (void (*)(void *))sub_E9438);
  }
  return result;
}


// ======================================================================
