// ADDR: 0x108c68
// SYMBOL: sub_108C68
unsigned int __fastcall sub_108C68(unsigned int result)
{
  unsigned int v1; // r4

  if ( result <= 0xC7 )
  {
    v1 = result;
    result = dword_2629D0[result];
    byte_262908[v1] = 0;
    if ( result )
      result = ((int (*)(void))(dword_23DF24 + 1947493))();
    dword_2629D0[v1] = 0;
  }
  return result;
}


// ======================================================================
