// ADDR: 0x150c66
// SYMBOL: sub_150C66
int __fastcall sub_150C66(int result, int a2)
{
  int v2; // r5
  int i; // r6

  v2 = *(_DWORD *)(result + 8);
  for ( i = result + 4; v2 != i; v2 = *(_DWORD *)(v2 + 4) )
    result = sub_151C60(*(_DWORD *)(v2 + 8), a2);
  return result;
}


// ======================================================================
