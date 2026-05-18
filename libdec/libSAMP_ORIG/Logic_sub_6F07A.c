// ADDR: 0x70ea2
// SYMBOL: sub_70EA2
char *__fastcall sub_70EA2(_DWORD *a1, int a2)
{
  void *v2; // r5
  size_t v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r9
  char *result; // r0

  v2 = (void *)a1[2];
  if ( v2 )
  {
    v5 = a1[4] - (_DWORD)v2 + ((unsigned int)(a1[4] - (_DWORD)v2 + 1) >> 1);
    v6 = a1[2];
  }
  else
  {
    if ( !*a1 )
    {
      v7 = operator new(1u);
      *a1 = v7;
      a1[1] = v7;
    }
    v5 = a1[5];
    v6 = 0;
  }
  v8 = a1[3] - v6;
  if ( v5 < v8 + 16 * a2 )
    v5 = v8 + 16 * a2;
  if ( v5 )
  {
    result = (char *)realloc(v2, v5);
  }
  else
  {
    free(v2);
    result = 0;
  }
  a1[4] = &result[v5];
  a1[2] = result;
  a1[3] = &result[v8];
  return result;
}


// ======================================================================
