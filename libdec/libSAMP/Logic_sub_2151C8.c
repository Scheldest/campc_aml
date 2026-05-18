// ADDR: 0x2151f0
// SYMBOL: sub_2151F0
int __fastcall sub_2151F0(int result)
{
  int v1; // r1
  int i; // r2

  v1 = *(_DWORD *)(result + 4);
  for ( i = *(_DWORD *)(result + 8); i != v1; *(_DWORD *)(result + 8) = i )
    i -= 4;
  return result;
}


// ======================================================================
