// ADDR: 0xc78a4
// SYMBOL: sub_C78A4
int __fastcall sub_C78A4(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // r4
  int v11; // r6
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r0
  int v17; // r11
  char *v18; // r5
  int v19; // r1
  int v20; // r0
  int v21; // r9
  int v22; // r10
  int v23; // r1
  int v24; // r6
  int v25; // r4
  int v26; // r0
  int result; // r0
  int v28; // [sp+8h] [bp-70h]
  int v29; // [sp+Ch] [bp-6Ch]
  int v30; // [sp+10h] [bp-68h]
  int v31; // [sp+14h] [bp-64h]
  int v32; // [sp+18h] [bp-60h]
  int v33; // [sp+1Ch] [bp-5Ch]
  int v34; // [sp+28h] [bp-50h] BYREF
  int v35; // [sp+2Ch] [bp-4Ch]
  int v36; // [sp+30h] [bp-48h]
  int v37; // [sp+34h] [bp-44h]
  int v38; // [sp+38h] [bp-40h]
  int v39; // [sp+3Ch] [bp-3Ch]
  int v40; // [sp+40h] [bp-38h]
  int v41; // [sp+44h] [bp-34h]
  int *v42; // [sp+48h] [bp-30h]
  int v43; // [sp+4Ch] [bp-2Ch]
  int v44; // [sp+50h] [bp-28h]

  v44 = a4;
  v10 = 2 * a3;
  v41 = a2;
  v11 = a6;
  v12 = a1[37];
  v43 = a3;
  if ( a3 == 2 )
    v10 = 3;
  if ( !v12 && a1[41] != -1 )
  {
    v13 = a1[40];
    v14 = sub_108848(24 * a1[36], v43 * v44);
    v15 = sub_108848(3 * v13, v14);
    if ( v15 < a6 )
      v11 = v15;
  }
  v16 = sub_108848(v11 - v10, v43);
  v17 = v16 + 1;
  if ( v16 > 1275 )
    v17 = 1276;
  v18 = (char *)&v34 - ((v17 * v43 + 7) & 0xFFFFFFF8);
  v42 = &v34 - 76;
  j_opus_repacketizer_init();
  v19 = a1[17];
  v37 = a1[30];
  v35 = a1[32];
  v36 = a1[34];
  a1[34] = a1[55];
  a1[32] = a1[59];
  v20 = a1[47];
  a1[30] = v20;
  v38 = v19;
  v39 = v11;
  if ( v19 )
    a1[30] = 1;
  else
    a1[57] = v20;
  if ( v43 < 1 )
  {
LABEL_25:
    result = j_opus_repacketizer_out_range_impl(v42, 0, v43, a5, v39, 0, a1[37] == 0);
    if ( result >= 0 )
    {
      a1[32] = v35;
      a1[34] = v36;
      a1[30] = v37;
      a1[17] = v38;
      return result;
    }
  }
  else
  {
    v40 = v43 - 1;
    if ( a7 )
    {
      v21 = 0;
      v22 = 0;
      while ( 1 )
      {
        v23 = v40;
        a1[548] = v22 < v40;
        a1[17] = 0;
        if ( v23 == v22 )
          a1[34] = 1002;
        if ( j_opus_encode_native(a1, v41 + 2 * v21 * a1[28], v44, v18, v17, a8, v28, v29, v30, v31, v32, v33, a9) < 0
          || j_opus_repacketizer_cat(v42, v18) < 0 )
        {
          break;
        }
        ++v22;
        v18 += v17;
        v21 += v44;
        if ( v22 >= v43 )
          goto LABEL_25;
      }
    }
    else
    {
      v24 = 0;
      v25 = 0;
      while ( 1 )
      {
        v26 = a1[28];
        a1[548] = v25 < v40;
        a1[17] = 0;
        if ( j_opus_encode_native(a1, v41 + 2 * v26 * v24, v44, v18, v17, a8, v28, v29, v30, v31, v32, v33, a9) < 0
          || j_opus_repacketizer_cat(v42, v18) < 0 )
        {
          break;
        }
        ++v25;
        v18 += v17;
        v24 += v44;
        if ( v25 >= v43 )
          goto LABEL_25;
      }
    }
  }
  return -3;
}


// ======================================================================
// ADDR: 0xc7b18
// SYMBOL: sub_C7B18
int __fastcall sub_C7B18(__int16 *a1, _WORD *a2, __int16 a3, __int16 a4, int a5, int a6, int a7, __int16 *a8, int a9)
{
  int v11; // r6
  int result; // r0
  _WORD *v14; // r2
  __int16 *v15; // r5
  int v16; // r11
  int v17; // r6
  __int16 v18; // r1
  __int16 v19; // t1
  int v20; // r11
  int v21; // r12
  _WORD *v22; // r2
  __int16 *v23; // r1
  __int16 v24; // r5
  __int16 v25; // r5^2
  __int16 v26; // r6
  int v27; // r12
  int v28; // r8
  __int16 *v29; // r2
  _WORD *v30; // r3
  int v31; // r1

  v11 = sub_108848(48000, a9);
  result = sub_108848(a5, v11);
  if ( a7 == 1 )
  {
    if ( result >= 1 )
    {
      v15 = a1;
      v14 = a2;
      v16 = 2 * v11;
      v17 = result;
      do
      {
        v18 = *a8;
        a8 = (__int16 *)((char *)a8 + v16);
        --v17;
        v19 = *v15++;
        *v14++ = (unsigned int)((__int16)((unsigned int)((__int16)((unsigned int)(v18 * v18) >> 15) * a4
                                                       + (__int16)(0x7FFF - ((v18 * v18) >> 15)) * a3) >> 15)
                              * v19) >> 15;
      }
      while ( v17 );
    }
  }
  else if ( result >= 1 )
  {
    v20 = 2 * v11;
    v21 = result;
    v22 = a2 + 1;
    v23 = a1 + 1;
    do
    {
      v24 = *a8;
      a8 = (__int16 *)((char *)a8 + v20);
      --v21;
      v25 = (unsigned int)((__int16)((unsigned int)(v24 * v24) >> 15) * a4
                         + (__int16)(0x7FFF - ((unsigned int)(v24 * v24) >> 15)) * a3) >> 15;
      *(v22 - 1) = (unsigned int)(v25 * *(v23 - 1)) >> 15;
      v26 = *v23;
      v23 += 2;
      *v22 = (unsigned int)(v25 * v26) >> 15;
      v22 += 2;
    }
    while ( v21 );
  }
  if ( result < a6 )
  {
    v27 = a6 - result;
    v28 = 0;
    v29 = &a1[result * a7];
    v30 = &a2[result * a7];
    do
    {
      v31 = 0;
      result = v27;
      do
      {
        --result;
        v30[v31] = (unsigned int)(v29[v31] * a4) >> 15;
        v31 += a7;
      }
      while ( result );
      ++v28;
      ++v29;
      ++v30;
    }
    while ( v28 < a7 );
  }
  return result;
}


// ======================================================================
