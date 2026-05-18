// ADDR: 0x98a0c
// SYMBOL: sub_98A0C
float *__fastcall sub_98A0C(float *result, int a2)
{
  int v2; // r3
  int v3; // r2
  bool v4; // zf
  int v5; // r2
  bool v6; // zf
  int v7; // lr
  int v8; // r4
  float v9; // s4
  float v10; // s6
  float v11; // s2
  int v12; // r12
  float v13; // s0
  float v14; // s12
  float v15; // s2
  char v16; // r2
  float v17; // s2
  float v18; // s6
  float v19; // s2
  int v20; // r6
  int v21; // r4
  char v22; // r2
  float *v23; // r2
  float v24; // s12
  float v25; // s6
  int v26; // lr
  int v27; // r2
  float v28; // s4
  int v29; // r4
  char v30; // r6
  float *v31; // r2
  float v32; // s4
  int v33; // r6
  int v34; // r2
  float v35; // s6
  float v36; // s0
  float v37; // s2
  int v38; // r5

  if ( *(float **)(dword_1ACF68 + 6836) == result )
  {
    v2 = dword_1ACF68 + 6836;
    if ( *(_BYTE *)(dword_1ACF68 + 6961) )
    {
      v3 = *(_DWORD *)(dword_1ACF68 + 6984);
      v4 = v3 == 0;
      if ( !v3 )
        v4 = *(_DWORD *)(dword_1ACF68 + 7064) == 0;
      if ( v4 )
      {
        v5 = *(_DWORD *)(dword_1ACF68 + 6968);
        v6 = v5 == 0;
        if ( !v5 )
          v6 = *(_DWORD *)(dword_1ACF68 + 6924) == 0;
        if ( v6 )
        {
          v7 = *(_DWORD *)(dword_1ACF68 + 6972);
          v8 = a2 & 5;
          v9 = result[198];
          v10 = result[200];
          if ( v7 )
          {
            v11 = result[197];
            v12 = *(_DWORD *)(dword_1ACF68 + 6972);
            v13 = result[199];
          }
          else
          {
            if ( (a2 & 5) == 0 )
              return result;
            v14 = v10 - v9;
            v12 = (unsigned __int8)(a2 & 4) >> 1;
            v15 = (float)(result[13] + result[13]) + result[9];
            if ( (a2 & 4) == 0 )
              v14 = 0.0;
            v9 = v9 - v14;
            v10 = v10 - v14;
            if ( result[7] >= v15 )
              v15 = result[7];
            v13 = v15 - result[20];
            *(_BYTE *)(dword_1ACF68 + 6961) = 0;
            v8 = 1;
            v16 = *(_BYTE *)(v2 + 101);
            *(_DWORD *)(v2 + 128) = a2;
            *(_DWORD *)(v2 + 132) = 1;
            *(_BYTE *)(v2 + 100) = v16;
            *(_DWORD *)(v2 + 144) = v12;
            result[198] = v9;
            result[200] = v10;
            v11 = v13;
            result[197] = v13;
            result[199] = v13;
            v7 = *(_DWORD *)(v2 + 136);
          }
          if ( v8 && v7 == 1 )
          {
            v17 = v10 - v9;
            if ( (a2 & 4) == 0 )
              v17 = -0.0;
            v18 = v10 + v17;
            v19 = v9 + v17;
            v13 = -result[20];
            v20 = *(_DWORD *)(v2 + 88);
            *(_BYTE *)(v2 + 125) = 0;
            v21 = *(_DWORD *)v2;
            v22 = *(_BYTE *)(v2 + 101);
            *(_DWORD *)(v2 + 128) = a2;
            *(_DWORD *)(v2 + 132) = 1;
            *(_DWORD *)(v2 + 136) = 1;
            if ( (a2 & 4) != 0 )
              v12 = 3;
            *(_BYTE *)(v2 + 100) = v22;
            v23 = (float *)(v21 + 16 * v20);
            *(_DWORD *)(v2 + 144) = v12;
            v23[198] = v19;
            v11 = v13;
            v23[197] = v13;
            v23[199] = v13;
            v23[200] = v18;
            v7 = *(_DWORD *)(v2 + 136);
          }
          if ( (a2 & 0xA) != 0 && v7 == 2 )
          {
            v24 = v13 - v11;
            v25 = (float)(result[14] + result[14]) + result[10];
            if ( (a2 & 8) == 0 )
              v24 = 0.0;
            v26 = *(_DWORD *)(dword_1ACF68 + 6836);
            v27 = dword_1ACF68 + 6836;
            v13 = v13 - v24;
            v11 = v11 - v24;
            if ( result[8] >= v25 )
              v25 = result[8];
            v28 = v25 - result[21];
            *(_BYTE *)(dword_1ACF68 + 6961) = 0;
            if ( (a2 & 8) != 0 )
              v12 = 0;
            v29 = *(_DWORD *)(v27 + 88);
            *(_DWORD *)(v27 + 128) = a2;
            *(_DWORD *)(v27 + 132) = 1;
            *(_DWORD *)(v27 + 136) = 2;
            v30 = *(_BYTE *)(v27 + 101);
            *(_DWORD *)(v27 + 144) = v12;
            *(_BYTE *)(v27 + 100) = v30;
            v31 = (float *)(v26 + 16 * v29);
            v31[197] = v11;
            v31[198] = v28;
            v31[199] = v13;
            v31[200] = v28;
            v7 = *(_DWORD *)(v2 + 136);
          }
          if ( (a2 & 0xA) != 0 && v7 == 3 )
          {
            v32 = v13 - v11;
            v33 = *(_DWORD *)(dword_1ACF68 + 6836);
            if ( (a2 & 8) == 0 )
              v32 = -0.0;
            v34 = dword_1ACF68 + 6836;
            v35 = -result[21];
            v36 = v13 + v32;
            *(_BYTE *)(dword_1ACF68 + 6961) = 0;
            v37 = v11 + v32;
            if ( (a2 & 8) != 0 )
              v12 = 1;
            v38 = *(_DWORD *)(v34 + 88);
            *(_DWORD *)(v34 + 128) = a2;
            *(_DWORD *)(v34 + 132) = 1;
            *(_BYTE *)(v34 + 100) = *(_BYTE *)(v34 + 101);
            result = (float *)(v33 + 16 * v38);
            *(_DWORD *)(v34 + 144) = v12;
            *(_DWORD *)(v34 + 136) = 3;
            result[197] = v37;
            result[198] = v35;
            result[199] = v36;
            result[200] = v35;
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
