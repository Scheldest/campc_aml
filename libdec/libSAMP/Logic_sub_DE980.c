// ADDR: 0xde9e0
// SYMBOL: sub_DE9E0
int __fastcall sub_DE9E0(int **a1, int a2)
{
  int v4; // r1
  int v5; // r0
  char v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r5
  int v10; // r0
  char *v11; // r6
  int v12; // r1
  int v13; // r2
  char v14; // r3
  int v15; // r1

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
  v9 = sub_DEA74(a2, *a1[1], *a1[2], a1[3][1], a1[4]);
  if ( (*((_BYTE *)a1[5] + 6) & 8) != 0 )
  {
    v10 = *(_DWORD *)(v9 + 8);
    v11 = (char *)a1[6];
    v12 = v10 + 1;
    if ( *(_DWORD *)(v9 + 12) < (unsigned int)(v10 + 1) )
    {
      (**(void (__fastcall ***)(int))v9)(v9);
      v10 = *(_DWORD *)(v9 + 8);
      v12 = v10 + 1;
    }
    v13 = *(_DWORD *)(v9 + 4);
    v14 = *v11;
    *(_DWORD *)(v9 + 8) = v12;
    *(_BYTE *)(v13 + v10) = v14;
    v15 = *a1[7];
    if ( v15 >= 1 )
      return sub_DE834(v9, v15, (char *)a1[8]);
  }
  return v9;
}


// ======================================================================
