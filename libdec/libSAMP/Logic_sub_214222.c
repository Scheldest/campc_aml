// ADDR: 0x214268
// SYMBOL: sub_214268
int __fastcall sub_214268(unsigned __int64 a1)
{
  unsigned int v1; // r2
  unsigned int v2; // r2
  int v3; // r4

  v1 = __clz(a1 | 1) + 32;
  if ( HIDWORD(a1) )
    v1 = __clz(HIDWORD(a1));
  v2 = 1233 * (64 - v1);
  v3 = v2 >> 12;
  if ( a1 < qword_D8F18[v2 >> 12] )
    v3 = (v2 >> 12) - 1;
  return v3 + 1;
}


// ======================================================================
