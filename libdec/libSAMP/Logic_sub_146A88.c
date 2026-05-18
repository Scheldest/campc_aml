// ADDR: 0xf9b2c
// SYMBOL: sub_F9B2C
int __fastcall sub_F9B2C(int a1, int a2)
{
  int result; // r0

  result = *(unsigned __int8 *)(a1 + 12);
  if ( !result )
  {
    result = dword_23DF24;
    *(_DWORD *)(dword_23DF24 + 9876696) = a2 & 0x3FFFFFFF;
  }
  return result;
}


// ======================================================================
