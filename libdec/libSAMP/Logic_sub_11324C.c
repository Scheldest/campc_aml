// ADDR: 0x1132fc
// SYMBOL: sub_1132FC
int __fastcall sub_1132FC(int **a1, int a2, int **a3, int *a4)
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
// ADDR: 0x11340c
// SYMBOL: sub_11340C
void __fastcall sub_11340C(int a1, const std::nothrow_t *a2)
{
  void *v2; // r4

  v2 = *(void **)a1;
  *(_DWORD *)a1 = a2;
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      sub_113328((int)v2 + 20);
    operator delete(v2, a2);
  }
}


// ======================================================================
