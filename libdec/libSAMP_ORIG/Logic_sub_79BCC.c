// ADDR: 0x86eca
// SYMBOL: sub_86ECA
int __fastcall sub_86ECA(int a1)
{
  int v1; // r1
  int v3; // r0
  int v4; // r6
  const void *v5; // r5
  int v6; // r8
  void *v7; // r0
  int v8; // r0
  int result; // r0

  v1 = *(_DWORD *)a1;
  v3 = *(_DWORD *)a1 + 1;
  if ( v1 >= 0 )
  {
    v4 = *(_DWORD *)(a1 + 4);
    if ( (v4 - 1) >> 3 < (int)((unsigned int)v1 >> 3) )
    {
      v5 = *(const void **)(a1 + 12);
      v6 = 2 * v3;
      if ( v5 == (const void *)(a1 + 17) )
      {
        if ( (unsigned int)v3 > 0x400 )
        {
          v7 = malloc((2 * v3 + 7) >> 3);
          *(_DWORD *)(a1 + 12) = v7;
          j_memcpy(v7, v5, (v4 + 7) >> 3);
        }
      }
      else
      {
        *(_DWORD *)(a1 + 12) = realloc(*(void **)(a1 + 12), (2 * v3 + 7) >> 3);
      }
      v3 = v6;
    }
  }
  if ( v3 > *(_DWORD *)(a1 + 4) )
    *(_DWORD *)(a1 + 4) = v3;
  v8 = *(_DWORD *)a1;
  if ( !(*(_DWORD *)a1 << 29) )
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + (v8 >> 3)) = 0;
    v8 = *(_DWORD *)a1;
  }
  result = v8 + 1;
  *(_DWORD *)a1 = result;
  return result;
}


// ======================================================================
