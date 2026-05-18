// ADDR: 0x173fcc
// SYMBOL: sub_173FCC
float *__fastcall sub_173FCC(float *result, float *a2, float *a3, unsigned int a4, float a5)
{
  int v5; // r4
  int v6; // r0
  int v9; // r5
  int v10; // r1
  void *v11; // r0
  const void *v12; // r1
  void *v13; // r8
  int v14; // r1
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r5
  int v19; // r1
  void *v20; // r0
  const void *v21; // r1
  void *v22; // r6
  int v23; // r1
  float *v24; // r1
  int v25; // r2
  float v26; // [sp+8h] [bp-38h]
  float v27; // [sp+8h] [bp-38h]
  float v28; // [sp+Ch] [bp-34h]
  float v29; // [sp+Ch] [bp-34h]

  if ( a4 >= 0x1000000 )
  {
    v5 = (int)result;
    v6 = *((_DWORD *)result + 22);
    v28 = a2[1] + 0.5;
    v26 = *a2 + 0.5;
    if ( v6 == *(_DWORD *)(v5 + 92) )
    {
      v9 = v6 + 1;
      if ( v6 )
        v10 = v6 + v6 / 2;
      else
        v10 = 8;
      if ( v10 > v9 )
        v9 = v10;
      if ( v6 < v9 )
      {
        v11 = (void *)sub_1654B0(8 * v9);
        v12 = *(const void **)(v5 + 96);
        v13 = v11;
        if ( v12 )
        {
          j_memcpy(v11, v12, 8 * *(_DWORD *)(v5 + 88));
          sub_165578(*(_DWORD *)(v5 + 96));
        }
        v6 = *(_DWORD *)(v5 + 88);
        *(_DWORD *)(v5 + 92) = v9;
        *(_DWORD *)(v5 + 96) = v13;
      }
    }
    v14 = *(_DWORD *)(v5 + 96);
    *(float *)(v14 + 8 * v6) = v26;
    *(float *)(v14 + 8 * v6 + 4) = v28;
    v15 = *(_DWORD *)(v5 + 88);
    v16 = *(_DWORD *)(v5 + 92);
    v17 = v15 + 1;
    *(_DWORD *)(v5 + 88) = v15 + 1;
    v27 = *a3 + 0.5;
    v29 = a3[1] + 0.5;
    if ( v15 + 1 == v16 )
    {
      v18 = v15 + 2;
      if ( v15 == -1 )
        v19 = 8;
      else
        v19 = v17 + v17 / 2;
      if ( v19 > v18 )
        v18 = v19;
      if ( v17 < v18 )
      {
        v20 = (void *)sub_1654B0(8 * v18);
        v21 = *(const void **)(v5 + 96);
        v22 = v20;
        if ( v21 )
        {
          j_memcpy(v20, v21, 8 * *(_DWORD *)(v5 + 88));
          sub_165578(*(_DWORD *)(v5 + 96));
        }
        v17 = *(_DWORD *)(v5 + 88);
        *(_DWORD *)(v5 + 92) = v18;
        *(_DWORD *)(v5 + 96) = v22;
      }
    }
    v23 = *(_DWORD *)(v5 + 96);
    *(float *)(v23 + 8 * v17) = v27;
    *(float *)(v23 + 8 * v17 + 4) = v29;
    v24 = *(float **)(v5 + 96);
    v25 = *(_DWORD *)(v5 + 88) + 1;
    *(_DWORD *)(v5 + 88) = v25;
    result = sub_172FDA((float *)v5, v24, v25, a4, 0, a5);
    *(_DWORD *)(v5 + 88) = 0;
  }
  return result;
}


// ======================================================================
