// ADDR: 0x108974
// SYMBOL: sub_108974
int __fastcall sub_108974(int a1, unsigned __int16 *a2, float a3, float a4, float a5)
{
  float v9; // s4
  float v10; // s0
  int v11; // r6
  int v12; // lr
  int result; // r0
  int v14; // r3
  bool v15; // zf
  float *v16; // r5
  float *v17; // r1
  float *v18; // r2
  float *v19; // r4
  float v20; // r2
  int v21; // r3
  int v22; // r2
  bool v23; // zf
  float *v24; // r6
  float *v25; // r1
  float *v26; // r5
  float *v27; // r4
  float v28; // r5
  int v29; // r2
  int v30; // r1
  bool v31; // zf
  float *v32; // r3
  float *v33; // r6
  float *v34; // r4
  float v35; // s10
  float *v36; // r6
  float v37; // s10
  float v38; // r6

  sub_108894(a2, a3, a4, 500.0);
  v9 = a3;
  v10 = a4;
  v11 = 20000;
  v12 = dword_23DF24;
  result = dword_23DF24 + 6716708;
  v14 = **(_DWORD **)(dword_23DF24 + 9808972);
  do
  {
    if ( v14 && *(_DWORD *)v14 != result )
    {
      v15 = a1 == -1;
      if ( a1 != -1 )
        v15 = *(unsigned __int16 *)(v14 + 38) == a1;
      if ( v15 )
      {
        v16 = *(float **)(v14 + 20);
        v17 = v16 + 13;
        if ( !v16 )
          v17 = (float *)(v14 + 8);
        v18 = v16 + 14;
        v19 = v16 + 12;
        if ( !v16 )
          v18 = (float *)(v14 + 12);
        v20 = *v18;
        if ( !v16 )
          v19 = (float *)(v14 + 4);
        if ( sqrtf(
               (float)((float)((float)(*v17 - v9) * (float)(*v17 - v9))
                     + (float)((float)(v20 - v10) * (float)(v20 - v10)))
             + (float)((float)(*v19 - *(float *)&a2) * (float)(*v19 - *(float *)&a2))) <= a5 )
        {
          *(float *)(v14 + 12) = *(float *)(v14 + 12) + -2000.0;
          if ( v16 )
            v16[14] = v16[14] + -2000.0;
        }
      }
    }
    v14 += 60;
    --v11;
  }
  while ( v11 );
  v21 = 40000;
  v22 = **(_DWORD **)(v12 + 9808980);
  do
  {
    if ( v22 && *(_DWORD *)v22 != result )
    {
      v23 = a1 == -1;
      if ( a1 != -1 )
        v23 = *(unsigned __int16 *)(v22 + 38) == a1;
      if ( v23 )
      {
        v24 = *(float **)(v22 + 20);
        v25 = v24 + 13;
        if ( !v24 )
          v25 = (float *)(v22 + 8);
        v26 = v24 + 14;
        v27 = v24 + 12;
        if ( !v24 )
          v26 = (float *)(v22 + 12);
        v28 = *v26;
        if ( !v24 )
          v27 = (float *)(v22 + 4);
        if ( sqrtf(
               (float)((float)((float)(*v25 - v9) * (float)(*v25 - v9))
                     + (float)((float)(v28 - v10) * (float)(v28 - v10)))
             + (float)((float)(*v27 - *(float *)&a2) * (float)(*v27 - *(float *)&a2))) <= a5 )
        {
          *(float *)(v22 + 12) = *(float *)(v22 + 12) + -2000.0;
          if ( v24 )
            v24[14] = v24[14] + -2000.0;
        }
      }
    }
    v22 += 60;
    --v21;
  }
  while ( v21 );
  v29 = 3000;
  v30 = **(_DWORD **)(v12 + 9808976);
  do
  {
    if ( v30 && *(_DWORD *)v30 != result )
    {
      v31 = a1 == -1;
      if ( a1 != -1 )
        v31 = *(unsigned __int16 *)(v30 + 38) == a1;
      if ( v31 )
      {
        v32 = *(float **)(v30 + 20);
        v33 = v32 + 13;
        if ( !v32 )
          v33 = (float *)(v30 + 8);
        v34 = v32 + 12;
        v35 = *v33;
        v36 = v32 + 14;
        if ( !v32 )
          v36 = (float *)(v30 + 12);
        v37 = v35 - v9;
        v38 = *v36;
        if ( !v32 )
          v34 = (float *)(v30 + 4);
        if ( sqrtf(
               (float)((float)(v37 * v37) + (float)((float)(v38 - v10) * (float)(v38 - v10)))
             + (float)((float)(*v34 - *(float *)&a2) * (float)(*v34 - *(float *)&a2))) <= a5 )
        {
          *(float *)(v30 + 12) = *(float *)(v30 + 12) + -2000.0;
          if ( v32 )
            v32[14] = v32[14] + -2000.0;
        }
      }
    }
    v30 += 420;
    --v29;
  }
  while ( v29 );
  return result;
}


// ======================================================================
