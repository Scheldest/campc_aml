// ADDR: 0x15bc28
// SYMBOL: sub_15BC28
int __fastcall sub_15BC28(int a1, int a2, size_t a3)
{
  size_t v4; // r0
  size_t v5; // r5
  int v6; // r9
  bool v7; // cf
  size_t v8; // r0
  char *v9; // r8
  unsigned int v10; // r6
  void *v11; // r0
  size_t v12; // r5
  int result; // r0

  v4 = *(_DWORD *)a1;
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 4);
  if ( v4 < a3 )
    v5 = v4;
  v7 = a3 >= v4;
  v8 = a3 - v4;
  if ( !v7 )
    v8 = 0;
  __dmb(0xBu);
  v9 = (char *)(a2 + v8);
  v10 = *(_DWORD *)a1 - v6;
  v11 = (void *)(*(_DWORD *)(a1 + 8) + v6);
  if ( v5 <= v10 )
  {
    j_memcpy(v11, v9, v5);
    v12 = v5 + v6;
  }
  else
  {
    j_memcpy(v11, v9, *(_DWORD *)a1 - v6);
    v12 = v5 - v10;
    j_memcpy(*(void **)(a1 + 8), &v9[v10], v12);
  }
  __dmb(0xBu);
  *(_DWORD *)(a1 + 4) = v12;
  __dmb(0xBu);
  result = *(_DWORD *)(a1 + 4);
  __dmb(0xBu);
  return result;
}


// ======================================================================
