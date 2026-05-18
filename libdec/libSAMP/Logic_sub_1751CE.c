// ADDR: 0x175046
// SYMBOL: sub_175046
int __fastcall sub_175046(int a1)
{
  int v2; // r0
  int v3; // r0
  int result; // r0

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 )
    sub_165578(v2);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v3 )
    sub_165578(v3);
  result = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  return result;
}


// ======================================================================
