// ADDR: 0x18b7bc
// SYMBOL: sub_18B7BC
int __fastcall sub_18B7BC(int a1, int a2)
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
// ADDR: 0x18b82a
// SYMBOL: sub_18B82A
int __fastcall sub_18B82A(const void **a1, int a2, int a3)
{
  char *v4; // r5
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  char *v10; // r0
  void *v11; // r10
  char *v12; // r6
  __int64 v13; // r0
  int result; // r0

  v4 = (char *)a1[1];
  if ( v4 == a1[2] )
  {
    v7 = 2 * (_DWORD)v4;
    if ( !v4 )
      v7 = 16;
    a1[2] = (const void *)v7;
    v8 = v7 - (v7 & 0x3FFFFFFE);
    v9 = 4 * v7;
    if ( v8 )
      v9 = -1;
    v10 = (char *)operator new[](v9);
    v11 = (void *)*a1;
    v12 = v10;
    j_memcpy(v10, *a1, 4 * (_DWORD)v4);
    if ( v11 )
    {
      operator delete[](v11);
      v4 = (char *)a1[1];
    }
    *a1 = v12;
  }
  else
  {
    v12 = (char *)*a1;
  }
  j_memmove(&v12[4 * a3 + 4], &v12[4 * a3], 4 * (_DWORD)&v4[-a3]);
  v13 = *(_QWORD *)a1;
  *((_DWORD *)*a1 + a3) = a2;
  result = HIDWORD(v13) + 1;
  a1[1] = (const void *)(HIDWORD(v13) + 1);
  return result;
}


// ======================================================================
