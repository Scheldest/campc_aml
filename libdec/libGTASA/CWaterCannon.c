
// Address: 0x18fa84
// Original: j__ZN12CWaterCannon19Update_OncePerFrameEs
// Demangled: CWaterCannon::Update_OncePerFrame(short)
// attributes: thunk
int __fastcall CWaterCannon::Update_OncePerFrame(CWaterCannon *this, __int16 a2)
{
  return _ZN12CWaterCannon19Update_OncePerFrameEs(this, a2);
}


// ============================================================

// Address: 0x1996bc
// Original: j__ZN12CWaterCannon8PushPedsEv
// Demangled: CWaterCannon::PushPeds(void)
// attributes: thunk
int __fastcall CWaterCannon::PushPeds(CWaterCannon *this)
{
  return _ZN12CWaterCannon8PushPedsEv(this);
}


// ============================================================

// Address: 0x19c22c
// Original: j__ZN12CWaterCannon6RenderEv
// Demangled: CWaterCannon::Render(void)
// attributes: thunk
int __fastcall CWaterCannon::Render(CWaterCannon *this)
{
  return _ZN12CWaterCannon6RenderEv(this);
}


// ============================================================

// Address: 0x5cab80
// Original: _ZN12CWaterCannon4InitEv
// Demangled: CWaterCannon::Init(void)
int __fastcall CWaterCannon::Init(CWaterCannon *this)
{
  int v2; // r0

  *((_WORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  v2 = CTimer::m_snTimeInMilliseconds;
  *(_QWORD *)((char *)this + 796) = 0LL;
  *(_QWORD *)((char *)this + 804) = 0LL;
  *(_QWORD *)((char *)this + 780) = 0LL;
  *(_QWORD *)((char *)this + 788) = 0LL;
  *((_DWORD *)this + 2) = v2;
  dword_A7D0A0 = 655371;
  unk_A7D080 = 0x1000200010000LL;
  unk_A7D088 = 0x5000400020003LL;
  *(_QWORD *)&dword_A7D090 = 0x6000700050006LL;
  *(_QWORD *)&dword_A7D098 = 0x9000A00090008LL;
  return sub_193CA8((CWaterCannon *)((char *)this + 812), this);
}


// ============================================================

// Address: 0x5cabf8
// Original: _ZN12CWaterCannon19Update_OncePerFrameEs
// Demangled: CWaterCannon::Update_OncePerFrame(short)
int __fastcall CWaterCannon::Update_OncePerFrame(CWaterCannon *this, int a2)
{
  int v4; // r0
  int v5; // r1
  float v6; // s0
  int v7; // r0
  float v8; // s2
  float *v9; // r2
  float v10; // s8
  float v11; // s4
  float v12; // s10
  float v13; // s6
  float v14; // s12
  float v15; // s14
  int v16; // r5
  int v17; // r6
  int result; // r0

  if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(*((_DWORD *)this + 2) + 150) )
  {
    v4 = (*((__int16 *)this + 2) + 1) % 32;
    *((_WORD *)this + 2) = v4;
    *((_BYTE *)this + v4 + 780) = 0;
  }
  v5 = 780;
  v6 = *(float *)&CTimer::ms_fTimeStep;
  v7 = 0;
  v8 = *(float *)&CTimer::ms_fTimeStep * 0.004;
  do
  {
    if ( *((_BYTE *)this + v5) )
    {
      v9 = (float *)((char *)this + v7);
      v10 = *(float *)((char *)this + v7 + 404) - v8;
      v11 = v6 * *(float *)((char *)this + v7 + 396);
      v12 = *(float *)((char *)this + v7 + 12);
      v13 = v6 * *(float *)((char *)this + v7 + 400);
      v14 = *(float *)((char *)this + v7 + 16);
      v15 = *(float *)((char *)this + v7 + 20);
      v9[101] = v10;
      v9[3] = v11 + v12;
      v9[4] = v13 + v14;
      v9[5] = (float)(v6 * v10) + v15;
    }
    v7 += 12;
    ++v5;
  }
  while ( v7 != 384 );
  v16 = 0;
  v17 = 780;
  do
  {
    if ( *((_BYTE *)this + v17) )
      CFireManager::ExtinguishPointWithWater();
    v16 += 12;
    ++v17;
  }
  while ( v16 != 384 );
  if ( !((CTimer::m_FrameCounter + a2) << 30) )
    CWaterCannon::PushPeds(this);
  result = 0;
  while ( !*((_BYTE *)this + (__int16)result + 780) )
  {
    result = (__int16)(result + 1);
    if ( result > 31 )
    {
      result = 0;
      *(_DWORD *)this = 0;
      return result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5cad1c
// Original: _ZN12CWaterCannon8PushPedsEv
// Demangled: CWaterCannon::PushPeds(void)
void __fastcall CWaterCannon::PushPeds(CWaterCannon *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  float32x2_t v4; // d8
  float32x2_t v5; // d9
  int v7; // r0
  float32x2_t v8; // d11
  int v9; // r1
  float32x2_t v10; // d10
  float32x2_t v11; // d12
  float32x2_t v12; // d13
  _DWORD *v13; // r9
  int v14; // r10
  CEventHitByWaterCannon *v15; // r0
  int v16; // r5
  bool v17; // zf
  int v18; // r1
  _DWORD *v19; // r11
  float *v20; // r2
  float v21; // s0
  float v22; // s0
  int v23; // r6
  int v24; // r1
  float32x2_t *v25; // r8
  int v26; // r3
  float32x2_t v27; // d16
  unsigned __int64 v28; // d1
  float v30; // s4
  float v31; // s2
  float v32; // s4
  float v33; // s2
  int v34; // r1
  double v35; // d16
  float v36; // s2
  float v37; // s4
  float v38; // s2
  float v39; // s4
  float *v40; // [sp+20h] [bp-D8h]
  float *v41; // [sp+24h] [bp-D4h]
  float *v42; // [sp+28h] [bp-D0h]
  _BYTE v43[28]; // [sp+34h] [bp-C4h] BYREF
  float v44[3]; // [sp+50h] [bp-A8h] BYREF
  float v45[3]; // [sp+5Ch] [bp-9Ch] BYREF
  double v46; // [sp+68h] [bp-90h] BYREF
  int v47; // [sp+70h] [bp-88h]
  _BYTE v48[132]; // [sp+74h] [bp-84h] BYREF

  v4.n64_u32[0] = -971227136;
  v5.n64_u32[0] = 1176256512;
  v7 = 780;
  v8.n64_u64[0] = v4.n64_u64[0];
  v9 = 0;
  v10.n64_u64[0] = v5.n64_u64[0];
  v11.n64_u64[0] = v5.n64_u64[0];
  v12.n64_u64[0] = v4.n64_u64[0];
  do
  {
    if ( *((_BYTE *)this + v7) )
    {
      v1.n64_u32[0] = *(_DWORD *)((char *)this + v9 + 12);
      v2.n64_u32[0] = *(_DWORD *)((char *)this + v9 + 16);
      v3.n64_u32[0] = *(_DWORD *)((char *)this + v9 + 20);
      v4.n64_u64[0] = vmax_f32(v4, v1).n64_u64[0];
      v12.n64_u64[0] = vmax_f32(v12, v2).n64_u64[0];
      v8.n64_u64[0] = vmax_f32(v8, v3).n64_u64[0];
      v11.n64_u64[0] = vmin_f32(v11, v3).n64_u64[0];
      v10.n64_u64[0] = vmin_f32(v10, v2).n64_u64[0];
      v5.n64_u64[0] = vmin_f32(v5, v1).n64_u64[0];
    }
    ++v7;
    v9 += 12;
  }
  while ( v7 != 812 );
  v13 = (_DWORD *)CPools::ms_pPedPool;
  v14 = *(_DWORD *)(CPools::ms_pPedPool + 8);
  if ( v14 )
  {
    v15 = (CEventHitByWaterCannon *)v48;
    do
    {
      while ( 1 )
      {
        --v14;
        if ( *(char *)(v13[1] + v14) >= 0 )
        {
          v16 = *v13 + 1996 * v14;
          v17 = v16 == 0;
          if ( v16 )
            v17 = *(unsigned __int8 *)(v16 + 28) << 31 == 0;
          if ( !v17 )
          {
            v19 = (_DWORD *)(v16 + 20);
            v18 = *(_DWORD *)(v16 + 20);
            v20 = (float *)(v16 + 4);
            if ( v18 )
              v20 = (float *)(v18 + 48);
            if ( *v20 > v5.n64_f32[0] && *v20 < v4.n64_f32[0] )
            {
              v21 = v20[1];
              if ( v21 > v10.n64_f32[0] && v21 < v12.n64_f32[0] )
              {
                v22 = v20[2];
                if ( v22 > v11.n64_f32[0] && v22 < v8.n64_f32[0] )
                  break;
              }
            }
          }
        }
LABEL_12:
        if ( !v14 )
          return;
      }
      v42 = (float *)(v16 + 80);
      v40 = (float *)(v16 + 76);
      v41 = (float *)(v16 + 72);
      v23 = 0;
      v24 = 0;
      while ( 1 )
      {
        if ( *((_BYTE *)this + v24 + 780) )
        {
          v25 = (float32x2_t *)((char *)this + v23);
          v26 = v16 + 4;
          if ( *v19 )
            v26 = *v19 + 48;
          v27.n64_u64[0] = vsub_f32(v25[2], *(float32x2_t *)(v26 + 4)).n64_u64[0];
          v28 = vmul_f32(v27, v27).n64_u64[0];
          if ( (float)((float)((float)((float)(*(float *)((char *)this + v23 + 12) - *(float *)v26)
                                     * (float)(*(float *)((char *)this + v23 + 12) - *(float *)v26))
                             + *(float *)&v28)
                     + *((float *)&v28 + 1)) < 5.0 )
            break;
        }
        v23 += 12;
        if ( v24++ >= 31 )
          goto LABEL_12;
      }
      CEventHitByWaterCannon::CEventHitByWaterCannon(
        v15,
        (const CVector *)&v25[1].n64_u8[4],
        (const CVector *)&v25[49].n64_u8[4]);
      CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v16 + 1088) + 104), (CEvent *)v48, 0);
      *(_DWORD *)(v16 + 1156) &= 0xFFFFFFFC;
      CPhysical::ApplyMoveForce(v16, 0, 0, CTimer::ms_fTimeStep);
      v30 = v25[49].n64_f32[1];
      v31 = (float)((float)(v30 * 0.1) - *v41) * 0.1;
      if ( (float)(v30 * v31) > 0.0 )
        *v41 = *v41 + v31;
      v32 = v25[50].n64_f32[0];
      v33 = (float)((float)(v32 * 0.1) - *v40) * 0.1;
      if ( (float)(v32 * v33) > 0.0 )
        *v40 = *v40 + v33;
      v34 = v16 + 4;
      if ( *v19 )
        v34 = *v19 + 48;
      v35 = *(double *)v34;
      v47 = *(_DWORD *)(v34 + 8);
      v46 = v35;
      v36 = *v41 * 0.3;
      v37 = *v42 * 0.3;
      v45[1] = *v40 * 0.3;
      v45[0] = v36;
      v45[2] = v37;
      v38 = *v41;
      v39 = *v42 * 0.3;
      v44[1] = 0.0 - (float)(*v40 * 0.3);
      v44[0] = 0.0 - (float)(v38 * 0.3);
      v44[2] = 0.5 - v39;
      FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v43, 1.0, 1.0, 1.0, 0.6, 0.75, 0.0, 0.2);
      FxSystem_c::AddParticle(dword_820544, (int)&v46, (int)v45, 0, (int)v43, -1.0, 1.2, 0.6, 0);
      FxSystem_c::AddParticle(dword_820544, (int)&v46, (int)v44, 0, (int)v43, -1.0, 1.2, 0.6, 0);
      CEvent::~CEvent((CEvent *)v48);
    }
    while ( v14 );
  }
}


// ============================================================

// Address: 0x5cb098
// Original: _ZN12CWaterCannon15Update_NewInputEP7CVectorS1_
// Demangled: CWaterCannon::Update_NewInput(CVector *,CVector *)
char *__fastcall CWaterCannon::Update_NewInput(CWaterCannon *this, CVector *a2, CVector *a3)
{
  __int64 v3; // d16
  char *v4; // r3
  __int64 v5; // d16
  char *v6; // r1
  char *result; // r0

  v3 = *(_QWORD *)a2;
  v4 = (char *)this + 12 * *((__int16 *)this + 2);
  *((_DWORD *)v4 + 5) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(v4 + 12) = v3;
  v5 = *(_QWORD *)a3;
  v6 = (char *)this + 12 * *((__int16 *)this + 2);
  *((_DWORD *)v6 + 101) = *((_DWORD *)a3 + 2);
  *(_QWORD *)(v6 + 396) = v5;
  result = (char *)this + *((__int16 *)this + 2);
  result[780] = 1;
  return result;
}


// ============================================================

// Address: 0x5cb0d8
// Original: _ZN12CWaterCannon6RenderEv
// Demangled: CWaterCannon::Render(void)
int __fastcall CWaterCannon::Render(CWaterCannon *this)
{
  int v2; // r4
  int v3; // r1
  int v4; // r10
  int v5; // r3
  int v6; // r0
  float *v7; // r8
  float *v8; // r9
  float v9; // s0
  float v10; // s4
  float *v11; // r5
  float *v12; // r4
  float *v13; // r6
  float *v14; // r11
  float v15; // s6
  float v16; // s0
  int v17; // r0
  float *v18; // r1
  float *v19; // r2
  float v20; // s2
  float v21; // s4
  float v22; // s6
  float v23; // s8
  float v24; // s12
  float v25; // s8
  float v26; // s12
  float v27; // s8
  float v28; // s12
  float v29; // s4
  float v30; // s6
  int v31; // r4
  float v32; // s0
  float v33; // s6
  float v34; // s0
  __int16 v35; // r2
  bool v36; // cc
  char *v38; // [sp+34h] [bp-10Ch]
  CWaterCannon *v39; // [sp+40h] [bp-100h]
  int v40; // [sp+44h] [bp-FCh]
  float v41[3]; // [sp+48h] [bp-F8h] BYREF
  float v42; // [sp+54h] [bp-ECh] BYREF
  float v43; // [sp+58h] [bp-E8h]
  float v44; // [sp+5Ch] [bp-E4h]
  _BYTE v45[28]; // [sp+60h] [bp-E0h] BYREF
  _BYTE v46[4]; // [sp+7Ch] [bp-C4h] BYREF
  int v47; // [sp+80h] [bp-C0h] BYREF
  int v48; // [sp+84h] [bp-BCh]
  int v49; // [sp+88h] [bp-B8h]
  float v50; // [sp+90h] [bp-B0h]
  float v51; // [sp+94h] [bp-ACh]
  float v52; // [sp+98h] [bp-A8h]
  float v53; // [sp+ACh] [bp-94h] BYREF
  float v54; // [sp+B0h] [bp-90h]
  float v55; // [sp+B4h] [bp-8Ch]
  float v56; // [sp+B8h] [bp-88h]
  float v57[2]; // [sp+BCh] [bp-84h] BYREF
  float v58; // [sp+C4h] [bp-7Ch] BYREF
  float v59; // [sp+C8h] [bp-78h]
  float v60; // [sp+CCh] [bp-74h]
  float v61; // [sp+D0h] [bp-70h] BYREF
  float v62; // [sp+D4h] [bp-6Ch]
  float v63; // [sp+D8h] [bp-68h]

  RwRenderStateSet(8, 0);
  RwRenderStateSet(6, 1);
  RwRenderStateSet(12, 1);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(14, 1);
  RwRenderStateSet(1, 0);
  RwRenderStateSet(29, 5);
  RwRenderStateSet(30, 0);
  rand();
  v2 = *((__int16 *)this + 2);
  v38 = (char *)this + 812;
  CAEWaterCannonAudioEntity::ClearSplashInfo((CWaterCannon *)((char *)this + 812));
  v3 = v2 % 32;
  v4 = v2 % 32 + 0xFFFF;
  if ( (((unsigned __int16)(v2 % 32) - 1) & 0x8000) != 0 )
    LOWORD(v4) = v2 % 32 + 31;
  v5 = 0;
  v6 = 0;
  v39 = this;
  do
  {
    if ( *((_BYTE *)this + (__int16)v3 + 780)
      && *((_BYTE *)this + (__int16)v4 + 780)
      && (v7 = (float *)((char *)this + 12 * (__int16)v3 + 12),
          v8 = (float *)((char *)this + 12 * (__int16)v4 + 12),
          v9 = *v8 - *v7,
          v10 = v8[2] - v7[2],
          v54 = v8[1] - v7[1],
          v53 = v9,
          v55 = v10,
          (float)((float)((float)(v9 * v9) + (float)(v54 * v54)) + (float)(v10 * v10)) < 25.0) )
    {
      v11 = v7 + 2;
      v12 = v8 + 2;
      v13 = v7 + 1;
      v14 = v8 + 1;
      v40 = v5;
      if ( !(v6 << 31) )
      {
        v53 = v9;
        v55 = v10;
        CrossProduct((const CVector *)&v47, (const CVector *)&v53);
        v15 = 0.05
            / sqrtf(
                (float)((float)(*(float *)&v47 * *(float *)&v47) + (float)(*(float *)&v48 * *(float *)&v48))
              + (float)(*(float *)&v49 * *(float *)&v49));
        v56 = *(float *)&v47 * v15;
        v57[0] = *(float *)&v48 * v15;
        v57[1] = *(float *)&v49 * v15;
        v58 = (float)((float)rand() * 4.6566e-10) + 0.0;
        v59 = (float)((float)rand() * 4.6566e-10) + 0.0;
        v60 = (float)((float)rand() * 4.6566e-10) + 0.0;
        CVector::Normalise((CVector *)&v58);
        v58 = v58 * 0.05;
        v59 = v59 * 0.05;
        v60 = v60 * 0.05;
        v61 = (float)((float)rand() * 4.6566e-10) + 0.0;
        v62 = (float)((float)rand() * 4.6566e-10) + 0.0;
        v63 = (float)((float)rand() * 4.6566e-10) + 0.0;
        CVector::Normalise((CVector *)&v61);
        v5 = v40;
        v61 = v61 * 0.05;
        v62 = v62 * 0.05;
        v63 = v63 * 0.05;
      }
      v16 = (float)((float)(v5 * v5) * 0.03125) + 3.0;
      dword_A7CF00 = ((int)(float)(64.0 - (float)((float)((float)(__int16)v5 * 0.03125) * 64.0)) << 24) | 0xFFC8C8;
      dword_A7CEDC = dword_A7CF00;
      dword_A7CF24 = dword_A7CF00;
      dword_A7CF48 = dword_A7CF00;
      dword_A7CF6C = dword_A7CF00;
      dword_A7CF90 = dword_A7CF00;
      dword_A7CFB4 = dword_A7CF00;
      dword_A7CFD8 = dword_A7CF00;
      dword_A7CFFC = dword_A7CF00;
      dword_A7D020 = dword_A7CF00;
      dword_A7D044 = dword_A7CF00;
      dword_A7D068 = dword_A7CF00;
      v17 = 0;
      v18 = v57;
      do
      {
        v19 = (float *)((char *)&unk_A7CEC4 + v17);
        v17 += 144;
        v20 = v16 * *(v18 - 1);
        v21 = v16 * *v18;
        v22 = v16 * v18[1];
        v18 += 3;
        v23 = *v13 - v21;
        v24 = *v11 - v22;
        *v19 = *v7 - v20;
        v19[1] = v23;
        v19[2] = v24;
        v25 = *v13 + v21;
        v26 = *v11 + v22;
        v19[9] = *v7 + v20;
        v19[10] = v25;
        v19[11] = v26;
        v27 = *v14 - v21;
        v28 = *v12 - v22;
        v19[18] = *v8 - v20;
        v19[19] = v27;
        v19[20] = v28;
        v29 = *v14 + v21;
        v30 = *v12 + v22;
        v19[27] = *v8 + v20;
        v19[28] = v29;
        v19[29] = v30;
      }
      while ( v17 != 432 );
      v31 = 0;
      if ( CWorld::ProcessLineOfSight((int)v8, (int)v7, (int)&v47, (int)v46, 1, 1, 0, 0, 0, 0, 0, 0) )
      {
        FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v45, 1.0, 1.0, 1.0, 0.15, 0.75, 1.0, 0.2);
        v42 = v50 * 3.0;
        v43 = v51 * 3.0;
        v44 = v52 * 3.0;
        v42 = v42 * (float)((float)((float)((float)rand() * 4.6566e-10) * 1.6) + 0.2);
        v43 = v43 * (float)((float)((float)((float)rand() * 4.6566e-10) * 1.6) + 0.2);
        v32 = (float)rand();
        v33 = *(float *)&CTimer::ms_fTimeStep;
        v44 = v44 * (float)((float)((float)(v32 * 4.6566e-10) * 1.6) + 0.2);
        v41[2] = v44 * 0.6;
        v41[0] = v42 * 0.6;
        v41[1] = v43 * 0.6;
        FxSystem_c::AddParticle(
          dword_820558,
          (int)&v47,
          (int)&v42,
          COERCE_INT(0.0 / (float)(unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0)),
          (int)v45,
          -1.0,
          1.2,
          0.6,
          0);
        FxSystem_c::AddParticle(
          dword_820544,
          (int)&v47,
          (int)v41,
          COERCE_INT(0.0 / (float)(unsigned int)(float)((float)(v33 / 50.0) * 1000.0)),
          (int)v45,
          -1.0,
          1.2,
          0.6,
          0);
        v34 = *(float *)&CTimer::ms_fTimeStep / 50.0;
        FxSystem_c::AddParticle(
          dword_820558,
          (int)&v47,
          (int)&v42,
          COERCE_INT(1.0 / (float)(unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0)),
          (int)v45,
          -1.0,
          1.2,
          0.6,
          0);
        FxSystem_c::AddParticle(
          dword_820544,
          (int)&v47,
          (int)v41,
          COERCE_INT(1.0 / (float)(unsigned int)(float)(v34 * 1000.0)),
          (int)v45,
          -1.0,
          1.2,
          0.6,
          0);
        CAEWaterCannonAudioEntity::SetSplashInfo(
          (int)v38,
          v47,
          v48,
          v49,
          sqrtf((float)((float)(v42 * v42) + (float)(v43 * v43)) + (float)(v44 * v44)));
        v31 = 1;
      }
      if ( RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
      this = v39;
      v6 = 1;
      v5 = v40;
    }
    else
    {
      v31 = 0;
    }
    v35 = v4 - 1;
    if ( (((_WORD)v4 - 1) & 0x8000) != 0 )
      v35 = v4 + 31;
    if ( v31 )
      break;
    v36 = v5++ < 30;
    LOWORD(v3) = v4;
    LOWORD(v4) = v35;
  }
  while ( v36 );
  RwRenderStateSet(8, 1);
  RwRenderStateSet(12, 0);
  return RwRenderStateSet(14, 0);
}


// ============================================================
