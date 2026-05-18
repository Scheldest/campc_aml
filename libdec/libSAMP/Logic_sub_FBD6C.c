// ADDR: 0xf613c
// SYMBOL: sub_F613C
int *__fastcall sub_F613C(unsigned int a1, int a2)
{
  unsigned int v3; // r9
  int *v4; // r5
  int v5; // r6
  int v6; // r8

  v3 = a2 * a1;
  v4 = (int *)operator new(0x14u);
  v5 = operator new[](v3);
  *v4 = v5;
  v6 = operator new[](a1);
  v4[1] = v6;
  v4[2] = a1;
  v4[3] = -1;
  v4[4] = 1;
  sub_22178C(v5, v3);
  if ( a1 )
    sub_22177C(v6, a1, 128);
  return v4;
}


// ======================================================================
// ADDR: 0x164190
// SYMBOL: sub_164190
int __fastcall sub_164190(int a1, int a2)
{
  return sub_224388(a1, a2, 0);
}


// ======================================================================
