// ADDR: 0x109c28
// SYMBOL: sub_109C28
int *__fastcall sub_109C28(int a1, int a2, int a3, int a4)
{
  int *result; // r0
  _DWORD *v9; // r0
  bool v10; // zf
  int v11; // r1

  result = *(int **)(a1 + 12);
  if ( result )
  {
    if ( sub_10837C(result) == 1
      || (result = *(int **)(a1 + 12)) != 0 && (result = (int *)sub_10837C(result), result == (int *)&byte_5) )
    {
      v9 = *(_DWORD **)(a1 + 12);
      v10 = (a3 | a2) == 0;
      if ( !(a3 | a2) )
        v10 = a4 == 0;
      if ( v10 && (v9[370] || *(_DWORD *)((char *)v9 + 1469) || v9[369]) )
      {
        return (int *)((int (__fastcall *)(_DWORD *))(dword_23DF24 + 5625169))(v9);
      }
      else
      {
        v9[370] = a2;
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + 1469) = a3;
        v11 = dword_23DF24;
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + 1476) = a4;
        return (int *)((int (__fastcall *)(_DWORD))(v11 + 5625879))(*(_DWORD *)(a1 + 12));
      }
    }
  }
  return result;
}


// ======================================================================
// ADDR: 0x109cc0
// SYMBOL: sub_109CC0
int __fastcall sub_109CC0(int a1, char a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
  {
    if ( sub_10837C((int *)result) == 1 )
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 12) + 1472) = a2 & 1;
      *(_BYTE *)(*(_DWORD *)(a1 + 12) + 1471) = (a2 & 2) != 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 12) + 1470) = (a2 & 4) != 0;
      result = *(_DWORD *)(a1 + 12);
      *(_BYTE *)(result + 1469) = (a2 & 8) != 0;
    }
    else
    {
      result = *(_DWORD *)(a1 + 12);
      if ( result )
      {
        result = sub_10837C((int *)result);
        if ( result == 2 )
        {
          *(_BYTE *)(*(_DWORD *)(a1 + 12) + 1649) = a2 & 1;
          result = *(_DWORD *)(a1 + 12);
          *(_BYTE *)(result + 1648) = (a2 & 2) != 0;
        }
      }
    }
  }
  return result;
}


// ======================================================================
