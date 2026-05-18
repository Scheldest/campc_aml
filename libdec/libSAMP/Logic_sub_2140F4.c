// ADDR: 0x214134
// SYMBOL: sub_214134
int __fastcall sub_214134(unsigned int a1)
{
  unsigned int v1; // r1
  int v2; // r3

  v1 = 1233 * (32 - __clz(a1 | 1));
  v2 = v1 >> 12;
  if ( dword_D8EF0[v1 >> 12] > a1 )
    v2 = (v1 >> 12) - 1;
  return v2 + 1;
}


// ======================================================================
