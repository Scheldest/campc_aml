// ADDR: 0x17d828
// SYMBOL: sub_17D828
int __fastcall sub_17D828(int *a1)
{
  int v2; // r0
  int result; // r0

  sub_17D5BA((int)a1, 1);
  v2 = *a1;
  if ( !(*a1 << 29) )
  {
    *(_BYTE *)(a1[3] + (v2 >> 3)) = 0;
    v2 = *a1;
  }
  result = v2 + 1;
  *a1 = result;
  return result;
}


// ======================================================================
