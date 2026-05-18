
// Address: 0x18b8f0
// Original: j__ZN19CAEAudioEnvironment27GetPositionRelativeToCameraEP7CVectorS1_
// Demangled: CAEAudioEnvironment::GetPositionRelativeToCamera(CVector *,CVector *)
// attributes: thunk
int __fastcall CAEAudioEnvironment::GetPositionRelativeToCamera(CAEAudioEnvironment *this, CVector *a2, CVector *a3)
{
  return _ZN19CAEAudioEnvironment27GetPositionRelativeToCameraEP7CVectorS1_(this, a2, a3);
}


// ============================================================

// Address: 0x18fac0
// Original: j__ZN19CAEAudioEnvironment27GetPositionRelativeToCameraEP7CVectorP10CPlaceable
// Demangled: CAEAudioEnvironment::GetPositionRelativeToCamera(CVector *,CPlaceable *)
// attributes: thunk
int __fastcall CAEAudioEnvironment::GetPositionRelativeToCamera(CAEAudioEnvironment *this, CVector *a2, CPlaceable *a3)
{
  return _ZN19CAEAudioEnvironment27GetPositionRelativeToCameraEP7CVectorP10CPlaceable(this, a2, a3);
}


// ============================================================

// Address: 0x192a5c
// Original: j__ZN19CAEAudioEnvironment22GetDistanceAttenuationEf
// Demangled: CAEAudioEnvironment::GetDistanceAttenuation(float)
// attributes: thunk
int __fastcall CAEAudioEnvironment::GetDistanceAttenuation(CAEAudioEnvironment *this, float a2)
{
  return _ZN19CAEAudioEnvironment22GetDistanceAttenuationEf(this, a2);
}


// ============================================================

// Address: 0x196ff8
// Original: j__ZN19CAEAudioEnvironment27GetDopplerRelativeFrequencyEffjjf
// Demangled: CAEAudioEnvironment::GetDopplerRelativeFrequency(float,float,uint,uint,float)
// attributes: thunk
int __fastcall CAEAudioEnvironment::GetDopplerRelativeFrequency(
        CAEAudioEnvironment *this,
        float a2,
        float a3,
        unsigned int a4,
        float a5,
        float a6)
{
  return _ZN19CAEAudioEnvironment27GetDopplerRelativeFrequencyEffjjf(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x19b768
// Original: j__ZN19CAEAudioEnvironment29GetDirectionalMikeAttenuationERK7CVector
// Demangled: CAEAudioEnvironment::GetDirectionalMikeAttenuation(CVector const&)
// attributes: thunk
int __fastcall CAEAudioEnvironment::GetDirectionalMikeAttenuation(CAEAudioEnvironment *this, const CVector *a2)
{
  return _ZN19CAEAudioEnvironment29GetDirectionalMikeAttenuationERK7CVector(this, a2);
}


// ============================================================

// Address: 0x391ce0
// Original: _ZN19CAEAudioEnvironment27GetDopplerRelativeFrequencyEffjjf
// Demangled: CAEAudioEnvironment::GetDopplerRelativeFrequency(float,float,uint,uint,float)
int __fastcall CAEAudioEnvironment::GetDopplerRelativeFrequency(
        CAEAudioEnvironment *this,
        float a2,
        float a3,
        unsigned int a4,
        float a5,
        float a6)
{
  float32x2_t v6; // d0
  float32x2_t v7; // d2
  int Just_Switched_Status; // r0
  float v13; // s0

  Just_Switched_Status = CCamera::Get_Just_Switched_Status((CCamera *)&TheCamera);
  v13 = 1.0;
  if ( a4 > LODWORD(a3) && (float)(a2 - *(float *)&this) != 0.0 && !Just_Switched_Status )
  {
    v7.n64_f32[0] = (float)(a2 - *(float *)&this) * 1000.0 / (float)(a4 - LODWORD(a3)) * a5;
    if ( fabsf(v7.n64_f32[0]) < 340.0 )
    {
      if ( v7.n64_f32[0] >= 0.0 )
      {
        v6.n64_u32[0] = 1108082688;
        v6.n64_u32[0] = vmin_f32(v7, v6).n64_u32[0];
      }
      else
      {
        v6.n64_u32[0] = -1039400960;
        v6.n64_u32[0] = vmax_f32(v7, v6).n64_u32[0];
      }
      v13 = 340.0 / (float)(v6.n64_f32[0] + 340.0);
    }
  }
  return LODWORD(v13);
}


// ============================================================

// Address: 0x391db0
// Original: _ZN19CAEAudioEnvironment27GetPositionRelativeToCameraEP7CVectorS1_
// Demangled: CAEAudioEnvironment::GetPositionRelativeToCamera(CVector *,CVector *)
void __fastcall CAEAudioEnvironment::GetPositionRelativeToCamera(CAEAudioEnvironment *this, CVector *a2, CVector *a3)
{
  unsigned int v5; // r0
  float v6; // s0
  float v7; // s4
  float v8; // s2
  float *v9; // r1
  float v10; // s10
  float v11; // s8
  float v12; // s6
  int PlayerPed; // r0
  float v14; // s18
  int v15; // r2
  float *v16; // r3
  float *v17; // r0
  float v18; // s6
  float v19; // s2
  float v20; // s12
  float v21; // s10
  float *v22; // r1
  float v23; // s10
  float v24; // s8
  float v25; // s6
  float v26; // s1
  float v27; // s2
  float v28; // s0
  float v29; // s6
  float v30; // s4
  float v31; // s0
  float v32; // s8
  float v33; // s2
  float v34; // s4
  float v35[4]; // [sp+0h] [bp-68h] BYREF
  float v36; // [sp+10h] [bp-58h]
  float v37; // [sp+14h] [bp-54h]
  float v38; // [sp+18h] [bp-50h]
  float v39; // [sp+20h] [bp-48h]
  float v40; // [sp+24h] [bp-44h]
  float v41; // [sp+28h] [bp-40h]
  int v42; // [sp+40h] [bp-28h]
  int v43; // [sp+44h] [bp-24h]

  v42 = 0;
  v43 = 0;
  if ( a2 )
  {
    v5 = *((__int16 *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191);
    if ( v5 <= 0x10 && ((1 << v5) & 0x10180) != 0 )
    {
      CMatrix::operator=();
      v6 = v36;
      v7 = v37;
      v8 = v38;
      v9 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v9 = (float *)&qword_951FAC;
      v10 = *v9 - (float)(v36 + v36);
      v11 = v9[1] - (float)(v37 + v37);
      v12 = v9[2] - (float)(v38 + v38);
    }
    else
    {
      PlayerPed = FindPlayerPed(-1);
      v14 = 0.0;
      if ( PlayerPed )
      {
        v15 = *(_DWORD *)(PlayerPed + 20);
        v16 = (float *)(v15 + 48);
        if ( !v15 )
          v16 = (float *)(PlayerPed + 4);
        v17 = (float *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v17 = (float *)&qword_951FAC;
        v14 = sqrtf(
                (float)((float)((float)(*v16 - *v17) * (float)(*v16 - *v17))
                      + (float)((float)(v16[1] - v17[1]) * (float)(v16[1] - v17[1])))
              + (float)((float)(v16[2] - v17[2]) * (float)(v16[2] - v17[2])))
            + -0.5;
      }
      CMatrix::operator=();
      v18 = 0.5;
      if ( v14 < 0.5 )
        v18 = v14;
      v19 = v18;
      if ( v14 < 0.0 )
        v19 = 0.0;
      if ( v14 < 0.5 )
        v18 = v19;
      v6 = v36;
      v7 = v37;
      v8 = v38;
      v20 = v36 * v18;
      v21 = v18 * v37;
      v22 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v22 = (float *)&qword_951FAC;
      v12 = (float)(v18 * v38) + v22[2];
      v11 = v21 + v22[1];
      v10 = v20 + *v22;
    }
    v23 = *(float *)a2 - v10;
    v24 = *((float *)a2 + 1) - v11;
    v25 = *((float *)a2 + 2) - v12;
    v26 = v25 * v35[2];
    v27 = v25 * v8;
    v28 = (float)(v23 * v6) + (float)(v24 * v7);
    v29 = v25 * v41;
    v30 = (float)((float)(v23 * v35[0]) + (float)(v24 * v35[1])) + v26;
    v31 = v28 + v27;
    v32 = v24 * v40;
    v33 = -v30;
    v34 = v23 * v39;
    *(float *)this = v33;
    *((float *)this + 1) = v31;
    *((float *)this + 2) = (float)(v34 + v32) + v29;
  }
  CMatrix::~CMatrix((CMatrix *)v35);
}


// ============================================================

// Address: 0x391fe4
// Original: _ZN19CAEAudioEnvironment27GetPositionRelativeToCameraEP7CVectorP10CPlaceable
// Demangled: CAEAudioEnvironment::GetPositionRelativeToCamera(CVector *,CPlaceable *)
void __fastcall CAEAudioEnvironment::GetPositionRelativeToCamera(
        CAEAudioEnvironment *this,
        CVector *a2,
        CPlaceable *a3)
{
  int v3; // r3
  CVector *v4; // r2

  v3 = *((_DWORD *)a2 + 5);
  v4 = (CVector *)(v3 + 48);
  if ( !v3 )
    v4 = (CVector *)((char *)a2 + 4);
  CAEAudioEnvironment::GetPositionRelativeToCamera(this, v4, v4);
}


// ============================================================

// Address: 0x391ff4
// Original: _ZN19CAEAudioEnvironment22GetDistanceAttenuationEf
// Demangled: CAEAudioEnvironment::GetDistanceAttenuation(float)
int __fastcall CAEAudioEnvironment::GetDistanceAttenuation(CAEAudioEnvironment *this, float a2)
{
  if ( *(float *)&this < 128.0 )
    return dword_612A08[floorf(*(float *)&this * 10.0)];
  else
    return -1027080192;
}


// ============================================================

// Address: 0x392054
// Original: _ZN19CAEAudioEnvironment29GetDirectionalMikeAttenuationERK7CVector
// Demangled: CAEAudioEnvironment::GetDirectionalMikeAttenuation(CVector const&)
int __fastcall CAEAudioEnvironment::GetDirectionalMikeAttenuation(CAEAudioEnvironment *this, const CVector *a2)
{
  double v2; // d16
  float v3; // s0
  float v4; // s2
  double v6; // [sp+0h] [bp-18h] BYREF
  float v7; // [sp+8h] [bp-10h]

  v2 = *(double *)this;
  v7 = *((float *)this + 2);
  v6 = v2;
  CVector::Normalise((CVector *)&v6);
  v3 = 0.0;
  v4 = (float)((float)(*(float *)&v6 * 0.0) + *((float *)&v6 + 1)) + (float)(v7 * 0.0);
  if ( v4 < 0.707 )
  {
    if ( v4 <= -0.707 )
      v3 = -6.0;
    else
      v3 = (float)((float)(0.707 - v4) / 1.414) * -6.0;
  }
  return LODWORD(v3);
}


// ============================================================

// Address: 0x3920dc
// Original: _ZN19CAEAudioEnvironment28GetReverbEnvironmentAndDepthEPaPi
// Demangled: CAEAudioEnvironment::GetReverbEnvironmentAndDepth(signed char *,int *)
int __fastcall CAEAudioEnvironment::GetReverbEnvironmentAndDepth(CAEAudioEnvironment *this, signed __int8 *a2, int *a3)
{
  char *v3; // r2
  int result; // r0
  int v5; // r2

  if ( CWeather::UnderWaterness >= 0.5 )
  {
    *(_BYTE *)this = 22;
    result = -12;
    *(_DWORD *)a2 = -12;
    return result;
  }
  if ( CAudioZones::m_NumActiveSpheres < 1 )
  {
    if ( CAudioZones::m_NumActiveBoxes < 1 )
      goto LABEL_8;
    v3 = (char *)&CAudioZones::m_aBoxes + 24 * CAudioZones::m_aActiveBoxes;
  }
  else
  {
    v3 = (char *)&CAudioZones::m_aSpheres + 28 * CAudioZones::m_aActiveSpheres;
  }
  v5 = *((unsigned __int16 *)v3 + 4);
  if ( v5 != 0xFFFF )
  {
LABEL_10:
    *(_BYTE *)this = *((_BYTE *)&gAudioZoneToReverbEnvironmentMap + 8 * (__int16)v5);
    result = *((_DWORD *)&gAudioZoneToReverbEnvironmentMap + 2 * (__int16)v5 + 1);
    *(_DWORD *)a2 = result;
    return result;
  }
LABEL_8:
  if ( CGame::currArea )
  {
    LOWORD(v5) = 14;
    goto LABEL_10;
  }
  *(_BYTE *)this = 23;
  result = -100;
  *(_DWORD *)a2 = -100;
  return result;
}


// ============================================================
