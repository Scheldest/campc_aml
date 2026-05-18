// ADDR: 0x140d58
// SYMBOL: sub_140D58
int __fastcall sub_140D58(int result, int a2)
{
  float v2; // s0
  float v3; // s2
  float v4; // s6
  float v5; // s8
  int v6; // r2
  float v7; // s4
  float v8; // s6
  float v9; // s8
  float v10; // s2
  float v11; // s10
  float v12; // s0
  float v13; // s2
  float v14; // s4
  float v15; // s0
  float v16; // s2
  float v17; // s0
  float v18; // s2

  *(_DWORD *)result = *(_DWORD *)a2;
  v2 = *(float *)(a2 + 52);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 16);
  v3 = *(float *)(a2 + 4);
  v4 = *(float *)(a2 + 48);
  v5 = *(float *)a2;
  v6 = *(_DWORD *)(a2 + 32);
  *(float *)(result + 16) = v3;
  v7 = (float)(v3 * v2) + (float)(v4 * v5);
  v8 = *(float *)(a2 + 56);
  *(_DWORD *)(result + 8) = v6;
  v9 = *(float *)(a2 + 8);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 20);
  v10 = *(float *)(a2 + 20);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a2 + 36);
  v11 = *(float *)(a2 + 24);
  v12 = v2 * v10;
  *(float *)(result + 32) = v9;
  *(float *)(result + 36) = v11;
  v13 = *(float *)(a2 + 16);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a2 + 40);
  *(float *)(result + 48) = -(float)(v7 + (float)(v8 * v9));
  v14 = *(float *)(a2 + 48);
  v15 = v12 + (float)(v14 * v13);
  v16 = *(float *)(a2 + 36);
  *(float *)(result + 52) = -(float)(v15 + (float)(v8 * v11));
  v17 = (float)(*(float *)(a2 + 52) * v16) + (float)(v14 * *(float *)(a2 + 32));
  v18 = *(float *)(a2 + 40);
  *(_DWORD *)(result + 12) = 3;
  *(float *)(result + 56) = -(float)(v17 + (float)(v8 * v18));
  return result;
}


// ======================================================================
// ADDR: 0x140df6
// SYMBOL: sub_140DF6
int __fastcall sub_140DF6(int result, float *a2)
{
  float v2; // s2
  float v3; // s5
  float v4; // s10
  float v5; // s12
  float v6; // s8
  float v7; // s6
  float v8; // s4
  float v9; // s14
  float v10; // s0
  float v11; // s2
  float v12; // s6
  float v13; // s2
  float v14; // s1
  float v15; // s2
  float v16; // s0
  float v17; // s1
  float v18; // s4
  float v19; // s3
  float v20; // s1
  float v21; // s7
  float v22; // s12
  float v23; // s11
  float v24; // s9
  float v25; // s6
  float v26; // s8
  float v27; // s14
  float v28; // s3
  float v29; // s11
  float v30; // s7
  float v31; // s9
  float v32; // s3
  float v33; // s9
  float v34; // s4
  float v35; // s10
  float v36; // s5
  float v37; // s2
  float v38; // s6

  v2 = a2[2];
  v3 = 1.0;
  v4 = a2[9];
  v5 = a2[10];
  v6 = a2[6];
  v7 = a2[5];
  v8 = a2[4];
  v9 = (float)(v4 * v2) - (float)(a2[1] * v5);
  *(float *)(result + 4) = v9;
  v10 = (float)(a2[1] * v6) - (float)(v7 * v2);
  v11 = v7 * v5;
  v12 = a2[8];
  v13 = v11 - (float)(v4 * v6);
  *(float *)result = v13;
  v14 = (float)((float)(v10 * v12) + (float)(v8 * v9)) + (float)(v13 * *a2);
  if ( v14 != 0.0 )
    v3 = 1.0 / v14;
  v15 = v13 * v3;
  v16 = v10 * v3;
  *(float *)result = v15;
  v17 = (float)(v6 * v12) - (float)(v5 * v8);
  v18 = *a2;
  *(float *)(result + 8) = v16;
  v19 = a2[2];
  v20 = v17 * v3;
  *(float *)(result + 16) = v20;
  v21 = a2[4];
  v22 = v3 * (float)((float)(v5 * v18) - (float)(v19 * v12));
  *(float *)(result + 20) = v22;
  v23 = a2[5];
  v24 = (float)(v21 * v4) - (float)(v12 * v23);
  v25 = v9 * v3;
  v26 = v3 * (float)((float)(v19 * v21) - (float)(v6 * v18));
  v27 = v3 * v24;
  *(float *)(result + 4) = v25;
  v28 = a2[1];
  *(float *)(result + 24) = v26;
  *(float *)(result + 32) = v3 * v24;
  v29 = (float)(v18 * v23) - (float)(v21 * v28);
  v30 = a2[14];
  v31 = a2[8] * v28;
  v32 = a2[12];
  v33 = v31 - (float)(v18 * v4);
  v34 = v3 * v29;
  v35 = v3 * v33;
  v36 = a2[13];
  *(float *)(result + 40) = v34;
  *(float *)(result + 36) = v35;
  *(float *)(result + 48) = -(float)((float)((float)(v20 * v36) + (float)(v32 * v15)) + (float)(v30 * v27));
  v37 = a2[12];
  *(float *)(result + 52) = -(float)((float)((float)(v22 * v36) + (float)(v37 * v25)) + (float)(v30 * v35));
  v38 = a2[13];
  *(_DWORD *)(result + 12) &= ~0x20000u;
  *(float *)(result + 56) = -(float)((float)((float)(v26 * v38) + (float)(v37 * v16)) + (float)(v30 * v34));
  return result;
}


// ======================================================================
