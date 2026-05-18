// ADDR: 0x1869ca
// SYMBOL: sub_1869CA
char *__fastcall sub_1869CA(int a1, int a2, __int16 a3, int a4)
{
  int v5; // r4
  unsigned int v9; // r1
  unsigned int v10; // r0
  int v11; // r2
  _DWORD *v12; // r0
  void *v13; // r11
  _DWORD *v14; // r5
  char *result; // r0

  v5 = *(_DWORD *)(a1 + 4);
  if ( v5 == *(_DWORD *)(a1 + 8) )
  {
    v9 = 2 * v5;
    if ( !v5 )
      v9 = 16;
    v11 = (12 * (unsigned __int64)v9) >> 32;
    v10 = 12 * v9;
    *(_DWORD *)(a1 + 8) = v9;
    if ( !is_mul_ok(v9, 0xCu) )
      v11 = 1;
    if ( v11 )
      v10 = -1;
    v12 = (_DWORD *)operator new[](v10);
    v13 = *(void **)a1;
    v14 = v12;
    j_memcpy(v12, *(const void **)a1, 12 * v5);
    if ( v13 )
    {
      operator delete[](v13);
      v5 = *(_DWORD *)(a1 + 4);
    }
    *(_DWORD *)a1 = v14;
  }
  else
  {
    v14 = *(_DWORD **)a1;
  }
  *(_DWORD *)(a1 + 4) = v5 + 1;
  v14[3 * v5] = a2;
  result = (char *)&v14[3 * v5];
  *((_DWORD *)result + 2) = a4;
  *((_WORD *)result + 2) = a3;
  return result;
}


// ======================================================================
// ADDR: 0x186a4e
// SYMBOL: sub_186A4E
int __fastcall sub_186A4E(const void **a1, int a2, __int16 a3, int a4, int a5)
{
  char *v7; // r11
  int v9; // r2
  unsigned int v11; // r1
  unsigned int v12; // r0
  int v13; // r2
  char *v14; // r0
  void *v15; // r4
  char *v16; // r5
  int v17; // r4
  __int64 v18; // r0
  int result; // r0

  v7 = (char *)a1[1];
  v9 = a5;
  if ( v7 == a1[2] )
  {
    v11 = 2 * (_DWORD)v7;
    if ( !v7 )
      v11 = 16;
    v13 = (12 * (unsigned __int64)v11) >> 32;
    v12 = 12 * v11;
    a1[2] = (const void *)v11;
    if ( !is_mul_ok(v11, 0xCu) )
      v13 = 1;
    if ( v13 )
      v12 = -1;
    v14 = (char *)operator new[](v12);
    v15 = (void *)*a1;
    v16 = v14;
    j_memcpy(v14, *a1, 12 * (_DWORD)v7);
    if ( v15 )
    {
      operator delete[](v15);
      v7 = (char *)a1[1];
    }
    v9 = a5;
    *a1 = v16;
  }
  else
  {
    v16 = (char *)*a1;
  }
  v17 = 3 * v9;
  j_memmove(&v16[12 * v9 + 12], &v16[12 * v9], 12 * (_DWORD)&v7[-v9]);
  v18 = *(_QWORD *)a1;
  a1[1] = (char *)a1[1] + 1;
  *(_DWORD *)(v18 + 4 * v17) = a2;
  result = v18 + 4 * v17;
  *(_DWORD *)(result + 8) = a4;
  *(_WORD *)(result + 4) = a3;
  return result;
}


// ======================================================================
