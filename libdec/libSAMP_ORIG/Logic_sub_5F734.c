// ADDR: 0x108fc0
// SYMBOL: sub_108FC0
int sub_108FC0()
{
  int result; // r0

  result = (unsigned __int8)byte_1AF8A8;
  if ( byte_1AF8A8 == 1 )
  {
    pthread_key_delete(dword_1AF8AC);
    result = 0;
    byte_1AF8A8 = 0;
  }
  return result;
}


// ======================================================================
