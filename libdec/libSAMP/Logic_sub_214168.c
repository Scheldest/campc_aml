// ADDR: 0x214184
// SYMBOL: sub_214184
char *__fastcall sub_214184(char **a1, unsigned int a2, char *a3, std::__itoa *this)
{
  char *result; // r0

  if ( (int)&a3[-a2] > 9 || sub_2141C4(this) <= (int)&a3[-a2] )
  {
    *a1 = (char *)std::__itoa::__u32toa(this, a2, a3);
    result = 0;
  }
  else
  {
    result = (_BYTE *)(&dword_48 + 3);
    *a1 = a3;
  }
  a1[1] = result;
  return result;
}


// ======================================================================
