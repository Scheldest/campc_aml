// ADDR: 0x13959c
// SYMBOL: sub_13959C
int __fastcall sub_13959C(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  __int64 v6; // r2
  bool v7; // zf
  int v8; // r6
  int v9; // r1
  unsigned int v10; // r1
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r0
  __int64 v14; // d16
  __int64 v15; // kr00_8
  int result; // r0

  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 8);
  v6 = *(_QWORD *)(a1 + 16);
  v8 = v5 - v4;
  v7 = v5 == v4;
  v9 = 170 * ((v5 - v4) >> 2);
  if ( !v7 )
    v8 = v9 - 1;
  v10 = HIDWORD(v6) + v6;
  if ( v8 == HIDWORD(v6) + (_DWORD)v6 )
  {
    sub_139624(a1);
    v4 = *(_DWORD *)(a1 + 4);
    v10 = *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20);
  }
  v11 = *(_DWORD *)(v4 + 4 * (v10 / 0xAA));
  v12 = 3 * (v10 % 0xAA);
  *(_WORD *)(v11 + 8 * v12) = *(_WORD *)a2;
  v13 = v11 + 8 * v12;
  v14 = *(_QWORD *)(a2 + 4);
  *(_DWORD *)(v13 + 12) = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(v13 + 4) = v14;
  v15 = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 4) = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 12) = 0;
  *(_QWORD *)(v13 + 16) = v15;
  result = *(_DWORD *)(a1 + 20) + 1;
  *(_DWORD *)(a1 + 20) = result;
  return result;
}


// ======================================================================
