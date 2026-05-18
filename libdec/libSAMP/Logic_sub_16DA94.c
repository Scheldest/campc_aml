// ADDR: 0x165a4e
// SYMBOL: sub_165A4E
int sub_165A4E(int a1, char *a2, ...)
{
  va_list va; // [sp+10h] [bp-8h] BYREF

  va_start(va, a2);
  return sub_165A70(a1, a2, va);
}


// ======================================================================
// ADDR: 0x1721fc
// SYMBOL: sub_1721FC
void *__fastcall sub_1721FC(size_t *a1, signed int a2)
{
  void *result; // r0
  const void *v5; // r1
  size_t v6; // r6
  size_t v7; // r0

  result = (void *)a1[1];
  if ( (int)result < a2 )
  {
    if ( dword_381B58 )
      ++*(_DWORD *)(dword_381B58 + 880);
    result = ((void *(__fastcall *)(size_t))off_2390AC)(a2);
    v5 = (const void *)a1[2];
    v6 = (size_t)result;
    if ( v5 )
    {
      j_memcpy(result, v5, *a1);
      v7 = a1[2];
      if ( v7 )
      {
        if ( dword_381B58 )
          --*(_DWORD *)(dword_381B58 + 880);
      }
      result = (void *)off_2390B0(v7, dword_381B60);
    }
    a1[1] = a2;
    a1[2] = v6;
  }
  return result;
}


// ======================================================================
