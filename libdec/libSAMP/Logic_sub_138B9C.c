// ADDR: 0x138bea
// SYMBOL: sub_138BEA
_DWORD *__fastcall sub_138BEA(int a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // r1
  _DWORD *v5; // r4
  int v6; // r5
  _DWORD *v7; // r10
  _DWORD *v9; // r0

  v4 = (_DWORD *)(a1 + 4);
  v5 = *(_DWORD **)(a1 + 4);
  if ( v5 )
  {
    v6 = a1 + 8;
    v7 = (_DWORD *)(a1 + 4);
    while ( 1 )
    {
      if ( sub_138CD2(v6, a3, v5 + 4) )
      {
        v9 = (_DWORD *)*v5;
        if ( !*v5 )
        {
          *a2 = v5;
          return v5;
        }
      }
      else
      {
        if ( !sub_138CD2(v6, v5 + 4, a3) )
        {
          *a2 = v5;
          return v7;
        }
        v4 = v5 + 1;
        v9 = (_DWORD *)v5[1];
        if ( !v9 )
        {
          *a2 = v5;
          return v4;
        }
        ++v5;
      }
      v7 = v5;
      v5 = v9;
    }
  }
  *a2 = v4;
  return v4;
}


// ======================================================================
// ADDR: 0x138c5a
// SYMBOL: sub_138C5A
int __fastcall sub_138C5A(int a1, int a2, int a3, int *a4)
{
  int v7; // r0
  int v8; // r1
  int v9; // r5
  int result; // r0

  v7 = operator new(0x24u);
  v8 = *a4;
  v9 = v7;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v7;
  *(_DWORD *)(a1 + 4) = a2 + 4;
  std::string::basic_string(v7 + 16, v8);
  result = 1;
  *(_DWORD *)(v9 + 28) = 0;
  *(_DWORD *)(v9 + 32) = 0;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x138ca8
// SYMBOL: sub_138CA8
int __fastcall sub_138CA8(int **a1, int a2, int **a3, int *a4)
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
