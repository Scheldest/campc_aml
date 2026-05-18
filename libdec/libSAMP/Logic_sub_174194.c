// ADDR: 0x172eb6
// SYMBOL: sub_172EB6
int *__fastcall sub_172EB6(int a1, int *a2, _DWORD *a3, int a4)
{
  __int16 v4; // r5
  __int64 v5; // kr00_8
  __int64 v6; // kr08_8
  __int64 v7; // r4
  int v8; // r9
  int v9; // r10
  int v10; // r1
  int v11; // r1
  _DWORD *v12; // r1
  int v13; // r2
  int *v14; // r0
  int v15; // r2
  int v16; // r6
  int v17; // r1

  v4 = *(_WORD *)(a1 + 52);
  v5 = *(_QWORD *)*(_DWORD *)(a1 + 40);
  v6 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(HIDWORD(v6) + 10) = v4 + 3;
  *(_WORD *)(HIDWORD(v6) + 8) = v4 + 2;
  *(_WORD *)(HIDWORD(v6) + 4) = v4 + 2;
  *(_WORD *)(HIDWORD(v6) + 2) = v4 + 1;
  *(_WORD *)(HIDWORD(v6) + 6) = v4;
  *(_WORD *)HIDWORD(v6) = v4;
  HIDWORD(v7) = a2[1];
  v8 = *a2;
  v9 = a3[1];
  LODWORD(v7) = *a3;
  *(_QWORD *)v6 = *(_QWORD *)a2;
  *(_QWORD *)(*(_DWORD *)(a1 + 56) + 8) = v5;
  v10 = *(_DWORD *)(a1 + 56) + 16;
  *(_DWORD *)v10 = a4;
  *(_QWORD *)(v10 + 4) = v7;
  *(_QWORD *)(*(_DWORD *)(a1 + 56) + 28) = v5;
  v11 = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(v11 + 36) = a4;
  *(_QWORD *)(v11 + 40) = *(_QWORD *)a3;
  *(_QWORD *)(*(_DWORD *)(a1 + 56) + 48) = v5;
  v12 = *(_DWORD **)(a1 + 56);
  v12[15] = v8;
  v12[16] = v9;
  v13 = *(_DWORD *)(a1 + 56);
  v14 = (int *)(a1 + 52);
  v12[14] = a4;
  *(_QWORD *)(v13 + 68) = v5;
  v15 = v14[1];
  v16 = v14[2] + 12;
  v17 = *v14 + 4;
  *(_DWORD *)(v15 + 76) = a4;
  *v14 = v17;
  v14[1] = v15 + 80;
  v14[2] = v16;
  return v14 + 3;
}


// ======================================================================
