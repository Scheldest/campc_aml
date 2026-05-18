// ADDR: 0x17e6ee
// SYMBOL: sub_17E6EE
int __fastcall sub_17E6EE(int a1, int a2)
{
  int v3; // r5
  int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  _DWORD *v8; // r0
  void *v9; // r9
  _DWORD *v10; // r6
  int result; // r0

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == *(_DWORD *)(a1 + 8) )
  {
    v5 = 2 * v3;
    if ( !v3 )
      v5 = 16;
    *(_DWORD *)(a1 + 8) = v5;
    v6 = v5 - (v5 & 0x3FFFFFFE);
    v7 = 4 * v5;
    if ( v6 )
      v7 = -1;
    v8 = (_DWORD *)operator new[](v7);
    v9 = *(void **)a1;
    v10 = v8;
    j_memcpy(v8, *(const void **)a1, 4 * v3);
    if ( v9 )
    {
      operator delete[](v9);
      v3 = *(_DWORD *)(a1 + 4);
    }
    *(_DWORD *)a1 = v10;
  }
  else
  {
    v10 = *(_DWORD **)a1;
  }
  result = v3 + 1;
  v10[v3] = a2;
  *(_DWORD *)(a1 + 4) = v3 + 1;
  return result;
}


// ======================================================================
