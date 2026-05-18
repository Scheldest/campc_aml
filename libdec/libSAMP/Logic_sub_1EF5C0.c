// ADDR: 0x1ef652
// SYMBOL: sub_1EF652
int __fastcall sub_1EF652(int result)
{
  int v1; // r1
  int i; // r2

  v1 = *(_DWORD *)(result + 4);
  for ( i = *(_DWORD *)(result + 8); i != v1; *(_DWORD *)(result + 8) = i )
    i -= 4;
  return result;
}


// ======================================================================
