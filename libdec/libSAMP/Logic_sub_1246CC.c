// ADDR: 0x125974
// SYMBOL: sub_125974
int sub_125974()
{
  if ( dword_263C44 )
    return dword_263C44 + 224 * dword_238E90 + (dword_238E94 << 6) + 20;
  _android_log_print(
    5,
    "AXL",
    "CHandlingHook: fail to call %s. Custom pool not allocated",
    "static char *CHandlingHook::getFlyingStart()");
  return 0;
}


// ======================================================================
// ADDR: 0x1259cc
// SYMBOL: sub_1259CC
int sub_1259CC()
{
  if ( dword_263C44 )
    return sub_125974() + 88 * dword_238E98;
  _android_log_print(
    5,
    "AXL",
    "CHandlingHook: fail to call %s. Custom pool not allocated",
    "static char *CHandlingHook::getBoatStart()");
  return 0;
}


// ======================================================================
