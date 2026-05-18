// ADDR: 0xe1e70
// SYMBOL: sub_E1E70
int __fastcall sub_E1E70(int a1, char *a2, int a3, int a4, int a5)
{
  char *v5; // r5
  int v8; // r0
  int v9; // r4
  int v10; // r0
  unsigned int v11; // r2
  int v12; // r1
  int v13; // r2

  v5 = &a2[a4];
  v8 = sub_DFAB8(a2, &a2[a4], a1);
  v9 = v8;
  if ( a5 )
  {
    v11 = *(_DWORD *)(v8 + 12);
    v10 = *(_DWORD *)(v8 + 8);
    v12 = v10 + 1;
    if ( v11 < v10 + 1 )
    {
      (**(void (__fastcall ***)(int))v9)(v9);
      v10 = *(_DWORD *)(v9 + 8);
      v12 = v10 + 1;
    }
    v13 = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v9 + 8) = v12;
    *(_BYTE *)(v13 + v10) = a5;
    return sub_DFAB8(v5, &a2[a3], v9);
  }
  return v9;
}


// ======================================================================
