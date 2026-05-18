// ADDR: 0x174204
// SYMBOL: sub_174204
unsigned int __fastcall sub_174204(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, unsigned int a7)
{
  unsigned int result; // r0
  __int64 v12; // kr00_8
  __int16 v13; // r2
  __int64 v14; // r0
  __int64 v15; // r0
  int v16; // r2
  __int64 v17; // r0
  __int64 v18; // r2
  __int64 v19; // r0
  __int64 v20; // r0

  result = a5 | a4 | a6 | a7;
  if ( result >= 0x1000000 )
  {
    v12 = *(_QWORD *)*(_DWORD *)(a1 + 40);
    sub_172DC0(a1, 6, 4);
    v13 = *(_WORD *)(a1 + 52);
    v14 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 60) = HIDWORD(v14) + 12;
    *(_WORD *)(HIDWORD(v14) + 10) = v13 + 3;
    *(_WORD *)(HIDWORD(v14) + 8) = v13 + 2;
    *(_WORD *)(HIDWORD(v14) + 4) = v13 + 2;
    *(_WORD *)(HIDWORD(v14) + 6) = v13;
    *(_WORD *)(HIDWORD(v14) + 2) = v13 + 1;
    *(_WORD *)HIDWORD(v14) = v13;
    *(_QWORD *)v14 = *(_QWORD *)a2;
    *(_QWORD *)(*(_DWORD *)(a1 + 56) + 8) = v12;
    v15 = *(_QWORD *)(a1 + 52);
    *(_DWORD *)(HIDWORD(v15) + 16) = a4;
    *(_DWORD *)(a1 + 52) = v15 + 1;
    *(_DWORD *)(a1 + 56) = HIDWORD(v15) + 20;
    v16 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(HIDWORD(v15) + 20) = *a3;
    *(_DWORD *)(HIDWORD(v15) + 24) = v16;
    *(_QWORD *)(*(_DWORD *)(a1 + 56) + 8) = v12;
    v17 = *(_QWORD *)(a1 + 52);
    *(_DWORD *)(HIDWORD(v17) + 16) = a5;
    *(_DWORD *)(a1 + 52) = v17 + 1;
    *(_DWORD *)(a1 + 56) = HIDWORD(v17) + 20;
    *(_QWORD *)(HIDWORD(v17) + 20) = *(_QWORD *)a3;
    *(_QWORD *)(*(_DWORD *)(a1 + 56) + 8) = v12;
    HIDWORD(v18) = a3[1];
    v19 = *(_QWORD *)(a1 + 52);
    LODWORD(v18) = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 52) = v19 + 1;
    *(_DWORD *)(a1 + 56) = HIDWORD(v19) + 20;
    *(_QWORD *)(HIDWORD(v19) + 20) = v18;
    LODWORD(v19) = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(HIDWORD(v19) + 16) = a6;
    *(_QWORD *)(v19 + 8) = v12;
    v20 = *(_QWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 52) = v20 + 1;
    *(_DWORD *)(a1 + 56) = HIDWORD(v20) + 20;
    result = a7;
    *(_DWORD *)(HIDWORD(v20) + 16) = a7;
  }
  return result;
}


// ======================================================================
