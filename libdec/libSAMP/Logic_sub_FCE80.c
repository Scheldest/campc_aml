// ADDR: 0x107158
// SYMBOL: sub_107158
unsigned int __fastcall sub_107158(unsigned int result)
{
  char *v1; // r0

  if ( result - 1004 >= 3 )
  {
    if ( result >> 3 > 0x7C )
      return result;
    v1 = (char *)&dword_25C9E8[result];
  }
  else
  {
    v1 = (char *)&unk_B3BCC + 4 * result - 4016;
  }
  return *(_DWORD *)v1;
}


// ======================================================================
