// ADDR: 0xf7784
// SYMBOL: sub_F7784
int __fastcall sub_F7784(int a1, _DWORD *a2)
{
  const void *v4; // r1
  signed int v5; // r2
  void *v6; // r0
  const void *v7; // r1
  int v8; // r1
  int v9; // r1
  int result; // r0

  v4 = *(const void **)a1;
  v5 = *(_DWORD *)(a1 + 4) - *(_DWORD *)a1;
  v6 = (void *)(a2[1] - v5);
  a2[1] = v6;
  if ( v5 >= 1 )
  {
    j_memcpy(v6, v4, v5);
    v6 = (void *)a2[1];
  }
  v7 = *(const void **)a1;
  *(_DWORD *)a1 = v6;
  a2[1] = v7;
  v8 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = a2[2];
  a2[2] = v8;
  v9 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = a2[3];
  result = a2[1];
  a2[3] = v9;
  *a2 = result;
  return result;
}


// ======================================================================
