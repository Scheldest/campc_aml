// ADDR: 0x1dfe50
// SYMBOL: sub_1DFE50
float *__fastcall sub_1DFE50(int a1, float *a2, float *a3)
{
  int v3; // r12
  float v4; // s8
  float *v5; // r3
  float v6; // s0
  float v7; // s4
  float v8; // s6
  float v9; // s0
  float v10; // s2
  float v11; // s2
  float *v12; // r3
  float v13; // s10
  float v14; // s2
  float v15; // s2
  float *v16; // r3
  float v17; // s12
  float v18; // s2
  float v19; // s4
  int v20; // r1
  int v21; // r3
  int v22; // r5
  float v23; // s4
  float v24; // s2
  float v25; // s14
  float v26; // s0
  float v27; // s8
  float v28; // s14
  float v29; // s6
  int v30; // r1
  int v31; // r5
  int v32; // r4
  float v33; // s3
  float v34; // s8
  float v35; // s6
  int v36; // r5
  int v37; // r4
  float v38; // s7
  float v39; // s10
  float v40; // s5
  float v41; // s6
  int v42; // r3
  int v43; // r5
  float v44; // s7
  float v45; // s12
  float v46; // s3
  float v47; // s0
  float v48; // s2
  float v49; // s14
  float v50; // s0
  float v51; // s2
  float v52; // s6
  int v53; // r3
  float *result; // r0

  v3 = *(_DWORD *)(a1 + 472);
  v4 = *(float *)(a1 + 212);
  v5 = (float *)(*(_DWORD *)(a1 + 304) + 4 * (*(_DWORD *)(a1 + 300) & (v3 - *(_DWORD *)(a1 + 332))));
  v6 = (float)(*(float *)(*(_DWORD *)(a1 + 320) + 4 * (*(_DWORD *)(a1 + 316) & (v3 - *(_DWORD *)(a1 + 340))))
             * *(float *)(a1 + 292))
     + a2[2];
  v7 = *(float *)(a1 + 288);
  v8 = (float)((float)(*(float *)(a1 + 372) - v6) * *(float *)(a1 + 356)) + v6;
  v9 = *(float *)(a1 + 220);
  v10 = *(float *)(a1 + 284);
  *(float *)(a1 + 372) = v8;
  v11 = *v5 * v10;
  v12 = (float *)(*(_DWORD *)(a1 + 328) + 4 * (*(_DWORD *)(a1 + 324) & (v3 - *(_DWORD *)(a1 + 344))));
  v13 = (float)((float)(*(float *)(a1 + 364) - (float)(v11 + *a2)) * *(float *)(a1 + 348)) + (float)(v11 + *a2);
  v14 = *(float *)(a1 + 296);
  *(float *)(a1 + 364) = v13;
  v15 = *v12 * v14;
  v16 = (float *)(*(_DWORD *)(a1 + 312) + 4 * (*(_DWORD *)(a1 + 308) & (v3 - *(_DWORD *)(a1 + 336))));
  v17 = (float)((float)(*(float *)(a1 + 376) - (float)(v15 + a2[3])) * *(float *)(a1 + 360)) + (float)(v15 + a2[3]);
  *(float *)(a1 + 376) = v17;
  v18 = *v16 * v7;
  v19 = a2[1];
  v20 = *(_DWORD *)(a1 + 236);
  v21 = *(_DWORD *)(a1 + 240);
  v22 = v20 & (v3 - *(_DWORD *)(a1 + 268));
  v23 = (float)((float)(*(float *)(a1 + 368) - (float)(v18 + v19)) * *(float *)(a1 + 352)) + (float)(v18 + v19);
  v24 = v4 * v8;
  *(float *)(a1 + 368) = v23;
  v25 = *(float *)(v21 + 4 * v22);
  v26 = v25 * v9;
  v27 = (float)(v25 - (float)(v4 * v8)) * v4;
  v28 = v26 - v24;
  *(float *)(v21 + 4 * (v20 & v3)) = v27 + v8;
  v29 = *(float *)(a1 + 212);
  v30 = *(_DWORD *)(a1 + 472);
  v31 = *(_DWORD *)(a1 + 244);
  v32 = *(_DWORD *)(a1 + 248);
  v33 = *(float *)(v32 + 4 * (v31 & (v30 - *(_DWORD *)(a1 + 272))));
  v34 = (float)(v33 * *(float *)(a1 + 224)) - (float)(v29 * v13);
  *(float *)(v32 + 4 * (v31 & v30)) = (float)((float)(v33 - (float)(v29 * v13)) * v29) + v13;
  v35 = *(float *)(a1 + 212);
  v36 = *(_DWORD *)(a1 + 252);
  v37 = *(_DWORD *)(a1 + 256);
  v38 = *(float *)(v37 + 4 * (v36 & (v30 - *(_DWORD *)(a1 + 276))));
  v39 = (float)(v38 * *(float *)(a1 + 228)) - (float)(v35 * v17);
  v40 = (float)(v26 - v24) - v34;
  *(float *)(v37 + 4 * (v36 & v30)) = (float)((float)(v38 - (float)(v35 * v17)) * v35) + v17;
  v41 = *(float *)(a1 + 212);
  v42 = *(_DWORD *)(a1 + 260);
  v43 = *(_DWORD *)(a1 + 264);
  v44 = *(float *)(v43 + 4 * (v42 & (v30 - *(_DWORD *)(a1 + 280))));
  v45 = (float)(v44 * *(float *)(a1 + 232)) - (float)(v41 * v23);
  *(float *)(v43 + 4 * (v42 & v30)) = (float)((float)(v44 - (float)(v41 * v23)) * v41) + v23;
  v46 = *(float *)(a1 + 216);
  v47 = v46 * (float)((float)((float)(v24 - v26) - v34) - v39);
  v48 = (float)((float)(v39 - v28) + v45) * v46;
  v49 = (float)((float)((float)(v34 - v39) + v45) * v46) + v28;
  v50 = v47 + v45;
  v51 = v48 + v34;
  *a3 = v49 * *(float *)(a1 + 204);
  v52 = (float)((float)(v40 + v45) * v46) + v39;
  a3[1] = *(float *)(a1 + 204) * v51;
  a3[2] = *(float *)(a1 + 204) * v52;
  a3[3] = *(float *)(a1 + 204) * v50;
  v53 = *(_DWORD *)(a1 + 472);
  *(float *)(*(_DWORD *)(a1 + 304) + 4 * (*(_DWORD *)(a1 + 300) & v53)) = v49;
  *(float *)(*(_DWORD *)(a1 + 312) + 4 * (*(_DWORD *)(a1 + 308) & v53)) = v51;
  *(float *)(*(_DWORD *)(a1 + 320) + 4 * (*(_DWORD *)(a1 + 316) & v53)) = v52;
  result = (float *)(*(_DWORD *)(a1 + 328) + 4 * (*(_DWORD *)(a1 + 324) & v53));
  *result = v50;
  return result;
}


// ======================================================================
