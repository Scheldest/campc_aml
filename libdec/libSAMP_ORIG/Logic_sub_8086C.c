// ADDR: 0x7e380
// SYMBOL: sub_7E380
bool sub_7E380()
{
  int v0; // r4

  v0 = (unsigned __int8)byte_1A45F0;
  if ( !byte_1A45F0 )
  {
    if ( !sub_825F0() )
      sub_82620(1);
    byte_1A45F0 = 1;
  }
  return v0 == 0;
}


// ======================================================================
// ADDR: 0x83a64
// SYMBOL: sub_83A64
int sub_83A64()
{
  int result; // r0

  if ( byte_1A6FA7 )
    return 0;
  dword_1A6FA8 = sub_688B0((int)&byte_4CC4A, "speaker");
  if ( !sub_825D8() )
    sub_82608(1);
  result = 1;
  byte_1A6FA7 = 1;
  return result;
}


// ======================================================================
