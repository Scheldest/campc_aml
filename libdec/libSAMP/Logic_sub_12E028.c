// ADDR: 0x12e0ba
// SYMBOL: sub_12E0BA
int __fastcall sub_12E0BA(unsigned int **a1)
{
  unsigned int v2; // r0
  unsigned int *v3; // r1
  unsigned int *v5; // [sp+0h] [bp-18h] BYREF
  unsigned int *v6; // [sp+4h] [bp-14h] BYREF

  v2 = **a1;
  __dmb(0xBu);
  if ( v2 != 1 )
  {
    sub_12E104(&v5, *a1 + 1, 0);
    v3 = *a1;
    *a1 = v5;
    v5 = 0;
    v6 = v3;
    sub_12DFE0(&v6);
    sub_12DFE0(&v5);
  }
  return (int)(*a1 + 1);
}


// ======================================================================
