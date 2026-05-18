// ADDR: 0x15dfec
// SYMBOL: sub_15DFEC
int *__fastcall sub_15DFEC(int *a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  void *exception; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  a1[1] = a2;
  v4 = j_opus_decoder_create(a2, a3, v8);
  v5 = v8[0];
  *a1 = v4;
  if ( v5 )
  {
    exception = j___cxa_allocate_exception(0x18u);
    sub_15E044(exception, "Opus create decoder", v8[0]);
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'OpusException, (void (*)(void *))sub_15E16C);
  }
  return a1;
}


// ======================================================================
