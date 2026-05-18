// ADDR: 0x15e2c8
// SYMBOL: sub_15E2C8
_DWORD *__fastcall sub_15E2C8(_DWORD *a1)
{
  j_opus_encoder_destroy(*a1);
  j_opus_repacketizer_destroy(a1[1]);
  return a1;
}


// ======================================================================
