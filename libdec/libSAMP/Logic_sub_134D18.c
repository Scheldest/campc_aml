// ADDR: 0x134d40
// SYMBOL: sub_134D40
int __fastcall sub_134D40(_DWORD *a1)
{
  __int64 v2; // d16
  __int64 v3; // d17
  int v4; // r0
  int v5; // r1
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r0
  int v12; // r1

  *(float *)&v2 = 1.0;
  *((float *)&v2 + 1) = 1.0;
  *(float *)&v3 = 1.0;
  *((float *)&v3 + 1) = 1.0;
  v4 = *(_DWORD *)(a1[23] + 112);
  v5 = *(_DWORD *)(v4 + 84);
  *(_BYTE *)(v4 + 112) = 0;
  *(_QWORD *)(v5 + 96) = v2;
  *(_QWORD *)(v5 + 104) = v3;
  v6 = (_DWORD *)a1[24];
  v7 = v6[27];
  v8 = *(_DWORD *)(v7 + 84);
  *(_BYTE *)(v7 + 112) = 1;
  *(_QWORD *)(v8 + 96) = 1065353216LL;
  *(_QWORD *)(v8 + 104) = 0x3F80000000000000LL;
  v9 = v6[28];
  v10 = *(_DWORD *)(v9 + 84);
  *(_BYTE *)(v9 + 112) = 0;
  *(_QWORD *)(v10 + 96) = v2;
  *(_QWORD *)(v10 + 104) = v3;
  v11 = v6[29];
  v12 = *(_DWORD *)(v11 + 84);
  *(_BYTE *)(v11 + 112) = 0;
  *(_QWORD *)(v12 + 96) = v2;
  *(_QWORD *)(v12 + 104) = v3;
  sub_1357D0(a1[25], 0, 0, 0, 0);
  sub_1357D0(a1[25], a1[21], a1[21] + 4, a1[21] + 8, 1036831949);
  return sub_134E26(a1);
}


// ======================================================================
