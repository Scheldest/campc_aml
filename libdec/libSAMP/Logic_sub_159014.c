// ADDR: 0x158f60
// SYMBOL: sub_158F60
int __fastcall sub_158F60(int a1)
{
  int v2; // r0

  if ( *(_BYTE *)(a1 + 16) )
  {
    v2 = sub_158FC0(a1 + 36, 0);
    *(_DWORD *)(a1 + 40) = 0;
    sub_164B58(v2);
  }
  sub_158FC0(a1 + 36, 0);
  *(_DWORD *)a1 = &off_22F770;
  sub_15BC16(a1 + 24);
  return a1;
}


// ======================================================================
