// ADDR: 0x164250
// SYMBOL: sub_164250
int __fastcall sub_164250(unsigned int a1, unsigned int a2, char a3, int a4)
{
  char v8; // r0
  char v9; // r1
  char v10; // r0

  mprotect((void *)(a1 & 0xFFFFF000), 0x1000u, 3);
  mprotect((void *)((a1 + 4) & 0xFFFFF000), 0x1000u, 3);
  v8 = 64;
  *(_BYTE *)(a1 + 2) = a2;
  if ( a4 )
    v8 = -64;
  *(_BYTE *)a1 = v8 | (a2 >> 12);
  if ( ((a2 >> 8) & 8) != 0 )
  {
    v9 = -10;
    v10 = a3 + 16 * BYTE1(a2) + 0x80;
  }
  else
  {
    v9 = -14;
    v10 = a3 + 16 * BYTE1(a2);
  }
  *(_BYTE *)(a1 + 1) = v9;
  *(_BYTE *)(a1 + 3) = v10;
  return sub_224388(a1, a1 + 4, 0);
}


// ======================================================================
