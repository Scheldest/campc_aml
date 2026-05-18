// ADDR: 0xf7806
// SYMBOL: sub_F7806
_DWORD *__fastcall sub_F7806(int a1, _DWORD *a2, int a3)
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
      if ( sub_F78EE(v6, a3, v5 + 4) )
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
        if ( !sub_F78EE(v6, v5 + 4, a3) )
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
// ADDR: 0xf7876
// SYMBOL: sub_F7876
int __fastcall sub_F7876(int a1, int a2, int a3)
{
  int v6; // r6
  int result; // r0

  v6 = operator new(0x20u);
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 4) = a2 + 4;
  std::string::basic_string(v6 + 16, a3);
  *(_BYTE *)(a1 + 8) = 1;
  result = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(v6 + 28) = result;
  return result;
}


// ======================================================================
// ADDR: 0xf78c4
// SYMBOL: sub_F78C4
int __fastcall sub_F78C4(int **a1, int a2, int **a3, int *a4)
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
