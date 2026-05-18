// ADDR: 0xfc4dc
// SYMBOL: sub_FC4DC
int __fastcall sub_FC4DC(unsigned int a1)
{
  unsigned int v1; // r1
  int v2; // r3

  v1 = 1233 * (32 - __clz(a1 | 1));
  v2 = v1 >> 12;
  if ( dword_5E1B0[v1 >> 12] > a1 )
    v2 = (v1 >> 12) - 1;
  return v2 + 1;
}


// ======================================================================
