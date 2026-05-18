// ADDR: 0x174f42
// SYMBOL: sub_174F42
_DWORD *__fastcall sub_174F42(_DWORD *result, int a2, int a3)
{
  int v3; // r3
  int v4; // r12
  __int64 v5; // d16
  int v6; // r3
  int v7; // r2
  int v8; // r3
  __int64 v9; // d16
  int v10; // r0
  _QWORD *v11; // r2
  int v12; // r0
  int v13; // r2

  if ( *result != a3 )
  {
    v3 = result[4] + 24 * *result;
    v4 = *(_DWORD *)(a2 + 8);
    *(_QWORD *)v3 = *(_QWORD *)a2;
    *(_DWORD *)(v3 + 8) = v4;
    v5 = *(_QWORD *)(a2 + 12);
    v6 = result[4] + 24 * *result;
    *(_DWORD *)(v6 + 20) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v6 + 12) = v5;
    *result = a3;
    v7 = 3 * a3;
    v8 = result[4] + 8 * v7;
    v9 = *(_QWORD *)v8;
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(v8 + 8);
    *(_QWORD *)a2 = v9;
    v10 = result[4] + 8 * v7;
    v11 = (_QWORD *)(v10 + 12);
    v12 = *(_DWORD *)(v10 + 20);
    *(_QWORD *)(a2 + 12) = *v11;
    v13 = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(a2 + 20) = v12;
    result = (_DWORD *)(*(_DWORD *)(a2 + 20) + 2 * v13);
    *(_DWORD *)(a2 + 60) = result;
  }
  return result;
}


// ======================================================================
