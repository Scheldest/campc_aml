// ADDR: 0x60f50
// SYMBOL: sub_60F50
char *__fastcall sub_60F50(int a1)
{
  char v1; // r4
  char *result; // r0

  v1 = a1;
  _android_log_print(4, "SAMP_ORIG", "PlayerAnimation::SetSpecialAction %u", a1);
  result = &byte_117518;
  byte_117518 = v1;
  return result;
}


// ======================================================================
