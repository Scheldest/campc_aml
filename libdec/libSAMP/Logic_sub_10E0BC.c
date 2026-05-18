// ADDR: 0x10e0fa
// SYMBOL: sub_10E0FA
int __fastcall sub_10E0FA(int **a1, int *a2, _DWORD *a3, int **a4, int *a5)
{
  int v5; // r5
  int v6; // r9
  int *v7; // r3
  int *v8; // r5
  int *v9; // r6
  int *v10; // r6
  int **v11; // r5
  int v12; // r5
  int *v13; // r6
  int **v14; // t1
  int v15; // r6
  int *v16; // r3
  int **v17; // t1

  if ( a1 + 1 == (int **)a2 || (v5 = a2[4], v6 = *a5, *a5 < v5) )
  {
    v7 = (int *)*a2;
    if ( *a1 == a2 )
    {
      v9 = a2;
LABEL_17:
      if ( v7 )
      {
        *a3 = v9;
        return (int)(v9 + 1);
      }
      else
      {
        *a3 = a2;
      }
      return (int)a2;
    }
    if ( v7 )
    {
      v8 = (int *)*a2;
      do
      {
        v9 = v8;
        v8 = (int *)v8[1];
      }
      while ( v8 );
    }
    else
    {
      v12 = (int)(a2 + 2);
      if ( *(int **)a2[2] == a2 )
      {
        do
        {
          v13 = *(int **)v12;
          v14 = *(int ***)(*(_DWORD *)v12 + 8);
          v12 = *(_DWORD *)v12 + 8;
        }
        while ( *v14 == v13 );
      }
      v9 = *(int **)v12;
    }
    if ( v9[4] < *a5 )
      goto LABEL_17;
    return sub_10E246();
  }
  if ( v5 < v6 )
  {
    v10 = (int *)a2[1];
    if ( v10 )
    {
      do
      {
        v11 = (int **)v10;
        v10 = (int *)*v10;
      }
      while ( v10 );
    }
    else
    {
      v15 = (int)(a2 + 2);
      v11 = (int **)a2[2];
      if ( *v11 != a2 )
      {
        do
        {
          v16 = *(int **)v15;
          v17 = *(int ***)(*(_DWORD *)v15 + 8);
          v15 = *(_DWORD *)v15 + 8;
          v11 = v17;
        }
        while ( *v17 != v16 );
      }
    }
    if ( v11 == a1 + 1 || v6 < (int)v11[4] )
    {
      if ( a2[1] )
      {
        *a3 = v11;
        return (int)v11;
      }
      else
      {
        *a3 = a2++;
      }
      return (int)a2;
    }
    return sub_10E246();
  }
  *a3 = a2;
  *a4 = a2;
  return (int)a4;
}


// ======================================================================
// ADDR: 0x10e1cc
// SYMBOL: sub_10E1CC
int __fastcall sub_10E1CC(int a1, int a2, int *a3)
{
  int v6; // r0
  int v7; // t1
  int result; // r0

  v6 = operator new(0x20u);
  v7 = *a3;
  *(_BYTE *)(a1 + 8) = 0;
  *(_DWORD *)a1 = v6;
  *(_DWORD *)(a1 + 4) = a2 + 4;
  *(_DWORD *)(v6 + 16) = v7;
  std::string::basic_string(v6 + 20, a3 + 1);
  result = 1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}


// ======================================================================
// ADDR: 0x10e21c
// SYMBOL: sub_10E21C
int __fastcall sub_10E21C(int **a1, int a2, int **a3, int *a4)
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
