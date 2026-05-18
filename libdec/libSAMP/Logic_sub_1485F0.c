// ADDR: 0x101ba0
// SYMBOL: sub_101BA0
unsigned int __fastcall sub_101BA0(int a1, float a2)
{
  int32x2_t v2; // d0
  unsigned int v3; // r5
  unsigned int result; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r1
  float32x2_t v10; // d16
  float v11; // s16
  unsigned __int64 v12; // d1
  float v13; // s18
  float v14; // s16
  float v15; // s20
  float v16; // s26
  float v17; // s24
  float32x2_t v18; // d19
  float v19; // s8
  float32x2_t v20; // d16
  float v21; // s0
  float32x2_t v22; // d15
  int v23; // s28
  float v24; // s4
  float v25; // s4
  float v26; // s24
  float v27; // s20
  float v28; // r0
  int v29; // r0
  unsigned int v30; // s0
  unsigned int v31; // s2
  int v32; // s4
  int v33; // r0
  unsigned int v34; // [sp+38h] [bp-D0h]
  unsigned int v35; // [sp+3Ch] [bp-CCh]
  _QWORD v36[2]; // [sp+48h] [bp-C0h] BYREF
  _BYTE v37[4]; // [sp+5Ch] [bp-ACh] BYREF
  _BYTE v38[4]; // [sp+60h] [bp-A8h] BYREF
  _BYTE v39[4]; // [sp+64h] [bp-A4h] BYREF
  int v40; // [sp+68h] [bp-A0h] BYREF
  int v41; // [sp+6Ch] [bp-9Ch]
  int v42; // [sp+70h] [bp-98h]
  int v43; // [sp+74h] [bp-94h]
  unsigned int v44; // [sp+78h] [bp-90h]
  unsigned int v45; // [sp+7Ch] [bp-8Ch]
  int v46; // [sp+80h] [bp-88h]
  int v47; // [sp+84h] [bp-84h]
  unsigned int v48; // [sp+88h] [bp-80h]
  unsigned int v49; // [sp+8Ch] [bp-7Ch]
  int v50; // [sp+90h] [bp-78h]
  int v51; // [sp+94h] [bp-74h]
  _BYTE v52[12]; // [sp+98h] [bp-70h]

  v3 = *(unsigned __int16 *)(a1 + 12);
  if ( v3 == 0xFFFF )
  {
    result = *(unsigned __int16 *)(a1 + 14);
    if ( result == 0xFFFF )
    {
      result = *(unsigned __int8 *)(a1 + 708) << 31;
      if ( result )
      {
        sub_F8910(a1, &v40);
        v10.n64_u64[0] = vsub_f32(*(float32x2_t *)&v52[4], *(float32x2_t *)(a1 + 772)).n64_u64[0];
        v11 = *(float *)(a1 + 712);
        v12 = vmul_f32(v10, v10).n64_u64[0];
        v13 = sqrtf(
                (float)(*(float *)&v12
                      + (float)((float)(*(float *)v52 - *(float *)(a1 + 768))
                              * (float)(*(float *)v52 - *(float *)(a1 + 768))))
              + *((float *)&v12 + 1));
        result = sub_F0B30();
        v2.n64_f32[0] = v11 * a2;
        if ( (float)(v11 * a2) >= v13 )
        {
          sub_F89BC(a1, 0, 0, 0);
          sub_F8A08(a1, 0, 0, 0);
          v29 = *(unsigned __int8 *)(a1 + 716);
          v30 = *(_DWORD *)(a1 + 768);
          v31 = *(_DWORD *)(a1 + 772);
          v32 = *(_DWORD *)(a1 + 776);
          *(_DWORD *)v52 = v30;
          *(_DWORD *)&v52[4] = v31;
          *(_DWORD *)&v52[8] = v32;
          if ( v29 )
          {
            sub_17D238(a1 + 800, &v40);
            v34 = *(_DWORD *)&v52[4];
            v35 = *(_DWORD *)v52;
            v33 = *(_DWORD *)&v52[8];
          }
          else
          {
            v35 = v30;
            v34 = v31;
            v33 = v32;
          }
          sub_F8F58(a1, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v51, v35, v34, v33);
          sub_F89BC(a1, 0, 0, 0);
          sub_F8A08(a1, 0, 0, 0);
          result = *(_BYTE *)(a1 + 708) & 0xFE;
          *(_BYTE *)(a1 + 708) = result;
        }
        else if ( a2 > 0.0 )
        {
          v14 = 0.001;
          v15 = *(float *)(a1 + 840);
          v16 = v15 - v13;
          v2.n64_f32[0] = 1.0 / (float)(v13 / v2.n64_f32[0]);
          v17 = *(float *)(a1 + 712) * (float)((float)(result - *(_DWORD *)(a1 + 844)) * 0.001);
          v18.n64_u64[0] = vmla_f32(
                             *(float32x2_t *)v52,
                             vsub_f32(*(float32x2_t *)(a1 + 768), *(float32x2_t *)v52),
                             vdup_lane_s32(v2, 0)).n64_u64[0];
          v19 = *(float *)&v52[8] + (float)((float)(*(float *)(a1 + 776) - *(float *)&v52[8]) * v2.n64_f32[0]);
          v20.n64_u64[0] = vsub_f32(v18, *(float32x2_t *)v52).n64_u64[0];
          *(float32x2_t *)v52 = v18;
          v21 = v19 - *(float *)&v52[8];
          *(float *)&v52[8] = v19;
          v22.n64_u64[0] = vmul_f32(vmul_n_f32(v20, 1.0 / a2), (float32x2_t)0x3CA3D70A3CA3D70ALL).n64_u64[0];
          *(float *)&v23 = (float)((float)(1.0 / a2) * v21) * 0.02;
          if ( sub_108700(LODWORD(v17), v15 - v13) > 0.1 )
          {
            if ( v17 > v16 )
            {
              v24 = (float)((float)(v17 - v16) * 0.1) + 1.0;
              *(float *)&v23 = v24 * *(float *)&v23;
              v22.n64_u64[0] = vmul_n_f32(v22, v24).n64_u64[0];
            }
            if ( v16 > v17 )
            {
              v25 = (float)((float)(v16 - v17) * -0.1) + 1.0;
              *(float *)&v23 = v25 * *(float *)&v23;
              v22.n64_u64[0] = vmul_n_f32(v22, v25).n64_u64[0];
            }
          }
          sub_F89BC(a1, v22.n64_i32[0], v22.n64_i32[1], v23);
          sub_102128(a1);
          if ( *(_BYTE *)(a1 + 716) )
          {
            v26 = v13 / v15;
            v27 = 1.0 - (float)(v13 / v15);
            sub_1021F0(a1, v39, v38, v37);
            v28 = sub_108818(LODWORD(v13), *(float *)(a1 + 824) - (float)(v26 * *(float *)(a1 + 836)));
            if ( (float)(v28 * 0.01) <= 0.001 )
            {
              v14 = v28 * 0.01;
              if ( (float)(v28 * 0.01) < -0.001 )
                v14 = -0.001;
            }
            sub_F8A08(a1, 0, 0, SLODWORD(v14));
            sub_F8910(a1, &v40);
            v36[0] = 1065353216LL;
            v36[1] = 0LL;
            sub_17D338(v36, a1 + 784, a1 + 800, LODWORD(v27));
            sub_17D2F2(v36);
            sub_17D238(v36, &v40);
          }
          else
          {
            sub_F8910(a1, &v40);
          }
          return (unsigned int)sub_F8F58(
                                 a1,
                                 v40,
                                 v41,
                                 v42,
                                 v43,
                                 v44,
                                 v45,
                                 v46,
                                 v47,
                                 v48,
                                 v49,
                                 v50,
                                 v51,
                                 *(unsigned int *)v52,
                                 *(unsigned int *)&v52[4],
                                 *(int *)&v52[8]);
        }
      }
    }
    else if ( dword_23DEF4 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(dword_23DEF4 + 944) + 16);
      if ( v8 )
      {
        if ( result <= 0x3E8 )
        {
          if ( *(_BYTE *)(v8 + result + 4) )
          {
            result = v8 + 4 * result;
            if ( *(_DWORD *)(result + 1004) )
              return sub_102084(a1);
          }
        }
      }
    }
  }
  else
  {
    result = dword_23DEF4;
    if ( dword_23DEF4 )
    {
      result = *(_DWORD *)(dword_23DEF4 + 944);
      v6 = *(_DWORD *)(result + 4);
      if ( v6 )
      {
        result = v3 >> 4;
        if ( v3 >> 4 <= 0x7C )
        {
          result = sub_F2396(v6, v3);
          if ( result )
          {
            v7 = *(_DWORD *)(v6 + 4 * v3);
            if ( v7 )
            {
              result = sub_F8C70(v7);
              if ( result )
                return sub_101FFC(a1, v7);
            }
          }
        }
      }
    }
  }
  return result;
}


// ======================================================================
