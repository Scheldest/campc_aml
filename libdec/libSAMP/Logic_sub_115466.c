// ADDR: 0x11548e
// SYMBOL: sub_11548E
int __fastcall sub_11548E(int a1)
{
  int *v1; // r4
  int result; // r0
  int v3; // r5

  v1 = (int *)sub_111E0C((int **)(a1 + 8));
  result = v1[1];
  v3 = *v1;
  while ( result != v3 )
    result = sub_111CE6(result - 8);
  v1[1] = v3;
  return result;
}


// ======================================================================
