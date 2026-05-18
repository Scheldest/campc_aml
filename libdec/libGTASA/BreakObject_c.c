
// Address: 0x18fe94
// Original: j__ZN13BreakObject_c15CalcGroupCenterEP12BreakGroup_t
// Demangled: BreakObject_c::CalcGroupCenter(BreakGroup_t *)
// attributes: thunk
int BreakObject_c::CalcGroupCenter()
{
  return _ZN13BreakObject_c15CalcGroupCenterEP12BreakGroup_t();
}


// ============================================================

// Address: 0x18ffac
// Original: j__ZN13BreakObject_c4InitEP7CObjectP5RwV3dfi
// Demangled: BreakObject_c::Init(CObject *,RwV3d *,float,int)
// attributes: thunk
int __fastcall BreakObject_c::Init(int a1, int a2, int a3, int a4, int a5)
{
  return _ZN13BreakObject_c4InitEP7CObjectP5RwV3dfi(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x190420
// Original: j__ZN13BreakObject_c12SetBreakInfoEP11BreakInfo_ti
// Demangled: BreakObject_c::SetBreakInfo(BreakInfo_t *,int)
// attributes: thunk
int BreakObject_c::SetBreakInfo()
{
  return _ZN13BreakObject_c12SetBreakInfoEP11BreakInfo_ti();
}


// ============================================================

// Address: 0x190a20
// Original: j__ZN13BreakObject_c12SetGroupDataEP11RwMatrixTagP5RwV3df
// Demangled: BreakObject_c::SetGroupData(RwMatrixTag *,RwV3d *,float)
// attributes: thunk
int BreakObject_c::SetGroupData()
{
  return _ZN13BreakObject_c12SetGroupDataEP11RwMatrixTagP5RwV3df();
}


// ============================================================

// Address: 0x191ca4
// Original: j__ZN13BreakObject_c6UpdateEf
// Demangled: BreakObject_c::Update(float)
// attributes: thunk
int __fastcall BreakObject_c::Update(BreakObject_c *this, float a2)
{
  return _ZN13BreakObject_c6UpdateEf(this, a2);
}


// ============================================================

// Address: 0x19ba44
// Original: j__ZN13BreakObject_c6RenderEh
// Demangled: BreakObject_c::Render(uchar)
// attributes: thunk
int __fastcall BreakObject_c::Render(BreakObject_c *this, unsigned __int8 a2)
{
  return _ZN13BreakObject_c6RenderEh(this, a2);
}


// ============================================================

// Address: 0x19d644
// Original: j__ZN13BreakObject_c19DoCollisionResponseEP12BreakGroup_tfP5RwV3df
// Demangled: BreakObject_c::DoCollisionResponse(BreakGroup_t *,float,RwV3d *,float)
// attributes: thunk
int __fastcall BreakObject_c::DoCollisionResponse(int a1, int a2, int a3, int a4, float a5)
{
  return _ZN13BreakObject_c19DoCollisionResponseEP12BreakGroup_tfP5RwV3df(a1, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x451124
// Original: _ZN13BreakObject_cC2Ev
// Demangled: BreakObject_c::BreakObject_c(void)
void __fastcall BreakObject_c::BreakObject_c(BreakObject_c *this)
{
  *((_DWORD *)this + 2) = 0;
  *(_WORD *)this = 0;
}


// ============================================================

// Address: 0x45112c
// Original: _ZN13BreakObject_cD2Ev
// Demangled: BreakObject_c::~BreakObject_c()
void __fastcall BreakObject_c::~BreakObject_c(BreakObject_c *this)
{
  ;
}


// ============================================================

// Address: 0x451130
// Original: _ZN13BreakObject_c15CalcGroupCenterEP12BreakGroup_t
// Demangled: BreakObject_c::CalcGroupCenter(BreakGroup_t *)
int __fastcall BreakObject_c::CalcGroupCenter(int a1, int a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d8
  float32x2_t v4; // d11
  int v6; // r0
  int v7; // r2
  float32x2_t v8; // d10
  float32x2_t v9; // d9
  int v10; // r1
  float32x2_t v11; // d16
  float32x2_t v12; // d17
  float32x2_t v13; // d19
  float32x2_t v14; // d20
  float32x2_t v15; // d16
  float32x2_t v16; // d18
  float32x2_t v17; // d19
  float32x2_t v18; // d20
  float32x2_t v19; // d14
  float v20; // s26
  int v21; // r0
  int v22; // r2
  int v23; // r3
  int result; // r0
  float v25; // s2
  float v26; // s4
  float v27; // s0
  unsigned __int64 v28; // d1
  float v29; // [sp+0h] [bp-58h]
  float v30; // [sp+4h] [bp-54h]
  float v31; // [sp+8h] [bp-50h]
  float v32; // [sp+Ch] [bp-4Ch]

  v6 = *(unsigned __int16 *)(a2 + 78);
  if ( *(_WORD *)(a2 + 78) )
  {
    v7 = 0;
    v8.n64_u64[0] = 0x4B18967F4B18967FLL;
    v9.n64_u64[0] = 0xCB18967FCB18967FLL;
    v4.n64_u32[0] = 1259902591;
    v3.n64_u32[0] = -887581057;
    v10 = *(_DWORD *)(a2 + 80) + 16;
    do
    {
      v2.n64_u32[0] = *(_DWORD *)(v10 - 16);
      v11.n64_u64[0] = *(unsigned __int64 *)(v10 - 12);
      ++v7;
      v12.n64_u64[0] = vmax_f32(v11, v9).n64_u64[0];
      v13.n64_u64[0] = vmax_f32(v2, v3).n64_u64[0];
      v14.n64_u64[0] = vmin_f32(v2, v4).n64_u64[0];
      v2.n64_u32[0] = *(_DWORD *)(v10 - 4);
      v15.n64_u64[0] = vmin_f32(*(float32x2_t *)v10, vmin_f32(v11, v8)).n64_u64[0];
      v16.n64_u64[0] = vmax_f32(v2, v13).n64_u64[0];
      v17.n64_u64[0] = *(unsigned __int64 *)(v10 + 12);
      v18.n64_u64[0] = vmin_f32(v2, v14).n64_u64[0];
      v2.n64_u32[0] = *(_DWORD *)(v10 + 8);
      v9.n64_u64[0] = vmax_f32(v17, vmax_f32(*(float32x2_t *)v10, v12)).n64_u64[0];
      v10 += 72;
      v8.n64_u64[0] = vmin_f32(v17, v15).n64_u64[0];
      v3.n64_u64[0] = vmax_f32(v2, v16).n64_u64[0];
      v4.n64_u64[0] = vmin_f32(v2, v18).n64_u64[0];
    }
    while ( v7 < v6 );
  }
  else
  {
    v8.n64_u64[0] = 0x4B18967F4B18967FLL;
    v9.n64_u64[0] = 0xCB18967FCB18967FLL;
    v4.n64_u32[0] = 1259902591;
    v3.n64_u32[0] = -887581057;
  }
  v19.n64_u64[0] = vmul_f32(vadd_f32(v9, v8), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v20 = (float)(v3.n64_f32[0] + v4.n64_f32[0]) * 0.5;
  v32 = v20;
  if ( v6 )
  {
    v21 = 0;
    v22 = 0;
    do
    {
      ++v22;
      *(float *)(*(_DWORD *)(a2 + 80) + v21) = *(float *)(*(_DWORD *)(a2 + 80) + v21) - v20;
      *(float *)(*(_DWORD *)(a2 + 80) + v21 + 4) = *(float *)(*(_DWORD *)(a2 + 80) + v21 + 4) - v19.n64_f32[0];
      *(float *)(*(_DWORD *)(a2 + 80) + v21 + 8) = *(float *)(*(_DWORD *)(a2 + 80) + v21 + 8) - v19.n64_f32[1];
      *(float *)(*(_DWORD *)(a2 + 80) + v21 + 12) = *(float *)(*(_DWORD *)(a2 + 80) + v21 + 12) - v32;
      *(float *)(*(_DWORD *)(a2 + 80) + v21 + 16) = *(float *)(*(_DWORD *)(a2 + 80) + v21 + 16) - v19.n64_f32[0];
      *(float *)(*(_DWORD *)(a2 + 80) + v21 + 20) = *(float *)(*(_DWORD *)(a2 + 80) + v21 + 20) - v19.n64_f32[1];
      *(float *)(*(_DWORD *)(a2 + 80) + v21 + 24) = *(float *)(*(_DWORD *)(a2 + 80) + v21 + 24) - v32;
      *(float *)(*(_DWORD *)(a2 + 80) + v21 + 28) = *(float *)(*(_DWORD *)(a2 + 80) + v21 + 28) - v19.n64_f32[0];
      v23 = *(_DWORD *)(a2 + 80) + v21;
      v21 += 72;
      *(float *)(v23 + 32) = *(float *)(v23 + 32) - v19.n64_f32[1];
      v20 = (float)(v3.n64_f32[0] + v4.n64_f32[0]) * 0.5;
    }
    while ( v22 < *(unsigned __int16 *)(a2 + 78) );
  }
  result = RwV3dTransformVector();
  v25 = *(float *)(a2 + 52);
  v26 = *(float *)(a2 + 56);
  *(float *)(a2 + 48) = *(float *)(a2 + 48) + v29;
  *(float *)(a2 + 52) = v25 + v30;
  v27 = (float)(v3.n64_f32[0] - v20) - (float)(v4.n64_f32[0] - v20);
  v28 = vsub_f32(vsub_f32(v9, v19), vsub_f32(v8, v19)).n64_u64[0];
  *(float *)(a2 + 56) = v26 + v31;
  if ( v27 <= *(float *)&v28 )
  {
    result = 0;
LABEL_16:
    *(_BYTE *)(a2 + 88) = result;
    *(float *)(a2 + 92) = v27 * 0.5;
    return result;
  }
  if ( *(float *)&v28 <= v27 )
  {
    result = 1;
    v27 = *(float *)&v28;
    goto LABEL_16;
  }
  if ( *((float *)&v28 + 1) <= *(float *)&v28 )
  {
    v27 = *((float *)&v28 + 1);
    result = 2;
    goto LABEL_16;
  }
  return result;
}


// ============================================================

// Address: 0x451388
// Original: _ZN13BreakObject_c12SetGroupDataEP11RwMatrixTagP5RwV3df
// Demangled: BreakObject_c::SetGroupData(RwMatrixTag *,RwV3d *,float)
int __fastcall BreakObject_c::SetGroupData(int a1, __int64 *a2, __int64 *a3, float a4)
{
  int result; // r0
  float v9; // s18
  int v10; // r4
  int v11; // r5
  __int64 v12; // d16
  __int64 v13; // d17
  __int64 v14; // d20
  __int64 v15; // d21
  __int64 v16; // d23
  _QWORD *v17; // r0
  __int64 v18; // d18
  __int64 v19; // d19
  __int64 v20; // d16
  int v21; // r0
  float v22; // s0
  int v23; // r0
  float v24; // s0
  float v25; // s0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0

  result = *(_DWORD *)(a1 + 4);
  if ( result >= 1 )
  {
    v9 = a4 + a4;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v12 = *a2;
      v13 = a2[1];
      v14 = a2[2];
      v15 = a2[3];
      v16 = a2[7];
      v17 = (_QWORD *)(*(_DWORD *)(a1 + 8) + v10);
      v18 = a2[4];
      v19 = a2[5];
      v17[6] = a2[6];
      v17[7] = v16;
      v17[4] = v18;
      v17[5] = v19;
      *v17 = v12;
      v17[1] = v13;
      v17 += 2;
      *v17 = v14;
      v17[1] = v15;
      BreakObject_c::CalcGroupCenter();
      if ( !a3 )
        break;
      v20 = *a3;
      v21 = *(_DWORD *)(a1 + 8) + v10;
      *(_DWORD *)(v21 + 72) = *((_DWORD *)a3 + 2);
      *(_QWORD *)(v21 + 64) = v20;
      if ( a4 != 0.0 )
      {
        *(float *)(*(_DWORD *)(a1 + 8) + v10 + 64) = *(float *)(*(_DWORD *)(a1 + 8) + v10 + 64)
                                                   + (float)((float)(v9 * (float)((float)rand() * 4.6566e-10)) - a4);
        *(float *)(*(_DWORD *)(a1 + 8) + v10 + 68) = *(float *)(*(_DWORD *)(a1 + 8) + v10 + 68)
                                                   + (float)((float)(v9 * (float)((float)rand() * 4.6566e-10)) - a4);
        v22 = (float)rand();
        v23 = *(_DWORD *)(a1 + 8) + v10;
        v24 = *(float *)(v23 + 72) + (float)((float)(v9 * (float)(v22 * 4.6566e-10)) - a4);
LABEL_7:
        *(float *)(v23 + 72) = v24;
      }
      *(float *)(*(_DWORD *)(a1 + 8) + v10 + 96) = (float)((float)((float)rand() * 4.6566e-10) * 3.0) + 3.0;
      v26 = rand();
      *(float *)(*(_DWORD *)(a1 + 8) + v10 + 100) = (float)((float)((float)v26 * 4.6566e-10)
                                                          + (float)((float)v26 * 4.6566e-10))
                                                  + -1.0;
      v27 = rand();
      *(float *)(*(_DWORD *)(a1 + 8) + v10 + 104) = (float)((float)((float)v27 * 4.6566e-10)
                                                          + (float)((float)v27 * 4.6566e-10))
                                                  + -1.0;
      v28 = rand();
      *(float *)(*(_DWORD *)(a1 + 8) + v10 + 108) = (float)((float)((float)v28 * 4.6566e-10)
                                                          + (float)((float)v28 * 4.6566e-10))
                                                  + -1.0;
      RwV3dNormalize();
      ++v11;
      v29 = *(_DWORD *)(a1 + 8) + v10;
      v10 += 116;
      *(_BYTE *)(v29 + 76) = 0;
      result = *(_DWORD *)(a1 + 4);
      if ( v11 >= result )
        return result;
    }
    *(float *)(*(_DWORD *)(a1 + 8) + v10 + 64) = (float)(v9 * (float)((float)rand() * 4.6566e-10)) - a4;
    *(float *)(*(_DWORD *)(a1 + 8) + v10 + 68) = (float)(v9 * (float)((float)rand() * 4.6566e-10)) - a4;
    v25 = (float)rand();
    v23 = *(_DWORD *)(a1 + 8) + v10;
    v24 = (float)(v9 * (float)(v25 * 4.6566e-10)) - a4;
    goto LABEL_7;
  }
  return result;
}


// ============================================================

// Address: 0x4515a4
// Original: _ZN13BreakObject_c12SetBreakInfoEP11BreakInfo_ti
// Demangled: BreakObject_c::SetBreakInfo(BreakInfo_t *,int)
int __fastcall BreakObject_c::SetBreakInfo(int a1, int a2, int a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d1
  float32x2_t v5; // d2
  float32x2_t v6; // d3
  float32x2_t v7; // d8
  int v8; // r6
  unsigned __int16 *v10; // r0
  int v11; // r8
  int v12; // r0
  signed int v13; // r10
  unsigned int v14; // r3
  unsigned int v15; // r0
  signed int v16; // r2
  int8x16_t v17; // q8
  int32x4_t v18; // q9
  int v19; // lr
  unsigned int v20; // r3
  unsigned int *v21; // r1
  unsigned int v22; // r4
  unsigned int v23; // r6
  int32x4_t v24; // q8
  int v25; // r1
  __int64 v26; // r0
  float v27; // s0
  int v28; // r0
  _DWORD *v29; // r5
  int result; // r0
  int v31; // r12
  int v32; // r1
  int v33; // r11
  int v34; // r3
  int v35; // r0
  int v36; // lr
  int v37; // r6
  int v38; // r1
  int v39; // r0
  int v40; // r9
  int v41; // r10
  int v42; // r0
  float *v43; // r0
  float v44; // s22
  float v45; // s20
  float v46; // s18
  float32x2_t v47; // d3
  float32x2_t v48; // d3
  float32x2_t v49; // d3
  float32x2_t v50; // d3
  float32x2_t v51; // d3
  int v52; // r1
  int v53; // r2
  int v54; // [sp+8h] [bp-58h]
  int v56; // [sp+10h] [bp-50h]
  _WORD *v57; // [sp+14h] [bp-4Ch]
  int v58; // [sp+14h] [bp-4Ch]

  v8 = a3;
  v10 = (unsigned __int16 *)(a2 + 20);
  v57 = (_WORD *)(a2 + 20);
  if ( a3 != 1 )
    v10 = (unsigned __int16 *)(a2 + 32);
  v11 = *v10;
  *(_DWORD *)(a1 + 4) = v11;
  v12 = operator new[](116 * v11);
  *(_DWORD *)(a1 + 8) = v12;
  v56 = v8;
  if ( v11 )
  {
    v13 = 0;
    while ( 1 )
    {
      *(_WORD *)(v12 + 116 * v13 + 78) = 0;
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v13 + 84) = 0;
      if ( v8 == 1 )
      {
        v14 = 1;
        goto LABEL_21;
      }
      v15 = (unsigned __int16)*v57;
      if ( !*v57 )
      {
        v14 = 0;
        goto LABEL_21;
      }
      if ( v15 < 4 || (v16 = v15 - (v15 & 3), v15 == (v15 & 3)) )
      {
        v14 = 0;
        v16 = 0;
      }
      else
      {
        v17 = 0uLL;
        v18 = vdupq_n_s32(v13);
        v19 = a1;
        v20 = v15 - (v15 & 3);
        v21 = *(unsigned int **)(a2 + 28);
        do
        {
          v22 = v21[1];
          v20 -= 4;
          v23 = *v21;
          v21 += 2;
          v17 = vsubq_s32(v17, vceqq_s32(v18, vmovl_u16((uint16x4_t)__PAIR64__(v22, v23))));
        }
        while ( v20 );
        v8 = v56;
        a1 = v19;
        v24 = vaddq_s32(v17, vextq_s8(v17, v17, 8u));
        v14 = vaddq_s32(v24, vdupq_lane_s32((int32x2_t)v24.n128_u64[0], 1)).n128_u32[0];
        if ( (v15 & 3) == 0 )
          goto LABEL_21;
      }
      do
      {
        v25 = *(unsigned __int16 *)(*(_DWORD *)(a2 + 28) + 2 * v16++);
        if ( v13 == v25 )
          ++v14;
      }
      while ( v16 < (int)v15 );
LABEL_21:
      v26 = 72LL * v14;
      if ( !is_mul_ok(0x48u, v14) )
        HIDWORD(v26) = 1;
      if ( HIDWORD(v26) )
        LODWORD(v26) = -1;
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v13 + 80) = operator new[](v26);
      v27 = (float)(unsigned __int16)rand();
      v28 = *(_DWORD *)(a1 + 8) + 116 * v13++;
      *(_DWORD *)(v28 + 112) = (int)(float)((float)(v27 * 0.000015259) * 32.0) + 256;
      v11 = *(_DWORD *)(a1 + 4);
      if ( v13 >= v11 )
        break;
      v12 = *(_DWORD *)(a1 + 8);
    }
  }
  v29 = (_DWORD *)a2;
  result = (unsigned __int16)*v57;
  if ( *v57 )
  {
    v31 = 0;
    v7.n64_u32[0] = 1132396544;
    v32 = 0;
    do
    {
      v33 = v32;
      if ( v8 != 1 )
        v33 = *(unsigned __int16 *)(v29[7] + 2 * v32);
      v58 = v32;
      v34 = v29[6];
      v35 = *(_DWORD *)(a1 + 8) + 116 * v33;
      v36 = *(unsigned __int16 *)(v34 + v31 + 4);
      v37 = *(unsigned __int16 *)(v34 + v31 + 2);
      v38 = *(_DWORD *)(v35 + 80);
      v39 = *(unsigned __int16 *)(v35 + 78);
      v54 = v31;
      v40 = 9 * v39;
      v41 = *(unsigned __int16 *)(v34 + v31);
      *(_DWORD *)(v38 + 72 * v39) = *(_DWORD *)(v29[2] + 12 * v41);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 72 * v39 + 4) = *(_DWORD *)(v29[2] + 12 * v41 + 4);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 72 * v39 + 8) = *(_DWORD *)(v29[2] + 12 * v41 + 8);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 72 * v39 + 12) = *(_DWORD *)(v29[2] + 12 * v37);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 72 * v39 + 16) = *(_DWORD *)(v29[2] + 12 * v37 + 4);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 72 * v39 + 20) = *(_DWORD *)(v29[2] + 12 * v37 + 8);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 24) = *(_DWORD *)(v29[2] + 12 * v36);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 28) = *(_DWORD *)(v29[2] + 12 * v36 + 4);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 32) = *(_DWORD *)(v29[2] + 12 * v36 + 8);
      v42 = v33;
      if ( v56 == 1 )
        v42 = *(unsigned __int16 *)(v29[7] + 2 * v58);
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 84) = *(_DWORD *)(v29[9] + 4 * v42);
      v43 = (float *)(v29[12] + 12 * v42);
      v44 = *v43;
      v45 = v43[1];
      v46 = v43[2];
      if ( CPostEffects::IsVisionFXActive((CPostEffects *)v43) )
      {
        v3.n64_f32[0] = flt_6AE4BC;
        v4.n64_f32[0] = flt_6AE4B8;
        v5.n64_f32[0] = flt_6AE4B4;
      }
      else
      {
        v5.n64_f32[0] = *(float *)&AmbientLightColourForFrame * 255.0;
        v4.n64_f32[0] = flt_A83CE8 * 255.0;
        v3.n64_f32[0] = *(float *)&dword_A83CEC * 255.0;
        flt_6AE4B4 = *(float *)&AmbientLightColourForFrame * 255.0;
        flt_6AE4B8 = flt_A83CE8 * 255.0;
        flt_6AE4BC = *(float *)&dword_A83CEC * 255.0;
      }
      v29 = (_DWORD *)a2;
      v31 = v54 + 6;
      v6.n64_f32[0] = v5.n64_f32[0] + (float)(v44 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + 4 * v41));
      v47.n64_u64[0] = vmin_f32(v6, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 60) = (unsigned int)v47.n64_f32[0];
      v47.n64_f32[0] = v4.n64_f32[0]
                     + (float)(v45 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + ((4 * v41) | 1)));
      v48.n64_u64[0] = vmin_f32(v47, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 61) = (unsigned int)v48.n64_f32[0];
      v48.n64_f32[0] = v3.n64_f32[0]
                     + (float)(v46 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + ((4 * v41) | 2)));
      v49.n64_u64[0] = vmin_f32(v48, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 62) = (unsigned int)v49.n64_f32[0];
      v49.n64_f32[0] = v5.n64_f32[0] + (float)(v44 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + 4 * v37));
      v50.n64_u64[0] = vmin_f32(v49, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 64) = (unsigned int)v50.n64_f32[0];
      v50.n64_f32[0] = v4.n64_f32[0]
                     + (float)(v45 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + ((4 * v37) | 1)));
      v51.n64_u64[0] = vmin_f32(v50, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 65) = (unsigned int)v51.n64_f32[0];
      v51.n64_f32[0] = v3.n64_f32[0]
                     + (float)(v46 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + ((4 * v37) | 2)));
      v6.n64_u64[0] = vmin_f32(v51, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 66) = (unsigned int)v6.n64_f32[0];
      v5.n64_f32[0] = v5.n64_f32[0] + (float)(v44 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + 4 * v36));
      v5.n64_u64[0] = vmin_f32(v5, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 68) = (unsigned int)v5.n64_f32[0];
      v4.n64_f32[0] = v4.n64_f32[0] + (float)(v45 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + ((4 * v36) | 1)));
      v4.n64_u64[0] = vmin_f32(v4, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 69) = (unsigned int)v4.n64_f32[0];
      v3.n64_f32[0] = v3.n64_f32[0] + (float)(v46 * (float)*(unsigned __int8 *)(*(_DWORD *)(a2 + 16) + ((4 * v36) | 2)));
      v3.n64_u64[0] = vmin_f32(v3, v7).n64_u64[0];
      *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 70) = (unsigned int)v3.n64_f32[0];
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 36) = *(_DWORD *)(*(_DWORD *)(a2 + 12)
                                                                                                + 8 * v41);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 40) = *(_DWORD *)(*(_DWORD *)(a2 + 12)
                                                                                                + ((8 * v41) | 4));
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 44) = *(_DWORD *)(*(_DWORD *)(a2 + 12)
                                                                                                + 8 * v37);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 48) = *(_DWORD *)(*(_DWORD *)(a2 + 12)
                                                                                                + ((8 * v37) | 4));
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 52) = *(_DWORD *)(*(_DWORD *)(a2 + 12)
                                                                                                + 8 * v36);
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 80) + 8 * v40 + 56) = *(_DWORD *)(*(_DWORD *)(a2 + 12)
                                                                                                + ((8 * v36) | 4));
      ++*(_WORD *)(*(_DWORD *)(a1 + 8) + 116 * v33 + 78);
      result = *(unsigned __int16 *)(a2 + 20);
      v8 = v56;
      v32 = v58 + 1;
    }
    while ( v58 + 1 < result );
    v11 = *(_DWORD *)(a1 + 4);
  }
  if ( v11 >= 1 )
  {
    result = 0;
    v52 = 84;
    do
    {
      ++result;
      v53 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + v52);
      v52 += 116;
      if ( v53 )
      {
        ++*(_DWORD *)(v53 + 84);
        v11 = *(_DWORD *)(a1 + 4);
      }
    }
    while ( result < v11 );
  }
  return result;
}


// ============================================================

// Address: 0x451b80
// Original: _ZN13BreakObject_c4InitEP7CObjectP5RwV3dfi
// Demangled: BreakObject_c::Init(CObject *,RwV3d *,float,int)
int __fastcall BreakObject_c::Init(int a1, int a2, int a3, int a4, char a5)
{
  int v6; // r11
  int v8; // r6
  int v9; // r10
  int LTM; // r11
  double v11; // d16
  float v12; // s2
  int v14; // [sp+1Ch] [bp-5Ch]
  double v15; // [sp+20h] [bp-58h] BYREF
  float v16; // [sp+28h] [bp-50h]
  _BYTE v17[4]; // [sp+2Ch] [bp-4Ch] BYREF
  double v18; // [sp+30h] [bp-48h] BYREF
  float v19; // [sp+38h] [bp-40h]
  double v20; // [sp+40h] [bp-38h]
  int v21; // [sp+48h] [bp-30h]

  v6 = *(_DWORD *)(a2 + 24);
  if ( !v6 || *(_BYTE *)v6 != 1 )
    return 0;
  v8 = 0;
  v9 = g_BreakablePlugin;
  if ( *(_DWORD *)(*(_DWORD *)(v6 + 24) + g_BreakablePlugin) )
  {
    v14 = *(_DWORD *)(v6 + 24);
    BreakObject_c::SetBreakInfo();
    LTM = RwFrameGetLTM();
    BreakObject_c::SetGroupData();
    *(_BYTE *)(a1 + 1) = 1;
    *(_BYTE *)a1 = a5;
    *(_DWORD *)(a1 + 12) = 0;
    *(_BYTE *)(a1 + 2) = *(_BYTE *)(*(_DWORD *)(a2 + 356) + 76);
    *(_BYTE *)(a1 + 3) = (*(_DWORD *)(a2 + 28) & 0x4000) != 0;
    if ( **(_DWORD **)(v14 + v9) )
    {
      operator*();
      v16 = v19;
      v15 = v18;
    }
    else
    {
      v11 = *(double *)(LTM + 48);
      v16 = *(float *)(LTM + 56);
      v15 = v11;
      v16 = v16
          + (float)(*(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(a2 + 38)]) + 44) + 8) + 0.25);
    }
    if ( CWorld::ProcessVerticalLine((CVector *)&v15, -998637568, (int)&v18, (int)v17, 1, 0, 0, 0, 0, 0, 0) == 1 )
    {
      *(float *)(a1 + 16) = v19;
      *(double *)(a1 + 20) = v20;
      v12 = fabsf(*(float *)(a1 + 20));
      *(_DWORD *)(a1 + 28) = v21;
      if ( v12 < 0.01 && fabsf(*(float *)(a1 + 24)) < 0.01 && fabsf(*(float *)(a1 + 28)) < 0.01 )
      {
        *(_DWORD *)(a1 + 20) = 0;
        *(_DWORD *)(a1 + 24) = 0;
        *(_DWORD *)(a1 + 28) = 1065353216;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 3296329728LL;
      *(_QWORD *)(a1 + 24) = 0x3F80000000000000LL;
    }
    return 1;
  }
  return v8;
}


// ============================================================

// Address: 0x451d90
// Original: _ZN13BreakObject_c4ExitEv
// Demangled: BreakObject_c::Exit(void)
int __fastcall BreakObject_c::Exit(BreakObject_c *this)
{
  char *v2; // r0
  int v3; // r6
  int v4; // r5
  int result; // r0

  v2 = (char *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( *((int *)this + 1) < 1 )
    {
      operator delete[](v2);
    }
    else
    {
      v3 = 84;
      v4 = 0;
      do
      {
        if ( *(_DWORD *)&v2[v3] )
        {
          RwTextureDestroy(*(_DWORD *)&v2[v3]);
          *(_DWORD *)(*((_DWORD *)this + 2) + v3) = 0;
          v2 = (char *)*((_DWORD *)this + 2);
        }
        if ( *(_DWORD *)&v2[v3 - 4] )
        {
          operator delete[](*(void **)&v2[v3 - 4]);
          v2 = (char *)*((_DWORD *)this + 2);
        }
        ++v4;
        v3 += 116;
      }
      while ( v4 < *((_DWORD *)this + 1) );
      if ( v2 )
        operator delete[](v2);
    }
  }
  result = 0;
  *((_BYTE *)this + 1) = 0;
  return result;
}


// ============================================================

// Address: 0x451df0
// Original: _ZN13BreakObject_c19DoCollisionResponseEP12BreakGroup_tfP5RwV3df
// Demangled: BreakObject_c::DoCollisionResponse(BreakGroup_t *,float,RwV3d *,float)
int __fastcall BreakObject_c::DoCollisionResponse(_BYTE *a1, int a2, float a3, float *a4, float a5)
{
  float v6; // s0
  float v8; // s2
  float v10; // s8
  float v11; // s4
  float v12; // s10
  float v13; // s12
  float v14; // s12
  float v15; // s0
  int v16; // r0
  int v17; // r0
  int v18; // r0
  float v19; // r6
  float v20; // s2
  float v21; // s4
  float v22; // s6
  float v23; // s12
  int result; // r0
  double *v25; // r6
  int v26; // r8
  double v27; // d16
  int v28; // r0
  double v29; // d16
  _BYTE *v30; // [sp+20h] [bp-90h]
  float v31; // [sp+24h] [bp-8Ch] BYREF
  float v32; // [sp+28h] [bp-88h]
  int v33; // [sp+2Ch] [bp-84h]
  double v34; // [sp+30h] [bp-80h] BYREF
  int v35; // [sp+38h] [bp-78h]
  _BYTE v36[28]; // [sp+3Ch] [bp-74h] BYREF
  float v37; // [sp+58h] [bp-58h]
  float v38; // [sp+5Ch] [bp-54h]
  float v39; // [sp+60h] [bp-50h]
  float v40; // [sp+64h] [bp-4Ch]
  float v41; // [sp+68h] [bp-48h]
  float v42; // [sp+6Ch] [bp-44h]

  v6 = *(float *)(a2 + 64);
  v8 = *(float *)(a2 + 68);
  v10 = a4[1];
  v11 = *(float *)(a2 + 72);
  v12 = a4[2];
  v13 = (float)((float)(*a4 * v6) + (float)(v10 * v8)) + (float)(v11 * v12);
  v14 = (float)(v13 + v13) * 0.85;
  v15 = v6 - (float)(*a4 * v14);
  v16 = rand();
  v37 = (float)((float)((float)v16 * 4.6566e-10) + (float)((float)v16 * 4.6566e-10)) + -1.0;
  v17 = rand();
  v38 = (float)((float)((float)v17 * 4.6566e-10) + (float)((float)v17 * 4.6566e-10)) + -1.0;
  v18 = rand();
  v39 = (float)((float)((float)v18 * 4.6566e-10) + (float)((float)v18 * 4.6566e-10)) + -1.0;
  RwV3dNormalize();
  v37 = (float)(a3 * 0.05) * v37;
  v38 = (float)(a3 * 0.05) * v38;
  v39 = (float)(a3 * 0.05) * v39;
  v19 = COERCE_FLOAT(RwV3dLength());
  v41 = (float)(v8 - (float)(v10 * v14)) + v38;
  v42 = (float)(v11 - (float)(v14 * v12)) + v39;
  RwV3dNormalize();
  v40 = v19 * (float)(v15 + v37);
  v20 = v40 * 0.8;
  v41 = v19 * v41;
  v21 = v41 * 0.8;
  v42 = v19 * v42;
  v22 = v42 * 0.8;
  v23 = *(float *)(a2 + 92);
  *(_DWORD *)(a2 + 96) = 0;
  *(float *)(a2 + 64) = v20;
  *(float *)(a2 + 68) = v21;
  *(float *)(a2 + 72) = v22;
  *(float *)(a2 + 56) = v23 + a5;
  if ( v19 >= 0.05 )
  {
LABEL_4:
    result = (unsigned __int8)*a1;
    if ( *a1 )
      return result;
    goto LABEL_5;
  }
  *(_BYTE *)(a2 + 76) = 1;
  if ( *a1 )
  {
    *(_DWORD *)(a2 + 112) = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 32.0) + 32;
    goto LABEL_4;
  }
LABEL_5:
  v25 = (double *)(a2 + 48);
  v30 = a1;
  FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v36, 1.0, 1.0, 1.0, 0.1, 0.3, 0.0, 0.15);
  v26 = 4;
  do
  {
    v27 = *v25;
    v35 = *(_DWORD *)(a2 + 56);
    v34 = v27;
    *(float *)&v34 = *(float *)&v27 + (float)((float)((float)rand() * 4.6566e-10) + -0.5);
    *((float *)&v34 + 1) = *((float *)&v34 + 1) + (float)((float)((float)rand() * 4.6566e-10) + -0.5);
    v31 = (float)((float)((float)rand() * 4.6566e-10) * 0.3) + -0.15;
    v28 = rand();
    v33 = 0;
    v32 = (float)((float)((float)v28 * 4.6566e-10) * 0.3) + -0.15;
    FxSystem_c::AddParticle(dword_820544, (int)&v34, (int)&v31, 0, (int)v36, -1.0, 1.2, 0.6, 0);
    --v26;
  }
  while ( v26 );
  result = (unsigned __int8)v30[2];
  if ( v30[2] )
  {
    RwV3dLength();
    v29 = *v25;
    v35 = *(_DWORD *)(a2 + 56);
    v34 = v29;
    v31 = 0.0;
    v32 = 0.0;
    v33 = 1065353216;
    return Fx_c::AddSparks();
  }
  return result;
}


// ============================================================

// Address: 0x452194
// Original: _ZN13BreakObject_c11DoCollisionEP12BreakGroup_tf
// Demangled: BreakObject_c::DoCollision(BreakGroup_t *,float)
int __fastcall BreakObject_c::DoCollision(int result, int a2, int a3)
{
  float v3; // s0

  v3 = *(float *)(result + 16);
  if ( (float)(*(float *)(a2 + 56) - *(float *)(a2 + 92)) < v3 )
    return BreakObject_c::DoCollisionResponse(result, a2, a3, result + 20, v3);
  return result;
}


// ============================================================

// Address: 0x4521c8
// Original: _ZN13BreakObject_c6UpdateEf
// Demangled: BreakObject_c::Update(float)
int __fastcall BreakObject_c::Update(BreakObject_c *this, int a2)
{
  int v4; // r1
  char *v5; // r6
  int v6; // r10
  int v7; // r5
  int i; // r8
  int v9; // r0
  __int64 v10; // r0
  int v11; // r1
  float *v12; // r9
  int v13; // r0
  int v14; // r0
  int v15; // r0
  char *v16; // r0
  int v17; // r6
  int v18; // r5
  int result; // r0
  __int64 v20; // [sp+8h] [bp-78h]
  int v21; // [sp+10h] [bp-70h]

  v4 = *((_DWORD *)this + 1);
  if ( v4 < 1 )
    goto LABEL_22;
  v5 = (char *)this + 20;
  v6 = 1;
  v7 = 112;
  for ( i = 0; i < v4; ++i )
  {
    v9 = *((_DWORD *)this + 2);
    if ( !*(_BYTE *)(v9 + v7 - 36) )
    {
      *(float *)(v9 + v7 - 40) = *(float *)(v9 + v7 - 40) - (float)(*(float *)&a2 * 0.008);
      *(float *)(*((_DWORD *)this + 2) + v7 - 64) = *(float *)(*((_DWORD *)this + 2) + v7 - 64)
                                                  + (float)(*(float *)(*((_DWORD *)this + 2) + v7 - 48) * *(float *)&a2);
      *(float *)(*((_DWORD *)this + 2) + v7 - 60) = *(float *)(*((_DWORD *)this + 2) + v7 - 60)
                                                  + (float)(*(float *)(*((_DWORD *)this + 2) + v7 - 44) * *(float *)&a2);
      *(float *)(*((_DWORD *)this + 2) + v7 - 56) = *(float *)(*((_DWORD *)this + 2) + v7 - 56)
                                                  + (float)(*(float *)(*((_DWORD *)this + 2) + v7 - 40) * *(float *)&a2);
      v10 = *((_QWORD *)this + 1);
      if ( SHIDWORD(v10) > 4 )
      {
        v11 = *(unsigned __int8 *)(v10 + v7 - 24);
        if ( v11 == 2 )
        {
          v12 = (float *)(v10 + v7 - 80);
        }
        else if ( v11 == 1 )
        {
          v12 = (float *)(v10 + 116 * i + 16);
        }
        else if ( *(_BYTE *)(v10 + v7 - 24) )
        {
          v12 = 0;
        }
        else
        {
          v12 = (float *)(v10 + 116 * i);
        }
        if ( fabsf(
               acosf(
                 (float)((float)(*((float *)this + 5) * *v12) + (float)(*((float *)this + 6) * v12[1]))
               + (float)(*((float *)this + 7) * v12[2]))) > 0.01 )
        {
          RwV3dNormalize();
          v13 = *((_DWORD *)this + 2) + v7;
          v21 = *(_DWORD *)(v13 - 56);
          v20 = *(_QWORD *)(v13 - 64);
          RwMatrixRotate();
          v14 = *((_DWORD *)this + 2) + v7;
          *(_DWORD *)(v14 - 56) = v21;
          *(_QWORD *)(v14 - 64) = v20;
        }
      }
      else
      {
        RwMatrixRotate();
      }
      v9 = *((_DWORD *)this + 2);
      if ( (float)(*(float *)(v9 + v7 - 56) - *(float *)(v9 + v7 - 20)) < *((float *)this + 4) )
      {
        BreakObject_c::DoCollisionResponse((int)this, v9 + v7 - 112, a2, (int)v5, *((float *)this + 4));
        v9 = *((_DWORD *)this + 2);
      }
    }
    --*(_DWORD *)(v9 + v7);
    v15 = *((_DWORD *)this + 2);
    if ( *(int *)(v15 + v7) <= 0 )
      *(_DWORD *)(v15 + v7) = 0;
    else
      v6 = 0;
    v4 = *((_DWORD *)this + 1);
    v7 += 116;
  }
  if ( v6 << 24 )
  {
LABEL_22:
    v16 = (char *)*((_DWORD *)this + 2);
    if ( v16 )
    {
      if ( v4 < 1 )
      {
        operator delete[](v16);
      }
      else
      {
        v17 = 84;
        v18 = 0;
        do
        {
          if ( *(_DWORD *)&v16[v17] )
          {
            RwTextureDestroy(*(_DWORD *)&v16[v17]);
            *(_DWORD *)(*((_DWORD *)this + 2) + v17) = 0;
            v16 = (char *)*((_DWORD *)this + 2);
          }
          if ( *(_DWORD *)&v16[v17 - 4] )
          {
            operator delete[](*(void **)&v16[v17 - 4]);
            v16 = (char *)*((_DWORD *)this + 2);
          }
          ++v18;
          v17 += 116;
        }
        while ( v18 < *((_DWORD *)this + 1) );
        if ( v16 )
          operator delete[](v16);
      }
    }
    *((_BYTE *)this + 1) = 0;
  }
  result = *((_DWORD *)this + 3) + 1;
  *((_DWORD *)this + 3) = result;
  return result;
}


// ============================================================

// Address: 0x452468
// Original: _ZN13BreakObject_c6RenderEh
// Demangled: BreakObject_c::Render(uchar)
int __fastcall BreakObject_c::Render(BreakObject_c *this, int a2)
{
  int result; // r0
  int v4; // r5
  int v5; // r8
  int *v6; // r0
  int v7; // r6
  int v8; // r0
  int v9; // r6
  int v10; // r2
  int v11; // r0
  int v12; // r5
  int v13; // r0
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float v17; // s6
  float v18; // s8
  float v19; // s10
  int v20; // r9
  int v21; // r10
  int v22; // lr
  int v23; // r1
  char v24; // r6
  int v25; // r8
  char v26; // r11
  char v27; // r0
  int v28; // r0
  int v29; // [sp+40h] [bp-80h]
  int v30; // [sp+54h] [bp-6Ch]
  int v31; // [sp+60h] [bp-60h]
  int v32; // [sp+64h] [bp-5Ch]
  int v33; // [sp+68h] [bp-58h]
  int i; // [sp+6Ch] [bp-54h]
  int v35; // [sp+70h] [bp-50h]
  char v36; // [sp+74h] [bp-4Ch]
  float v37[16]; // [sp+80h] [bp-40h] BYREF

  result = *((unsigned __int8 *)this + 3);
  if ( result == a2 )
  {
    result = *((_DWORD *)this + 1);
    if ( result >= 1 )
    {
      v4 = 0;
      v5 = 0;
      do
      {
        v6 = *(int **)(*((_DWORD *)this + 2) + 116 * v5 + 84);
        if ( v6 )
          v7 = *v6;
        else
          v7 = 0;
        if ( v4 != v7 )
        {
          RenderEnd();
          RenderBegin();
          v4 = v7;
        }
        if ( !(v7 | v4) )
        {
          RenderEnd();
          v4 = 0;
          RenderBegin();
        }
        v31 = v4;
        v8 = *((_DWORD *)this + 2);
        v32 = v8 + 116 * v5;
        if ( *(_WORD *)(v32 + 78) )
        {
          v9 = 0;
          for ( i = *(unsigned __int16 *)(v32 + 78) - 1; ; --i )
          {
            RwV3dTransformPoints(v37, *(_DWORD *)(v8 + 116 * v5 + 80) + v9, 3, v32);
            v10 = v5;
            v11 = *((_DWORD *)this + 2) + 116 * v5;
            v12 = *(_DWORD *)(v11 + 112);
            v13 = *(_DWORD *)(v11 + 80) + v9;
            v33 = v9;
            v14 = *(float *)(v13 + 36);
            v15 = *(float *)(v13 + 40);
            v16 = *(float *)(v13 + 44);
            v17 = *(float *)(v13 + 48);
            v18 = *(float *)(v13 + 52);
            v19 = *(float *)(v13 + 56);
            v36 = *(_BYTE *)(v13 + 60);
            v35 = *(unsigned __int8 *)(v13 + 61);
            v20 = *(unsigned __int8 *)(v13 + 66);
            v21 = *(unsigned __int8 *)(v13 + 69);
            v22 = *(unsigned __int8 *)(v13 + 62);
            v23 = 31;
            v24 = *(_BYTE *)(v13 + 64);
            v25 = *(unsigned __int8 *)(v13 + 65);
            v26 = *(_BYTE *)(v13 + 68);
            v30 = *(unsigned __int8 *)(v13 + 70);
            v27 = 3;
            v29 = v25;
            v5 = v10;
            if ( !*(_BYTE *)this )
              v27 = 1;
            v28 = v12 << v27;
            if ( !*(_BYTE *)this )
              v23 = 127;
            v28 = (unsigned __int8)v28;
            if ( v12 > v23 )
              v28 = 255;
            RenderAddTri(
              v37[0],
              v37[1],
              v37[2],
              v37[3],
              v37[4],
              v37[5],
              v37[6],
              v37[7],
              v37[8],
              v14,
              v15,
              v16,
              v17,
              v18,
              v19,
              v36,
              v35,
              v22,
              v28,
              v24,
              v29,
              v20,
              v28,
              v26,
              v21,
              v30,
              v28);
            if ( !i )
              break;
            v8 = *((_DWORD *)this + 2);
            v9 = v33 + 72;
          }
        }
        ++v5;
        v4 = v31;
      }
      while ( v5 < *((_DWORD *)this + 1) );
      return RenderEnd();
    }
  }
  return result;
}


// ============================================================
