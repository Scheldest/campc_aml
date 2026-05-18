// ADDR: 0x138f48
// SYMBOL: sub_138F48
int __fastcall sub_138F48(int result)
{
  int v1; // r1
  int v2; // r5
  int v3; // r4
  int v4; // r0

  v1 = *(_DWORD *)(result + 8);
  v2 = *(_DWORD *)(result + 4);
  if ( v1 != v2 )
  {
    v3 = result;
    do
    {
      v4 = *(_DWORD *)(v3 + 16);
      *(_DWORD *)(v3 + 8) = v1 - 60;
      result = sub_138F68(v4);
      v1 = *(_DWORD *)(v3 + 8);
    }
    while ( v1 != v2 );
  }
  return result;
}


// ======================================================================
