// ADDR: 0x18cd80
// SYMBOL: sub_18CD80
int __fastcall sub_18CD80(int a1, int a2, int a3, int a4, char *cp, unsigned int a6)
{
  in_addr_t v9; // r0

  v9 = inet_addr(cp);
  return sub_18CCDC(v9, a2, a3, a4, v9, a6);
}


// ======================================================================
