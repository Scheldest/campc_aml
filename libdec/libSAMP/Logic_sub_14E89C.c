// ADDR: 0x1020fc
// SYMBOL: sub_1020FC
int __fastcall sub_1020FC(int a1)
{
  int result; // r0

  sub_F89BC(a1, 0, 0, 0);
  sub_F8A08(a1, 0, 0, 0);
  result = *(_BYTE *)(a1 + 708) & 0xFE;
  *(_BYTE *)(a1 + 708) = result;
  return result;
}


// ======================================================================
