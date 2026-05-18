// ADDR: 0x7e3c0
// SYMBOL: sub_7E3C0
int sub_7E3C0()
{
  int result; // r0
  char *v1; // r1
  bool v2; // zf

  result = (unsigned __int8)byte_1A45F0;
  if ( byte_1A45F0 )
  {
    v1 = &byte_1A45F2;
    byte_1A45F2 = 1;
    byte_1A45F1 = 1;
    result = dword_1A442C;
    v2 = dword_1A442C == 0;
    if ( dword_1A442C )
    {
      v1 = *(char **)(dword_1A442C + 128);
      v2 = v1 == 0;
    }
    if ( !v2 )
    {
      *v1 = 1;
      return sub_690B8();
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x83b10
// SYMBOL: sub_83B10
char *sub_83B10()
{
  char *result; // r0

  result = (char *)(unsigned __int8)byte_1A6FA7;
  if ( byte_1A6FA7 )
  {
    result = &byte_1A6FAC;
    byte_1A6FAC = 1;
  }
  return result;
}


// ======================================================================
