// ADDR: 0x13d2ec
// SYMBOL: sub_13D2EC
_DWORD *__fastcall sub_13D2EC(_DWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v6; // r2
  int v7; // r3
  int v8; // r0
  const char *v9; // r1

  sub_12BC78((int)a1);
  v6 = *a2;
  v7 = *a3;
  *a1 = &off_22EF7C;
  v8 = *((_DWORD *)a2 + 2);
  v9 = (const char *)*((_DWORD *)a3 + 2);
  if ( !(v6 << 31) )
    v8 = (int)(a2 + 1);
  if ( !(v7 << 31) )
    v9 = (const char *)(a3 + 1);
  a1[21] = sub_1085C0(v8, v9);
  return a1;
}


// ======================================================================
// ADDR: 0x13db74
// SYMBOL: sub_13DB74
int __fastcall sub_13DB74(int a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5, _QWORD *a6)
{
  __int64 v10; // d17
  __int64 v11; // d17
  __int64 v12; // d17
  __int64 v13; // d17
  __int64 v14; // d17
  int result; // r0

  sub_12BC78(a1);
  *(_DWORD *)a1 = &off_22F108;
  sub_22178C(a1 + 96, 0x60u);
  *(_DWORD *)(a1 + 84) = 1;
  v10 = a2[1];
  *(_QWORD *)(a1 + 96) = *a2;
  *(_QWORD *)(a1 + 104) = v10;
  v11 = a3[1];
  *(_QWORD *)(a1 + 128) = *a3;
  *(_QWORD *)(a1 + 136) = v11;
  v12 = a4[1];
  *(_QWORD *)(a1 + 144) = *a4;
  *(_QWORD *)(a1 + 152) = v12;
  v13 = a5[1];
  *(_QWORD *)(a1 + 160) = *a5;
  *(_QWORD *)(a1 + 168) = v13;
  v14 = a6[1];
  result = a1;
  *(_QWORD *)(a1 + 176) = *a6;
  *(_QWORD *)(a1 + 184) = v14;
  return result;
}


// ======================================================================
