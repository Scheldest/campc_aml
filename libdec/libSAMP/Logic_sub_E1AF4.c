// ADDR: 0xe1d84
// SYMBOL: sub_E1D84
int __fastcall sub_E1D84(char *a1, int a2)
{
  int v3; // r1
  int v5; // r0
  char v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r5
  int v12; // r0
  char v13; // r6
  int v14; // r1
  int v15; // r2

  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
  {
    v5 = *(_DWORD *)(a2 + 8);
    v6 = byte_91D45[v3];
    v7 = v5 + 1;
    if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v5 + 1) )
    {
      (**(void (__fastcall ***)(int))a2)(a2);
      v5 = *(_DWORD *)(a2 + 8);
      v7 = v5 + 1;
    }
    v8 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a2 + 8) = v7;
    *(_BYTE *)(v8 + v5) = v6;
  }
  v9 = sub_E1E70(a2, *((_DWORD *)a1 + 1), *((_DWORD *)a1 + 2), 1, (unsigned __int8)a1[12]);
  v10 = *((_DWORD *)a1 + 4);
  v11 = v9;
  if ( v10 >= 1 )
    v11 = sub_DE834(v9, v10, a1 + 20);
  v12 = *(_DWORD *)(v11 + 8);
  v13 = a1[21];
  v14 = v12 + 1;
  if ( *(_DWORD *)(v11 + 12) < (unsigned int)(v12 + 1) )
  {
    (**(void (__fastcall ***)(int))v11)(v11);
    v12 = *(_DWORD *)(v11 + 8);
    v14 = v12 + 1;
  }
  v15 = *(_DWORD *)(v11 + 4);
  *(_DWORD *)(v11 + 8) = v14;
  *(_BYTE *)(v15 + v12) = v13;
  return sub_DE870(*((_DWORD *)a1 + 6), v11);
}


// ======================================================================
// ADDR: 0xe1e10
// SYMBOL: sub_E1E10
int __fastcall sub_E1E10(int a1, int a2, int a3, unsigned int a4, char *a5)
{
  int v6; // r5
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r4
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  result = sub_E1D84(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xe1ec8
// SYMBOL: sub_E1EC8
int __fastcall sub_E1EC8(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r5
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r4
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  result = sub_E1F28(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
// ADDR: 0xe2060
// SYMBOL: sub_E2060
int __fastcall sub_E2060(int a1, int a2, int a3, unsigned int a4, int **a5)
{
  int v6; // r8
  unsigned int v7; // r6
  char v8; // r0
  int v9; // r9
  int v10; // r1
  int v11; // r0
  char v12; // r10
  int v13; // r1
  int v14; // r2
  int v15; // r9
  int result; // r0
  int v17; // r1

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = **a5;
  if ( v10 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = byte_91D45[v10];
    v13 = v11 + 1;
    if ( *(_DWORD *)(a1 + 12) < (unsigned int)(v11 + 1) )
    {
      (**(void (__fastcall ***)(int))a1)(a1);
      v11 = *(_DWORD *)(a1 + 8);
      v13 = v11 + 1;
    }
    v14 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 8) = v13;
    *(_BYTE *)(v14 + v11) = v12;
  }
  v15 = v7 - v9;
  result = sub_E211C(a1, *a5[1], *a5[2], *a5[3], *(unsigned __int8 *)a5[4], a5[5]);
  v17 = *a5[6];
  if ( v17 >= 1 )
    result = sub_DE834(result, v17, (char *)a5[7]);
  if ( v15 )
    return sub_DD992(result, v15, v6);
  return result;
}


// ======================================================================
// ADDR: 0xe21b0
// SYMBOL: sub_E21B0
int __fastcall sub_E21B0(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r5
  bool v7; // cf
  unsigned int v8; // r3
  char v9; // r0
  int v10; // r4
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 >= a4;
  v8 = *(_DWORD *)a2 - a4;
  v9 = byte_91CE0[*(_WORD *)(a2 + 9) & 0xF];
  if ( !v7 )
    v8 = 0;
  v10 = v8 - (v8 >> v9);
  if ( v8 >> v9 )
    a1 = sub_DD992(a1, v8 >> v9, v6);
  result = sub_E2210(a5, a1);
  if ( v10 )
    return sub_DD992(result, v10, v6);
  return result;
}


// ======================================================================
