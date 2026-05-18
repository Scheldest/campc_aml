// ADDR: 0x13cb90
// SYMBOL: sub_13CB90
int __fastcall sub_13CB90(int a1, int a2, int a3)
{
  int *v5; // r0
  int *v6; // r1
  int v7; // r2
  int v9; // [sp+0h] [bp-10h] BYREF
  int v10; // [sp+4h] [bp-Ch]

  v5 = *(int **)(a1 + 96);
  v6 = *(int **)(a1 + 100);
  v9 = a2;
  v10 = a3;
  if ( v5 == v6 )
  {
    sub_13CCEC(a1 + 92, &v9);
  }
  else
  {
    v7 = v10;
    *v5 = v9;
    v5[1] = v7;
    *(_DWORD *)(a1 + 96) = v5 + 2;
  }
  return sub_12BDF6(a1, a2);
}


// ======================================================================
