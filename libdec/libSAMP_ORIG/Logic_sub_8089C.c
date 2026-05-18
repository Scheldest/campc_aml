// ADDR: 0x7e3ac
// SYMBOL: sub_7E3AC
char *sub_7E3AC()
{
  char *result; // r0

  result = &byte_1A45F0;
  if ( byte_1A45F0 )
    byte_1A45F0 = 0;
  return result;
}


// ======================================================================
// ADDR: 0x83af0
// SYMBOL: sub_83AF0
char *sub_83AF0()
{
  char *result; // r0

  result = &byte_1A6FA7;
  if ( byte_1A6FA7 )
  {
    byte_1A6FA7 = 0;
    dword_1A6FA8 = 0;
  }
  return result;
}


// ======================================================================
