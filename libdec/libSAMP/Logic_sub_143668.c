// ADDR: 0x1484da
// SYMBOL: sub_1484DA
int __fastcall sub_1484DA(int a1)
{
  int i; // r6
  int v3; // r4
  int v4; // r0

  for ( i = 0; i != 1000; ++i )
  {
    if ( *(_BYTE *)(a1 + i + 4) )
    {
      v3 = a1 + 4 * i;
      v4 = *(_DWORD *)(v3 + 1004);
      if ( v4 )
      {
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
        *(_BYTE *)(a1 + i + 4) = 0;
        *(_DWORD *)(v3 + 1004) = 0;
      }
    }
  }
  return a1;
}


// ======================================================================
