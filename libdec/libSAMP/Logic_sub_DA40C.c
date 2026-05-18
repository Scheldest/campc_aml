// ADDR: 0x2210d4
// SYMBOL: sub_2210D4
int sub_2210D4()
{
  int result; // r0

  result = (unsigned __int8)byte_384180;
  if ( byte_384180 == 1 )
  {
    pthread_key_delete(dword_384184);
    result = 0;
    byte_384180 = 0;
  }
  return result;
}


// ======================================================================
