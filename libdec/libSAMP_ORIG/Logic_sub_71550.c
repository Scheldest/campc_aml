// ADDR: 0x9d43c
// SYMBOL: sub_9D43C
_DWORD *__fastcall sub_9D43C(_DWORD *result, float *a2, float *a3, unsigned int a4, float a5)
{
  _DWORD *v5; // r4
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
  int v24; // r1
  int v25; // r2
  float v26; // [sp+8h] [bp-38h]
  float v27; // [sp+8h] [bp-38h]
  float v28; // [sp+Ch] [bp-34h]
  float v29; // [sp+Ch] [bp-34h]

  if ( a4 >= 0x1000000 )
  {
    v5 = result;
    v6 = result[22];
    v28 = a2[1] + 0.5;
    v26 = *a2 + 0.5;
    if ( v6 == v5[23] )
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
        v11 = (void *)sub_885E4(8 * v9);
        v12 = (const void *)v5[24];
        v13 = v11;
        if ( v12 )
        {
          j_memcpy(v11, v12, 8 * v5[22]);
          sub_88614(v5[24]);
        }
        v6 = v5[22];
        v5[23] = v9;
        v5[24] = v13;
      }
    }
    v14 = v5[24];
    *(float *)(v14 + 8 * v6) = v26;
    *(float *)(v14 + 8 * v6 + 4) = v28;
    v15 = v5[22];
    v16 = v5[23];
    v17 = v15 + 1;
    v5[22] = v15 + 1;
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
        v20 = (void *)sub_885E4(8 * v18);
        v21 = (const void *)v5[24];
        v22 = v20;
        if ( v21 )
        {
          j_memcpy(v20, v21, 8 * v5[22]);
          sub_88614(v5[24]);
        }
        v17 = v5[22];
        v5[23] = v18;
        v5[24] = v22;
      }
    }
    v23 = v5[24];
    *(float *)(v23 + 8 * v17) = v27;
    *(float *)(v23 + 8 * v17 + 4) = v29;
    v24 = v5[24];
    v25 = v5[22] + 1;
    v5[22] = v25;
    result = (_DWORD *)sub_9C2AC((int)v5, v24, v25, a4, 0, a5);
    v5[22] = 0;
  }
  return result;
}


// ======================================================================
