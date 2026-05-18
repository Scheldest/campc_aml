// ADDR: 0x8767c
// SYMBOL: sub_8767C
_DWORD *__fastcall sub_8767C(_DWORD *a1, int *a2)
{
  int v2; // r6
  _DWORD *result; // r0
  int v6; // r1
  int v7; // r1
  int v8; // r2
  _DWORD *v9; // r0
  __int64 v10; // kr00_8
  int v11; // r3
  int v12; // r5

  v2 = *a1;
  if ( *a1 == 1 )
  {
    result = (_DWORD *)operator new(0xCu);
    v7 = a1[1];
    a1[2] = result;
    *(_DWORD *)(v7 + 4) = result;
    *(_DWORD *)(v7 + 8) = result;
    v8 = *a2;
    *a1 = 2;
    a1[1] = result;
    *result = v8;
    result[1] = v7;
    result[2] = v7;
  }
  else if ( v2 )
  {
    v9 = (_DWORD *)operator new(0xCu);
    v10 = *(_QWORD *)(a1 + 1);
    v11 = *(_DWORD *)(HIDWORD(v10) + 4);
    v12 = *a2;
    v9[1] = v11;
    *(_DWORD *)(v11 + 8) = v9;
    *v9 = v12;
    *(_DWORD *)(HIDWORD(v10) + 4) = v9;
    v9[2] = HIDWORD(v10);
    if ( HIDWORD(v10) == (_DWORD)v10 )
    {
      a1[1] = v9;
      a1[2] = v9;
    }
    result = (_DWORD *)(v2 + 1);
    *a1 = v2 + 1;
  }
  else
  {
    result = (_DWORD *)operator new(0xCu);
    a1[1] = result;
    v6 = *a2;
    *a1 = 1;
    a1[2] = result;
    *result = v6;
    result[1] = result;
    result[2] = result;
  }
  return result;
}


// ======================================================================
