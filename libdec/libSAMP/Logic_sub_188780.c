// ADDR: 0x18a02e
// SYMBOL: sub_18A02E
_DWORD *__fastcall sub_18A02E(int *a1, int *a2)
{
  int v2; // r6
  _DWORD *result; // r0
  int v6; // r1
  _DWORD *v7; // r1
  int v8; // r2
  int v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r2

  v2 = *a1;
  if ( *a1 == 1 )
  {
    v7 = (_DWORD *)operator new(0xCu);
    result = (_DWORD *)a1[1];
    a1[2] = (int)v7;
    *a1 = 2;
    result[1] = v7;
    result[2] = v7;
    v8 = *a2;
    v7[1] = result;
    v7[2] = result;
    a1[2] = (int)result;
    *v7 = v8;
  }
  else
  {
    result = (_DWORD *)operator new(0xCu);
    if ( v2 )
    {
      v9 = a1[2];
      v10 = *a2;
      *a1 = v2 + 1;
      v11 = *(_DWORD *)(v9 + 8);
      *result = v10;
      result[1] = v9;
      result[2] = v11;
      v12 = *(_DWORD *)(v9 + 8);
      *(_DWORD *)(v9 + 8) = result;
      *(_DWORD *)(v12 + 4) = result;
    }
    else
    {
      a1[1] = (int)result;
      v6 = *a2;
      *a1 = 1;
      a1[2] = (int)result;
      *result = v6;
      result[1] = result;
      result[2] = result;
    }
  }
  return result;
}


// ======================================================================
