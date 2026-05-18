// ADDR: 0x175894
// SYMBOL: sub_175894
int __fastcall sub_175894(int a1, unsigned int a2, _QWORD *a3, _QWORD *a4, float *a5, float *a6)
{
  int v6; // r4
  float *v7; // r1
  float v8; // s4
  float v9; // s6
  float v10; // s0
  float v11; // s10
  float v12; // s2
  __int64 v13; // r4
  __int64 v14; // kr00_8
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s10
  float v19; // s4
  float v20; // s6
  float v21; // s2
  float v22; // s6
  float v23; // s0
  float v24; // s4
  int result; // r0

  if ( a2 > 7 || (*(_BYTE *)(a1 + 4) & 2) != 0 )
    return 0;
  v6 = *(_DWORD *)(a1 + 72) + 28 * *(_DWORD *)(a1 + 88);
  v7 = (float *)((char *)&unk_BB970 + 24 * a2);
  v8 = *v7;
  v9 = v7[1];
  v10 = (float)*(unsigned __int16 *)(v6 + 10);
  v11 = v7[3];
  v12 = (float)*(unsigned __int16 *)(v6 + 8);
  v13 = *((_QWORD *)v7 + 2);
  v14 = *((_QWORD *)v7 + 1);
  *a4 = v14;
  *a3 = v13;
  v15 = v9 + v10;
  v16 = v8 + v12;
  v17 = v16 * *(float *)(a1 + 36);
  v18 = v15 + v11;
  a5[1] = v15 * *(float *)(a1 + 40);
  *a5 = v17;
  v19 = (float)(v16 + *(float *)&v14) * *(float *)(a1 + 36);
  v20 = v18 * *(float *)(a1 + 40);
  v21 = v16 + 109.0;
  a5[2] = v19;
  a5[3] = v20;
  v22 = *(float *)(a1 + 40);
  *a6 = v21 * *(float *)(a1 + 36);
  a6[1] = v15 * v22;
  v23 = *(float *)(a1 + 36);
  v24 = *(float *)(a1 + 40);
  result = 1;
  a6[2] = (float)(v21 + *(float *)&v14) * v23;
  a6[3] = v18 * v24;
  return result;
}


// ======================================================================
