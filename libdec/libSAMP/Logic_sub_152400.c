// ADDR: 0x15e264
// SYMBOL: sub_15E264
int *__fastcall sub_15E264(int *a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r1
  char *exception; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  a1[2] = 0;
  v4 = j_opus_encoder_create(a2, a3, 2048, v8);
  v5 = v8[0];
  *a1 = v4;
  if ( v5 )
  {
    exception = (char *)j___cxa_allocate_exception(0x18u);
    sub_15E044(exception, "Opus create encoder", v8[0]);
    j___cxa_throw(exception, (struct type_info *)&`typeinfo for'OpusException, (void (*)(void *))sub_15E16C);
  }
  a1[1] = j_opus_repacketizer_create();
  return a1;
}


// ======================================================================
