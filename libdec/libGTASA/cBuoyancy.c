
// Address: 0x1915a8
// Original: j__ZN9cBuoyancy19ProcessBuoyancyBoatEP8CVehiclefP7CVectorS3_b
// Demangled: cBuoyancy::ProcessBuoyancyBoat(CVehicle *,float,CVector *,CVector *,bool)
// attributes: thunk
int __fastcall cBuoyancy::ProcessBuoyancyBoat(
        cBuoyancy *this,
        CVehicle *a2,
        float a3,
        CVector *a4,
        CVector *a5,
        bool a6)
{
  return _ZN9cBuoyancy19ProcessBuoyancyBoatEP8CVehiclefP7CVectorS3_b(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x192cb8
// Original: j__ZN9cBuoyancy15ProcessBuoyancyEP9CPhysicalfP7CVectorS3_
// Demangled: cBuoyancy::ProcessBuoyancy(CPhysical *,float,CVector *,CVector *)
// attributes: thunk
int __fastcall cBuoyancy::ProcessBuoyancy(cBuoyancy *this, CPhysical *a2, float a3, CVector *a4, CVector *a5)
{
  return _ZN9cBuoyancy15ProcessBuoyancyEP9CPhysicalfP7CVectorS3_(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1952e0
// Original: j__ZN9cBuoyancy21SimpleSumBuoyancyDataER7CVector11tWaterLevel
// Demangled: cBuoyancy::SimpleSumBuoyancyData(CVector &,tWaterLevel)
// attributes: thunk
int cBuoyancy::SimpleSumBuoyancyData()
{
  return _ZN9cBuoyancy21SimpleSumBuoyancyDataER7CVector11tWaterLevel();
}


// ============================================================

// Address: 0x196d7c
// Original: j__ZN9cBuoyancy18AddSplashParticlesEP9CPhysical7CVectorS2_S2_h
// Demangled: cBuoyancy::AddSplashParticles(CPhysical *,CVector,CVector,CVector,uchar)
// attributes: thunk
int cBuoyancy::AddSplashParticles()
{
  return _ZN9cBuoyancy18AddSplashParticlesEP9CPhysical7CVectorS2_S2_h();
}


// ============================================================

// Address: 0x196e5c
// Original: j__ZN9cBuoyancy18SimpleCalcBuoyancyEP9CPhysical
// Demangled: cBuoyancy::SimpleCalcBuoyancy(CPhysical *)
// attributes: thunk
int __fastcall cBuoyancy::SimpleCalcBuoyancy(cBuoyancy *this, CPhysical *a2)
{
  return _ZN9cBuoyancy18SimpleCalcBuoyancyEP9CPhysical(this, a2);
}


// ============================================================

// Address: 0x19e3f4
// Original: j__ZN9cBuoyancy12PreCalcSetupEP9CPhysicalf
// Demangled: cBuoyancy::PreCalcSetup(CPhysical *,float)
// attributes: thunk
int __fastcall cBuoyancy::PreCalcSetup(cBuoyancy *this, CPhysical *a2, float a3)
{
  return _ZN9cBuoyancy12PreCalcSetupEP9CPhysicalf(this, a2, a3);
}


// ============================================================

// Address: 0x56f794
// Original: _ZN9cBuoyancy15ProcessBuoyancyEP9CPhysicalfP7CVectorS3_
// Demangled: cBuoyancy::ProcessBuoyancy(CPhysical *,float,CVector *,CVector *)
int __fastcall cBuoyancy::ProcessBuoyancy(cBuoyancy *this, CPhysical *a2, float a3, CVector *a4, CVector *a5)
{
  float32x2_t v5; // d0
  float32x2_t v6; // d2
  int v9; // r0
  float *v10; // r11
  float *v13; // r2
  int v14; // r6
  int v15; // r0
  float *v16; // r1
  float v17; // s4
  unsigned __int8 *v18; // r6
  float v19; // s4
  float v20; // r11
  int v21; // r0
  int v22; // r6
  double v23; // d16
  float v24; // s2
  int v25; // r0
  CVector *v27; // [sp+8h] [bp-48h]
  double v28; // [sp+28h] [bp-28h] BYREF
  int v29; // [sp+30h] [bp-20h]

  v9 = *((_DWORD *)a2 + 5);
  v10 = (float *)((char *)a2 + 4);
  v13 = (float *)((char *)a2 + 4);
  v14 = 0;
  if ( v9 )
    v13 = (float *)(v9 + 48);
  if ( CWaterLevel::GetWaterLevel(
         *(CWaterLevel **)v13,
         v13[1],
         v13[2],
         COERCE_FLOAT((cBuoyancy *)((char *)this + 100)),
         (float *)((*((_DWORD *)a2 + 17) >> 27) & 1),
         0,
         v27) == 1 )
  {
    CMatrix::operator=();
    cBuoyancy::PreCalcSetup(this, a2, a3);
    if ( (*((_BYTE *)a2 + 58) & 7) == 3 )
    {
      CEntity::GetColModel(a2);
      v15 = *((_DWORD *)a2 + 5);
      v16 = v10;
      if ( v15 )
        v16 = (float *)(v15 + 48);
      v17 = v16[2];
      *((_BYTE *)this + 152) = 1;
      v18 = (unsigned __int8 *)this + 152;
      v19 = (float)((float)(*((float *)this + 25) - v17) + 1.0) / 1.9;
      *((float *)this + 47) = v19;
      if ( v19 <= 1.0 )
      {
        if ( v19 < 0.0 )
        {
          v19 = 0.0;
          *((_BYTE *)this + 152) = 0;
          *((_DWORD *)this + 47) = 0;
        }
      }
      else
      {
        v19 = 1.0;
        *((_DWORD *)this + 47) = 1065353216;
      }
      *((_DWORD *)this + 48) = 0;
      *((_DWORD *)this + 49) = 0;
      *((_DWORD *)this + 50) = 0;
      if ( v19 > 0.0 && v19 < 1.0 )
      {
        if ( !*((_DWORD *)a2 + 5) )
        {
          v20 = *((float *)a2 + 4);
          sinf(v20);
          cosf(v20);
        }
        cBuoyancy::AddSplashParticles();
      }
    }
    else
    {
      cBuoyancy::SimpleCalcBuoyancy(this, a2);
      v18 = (unsigned __int8 *)this + 152;
    }
    v21 = *v18;
    v22 = 0;
    if ( v21 )
    {
      Multiply3x3((const CMatrix *)&v28, (cBuoyancy *)((char *)this + 12));
      v23 = v28;
      *((_DWORD *)a4 + 2) = v29;
      *(double *)a4 = v23;
      *(_DWORD *)a5 = 0;
      *((_DWORD *)a5 + 1) = 0;
      v22 = 1;
      v5.n64_f32[0] = (float)(*((float *)this + 47) * *((float *)this + 27)) * *(float *)&CTimer::ms_fTimeStep;
      *((_DWORD *)a5 + 2) = v5.n64_u32[0];
      v24 = *((float *)a2 + 20) * *((float *)a2 + 36);
      if ( v24 > (float)(v5.n64_f32[0] * 4.0) )
      {
        v6.n64_u32[0] = 0;
        v5.n64_f32[0] = v5.n64_f32[0] - v24;
        *((_DWORD *)a5 + 2) = vmax_f32(v5, v6).n64_u32[0];
      }
    }
    v25 = *((unsigned __int8 *)this + 186);
    if ( *((_BYTE *)this + 186) )
      v25 = 1;
    return v22 | v25;
  }
  return v14;
}


// ============================================================

// Address: 0x56f9a0
// Original: _ZN9cBuoyancy12PreCalcSetupEP9CPhysicalf
// Demangled: cBuoyancy::PreCalcSetup(CPhysical *,float)
int __fastcall cBuoyancy::PreCalcSetup(cBuoyancy *this, CPhysical *a2, float a3)
{
  bool v6; // r0
  int ColModel; // r0
  __int64 v8; // d16
  __int64 v9; // d16
  int v10; // r3
  int v11; // r2
  float v12; // s0
  float v13; // s2
  float v14; // s4
  float v15; // s6
  float v16; // s4
  float v17; // s6
  float v18; // s8
  int v19; // r2
  bool v20; // zf
  float v21; // s2
  float v22; // s0
  float v23; // s0
  float v24; // s2
  float v25; // s4
  float v26; // s6
  float v27; // s8
  float v28; // s10
  float v29; // s0
  unsigned __int64 v30; // d1
  float v31; // s4
  float v32; // s6
  float v33; // s4
  float v34; // s2
  float v35; // s4
  float v36; // s6
  int result; // r0
  int v38; // r1
  char *v39; // r2
  __int64 v40; // d16
  int v41; // r1

  v6 = 0;
  if ( (*((_BYTE *)a2 + 58) & 7) == 2 )
    v6 = *((_DWORD *)a2 + 360) == 5;
  *((_BYTE *)this + 186) = v6;
  ColModel = CEntity::GetColModel(a2);
  v8 = *(_QWORD *)ColModel;
  *((_DWORD *)this + 33) = *(_DWORD *)(ColModel + 8);
  *(_QWORD *)((char *)this + 124) = v8;
  v9 = *(_QWORD *)(ColModel + 12);
  v10 = *((unsigned __int8 *)this + 186);
  *((_DWORD *)this + 30) = *(_DWORD *)(ColModel + 20);
  *((_QWORD *)this + 14) = v9;
  v11 = *((__int16 *)a2 + 19);
  if ( v10 )
  {
    switch ( *((_WORD *)a2 + 19) )
    {
      case 0x1BE:
        v29 = *((float *)this + 32) * 0.9;
        *((float *)this + 29) = *((float *)this + 29) * 0.9;
        *((float *)this + 32) = v29;
        goto LABEL_28;
      case 0x1BF:
      case 0x1C0:
      case 0x1C1:
      case 0x1C2:
      case 0x1C3:
      case 0x1C7:
      case 0x1C8:
      case 0x1C9:
      case 0x1CA:
      case 0x1CB:
      case 0x1CC:
      case 0x1CD:
      case 0x1CE:
      case 0x1CF:
      case 0x1D0:
      case 0x1D1:
      case 0x1D2:
      case 0x1D3:
      case 0x1D4:
      case 0x1D5:
      case 0x1D6:
      case 0x1D7:
      case 0x1DA:
      case 0x1DB:
      case 0x1DC:
      case 0x1DD:
      case 0x1DE:
      case 0x1DF:
      case 0x1E0:
      case 0x1E1:
      case 0x1E2:
      case 0x1E3:
      case 0x1E5:
      case 0x1E6:
      case 0x1E7:
      case 0x1E8:
      case 0x1E9:
      case 0x1EA:
      case 0x1EB:
      case 0x1EC:
        goto LABEL_17;
      case 0x1C4:
        v12 = 1.25;
        v13 = *((float *)this + 29);
        v14 = *((float *)this + 32);
        v15 = 0.83;
        goto LABEL_27;
      case 0x1C5:
      case 0x1ED:
        *((float *)this + 32) = *((float *)this + 32) * 0.9;
        goto LABEL_28;
      case 0x1C6:
        v23 = 1.3;
        v24 = *((float *)this + 29);
        v25 = *((float *)this + 32);
        v26 = *((float *)this + 33);
        v27 = 0.82;
        goto LABEL_23;
      case 0x1D8:
        v23 = 1.1;
        v24 = *((float *)this + 29);
        v25 = *((float *)this + 32);
        v26 = *((float *)this + 33);
        v27 = 0.9;
        v28 = -0.3;
        goto LABEL_24;
      case 0x1D9:
        v23 = 1.3;
        v24 = *((float *)this + 29);
        v25 = *((float *)this + 32);
        v26 = *((float *)this + 33);
        v27 = 0.9;
LABEL_23:
        v28 = -0.2;
        goto LABEL_24;
      case 0x1E4:
        v12 = 1.1;
        goto LABEL_26;
      default:
        if ( v11 == 595 )
        {
          v23 = 1.25;
          v24 = *((float *)this + 29);
          v25 = *((float *)this + 32);
          v26 = *((float *)this + 33);
          v27 = 0.8;
          v28 = -0.1;
LABEL_24:
          *((float *)this + 29) = v24 * v23;
          *((float *)this + 32) = v25 * v27;
          *((float *)this + 33) = v26 + v28;
          goto LABEL_28;
        }
LABEL_17:
        v12 = 1.05;
LABEL_26:
        v13 = *((float *)this + 29);
        v14 = *((float *)this + 32);
        v15 = 0.9;
        break;
    }
    goto LABEL_27;
  }
  if ( v11 == 460 )
  {
    v16 = *((float *)this + 29);
    v17 = *((float *)this + 31) * 0.3;
    v18 = *((float *)this + 33) + -0.1;
    *((float *)this + 28) = *((float *)this + 28) * 0.3;
    *((float *)this + 29) = v16 * 1.4;
    *((float *)this + 31) = v17;
    *((float *)this + 32) = v16 * -0.6;
    *((float *)this + 33) = v18;
    goto LABEL_28;
  }
  if ( v11 == 417 )
  {
    v12 = 1.15;
    v13 = *((float *)this + 29);
    v14 = *((float *)this + 32);
    v15 = 0.4;
LABEL_27:
    *((float *)this + 29) = v13 * v12;
    *((float *)this + 32) = v14 * v15;
    goto LABEL_28;
  }
  v19 = *((_BYTE *)a2 + 58) & 7;
  v20 = v19 == 2;
  if ( v19 == 2 )
    v20 = *((_DWORD *)a2 + 361) == 3;
  if ( v20 )
  {
    v21 = *((float *)this + 33);
    v22 = -*((float *)this + 29);
    *((float *)this + 30) = v21 * -1.1;
    *((float *)this + 32) = v22;
    *((float *)this + 33) = v21 * 0.85;
  }
LABEL_28:
  v30 = vmul_f32(
          vsub_f32(*((float32x2_t *)this + 14), *(float32x2_t *)((char *)this + 124)),
          (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
  v31 = (float)(*((float *)this + 30) - *((float *)this + 33)) * 0.5;
  *(_QWORD *)((char *)this + 156) = v30;
  *((float *)this + 41) = v31;
  if ( v31 <= *(float *)&v30 )
  {
    if ( *((float *)&v30 + 1) <= *(float *)&v30 )
    {
      v32 = *((float *)&v30 + 1) / *(float *)&v30;
      *((_DWORD *)this + 42) = 1065353216;
    }
    else
    {
      v32 = 1.0;
      *((float *)this + 42) = *(float *)&v30 / *((float *)&v30 + 1);
      LODWORD(v30) = HIDWORD(v30);
    }
    v34 = v31 / *(float *)&v30;
  }
  else
  {
    v32 = *((float *)&v30 + 1) / v31;
    v33 = *(float *)&v30 / v31;
    v34 = 1.0;
    *((float *)this + 42) = v33;
  }
  *((float *)this + 43) = v32;
  v35 = *((float *)this + 25);
  v36 = *((float *)this + 26);
  *(_QWORD *)((char *)this + 188) = 0LL;
  *(_QWORD *)((char *)this + 196) = 0LL;
  result = 0;
  *((_BYTE *)this + 152) = 0;
  *((float *)this + 44) = v34;
  *((_DWORD *)this + 34) = 1065353216;
  v38 = *((_DWORD *)a2 + 5);
  v39 = (char *)(v38 + 48);
  if ( !v38 )
    v39 = (char *)a2 + 4;
  v40 = *(_QWORD *)v39;
  v41 = *((_DWORD *)v39 + 2);
  *((_DWORD *)this + 2) = v41;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = v41;
  *((float *)this + 27) = a3;
  *((float *)this + 25) = v36 + v35;
  *(_QWORD *)this = v40;
  return result;
}


// ============================================================

// Address: 0x56fd3c
// Original: _ZN9cBuoyancy18AddSplashParticlesEP9CPhysical7CVectorS2_S2_h
// Demangled: cBuoyancy::AddSplashParticles(CPhysical *,CVector,CVector,CVector,uchar)
int __fastcall cBuoyancy::AddSplashParticles(
        int a1,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        __int64 a9,
        float a10,
        int a11)
{
  int result; // r0
  float v13; // s28
  float v14; // s17
  float v15; // s16
  float v16; // s18
  float v17; // s4
  float v18; // s6
  float v19; // s2
  float v22; // s24
  float v23; // s26
  float v24; // s30
  float v25; // s19
  int v26; // r11
  int v27; // r10
  float v28; // s21
  float v29; // s19
  float v30; // s27
  float v31; // s0
  int v32; // r0
  float *v33; // r1
  float v34; // s2
  float v35; // s4
  float v36; // s0
  CGeneral *AngleBetweenPoints; // r0
  float v38; // r1
  float v39; // r9
  float *v40; // r0
  float *v41; // r6
  float v42; // r5
  float v43; // r10
  float v44; // s0
  float v45; // s10
  float v46; // s2
  float v47; // s16
  float v48; // s0
  float v49; // s2
  int v50; // r0
  CPhysical *v51; // [sp+0h] [bp-E0h]
  float v52[2]; // [sp+18h] [bp-C8h] BYREF
  float v53; // [sp+20h] [bp-C0h]
  float v54; // [sp+24h] [bp-BCh] BYREF
  float v55; // [sp+28h] [bp-B8h]
  float v56; // [sp+2Ch] [bp-B4h]
  float v57; // [sp+40h] [bp-A0h] BYREF
  float v58; // [sp+44h] [bp-9Ch]
  float v59; // [sp+48h] [bp-98h]
  float v60[3]; // [sp+4Ch] [bp-94h] BYREF
  _BYTE v61[16]; // [sp+58h] [bp-88h] BYREF
  float v62; // [sp+68h] [bp-78h]
  float v63; // [sp+70h] [bp-70h]
  __int64 v64; // [sp+74h] [bp-6Ch] BYREF
  float v65; // [sp+7Ch] [bp-64h]

  result = HIDWORD(a9);
  v64 = a9;
  v65 = a10;
  v13 = *(float *)(a2 + 72);
  v14 = *(float *)(a2 + 76);
  v15 = *(float *)(a2 + 80);
  v16 = sqrtf((float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v15 * v15));
  if ( v16 <= 0.1 )
  {
    if ( v16 <= 0.05 )
      return result;
  }
  else
  {
    v17 = v15 * (float)(1.0 / v16);
    v18 = v14 * (float)(1.0 / v16);
    v19 = v13 * (float)(1.0 / v16);
    v16 = 0.1;
    v15 = v17 * 0.1;
    v14 = v18 * 0.1;
    v13 = v19 * 0.1;
  }
  v22 = a7 - a4;
  v23 = a6 - a3;
  v24 = a8 - a5;
  v25 = sqrtf((float)(v24 * v24) + (float)((float)(v23 * v23) + (float)(v22 * v22)));
  FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v61, 1.0, 1.0, 1.0, 0.1, 0.5, 1.0, 0.2);
  if ( a11 )
  {
    v62 = v62 * 0.5;
    v63 = v63 * 0.5;
  }
  v26 = (int)(float)(v25 + v25);
  if ( v26 <= 1 )
    v26 = 1;
  v27 = 0;
  v28 = *(float *)(a2 + 72) * 0.0;
  v29 = *(float *)(a2 + 76) * 0.0;
  v30 = (float)(*(float *)(a2 + 80) * 0.0) * 0.0;
  do
  {
    v31 = (float)v27 / (float)v26;
    v58 = (float)(v22 * v31) + a4;
    v57 = (float)(v23 * v31) + a3;
    v59 = (float)(v24 * v31) + a5;
    operator*();
    if ( (*(_BYTE *)(a2 + 58) & 7) != 3 )
    {
      v32 = *(_DWORD *)(a2 + 20);
      v33 = (float *)(v32 + 48);
      if ( !v32 )
        v33 = (float *)(a2 + 4);
      v34 = v55 - v33[1];
      v35 = v56 - v33[2];
      *(float *)&v64 = v54 - *v33;
      *((float *)&v64 + 1) = v34;
      v65 = v35;
    }
    v65 = 0.0;
    CVector::Normalise((CVector *)&v64);
    v60[0] = v28 + (float)((float)((float)(v13 * 0.0) * 120.0) + (float)((float)(v16 * *(float *)&v64) * 60.0));
    v60[1] = v29 + (float)((float)((float)(v14 * 0.0) * 120.0) + (float)((float)(v16 * *((float *)&v64 + 1)) * 60.0));
    v60[2] = v30 + (float)((float)((float)(v16 * v65) * 60.0) - (float)(v15 * 120.0));
    v36 = (float)((float)((float)rand() * 4.6566e-10) * 0.5) + 0.0;
    v56 = (float)(v65 * v36) + v56;
    v55 = (float)(*((float *)&v64 + 1) * v36) + v55;
    v54 = v54 + (float)(*(float *)&v64 * v36);
    FxSystem_c::AddParticle(dword_820558, (int)&v54, (int)v60, 0, (int)v61, -1.0, 1.2, 0.6, 0);
    ++v27;
  }
  while ( v27 < v26 );
  if ( (*(_BYTE *)(a2 + 58) & 7) == 3 )
  {
    AngleBetweenPoints = (CGeneral *)CGeneral::GetAngleBetweenPoints(
                                       *(CGeneral **)(*(_DWORD *)(a2 + 20) + 16),
                                       *(float *)(*(_DWORD *)(a2 + 20) + 20),
                                       0.0,
                                       0.0,
                                       *(float *)&v51);
    v39 = COERCE_FLOAT(CGeneral::LimitAngle(AngleBetweenPoints, v38));
    FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&v54, 1.0, 1.0, 1.0, 0.2, 0.4, 0.0, 0.5);
    v57 = 0.0;
    v58 = 0.0;
    v59 = 0.0;
    v40 = *(float **)(a2 + 20);
    v41 = v40 + 12;
    if ( v40 )
    {
      v46 = v40[4];
      v44 = v40[5];
      v45 = v40[6] * 0.4;
    }
    else
    {
      v41 = (float *)(a2 + 4);
      v42 = *(float *)(a2 + 16);
      v43 = sinf(v42);
      v44 = cosf(v42);
      v45 = 0.0;
      LODWORD(v46) = LODWORD(v43) ^ 0x80000000;
    }
    v47 = v45 + v41[2];
    v48 = (float)(v44 * 0.4) + v41[1];
    v49 = *v41 + (float)(v46 * 0.4);
    v53 = v47;
    v52[1] = v48;
    v52[0] = v49;
    if ( !CPedIntelligence::GetTaskSwim(*(CPedIntelligence **)(a2 + 1088)) )
    {
      v50 = *(_DWORD *)(a2 + 1092);
      if ( v50 )
        v53 = *(float *)(v50 + 144);
      else
        v53 = v47 + 0.5;
      FxSystem_c::AddParticle(dword_820554, (int)v52, (int)&v57, 0, (int)&v54, v39 + 180.0, 1.2, 0.6, 0);
      CAEPedAudioEntity::AddAudioEvent((CAEPedAudioEntity *)(a2 + 316), 76, 0.0, 1.0, 0, 0, 0, 0);
    }
  }
  return CAudioEngine::ReportWaterSplash((CAudioEngine *)&AudioEngine, (CPhysical *)a2, -100.0, 0);
}


// ============================================================

// Address: 0x5701d8
// Original: _ZN9cBuoyancy18SimpleCalcBuoyancyEP9CPhysical
// Demangled: cBuoyancy::SimpleCalcBuoyancy(CPhysical *)
_BYTE *__fastcall cBuoyancy::SimpleCalcBuoyancy(cBuoyancy *this, CPhysical *a2)
{
  const CVector *v3; // r6
  float v4; // s16
  _BYTE *v5; // r10
  int v6; // r0
  int v7; // r11
  float v8; // s18
  _BYTE *v9; // r9
  float v10; // s2
  float v11; // s0
  float v12; // s2
  unsigned __int64 v13; // d16
  float v14; // s2
  float v15; // s0
  int v16; // r4
  float v17; // s16
  float *v18; // r6
  float v19; // s0
  float v20; // s4
  float v21; // s2
  float v22; // s0
  float v23; // s4
  float v24; // s2
  int i; // r4
  _BYTE *result; // r0
  float *v27; // r6
  float v28; // s0
  float v29; // s4
  float v30; // s2
  float v31; // s0
  float v32; // s4
  float v33; // s2
  CVector *v34; // [sp+8h] [bp-E0h]
  int v35; // [sp+28h] [bp-C0h]
  _BYTE v36[108]; // [sp+34h] [bp-B4h] BYREF
  unsigned __int64 v37; // [sp+A0h] [bp-48h]
  float v38; // [sp+A8h] [bp-40h] BYREF
  float v39; // [sp+ACh] [bp-3Ch] BYREF
  float v40; // [sp+B0h] [bp-38h]
  float v41; // [sp+B4h] [bp-34h]

  v3 = (cBuoyancy *)((char *)this + 12);
  v4 = *((float *)this + 31);
  v5 = v36;
  v6 = 0;
  do
  {
    v35 = v6;
    v7 = 0;
    v8 = *((float *)this + 32);
    do
    {
      v9 = &v5[v7];
      *(_DWORD *)&v5[v7] = 0;
      *((_DWORD *)v9 + 1) = 0;
      *((_DWORD *)v9 + 2) = 0;
      v37 = __PAIR64__(LODWORD(v8), LODWORD(v4));
      v38 = 0.0;
      Multiply3x3((const CMatrix *)&v39, v3);
      v10 = *((float *)this + 1) + v40;
      v39 = *(float *)this + v39;
      v40 = v10;
      CWaterLevel::GetWaterLevel(
        (CWaterLevel *)LODWORD(v39),
        v10,
        *((float *)this + 2),
        COERCE_FLOAT(&v38),
        (float *)((char *)&stderr + 1),
        0,
        v34);
      v11 = v38 - (float)(v41 + *((float *)this + 24));
      v38 = v11;
      if ( v11 <= *((float *)this + 30) )
      {
        v12 = *((float *)this + 33);
        if ( v11 < v12 )
        {
          v38 = *((float *)this + 33);
          *((float *)v9 + 2) = v12;
          fVolMultiplier = 1065353216;
          goto LABEL_8;
        }
      }
      else
      {
        v38 = *((float *)this + 30);
      }
      fVolMultiplier = 1065353216;
      cBuoyancy::SimpleSumBuoyancyData();
      v13 = v37;
      *((float *)v9 + 2) = v38;
      *(_QWORD *)v9 = v13;
LABEL_8:
      v7 += 12;
      v8 = v8 + *((float *)this + 40);
    }
    while ( v7 != 36 );
    v5 += 36;
    v4 = v4 + *((float *)this + 39);
    v6 = v35 + 1;
  }
  while ( v35 != 2 );
  v14 = *((float *)this + 33);
  v15 = *((float *)this + 30) - v14;
  v16 = 0;
  *((float *)this + 47) = *((float *)this + 47) / (float)(v15 * 9.0);
  v17 = v14 + (float)(v15 * 0.5);
  do
  {
    v18 = (float *)&v36[v16];
    v19 = *(float *)&v36[v16 + 8];
    if ( v19 > v17 )
    {
      v20 = *((float *)this + 30);
      if ( v19 < v20 )
      {
        v21 = v18[11];
        if ( v21 > v17 && v21 < v20 )
          cBuoyancy::AddSplashParticles();
      }
    }
    v22 = v18[8];
    if ( v22 > v17 )
    {
      v23 = *((float *)this + 30);
      if ( v22 < v23 )
      {
        v24 = v18[17];
        if ( v24 > v17 && v24 < v23 )
          cBuoyancy::AddSplashParticles();
      }
    }
    v16 += 36;
  }
  while ( v16 != 72 );
  for ( i = 0; i != 24; i += 12 )
  {
    result = v36;
    v27 = (float *)&v36[i];
    v28 = *(float *)&v36[i + 8];
    if ( v28 > v17 )
    {
      v29 = *((float *)this + 30);
      if ( v28 < v29 )
      {
        v30 = v27[5];
        if ( v30 > v17 && v30 < v29 )
          result = (_BYTE *)cBuoyancy::AddSplashParticles();
      }
    }
    v31 = v27[20];
    if ( v31 > v17 )
    {
      v32 = *((float *)this + 30);
      if ( v31 < v32 )
      {
        v33 = v27[23];
        if ( v33 > v17 && v33 < v32 )
          result = (_BYTE *)cBuoyancy::AddSplashParticles();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5704dc
// Original: _ZN9cBuoyancy17CalcBuoyancyForceEP9CPhysicalP7CVectorS3_
// Demangled: cBuoyancy::CalcBuoyancyForce(CPhysical *,CVector *,CVector *)
int __fastcall cBuoyancy::CalcBuoyancyForce(cBuoyancy *this, CPhysical *a2, CVector *a3, CVector *a4)
{
  float32x2_t v4; // d0
  float32x2_t v5; // d2
  int v10; // r6
  double v11; // d16
  float v12; // s2
  double v14; // [sp+0h] [bp-28h] BYREF
  int v15; // [sp+8h] [bp-20h]

  v10 = 0;
  if ( *((_BYTE *)this + 152) )
  {
    Multiply3x3((const CMatrix *)&v14, (cBuoyancy *)((char *)this + 12));
    v11 = v14;
    *((_DWORD *)a3 + 2) = v15;
    *(double *)a3 = v11;
    *(_DWORD *)a4 = 0;
    *((_DWORD *)a4 + 1) = 0;
    v10 = 1;
    v4.n64_f32[0] = (float)(*((float *)this + 47) * *((float *)this + 27)) * *(float *)&CTimer::ms_fTimeStep;
    *((_DWORD *)a4 + 2) = v4.n64_u32[0];
    v12 = *((float *)a2 + 20) * *((float *)a2 + 36);
    if ( v12 > (float)(v4.n64_f32[0] * 4.0) )
    {
      v5.n64_u32[0] = 0;
      v4.n64_f32[0] = v4.n64_f32[0] - v12;
      *((_DWORD *)a4 + 2) = vmax_f32(v4, v5).n64_u32[0];
    }
  }
  return v10;
}


// ============================================================

// Address: 0x570574
// Original: _ZN9cBuoyancy14FindWaterLevelERK7CVectorPS0_P11tWaterLevel
// Demangled: cBuoyancy::FindWaterLevel(CVector const&,CVector*,tWaterLevel *)
int __fastcall cBuoyancy::FindWaterLevel(float *a1, int a2, int a3, int *a4)
{
  float v8; // s2
  int result; // r0
  float v10; // s2
  float v11; // s0
  CVector *v12; // [sp+8h] [bp-28h]
  float v13; // [sp+Ch] [bp-24h] BYREF
  float v14; // [sp+10h] [bp-20h]
  float v15; // [sp+14h] [bp-1Ch]

  *a4 = 1;
  Multiply3x3((const CMatrix *)&v13, (const CVector *)(a1 + 3));
  v8 = a1[1] + v14;
  v13 = *a1 + v13;
  v14 = v8;
  result = CWaterLevel::GetWaterLevel(
             (CWaterLevel *)LODWORD(v13),
             v8,
             a1[2],
             COERCE_FLOAT(a3 + 8),
             (float *)((char *)&stderr + 1),
             0,
             v12);
  v10 = *(float *)(a3 + 8) - (float)(v15 + *(float *)(a2 + 8));
  *(float *)(a3 + 8) = v10;
  v11 = a1[30];
  if ( v10 <= v11 )
  {
    v11 = a1[33];
    if ( v10 >= v11 )
      return result;
    result = 0;
  }
  else
  {
    result = 2;
  }
  *(float *)(a3 + 8) = v11;
  *a4 = result;
  return result;
}


// ============================================================

// Address: 0x57061a
// Original: _ZN9cBuoyancy18FindWaterLevelNormERK7CVectorPS0_P11tWaterLevelS3_
// Demangled: cBuoyancy::FindWaterLevelNorm(CVector const&,CVector*,tWaterLevel *,CVector*)
int __fastcall cBuoyancy::FindWaterLevelNorm(float *a1, int a2, int a3, int *a4, CVector *a5)
{
  float v9; // s2
  int result; // r0
  float v11; // s2
  float v12; // s0
  CVector *v13; // [sp+8h] [bp-28h]
  float v14; // [sp+Ch] [bp-24h] BYREF
  float v15; // [sp+10h] [bp-20h]
  float v16; // [sp+14h] [bp-1Ch]

  *a4 = 1;
  Multiply3x3((const CMatrix *)&v14, (const CVector *)(a1 + 3));
  v9 = a1[1] + v15;
  v14 = *a1 + v14;
  v15 = v9;
  result = CWaterLevel::GetWaterLevel(
             (CWaterLevel *)LODWORD(v14),
             v9,
             a1[2],
             COERCE_FLOAT(a3 + 8),
             (float *)((char *)&stderr + 1),
             a5,
             v13);
  v11 = *(float *)(a3 + 8) - (float)(v16 + *(float *)(a2 + 8));
  *(float *)(a3 + 8) = v11;
  v12 = a1[30];
  if ( v11 <= v12 )
  {
    v12 = a1[33];
    if ( v11 >= v12 )
      return result;
    result = 0;
  }
  else
  {
    result = 2;
  }
  *(float *)(a3 + 8) = v12;
  *a4 = result;
  return result;
}


// ============================================================

// Address: 0x5706c0
// Original: _ZN9cBuoyancy21SimpleSumBuoyancyDataER7CVector11tWaterLevel
// Demangled: cBuoyancy::SimpleSumBuoyancyData(CVector &,tWaterLevel)
float __fastcall cBuoyancy::SimpleSumBuoyancyData(int a1, float *a2)
{
  char v4; // r0
  float v5; // s4
  float v6; // s0
  float result; // r0
  float v8; // s6
  float v9; // s4
  float v10; // s6
  float v11; // s8
  float v12; // s10
  float v13; // s14
  float v14; // s3
  float v15; // s1
  float v16; // s12

  v4 = byte_A065E4;
  __dmb(0xBu);
  if ( (v4 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A065E4) )
    j___cxa_guard_release((__guard *)&byte_A065E4);
  v5 = *(float *)(a1 + 132);
  v6 = fabsf(a2[2] - v5) - (float)(1.0 - fVolMultiplier);
  unk_A065D4 = LODWORD(v6);
  if ( v6 < 0.0 )
    return 0.0;
  if ( *(_BYTE *)(a1 + 186) )
  {
    v6 = (float)(v6 * fVolMultiplier) * (float)(v6 * fVolMultiplier);
    unk_A065D4 = LODWORD(v6);
  }
  v8 = *(float *)(a1 + 176);
  *(float *)(a1 + 188) = v6 + *(float *)(a1 + 188);
  v9 = v8 * (float)((float)(a2[2] + v5) * 0.5);
  flt_A065D8[2] = v9;
  v10 = *a2 * *(float *)(a1 + 168);
  flt_A065D8[0] = v10;
  v11 = a2[1] * *(float *)(a1 + 172);
  flt_A065D8[1] = v11;
  if ( *(_BYTE *)(a1 + 184) )
  {
    v11 = -v11;
    v10 = -v10;
    v9 = -v9;
    flt_A065D8[0] = v10;
    flt_A065D8[1] = v11;
    flt_A065D8[2] = v9;
  }
  v12 = *(float *)(a1 + 136);
  v13 = 1.0 - (float)(1.0 / v12);
  unk_A065CC = 1.0 / v12;
  unk_A065D0 = LODWORD(v13);
  v14 = *(float *)(a1 + 200);
  v15 = *(float *)(a1 + 196);
  v16 = v13 * *(float *)(a1 + 192);
  *(float *)(a1 + 136) = v12 + 1.0;
  *(_BYTE *)(a1 + 152) = 1;
  result = v6;
  *(float *)(a1 + 192) = v16 + (float)((float)((float)(1.0 / v12) * v10) * v6);
  *(float *)(a1 + 196) = (float)(v13 * v15) + (float)((float)((float)(1.0 / v12) * v11) * v6);
  *(float *)(a1 + 200) = (float)(v13 * v14) + (float)((float)((float)(1.0 / v12) * v9) * v6);
  return result;
}


// ============================================================

// Address: 0x570854
// Original: _ZN9cBuoyancy19ProcessBuoyancyBoatEP8CVehiclefP7CVectorS3_b
// Demangled: cBuoyancy::ProcessBuoyancyBoat(CVehicle *,float,CVector *,CVector *,bool)
int __fastcall cBuoyancy::ProcessBuoyancyBoat(
        cBuoyancy *this,
        CVehicle *a2,
        float a3,
        CVector *a4,
        CVector *a5,
        int a6)
{
  float32x2_t v6; // d0
  float32x2_t v7; // d12
  int v10; // r0
  float *v13; // r2
  int v14; // r11
  float *v15; // r8
  float v16; // s16
  float v17; // s18
  int v18; // r0
  int v19; // r10
  float v20; // s28
  float v21; // s2
  float v22; // s2
  float v23; // s0
  int v24; // r0
  char *v25; // r2
  float *v26; // r6
  int v27; // r8
  float v28; // s21
  float v29; // s23
  float v30; // s6
  unsigned __int64 v31; // d16
  CVector *v33; // [sp+8h] [bp-D8h]
  CVector *v34; // [sp+8h] [bp-D8h]
  int v35; // [sp+14h] [bp-CCh]
  int v36; // [sp+34h] [bp-ACh]
  CVector *v37; // [sp+38h] [bp-A8h]
  _BYTE v38[8]; // [sp+3Ch] [bp-A4h] BYREF
  CVector *v39; // [sp+44h] [bp-9Ch]
  unsigned __int64 v40; // [sp+48h] [bp-98h] BYREF
  float v41; // [sp+50h] [bp-90h]
  float v42; // [sp+58h] [bp-88h] BYREF
  float v43; // [sp+5Ch] [bp-84h]
  float v44; // [sp+60h] [bp-80h]
  float v45[2]; // [sp+64h] [bp-7Ch] BYREF
  float v46; // [sp+6Ch] [bp-74h] BYREF
  unsigned __int64 v47; // [sp+70h] [bp-70h] BYREF
  float v48; // [sp+78h] [bp-68h]

  v10 = *((_DWORD *)a2 + 5);
  v13 = (float *)(v10 + 48);
  if ( !v10 )
    v13 = (float *)((char *)a2 + 4);
  v14 = 0;
  if ( CWaterLevel::GetWaterLevel(
         *(CWaterLevel **)v13,
         v13[1],
         v13[2],
         COERCE_FLOAT((cBuoyancy *)((char *)this + 100)),
         (float *)((*((_DWORD *)a2 + 17) >> 27) & 1),
         0,
         v33) == 1 )
  {
    v37 = (cBuoyancy *)((char *)this + 12);
    CMatrix::operator=();
    cBuoyancy::PreCalcSetup(this, a2, a3);
    v15 = v45;
    v16 = *((float *)this + 31);
    v7.n64_u32[0] = 0;
    v17 = 1.0 / (float)((float)(*((float *)this + 30) - *((float *)this + 33)) * 9.0);
    v36 = 0;
    v18 = 0;
LABEL_5:
    v35 = v18;
    v19 = 0;
    v20 = *((float *)this + 32);
    while ( 2 )
    {
      v46 = 0.0;
      v45[1] = v20;
      v44 = 1.0;
      v45[0] = v16;
      v42 = 0.0;
      v43 = 0.0;
      Multiply3x3((const CMatrix *)&v47, v37);
      v21 = *((float *)this + 1) + *((float *)&v47 + 1);
      *(float *)&v47 = *(float *)this + *(float *)&v47;
      *((float *)&v47 + 1) = v21;
      CWaterLevel::GetWaterLevel(
        (CWaterLevel *)v47,
        v21,
        *((float *)this + 2),
        COERCE_FLOAT(&v46),
        (float *)((char *)&stderr + 1),
        (CVector *)&v42,
        v34);
      v22 = v46 - (float)(v48 + *((float *)this + 24));
      v46 = v22;
      v23 = *((float *)this + 30);
      if ( v22 <= v23 )
      {
        v23 = *((float *)this + 33);
        if ( v22 >= v23 )
        {
          v24 = 1;
LABEL_12:
          v42 = (float)(v42 + 0.0) * 0.33333;
          v43 = (float)(v43 + 0.0) * 0.33333;
          v44 = (float)(v44 + 2.0) * 0.33333;
          v25 = (char *)&fBoatVolumeDistributionDinghy;
          switch ( *((_WORD *)a2 + 19) )
          {
            case 0x1BE:
            case 0x1C4:
            case 0x1ED:
              goto LABEL_13;
            case 0x1BF:
            case 0x1C0:
            case 0x1C1:
            case 0x1C2:
            case 0x1C3:
            case 0x1C5:
            case 0x1C6:
            case 0x1C7:
            case 0x1C8:
            case 0x1C9:
            case 0x1CA:
            case 0x1CB:
            case 0x1CC:
            case 0x1CD:
            case 0x1CE:
            case 0x1CF:
            case 0x1D0:
            case 0x1D1:
            case 0x1D2:
            case 0x1D3:
            case 0x1D4:
            case 0x1D5:
            case 0x1D6:
            case 0x1D7:
            case 0x1DA:
            case 0x1DB:
            case 0x1DC:
            case 0x1DD:
            case 0x1DE:
            case 0x1DF:
            case 0x1E0:
            case 0x1E1:
            case 0x1E2:
            case 0x1E3:
            case 0x1E5:
            case 0x1E6:
            case 0x1E7:
            case 0x1E8:
            case 0x1E9:
            case 0x1EA:
            case 0x1EB:
            case 0x1EC:
              goto LABEL_15;
            case 0x1D8:
            case 0x1D9:
              goto LABEL_17;
            case 0x1E4:
              v25 = (char *)&fBoatVolumeDistributionSail;
              goto LABEL_17;
            default:
              if ( &fBoatVolumeDistributionDinghy == (_UNKNOWN *)((char *)&elf_hash_bucket[85] + 3) )
LABEL_13:
                v25 = fBoatVolumeDistributionSpeed;
              else
LABEL_15:
                v25 = (char *)&fBoatVolumeDistribution;
LABEL_17:
              fVolMultiplier = *(_DWORD *)&v25[v36 + v19];
              if ( v24 )
              {
                v26 = v15;
                *(float *)&v27 = COERCE_FLOAT(cBuoyancy::SimpleSumBuoyancyData());
                v28 = *((float *)this + 27);
                v47 = __PAIR64__(LODWORD(v20), LODWORD(v16));
                v48 = 0.0;
                v29 = *(float *)&CTimer::ms_fTimeStep;
                Multiply3x3((const CMatrix *)&v40, *((const CVector **)a2 + 5));
                v48 = v41;
                v47 = v40;
                CPhysical::GetSpeed();
                v30 = *(float *)&v27;
                v15 = v26;
                v48 = v41;
                v47 = v40;
                v6.n64_f32[0] = 1.0
                              - (float)(*(float *)(*((_DWORD *)a2 + 226) + 176)
                                      * (float)((float)((float)(*(float *)&v40 * v42)
                                                      + (float)(*((float *)&v40 + 1) * v43))
                                              + (float)(v41 * v44)));
                v6.n64_u64[0] = vmax_f32(v6, v7).n64_u64[0];
                *((float *)a5 + 2) = *((float *)a5 + 2)
                                   + (float)((float)((float)((float)(v17 * v30) * v28) * v29) * v6.n64_f32[0]);
                if ( !a6 )
                {
                  Multiply3x3((const CMatrix *)v38, v37);
                  v34 = v39;
                  CPhysical::ApplyTurnForce();
                }
              }
              v19 += 12;
              v20 = v20 + *((float *)this + 40);
              if ( v19 != 36 )
                continue;
              v16 = v16 + *((float *)this + 39);
              v36 += 4;
              v18 = v35 + 1;
              if ( v35 != 2 )
                goto LABEL_5;
              *((float *)this + 47) = v17 * *((float *)this + 47);
              Multiply3x3((const CMatrix *)&v47, v37);
              v31 = v47;
              *((float *)a4 + 2) = v48;
              *(_QWORD *)a4 = v31;
              if ( *((_BYTE *)this + 186) )
              {
                v14 = 1;
              }
              else
              {
                v14 = *((unsigned __int8 *)this + 152);
                if ( *((_BYTE *)this + 152) )
                  v14 = 1;
              }
              break;
          }
          return v14;
        }
        v24 = 0;
      }
      else
      {
        v24 = 2;
      }
      break;
    }
    v46 = v23;
    goto LABEL_12;
  }
  return v14;
}


// ============================================================

// Address: 0x570be8
// Original: _ZN9cBuoyancyD2Ev
// Demangled: cBuoyancy::~cBuoyancy()
void __fastcall cBuoyancy::~cBuoyancy(cBuoyancy *this)
{
  CMatrix::~CMatrix((cBuoyancy *)((char *)this + 12));
}


// ============================================================
