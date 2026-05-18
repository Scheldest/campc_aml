// ADDR: 0x1595f2
// SYMBOL: sub_1595F2
int __fastcall sub_1595F2(int result)
{
  int v1; // r1
  int v2; // r5
  int v3; // r4
  int v4; // r0
  int v5; // r1

  v1 = *(_DWORD *)(result + 8);
  v2 = *(_DWORD *)(result + 4);
  if ( v1 != v2 )
  {
    v3 = result;
    do
    {
      v4 = *(_DWORD *)(v3 + 16);
      v5 = v1 - 40;
      *(_DWORD *)(v3 + 8) = v5;
      sub_157F84(v4, v5);
      v1 = *(_DWORD *)(v3 + 8);
    }
    while ( v1 != v2 );
  }
  return result;
}


// ======================================================================
