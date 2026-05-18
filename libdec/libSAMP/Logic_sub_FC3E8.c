// ADDR: 0xf9b64
// SYMBOL: sub_F9B64
int sub_F9B64()
{
  int result; // r0

  result = *(unsigned __int8 *)(dword_23DF24 + 9876756);
  if ( *(_BYTE *)(dword_23DF24 + 9876756) )
    return 1;
  return result;
}


// ======================================================================
// ADDR: 0x13e808
// SYMBOL: sub_13E808
int __fastcall sub_13E808(int a1, int a2)
{
  int v4; // r0
  int i; // r4
  int result; // r0
  int v7; // r2

  v4 = sub_F0B30();
  if ( (unsigned int)(v4 - dword_314210) >> 2 > 0x7C )
  {
    dword_314210 = v4;
    byte_314214 = ~byte_314214;
  }
  for ( i = 0; i != 1024; ++i )
  {
    result = *(unsigned __int8 *)(a1 + i + 4096);
    if ( *(_BYTE *)(a1 + i + 4096) )
    {
      v7 = 20;
      if ( !byte_314214 )
        v7 = 16;
      result = sub_F9B88(dword_23DEF0, *(_DWORD *)(a1 + 4 * i), *(_DWORD *)(*(_DWORD *)(a1 + 4 * i) + v7), a2);
    }
  }
  return result;
}


// ======================================================================
