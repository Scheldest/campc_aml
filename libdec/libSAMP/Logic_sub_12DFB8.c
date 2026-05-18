// ADDR: 0x12e09a
// SYMBOL: sub_12E09A
int __fastcall sub_12E09A(int a1)
{
  int *v1; // r4
  int result; // r0
  int v3; // r5

  v1 = (int *)sub_12E0BA(a1 + 8);
  result = v1[1];
  v3 = *v1;
  while ( result != v3 )
    result = sub_12E1EA(result - 8);
  v1[1] = v3;
  return result;
}


// ======================================================================
