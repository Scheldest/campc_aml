// ADDR: 0x149074
// SYMBOL: sub_149074
int __fastcall sub_149074(int a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r5
  int i; // r6
  int result; // r0
  int v7; // r4

  v2 = *(_DWORD *)(a1 + 5052);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 28);
    if ( v3 )
      sub_1057CC(v3);
  }
  v4 = a1 + 4020;
  for ( i = 0; i != 1004; ++i )
  {
    result = *(unsigned __int8 *)(v4 + i);
    if ( *(_BYTE *)(v4 + i) )
    {
      result = *(_DWORD *)(v4 + 4 * i - 4016);
      if ( result )
      {
        result = *(_DWORD *)result;
        if ( result )
        {
          v7 = *(_DWORD *)(result + 296);
          if ( v7 )
          {
            sub_106B84(*(_DWORD *)(result + 296));
            result = sub_1057CC(v7);
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
