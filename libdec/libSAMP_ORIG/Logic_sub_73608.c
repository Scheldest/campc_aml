// ADDR: 0x6c880
// SYMBOL: sub_6C880
int sub_6C880()
{
  int result; // r0

  result = dword_1A4408 + 2470416;
  if ( dword_1A4408 == -2470416 )
  {
    _android_log_print(4, "SAMP_ORIG", "LocalPlayerKeys pointer is null");
    return 0;
  }
  return result;
}


// ======================================================================
