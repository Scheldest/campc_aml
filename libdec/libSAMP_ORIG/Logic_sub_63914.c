// ADDR: 0x7e42c
// SYMBOL: sub_7E42C
int sub_7E42C()
{
  _BYTE *v0; // r4
  int result; // r0
  bool v2; // zf

  byte_1A45F1 = 0;
  result = dword_1A442C;
  v2 = dword_1A442C == 0;
  if ( dword_1A442C )
  {
    v0 = *(_BYTE **)(dword_1A442C + 128);
    v2 = v0 == 0;
  }
  if ( !v2 )
  {
    *v0 = 0;
    sub_690B8();
    result = (unsigned __int8)v0[1];
    if ( v0[1] )
    {
      result = 0;
      v0[1] = 0;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x83b30
// SYMBOL: sub_83B30
char *sub_83B30()
{
  char *result; // r0

  result = &byte_1A6FAC;
  byte_1A6FAC = 0;
  return result;
}


// ======================================================================
