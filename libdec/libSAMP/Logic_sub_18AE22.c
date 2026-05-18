// ADDR: 0x18b064
// SYMBOL: sub_18B064
int __fastcall sub_18B064(int a1, int a2)
{
  int v2; // r5
  int v4; // r0
  int v5; // r1
  int result; // r0

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 >= 1 )
  {
    j_memmove((void *)(a2 + 10), (const void *)(a2 + 8), 2 * v2);
    if ( *(_BYTE *)a2 )
    {
      j_memmove((void *)(a2 + 76), (const void *)(a2 + 72), 4 * v2);
      goto LABEL_8;
    }
    goto LABEL_6;
  }
  if ( !*(_BYTE *)a2 && !v2 )
  {
LABEL_6:
    v4 = v2;
    do
    {
      *(_DWORD *)(a2 + 4 * v4 + 212) = *(_DWORD *)(a2 + 4 * v4 + 208);
      v5 = v4-- + 1;
    }
    while ( v5 > 1 );
  }
LABEL_8:
  result = v2 + 1;
  *(_DWORD *)(a2 + 4) = v2 + 1;
  return result;
}


// ======================================================================
// ADDR: 0x18b0ba
// SYMBOL: sub_18B0BA
int __fastcall sub_18B0BA(int a1, int a2)
{
  int v2; // r5
  void *v4; // r0
  const void *v5; // r1
  int result; // r0

  v2 = *(_DWORD *)(a2 + 4);
  if ( v2 >= 2 )
    j_memmove((void *)(a2 + 8), (const void *)(a2 + 10), 2 * v2 - 2);
  if ( *(_BYTE *)a2 )
  {
    if ( v2 >= 1 )
    {
      v4 = (void *)(a2 + 72);
      v5 = (const void *)(a2 + 76);
LABEL_8:
      j_memmove(v4, v5, 4 * v2);
    }
  }
  else if ( v2 >= 1 )
  {
    v4 = (void *)(a2 + 208);
    v5 = (const void *)(a2 + 212);
    goto LABEL_8;
  }
  result = v2 - 1;
  *(_DWORD *)(a2 + 4) = v2 - 1;
  return result;
}


// ======================================================================
