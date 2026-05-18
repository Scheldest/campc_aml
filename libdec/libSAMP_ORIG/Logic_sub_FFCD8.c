// ADDR: 0x1004f2
// SYMBOL: sub_1004F2
int __fastcall sub_1004F2(int a1, int *a2)
{
  char *v3; // r6
  void *v5; // r9
  int v6; // r10
  char *v7; // r5
  char *v8; // r0
  int result; // r0

  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)(a1 + 8) )
  {
    v5 = *(void **)a1;
    v6 = (int)&v3[-*(_DWORD *)a1];
    if ( *(_DWORD *)a1 == a1 + 12 )
    {
      v8 = (char *)malloc(2 * v6);
      if ( !v8 )
        goto LABEL_9;
      v7 = v8;
      sub_1006C6(v5, (int)v3, v8);
      *(_DWORD *)a1 = v7;
    }
    else
    {
      v7 = (char *)realloc(*(void **)a1, 2 * v6);
      *(_DWORD *)a1 = v7;
      if ( !v7 )
LABEL_9:
        std::terminate();
    }
    v3 = &v7[4 * (v6 >> 2)];
    *(_DWORD *)(a1 + 4) = v3;
    *(_DWORD *)(a1 + 8) = &v7[4 * (v6 >> 1)];
  }
  result = *a2;
  *(_DWORD *)(a1 + 4) = v3 + 4;
  *(_DWORD *)v3 = result;
  return result;
}


// ======================================================================
// ADDR: 0x1006c6
// SYMBOL: sub_1006C6
_BYTE *__fastcall sub_1006C6(_BYTE *src, _BYTE *a2, void *dest)
{
  if ( a2 != src )
    return j_memmove(dest, src, a2 - src);
  return src;
}


// ======================================================================
// ADDR: 0x1035b8
// SYMBOL: sub_1035B8
int __fastcall sub_1035B8(int a1, int *a2)
{
  char *v3; // r6
  void *v5; // r9
  int v6; // r10
  char *v7; // r5
  char *v8; // r0
  int result; // r0

  v3 = *(char **)(a1 + 4);
  if ( v3 == *(char **)(a1 + 8) )
  {
    v5 = *(void **)a1;
    v6 = (int)&v3[-*(_DWORD *)a1];
    if ( *(_DWORD *)a1 == a1 + 12 )
    {
      v8 = (char *)malloc(2 * v6);
      if ( !v8 )
        goto LABEL_9;
      v7 = v8;
      sub_10370C(v5, (int)v3, v8);
      *(_DWORD *)a1 = v7;
    }
    else
    {
      v7 = (char *)realloc(*(void **)a1, 2 * v6);
      *(_DWORD *)a1 = v7;
      if ( !v7 )
LABEL_9:
        std::terminate();
    }
    v3 = &v7[4 * (v6 >> 2)];
    *(_DWORD *)(a1 + 4) = v3;
    *(_DWORD *)(a1 + 8) = &v7[4 * (v6 >> 1)];
  }
  result = *a2;
  *(_DWORD *)(a1 + 4) = v3 + 4;
  *(_DWORD *)v3 = result;
  return result;
}


// ======================================================================
