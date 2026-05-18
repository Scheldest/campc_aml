// ADDR: 0x87abc
// SYMBOL: sub_87ABC
int __fastcall sub_87ABC(const void **a1, int a2, int a3, int a4)
{
  char *v5; // r5
  int v9; // r0
  int v10; // r1
  unsigned int v11; // r0
  char *v12; // r0
  void *v13; // r10
  char *v14; // r6
  _DWORD *v15; // r0
  int result; // r0

  v5 = (char *)a1[1];
  if ( v5 == a1[2] )
  {
    v9 = 2 * (_DWORD)v5;
    if ( !v5 )
      v9 = 16;
    a1[2] = (const void *)v9;
    v10 = v9 - (v9 & 0x1FFFFFFE);
    v11 = 8 * v9;
    if ( v10 )
      v11 = -1;
    v12 = (char *)operator new[](v11);
    v13 = (void *)*a1;
    v14 = v12;
    j_memcpy(v12, *a1, 8 * (_DWORD)v5);
    if ( v13 )
    {
      operator delete[](v13);
      v5 = (char *)a1[1];
    }
    *a1 = v14;
  }
  else
  {
    v14 = (char *)*a1;
  }
  j_memmove(&v14[8 * a4 + 8], &v14[8 * a4], 8 * (_DWORD)&v5[-a4]);
  v15 = *a1;
  *((_DWORD *)*a1 + 2 * a4) = a2;
  v15[2 * a4 + 1] = a3;
  result = (int)a1[1] + 1;
  a1[1] = (const void *)result;
  return result;
}


// ======================================================================
