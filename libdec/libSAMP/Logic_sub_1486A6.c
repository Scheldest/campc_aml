// ADDR: 0x1024bc
// SYMBOL: sub_1024BC
int __fastcall sub_1024BC(int a1)
{
  int i; // r5
  int v3; // r6
  int result; // r0
  bool v5; // zf

  for ( i = 0; i != 64; i += 4 )
  {
    v3 = a1 + i;
    result = *(_DWORD *)(a1 + i + 172);
    v5 = result == 2;
    if ( result == 2 )
    {
      result = *(_DWORD *)(v3 + 44);
      v5 = result == 0;
    }
    if ( v5 )
    {
      result = sub_101598(
                 (_DWORD *)dword_23DF00,
                 *(char **)(v3 + 240),
                 *(_DWORD *)(v3 + 304),
                 *(_DWORD *)(v3 + 368),
                 0,
                 *(_DWORD *)(v3 + 432),
                 *(_DWORD *)(v3 + 496),
                 *(_DWORD *)(v3 + 560));
      *(_DWORD *)(v3 + 44) = result;
      *(_BYTE *)(a1 + 236) = 1;
    }
  }
  return result;
}


// ======================================================================
