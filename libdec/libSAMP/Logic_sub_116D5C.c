// ADDR: 0x117614
// SYMBOL: sub_117614
char *__fastcall sub_117614(int a1, unsigned __int8 *a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r4
  int v5; // r5
  unsigned int v6; // r1
  int v7; // lr
  size_t v8; // r2
  unsigned __int8 *v9; // r1
  unsigned __int8 *v10; // r3
  char *result; // r0

  v3 = *a2;
  v5 = a1 + 16;
  v4 = *(unsigned __int8 *)(a1 + 16);
  v6 = *((_DWORD *)a2 + 1);
  v7 = v3 & 1;
  v8 = *(_DWORD *)(a1 + 20);
  if ( (v3 & 1) == 0 )
    v6 = v3 >> 1;
  if ( (v4 & 1) == 0 )
    v8 = v4 >> 1;
  if ( v8 != v6 )
    return (char *)std::string::operator=(v5);
  v9 = (unsigned __int8 *)*((_DWORD *)a2 + 2);
  v10 = (unsigned __int8 *)(a1 + 17);
  result = *(char **)(a1 + 24);
  if ( !v7 )
    v9 = a2 + 1;
  if ( (v4 & 1) != 0 )
  {
    if ( !v8 )
      return result;
    result = (char *)memcmp(result, v9, v8);
    if ( !result )
      return result;
    return (char *)std::string::operator=(v5);
  }
  result = (char *)(v5 + 1);
  if ( v8 )
  {
    result = (char *)(v4 >> 1);
    while ( *v10 == *v9 )
    {
      ++v9;
      ++v10;
      if ( !--result )
        return result;
    }
    return (char *)std::string::operator=(v5);
  }
  return result;
}


// ======================================================================
