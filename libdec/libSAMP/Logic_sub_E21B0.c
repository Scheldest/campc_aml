// ADDR: 0xe2210
// SYMBOL: sub_E2210
int __fastcall sub_E2210(int **a1, int a2)
{
  int v4; // r1
  int v5; // r0
  char v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r0
  char *v10; // r6
  int v11; // r1
  int v12; // r2
  char v13; // r3
  int v14; // r0
  char *v15; // r6
  int v16; // r1
  int v17; // r2
  char v18; // r3

  v4 = **a1;
  if ( v4 )
  {
    v5 = *(_DWORD *)(a2 + 8);
    v6 = byte_91D45[v4];
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
  v9 = *(_DWORD *)(a2 + 8);
  v10 = (char *)a1[1];
  v11 = v9 + 1;
  if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v9 + 1) )
  {
    (**(void (__fastcall ***)(int))a2)(a2);
    v9 = *(_DWORD *)(a2 + 8);
    v11 = v9 + 1;
  }
  v12 = *(_DWORD *)(a2 + 4);
  v13 = *v10;
  *(_DWORD *)(a2 + 8) = v11;
  *(_BYTE *)(v12 + v9) = v13;
  if ( *(_BYTE *)a1[2] )
  {
    v14 = *(_DWORD *)(a2 + 8);
    v15 = (char *)a1[3];
    v16 = v14 + 1;
    if ( *(_DWORD *)(a2 + 12) < (unsigned int)(v14 + 1) )
    {
      (**(void (__fastcall ***)(int))a2)(a2);
      v14 = *(_DWORD *)(a2 + 8);
      v16 = v14 + 1;
    }
    v17 = *(_DWORD *)(a2 + 4);
    v18 = *v15;
    *(_DWORD *)(a2 + 8) = v16;
    *(_BYTE *)(v17 + v14) = v18;
    a2 = sub_DE834(a2, *a1[4], (char *)a1[1]);
    sub_DCF30(a2, (char *)*a1[5], (char *)(*a1[6] + *a1[5]));
  }
  return a2;
}


// ======================================================================
