// ADDR: 0x1822cc
// SYMBOL: sub_1822CC
int __fastcall sub_1822CC(int result, int a2)
{
  if ( *(_DWORD *)(result + 2048) == a2 )
    *(_DWORD *)(result + 2048) = 0;
  return result;
}


// ======================================================================
