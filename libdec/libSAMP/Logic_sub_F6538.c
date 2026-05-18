// ADDR: 0x15ebd8
// SYMBOL: sub_15EBD8
int __fastcall sub_15EBD8(int *a1, int a2)
{
  int result; // r0
  int *i; // r0
  int *j; // r4
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  result = *a1;
  if ( result )
  {
    v7[0] = a2;
    result = sub_15FAE4(result, v7);
    if ( result )
    {
      for ( i = *(int **)(sub_15E7CC(*a1, a2) + 8); i; i = (int *)*i )
      {
        if ( *((_BYTE *)i + 20) )
        {
          *(_DWORD *)(i[2] + 4) = i[7];
          *(_DWORD *)(i[6] + 8) = i[9];
        }
        if ( *((_BYTE *)i + 21) )
          *(_DWORD *)i[2] = i[8];
      }
      result = sub_15E7CC(*a1, a2);
      for ( j = *(int **)(result + 28); j; j = (int *)*j )
      {
        result = *((unsigned __int8 *)j + 12);
        if ( *((_BYTE *)j + 12) )
          result = (int)j_memcpy((void *)(j[2] + 16), j + 4, 0x40u);
      }
    }
  }
  return result;
}


// ======================================================================
