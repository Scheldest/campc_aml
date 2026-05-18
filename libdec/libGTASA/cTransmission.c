
// Address: 0x19ade8
// Original: j__ZN13cTransmission26CalculateDriveAccelerationERKfRhRfS1_PfS4_hh
// Demangled: cTransmission::CalculateDriveAcceleration(float const&,uchar &,float &,float const&,float *,float *,uchar,uchar)
// attributes: thunk
int __fastcall cTransmission::CalculateDriveAcceleration(
        cTransmission *this,
        const float *a2,
        unsigned __int8 *a3,
        float *a4,
        const float *a5,
        float *a6,
        float *a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  return _ZN13cTransmission26CalculateDriveAccelerationERKfRhRfS1_PfS4_hh(this, a2, a3, a4, a5, a6, a7, a8, a9);
}


// ============================================================

// Address: 0x19c180
// Original: j__ZN13cTransmission25CalculateGearForSimpleCarEfRh
// Demangled: cTransmission::CalculateGearForSimpleCar(float,uchar &)
// attributes: thunk
int __fastcall cTransmission::CalculateGearForSimpleCar(cTransmission *this, float a2, unsigned __int8 *a3)
{
  return _ZN13cTransmission25CalculateGearForSimpleCarEfRh(this, a2, a3);
}


// ============================================================

// Address: 0x19de44
// Original: j__ZN13cTransmissionC2Ev
// Demangled: cTransmission::cTransmission(void)
// attributes: thunk
void __fastcall cTransmission::cTransmission(cTransmission *this)
{
  _ZN13cTransmissionC2Ev(this);
}


// ============================================================

// Address: 0x19f4dc
// Original: j__ZN13cTransmission14InitGearRatiosEv
// Demangled: cTransmission::InitGearRatios(void)
// attributes: thunk
int __fastcall cTransmission::InitGearRatios(cTransmission *this)
{
  return _ZN13cTransmission14InitGearRatiosEv(this);
}


// ============================================================

// Address: 0x5810f4
// Original: _ZN13cTransmissionC2Ev
// Demangled: cTransmission::cTransmission(void)
void __fastcall cTransmission::cTransmission(cTransmission *this)
{
  ;
}


// ============================================================

// Address: 0x5810f8
// Original: _ZN13cTransmission14InitGearRatiosEv
// Demangled: cTransmission::InitGearRatios(void)
int __fastcall cTransmission::InitGearRatios(int this)
{
  unsigned int v1; // r1
  float v2; // s0
  float v3; // s4
  int v4; // r3
  unsigned __int8 v5; // r1
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float *v9; // lr
  float v10; // s12
  float v11; // s10
  float v12; // s12
  float v13; // s14
  float v14; // s10
  int v15; // r1

  v1 = *(unsigned __int8 *)(this + 74);
  v2 = (float)v1;
  v3 = *(float *)(this + 88);
  *(_DWORD *)(this + 64) = 0;
  *(_DWORD *)(this + 68) = 0;
  *(_QWORD *)(this + 48) = 0LL;
  *(_QWORD *)(this + 56) = 0LL;
  *(_QWORD *)(this + 32) = 0LL;
  *(_QWORD *)(this + 40) = 0LL;
  *(_QWORD *)this = 0LL;
  *(_QWORD *)(this + 8) = 0LL;
  *(_QWORD *)(this + 16) = 0LL;
  *(_QWORD *)(this + 24) = 0LL;
  if ( v1 )
  {
    v4 = 1;
    v5 = 1;
    v6 = 1.0 / v2;
    v7 = v3 * (float)(v6 * 0.5);
    v8 = v3 - v7;
    do
    {
      v9 = (float *)(this + 12 * v4);
      v10 = v7 + (float)(v8 * (float)(v6 * (float)v5));
      v11 = *(v9 - 3);
      *v9 = v10;
      if ( v5 >= (unsigned int)*(unsigned __int8 *)(this + 74) )
      {
        v14 = *(float *)(this + 88);
      }
      else
      {
        v12 = v10 - v11;
        v13 = v11 + (float)(v12 * 0.42);
        v14 = (float)(v12 * 0.6667) + v11;
        v9[5] = v13;
      }
      v9[1] = v14;
      v4 = ++v5;
    }
    while ( v5 <= (unsigned int)*(unsigned __int8 *)(this + 74) );
    dword_A12EC0 = (int)(v9 - 3);
    dword_A12EBC = (int)v9;
  }
  v15 = *(_DWORD *)(this + 96);
  *(_DWORD *)(this + 20) = -1138501878;
  *(_DWORD *)this = v15;
  *(_DWORD *)(this + 4) = -1138501878;
  *(_DWORD *)(this + 8) = v15;
  return this;
}


// ============================================================

// Address: 0x5811f0
// Original: _ZN13cTransmission26CalculateDriveAccelerationERKfRhRfS1_PfS4_hh
// Demangled: cTransmission::CalculateDriveAcceleration(float const&,uchar &,float &,float const&,float *,float *,uchar,uchar)
// local variable allocation has failed, the output may be wrong!
int __fastcall cTransmission::CalculateDriveAcceleration(
        cTransmission *this,
        float *a2,
        unsigned __int8 *a3,
        float *a4,
        const float *a5,
        float *a6,
        float *a7,
        int a8,
        unsigned __int8 a9)
{
  float32x2_t v9; // d1
  float32x2_t v10; // d2
  float32x2_t v11; // d4
  float v12; // s0
  float v13; // s2
  float v18; // s4
  float v19; // s6
  unsigned int v20; // r4
  float *v21; // r9
  float v22; // s8
  char v23; // r5
  unsigned int v24; // r8
  float v25; // s0
  int v26; // r5
  float v27; // s4
  float v28; // s10
  float v29; // s10
  float v30; // s4
  bool v31; // zf
  float v32; // s12
  float v33; // s6
  float v34; // s8
  float v35; // s2
  float v36; // s6
  float v37; // s6
  float v38; // s2
  float v39; // s6
  float **v40; // r1
  float v41; // s12
  float v42; // s14
  float v43; // s6
  bool v44; // fnf
  float v45; // s6
  float v46; // s2
  float v47; // s2

  v12 = 0.0;
  flt_A12EC8 = *a5;
  v13 = flt_A12EC8;
  if ( flt_A12EC8 < *((float *)this + 24) )
    return LODWORD(v12);
  v18 = flt_A12EC8;
  while ( 1 )
  {
    v19 = *((float *)this + 22);
    if ( v13 > v19 )
      return LODWORD(v12);
    *((float *)this + 25) = v13;
    v20 = *a3;
    v21 = (float *)((char *)this + 12 * v20);
    v22 = v21[1];
    if ( v13 <= v22 )
      break;
    v23 = 1;
    if ( !*a3 && *a2 <= 0.0 )
      goto LABEL_14;
LABEL_12:
    *a3 = v20 + v23;
    a9 = 0;
    a8 = 0;
    a7 = 0;
    a6 = 0;
    v13 = v18;
    if ( v18 < *((float *)this + 24) )
      return LODWORD(v12);
  }
  if ( *a3 )
  {
    if ( v13 < v21[2] )
    {
      v23 = -1;
      if ( v20 != 1 || *a2 < 0.0 )
        goto LABEL_12;
    }
  }
LABEL_14:
  v24 = *((unsigned __int8 *)this + 74);
  if ( v24 == 1 )
  {
    v25 = 1.0;
  }
  else if ( *a3 )
  {
    v26 = *((_DWORD *)this + 19);
    if ( (v26 & 1) != 0 )
    {
      v28 = 5.0;
    }
    else
    {
      v28 = 4.0;
      if ( (v26 & 2) == 0 )
        v28 = 3.0;
    }
    v27 = 1.0 - (float)((float)((float)v20 + -1.0) / (float)((float)v24 + -1.0));
    v25 = (float)(v27 * (float)(v27 * v28)) + 1.0;
  }
  else
  {
    v25 = 4.5;
  }
  dword_A12ECC = 1065353216;
  if ( a9 == 1 )
  {
    v29 = 1.0;
    dword_A12ECC = TRANSMISSION_AI_CHEAT_MULT;
    v30 = *(float *)&TRANSMISSION_AI_CHEAT_MULT;
  }
  else
  {
    v30 = 1.0;
    v29 = 1.0;
    if ( a9 == 2 )
      v29 = TRANSMISSION_NITROS_MULT;
  }
  v31 = a6 == 0;
  v32 = *a2;
  v12 = *(float *)&CTimer::ms_fTimeStep
      * (float)(*a2 * (float)((float)(v30 * (float)(v25 * (float)(v29 * *((float *)this + 20)))) / 2.5));
  unk_A12EC4 = LODWORD(v12);
  if ( a6 )
    v31 = a7 == 0;
  if ( !v31 )
  {
    if ( a8 << 24 )
    {
      if ( v20 == 1 )
      {
        v36 = (float)(v19 / (float)v24) * 0.3333;
        v34 = v22 + v36;
        v35 = v13 + v36;
      }
      else if ( v20 )
      {
        v37 = v21[2];
        v34 = v22 - v37;
        v35 = v13 - v37;
      }
      else
      {
        v33 = (float)(v19 / (float)v24) * 0.3333;
        v34 = v33 - v21[2];
        v35 = v33 - v13;
      }
      v38 = v35 / v34;
      v39 = v38 - *a6;
      if ( a9 == 1 )
      {
        v40 = (float **)&TRANSMISSION_AI_CHEAT_INERTIA_MULT_ptr;
        goto LABEL_42;
      }
      if ( a9 == 2 )
      {
        v40 = (float **)&TRANSMISSION_NITROS_INERTIA_MULT_ptr;
LABEL_42:
        v39 = v39 * **v40;
      }
      v41 = 0.1;
      v42 = 1.0;
      v43 = 1.0 - (float)(v39 * *((float *)this + 21));
      if ( v43 > 1.0 )
        v41 = 1.0;
      if ( v43 < 0.1 )
        v42 = v41;
      v44 = v43 < 0.1;
      if ( v43 > 1.0 )
        v43 = v42;
      if ( v44 )
        v43 = v42;
      v45 = (float)(TRANSMISSION_SMOOTHER_FRAC * *a7) + (float)((float)(1.0 - TRANSMISSION_SMOOTHER_FRAC) * v43);
      v12 = v12 * v45;
      unk_A12EC4 = LODWORD(v12);
      *a7 = v45;
      *a6 = v38;
    }
    else
    {
      v11.n64_u32[0] = 1.0;
      v9.n64_f32[0] = *a6
                    + (float)((float)(*(float *)&CTimer::ms_fTimeStep
                                    * (float)(TRANSMISSION_FREE_ACCELERATION * fabsf(v32)))
                            / *((float *)this + 21));
      v9.n64_u64[0] = vmin_f32(v9, v11).n64_u64[0];
      *a6 = v9.n64_f32[0];
      *a7 = 0.1;
    }
  }
  v46 = *((float *)this + 3 * *a3);
  if ( v46 < 0.0 && flt_A12EC8 < (float)(v46 * v30) )
  {
    v9.n64_f32[0] = (float)(v46 * v30) - flt_A12EC8;
LABEL_58:
    v9.n64_f32[0] = v9.n64_f32[0] / 0.05;
    v10.n64_u32[0] = 1.0;
    v12 = (float)(1.0 - vmin_f32(v9, v10).n64_f32[0]) * v12;
    unk_A12EC4 = LODWORD(v12);
    return LODWORD(v12);
  }
  if ( v46 > 0.0 )
  {
    v47 = v46 * v30;
    if ( flt_A12EC8 > v47 )
    {
      v9.n64_f32[0] = flt_A12EC8 - v47;
      goto LABEL_58;
    }
  }
  return LODWORD(v12);
}


// ============================================================

// Address: 0x5815d0
// Original: _ZN13cTransmission25CalculateGearForSimpleCarEfRh
// Demangled: cTransmission::CalculateGearForSimpleCar(float,uchar &)
unsigned int __fastcall cTransmission::CalculateGearForSimpleCar(unsigned int this, float a2, unsigned __int8 *a3)
{
  unsigned int v4; // r3
  unsigned int v5; // r1

  *(float *)(this + 100) = a2;
  v4 = *a3;
  v5 = this + 12 * v4;
  if ( *(float *)(v5 + 4) >= a2 )
  {
    if ( *(float *)(v5 + 8) > a2 )
    {
      if ( *a3 )
        v4 += 255;
      this = v4;
      *a3 = v4;
    }
  }
  else
  {
    this = *(unsigned __int8 *)(this + 74);
    if ( v4 < this )
      this = v4 + 1;
    *a3 = this;
  }
  return this;
}


// ============================================================

// Address: 0x581618
// Original: _ZN13cTransmission17DisplayGearRatiosEv
// Demangled: cTransmission::DisplayGearRatios(void)
void __fastcall cTransmission::DisplayGearRatios(cTransmission *this)
{
  ;
}


// ============================================================
