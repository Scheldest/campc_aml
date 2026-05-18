// ADDR: 0x159612
// SYMBOL: sub_159612
int __fastcall sub_159612(int a1, int a2, int a3)
{
  int v5; // r6
  int v7; // [sp+0h] [bp-18h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 1065353216;
  if ( a3 )
  {
    v5 = 8 * a3;
    do
    {
      sub_1596B2(&v7, a1, a2, a2);
      v5 -= 8;
      a2 += 8;
    }
    while ( v5 );
  }
  return a1;
}


// ======================================================================
