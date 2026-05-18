// ADDR: 0x10e246
// SYMBOL: sub_10E246
_DWORD *__fastcall sub_10E246(int a1, _DWORD *a2, int *a3)
{
  _DWORD *result; // r0
  _DWORD *v5; // r3
  int v6; // lr
  _DWORD *v7; // r12
  int v8; // r2
  _DWORD *v9; // r3

  v5 = (_DWORD *)(a1 + 4);
  result = *(_DWORD **)(a1 + 4);
  if ( !result )
  {
    result = v5;
    *a2 = v5;
    return result;
  }
  v6 = *a3;
  v7 = (_DWORD *)(a1 + 4);
  while ( 1 )
  {
    v8 = result[4];
    if ( v6 >= v8 )
      break;
    v9 = (_DWORD *)*result;
    if ( !*result )
    {
      *a2 = result;
      return result;
    }
LABEL_9:
    v7 = result;
    result = v9;
  }
  if ( v8 >= v6 )
  {
    *a2 = result;
    return v7;
  }
  v9 = (_DWORD *)result[1];
  if ( v9 )
  {
    ++result;
    goto LABEL_9;
  }
  *a2 = result++;
  return result;
}


// ======================================================================
