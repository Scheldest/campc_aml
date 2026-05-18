
// Address: 0x198f1c
// Original: j__ZN10CColourSet11InterpolateEPS_S0_ffb
// Demangled: CColourSet::Interpolate(CColourSet*,CColourSet*,float,float,bool)
// attributes: thunk
int __fastcall CColourSet::Interpolate(CColourSet *this, CColourSet *a2, CColourSet *a3, float a4, float a5, bool a6)
{
  return _ZN10CColourSet11InterpolateEPS_S0_ffb(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1a0fa0
// Original: j__ZN10CColourSetC2Eii
// Demangled: CColourSet::CColourSet(int,int)
// attributes: thunk
void __fastcall CColourSet::CColourSet(CColourSet *this, int a2, int a3)
{
  _ZN10CColourSetC2Eii(this, a2, a3);
}


// ============================================================

// Address: 0x41e190
// Original: _ZN10CColourSetC2Eii
// Demangled: CColourSet::CColourSet(int,int)
void __fastcall CColourSet::CColourSet(CColourSet *this, int a2, int a3)
{
  unsigned int v3; // r3
  _QWORD *v4; // r4
  char *v5; // r6
  _QWORD *v6; // r1
  __int64 v7; // d17
  char *v8; // r3
  __int64 v9; // d17
  __int64 v10; // d17

  *(_QWORD *)((char *)this + 188) = 0LL;
  *(_QWORD *)((char *)this + 196) = 0x3F80000000000000LL;
  *(_QWORD *)((char *)this + 172) = 0LL;
  *(_QWORD *)((char *)this + 180) = 0x3F80000000000000LL;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *(_QWORD *)((char *)this + 212) = 0x3F80000000000000LL;
  *(float *)this = (float)CTimeCycle::m_nAmbientRed[23 * a2 + a3];
  *((float *)this + 1) = (float)CTimeCycle::m_nAmbientGreen[23 * a2 + a3];
  *((float *)this + 2) = (float)CTimeCycle::m_nAmbientBlue[23 * a2 + a3];
  *((float *)this + 3) = (float)CTimeCycle::m_nAmbientRed_Obj[23 * a2 + a3];
  *((float *)this + 4) = (float)CTimeCycle::m_nAmbientGreen_Obj[23 * a2 + a3];
  *((float *)this + 5) = (float)CTimeCycle::m_nAmbientBlue_Obj[23 * a2 + a3];
  *((_WORD *)this + 18) = CTimeCycle::m_nSkyTopRed[23 * a2 + a3];
  *((_WORD *)this + 19) = CTimeCycle::m_nSkyTopGreen[23 * a2 + a3];
  *((_WORD *)this + 20) = CTimeCycle::m_nSkyTopBlue[23 * a2 + a3];
  *((_WORD *)this + 21) = CTimeCycle::m_nSkyBottomRed[23 * a2 + a3];
  *((_WORD *)this + 22) = CTimeCycle::m_nSkyBottomGreen[23 * a2 + a3];
  *((_WORD *)this + 23) = CTimeCycle::m_nSkyBottomBlue[23 * a2 + a3];
  *((_WORD *)this + 24) = CTimeCycle::m_nSunCoreRed[23 * a2 + a3];
  *((_WORD *)this + 25) = CTimeCycle::m_nSunCoreGreen[23 * a2 + a3];
  *((_WORD *)this + 26) = CTimeCycle::m_nSunCoreBlue[23 * a2 + a3];
  *((_WORD *)this + 27) = CTimeCycle::m_nSunCoronaRed[23 * a2 + a3];
  *((_WORD *)this + 28) = CTimeCycle::m_nSunCoronaGreen[23 * a2 + a3];
  *((_WORD *)this + 29) = CTimeCycle::m_nSunCoronaBlue[23 * a2 + a3];
  *((float *)this + 15) = (float)CTimeCycle::m_fSunSize[23 * a2 + a3];
  *((float *)this + 16) = (float)CTimeCycle::m_fSpriteSize[23 * a2 + a3];
  *((float *)this + 17) = (float)CTimeCycle::m_fSpriteBrightness[23 * a2 + a3];
  *((_WORD *)this + 36) = CTimeCycle::m_nShadowStrength[23 * a2 + a3];
  *((_WORD *)this + 37) = CTimeCycle::m_nLightShadowStrength[23 * a2 + a3];
  *((_WORD *)this + 38) = CTimeCycle::m_nPoleShadowStrength[23 * a2 + a3];
  *((float *)this + 20) = (float)CTimeCycle::m_fFarClip[23 * a2 + a3];
  *((float *)this + 21) = (float)CTimeCycle::m_fFogStart[23 * a2 + a3];
  *((float *)this + 22) = (float)CTimeCycle::m_fLightsOnGroundBrightness[23 * a2 + a3];
  *((_WORD *)this + 46) = CTimeCycle::m_nLowCloudsRed[23 * a2 + a3];
  *((_WORD *)this + 47) = CTimeCycle::m_nLowCloudsGreen[23 * a2 + a3];
  *((_WORD *)this + 48) = CTimeCycle::m_nLowCloudsBlue[23 * a2 + a3];
  *((_WORD *)this + 49) = CTimeCycle::m_nFluffyCloudsBottomRed[23 * a2 + a3];
  *((_WORD *)this + 50) = CTimeCycle::m_nFluffyCloudsBottomGreen[23 * a2 + a3];
  *((_WORD *)this + 51) = CTimeCycle::m_nFluffyCloudsBottomBlue[23 * a2 + a3];
  *((float *)this + 26) = (float)CTimeCycle::m_fWaterRed[23 * a2 + a3];
  *((float *)this + 27) = (float)CTimeCycle::m_fWaterGreen[23 * a2 + a3];
  *((float *)this + 28) = (float)CTimeCycle::m_fWaterBlue[23 * a2 + a3];
  *((float *)this + 29) = (float)CTimeCycle::m_fWaterAlpha[23 * a2 + a3];
  *((float *)this + 30) = (float)CTimeCycle::m_fPostFx1Red[23 * a2 + a3];
  *((float *)this + 31) = (float)CTimeCycle::m_fPostFx1Green[23 * a2 + a3];
  *((float *)this + 32) = (float)CTimeCycle::m_fPostFx1Blue[23 * a2 + a3];
  *((float *)this + 33) = (float)CTimeCycle::m_fPostFx1Alpha[23 * a2 + a3];
  *((float *)this + 34) = (float)CTimeCycle::m_fPostFx2Red[23 * a2 + a3];
  *((float *)this + 35) = (float)CTimeCycle::m_fPostFx2Green[23 * a2 + a3];
  *((float *)this + 36) = (float)CTimeCycle::m_fPostFx2Blue[23 * a2 + a3];
  *((float *)this + 37) = (float)CTimeCycle::m_fPostFx2Alpha[23 * a2 + a3];
  *((float *)this + 38) = (float)CTimeCycle::m_fCloudAlpha[23 * a2 + a3];
  *((_DWORD *)this + 39) = CTimeCycle::m_nHighLightMinIntensity[23 * a2 + a3];
  *((_WORD *)this + 80) = CTimeCycle::m_nWaterFogAlpha[23 * a2 + a3];
  v3 = CTimeCycle::m_nDirectionalMult[23 * a2 + a3];
  *((_DWORD *)this + 42) = 1065353216;
  v4 = (_QWORD *)((char *)&CTimeCycle::m_vRedGrade + 368 * a2 + 16 * a3);
  v5 = (char *)&CTimeCycle::m_vBlueGrade + 368 * a2;
  v6 = (_QWORD *)((char *)&CTimeCycle::m_vGreenGrade + 368 * a2 + 16 * a3);
  *((float *)this + 41) = (float)v3 / 100.0;
  v7 = v4[1];
  *(_QWORD *)((char *)this + 172) = *v4;
  *(_QWORD *)((char *)this + 180) = v7;
  v8 = &v5[16 * a3];
  v9 = *((_QWORD *)v8 + 1);
  *(_QWORD *)((char *)this + 204) = *(_QWORD *)v8;
  *(_QWORD *)((char *)this + 212) = v9;
  v10 = v6[1];
  *(_QWORD *)((char *)this + 188) = *v6;
  *(_QWORD *)((char *)this + 196) = v10;
}


// ============================================================

// Address: 0x41e740
// Original: _ZN10CColourSet11InterpolateEPS_S0_ffb
// Demangled: CColourSet::Interpolate(CColourSet*,CColourSet*,float,float,bool)
char *__fastcall CColourSet::Interpolate(CColourSet *this, CColourSet *a2, CColourSet *a3, float a4, float a5, int a6)
{
  float32x2_t v6; // d0
  float32x2_t v7; // d1
  _BOOL4 v12; // r8
  int *v13; // r0
  char *result; // r0

  if ( !a6 )
  {
    *((_WORD *)this + 18) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 18) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 18) * a5));
    *((_WORD *)this + 19) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 19) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 19) * a5));
    *((_WORD *)this + 20) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 20) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 20) * a5));
    *((_WORD *)this + 21) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 21) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 21) * a5));
    *((_WORD *)this + 22) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 22) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 22) * a5));
    *((_WORD *)this + 23) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 23) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 23) * a5));
    *((_WORD *)this + 24) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 24) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 24) * a5));
    *((_WORD *)this + 25) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 25) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 25) * a5));
    *((_WORD *)this + 26) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 26) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 26) * a5));
    *((_WORD *)this + 27) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 27) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 27) * a5));
    *((_WORD *)this + 28) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 28) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 28) * a5));
    *((_WORD *)this + 29) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 29) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 29) * a5));
    *((float *)this + 15) = (float)(*((float *)a2 + 15) * a4) + (float)(*((float *)a3 + 15) * a5);
    *((_WORD *)this + 46) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 46) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 46) * a5));
    *((_WORD *)this + 47) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 47) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 47) * a5));
    *((_WORD *)this + 48) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 48) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 48) * a5));
    *((_WORD *)this + 49) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 49) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 49) * a5));
    *((_WORD *)this + 50) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 50) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 50) * a5));
    *((_WORD *)this + 51) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 51) * a4)
                                       + (float)((float)*((unsigned __int16 *)a3 + 51) * a5));
  }
  v12 = 0;
  *(float *)this = (float)(*(float *)a2 * a4) + (float)(*(float *)a3 * a5);
  *((float *)this + 1) = (float)(*((float *)a2 + 1) * a4) + (float)(*((float *)a3 + 1) * a5);
  *((float *)this + 2) = (float)(*((float *)a2 + 2) * a4) + (float)(*((float *)a3 + 2) * a5);
  *((float *)this + 3) = (float)(*((float *)a2 + 3) * a4) + (float)(*((float *)a3 + 3) * a5);
  *((float *)this + 4) = (float)(*((float *)a2 + 4) * a4) + (float)(*((float *)a3 + 4) * a5);
  *((float *)this + 5) = (float)(*((float *)a2 + 5) * a4) + (float)(*((float *)a3 + 5) * a5);
  *((float *)this + 16) = (float)(*((float *)a2 + 16) * a4) + (float)(*((float *)a3 + 16) * a5);
  *((float *)this + 17) = (float)(*((float *)a2 + 17) * a4) + (float)(*((float *)a3 + 17) * a5);
  *((_WORD *)this + 36) = (int)(float)((float)((float)*((__int16 *)a2 + 36) * a4)
                                     + (float)((float)*((__int16 *)a3 + 36) * a5));
  *((_WORD *)this + 37) = (int)(float)((float)((float)*((__int16 *)a2 + 37) * a4)
                                     + (float)((float)*((__int16 *)a3 + 37) * a5));
  *((_WORD *)this + 38) = (int)(float)((float)((float)*((__int16 *)a2 + 38) * a4)
                                     + (float)((float)*((__int16 *)a3 + 38) * a5));
  *((float *)this + 20) = (float)(*((float *)a2 + 20) * a4) + (float)(*((float *)a3 + 20) * a5);
  if ( FindPlayerVehicle(-1, 0) )
    v12 = *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 4 || *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) == 3;
  if ( ((unsigned __int8)byte_6B8BAA | (unsigned __int8)byte_6B8BA0 | (unsigned __int8)byte_6B8BA1) << 24 )
  {
    if ( dword_6E03FC > 1 || v12 )
    {
      v13 = dword_41EF14;
      if ( dword_6E03FC < 3 )
        v13 = &dword_41EF14[1];
LABEL_18:
      v6.n64_u32[0] = *v13;
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  if ( dword_6E03FC <= 0 && !v12 )
  {
LABEL_15:
    v6.n64_u32[0] = 1138819072;
    goto LABEL_19;
  }
  if ( dword_6E03FC >= 2 )
  {
    v13 = dword_41EF20;
    if ( dword_6E03FC == 2 )
      v13 = &dword_41EF20[1];
    goto LABEL_18;
  }
  v6.n64_u32[0] = 1142702080;
LABEL_19:
  v7.n64_u32[0] = *((_DWORD *)this + 20);
  *((_DWORD *)this + 20) = vmin_f32(v7, v6).n64_u32[0];
  *((float *)this + 21) = (float)(*((float *)a2 + 21) * a4) + (float)(*((float *)a3 + 21) * a5);
  *((float *)this + 30) = (float)(*((float *)a2 + 30) * a4) + (float)(*((float *)a3 + 30) * a5);
  *((float *)this + 31) = (float)(*((float *)a2 + 31) * a4) + (float)(*((float *)a3 + 31) * a5);
  *((float *)this + 32) = (float)(*((float *)a2 + 32) * a4) + (float)(*((float *)a3 + 32) * a5);
  *((float *)this + 33) = (float)(*((float *)a2 + 33) * a4) + (float)(*((float *)a3 + 33) * a5);
  *((float *)this + 34) = (float)(*((float *)a2 + 34) * a4) + (float)(*((float *)a3 + 34) * a5);
  *((float *)this + 35) = (float)(*((float *)a2 + 35) * a4) + (float)(*((float *)a3 + 35) * a5);
  *((float *)this + 36) = (float)(*((float *)a2 + 36) * a4) + (float)(*((float *)a3 + 36) * a5);
  *((float *)this + 37) = (float)(*((float *)a2 + 37) * a4) + (float)(*((float *)a3 + 37) * a5);
  *((float *)this + 22) = (float)(*((float *)a2 + 22) * a4) + (float)(*((float *)a3 + 22) * a5);
  *((float *)this + 38) = (float)(*((float *)a2 + 38) * a4) + (float)(*((float *)a3 + 38) * a5);
  *((_DWORD *)this + 39) = (int)(float)((float)((float)*((int *)a2 + 39) * a4) + (float)((float)*((int *)a3 + 39) * a5));
  *((_WORD *)this + 80) = (int)(float)((float)((float)*((unsigned __int16 *)a2 + 80) * a4)
                                     + (float)((float)*((unsigned __int16 *)a3 + 80) * a5));
  *((float *)this + 41) = (float)(*((float *)a2 + 41) * a4) + (float)(*((float *)a3 + 41) * a5);
  *((float *)this + 42) = (float)(*((float *)a2 + 42) * a4) + (float)(*((float *)a3 + 42) * a5);
  *((float *)this + 26) = (float)(*((float *)a2 + 26) * a4) + (float)(*((float *)a3 + 26) * a5);
  *((float *)this + 27) = (float)(*((float *)a2 + 27) * a4) + (float)(*((float *)a3 + 27) * a5);
  *((float *)this + 28) = (float)(*((float *)a2 + 28) * a4) + (float)(*((float *)a3 + 28) * a5);
  *((float *)this + 29) = (float)(*((float *)a2 + 29) * a4) + (float)(*((float *)a3 + 29) * a5);
  *(float32x4_t *)((char *)this + 172) = vaddq_f32(
                                           vmulq_n_f32(*(float32x4_t *)((char *)a2 + 172), a4),
                                           vmulq_n_f32(*(float32x4_t *)((char *)a3 + 172), a5));
  *(float32x4_t *)((char *)this + 188) = vaddq_f32(
                                           vmulq_n_f32(*(float32x4_t *)((char *)a2 + 188), a4),
                                           vmulq_n_f32(*(float32x4_t *)((char *)a3 + 188), a5));
  result = (char *)this + 204;
  *(float32x4_t *)((char *)this + 204) = vaddq_f32(
                                           vmulq_n_f32(*(float32x4_t *)((char *)a2 + 204), a4),
                                           vmulq_n_f32(*(float32x4_t *)((char *)a3 + 204), a5));
  return result;
}


// ============================================================
