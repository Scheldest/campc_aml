
// Address: 0x18a2cc
// Original: j__ZN10COcclusion6AddOneEfffffffffjb
// Demangled: COcclusion::AddOne(float,float,float,float,float,float,float,float,float,uint,bool)
// attributes: thunk
int __fastcall COcclusion::AddOne(
        COcclusion *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        unsigned int a11,
        bool a12)
{
  return _ZN10COcclusion6AddOneEfffffffffjb(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
}


// ============================================================

// Address: 0x18b660
// Original: j__ZN10COcclusion4InitEv
// Demangled: COcclusion::Init(void)
// attributes: thunk
int __fastcall COcclusion::Init(COcclusion *this)
{
  return _ZN10COcclusion4InitEv(this);
}


// ============================================================

// Address: 0x18ced8
// Original: j__ZN10COcclusion19OccluderHidesBehindEP15CActiveOccluderS1_
// Demangled: COcclusion::OccluderHidesBehind(CActiveOccluder *,CActiveOccluder *)
// attributes: thunk
int __fastcall COcclusion::OccluderHidesBehind(COcclusion *this, CActiveOccluder *a2, CActiveOccluder *a3)
{
  return _ZN10COcclusion19OccluderHidesBehindEP15CActiveOccluderS1_(this, a2, a3);
}


// ============================================================

// Address: 0x1927a0
// Original: j__ZN10COcclusion18IsPositionOccludedE7CVectorf
// Demangled: COcclusion::IsPositionOccluded(CVector,float)
// attributes: thunk
int COcclusion::IsPositionOccluded()
{
  return _ZN10COcclusion18IsPositionOccludedE7CVectorf();
}


// ============================================================

// Address: 0x192f98
// Original: j__ZN10COcclusion22ProcessBeforeRenderingEv
// Demangled: COcclusion::ProcessBeforeRendering(void)
// attributes: thunk
int __fastcall COcclusion::ProcessBeforeRendering(COcclusion *this)
{
  return _ZN10COcclusion22ProcessBeforeRenderingEv(this);
}


// ============================================================

// Address: 0x5ae168
// Original: _ZN10COcclusion4InitEv
// Demangled: COcclusion::Init(void)
int __fastcall COcclusion::Init(COcclusion *this)
{
  int result; // r0

  COcclusion::NumInteriorOccludersOnMap = 0;
  result = 0xFFFF;
  COcclusion::NumOccludersOnMap = 0;
  COcclusion::FarAwayList = -1;
  COcclusion::NearbyList = -1;
  COcclusion::ListWalkThroughFA = -1;
  COcclusion::PreviousListWalkThroughFA = -1;
  return result;
}


// ============================================================

// Address: 0x5ae1cc
// Original: _ZN10COcclusion6AddOneEfffffffffjb
// Demangled: COcclusion::AddOne(float,float,float,float,float,float,float,float,float,uint,bool)
int __fastcall COcclusion::AddOne(
        int this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        unsigned int a11,
        bool a12)
{
  int v12; // r12
  unsigned int v13; // lr
  int v14; // s0
  int v15; // s2
  int v16; // s4
  float i; // s6
  float v21; // s6
  float v22; // s8
  float v23; // s12
  float v24; // s1
  int v25; // r5
  float v26; // s10
  char *v27; // r2
  char *v28; // r1
  __int16 v29; // r3

  v12 = 1;
  v13 = 0;
  v14 = (int)COERCE_FLOAT(LODWORD(a4) & 0x7FFFFFFF);
  v15 = (int)fabsf(a5);
  v16 = (int)fabsf(a6);
  if ( !v15 )
  {
    v12 = 2;
    v13 = 1;
  }
  if ( !v14 )
    v13 = v12;
  if ( !v16 )
    ++v13;
  if ( v13 <= 1 )
  {
    for ( i = a7; i < 0.0; i = i + 360.0 )
      ;
    for ( ; i > 360.0; i = i + -360.0 )
      ;
    while ( a8 < 0.0 )
      a8 = a8 + 360.0;
    for ( ; a8 > 360.0; a8 = a8 + -360.0 )
      ;
    while ( a9 < 0.0 )
      a9 = a9 + 360.0;
    for ( ; a9 > 360.0; a9 = a9 + -360.0 )
      ;
    v21 = i * 0.017453;
    v22 = a8 * 0.017453;
    v23 = a9 * 0.017453;
    v24 = *(float *)&this;
    if ( a11 )
    {
      this = COcclusion::NumInteriorOccludersOnMap;
      if ( COcclusion::NumInteriorOccludersOnMap <= 39 )
      {
        v25 = 9 * COcclusion::NumInteriorOccludersOnMap;
        this = COcclusion::NumInteriorOccludersOnMap + 1;
        v26 = a3 * 4.0;
        COcclusion::aInteriorOccluders[v25] = (int)(float)(v24 * 4.0);
        v27 = (char *)&COcclusion::aInteriorOccluders[v25];
        v27[14] = (unsigned int)(float)(v23 * 40.744);
        v27[13] = (unsigned int)(float)(v22 * 40.744);
        v27[12] = (unsigned int)(float)(v21 * 40.744);
        *((_WORD *)v27 + 1) = (int)(float)(a2 * 4.0);
        *((_WORD *)v27 + 2) = (int)v26;
        COcclusion::NumInteriorOccludersOnMap = this;
        *((_WORD *)v27 + 3) = (int)(float)((float)v15 * 4.0);
        *((_WORD *)v27 + 4) = (int)(float)((float)v14 * 4.0);
        *((_WORD *)v27 + 5) = (int)(float)((float)v16 * 4.0);
      }
    }
    else
    {
      this = COcclusion::NumOccludersOnMap;
      if ( COcclusion::NumOccludersOnMap < 1000 )
      {
        v28 = (char *)&COcclusion::aOccluders[9 * COcclusion::NumOccludersOnMap];
        v28[14] = (unsigned int)(float)(v23 * 40.744);
        v28[13] = (unsigned int)(float)(v22 * 40.744);
        v28[12] = (unsigned int)(float)(v21 * 40.744);
        COcclusion::aOccluders[9 * this] = (int)(float)(v24 * 4.0);
        *((_WORD *)v28 + 1) = (int)(float)(a2 * 4.0);
        *((_WORD *)v28 + 2) = (int)(float)(a3 * 4.0);
        *((_WORD *)v28 + 3) = (int)(float)((float)v15 * 4.0);
        *((_WORD *)v28 + 4) = (int)(float)((float)v14 * 4.0);
        *((_WORD *)v28 + 5) = (int)(float)((float)v16 * 4.0);
        v29 = COcclusion::FarAwayList & 0x7FFF;
        if ( a10 != 0.0 )
          v29 |= 0x8000u;
        COcclusion::FarAwayList = this;
        *((_WORD *)v28 + 8) = v29;
        COcclusion::NumOccludersOnMap = this + 1;
      }
    }
  }
  return this;
}


// ============================================================

// Address: 0x5ae4f8
// Original: _ZN10COcclusion22ProcessBeforeRenderingEv
// Demangled: COcclusion::ProcessBeforeRendering(void)
int __fastcall COcclusion::ProcessBeforeRendering(COcclusion *this)
{
  float32x2_t v1; // d2
  float32x2_t v2; // d5
  int16x4_t v3; // d16
  int16x4_t v4; // d17
  __int16 *v5; // r2
  int v6; // r0
  int v7; // r5
  COccluder *v8; // r4
  int v9; // r11
  int v10; // r1
  _WORD *v11; // r5
  float v12; // s6
  unsigned __int32 v13; // r4
  unsigned __int32 v14; // r5
  __int64 *v15; // r4
  int16x4_t v16; // d17
  unsigned __int64 v17; // d4
  float v18; // s6
  float32x2_t v19; // d4
  _WORD *v20; // r8
  int v21; // r4
  _WORD *v22; // r8
  int v23; // t1
  int v24; // r6
  __int16 v25; // r2
  int v26; // r5
  __int16 v27; // r6
  float32x2_t v28; // d9
  __int16 v29; // r8
  __int16 *v30; // r0
  float v31; // s0
  unsigned __int32 v32; // r3
  _WORD *v33; // r0
  int v34; // r1
  int v35; // t1
  int16x4_t v36; // d16
  unsigned __int64 v37; // d1
  float v38; // s0
  float32x2_t v39; // d1
  __int16 v40; // r2
  int result; // r0
  int v42; // r5
  int v43; // r11
  int i; // r4
  int v45; // r6
  char *v46; // r4
  unsigned __int32 v47; // [sp+34h] [bp-44h]

  v5 = 0;
  COcclusion::NumActiveOccluders = 0;
  if ( CGame::currArea )
  {
    if ( COcclusion::NumInteriorOccludersOnMap >= 1 )
    {
      v6 = 0;
      v7 = 1;
      v8 = (COccluder *)COcclusion::aInteriorOccluders;
LABEL_5:
      if ( COccluder::ProcessOneOccluder(v8, (CActiveOccluder *)&COcclusion::aActiveOccluders[86 * v6]) == 1 )
        ++COcclusion::NumActiveOccluders;
      while ( v7 < COcclusion::NumInteriorOccludersOnMap )
      {
        ++v7;
        v6 = COcclusion::NumActiveOccluders;
        v8 = (COccluder *)((char *)v8 + 18);
        if ( COcclusion::NumActiveOccluders <= 27 )
          goto LABEL_5;
      }
    }
  }
  else
  {
    LOWORD(v9) = COcclusion::ListWalkThroughFA;
    if ( (unsigned __int16)COcclusion::ListWalkThroughFA != 0xFFFF
      || (v5 = &COcclusion::ListWalkThroughFA,
          LOWORD(v9) = COcclusion::FarAwayList,
          COcclusion::PreviousListWalkThroughFA = -1,
          COcclusion::ListWalkThroughFA = COcclusion::FarAwayList,
          (unsigned __int16)COcclusion::FarAwayList != 0xFFFF) )
    {
      v3.n64_f32[0] = 0.25;
      v3.n64_f32[1] = 0.25;
      v10 = -1;
      v5 = (__int16 *)&TheCamera;
      do
      {
        if ( (unsigned __int16)v9 == 0xFFFF )
          break;
        v11 = &COcclusion::aOccluders[9 * (__int16)v9];
        v13 = *(_DWORD *)(v11 + 1);
        v14 = *(_DWORD *)(v11 + 3);
        v47 = v13;
        v15 = (__int64 *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v15 = &qword_951FAC;
        v4.n64_u32[0] = v47;
        v16.n64_u64[0] = vsub_f32(
                           *(float32x2_t *)((char *)v15 + 4),
                           vmul_f32(vcvt_f32_s32((int32x2_t)vmovl_s16(v4).n128_u64[0]), v3)).n64_u64[0];
        v17 = vmul_f32(v16, v16).n64_u64[0];
        v16.n64_u32[0] = v14;
        v4.n64_u64[0] = vcvt_f32_s32((int32x2_t)vmovl_s16(v16).n128_u64[0]).n64_u64[0];
        v12 = (float)(__int16)COcclusion::aOccluders[9 * (__int16)v9];
        v18 = (float)((float)((float)(*(float *)v15 + (float)(v12 * -0.25))
                            * (float)(*(float *)v15 + (float)(v12 * -0.25)))
                    + *(float *)&v17)
            + *((float *)&v17 + 1);
        v19.n64_u64[0] = vmul_f32(v4, v3).n64_u64[0];
        v2.n64_u32[0] = v19.n64_u32[1];
        if ( (float)(sqrtf(v18) + (float)(vmax_f32(v19, v2).n64_f32[0] * -0.5)) >= 250.0 )
        {
          COcclusion::PreviousListWalkThroughFA = v9;
          v9 = (unsigned __int16)COcclusion::aOccluders[9 * (__int16)v9 + 8] << 17 >> 17;
          COcclusion::ListWalkThroughFA = v9;
        }
        else
        {
          v20 = &COcclusion::aOccluders[9 * (__int16)v9];
          v23 = (unsigned __int16)v20[8];
          v22 = v20 + 8;
          v21 = v23;
          v24 = v23 << 17 >> 17;
          if ( (unsigned __int16)COcclusion::PreviousListWalkThroughFA == 0xFFFF )
          {
            COcclusion::FarAwayList = v24;
          }
          else
          {
            COcclusion::aOccluders[9 * COcclusion::PreviousListWalkThroughFA + 8] = COcclusion::aOccluders[9 * COcclusion::PreviousListWalkThroughFA + 8] & 0x8000 | v24 & 0x7FFF;
            v21 = (unsigned __int16)*v22;
          }
          v25 = COcclusion::NearbyList;
          COcclusion::NearbyList = v9;
          v9 = v21 << 17 >> 17;
          *v22 = v25 & 0x7FFF | v21 & 0x8000;
          COcclusion::ListWalkThroughFA = (__int16)(2 * v21) >> 1;
          v5 = (__int16 *)&TheCamera;
        }
        ++v10;
      }
      while ( v10 < 15 );
    }
    v26 = COcclusion::NearbyList;
    v27 = COcclusion::NearbyList;
    if ( (unsigned __int16)COcclusion::NearbyList != 0xFFFF )
    {
      v28.n64_f32[0] = 0.25;
      v28.n64_f32[1] = 0.25;
      v29 = -1;
      do
      {
        while ( 1 )
        {
          if ( COcclusion::NumActiveOccluders <= 27
            && COccluder::ProcessOneOccluder(
                 (COccluder *)&COcclusion::aOccluders[9 * v26],
                 (CActiveOccluder *)&COcclusion::aActiveOccluders[86 * COcclusion::NumActiveOccluders]) == 1 )
          {
            ++COcclusion::NumActiveOccluders;
          }
          v30 = &COcclusion::aOccluders[9 * v26];
          v31 = (float)*v30;
          v32 = *(_DWORD *)(v30 + 3);
          v5 = (__int16 *)(dword_951FBC + 48);
          if ( !dword_951FBC )
            v5 = (__int16 *)&qword_951FAC;
          v3.n64_u32[0] = *(_DWORD *)(v30 + 1);
          v35 = (unsigned __int16)v30[8];
          v33 = v30 + 8;
          v34 = v35;
          v36.n64_u64[0] = vsub_f32(
                             *(float32x2_t *)(v5 + 2),
                             vmul_f32(vcvt_f32_s32((int32x2_t)vmovl_s16(v3).n128_u64[0]), v28)).n64_u64[0];
          v37 = vmul_f32(v36, v36).n64_u64[0];
          v36.n64_u32[0] = v32;
          v26 = v35 << 17 >> 17;
          v3.n64_u64[0] = vcvt_f32_s32((int32x2_t)vmovl_s16(v36).n128_u64[0]).n64_u64[0];
          v38 = (float)((float)((float)(*(float *)v5 + (float)(v31 * -0.25))
                              * (float)(*(float *)v5 + (float)(v31 * -0.25)))
                      + *(float *)&v37)
              + *((float *)&v37 + 1);
          v39.n64_u64[0] = vmul_f32(v3, v28).n64_u64[0];
          v1.n64_u32[0] = v39.n64_u32[1];
          if ( (float)(sqrtf(v38) + (float)(vmax_f32(v39, v1).n64_f32[0] * -0.5)) >= 250.0 )
            break;
          v29 = v27;
          v27 = v26;
          if ( (unsigned __int16)v26 == 0xFFFF )
            goto LABEL_36;
        }
        if ( (unsigned __int16)v29 == 0xFFFF )
        {
          COcclusion::NearbyList = v26;
        }
        else
        {
          COcclusion::aOccluders[9 * v29 + 8] = COcclusion::aOccluders[9 * v29 + 8] & 0x8000 | v26 & 0x7FFF;
          v34 = (unsigned __int16)*v33;
        }
        v40 = COcclusion::FarAwayList;
        COcclusion::FarAwayList = v27;
        v5 = (__int16 *)(v40 & 0x7FFF | v34 & 0x8000);
        *v33 = (_WORD)v5;
        v26 = v34 << 17 >> 17;
        v27 = v26;
      }
      while ( (unsigned __int16)((__int16)(2 * v34) >> 1) != 0xFFFF );
    }
  }
LABEL_36:
  result = (int)&COcclusion::NumActiveOccluders;
  v42 = COcclusion::NumActiveOccluders;
  if ( COcclusion::NumActiveOccluders >= 1 )
  {
    v43 = 0;
    result = (int)&COcclusion::NumActiveOccluders;
    do
    {
      if ( v42 >= 1 )
      {
        for ( i = 0; i < v42; ++i )
        {
          if ( v43 == i )
          {
            i = v43;
          }
          else
          {
            result = COcclusion::aActiveOccluders[86 * v43 + 60];
            if ( COcclusion::aActiveOccluders[86 * i + 60] < result )
            {
              result = COcclusion::OccluderHidesBehind(
                         (COcclusion *)&COcclusion::aActiveOccluders[86 * v43],
                         (CActiveOccluder *)&COcclusion::aActiveOccluders[86 * i],
                         (CActiveOccluder *)v5);
              if ( result == 1 )
              {
                if ( v43 < --v42 )
                {
                  v45 = v43;
                  v46 = (char *)&COcclusion::aActiveOccluders[86 * v43 + 86];
                  do
                  {
                    memcpy_0(v46 - 172, v46, 0xACu);
                    ++v45;
                    v46 += 172;
                  }
                  while ( v45 < v42 );
                }
                result = (int)&COcclusion::NumActiveOccluders;
                --v43;
                i = v42;
                COcclusion::NumActiveOccluders = v42;
              }
            }
          }
        }
      }
      ++v43;
    }
    while ( v43 < v42 );
  }
  return result;
}


// ============================================================

// Address: 0x5afb48
// Original: _ZN10COcclusion19OccluderHidesBehindEP15CActiveOccluderS1_
// Demangled: COcclusion::OccluderHidesBehind(CActiveOccluder *,CActiveOccluder *)
bool __fastcall COcclusion::OccluderHidesBehind(int a1, int a2)
{
  int v2; // lr
  int v3; // r3
  float *v4; // r12
  int v5; // r8
  int v6; // r6
  float *v7; // r2
  float *v8; // r1
  float *v9; // r4
  float *v10; // r5
  float v11; // s0
  float v12; // s2
  float *v13; // r2
  float v14; // s4
  float v15; // s10
  float v16; // s8
  int v17; // r1

  v2 = *(char *)(a1 + 122);
  if ( !*(_BYTE *)(a1 + 122) )
    return *(_BYTE *)(a2 + 122) == 0;
  if ( v2 < 1 )
    return 1;
  v3 = *(char *)(a2 + 122);
  v4 = (float *)(a2 + 8);
  v5 = 0;
  while ( v3 < 1 )
  {
LABEL_9:
    ++v5;
    v17 = 1;
    if ( v5 >= v2 )
      return v17;
  }
  v6 = 0;
  v7 = (float *)(a1 + 20 * v5);
  v8 = v7 + 3;
  v9 = v7 + 4;
  v10 = v7 + 2;
  v11 = *v7;
  v12 = v7[1];
  v13 = v4;
  while ( 1 )
  {
    v14 = *(v13 - 2);
    v15 = *(v13 - 1);
    v16 = v13[1];
    if ( (float)((float)(v16 * (float)(v11 - v14)) - (float)(*v13 * (float)(v12 - v15))) < 0.0
      || (float)((float)(v16 * (float)((float)(v11 + (float)(*v10 * *v9)) - v14))
               - (float)(*v13 * (float)((float)(v12 + (float)(*v9 * *v8)) - v15))) < 0.0 )
    {
      return 0;
    }
    ++v6;
    v13 += 5;
    if ( v6 >= v3 )
      goto LABEL_9;
  }
}


// ============================================================

// Address: 0x5b0ef8
// Original: _ZN10COcclusion18IsPositionOccludedE7CVectorf
// Demangled: COcclusion::IsPositionOccluded(CVector,float)
int __fastcall COcclusion::IsPositionOccluded(float a1, float a2, float a3, float a4)
{
  float32x2_t v4; // d3
  int v9; // r4
  __int16 *v10; // r2
  float v11; // s10
  __int16 *v12; // r9
  float v13; // s8
  float32x2_t v14; // d17
  float32x2_t v15; // d1
  float *v16; // r11
  float32x2_t v17; // d16
  __int16 *v18; // r3
  float v19; // s2
  float v20; // s6
  float v21; // s2
  int v22; // r0
  int v23; // r1
  float32x2_t *v24; // r5
  float32x2_t v25; // d6
  unsigned __int64 v26; // d6
  int v27; // r0
  int v28; // r1
  float *v29; // r5
  float *i; // r6
  float v31; // s7
  float v32; // s5
  float v33; // s11
  int result; // r0
  float32x2_t v35; // [sp+10h] [bp-28h]
  float v36; // [sp+18h] [bp-20h]

  if ( COcclusion::NumActiveOccluders )
  {
    operator*();
    if ( v36 > 1.0 && COcclusion::NumActiveOccluders >= 1 )
    {
      v9 = 0;
      v10 = COcclusion::aActiveOccluders;
      v11 = a1;
      v12 = &COcclusion::aActiveOccluders[80];
      v13 = a2;
      v14.n64_u64[0] = vmul_n_f32(vcvt_f32_s32(*(int32x2_t *)&dword_9FC900), 1.0 / v36).n64_u64[0];
      v15.n64_u64[0] = vmul_n_f32(v14, 70.0 / CDraw::ms_fFOV).n64_u64[0];
      v16 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v16 = (float *)&qword_951FAC;
      v17.n64_u64[0] = vmul_f32(v35, v14).n64_u64[0];
      v18 = &COcclusion::aActiveOccluders[62];
      v4.n64_u32[0] = v15.n64_u32[1];
      v19 = vmax_f32(v15, v4).n64_f32[0];
      v20 = a3;
      v21 = v19 * a4;
      while ( 1 )
      {
        if ( (float)(v36 - a4) > (float)COcclusion::aActiveOccluders[86 * v9 + 60] )
        {
          v22 = SLOBYTE(COcclusion::aActiveOccluders[86 * v9 + 61]);
          if ( v22 < 1 )
          {
LABEL_12:
            v27 = SHIBYTE(COcclusion::aActiveOccluders[86 * v9 + 61]);
            if ( v27 < 1 )
              return 1;
            v28 = 0;
            v29 = (float *)v18;
            for ( i = (float *)v12; ; ++i )
            {
              v31 = v29[1];
              v32 = v29[2];
              v33 = (float)((float)((float)(*v29 * v11) + (float)(v31 * v13)) + (float)(v32 * v20)) - *i;
              if ( fabsf(v33) < a4
                || (float)(v33
                         * (float)((float)((float)((float)(*v16 * *v29) + (float)(v16[1] * v31)) + (float)(v16[2] * v32))
                                 - *i)) >= 0.0 )
              {
                break;
              }
              ++v28;
              v29 += 3;
              if ( v28 >= v27 )
                return 1;
            }
          }
          else
          {
            v23 = 0;
            v24 = (float32x2_t *)v10;
            while ( 1 )
            {
              v25.n64_u32[0] = v24[1].n64_u32[1];
              v25.n64_u32[1] = v24[1].n64_u32[0];
              v26 = vmul_f32(vsub_f32(v17, (float32x2_t)v24->n64_u64[0]), v25).n64_u64[0];
              if ( (float)(*(float *)&v26 - *((float *)&v26 + 1)) < v21 )
                break;
              ++v23;
              v24 = (float32x2_t *)((char *)v24 + 20);
              if ( v23 >= v22 )
                goto LABEL_12;
            }
          }
        }
        ++v9;
        v18 += 86;
        v12 += 86;
        v10 += 86;
        result = 0;
        if ( v9 >= COcclusion::NumActiveOccluders )
          return result;
      }
    }
  }
  return 0;
}


// ============================================================
