
// Address: 0x18acdc
// Original: j__ZN8CTrailer14ScanForTowLinkEv
// Demangled: CTrailer::ScanForTowLink(void)
// attributes: thunk
int __fastcall CTrailer::ScanForTowLink(CTrailer *this)
{
  return _ZN8CTrailer14ScanForTowLinkEv(this);
}


// ============================================================

// Address: 0x18f670
// Original: j__ZN8CTrailer20SetupSuspensionLinesEv
// Demangled: CTrailer::SetupSuspensionLines(void)
// attributes: thunk
int __fastcall CTrailer::SetupSuspensionLines(CTrailer *this)
{
  return _ZN8CTrailer20SetupSuspensionLinesEv(this);
}


// ============================================================

// Address: 0x192b5c
// Original: j__ZN8CTrailerC2Eih
// Demangled: CTrailer::CTrailer(int,uchar)
// attributes: thunk
void __fastcall CTrailer::CTrailer(CTrailer *this, int a2, unsigned __int8 a3)
{
  _ZN8CTrailerC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x57aeac
// Original: _ZN8CTrailerC2Eih
// Demangled: CTrailer::CTrailer(int,uchar)
void __fastcall CTrailer::CTrailer(CTrailer *this, int a2, unsigned __int8 a3)
{
  unsigned int v4; // r1

  CAutomobile::CAutomobile(this, a2, a3, 0);
  *((_DWORD *)this + 637) = 1065353216;
  *((_DWORD *)this + 361) = 11;
  *((_DWORD *)this + 638) = 1065353216;
  *((_DWORD *)this + 640) = 1065353216;
  *((_DWORD *)this + 641) = 1065353216;
  v4 = *((__int16 *)this + 19);
  *(_DWORD *)this = &off_66DFE4;
  if ( v4 >> 1 == 303 )
    *((_DWORD *)this + 640) = -998637568;
  CTrailer::SetupSuspensionLines(this);
  *((_BYTE *)this + 58) = *((_BYTE *)this + 58) & 7 | 0x20;
}


// ============================================================

// Address: 0x57af14
// Original: _ZN8CTrailerD2Ev
// Demangled: CTrailer::~CTrailer()
// attributes: thunk
void __fastcall CTrailer::~CTrailer(CTrailer *this)
{
  sub_19E4D4(this);
}


// ============================================================

// Address: 0x57af18
// Original: _ZN8CTrailerD0Ev
// Demangled: CTrailer::~CTrailer()
void __fastcall CTrailer::~CTrailer(CTrailer *this)
{
  void *v1; // r0

  CAutomobile::~CAutomobile(this);
  sub_199F80(v1);
}


// ============================================================

// Address: 0x57af28
// Original: _ZN8CTrailer20SetupSuspensionLinesEv
// Demangled: CTrailer::SetupSuspensionLines(void)
char *__fastcall CTrailer::SetupSuspensionLines(CTrailer *this)
{
  CVehicleModelInfo *v2; // r10
  unsigned int v3; // r1
  int ColModel; // r6
  char *result; // r0
  int v6; // r5
  float *v7; // r11
  int v8; // r6
  int i; // r8
  float v10; // r0
  double v11; // d16
  int v12; // r0
  int v13; // r0
  double v14; // d16
  float *v15; // r0
  float *v16; // r3
  float v17; // s0
  float v18; // s2
  float v19; // s0
  float *v20; // r0
  double *v21; // r9
  float v22; // s2
  int v23; // r11
  int v24; // r6
  double v25; // d16
  float v26; // r0
  double v27; // d16
  int v28; // r1
  int v29; // r2
  double v30; // d16
  float v31; // r0
  int v32; // r2
  int v33; // r1
  double v34; // d16
  float v35; // r0
  int v36; // r1
  float *v37; // r0
  float v38; // s6
  float v39; // s0
  float v40; // s2
  float v41; // s2
  int v42; // [sp+0h] [bp-80h]
  float *v43; // [sp+4h] [bp-7Ch]
  double v44; // [sp+38h] [bp-48h]
  __int64 v45; // [sp+40h] [bp-40h]
  double v46; // [sp+48h] [bp-38h] BYREF
  float v47; // [sp+50h] [bp-30h]

  v2 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]);
  ColModel = CEntity::GetColModel(this);
  if ( *((float *)this + 640) == -1000.0 )
    return (char *)sub_1917A8(this);
  v6 = *(_DWORD *)(ColModel + 44);
  if ( !*(_DWORD *)(v6 + 16) )
  {
    *(_BYTE *)(v6 + 6) = 6;
    *(_DWORD *)(v6 + 16) = CMemoryMgr::Malloc(0xC0u, v3);
  }
  v7 = (float *)((char *)this + 2204);
  v42 = ColModel;
  v43 = (float *)ColModel;
  v8 = 0;
  for ( i = 24; i != 152; i += 32 )
  {
    CVehicleModelInfo::GetWheelPosn(v2, v8, (CVector *)&v46, 0);
    v10 = v47;
    ++v8;
    *(v7 - 20) = v47;
    v47 = *(float *)(*((_DWORD *)this + 226) + 184) + v10;
    v11 = v46;
    v12 = *(_DWORD *)(v6 + 16) + i;
    *(float *)(v12 - 16) = v47;
    *(double *)(v12 - 24) = v11;
    v47 = v47
        + (float)((float)(*(float *)(*((_DWORD *)this + 226) + 188) - *(float *)(*((_DWORD *)this + 226) + 184))
                + (float)(*((float *)v2 + 22) * -0.5));
    v13 = *(_DWORD *)(v6 + 16);
    v14 = v46;
    *(float *)(v13 + i) = v47;
    *(double *)(v13 + i - 8) = v14;
    *(v7 - 4) = *(float *)(*((_DWORD *)this + 226) + 184) - *(float *)(*((_DWORD *)this + 226) + 188);
    v15 = (float *)(*(_DWORD *)(v6 + 16) + i);
    *v7++ = *(v15 - 4) - *v15;
  }
  v16 = v43;
  v17 = *(float *)(*(_DWORD *)(v6 + 16) + 24);
  v18 = v43[2];
  if ( v17 < v18 )
  {
    v43[2] = v17;
    v18 = v17;
  }
  v19 = v43[5];
  v20 = (float *)v42;
  v21 = (double *)(v42 + 12);
  if ( sqrtf((float)((float)(*v43 * *v43) + (float)(v43[1] * v43[1])) + (float)(v18 * v18)) <= sqrtf(
                                                                                                 (float)((float)(v43[3] * v43[3]) + (float)(v43[4] * v43[4]))
                                                                                               + (float)(v19 * v19)) )
    v20 = (float *)(v42 + 12);
  v22 = sqrtf((float)((float)(*v20 * *v20) + (float)(v20[1] * v20[1])) + (float)(v20[2] * v20[2]));
  if ( v43[9] < v22 )
    v43[9] = v22;
  v23 = *((_DWORD *)this + 427);
  if ( v23 )
  {
    v44 = *(double *)(v23 + 64);
    v45 = *(_QWORD *)(v23 + 72);
    v24 = *(_DWORD *)(v23 + 4);
    while ( v24 )
    {
      RwMatrixTransform();
      v24 = *(_DWORD *)(v24 + 4);
      if ( v24 == v23 )
        v24 = 0;
    }
    v47 = *(float *)&v45;
    v46 = v44;
    *((_DWORD *)this + 639) = v45;
    v25 = *v21;
    v47 = *(float *)(v42 + 20);
    v46 = v25;
    v16 = v43;
    v26 = v43[5];
  }
  else
  {
    v26 = v19;
    v27 = *v21;
    v47 = *(float *)(v42 + 20);
    v46 = v27;
  }
  v28 = *(_DWORD *)v16;
  v47 = v26;
  LODWORD(v46) = v28;
  v29 = *(_DWORD *)(v6 + 16);
  v30 = v46;
  *(float *)(v29 + 136) = v26;
  *(double *)(v29 + 128) = v30;
  v47 = v16[2];
  v31 = v47;
  v32 = *(_DWORD *)(v6 + 16);
  *(double *)(v32 + 144) = v46;
  *(float *)(v32 + 152) = v31;
  LODWORD(v46) = v28 ^ 0x80000000;
  v47 = v16[5];
  v33 = *(_DWORD *)(v6 + 16);
  v34 = v46;
  *(float *)(v33 + 168) = v47;
  *(double *)(v33 + 160) = v34;
  v47 = v16[2];
  v35 = v47;
  v36 = *(_DWORD *)(v6 + 16);
  *(double *)(v36 + 176) = v46;
  *(float *)(v36 + 184) = v35;
  v37 = *(float **)(v6 + 16);
  v38 = fabsf(v37[33]);
  v39 = v38 / (float)(v38 + (float)(fabsf(v37[1] + v37[9]) * 0.5));
  v40 = (float)(*((float *)v2 + 22) * 0.5)
      + (float)((float)(*((float *)this + 547)
                      * (float)((float)(v39 / (float)(*(float *)(*((_DWORD *)this + 226) + 172) * -4.0)) + 1.0))
              - v37[2]);
  *((float *)this + 555) = v40;
  *((float *)this + 556) = v40;
  *(float *)(*(_DWORD *)(v6 + 16) + 152) = *(float *)(*(_DWORD *)(v6 + 16) + 136)
                                         - (float)((float)(*(float *)(*(_DWORD *)(v6 + 16) + 136) + v40)
                                                 / (float)((float)((float)(1.0 - v39)
                                                                 / (float)(*(float *)&CTrailer::m_fTrailerSuspensionForce
                                                                         * -2.0))
                                                         + 1.0));
  *(_DWORD *)(*(_DWORD *)(v6 + 16) + 184) = *(_DWORD *)(*(_DWORD *)(v6 + 16) + 152);
  v41 = *((float *)this + 555);
  *((float *)this + 531) = (float)(*((float *)v2 + 22) * 0.5) - v41;
  *((float *)this + 532) = (float)(*((float *)v2 + 22) * 0.5) - v41;
  *((float *)this + 533) = (float)(*((float *)v2 + 22) * 0.5) - v41;
  result = (char *)this + 2136;
  *((float *)this + 534) = (float)(*((float *)v2 + 22) * 0.5) - v41;
  return result;
}


// ============================================================

// Address: 0x57b304
// Original: _ZN8CTrailer14ProcessControlEv
// Demangled: CTrailer::ProcessControl(void)
int *__fastcall CTrailer::ProcessControl(CTrailer *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  int *result; // r0
  int v6; // r1

  CAutomobile::ProcessControl(this);
  result = (int *)(*((unsigned __int8 *)this + 28) << 25);
  if ( (*((_BYTE *)this + 28) & 0x40) == 0 )
  {
    result = (int *)((char *)this + 2560);
    v1.n64_u32[0] = *((_DWORD *)this + 640);
    if ( v1.n64_f32[0] != -1000.0 )
    {
      v6 = *((_DWORD *)this + 308);
      if ( v1.n64_f32[0] > 0.0 && v6 )
      {
        v3.n64_u32[0] = 0;
        v1.n64_f32[0] = v1.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * -0.002);
        v1.n64_u32[0] = vmax_f32(v1, v3).n64_u32[0];
        *result = v1.n64_u32[0];
      }
      else
      {
        v2.n64_u32[0] = 1.0;
        if ( v1.n64_f32[0] < 1.0 && !v6 )
        {
          if ( v1.n64_f32[0] <= 0.1 )
          {
            v1.n64_f32[0] = v1.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * 0.0005);
          }
          else
          {
            v1.n64_f32[0] = v1.n64_f32[0] + (float)(*(float *)&CTimer::ms_fTimeStep * 0.002);
            v1.n64_u32[0] = vmin_f32(v1, v2).n64_u32[0];
          }
          *result = v1.n64_u32[0];
          *((_BYTE *)this + 188) = 0;
        }
      }
      if ( (*((_BYTE *)this + 58) & 0xF0) == 0x50 && *(float *)&TRAILER_TOWED_MINRATIO > v1.n64_f32[0] )
        result = &TRAILER_TOWED_MINRATIO;
      result = (int *)*result;
      *((_DWORD *)this + 641) = result;
      *((_DWORD *)this + 637) = result;
      *((_DWORD *)this + 638) = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x57b408
// Original: _ZN8CTrailer9ProcessAIERj
// Demangled: CTrailer::ProcessAI(uint &)
int __fastcall CTrailer::ProcessAI(CTrailer *this, unsigned int *a2)
{
  int v3; // r4
  int v4; // r0
  float v5; // s0
  int v6; // r0
  int v7; // r1
  float v8; // s16
  int v9; // r0
  float v10; // s0
  float v11; // s2

  v3 = CAutomobile::ProcessAI(this, a2);
  v4 = *((_BYTE *)this + 58) & 0xF8;
  if ( v4 == 80 )
  {
    v6 = *((_DWORD *)this + 308);
    if ( !v6 )
      return v3;
    if ( *((float *)this + 640) != -1000.0 )
    {
      *((_DWORD *)this + 297) = *(_DWORD *)(v6 + 1188);
      return v3;
    }
    v7 = *(_DWORD *)(v6 + 20);
    if ( v7 )
      v8 = atan2f(COERCE_FLOAT(*(_DWORD *)(v7 + 16) ^ 0x80000000), *(float *)(v7 + 20));
    else
      v8 = *(float *)(v6 + 16);
    v9 = *((_DWORD *)this + 5);
    if ( v9 )
      v10 = atan2f(COERCE_FLOAT(*(_DWORD *)(v9 + 16) ^ 0x80000000), *(float *)(v9 + 20));
    else
      v10 = *((float *)this + 4);
    if ( v8 <= (float)(v10 + 3.1416) )
    {
      if ( v8 >= (float)(v10 + -3.1416) )
      {
LABEL_20:
        *((float *)this + 294) = v8 - v10;
        return v3;
      }
      v11 = 6.2832;
    }
    else
    {
      v11 = -6.2832;
    }
    v8 = v8 + v11;
    goto LABEL_20;
  }
  if ( v4 == 32 )
  {
    v5 = *((float *)this + 640);
    if ( v5 > 0.5 || v5 == -1000.0 )
      CTrailer::ScanForTowLink(this);
  }
  return v3;
}


// ============================================================

// Address: 0x57b50c
// Original: _ZN8CTrailer14ScanForTowLinkEv
// Demangled: CTrailer::ScanForTowLink(void)
int __fastcall CTrailer::ScanForTowLink(CTrailer *this, CVehicle *a2)
{
  int result; // r0
  int v4; // r5
  CTrailer *v5; // r6
  float32x2_t v6; // d16
  unsigned __int64 v7; // d0
  bool v8; // [sp+1Ch] [bp-84h]
  __int16 v9; // [sp+26h] [bp-7Ah] BYREF
  _DWORD v10[16]; // [sp+28h] [bp-78h] BYREF
  float32x2_t v11; // [sp+68h] [bp-38h] BYREF
  float v12; // [sp+70h] [bp-30h]
  float32x2_t v13; // [sp+78h] [bp-28h] BYREF
  float v14; // [sp+80h] [bp-20h]

  result = *((_DWORD *)this + 308);
  if ( !result )
  {
    result = CVehicleRecording::IsPlaybackGoingOnForCar(this, a2);
    if ( !result )
    {
      result = *((unsigned __int16 *)this + 19);
      if ( result != 610 )
      {
        v13.n64_u64[0] = 0LL;
        v14 = 0.0;
        v11.n64_u64[0] = 0LL;
        v12 = 0.0;
        result = (*(int (__fastcall **)(CTrailer *, float32x2_t *, _DWORD, CTrailer *))(*(_DWORD *)this + 240))(
                   this,
                   &v11,
                   0,
                   this);
        if ( result == 1 )
        {
          CWorld::FindObjectsInRange(
            (CWorld *)&v11,
            (const CVector *)0x41200000,
            COERCE_FLOAT(1),
            (bool)&v9,
            &word_10,
            (__int16)v10,
            0,
            1,
            0,
            0,
            0,
            v8);
          result = v9;
          if ( v9 >= 1 )
          {
            LOWORD(v4) = 0;
            while ( 1 )
            {
              v5 = (CTrailer *)v10[(__int16)v4];
              if ( v5 != this
                && (*(int (__fastcall **)(_DWORD, float32x2_t *, _DWORD, CTrailer *))(*(_DWORD *)v5 + 244))(
                     v10[(__int16)v4],
                     &v13,
                     0,
                     this) == 1 )
              {
                v6.n64_u64[0] = vsub_f32(v11, v13).n64_u64[0];
                v7 = vmul_f32(v6, v6).n64_u64[0];
                if ( sqrtf(*(float *)&v7 + *((float *)&v7 + 1)) < RELINK_TRAILER_DIFF_LIMIT_XY
                  && fabsf(v12 - v14) < RELINK_TRAILER_DIFF_LIMIT_Z )
                {
                  break;
                }
              }
              result = v9;
              v4 = (__int16)(v4 + 1);
              if ( v4 >= v9 )
                return result;
            }
            return (*(int (__fastcall **)(CTrailer *, CTrailer *, _DWORD))(*(_DWORD *)this + 248))(this, v5, 0);
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x57b634
// Original: _ZN8CTrailer17ProcessSuspensionEv
// Demangled: CTrailer::ProcessSuspension(void)
char *__fastcall CTrailer::ProcessSuspension(CTrailer *this)
{
  char *result; // r0
  float *v3; // r11
  float *v4; // r6
  float *v5; // r5
  float v6; // s0
  float v7; // s2
  float *v8; // r0
  float v9; // s0
  float *v10; // r2
  float v11; // s4
  float v12; // s8
  float v13; // s2
  float v14; // s6
  float *v15; // r9
  float v16; // s2
  float *v17; // r0
  float v18; // s0
  float v19; // s4
  float v20; // s8
  float v21; // s2
  float v22; // s4
  float *v23; // r0
  float v24; // s4
  float v25; // s0
  float v26; // s0
  unsigned int v27; // s2
  unsigned int v28; // s4
  float *v29; // r0
  float v30; // s4
  float v31; // s0
  float v32; // s0
  unsigned int v33; // s2
  unsigned int v34; // s4
  unsigned __int8 WheelStatus; // r8
  unsigned int v36; // r2
  CDamageManager *v37; // r0
  unsigned __int8 v38; // r11
  unsigned int v39; // r2
  CDamageManager *v40; // r0
  double v41; // [sp+18h] [bp-68h] BYREF
  float v42; // [sp+20h] [bp-60h]
  __int64 v43; // [sp+28h] [bp-58h] BYREF
  __int64 v44; // [sp+30h] [bp-50h] BYREF
  float v45; // [sp+38h] [bp-48h]
  float v46; // [sp+3Ch] [bp-44h]
  _BYTE v47[20]; // [sp+40h] [bp-40h] BYREF
  float v48; // [sp+54h] [bp-2Ch]
  float v49; // [sp+58h] [bp-28h] BYREF
  float v50[9]; // [sp+5Ch] [bp-24h] BYREF

  CAutomobile::ProcessSuspension(this);
  result = (char *)this + 2560;
  if ( *((float *)this + 640) != -1000.0 )
  {
    v49 = 0.0;
    v50[0] = 0.0;
    memset(v47, 0, sizeof(v47));
    v3 = (float *)((char *)this + 2548);
    v4 = (float *)((char *)this + 2564);
    v5 = (float *)((char *)this + 4);
    v43 = 0LL;
    v44 = 0LL;
    v45 = 0.0;
    v48 = 0.0;
    v46 = 0.0;
    v6 = *((float *)this + 641);
    v7 = *((float *)this + 637);
    if ( v7 < v6 && v6 > 0.1 )
    {
      v8 = (float *)*((_DWORD *)this + 5);
      v9 = v7 / v6;
      v10 = (float *)((char *)this + 4);
      v11 = -v8[8];
      v12 = -v8[10];
      *((float *)&v41 + 1) = -v8[9];
      *(float *)&v41 = v11;
      v42 = v12;
      if ( v8 )
        v10 = v8 + 12;
      v13 = *((float *)this + 615) - *v10;
      v14 = *((float *)this + 617) - v10[2];
      *((float *)&v43 + 1) = *((float *)this + 616) - v10[1];
      *(float *)&v43 = v13;
      *(float *)&v44 = v14;
      CPhysical::ApplySpringCollisionAlt(
        this,
        *(float *)&CTrailer::m_fTrailerSuspensionForce,
        (CVector *)&v41,
        (CVector *)&v43,
        v9,
        1.0,
        (CTrailer *)((char *)this + 2476),
        &v49);
      v6 = *v4;
    }
    v15 = (float *)((char *)this + 2552);
    v16 = *((float *)this + 638);
    if ( v16 < v6 && v6 > 0.1 )
    {
      v17 = (float *)*((_DWORD *)this + 5);
      v18 = v16 / v6;
      v19 = -v17[8];
      v20 = -v17[10];
      *((float *)&v41 + 1) = -v17[9];
      *(float *)&v41 = v19;
      v42 = v20;
      if ( v17 )
        v5 = v17 + 12;
      v21 = *((float *)this + 626) - *v5;
      v22 = *((float *)this + 627) - v5[1];
      v46 = *((float *)this + 628) - v5[2];
      v45 = v22;
      *((float *)&v44 + 1) = v21;
      CPhysical::ApplySpringCollisionAlt(
        this,
        *(float *)&CTrailer::m_fTrailerSuspensionForce,
        (CVector *)&v41,
        (CVector *)((char *)&v44 + 4),
        v18,
        1.0,
        (CTrailer *)((char *)this + 2520),
        v50);
      v6 = *v4;
    }
    if ( *v3 < v6 && v6 > 0.1 )
    {
      CPhysical::GetSpeed();
      *(float *)&v47[8] = v42;
      *(double *)v47 = v41;
      v6 = *v4;
    }
    if ( *v15 < v6 && v6 > 0.1 )
    {
      CPhysical::GetSpeed();
      v48 = v42;
      *(double *)&v47[12] = v41;
      v6 = *v4;
    }
    if ( *v3 < v6 && v6 > 0.1 )
    {
      v23 = (float *)*((_DWORD *)this + 5);
      v24 = v23[10];
      v25 = -v23[8];
      *((float *)&v41 + 1) = -v23[9];
      *(float *)&v41 = v25;
      v42 = -v24;
      v26 = *((float *)this + 621);
      if ( v26 > 0.35 )
      {
        *(float *)&v27 = -*((float *)this + 620);
        *(float *)&v28 = -*((float *)this + 619);
        v42 = -v26;
        *(_QWORD *)&v41 = __PAIR64__(v27, v28);
      }
      CPhysical::ApplySpringDampening(
        this,
        *(float *)&CTrailer::m_fTrailerDampingForce,
        v49,
        (CVector *)&v41,
        (CVector *)&v43,
        (CVector *)v47);
      v6 = *v4;
    }
    if ( *v15 < v6 && v6 > 0.1 )
    {
      v29 = (float *)*((_DWORD *)this + 5);
      v30 = v29[10];
      v31 = -v29[8];
      *((float *)&v41 + 1) = -v29[9];
      *(float *)&v41 = v31;
      v42 = -v30;
      v32 = *((float *)this + 632);
      if ( v32 > 0.35 )
      {
        *(float *)&v33 = -*((float *)this + 631);
        *(float *)&v34 = -*((float *)this + 630);
        v42 = -v32;
        *(_QWORD *)&v41 = __PAIR64__(v33, v34);
      }
      CPhysical::ApplySpringDampening(
        this,
        *(float *)&CTrailer::m_fTrailerDampingForce,
        v50[0],
        (CVector *)&v41,
        (CVector *)((char *)&v44 + 4),
        (CVector *)&v47[12]);
    }
    result = (char *)(*((_BYTE *)this + 58) & 0xF0);
    if ( result != (char *)&dword_50 )
    {
      WheelStatus = CDamageManager::GetWheelStatus((CTrailer *)((char *)this + 1460), 0);
      if ( *v3 >= *v4 || *v4 <= 0.1 )
      {
        v37 = (CTrailer *)((char *)this + 1460);
        v36 = 2;
      }
      else
      {
        CPhysical::GetSpeed();
        v36 = 0;
        *(float *)&v47[8] = v42;
        v37 = (CTrailer *)((char *)this + 1460);
        *(double *)v47 = v41;
      }
      CDamageManager::SetWheelStatus(v37, 0, v36);
      v38 = CDamageManager::GetWheelStatus((CTrailer *)((char *)this + 1460), 1);
      if ( *v15 >= *v4 || *v4 <= 0.1 )
      {
        v40 = (CTrailer *)((char *)this + 1460);
        v39 = 2;
      }
      else
      {
        CPhysical::GetSpeed();
        v39 = 0;
        v48 = v42;
        v40 = (CTrailer *)((char *)this + 1460);
        *(double *)&v47[12] = v41;
      }
      CDamageManager::SetWheelStatus(v40, 1, v39);
      CAutomobile::ProcessCarWheelPair(
        this,
        0,
        1,
        0.0,
        (CVector *)v47,
        (CVector *)&v43,
        (float)(*(float *)(*((_DWORD *)this + 226) + 40) * 0.004) * 0.25,
        0.0,
        1000.0,
        1);
      CDamageManager::SetWheelStatus((CTrailer *)((char *)this + 1460), 0, WheelStatus);
      return (char *)CDamageManager::SetWheelStatus((CTrailer *)((char *)this + 1460), 1, v38);
    }
  }
  return result;
}


// ============================================================

// Address: 0x57bafc
// Original: _ZN8CTrailer9PreRenderEv
// Demangled: CTrailer::PreRender(void)
void __fastcall CTrailer::PreRender(CTrailer *this)
{
  float32x2_t v1; // d1
  float32x2_t v2; // d3
  float32x2_t v3; // d4
  float32x2_t v4; // d5
  int v6; // r2
  int v7; // r6
  int v8; // r0
  float *v9; // r0
  float *v10; // r0
  float v11; // s0
  float *v12; // r1
  float v13; // s8
  float v14; // s10
  float v15; // s6
  float v16; // s4
  float v17; // s2
  bool v18; // nf
  int v19; // r3
  _BYTE v20[48]; // [sp+8h] [bp-58h] BYREF
  float v21; // [sp+38h] [bp-28h]
  float v22; // [sp+3Ch] [bp-24h]
  int v23; // [sp+48h] [bp-18h]
  int v24; // [sp+4Ch] [bp-14h]

  CAutomobile::PreRender(this);
  v6 = *((__int16 *)this + 19);
  v7 = *(_DWORD *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v6]) + 44) + 44);
  v23 = 0;
  v24 = 0;
  v8 = (unsigned __int16)v6;
  if ( *((_DWORD *)this + 427)
    && *(char *)(v7 + 6) >= 5
    && (*((float *)this + 18) != 0.0
     || *((float *)this + 19) != 0.0
     || *((float *)this + 20) != 0.0
     || *((float *)this + 21) != 0.0
     || *((float *)this + 22) != 0.0
     || *((float *)this + 23) != 0.0
     || !*((_BYTE *)this + 188)) )
  {
    CMatrix::Attach();
    v9 = *(float **)(v7 + 16);
    v4.n64_u32[0] = *((_DWORD *)this + 640);
    v3.n64_f32[0] = (float)(*((float *)this + 637) + *((float *)this + 638)) * 0.5;
    v2.n64_u32[0] = *((_DWORD *)this + 639);
    v1.n64_f32[0] = (float)((float)(v22 / v9[33])
                          * (float)(v9[34] + (float)(vmin_f32(v3, v4).n64_f32[0] * (float)(v9[38] - v9[34]))))
                  - (float)((float)(1.0 - (float)(v22 / v9[33])) * *((float *)this + 555));
    CMatrix::SetTranslate((CMatrix *)v20, v21, v22, vmin_f32(v1, v2).n64_f32[0]);
    CMatrix::UpdateRW((CMatrix *)v20);
    v8 = *((unsigned __int16 *)this + 19);
  }
  if ( v8 == 610 )
  {
    v10 = (float *)((char *)this + 2412);
    v11 = *((float *)this + 603);
    if ( v11 > 6.2832 )
    {
      v11 = v11 + -6.2832;
      *v10 = v11;
    }
    v12 = (float *)*((_DWORD *)this + 5);
    v13 = v12[4];
    v14 = v12[5];
    v15 = *((float *)this + 20) * v12[6];
    v16 = (float)((float)(*((float *)this + 18) * v13) + (float)(*((float *)this + 19) * v14)) + v15;
    v17 = 0.1;
    v18 = v16 < 0.1;
    if ( v16 <= 0.1 )
      v18 = v16 < 0.0;
    if ( v18 )
    {
      v17 = 0.0;
    }
    else if ( v16 <= 0.1 )
    {
      v17 = (float)((float)(*((float *)this + 18) * v13) + (float)(*((float *)this + 19) * v14)) + v15;
    }
    *(float *)&v19 = v11 - (float)(v17 * *(float *)&CTimer::ms_fTimeStep);
    *v10 = *(float *)&v19;
    CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 428), 0, v19, 1);
  }
  CMatrix::~CMatrix((CMatrix *)v20);
}


// ============================================================

// Address: 0x57bcfc
// Original: _ZN8CTrailer15ResetSuspensionEv
// Demangled: CTrailer::ResetSuspension(void)
float *__fastcall CTrailer::ResetSuspension(CTrailer *this)
{
  float v2; // s0
  float *result; // r0

  CAutomobile::ResetSuspension(this);
  v2 = 1.0;
  *((_DWORD *)this + 637) = 1065353216;
  *((_DWORD *)this + 638) = 1065353216;
  result = (float *)((char *)this + 2560);
  if ( *((_DWORD *)this + 308) && *result > -1000.0 )
    v2 = 0.0;
  *result = v2;
  return result;
}


// ============================================================

// Address: 0x57bd44
// Original: _ZN8CTrailer14GetTowHitchPosER7CVectorbP8CVehicle
// Demangled: CTrailer::GetTowHitchPos(CVector &,bool,CVehicle *)
int __fastcall CTrailer::GetTowHitchPos(CTrailer *this, CVector *a2, int a3, CVehicle *a4)
{
  float v5; // r12
  int v6; // r1
  __int64 v7; // d16
  int v8; // r1
  __int64 v10; // [sp+0h] [bp-18h]
  int v11; // [sp+8h] [bp-10h]

  v5 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)];
  v6 = *(_DWORD *)(LODWORD(v5) + 116);
  v7 = *(_QWORD *)(v6 + 108);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v6 + 116);
  *(_QWORD *)a2 = v7;
  if ( !a4 || *((_WORD *)a4 + 19) != 525 )
  {
    if ( *(float *)a2 == 0.0 && *((float *)a2 + 1) == 0.0 && *((float *)a2 + 2) == 0.0 )
    {
      v8 = 0;
      if ( a3 != 1 )
        return v8;
      *(_DWORD *)a2 = 0;
      *((float *)a2 + 1) = *(float *)(*(_DWORD *)(LODWORD(v5) + 44) + 16) + 1.0;
      *((float *)a2 + 2) = 0.5 - *((float *)this + 555);
    }
    operator*();
    v8 = 1;
    *((_DWORD *)a2 + 2) = v11;
    *(_QWORD *)a2 = v10;
    return v8;
  }
  return 0;
}


// ============================================================

// Address: 0x57bdfc
// Original: _ZN8CTrailer12GetTowBarPosER7CVectorbP8CVehicle
// Demangled: CTrailer::GetTowBarPos(CVector &,bool,CVehicle *)
int __fastcall CTrailer::GetTowBarPos(CTrailer *this, CVector *a2, int a3, CVehicle *a4)
{
  int result; // r0
  __int64 v6; // [sp+0h] [bp-18h]
  int v7; // [sp+8h] [bp-10h]

  if ( !a3 && (unsigned int)*((__int16 *)this + 19) >> 1 != 303 )
    return 0;
  *(_DWORD *)a2 = 0;
  *((float *)a2 + 1) = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44) + 4)
                     + 0.05;
  *((float *)a2 + 2) = 0.5 - *((float *)this + 555);
  operator*();
  *((_DWORD *)a2 + 2) = v7;
  result = 1;
  *(_QWORD *)a2 = v6;
  return result;
}


// ============================================================

// Address: 0x57be78
// Original: _ZN8CTrailer10SetTowLinkEP8CVehicleb
// Demangled: CTrailer::SetTowLink(CVehicle *,bool)
int __fastcall CTrailer::SetTowLink(CTrailer *this, CEntity **a2, int a3)
{
  unsigned int v6; // r1
  int result; // r0
  CEntity *v8; // r0
  float v9; // s0
  CMatrix *v10; // r0
  int v11; // r1
  float *v12; // r2
  float v13; // s2
  float v14; // s6
  float v15; // s4
  float v16; // s2
  float v17; // s0
  float *v18; // r0
  __int64 v19; // d16
  float v20; // [sp+0h] [bp-28h] BYREF
  float v21; // [sp+4h] [bp-24h]
  float v22; // [sp+8h] [bp-20h]
  float v23; // [sp+Ch] [bp-1Ch] BYREF
  float v24; // [sp+10h] [bp-18h]
  float v25; // [sp+14h] [bp-14h]

  if ( !a2 )
    return 0;
  v6 = *((unsigned __int8 *)this + 58);
  result = 0;
  if ( v6 >> 3 <= 0xA && ((1 << (v6 >> 3)) & 0x418) != 0 )
  {
    *((_DWORD *)this + 308) = a2;
    *((_BYTE *)this + 58) = v6 & 7 | 0x50;
    CEntity::RegisterReference((CEntity *)a2, (CEntity **)this + 308);
    a2[309] = this;
    CEntity::RegisterReference(this, a2 + 309);
    CPhysical::RemoveFromMovingList(this);
    CPhysical::RemoveFromMovingList((CPhysical *)a2);
    CPhysical::AddToMovingList(this);
    CPhysical::AddToMovingList((CPhysical *)a2);
    if ( a3 != 1 )
    {
      CVehicle::UpdateTractorLink((CVehicle *)a2, 1, 0);
LABEL_10:
      CAEVehicleAudioEntity::AddAudioEvent((CAEVehicleAudioEntity *)(a2 + 79), 113, 0.0);
      return 1;
    }
    if ( *((float *)this + 640) > -1000.0 )
      *((_DWORD *)this + 640) = 0;
    v8 = a2[5];
    if ( v8 )
      v9 = atan2f(COERCE_FLOAT(*((_DWORD *)v8 + 4) ^ 0x80000000), *((float *)v8 + 5));
    else
      v9 = *((float *)a2 + 4);
    v10 = (CMatrix *)*((_DWORD *)this + 5);
    if ( v10 )
      CMatrix::SetRotateZOnly(v10, v9);
    else
      *((float *)this + 4) = v9;
    v24 = 0.0;
    v25 = 0.0;
    v20 = 0.0;
    v21 = 0.0;
    v22 = 0.0;
    v23 = 0.0;
    if ( (*(int (__fastcall **)(CTrailer *, float *, int, CTrailer *))(*(_DWORD *)this + 240))(this, &v20, 1, this) == 1
      && (*((int (__fastcall **)(CEntity **, float *, int, CTrailer *))*a2 + 61))(a2, &v23, 1, this) == 1 )
    {
      v11 = *((_DWORD *)this + 5);
      v12 = (float *)(v11 + 48);
      if ( !v11 )
        v12 = (float *)((char *)this + 4);
      v13 = v21 - v12[1];
      v14 = v22 - v12[2];
      v20 = v20 - *v12;
      v15 = v23 - v20;
      v21 = v13;
      v16 = v24 - v13;
      v17 = v25 - v14;
      v22 = v14;
      if ( v11 )
      {
        *(float *)(v11 + 48) = v15;
        *(float *)(*((_DWORD *)this + 5) + 52) = v16;
        v18 = (float *)(*((_DWORD *)this + 5) + 56);
      }
      else
      {
        v18 = (float *)((char *)this + 12);
        *((float *)this + 1) = v15;
        *((float *)this + 2) = v16;
      }
      *v18 = v17;
      v19 = *((_QWORD *)a2 + 9);
      *((_DWORD *)this + 20) = a2[20];
      *((_QWORD *)this + 9) = v19;
      CAutomobile::PlaceOnRoadProperly(this);
      goto LABEL_10;
    }
    return 0;
  }
  return result;
}


// ============================================================

// Address: 0x57c020
// Original: _ZN8CTrailer12BreakTowLinkEv
// Demangled: CTrailer::BreakTowLink(void)
int __fastcall CTrailer::BreakTowLink(CTrailer *this)
{
  int v2; // r0
  char *v3; // r5
  CEntity **v4; // r0
  char v5; // r0

  v2 = *((_DWORD *)this + 308);
  if ( v2 )
  {
    v3 = (char *)this + 1232;
    CAEVehicleAudioEntity::AddAudioEvent((CAEVehicleAudioEntity *)(v2 + 316), 114, 0.0);
    v4 = (CEntity **)*((_DWORD *)this + 308);
    if ( v4 )
    {
      if ( v4[309] )
      {
        CEntity::CleanUpOldReference(v4[309], v4 + 309);
        *(_DWORD *)(*(_DWORD *)v3 + 1236) = 0;
        v4 = *(CEntity ***)v3;
      }
      CEntity::CleanUpOldReference((CEntity *)v4, (CEntity **)this + 308);
      *(_DWORD *)v3 = 0;
    }
  }
  v5 = *((_BYTE *)this + 58);
  if ( (v5 & 0xF0) != 0x50 )
    return 0;
  *((_BYTE *)this + 58) = v5 & 7 | 0x20;
  return 1;
}


// ============================================================

// Address: 0x57c084
// Original: _ZN8CTrailer22ProcessEntityCollisionEP7CEntityP9CColPoint
// Demangled: CTrailer::ProcessEntityCollision(CEntity *,CColPoint *)
int __fastcall CTrailer::ProcessEntityCollision(int a1, int a2, int a3)
{
  int ColModel; // r0
  int v6; // r3
  int v7; // r4
  int v8; // r11
  __int64 v9; // d17
  float v10; // r2
  CPlaceable *v11; // r1
  int v12; // r0
  bool v13; // zf
  int v14; // r5
  int v15; // r8
  int v16; // r0
  CMatrix *v17; // r6
  int v18; // r9
  int v19; // r0
  int v20; // r4
  CEntity *v21; // r12
  int v22; // r3
  int v23; // r11
  int v24; // r10
  int v25; // r9
  int v26; // r5
  float v27; // s0
  int v28; // r4
  float *v29; // r0
  int v30; // r8
  float *v31; // r6
  int v32; // r0
  bool v33; // zf
  int v34; // r0
  float *v35; // r1
  float v36; // s2
  float *v37; // r0
  float v38; // s4
  __int64 v39; // kr00_8
  unsigned int v40; // r1
  int v41; // r5
  bool v42; // cc
  int v43; // r0
  int v44; // r2
  float *v45; // [sp+10h] [bp-168h]
  int v46; // [sp+14h] [bp-164h]
  int *v47; // [sp+18h] [bp-160h]
  __int64 *v48; // [sp+1Ch] [bp-15Ch]
  int v49; // [sp+20h] [bp-158h]
  int v50; // [sp+24h] [bp-154h]
  _BYTE v53[264]; // [sp+30h] [bp-148h] BYREF
  _QWORD v54[2]; // [sp+138h] [bp-40h] BYREF
  float v55; // [sp+148h] [bp-30h]
  float v56; // [sp+14Ch] [bp-2Ch]

  if ( *(float *)(a1 + 2560) == -1000.0 )
    return sub_190570((CEntity *)a1);
  if ( (*(_BYTE *)(a1 + 58) & 0xF8) != 0x10 )
    *(_DWORD *)(a1 + 1068) |= 0x1000000u;
  ColModel = CEntity::GetColModel((CEntity *)a1);
  v6 = a1;
  v7 = ColModel;
  v8 = *(_DWORD *)(ColModel + 44);
  v9 = *(_QWORD *)(a1 + 2032);
  v54[0] = *(_QWORD *)(a1 + 2024);
  v54[1] = v9;
  v10 = *(float *)(a1 + 2552);
  v55 = *(float *)(a1 + 2548);
  v56 = v10;
  v11 = (CPlaceable *)a2;
  if ( (*(_BYTE *)(a1 + 69) & 0x90) != 0 || (*(_BYTE *)(a2 + 58) & 6) == 2 )
    *(_BYTE *)(v8 + 6) = 0;
  v12 = *(_DWORD *)(a1 + 1232);
  v13 = v12 == a2;
  if ( v12 != a2 )
    v13 = *(_DWORD *)(a1 + 1236) == a2;
  if ( v13 )
  {
    v14 = *(__int16 *)(v8 + 4);
    *(_WORD *)(v8 + 4) = 0;
    v15 = *(__int16 *)(*(_DWORD *)(CEntity::GetColModel((CEntity *)a2) + 44) + 4);
    v16 = CEntity::GetColModel((CEntity *)a2);
    v6 = a1;
    v11 = (CPlaceable *)a2;
    *(_WORD *)(*(_DWORD *)(v16 + 44) + 4) = 0;
  }
  else
  {
    v14 = -1;
    v15 = -1;
  }
  v17 = (CMatrix *)*((_DWORD *)v11 + 5);
  v18 = *(_DWORD *)(v6 + 20);
  if ( !v17 )
  {
    CPlaceable::AllocateMatrix(v11);
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(a2 + 4), *(CMatrix **)(a2 + 20));
    v11 = (CPlaceable *)a2;
    v17 = *(CMatrix **)(a2 + 20);
  }
  v19 = CEntity::GetColModel(v11);
  v20 = CCollision::ProcessColModels(v18, v7, v17, v19, a3, (int)v53, (int)v54, 0);
  if ( v14 >= 0 )
    *(_WORD *)(v8 + 4) = v14;
  if ( v15 >= 0 )
    *(_WORD *)(*(_DWORD *)(CEntity::GetColModel((CEntity *)a2) + 44) + 4) = v15;
  v21 = (CEntity *)a2;
  if ( *(_BYTE *)(v8 + 6) )
  {
    v46 = v20;
    v22 = a1;
    v23 = 0;
    v24 = 1412;
    v45 = (float *)(a1 + 2552);
    v49 = a1 + 2324;
    v48 = (__int64 *)(a1 + 28);
    v47 = (int *)(a2 + 28);
    v25 = 0;
    v26 = 0;
    v50 = 0;
    do
    {
      v27 = *(float *)((char *)v54 + v23);
      if ( v27 < 1.0 )
      {
        v28 = v22 + v23;
        v29 = (float *)(v22 + v23 + 2024);
        if ( v27 < *v29 )
        {
          v30 = v22 + v26;
          *v29 = v27;
          v31 = (float *)(v22 + v26 + 1848);
          CColPoint::operator=();
          v22 = a1;
          v21 = (CEntity *)a2;
          *(_BYTE *)(a1 + v24) = *(_BYTE *)(v30 + 1885);
          v32 = *(_BYTE *)(a2 + 58) & 7;
          v33 = v32 == 4;
          ++v50;
          if ( v32 != 4 )
            v33 = v32 == 2;
          if ( v33 )
          {
            *(_DWORD *)(v28 + 2300) = a2;
            CEntity::RegisterReference((CEntity *)a2, (CEntity **)(v49 + v23 - 24));
            v22 = a1;
            v21 = (CEntity *)a2;
            v34 = *(_DWORD *)(a2 + 20);
            v35 = (float *)(v34 + 48);
            if ( !v34 )
              v35 = (float *)(a2 + 4);
            v36 = *(float *)(v30 + 1852) - v35[1];
            v37 = (float *)(v49 + v25);
            v38 = *(float *)(v30 + 1856) - v35[2];
            *(v37 - 2) = *v31 - *v35;
            *(float *)(a1 + v25 + 2320) = v36;
            *v37 = v38;
          }
          *(_BYTE *)(v22 + 190) = *(_BYTE *)(v30 + 1883);
          if ( (*((_BYTE *)v21 + 58) & 7) == 1 )
          {
            *(_DWORD *)(v22 + 1168) = v21;
            v39 = *v48;
            v40 = *(_DWORD *)v48 & 0xBFFFFFFF | ((((unsigned int)*v47 >> 30) & 1) << 30);
            *(_DWORD *)v48 = v40;
            *(_DWORD *)(a1 + 32) = HIDWORD(v39);
            *(_DWORD *)v48 = v40 & 0x7FFFFFFF | ((*v47 < 0) << 31);
            *(_DWORD *)(a1 + 32) = HIDWORD(v39);
          }
        }
      }
      v26 += 44;
      ++v24;
      v23 += 4;
      v25 += 12;
    }
    while ( v26 != 176 );
    if ( v55 >= 1.0 || v55 >= *(float *)(v22 + 2548) )
    {
      v20 = v46;
      v41 = v50;
    }
    else
    {
      *(float *)(v22 + 2548) = v55;
      CColPoint::operator=();
      v21 = (CEntity *)a2;
      v22 = a1;
      v20 = v46;
      v41 = v50 + 1;
    }
    if ( v56 < 1.0 && v56 < *v45 )
    {
      *v45 = v56;
      CColPoint::operator=();
      v22 = a1;
      v21 = (CEntity *)a2;
      ++v41;
    }
  }
  else
  {
    v41 = 0;
    *(_BYTE *)(v8 + 6) = 6;
    v22 = a1;
  }
  v42 = v20 < 0;
  if ( v20 <= 0 )
    v42 = v41 < 1;
  if ( !v42 )
  {
    CPhysical::AddCollisionRecord((CPhysical *)v22, v21);
    v43 = a2;
    if ( (*(_BYTE *)(a2 + 58) & 7) != 1 )
    {
      CPhysical::AddCollisionRecord((CPhysical *)a2, (CEntity *)a1);
      v43 = a2;
    }
    if ( v20 >= 1 )
    {
      v44 = *(_BYTE *)(v43 + 58) & 7;
      if ( v44 == 1 || v44 == 4 && (*(_BYTE *)(v43 + 68) & 4) != 0 )
        *(_DWORD *)(a1 + 28) |= 0x1000u;
    }
  }
  return v20;
}


// ============================================================
