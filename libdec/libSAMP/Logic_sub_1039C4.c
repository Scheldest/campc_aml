// ADDR: 0x1641d4
// SYMBOL: sub_1641D4
int __fastcall sub_1641D4(unsigned int a1, const void *a2, size_t a3)
{
  mprotect((void *)(a1 & 0xFFFFF000), 0x1000u, 3);
  mprotect((void *)((a3 + a1) & 0xFFFFF000), 0x1000u, 3);
  j_memcpy((void *)a1, a2, a3);
  return sub_224388(a1, a3 + a1, 0);
}


// ======================================================================
