// ADDR: 0x12e32a
// SYMBOL: sub_12E32A
int __fastcall sub_12E32A(int **a1, int a2, int **a3, int *a4)
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
// ADDR: 0x12e354
// SYMBOL: sub_12E354
int __fastcall sub_12E354(int a1)
{
  _DWORD *v2; // r0
  int result; // r0

  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_22DBA0;
  v2 = (_DWORD *)operator new(0x10u);
  v2[2] = 0;
  v2[3] = 0;
  *v2 = 1;
  v2[1] = 0;
  *(_DWORD *)(a1 + 8) = v2;
  result = a1;
  *(_BYTE *)(a1 + 12) = 0;
  return result;
}


// ======================================================================
// ADDR: 0x12e39c
// SYMBOL: sub_12E39C
void __fastcall sub_12E39C(int a1, const std::nothrow_t *a2)
{
  _DWORD *v2; // r4

  v2 = *(_DWORD **)a1;
  *(_DWORD *)a1 = a2;
  if ( v2 )
  {
    if ( *(_BYTE *)(a1 + 8) )
      sub_12DF78(v2 + 5);
    operator delete(v2, a2);
  }
}


// ======================================================================
