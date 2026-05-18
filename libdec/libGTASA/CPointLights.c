
// Address: 0x18a624
// Original: j__ZN12CPointLights29ProcessVerticalLineUsingCacheE7CVectorPf
// Demangled: CPointLights::ProcessVerticalLineUsingCache(CVector,float *)
// attributes: thunk
int CPointLights::ProcessVerticalLineUsingCache()
{
  return _ZN12CPointLights29ProcessVerticalLineUsingCacheE7CVectorPf();
}


// ============================================================

// Address: 0x18b0bc
// Original: j__ZN12CPointLights29GenerateLightsAffectingObjectEPK7CVectorPfP7CEntity
// Demangled: CPointLights::GenerateLightsAffectingObject(CVector const*,float *,CEntity *)
// attributes: thunk
int __fastcall CPointLights::GenerateLightsAffectingObject(
        CPointLights *this,
        const CVector *a2,
        float *a3,
        CEntity *a4)
{
  return _ZN12CPointLights29GenerateLightsAffectingObjectEPK7CVectorPfP7CEntity(this, a2, a3, a4);
}


// ============================================================

// Address: 0x191a00
// Original: j__ZN12CPointLights27RemoveLightsAffectingObjectEv
// Demangled: CPointLights::RemoveLightsAffectingObject(void)
// attributes: thunk
int __fastcall CPointLights::RemoveLightsAffectingObject(CPointLights *this)
{
  return _ZN12CPointLights27RemoveLightsAffectingObjectEv(this);
}


// ============================================================

// Address: 0x191ac8
// Original: j__ZN12CPointLights15RenderFogEffectEv
// Demangled: CPointLights::RenderFogEffect(void)
// attributes: thunk
int __fastcall CPointLights::RenderFogEffect(CPointLights *this)
{
  return _ZN12CPointLights15RenderFogEffectEv(this);
}


// ============================================================

// Address: 0x19354c
// Original: j__ZN12CPointLights4InitEv
// Demangled: CPointLights::Init(void)
// attributes: thunk
int __fastcall CPointLights::Init(CPointLights *this)
{
  return _ZN12CPointLights4InitEv(this);
}


// ============================================================

// Address: 0x194268
// Original: j__ZN12CPointLights8AddLightEh7CVectorS0_ffffhbP7CEntity
// Demangled: CPointLights::AddLight(uchar,CVector,CVector,float,float,float,float,uchar,bool,CEntity *)
// attributes: thunk
int CPointLights::AddLight()
{
  return _ZN12CPointLights8AddLightEh7CVectorS0_ffffhbP7CEntity();
}


// ============================================================

// Address: 0x5b12f8
// Original: _ZN12CPointLights4InitEv
// Demangled: CPointLights::Init(void)
_QWORD *__fastcall CPointLights::Init(CPointLights *this)
{
  _QWORD *result; // r0

  memset(&CPointLights::aCachedMapReads, 0, 0x180u);
  CPointLights::NextCachedValue = 0;
  qword_A47614[10] = 0LL;
  qword_A47614[11] = 0LL;
  qword_A47614[8] = 0LL;
  qword_A47614[9] = 0LL;
  qword_A47614[6] = 0LL;
  qword_A47614[7] = 0LL;
  qword_A47614[4] = 0LL;
  qword_A47614[5] = 0LL;
  qword_A47614[2] = 0LL;
  qword_A47614[3] = 0LL;
  result = qword_A47614;
  qword_A47614[0] = 0LL;
  qword_A47614[1] = 0LL;
  CPointLights::aCachedMapReadResults = 0LL;
  unk_A475FC = 0LL;
  unk_A47604 = 0LL;
  unk_A4760C = 0LL;
  return result;
}


// ============================================================

// Address: 0x5b1364
// Original: _ZN12CPointLights8AddLightEh7CVectorS0_ffffhbP7CEntity
// Demangled: CPointLights::AddLight(uchar,CVector,CVector,float,float,float,float,uchar,bool,CEntity *)
int __fastcall CPointLights::AddLight(
        int result,
        float a2,
        float a3,
        float a4,
        __int64 a5,
        int a6,
        float a7,
        float a8,
        float a9,
        float a10,
        char a11,
        char a12,
        int a13)
{
  float v13; // s2
  float *v14; // lr
  float v15; // s4
  float v16; // s6
  int v17; // r12
  float v18; // s8
  float v19; // s4
  char *v20; // r1
  float v21; // s0

  v13 = a7 + 15.0;
  v14 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v14 = (float *)&qword_951FAC;
  v15 = a2 - *v14;
  if ( v15 < v13 && v15 > (float)-v13 )
  {
    v16 = a3 - v14[1];
    if ( v16 < v13 && v16 > (float)-v13 )
    {
      v17 = CPointLights::NumLights;
      if ( CPointLights::NumLights <= 31 )
      {
        v18 = sqrtf((float)((float)(v15 * v15) + (float)(v16 * v16)) + (float)((float)(a4 - v14[2])
                                                                             * (float)(a4 - v14[2])));
        if ( v18 < v13 )
        {
          v19 = a10;
          *((float *)&CPointLights::aLights + 12 * CPointLights::NumLights) = a2;
          v20 = (char *)&CPointLights::aLights + 48 * v17;
          v20[45] = a11;
          v20[44] = result;
          *((float *)v20 + 1) = a3;
          *((float *)v20 + 2) = a4;
          *(_QWORD *)(v20 + 12) = a5;
          *((_DWORD *)v20 + 5) = a6;
          v20[46] = a12;
          *((float *)v20 + 6) = a7;
          *((_DWORD *)v20 + 10) = a13;
          if ( v18 >= (float)(v13 * 0.75) )
          {
            v21 = (float)((float)((float)(v18 / v13) + -0.75) * -4.0) + 1.0;
            v19 = v21 * a10;
            *((float *)v20 + 7) = v21 * a8;
            *((float *)v20 + 8) = v21 * a9;
          }
          else
          {
            *((float *)v20 + 7) = a8;
            *((float *)v20 + 8) = a9;
          }
          *((float *)&CPointLights::aLights + 12 * v17 + 9) = v19;
          result = v17 + 1;
          CPointLights::NumLights = v17 + 1;
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5b1508
// Original: _ZN12CPointLights29GenerateLightsAffectingObjectEPK7CVectorPfP7CEntity
// Demangled: CPointLights::GenerateLightsAffectingObject(CVector const*,float *,CEntity *)
int __fastcall CPointLights::GenerateLightsAffectingObject(
        CPointLights *this,
        const CVector *a2,
        float *a3,
        CEntity *a4)
{
  float32x2_t v4; // d4
  float32x2_t v5; // d10
  int v8; // r0
  int v9; // r9
  int *v10; // r12
  float v11; // s22
  float *v12; // r3
  float v13; // s6
  float v14; // s0
  float v15; // s8
  float v16; // s2
  float v17; // s4
  float v18; // s8
  float v19; // s6
  float v20; // s6
  float *v21; // r2
  float v22; // s10
  float v23; // s10
  float v24; // s8
  float v25; // s6
  int v26; // s4
  int v27; // s2
  int v28; // s0
  int v29; // r0
  char *v30; // r1
  _BYTE *v31; // r1
  int v32; // r2
  int v33; // t1
  int *v35; // [sp+10h] [bp-60h]

  if ( CPointLights::NumLights < 1 )
  {
    v11 = 1.0;
  }
  else
  {
    v5.n64_u32[0] = 0;
    v8 = 0;
    v9 = 0;
    v10 = &Scene;
    v11 = 1.0;
    do
    {
      v29 = 3 * v8;
      v30 = (char *)&CPointLights::aLights + 16 * v29;
      v33 = (unsigned __int8)v30[44];
      v31 = v30 + 44;
      v32 = v33;
      if ( (unsigned __int8)(v33 - 3) >= 2u )
      {
        v12 = (float *)((char *)&CPointLights::aLights + 16 * v29);
        v13 = v12[6];
        v14 = *v12 - *(float *)this;
        v15 = -v13;
        if ( v14 > (float)-v13 && v14 < v13 )
        {
          v16 = *((float *)&CPointLights::aLights + 4 * v29 + 1) - *((float *)this + 1);
          if ( v16 > v15 && v16 < v13 )
          {
            v17 = *((float *)&CPointLights::aLights + 4 * v29 + 2) - *((float *)this + 2);
            if ( v17 > v15 && v17 < v13 )
            {
              v18 = sqrtf((float)((float)(v14 * v14) + (float)(v16 * v16)) + (float)(v17 * v17));
              if ( v18 < v13 )
              {
                v19 = v18 / v13;
                if ( v32 == 2 )
                {
                  v11 = v11 * v19;
                }
                else
                {
                  v20 = 1.0 - v19;
                  if ( a2 )
                  {
                    v21 = (float *)((char *)&CPointLights::aLights + 16 * v29);
                    v22 = *(float *)a2 + (float)((float)(v20 * v21[7]) * 0.33333);
                    *(float *)a2 = v22;
                    v23 = v22 + (float)((float)(v20 * v21[8]) * 0.33333);
                    *(float *)a2 = v23;
                    *(float *)a2 = v23 + (float)((float)(v20 * v21[9]) * 0.33333);
                  }
                  if ( v18 != 0.0 )
                  {
                    v24 = 1.0 / v18;
                    v25 = v20 * v20;
                    *(float *)&v26 = v17 * v24;
                    *(float *)&v27 = v16 * v24;
                    *(float *)&v28 = v14 * v24;
                    if ( *v31 == 1 && *((float **)&CPointLights::aLights + 4 * v29 + 10) != a3 )
                    {
                      v4.n64_f32[0] = -0.5
                                    - (float)((float)((float)(*(float *)&v28
                                                            * *((float *)&CPointLights::aLights + 4 * v29 + 3))
                                                    + (float)(*(float *)&v27
                                                            * *((float *)&CPointLights::aLights + 4 * v29 + 4)))
                                            + (float)(*(float *)&v26 * *((float *)&CPointLights::aLights + 4 * v29 + 5)));
                      v4.n64_f32[0] = v4.n64_f32[0] + v4.n64_f32[0];
                      v4.n64_u64[0] = vmax_f32(v4, v5).n64_u64[0];
                      v25 = v25 * v4.n64_f32[0];
                    }
                    if ( v25 > 0.0 )
                    {
                      v35 = v10;
                      AddAnExtraDirectionalLight(
                        *v10,
                        v28,
                        v27,
                        v26,
                        v25 * *((float *)&CPointLights::aLights + 4 * v29 + 7),
                        v25 * *((float *)&CPointLights::aLights + 4 * v29 + 8),
                        v25 * *((float *)&CPointLights::aLights + 4 * v29 + 9));
                      v10 = v35;
                    }
                  }
                }
              }
            }
          }
        }
      }
      v8 = (__int16)++v9;
    }
    while ( CPointLights::NumLights > (__int16)v9 );
  }
  return LODWORD(v11);
}


// ============================================================

// Address: 0x5b17c8
// Original: _ZN12CPointLights18GetLightMultiplierEPK7CVector
// Demangled: CPointLights::GetLightMultiplier(CVector const*)
float __fastcall CPointLights::GetLightMultiplier(CPointLights *this, const CVector *a2)
{
  int v2; // r4
  float v3; // s4
  int v4; // r5
  float v5; // s0
  int v6; // r6
  int v7; // r4
  float *v8; // r3
  float v9; // s8
  float v10; // s10
  float v11; // s12
  float v12; // s14
  float v13; // s1
  float v14; // s10
  float v15; // s8

  if ( CPointLights::NumLights < 1 )
  {
    v3 = 1.0;
    v5 = 0.0;
  }
  else
  {
    v2 = 0;
    v3 = 1.0;
    v4 = 0;
    v5 = 0.0;
    do
    {
      v6 = 3 * v2;
      v7 = *((unsigned __int8 *)&CPointLights::aLights + 48 * v2 + 44);
      if ( (unsigned __int8)(v7 - 3) >= 2u )
      {
        v8 = (float *)((char *)&CPointLights::aLights + 16 * v6);
        v9 = v8[6];
        v10 = *v8 - *(float *)this;
        v11 = -v9;
        if ( v10 > (float)-v9 && v10 < v9 )
        {
          v12 = *((float *)&CPointLights::aLights + 4 * v6 + 1) - *((float *)this + 1);
          if ( v12 > v11 && v12 < v9 )
          {
            v13 = *((float *)&CPointLights::aLights + 4 * v6 + 2) - *((float *)this + 2);
            if ( v13 > v11 && v13 < v9 )
            {
              v14 = sqrtf((float)((float)(v10 * v10) + (float)(v12 * v12)) + (float)(v13 * v13));
              if ( v14 < v9 )
              {
                v15 = v14 / v9;
                if ( v7 == 2 )
                  v3 = v3 * v15;
                else
                  v5 = (float)((float)(v5
                                     + (float)((float)((float)(1.0 - v15)
                                                     * *((float *)&CPointLights::aLights + 4 * v6 + 7))
                                             * 0.33333))
                             + (float)((float)((float)(1.0 - v15) * *((float *)&CPointLights::aLights + 4 * v6 + 8))
                                     * 0.33333))
                     + (float)((float)((float)(1.0 - v15) * *((float *)&CPointLights::aLights + 4 * v6 + 9)) * 0.33333);
              }
            }
          }
        }
      }
      v2 = (__int16)++v4;
    }
    while ( CPointLights::NumLights > (__int16)v4 );
  }
  return v5 + v3;
}


// ============================================================

// Address: 0x5b194c
// Original: _ZN12CPointLights27RemoveLightsAffectingObjectEv
// Demangled: CPointLights::RemoveLightsAffectingObject(void)
int __fastcall CPointLights::RemoveLightsAffectingObject(CPointLights *this)
{
  return sub_18F870();
}


// ============================================================

// Address: 0x5b1960
// Original: _ZN12CPointLights15RenderFogEffectEv
// Demangled: CPointLights::RenderFogEffect(void)
int __fastcall CPointLights::RenderFogEffect(CPointLights *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  __int64 v3; // d8
  __int64 v4; // d9
  __int64 v5; // d10
  __int64 v6; // d11
  __int64 v7; // d12
  __int64 v8; // d13
  __int64 v9; // d14
  __int64 v10; // d15
  int result; // r0
  CSprite *v12; // r0
  CSprite *v13; // r0
  float v14; // s29
  int v15; // r1
  int v16; // r9
  float *v17; // r3
  int v18; // r0
  float v19; // s16
  float v20; // s27
  int v21; // r0
  float *v22; // r0
  float v23; // s4
  signed int v24; // r6
  float v25; // s0
  float *v26; // r2
  float *v27; // r8
  float v28; // s4
  float *v29; // r10
  float v30; // s2
  float *v31; // r0
  int v32; // r9
  float v33; // s20
  int v34; // r11
  float v35; // s0
  float v36; // s2
  float v37; // s4
  int v38; // s2
  float *v39; // r4
  int v40; // r0
  float v41; // s4
  float v42; // s8
  float v43; // s2
  float v44; // s10
  float v45; // s6
  float v46; // s18
  float v47; // s30
  float v48; // s23
  float v49; // s0
  float v50; // s0
  float v51; // s4
  float v52; // s2
  float v53; // s23
  float *v54; // r5
  int v55; // r0
  float *v56; // r3
  signed int v57; // r6
  float *v58; // r0
  float v59; // s20
  float v60; // s16
  int v61; // r9
  float v62; // s18
  int v63; // r11
  unsigned int v64; // r0
  int v65; // r10
  float v66; // s29
  float *v67; // r1
  float v68; // s2
  float v69; // s30
  float v70; // s0
  float v71; // s2
  unsigned __int8 v72; // [sp+20h] [bp-118h]
  float *v73; // [sp+30h] [bp-108h]
  float *v74; // [sp+34h] [bp-104h]
  float *v75; // [sp+54h] [bp-E4h]
  float *v76; // [sp+54h] [bp-E4h]
  float *v77; // [sp+58h] [bp-E0h]
  float *v78; // [sp+58h] [bp-E0h]
  int v79; // [sp+5Ch] [bp-DCh]
  float *v80; // [sp+5Ch] [bp-DCh]
  signed int v81; // [sp+60h] [bp-D8h]
  int v82; // [sp+60h] [bp-D8h]
  int v83; // [sp+64h] [bp-D4h]
  float *v84; // [sp+68h] [bp-D0h]
  signed int v85; // [sp+68h] [bp-D0h]
  float *v86; // [sp+6Ch] [bp-CCh]
  float v87[3]; // [sp+74h] [bp-C4h] BYREF
  float v88; // [sp+80h] [bp-B8h] BYREF
  float v89; // [sp+84h] [bp-B4h] BYREF
  float v90; // [sp+88h] [bp-B0h] BYREF
  float v91; // [sp+8Ch] [bp-ACh]
  float v92; // [sp+90h] [bp-A8h]
  char v93[4]; // [sp+94h] [bp-A4h] BYREF
  char v94[8]; // [sp+98h] [bp-A0h] BYREF
  float v95; // [sp+A0h] [bp-98h]
  CSprite *v96; // [sp+C4h] [bp-74h] BYREF
  float v97; // [sp+C8h] [bp-70h]
  float v98; // [sp+CCh] [bp-6Ch]
  __int64 v99; // [sp+D0h] [bp-68h]
  __int64 v100; // [sp+D8h] [bp-60h]
  __int64 v101; // [sp+E0h] [bp-58h]
  __int64 v102; // [sp+E8h] [bp-50h]
  __int64 v103; // [sp+F0h] [bp-48h]
  __int64 v104; // [sp+F8h] [bp-40h]
  __int64 v105; // [sp+100h] [bp-38h]
  __int64 v106; // [sp+108h] [bp-30h]

  result = (unsigned __int8)CCutsceneMgr::ms_running;
  if ( !CCutsceneMgr::ms_running )
  {
    v99 = v3;
    v100 = v4;
    v101 = v5;
    v102 = v6;
    v103 = v7;
    v104 = v8;
    v105 = v9;
    v106 = v10;
    RwRenderStateSet(14, 0);
    RwRenderStateSet(8, 0);
    v72 = 1;
    RwRenderStateSet(6, 1);
    RwRenderStateSet(12, 1);
    RwRenderStateSet(10, 2);
    RwRenderStateSet(11, 2);
    v12 = (CSprite *)RwRenderStateSet(1, *(_DWORD *)gpCloudTex);
    CSprite::InitSpriteBuffer(v12);
    v13 = (CSprite *)CPointLights::NumLights;
    if ( CPointLights::NumLights >= 1 )
    {
      v14 = 3.0;
      v15 = 0;
      do
      {
        v16 = 3 * v15;
        v83 = v15;
        v17 = (float *)((char *)&CPointLights::aLights + 48 * v15);
        v18 = *((unsigned __int8 *)v17 + 45);
        if ( (unsigned __int8)(v18 - 1) <= 1u )
        {
          v19 = 0.4;
          v20 = v14;
          if ( v18 == 1 )
          {
            v19 = CWeather::Foggyness;
            v20 = 9.0;
          }
          if ( v19 != 0.0 )
          {
            v86 = (float *)((char *)&CPointLights::aLights + 48 * v15);
            v21 = *((unsigned __int8 *)v86 + 44);
            if ( (unsigned int)(v21 - 3) >= 2 && *((_BYTE *)&CPointLights::aLights + 48 * v15 + 44) )
            {
              if ( v21 == 1 )
              {
                v2.n64_f32[0] = *v17;
                v22 = (float *)((char *)&CPointLights::aLights + 48 * v15);
                v1.n64_f32[0] = (float)(v22[3] * 12.0) + *v17;
                v23 = vmin_f32(v1, v2).n64_f32[0];
                v1.n64_u64[0] = vmax_f32(v1, v2).n64_u64[0];
                v24 = ((int)(float)(v23 + -5.0) + ((unsigned int)((int)(float)(v23 + -5.0) >> 31) >> 30)) & 0xFFFFFFFC;
                v79 = (int)(float)(v1.n64_f32[0] + 5.0) + 4;
                if ( v24 <= v79 )
                {
                  v25 = v22[1];
                  v26 = v22 + 1;
                  v27 = v22 + 4;
                  v28 = v25;
                  v29 = v22 + 3;
                  v30 = (float)(v22[4] * 12.0) + v25;
                  if ( v30 < v25 )
                  {
                    v28 = (float)(v22[4] * 12.0) + v25;
                    v30 = v22[1];
                  }
                  v81 = ((int)(float)(v28 + -5.0) + ((unsigned int)((int)(float)(v28 + -5.0) >> 31) >> 30)) & 0xFFFFFFFC;
                  v31 = (float *)((char *)&CPointLights::aLights + 48 * v15);
                  v75 = v31 + 9;
                  v74 = v31 + 8;
                  v73 = v31 + 7;
                  v77 = v31 + 5;
                  v84 = v31 + 2;
                  v32 = (int)(float)(v30 + 5.0) + 4;
                  do
                  {
                    if ( v81 <= v32 )
                    {
                      v33 = (float)v24;
                      v34 = v81;
                      do
                      {
                        if ( ((v34 ^ v24) & 4) != 0 )
                        {
                          v35 = v33 - *v17;
                          v36 = (float)v34 - *v26;
                          v37 = (float)(v35 * *v29) + (float)(v36 * *v27);
                          if ( v37 > 0.0
                            && v37 < 12.0
                            && (float)((float)((float)(v35 * v35) + (float)(v36 * v36)) - (float)(v37 * v37)) < 25.0 )
                          {
                            v91 = (float)v34;
                            v90 = (float)v24;
                            *(float *)&v38 = (float)(*v84 + 10.0) + -20.0;
                            v92 = *v84 + 10.0;
                            v39 = v26;
                            v40 = CWorld::ProcessVerticalLine(
                                    (CVector *)&v90,
                                    v38,
                                    (int)v94,
                                    (int)v93,
                                    1,
                                    0,
                                    0,
                                    0,
                                    1,
                                    0,
                                    0);
                            v17 = v86;
                            v26 = v39;
                            if ( v40 == 1 )
                            {
                              v41 = (float)v34 - *v39;
                              v42 = *v27;
                              v43 = v33 - *v86;
                              v44 = *v29;
                              v45 = (float)(v95 + 1.3) - *v84;
                              v92 = v95 + 1.3;
                              v46 = (float)((float)(v43 * v44) + (float)(v41 * v42)) + (float)(v45 * *v77);
                              if ( v46 > 0.0 && v46 < 12.0 )
                              {
                                v47 = (float)((float)(v43 * v43) + (float)(v41 * v41)) + (float)(v45 * v45);
                                v48 = v47 - (float)(v46 * v46);
                                if ( v48 < 25.0 )
                                {
                                  v87[1] = (float)v34;
                                  v87[0] = (float)v24;
                                  v87[2] = v95 + 1.3;
                                  if ( CSprite::CalcScreenCoors((int)v87, (int)&v96, (int)&v89, (int)&v88, 1, 1) == 1 )
                                  {
                                    v49 = sqrtf(v48);
                                    v50 = (float)((float)((float)((float)(v19 * 50.0) * v46) / sqrtf(v47))
                                                * (float)(1.0 - (float)((float)(v46 / 12.0) * (float)(v46 / 12.0))))
                                        * (float)(1.0 - (float)((float)(v49 / 5.0) * (float)(v49 / 5.0)));
                                    v51 = *(float *)&dword_5B20F8[((v34 ^ (unsigned int)v24) >> 3) & 7];
                                    v52 = (double)(CTimer::m_snTimeInMilliseconds & 0x1FFF) * 0.000766601563;
                                    CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect(
                                      v96,
                                      v97,
                                      v98,
                                      v51 * v89,
                                      v51 * v88,
                                      COERCE_FLOAT((unsigned int)(float)(v50 * *v73)),
                                      (unsigned int)(float)(v50 * *v74),
                                      (unsigned int)(float)(v50 * *v75),
                                      (int)v50,
                                      1.0 / v98,
                                      v52,
                                      COERCE_FLOAT(255),
                                      v72);
                                  }
                                  v17 = v86;
                                  v26 = v39;
                                }
                              }
                            }
                          }
                        }
                        v34 += 4;
                      }
                      while ( v34 <= v32 );
                    }
                    v24 += 4;
                  }
                  while ( v24 <= v79 );
                }
              }
            }
            else
            {
              v53 = v14;
              v54 = (float *)((char *)&CPointLights::aLights + 48 * v15 + 4);
              v55 = CPointLights::ProcessVerticalLineUsingCache();
              v56 = v86;
              if ( v55 == 1 )
              {
                v82 = (int)(float)(v20 + *v86) + 2;
                v57 = ((int)(float)(*v86 - v20) + ((unsigned int)(int)(float)(*v86 - v20) >> 31)) & 0xFFFFFFFE;
                if ( v57 <= v82 )
                {
                  v58 = (float *)((char *)&CPointLights::aLights + 16 * v16);
                  v80 = v58 + 9;
                  v78 = v58 + 8;
                  v59 = v87[0] + 1.6;
                  v76 = v58 + 7;
                  v60 = v19 * 37.0;
                  v61 = (int)(float)(v20 + *v54) + 2;
                  v85 = ((int)(float)(*v54 - v20) + ((unsigned int)(int)(float)(*v54 - v20) >> 31)) & 0xFFFFFFFE;
                  do
                  {
                    if ( v85 <= v61 )
                    {
                      v62 = (float)v57;
                      v63 = v85;
                      do
                      {
                        v64 = (v57 / 2) ^ (v63 / 2);
                        if ( (v64 & 1) != 0 )
                        {
                          v65 = (v64 >> 1) & 7;
                          v66 = sqrtf(
                                  (float)((float)(v62 - *v56) * (float)(v62 - *v56))
                                + (float)((float)((float)v63 - *v54) * (float)((float)v63 - *v54)));
                          if ( v66 < v20 )
                          {
                            v67 = (float *)(dword_951FBC + 48);
                            if ( !dword_951FBC )
                              v67 = (float *)&qword_951FAC;
                            v68 = sqrtf(
                                    (float)((float)(v62 - *v67) * (float)(v62 - *v67))
                                  + (float)((float)((float)v63 - v67[1]) * (float)((float)v63 - v67[1])));
                            if ( v68 < 15.0 )
                            {
                              v69 = 1.0;
                              if ( v68 >= 7.5 )
                                v69 = (float)((float)(v68 + -7.5) / -7.5) + 1.0;
                              v91 = (float)v63;
                              v90 = (float)v57;
                              v92 = v59;
                              if ( CSprite::CalcScreenCoors((int)&v90, (int)&v96, (int)&v89, (int)&v88, 1, 1) == 1 )
                              {
                                v70 = (float)(v60 * (float)(1.0 - (float)((float)(v66 / v20) * (float)(v66 / v20))))
                                    * v69;
                                v71 = (double)((2300 * (_WORD)v65 + (_WORD)CTimer::m_snTimeInMilliseconds) & 0x7FFF)
                                    * 0.000191650391;
                                CSprite::RenderBufferedOneXLUSprite_Rotate_Aspect(
                                  v96,
                                  v97,
                                  v98,
                                  *(float *)&dword_5B20F8[v65] * v89,
                                  (float)(*(float *)&dword_5B20F8[v65] * v88) * 0.7,
                                  COERCE_FLOAT((unsigned int)(float)(v70 * *v76)),
                                  (unsigned int)(float)(v70 * *v78),
                                  (unsigned int)(float)(v70 * *v80),
                                  (int)v70,
                                  1.0 / v98,
                                  v71,
                                  COERCE_FLOAT(255),
                                  v72);
                              }
                              v56 = v86;
                            }
                          }
                        }
                        v63 += 2;
                      }
                      while ( v63 <= v61 );
                    }
                    v57 += 2;
                  }
                  while ( v57 <= v82 );
                }
              }
              v14 = v53;
            }
          }
        }
        v13 = (CSprite *)CPointLights::NumLights;
        v15 = v83 + 1;
      }
      while ( v83 + 1 < CPointLights::NumLights );
    }
    return CSprite::FlushSpriteBuffer(v13);
  }
  return result;
}


// ============================================================

// Address: 0x5b2128
// Original: _ZN12CPointLights29ProcessVerticalLineUsingCacheE7CVectorPf
// Demangled: CPointLights::ProcessVerticalLineUsingCache(CVector,float *)
int __fastcall CPointLights::ProcessVerticalLineUsingCache(double a1, float a2, _DWORD *a3)
{
  float v4; // s2
  float v6; // s4
  int v7; // r2
  float *v8; // r0
  int v9; // r1
  int v10; // r5
  double v11; // d16
  int v12; // r3
  float *v13; // r2
  int v14; // r2
  char v16[4]; // [sp+20h] [bp-50h] BYREF
  char v17[8]; // [sp+24h] [bp-4Ch] BYREF
  int v18; // [sp+2Ch] [bp-44h]
  double v19; // [sp+50h] [bp-20h] BYREF
  float v20; // [sp+58h] [bp-18h]

  v19 = a1;
  v4 = *((float *)&a1 + 1);
  v6 = *(float *)&a1;
  v20 = a2;
  v7 = 0;
  v8 = (float *)&unk_A47478;
  do
  {
    v9 = v7;
    if ( *(v8 - 1) == v6 && *v8 == v4 )
    {
      *a3 = CPointLights::aCachedMapReadResults[v7];
      return 1;
    }
    v8 += 3;
    ++v7;
  }
  while ( v9 < 31 );
  v10 = 0;
  if ( CWorld::ProcessVerticalLine((CVector *)&v19, COERCE_INT(a2 + -20.0), (int)v17, (int)v16, 1, 0, 0, 0, 1, 0, 0) != 1 )
    return v10;
  v11 = v19;
  v12 = CPointLights::NextCachedValue;
  v13 = (float *)((char *)&CPointLights::aCachedMapReads + 12 * CPointLights::NextCachedValue);
  v13[2] = v20;
  *(double *)v13 = v11;
  v14 = v18;
  CPointLights::aCachedMapReadResults[v12] = v18;
  CPointLights::NextCachedValue = (v12 + 1) % 32;
  *a3 = v14;
  return 1;
}


// ============================================================
