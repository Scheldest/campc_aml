// ADDR: 0xf894a
// SYMBOL: sub_F894A
int __fastcall sub_F894A(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        arg6_F894A a6,
        int a7,
        int a8,
        arg9_F894A a9,
        int a10,
        int a11,
        arg12_F894A a12,
        int a13)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    result = *(_DWORD *)(result + 20);
    if ( result )
    {
      *(arg12_F894A *)(result + 48) = a12;
      *(_DWORD *)(result + 56) = a13;
      *(arg9_F894A *)(result + 32) = a9;
      *(_DWORD *)(result + 40) = a10;
      *(arg6_F894A *)(result + 16) = a6;
      *(_DWORD *)(result + 24) = a7;
      *(_DWORD *)result = a2;
      *(_DWORD *)(result + 4) = a3;
      *(_DWORD *)(result + 8) = a4;
      result += 12;
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0xf8c14
// SYMBOL: sub_F8C14
int *__fastcall sub_F8C14(int a1)
{
  int *result; // r0
  int v3; // r2
  bool v4; // zf

  result = *(int **)(a1 + 4);
  if ( result )
  {
    v3 = *result;
    v4 = *result == dword_23DF24 + 6716708;
    if ( *result != dword_23DF24 + 6716708 )
    {
      v3 = result[6];
      v4 = v3 == 0;
    }
    if ( !v4 )
    {
      result = (int *)result[5];
      if ( result )
      {
        ((void (__fastcall *)(int *, int))(dword_23DF24 + 4517359))(result, *(_DWORD *)(v3 + 4) + 16);
        return (int *)((int (__fastcall *)(_DWORD))(dword_23DF24 + 4112361))(*(_DWORD *)(a1 + 4));
      }
    }
  }
  return result;
}


// ======================================================================
