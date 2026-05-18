// ADDR: 0x172f38
// SYMBOL: sub_172F38
int *__fastcall sub_172F38(int a1, int *a2, __int64 *a3, int *a4, __int64 *a5, int a6)
{
  __int16 v6; // r6
  __int64 v7; // kr00_8
  int v8; // r9
  int v9; // lr
  __int64 v10; // kr10_8
  __int64 v11; // kr18_8
  _DWORD *v12; // r4
  int v13; // r1
  int v14; // r1
  _DWORD *v15; // r1
  int v16; // r2
  int *v17; // r0
  int v18; // r2
  int v19; // r6
  int v20; // r1
  int v22; // [sp+0h] [bp-24h]
  int v23; // [sp+4h] [bp-20h]

  v6 = *(_WORD *)(a1 + 52);
  v7 = *(_QWORD *)(a1 + 56);
  v23 = *a2;
  *(_WORD *)(HIDWORD(v7) + 10) = v6 + 3;
  *(_WORD *)(HIDWORD(v7) + 8) = v6 + 2;
  *(_WORD *)(HIDWORD(v7) + 4) = v6 + 2;
  *(_WORD *)(HIDWORD(v7) + 6) = v6;
  *(_WORD *)(HIDWORD(v7) + 2) = v6 + 1;
  *(_WORD *)HIDWORD(v7) = v6;
  v8 = a2[1];
  v22 = *a4;
  v9 = a4[1];
  v10 = *a3;
  v11 = *a5;
  *(_QWORD *)v7 = *(_QWORD *)a2;
  *(_QWORD *)(*(_DWORD *)(a1 + 56) + 8) = *(_QWORD *)a4;
  v12 = *(_DWORD **)(a1 + 56);
  v12[5] = v10;
  v12[6] = v8;
  v13 = *(_DWORD *)(a1 + 56);
  v12[4] = a6;
  *(_DWORD *)(v13 + 28) = v11;
  *(_DWORD *)(v13 + 32) = v9;
  v14 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(v14 + 36) = a6;
  *(_QWORD *)(v14 + 40) = *a3;
  *(_QWORD *)(*(_DWORD *)(a1 + 56) + 48) = *a5;
  v15 = *(_DWORD **)(a1 + 56);
  v15[15] = v23;
  v15[16] = HIDWORD(v10);
  v16 = *(_DWORD *)(a1 + 56);
  v17 = (int *)(a1 + 52);
  v15[14] = a6;
  *(_DWORD *)(v16 + 68) = v22;
  *(_DWORD *)(v16 + 72) = HIDWORD(v11);
  v18 = v17[1];
  v19 = v17[2] + 12;
  v20 = *v17 + 4;
  *(_DWORD *)(v18 + 76) = a6;
  *v17 = v20;
  v17[1] = v18 + 80;
  v17[2] = v19;
  return v17 + 3;
}


// ======================================================================
