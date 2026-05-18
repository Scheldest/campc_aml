// ADDR: 0xde358
// SYMBOL: sub_DE358
int __fastcall sub_DE358(int a1, int a2, int a3, unsigned int a4, int a5)
{
  int v6; // r8
  unsigned int v7; // r5
  char v8; // r0
  int v9; // r6
  int v10; // r6
  int v11; // r0
  char v12; // r9
  int v13; // r1
  int v14; // r2
  int result; // r0

  v6 = a2 + 11;
  v7 = *(_DWORD *)a2 - a4;
  v8 = byte_91D40[*(_WORD *)(a2 + 9) & 0xF];
  if ( *(_DWORD *)a2 < a4 )
    v7 = 0;
  v9 = v7 >> v8;
  if ( v7 >> v8 )
    a1 = sub_DD992(a1, v9, v6);
  v10 = v7 - v9;
  if ( *(_DWORD *)a5 )
  {
    v11 = *(_DWORD *)(a1 + 8);
    v12 = byte_91D45[*(_DWORD *)a5];
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
  sub_DCF30(a1, *(char **)(a5 + 4), (char *)(*(_DWORD *)(a5 + 4) + 3));
  result = a1;
  if ( v10 )
    return sub_DD992(a1, v10, v6);
  return result;
}


// ======================================================================
