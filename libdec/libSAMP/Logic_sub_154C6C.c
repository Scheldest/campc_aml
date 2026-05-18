// ADDR: 0x154cdc
// SYMBOL: sub_154CDC
int __fastcall sub_154CDC(int a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r0

  v2 = **(_DWORD **)(a1 + 92);
  if ( sub_157B34() )
  {
    v3 = 1;
    if ( !v2 && *(_DWORD *)(a1 + 88) )
    {
      v3 = 1;
      sub_154D48(a1, 1);
    }
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 88);
    v3 = 0;
    *(_BYTE *)(a1 + 124) = 0;
    if ( v2 && v4 )
    {
      v3 = 0;
      sub_154D48(a1, 0);
    }
  }
  return v3;
}


// ======================================================================
