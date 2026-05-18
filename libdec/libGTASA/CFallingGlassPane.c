
// Address: 0x18c678
// Original: j__ZN17CFallingGlassPane6UpdateEv
// Demangled: CFallingGlassPane::Update(void)
// attributes: thunk
int __fastcall CFallingGlassPane::Update(CFallingGlassPane *this)
{
  return _ZN17CFallingGlassPane6UpdateEv(this);
}


// ============================================================

// Address: 0x19977c
// Original: j__ZN17CFallingGlassPane6RenderEv
// Demangled: CFallingGlassPane::Render(void)
// attributes: thunk
int __fastcall CFallingGlassPane::Render(CFallingGlassPane *this)
{
  return _ZN17CFallingGlassPane6RenderEv(this);
}


// ============================================================

// Address: 0x5ab484
// Original: _ZN17CFallingGlassPane6UpdateEv
// Demangled: CFallingGlassPane::Update(void)
int __fastcall CFallingGlassPane::Update(CFallingGlassPane *this)
{
  unsigned int v2; // r1
  int result; // r0
  float v4; // s0
  int *v5; // r2
  float v6; // s14
  float v7; // s2
  float v8; // s4
  float v9; // s0
  float v10; // s2
  float v11; // s4
  float v12; // s2
  float v13; // s4
  float v14; // s2
  float v15; // s6
  float v16; // s4
  float v17; // s0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r0
  _BYTE v22[4]; // [sp+4h] [bp-4Ch] BYREF
  double v23; // [sp+8h] [bp-48h] BYREF
  float v24; // [sp+10h] [bp-40h]
  double v25; // [sp+18h] [bp-38h] BYREF
  float v26; // [sp+20h] [bp-30h]

  v2 = *((_DWORD *)this + 24);
  result = CTimer::m_snTimeInMilliseconds;
  if ( CTimer::m_snTimeInMilliseconds >= v2 )
  {
    v4 = 1.0;
    v5 = dword_5AB70C;
    v6 = *((float *)this + 20);
    if ( *((_BYTE *)this + 111) )
    {
      v4 = 0.35;
      v5 = &dword_5AB70C[1];
    }
    v7 = *((float *)this + 12) + (float)(v4 * (float)(*((float *)this + 18) * *(float *)&CTimer::ms_fTimeStep));
    v8 = *((float *)this + 13) + (float)(v4 * (float)(*((float *)this + 19) * *(float *)&CTimer::ms_fTimeStep));
    v9 = *((float *)this + 14) + (float)(v4 * (float)(v6 * *(float *)&CTimer::ms_fTimeStep));
    *((float *)this + 20) = v6 - (float)(*(float *)v5 * *(float *)&CTimer::ms_fTimeStep);
    *((float *)this + 12) = v7;
    *((float *)this + 13) = v8;
    *((float *)this + 14) = v9;
    CrossProduct((const CVector *)&v25, (CFallingGlassPane *)((char *)this + 84));
    v10 = *((float *)&v25 + 1) + *((float *)this + 1);
    v11 = v26 + *((float *)this + 2);
    *(float *)this = *(float *)&v25 + *(float *)this;
    *((float *)this + 1) = v10;
    *((float *)this + 2) = v11;
    CrossProduct((const CVector *)&v23, (CFallingGlassPane *)((char *)this + 84));
    v26 = v24;
    v25 = v23;
    v12 = *((float *)&v23 + 1) + *((float *)this + 5);
    v13 = v24 + *((float *)this + 6);
    *((float *)this + 4) = *(float *)&v23 + *((float *)this + 4);
    *((float *)this + 5) = v12;
    *((float *)this + 6) = v13;
    CrossProduct((const CVector *)&v23, (CFallingGlassPane *)((char *)this + 84));
    result = LODWORD(v24);
    v26 = v24;
    v25 = v23;
    v14 = *((float *)&v23 + 1) + *((float *)this + 9);
    v15 = *((float *)this + 14);
    v16 = v24 + *((float *)this + 10);
    v17 = *((float *)this + 25);
    *((float *)this + 8) = *(float *)&v23 + *((float *)this + 8);
    *((float *)this + 9) = v14;
    *((float *)this + 10) = v16;
    if ( v15 < v17 )
    {
      *((_BYTE *)this + 109) = 0;
      v23 = *((double *)this + 6);
      v24 = v17;
      CAudioEngine::ReportGlassCollisionEvent((CAudioEngine *)&AudioEngine, 127, (CVector *)&v23);
      result = *((unsigned __int8 *)this + 111);
      if ( !*((_BYTE *)this + 111) )
      {
        CRGBA::CRGBA((CRGBA *)v22, 0xFFu, 0xFFu, 0xFFu, 0x20u);
        v18 = rand();
        Fx_c::AddGlass(
          (int)&g_fx,
          (int)&v23,
          (int)v22,
          COERCE_INT((float)((float)((float)v18 * 4.6566e-10) * 0.04) + 0.02),
          1);
        v19 = rand();
        Fx_c::AddGlass(
          (int)&g_fx,
          (int)&v23,
          (int)v22,
          COERCE_INT((float)((float)((float)v19 * 4.6566e-10) * 0.04) + 0.02),
          1);
        v20 = rand();
        Fx_c::AddGlass(
          (int)&g_fx,
          (int)&v23,
          (int)v22,
          COERCE_INT((float)((float)((float)v20 * 4.6566e-10) * 0.04) + 0.02),
          1);
        v21 = rand();
        return Fx_c::AddGlass(
                 (int)&g_fx,
                 (int)&v23,
                 (int)v22,
                 COERCE_INT((float)((float)((float)v21 * 4.6566e-10) * 0.04) + 0.02),
                 1);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5ab838
// Original: _ZN17CFallingGlassPane6RenderEv
// Demangled: CFallingGlassPane::Render(void)
int __fastcall CFallingGlassPane::Render(CFallingGlassPane *this)
{
  double v2; // d16
  float v3; // s16
  float v4; // s20
  float v5; // s18
  float *v6; // r2
  float v7; // s22
  float v8; // s26
  float v9; // s24
  int v10; // r0
  int v11; // r2
  float v12; // s10
  float v13; // s0
  unsigned int v14; // s0
  float v15; // s4
  unsigned int v16; // r0
  int *v17; // r1
  int v18; // r0
  int v19; // r0
  int *v20; // r1
  int v21; // r3
  _WORD *v22; // r1
  int result; // r0
  CGlass *v24; // r0
  float v25; // s16
  unsigned int v26; // r6
  int v27; // r6
  int v28; // r3
  int *v29; // r2
  float v30; // s0
  float v31; // s2
  int v32; // r2
  __int16 v33; // r5
  __int16 v34; // r4
  int *v35; // r1
  int v36; // r1
  _WORD *v37; // r0
  int v38; // [sp+2Ch] [bp-74h]
  int v39; // [sp+30h] [bp-70h]
  int v40; // [sp+34h] [bp-6Ch]
  double v41; // [sp+38h] [bp-68h] BYREF
  float v42; // [sp+40h] [bp-60h]

  v2 = *((double *)this + 2);
  v3 = *((float *)this + 12);
  v4 = *((float *)this + 13);
  v5 = *((float *)this + 14);
  v6 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v6 = (float *)&qword_951FAC;
  v7 = *v6;
  v8 = v6[1];
  v9 = v6[2];
  v42 = *((float *)this + 6);
  v41 = v2;
  CVector::Normalise((CVector *)&v41);
  v10 = *((_DWORD *)this + 24);
  v11 = CTimer::m_snTimeInMilliseconds - v10;
  v12 = (float)((float)(*(float *)&dword_9528B4 * *(float *)&v41)
              + (float)(*(float *)&dword_9528B8 * *((float *)&v41 + 1)))
      + (float)(*(float *)&dword_9528BC * v42);
  v13 = (float)((float)((float)(*(float *)&dword_9528B4 - (float)(*(float *)&v41 * (float)(v12 + v12))) * 0.57)
              + (float)((float)(*(float *)&dword_9528B8 - (float)(*((float *)&v41 + 1) * (float)(v12 + v12))) * 0.57))
      - (float)((float)(*(float *)&dword_9528BC - (float)(v42 * (float)(v12 + v12))) * 0.57);
  v14 = (unsigned int)(float)((float)((float)(v13 * (float)(v13 * (float)(v13 * (float)(v13 * (float)(v13 * v13)))))
                                    * 235.0)
                            + 20.0);
  if ( CTimer::m_snTimeInMilliseconds < v10 || (v15 = 500.0, v11 <= 500) )
  {
    v15 = (float)v11;
    if ( CTimer::m_snTimeInMilliseconds < v10 )
      v15 = 0.0;
  }
  if ( TempBufferIndicesStoredHiLight > 2040 )
  {
    CGlass::RenderHiLightPolys((CGlass *)TempBufferIndicesStoredHiLight);
  }
  else if ( TempBufferVerticesStoredHiLight >= 1020 )
  {
    CGlass::RenderHiLightPolys((CGlass *)TempBufferVerticesStoredHiLight);
  }
  v16 = (unsigned int)(float)((float)(v15 / 500.0) * (float)v14);
  if ( *((_BYTE *)this + 111) && (unsigned int)(float)((float)(v15 / 500.0) * (float)v14) <= 0x40 )
    v16 = 64;
  v17 = &TempVertexBuffer[9 * TempBufferVerticesStoredHiLight];
  v18 = v16 | (v16 << 16) | (v16 << 24) | (v16 << 8);
  v17[6] = v18;
  v17[7] = 1056964608;
  v17[8] = 1056964608;
  v17[15] = v18;
  v17[16] = 1056964608;
  v17[17] = 1058642330;
  v17[24] = v18;
  v17[25] = 1058642330;
  v17[26] = 1058642330;
  operator*();
  operator*();
  operator*();
  v19 = TempBufferVerticesStoredHiLight;
  TempVertexBuffer[9 * TempBufferVerticesStoredHiLight] = v38;
  v20 = &TempVertexBuffer[9 * v19];
  v20[1] = v39;
  v20[2] = v40;
  v20[9] = v38;
  v20[10] = v39;
  v20[11] = v40;
  v20[18] = v38;
  v20[19] = v39;
  v20[20] = v40;
  v21 = TempBufferIndicesStoredHiLight;
  *((_WORD *)TempBufferRenderIndexList + TempBufferIndicesStoredHiLight) = v19;
  v22 = (_WORD *)TempBufferRenderIndexList + v21;
  v22[2] = v19 + 2;
  v22[4] = v19 + 2;
  v22[1] = v19 + 1;
  v22[3] = v19;
  TempBufferVerticesStoredHiLight = v19 + 3;
  v22[5] = v19 + 1;
  TempBufferIndicesStoredHiLight = v21 + 6;
  result = *((unsigned __int8 *)this + 110);
  if ( *((_BYTE *)this + 110) )
  {
    v24 = (CGlass *)TempBufferIndicesStoredShattered;
    v25 = sqrtf(
            (float)((float)((float)(v7 - v3) * (float)(v7 - v3)) + (float)((float)(v8 - v4) * (float)(v8 - v4)))
          + (float)((float)(v9 - v5) * (float)(v9 - v5)));
    if ( TempBufferIndicesStoredShattered > 3064
      || (v24 = (CGlass *)TempBufferVerticesStoredShattered, TempBufferVerticesStoredShattered >= 1532) )
    {
      CGlass::RenderShatteredPolys(v24);
    }
    if ( v25 <= 30.0 )
      v26 = 140;
    else
      v26 = (unsigned int)(float)((float)((float)((float)((float)(v25 + -30.0) * -4.0) / 40.0) + 1.0) * 140.0);
    v27 = v26 | (v26 << 16) | (v26 << 24) | (v26 << 8);
    v28 = 9 * TempBufferVerticesStoredShattered;
    v29 = &TempVertexBuffer[9 * TempBufferVerticesStoredShattered];
    v29[15] = v27;
    v29[6] = v27;
    v29[24] = v27;
    *((float *)v29 + 7) = (float)(flt_61FB60[6 * *((unsigned __int8 *)this + 108)] * 4.0) * *((float *)this + 26);
    *((float *)v29 + 8) = (float)(*(float *)((char *)flt_61FB60 + ((24 * *((unsigned __int8 *)this + 108)) | 4)) * 4.0)
                        * *((float *)this + 26);
    *((float *)v29 + 16) = (float)(flt_61FB60[6 * *((unsigned __int8 *)this + 108) + 2] * 4.0) * *((float *)this + 26);
    *((float *)v29 + 17) = (float)(flt_61FB60[6 * *((unsigned __int8 *)this + 108) + 3] * 4.0) * *((float *)this + 26);
    *((float *)v29 + 25) = (float)(flt_61FB60[6 * *((unsigned __int8 *)this + 108) + 4] * 4.0) * *((float *)this + 26);
    v30 = flt_61FB60[6 * *((unsigned __int8 *)this + 108) + 5] * 4.0;
    v31 = *((float *)this + 26);
    TempVertexBuffer[v28] = v38;
    v29[9] = v38;
    v29[10] = v39;
    v29[11] = v40;
    v29[1] = v39;
    v29[2] = v40;
    *((float *)v29 + 26) = v30 * v31;
    v32 = TempBufferVerticesStoredShattered;
    v33 = TempBufferVerticesStoredShattered - 1022;
    v34 = TempBufferVerticesStoredShattered - 1023;
    v35 = &TempVertexBuffer[9 * TempBufferVerticesStoredShattered];
    v35[18] = v38;
    v35[19] = v39;
    v35[20] = v40;
    v36 = TempBufferIndicesStoredShattered;
    *((_WORD *)TempBufferRenderIndexList + TempBufferIndicesStoredShattered) = v32 - 1024;
    v37 = (_WORD *)TempBufferRenderIndexList + v36;
    v37[1] = v34;
    v37[2] = v33;
    v37[3] = v32 - 1024;
    v37[4] = v33;
    v37[5] = v34;
    TempBufferVerticesStoredShattered = v32 + 3;
    result = v36 + 6;
    TempBufferIndicesStoredShattered = v36 + 6;
  }
  return result;
}


// ============================================================
