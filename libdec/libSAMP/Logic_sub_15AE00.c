// ADDR: 0x150c40
// SYMBOL: sub_150C40
int __fastcall sub_150C40(int result, int a2)
{
  int v2; // r5
  int i; // r6

  v2 = *(_DWORD *)(result + 8);
  for ( i = result + 4; v2 != i; v2 = *(_DWORD *)(v2 + 4) )
    result = sub_151B38(*(_DWORD *)(v2 + 8), a2);
  return result;
}


// ======================================================================
