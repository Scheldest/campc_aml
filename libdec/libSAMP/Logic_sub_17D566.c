// ADDR: 0x17d5ba
// SYMBOL: sub_17D5BA
int __fastcall sub_17D5BA(int result, int a2)
{
  int v2; // r4
  int v3; // r6
  const void *v4; // r5
  int v5; // r8
  void *v6; // r0

  if ( a2 >= 1 )
  {
    v2 = result;
    result = *(_DWORD *)result + a2;
    if ( result >= 1 )
    {
      v3 = *(_DWORD *)(v2 + 4);
      if ( (v3 - 1) >> 3 < (int)((unsigned int)(result - 1) >> 3) )
      {
        v4 = *(const void **)(v2 + 12);
        v5 = 2 * result;
        if ( v4 == (const void *)(v2 + 17) )
        {
          if ( (unsigned int)result > 0x400 )
          {
            v6 = malloc((2 * result + 7) >> 3);
            *(_DWORD *)(v2 + 12) = v6;
            j_memcpy(v6, v4, (v3 + 7) >> 3);
          }
        }
        else
        {
          *(_DWORD *)(v2 + 12) = realloc(*(void **)(v2 + 12), (2 * result + 7) >> 3);
        }
        result = v5;
      }
    }
    if ( result > *(_DWORD *)(v2 + 4) )
      *(_DWORD *)(v2 + 4) = result;
  }
  return result;
}


// ======================================================================
