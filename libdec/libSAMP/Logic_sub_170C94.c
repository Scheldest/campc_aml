// ADDR: 0x170e34
// SYMBOL: sub_170E34
int __fastcall sub_170E34(_BYTE *a1)
{
  int i; // r4
  int v2; // r5
  int v3; // r0
  int v4; // r1

  i = 0;
  v2 = dword_381B58;
  v3 = sub_16560C(a1, 0, 0);
  v4 = *(_DWORD *)(v2 + 11528);
  if ( v4 >= 1 )
  {
    for ( i = *(_DWORD *)(v2 + 11536); *(_DWORD *)(i + 4) != v3; i += 24 )
    {
      if ( !--v4 )
        return 0;
    }
  }
  return i;
}


// ======================================================================
