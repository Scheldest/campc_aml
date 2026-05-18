// ADDR: 0x10920c
// SYMBOL: sub_10920C
int __fastcall sub_10920C(float *a1, float *a2)
{
  int v4; // r2
  int v5; // r4
  int v6; // r5
  int v7; // r6
  int v8; // r2
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r2
  int v13; // r4
  int v14; // r5
  int v15; // r6
  float v16; // s4
  int result; // r0
  double v18; // d16
  float v19; // s6
  float v20; // s8
  float v21; // s2
  float v22; // s0
  float v23; // s6
  __int64 v24; // kr00_8
  float v25; // s12
  float v26; // s10
  float v27; // s8
  float v28; // s0
  float v29; // s6
  float v30; // s12
  float v31; // s2
  float v32; // s10
  __int64 v33; // [sp+0h] [bp-A0h]
  __int64 v34; // [sp+8h] [bp-98h]
  __int64 v35; // [sp+10h] [bp-90h]
  __int64 v36; // [sp+18h] [bp-88h]
  __int64 v37; // [sp+20h] [bp-80h]
  __int64 v38; // [sp+28h] [bp-78h]
  __int64 v39; // [sp+30h] [bp-70h]
  __int64 v40; // [sp+38h] [bp-68h]
  int v41; // [sp+40h] [bp-60h]
  int v42; // [sp+44h] [bp-5Ch]
  int v43; // [sp+48h] [bp-58h]
  int v44; // [sp+4Ch] [bp-54h]
  int v45; // [sp+50h] [bp-50h]
  int v46; // [sp+54h] [bp-4Ch]
  int v47; // [sp+58h] [bp-48h]
  int v48; // [sp+5Ch] [bp-44h]
  int v49; // [sp+60h] [bp-40h]
  int v50; // [sp+64h] [bp-3Ch]
  int v51; // [sp+68h] [bp-38h]
  int v52; // [sp+6Ch] [bp-34h]
  int v53; // [sp+70h] [bp-30h]
  int v54; // [sp+74h] [bp-2Ch]
  int v55; // [sp+78h] [bp-28h]
  int v56; // [sp+7Ch] [bp-24h]

  v4 = *(_DWORD *)(dword_23DF24 + 9775416);
  v5 = *(_DWORD *)(dword_23DF24 + 9775420);
  v6 = *(_DWORD *)(dword_23DF24 + 9775424);
  v7 = *(_DWORD *)(dword_23DF24 + 9775428);
  v41 = *(_DWORD *)(dword_23DF24 + 9775412);
  v42 = v4;
  v43 = v5;
  v44 = v6;
  v45 = v7;
  v8 = *(_DWORD *)(dword_23DF24 + 9775436);
  v9 = *(_DWORD *)(dword_23DF24 + 9775440);
  v10 = *(_DWORD *)(dword_23DF24 + 9775444);
  v11 = *(_DWORD *)(dword_23DF24 + 9775448);
  v46 = *(_DWORD *)(dword_23DF24 + 9775432);
  v47 = v8;
  v48 = v9;
  v49 = v10;
  v50 = v11;
  v12 = *(_DWORD *)(dword_23DF24 + 9775456);
  v13 = *(_DWORD *)(dword_23DF24 + 9775460);
  v14 = *(_DWORD *)(dword_23DF24 + 9775464);
  v15 = *(_DWORD *)(dword_23DF24 + 9775468);
  v51 = *(_DWORD *)(dword_23DF24 + 9775452);
  v52 = v12;
  v53 = v13;
  v54 = v14;
  v55 = v15;
  v56 = 1065353216;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  ((void (*)(void))(dword_23DF24 + 1980969))();
  v16 = a1[2];
  result = dword_23DF24 + 10471680;
  v18 = 1.0 / v16;
  v19 = v18 * (double)*(int *)(dword_23DF24 + 10471684);
  v20 = v18 * (double)*(int *)(dword_23DF24 + 10471680);
  v21 = a1[1] / v19;
  v22 = *a1 / v20;
  v23 = v21 * *(float *)&v35;
  v24 = v37;
  v25 = v21 * *((float *)&v35 + 1);
  *a1 = v22;
  v26 = *((float *)&v33 + 1);
  v27 = *(float *)&v38;
  *a2 = *(float *)&v39 + (float)((float)(v23 + (float)(v16 * *(float *)&v24)) + (float)(v22 * *(float *)&v33));
  v28 = *a1;
  v29 = *((float *)&v39 + 1);
  v30 = (float)(v25 + (float)(v16 * *((float *)&v24 + 1))) + (float)(*a1 * v26);
  a1[1] = v21;
  v31 = *(float *)&v34;
  v32 = *(float *)&v40;
  a2[1] = v30 + v29;
  a2[2] = v32 + (float)((float)((float)(a1[1] * *(float *)&v36) + (float)(v16 * v27)) + (float)(v28 * v31));
  return result;
}


// ======================================================================
