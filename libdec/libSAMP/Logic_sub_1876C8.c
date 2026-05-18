// ADDR: 0x17e0c0
// SYMBOL: sub_17E0C0
int __fastcall sub_17E0C0(int a1, char *src)
{
  *(_BYTE *)(a1 + 600) = 1;
  sub_18DD38(a1, 0, 0x10u, src);
  sub_18DD38(a1 + 288, 1, 0x10u, src);
  return sub_18DE00(a1 + 576, 1, 0);
}


// ======================================================================
