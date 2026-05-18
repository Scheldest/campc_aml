// ADDR: 0xf7a12
// SYMBOL: sub_F7A12
int __fastcall sub_F7A12(int **a1, int a2, int **a3, int *a4)
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
// ADDR: 0xf7a3c
// SYMBOL: sub_F7A3C
void __fastcall sub_F7A3C(const std::nothrow_t **a1, const std::nothrow_t *a2)
{
  const std::nothrow_t *v2; // r4

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    if ( *((_BYTE *)a1 + 8) )
      sub_F7A5E((char *)v2 + 20);
    operator delete(v2, a2);
  }
}


// ======================================================================
