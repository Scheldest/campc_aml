// ADDR: 0x60318
// SYMBOL: sub_60318
int __fastcall sub_60318(unsigned __int8 *a1, int a2)
{
  __int64 v4; // r0
  int v5; // r5

  _android_log_print(4, "SAMP_ORIG", "Stop: %s", byte_117398);
  LODWORD(v4) = *a1 == 0;
  HIDWORD(v4) = byte_1174AE == 0;
  v5 = v4 | HIDWORD(v4);
  if ( !v4 )
  {
    byte_1174AF = 0;
    byte_1174AD = 1;
    if ( a2 )
    {
      do
        usleep(0xC8u);
      while ( byte_1174AE );
    }
    off_1ABF08(dword_117394);
    dword_117394 = 0;
  }
  return v5 ^ 1;
}


// ======================================================================
