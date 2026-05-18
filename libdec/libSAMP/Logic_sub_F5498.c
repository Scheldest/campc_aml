// ADDR: 0xf5518
// SYMBOL: sub_F5518
int __fastcall sub_F5518(int **a1, int a2, int **a3, int *a4)
{
  int *v5; // r0
  int result; // r0

  *a4 = 0;
  a4[1] = 0;
  a4[2] = a2;
  *a3 = a4;
  v5 = (int *)**a1;
  if ( v5 )
  {
    *a1 = v5;
    a4 = *a3;
  }
  sub_EA2D2(a1[1], a4);
  result = (int)a1[2] + 1;
  a1[2] = (int *)result;
  return result;
}


// ======================================================================
