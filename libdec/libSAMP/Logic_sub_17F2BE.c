// ADDR: 0x182060
// SYMBOL: sub_182060
int __fastcall sub_182060(int a1)
{
  unsigned int v1; // r1
  float v2; // s0

  v1 = *(_DWORD *)(a1 + 1964);
  if ( v1 )
    v2 = (float)*(unsigned int *)(a1 + 1972) / (float)v1;
  else
    v2 = 0.0;
  return LODWORD(v2);
}


// ======================================================================
