// ADDR: 0x15e0fc
// SYMBOL: sub_15E0FC
int __fastcall sub_15E0FC(_DWORD *a1)
{
  int result; // r0
  int v2; // r4
  void *exception; // r5

  result = j_opus_decode(*a1);
  v2 = result;
  if ( result <= -1 )
  {
    exception = j___cxa_allocate_exception(0x18u);
    sub_15E154(exception, "Opus decode", v2);
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'OpusExceptionDecode, (void (*)(void *))sub_15E16C);
  }
  return result;
}


// ======================================================================
// ADDR: 0x15e194
// SYMBOL: sub_15E194
int __fastcall sub_15E194(_DWORD *a1)
{
  int v1; // r0

  v1 = j_opus_decode(*a1);
  return v1 & ~(v1 >> 31);
}


// ======================================================================
