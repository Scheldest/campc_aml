// ADDR: 0x140b58
// SYMBOL: sub_140B58
int __fastcall sub_140B58(int a1, _DWORD *a2)
{
  float *v3; // r0
  float v4; // s0
  float *v5; // r4
  float v6; // s2
  float v7; // s4
  float v8; // s6
  float v9; // s8
  float v10; // s10
  double v11; // d16
  float v12; // s4
  double v13; // d21
  float v14; // s0
  float v15; // s10
  float v16; // s8
  float v17; // s6
  int v18; // r0
  float v19; // s0
  float v20; // s2
  float v21; // s4
  float v22; // s0
  float v23; // s2
  float v24; // s4
  int v26; // [sp+20h] [bp-70h] BYREF
  float v27[11]; // [sp+24h] [bp-6Ch] BYREF
  float v28; // [sp+50h] [bp-40h] BYREF
  float v29; // [sp+54h] [bp-3Ch]
  float v30; // [sp+58h] [bp-38h]
  float v31[13]; // [sp+5Ch] [bp-34h] BYREF

  v3 = (float *)sub_F7FE0();
  v4 = *v3;
  v5 = v3;
  v6 = v3[1];
  v7 = v3[2];
  v8 = v3[3];
  v9 = v3[4];
  v10 = v3[5];
  v11 = v7;
  a2[1] = -1;
  *a2 = -1;
  v26 = 0;
  v12 = v7 + v10;
  v13 = v8 + v4 * 70.0;
  v14 = v4 + v8;
  v31[1] = v6 + v9;
  v15 = v10 + v11 * 70.0;
  v16 = v9 + v6 * 70.0;
  v17 = v13;
  v31[0] = v14;
  v31[2] = v12;
  v30 = v15;
  v29 = v16;
  v28 = v17;
  off_24754C(v31, &v28, v27, &v26, 1, 0, 0, 0, 0, 0, 0, 0);
  if ( v26 )
  {
    v28 = v27[0];
    v29 = v27[1];
    v30 = v27[2];
  }
  v18 = sub_1486DA(*(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16), 1109393408, v31, &v28);
  if ( v18 != 0xFFFF )
    *(_WORD *)a2 = v18;
  v19 = v5[3] + *v5 * 70.0;
  v20 = v5[4] + v5[1] * 70.0;
  v21 = v5[5] + v5[2] * 70.0;
  v28 = v19;
  v29 = v20;
  v30 = v21;
  off_24754C(v31, &v28, v27, &v26, 1, 0, 0, 1, 0, 0, 0, 0);
  v22 = v5[3] + *v5 * 70.0;
  v23 = v5[4] + v5[1] * 70.0;
  v24 = v5[5] + v5[2] * 70.0;
  v28 = v22;
  v29 = v23;
  v30 = v24;
  return off_24754C(v31, &v28, v27, &v26, 1, 1, 0, 1, 0, 0, 0, 0);
}


// ======================================================================
