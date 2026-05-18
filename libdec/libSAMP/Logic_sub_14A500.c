// ADDR: 0xf9b84
// SYMBOL: sub_F9B84
int sub_F9B84()
{
  return 1;
}


// ======================================================================
// ADDR: 0xf9dec
// SYMBOL: sub_F9DEC
int __fastcall sub_F9DEC(int a1, int a2, int a3, float a4, float a5, float a6)
{
  int v9; // r4
  int v10; // r6

  v9 = 2;
  while ( byte_247288[v9] )
  {
    if ( ++v9 == 210 )
      return 0;
  }
  v10 = operator new(0x2F0u);
  sub_103C40(v10, v9, a2, a3, a4, a5, a6);
  if ( *(_DWORD *)(v10 + 92) )
    byte_247288[v9] = 1;
  return v10;
}


// ======================================================================
