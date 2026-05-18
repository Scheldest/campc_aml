// ADDR: 0x1eef10
// SYMBOL: sub_1EEF10
int __fastcall sub_1EEF10(_DWORD *a1, int a2)
{
  int v2; // r5
  __int64 v4; // kr00_8
  int v5; // r0
  _DWORD *v6; // r1
  int result; // r0

  v2 = *(_DWORD *)(a2 + 16);
  v4 = *(_QWORD *)(a2 + 4);
  v5 = sub_220A6C(v2, 56);
  v6 = (_DWORD *)(v4 + 4 * v5);
  if ( HIDWORD(v4) == (_DWORD)v4 )
    result = 0;
  else
    result = *v6 + 72 * (v2 - 56 * v5);
  *a1 = v6;
  a1[1] = result;
  return result;
}


// ======================================================================
// ADDR: 0x1eef50
// SYMBOL: sub_1EEF50
int __fastcall sub_1EEF50(_DWORD *a1, int a2)
{
  __int64 v3; // kr00_8
  int v4; // r5
  int v5; // r0
  _DWORD *v6; // r1
  int result; // r0

  v3 = *(_QWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 16) + *(_DWORD *)(a2 + 20);
  v5 = sub_220A6C(v4, 56);
  v6 = (_DWORD *)(v3 + 4 * v5);
  if ( HIDWORD(v3) == (_DWORD)v3 )
    result = 0;
  else
    result = *v6 + 72 * (v4 - 56 * v5);
  *a1 = v6;
  a1[1] = result;
  return result;
}


// ======================================================================
