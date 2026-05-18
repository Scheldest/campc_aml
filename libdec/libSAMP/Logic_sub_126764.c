// ADDR: 0x126724
// SYMBOL: sub_126724
int sub_126724()
{
  int result; // r0

  if ( !byte_263E14 )
    return sub_2242C8(5, "AXL", "CVehicleSoundHook: Instance of CVehicleSoundHook already deleted");
  _android_log_print(4, "AXL", "CVehicleSoundHook: Delete instance of RemoveHooks");
  result = 0;
  byte_263E14 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x12693c
// SYMBOL: sub_12693C
int sub_12693C(int a1, int a2, int a3, ...)
{
  va_list va; // [sp+1Ch] [bp+8h] BYREF

  va_start(va, a3);
  return _vsprintf_chk(a1, 0, 255, "%s/vehicleAudioSettings.cfg", (const char *)va);
}


// ======================================================================
