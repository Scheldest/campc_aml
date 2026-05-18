
// Address: 0x189fd0
// Original: j__ZN8CCoronas14RegisterCoronaEjP7CEntityhhhhRK7CVectorffhhhhhfbfbfbb
// Demangled: CCoronas::RegisterCorona(uint,CEntity *,uchar,uchar,uchar,uchar,CVector const&,float,float,uchar,uchar,uchar,uchar,uchar,float,bool,float,bool,float,bool,bool)
// attributes: thunk
int __fastcall CCoronas::RegisterCorona(
        CCoronas *this,
        unsigned int a2,
        CEntity *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        const CVector *a8,
        float a9,
        float a10,
        unsigned __int8 a11,
        unsigned __int8 a12,
        unsigned __int8 a13,
        unsigned __int8 a14,
        float a15,
        float a16,
        float a17,
        float a18,
        float a19,
        float a20,
        bool a21,
        bool a22)
{
  return _ZN8CCoronas14RegisterCoronaEjP7CEntityhhhhRK7CVectorffhhhhhfbfbfbb(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22);
}


// ============================================================

// Address: 0x18eb7c
// Original: j__ZN8CCoronas19RenderSunReflectionEv
// Demangled: CCoronas::RenderSunReflection(void)
// attributes: thunk
int __fastcall CCoronas::RenderSunReflection(CCoronas *this)
{
  return _ZN8CCoronas19RenderSunReflectionEv(this);
}


// ============================================================

// Address: 0x18efac
// Original: j__ZN8CCoronas4InitEv
// Demangled: CCoronas::Init(void)
// attributes: thunk
int __fastcall CCoronas::Init(CCoronas *this)
{
  return _ZN8CCoronas4InitEv(this);
}


// ============================================================

// Address: 0x18f0a0
// Original: j__ZN8CCoronas17UpdateCoronaCoorsEjRK7CVectorff
// Demangled: CCoronas::UpdateCoronaCoors(uint,CVector const&,float,float)
// attributes: thunk
int __fastcall CCoronas::UpdateCoronaCoors(CCoronas *this, unsigned int a2, const CVector *a3, float a4, float a5)
{
  return _ZN8CCoronas17UpdateCoronaCoorsEjRK7CVectorff(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18ff94
// Original: j__ZN8CCoronas6RenderEv
// Demangled: CCoronas::Render(void)
// attributes: thunk
int __fastcall CCoronas::Render(CCoronas *this)
{
  return _ZN8CCoronas6RenderEv(this);
}


// ============================================================

// Address: 0x194a50
// Original: j__ZN8CCoronas8ShutdownEv
// Demangled: CCoronas::Shutdown(void)
// attributes: thunk
int __fastcall CCoronas::Shutdown(CCoronas *this)
{
  return _ZN8CCoronas8ShutdownEv(this);
}


// ============================================================

// Address: 0x19a204
// Original: j__ZN8CCoronas17RenderReflectionsEv
// Demangled: CCoronas::RenderReflections(void)
// attributes: thunk
int __fastcall CCoronas::RenderReflections(CCoronas *this)
{
  return _ZN8CCoronas17RenderReflectionsEv(this);
}


// ============================================================

// Address: 0x19fdc4
// Original: j__ZN8CCoronas12DoSunAndMoonEv
// Demangled: CCoronas::DoSunAndMoon(void)
// attributes: thunk
int __fastcall CCoronas::DoSunAndMoon(CCoronas *this)
{
  return _ZN8CCoronas12DoSunAndMoonEv(this);
}


// ============================================================

// Address: 0x1a07a0
// Original: j__ZN8CCoronas6UpdateEv
// Demangled: CCoronas::Update(void)
// attributes: thunk
int __fastcall CCoronas::Update(CCoronas *this)
{
  return _ZN8CCoronas6UpdateEv(this);
}


// ============================================================

// Address: 0x1a0fe8
// Original: j__ZN8CCoronas14RegisterCoronaEjP7CEntityhhhhRK7CVectorffP9RwTexturehhhhfbfbfbb
// Demangled: CCoronas::RegisterCorona(uint,CEntity *,uchar,uchar,uchar,uchar,CVector const&,float,float,RwTexture *,uchar,uchar,uchar,uchar,float,bool,float,bool,float,bool,bool)
// attributes: thunk
int __fastcall CCoronas::RegisterCorona(
        int a1,
        CPlaceable *this,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float a8,
        float a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        float a15,
        int a16,
        float a17,
        int a18,
        float a19,
        int a20,
        int a21)
{
  return _ZN8CCoronas14RegisterCoronaEjP7CEntityhhhhRK7CVectorffP9RwTexturehhhhfbfbfbb(
           a1,
           this,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21);
}


// ============================================================

// Address: 0x5a2258
// Original: _ZN8CCoronas6UpdateEv
// Demangled: CCoronas::Update(void)
int __fastcall CCoronas::Update(CCoronas *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  unsigned __int8 *v3; // r1
  int v4; // r6
  int v5; // r4
  int v6; // r5
  int LookDirection; // r0
  int v8; // r0
  int v9; // r4
  int result; // r0

  v2.n64_u32[0] = 1.0;
  v1.n64_f32[0] = CCoronas::ScreenMult + (float)(*(float *)&CTimer::ms_fTimeStep * 0.03);
  LODWORD(CCoronas::ScreenMult) = vmin_f32(v1, v2).n64_u32[0];
  v3 = (unsigned __int8 *)&TheCamera + 528 * (unsigned __int8)byte_951FFF;
  v4 = v3[375];
  v5 = v3[376];
  v6 = v3[377];
  LookDirection = CCamera::GetLookDirection((CCamera *)&TheCamera);
  if ( v6 )
    v5 |= 2u;
  if ( v4 )
    v5 |= 4u;
  if ( !LookDirection )
    v5 |= 8u;
  if ( v5 == dword_A26A44 )
  {
    v8 = CCoronas::bChangeBrightnessImmediately - 1;
    if ( CCoronas::bChangeBrightnessImmediately - 1 <= 0 )
      v8 = 0;
  }
  else
  {
    v8 = 3;
  }
  dword_A26A44 = v5;
  v9 = 0;
  CCoronas::bChangeBrightnessImmediately = v8;
  do
  {
    result = *(_DWORD *)((char *)&CCoronas::aCoronas + v9 + 12);
    if ( result )
      result = CRegisteredCorona::Update((CRegisteredCorona *)((char *)&CCoronas::aCoronas + v9));
    v9 += 60;
  }
  while ( v9 != 3840 );
  return result;
}


// ============================================================

// Address: 0x5a2348
// Original: _ZN8CCoronas6RenderEv
// Demangled: CCoronas::Render(void)
int __fastcall CCoronas::Render(CCoronas *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d14
  __int64 v3; // r4
  float v4; // s16
  float v5; // s20
  float v6; // s22
  int v7; // r10
  char *v8; // r8
  int v9; // r0
  char *v10; // r5
  _BYTE *v11; // r5
  int v12; // t1
  int v13; // r9
  int v14; // r0
  bool v15; // zf
  float v16; // r0
  double v17; // d16
  int v18; // r0
  char *v19; // r1
  _BYTE *v20; // r1
  int v21; // r2
  int v22; // t1
  CSprite *v23; // s0
  float v24; // s31
  float v25; // s0
  float v26; // s2
  float v27; // s0
  int v28; // r0
  int v29; // r0
  int v30; // r1
  char *v31; // r6
  _DWORD **v32; // r6
  int v33; // t1
  float v34; // s30
  float *v35; // r1
  float v36; // s2
  float v37; // s4
  float v38; // s6
  float *v39; // r0
  char *v40; // r1
  char *v41; // r1
  int v42; // t1
  _WORD *v43; // r6
  unsigned int v44; // r4
  int v45; // r8
  float v46; // s2
  float v47; // s0
  float *v48; // r5
  unsigned __int8 *v49; // r0
  unsigned __int8 *v50; // r8
  unsigned __int8 *v51; // r4
  unsigned __int8 *v52; // r6
  float v53; // s31
  unsigned int v54; // s0
  __int64 *v55; // r1
  int v56; // t1
  float v57; // s0
  char *v58; // r0
  unsigned __int8 *v59; // r11
  float *i; // r6
  float v61; // s2
  unsigned int v62; // s0
  float v63; // s2
  int v64; // r3
  __int16 v65; // r1
  unsigned int v66; // s0
  float v67; // s2
  __int16 v68; // r3
  int v69; // r2
  unsigned __int8 v71; // [sp+20h] [bp-130h]
  int v72; // [sp+68h] [bp-E8h]
  char *v73; // [sp+8Ch] [bp-C4h]
  unsigned __int8 *v74; // [sp+8Ch] [bp-C4h]
  unsigned __int8 v75[4]; // [sp+90h] [bp-C0h]
  char v76[4]; // [sp+94h] [bp-BCh] BYREF
  double v77; // [sp+98h] [bp-B8h] BYREF
  float v78; // [sp+A0h] [bp-B0h]
  float v79; // [sp+C4h] [bp-8Ch] BYREF
  float v80; // [sp+C8h] [bp-88h]
  float v81; // [sp+CCh] [bp-84h]
  double v82; // [sp+D0h] [bp-80h] BYREF
  float v83; // [sp+D8h] [bp-78h]
  float v84; // [sp+DCh] [bp-74h] BYREF
  float v85; // [sp+E0h] [bp-70h] BYREF
  CSprite *v86; // [sp+E4h] [bp-6Ch] BYREF
  float v87; // [sp+E8h] [bp-68h]
  float v88; // [sp+ECh] [bp-64h]

  v3 = *(_QWORD *)(*(_DWORD *)(dword_9FC93C + 96) + 12);
  RwRenderStateSet(8, 0);
  RwRenderStateSet(12, 1);
  RwRenderStateSet(10, 2);
  RwRenderStateSet(11, 2);
  RwRenderStateSet(6, 1);
  v4 = (float)SHIDWORD(v3);
  v5 = (float)(SHIDWORD(v3) / 2);
  v6 = (float)((int)v3 / 2);
  v7 = 0;
  v72 = 1;
  do
  {
    v8 = (char *)&CCoronas::aCoronas + 60 * v7;
    v9 = *((_DWORD *)v8 + 3);
    if ( v9 )
    {
      v10 = (char *)&CCoronas::aCoronas + 60 * v7;
      v12 = (unsigned __int8)v10[48];
      v11 = v10 + 48;
      if ( v12
        || (v9 = *((unsigned __int8 *)&CCoronas::aCoronas + 60 * v7 + 47), *((_BYTE *)&CCoronas::aCoronas + 60 * v7 + 47)) )
      {
        v13 = *((_DWORD *)&CCoronas::aCoronas + 15 * v7 + 14);
        if ( v13 )
        {
          v14 = *(_BYTE *)(v13 + 58) & 7;
          v15 = v14 == 2;
          if ( v14 == 2 )
            v15 = *(_DWORD *)(v13 + 1444) == 9;
          if ( !v15 && !*(_DWORD *)(v13 + 20) )
          {
            CPlaceable::AllocateMatrix(*((CPlaceable **)&CCoronas::aCoronas + 15 * v7 + 14));
            CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v13 + 4), *(CMatrix **)(v13 + 20));
          }
          operator*();
          v17 = v77;
          v16 = v78;
        }
        else
        {
          v16 = *((float *)v8 + 2);
          v17 = *(double *)v8;
        }
        v83 = v16;
        v82 = v17;
        v18 = CSprite::CalcScreenCoors((int)&v82, (int)&v86, (int)&v85, (int)&v84, 1, 1);
        v19 = (char *)&CCoronas::aCoronas + 60 * v7;
        v22 = (unsigned __int8)v19[52];
        v20 = v19 + 52;
        v21 = v22;
        if ( v18 != 1 )
        {
          v9 = v21 | 2;
          *v20 = v21 | 2;
          goto LABEL_58;
        }
        v23 = v86;
        v9 = v21 & 0xFD;
        *v20 = v21 & 0xFD;
        if ( *(float *)&v23 < 0.0 || v87 > v4 || v87 < 0.0 )
        {
          v9 = v21 | 2;
          *v20 = v21 | 2;
        }
        if ( *v11 )
        {
          v24 = v88;
          v25 = *((float *)&CCoronas::aCoronas + 15 * v7 + 7);
          if ( v88 < v25 )
          {
            v26 = v25 * 0.5;
            v27 = 1.0;
            if ( v88 >= v26 )
              v27 = 1.0 - (float)((float)(v88 - v26) / v26);
            *(_DWORD *)v75 = (int)(float)(v27 * (float)(unsigned __int8)*v11);
            if ( v9 << 31 )
            {
              if ( !(v72 << 31) )
              {
                v28 = 0;
                goto LABEL_31;
              }
              v29 = 0;
              v30 = 0;
            }
            else
            {
              if ( v72 << 31 )
              {
                v28 = 1;
LABEL_31:
                v72 = v28;
                goto LABEL_32;
              }
              v29 = 1;
              v30 = 1;
            }
            v72 = v29;
            RwRenderStateSet(6, v30);
LABEL_32:
            v31 = (char *)&CCoronas::aCoronas + 60 * v7;
            v33 = *((_DWORD *)v31 + 4);
            v32 = (_DWORD **)(v31 + 16);
            if ( v33 )
            {
              v2.n64_f32[0] = v88;
              v34 = CWeather::Foggyness;
              if ( *((_DWORD *)v8 + 3) == 1 )
                v88 = *(float *)(dword_9FC93C + 132) * 0.95;
              RwRenderStateSet(6, 1);
              RwRenderStateSet(1, **v32);
              v78 = v83;
              v35 = (float *)(dword_951FBC + 48);
              v77 = v82;
              if ( !dword_951FBC )
                v35 = (float *)&qword_951FAC;
              v36 = *((float *)&v82 + 1) - v35[1];
              v37 = v83 - v35[2];
              v79 = *(float *)&v82 - *v35;
              v80 = v36;
              v81 = v37;
              CVector::Normalise((CVector *)&v79);
              v38 = *((float *)&CCoronas::aCoronas + 15 * v7 + 8);
              *(float *)&v77 = *(float *)&v77 - (float)(v38 * v79);
              *((float *)&v77 + 1) = *((float *)&v77 + 1) - (float)(v38 * v80);
              v78 = v78 - (float)(v38 * v81);
              if ( CSprite::CalcScreenCoors((int)&v77, (int)&v86, (int)&v85, (int)&v84, 1, 1) == 1 )
              {
                v1.n64_u32[0] = 1109393408;
                v39 = (float *)((char *)&CCoronas::aCoronas + 60 * v7);
                v1.n64_u64[0] = vmin_f32(v2, v1).n64_u64[0];
                v1.n64_f32[0] = (float)((float)(v34 * v1.n64_f32[0]) / 40.0) + 1.0;
                CSprite::RenderOneXLUSprite_Rotate_Aspect(
                  v86,
                  v87,
                  v88,
                  v39[5] * v85,
                  v1.n64_f32[0] * (float)(v39[5] * v84),
                  COERCE_FLOAT((unsigned int)(float)((float)*((unsigned __int8 *)v39 + 44) / v1.n64_f32[0])),
                  (unsigned int)(float)((float)*((unsigned __int8 *)v39 + 45) / v1.n64_f32[0]),
                  (unsigned int)(float)((float)*((unsigned __int8 *)v39 + 46) / v1.n64_f32[0]),
                  v75[0],
                  COERCE_UNSIGNED_INT((float)(1.0 / v24) * 20.0),
                  0.0,
                  COERCE_FLOAT(255),
                  v71);
              }
            }
            v40 = (char *)&CCoronas::aCoronas + 60 * v7;
            v42 = (unsigned __int8)v40[50];
            v41 = v40 + 50;
            v9 = v42;
            if ( v42 )
            {
              v43 = &SunFlareDef;
              if ( v9 != 1 )
              {
                if ( v9 == 2 )
                  v43 = &HeadLightsFlareDef;
                else
                  v43 = 0;
              }
              v73 = v41;
              RwRenderStateSet(6, 0);
              v44 = (unsigned __int8)*v11;
              v45 = rand();
              RwRenderStateSet(1, *(_DWORD *)gpCoronaTexture);
              v46 = (float)v45;
              v47 = (float)v44;
              if ( v43[8] )
              {
                v48 = (float *)(v43 + 18);
                v49 = (unsigned __int8 *)&CCoronas::aCoronas + 60 * v7;
                v50 = v49 + 46;
                v51 = v49 + 45;
                v52 = v49 + 44;
                v53 = (float)((float)((float)((float)(v46 * 4.6566e-10) * 0.3) + 0.7) * v47) * 0.000015259;
                do
                {
                  LOBYTE(v79) = (unsigned int)(float)(v53 * (float)(*((__int16 *)v48 - 14) * *v52));
                  BYTE1(v79) = (unsigned int)(float)(v53 * (float)(*((__int16 *)v48 - 13) * *v51));
                  v54 = (unsigned int)(float)(v53 * (float)(*((__int16 *)v48 - 12) * *v50));
                  HIBYTE(v79) = -1;
                  BYTE2(v79) = v54;
                  v55 = (__int64 *)(dword_951FBC + 48);
                  if ( !dword_951FBC )
                    v55 = &qword_951FAC;
                  if ( !CWorld::ProcessLineOfSight((int)&v82, (int)v55, (int)&v77, (int)v76, 0, 1, 1, 0, 0, 0, 0, 1) )
                    CSprite::RenderBufferedOneXLUSprite2D(
                      COERCE_INT((float)(*(v48 - 9) * (float)(*(float *)&v86 - v6)) + v6),
                      COERCE_INT((float)(*(v48 - 9) * (float)(v87 - v5)) + v5),
                      COERCE_INT(*(v48 - 8) * 4.0),
                      COERCE_INT(*(v48 - 8) * 4.0),
                      (int)&v79,
                      255,
                      255);
                  v56 = *(unsigned __int16 *)v48;
                  v48 += 5;
                }
                while ( v56 );
              }
              RwRenderStateSet(6, 1);
              v9 = word_6B1824[0];
              if ( word_6B1824[0] )
              {
                v9 = (unsigned __int8)*v73;
                if ( v9 == 2 )
                {
                  v9 = (int)&CWeather::HeadLightsSpectrum;
                  v57 = CWeather::HeadLightsSpectrum;
                  if ( CWeather::HeadLightsSpectrum != 0.0 )
                  {
                    v9 = CGame::currArea;
                    if ( !CGame::currArea )
                    {
                      v58 = (char *)&CCoronas::aCoronas + 60 * v7;
                      v59 = (unsigned __int8 *)(v58 + 44);
                      v74 = (unsigned __int8 *)(v58 + 46);
                      for ( i = (float *)&word_6B1824[10]; ; i += 5 )
                      {
                        v61 = (float)(*((__int16 *)i - 14) * *v59);
                        *(_WORD *)((char *)&v77 + 1) = 0;
                        v62 = (unsigned int)(float)((float)(v57 * v61) * 0.0039062);
                        v63 = *(i - 9) + 0.05;
                        BYTE3(v77) = -1;
                        v64 = *((_DWORD *)i - 8);
                        LOBYTE(v77) = v62;
                        CSprite::RenderBufferedOneXLUSprite2D(
                          COERCE_INT((float)(v63 * (float)(*(float *)&v86 - v6)) + v6),
                          COERCE_INT((float)(v63 * (float)(v87 - v5)) + v5),
                          v64,
                          v64,
                          (int)&v77,
                          (__int16)((*((__int16 *)i - 11) * *(__int16 *)v75) >> 8),
                          255);
                        v65 = *((_WORD *)i - 12);
                        LOWORD(v77) = 0;
                        v66 = (unsigned int)(float)((float)(CWeather::HeadLightsSpectrum * (float)(v65 * *v74))
                                                  * 0.0039062);
                        v67 = *(i - 9) + -0.05;
                        BYTE3(v77) = -1;
                        v68 = *((_WORD *)i - 11);
                        v69 = *((_DWORD *)i - 8);
                        BYTE2(v77) = v66;
                        CSprite::RenderBufferedOneXLUSprite2D(
                          COERCE_INT((float)(v67 * (float)(*(float *)&v86 - v6)) + v6),
                          COERCE_INT((float)(v67 * (float)(v87 - v5)) + v5),
                          v69,
                          v69,
                          (int)&v77,
                          (__int16)((v68 * *(__int16 *)v75) >> 8),
                          255);
                        v9 = *(unsigned __int16 *)i;
                        if ( !*(_WORD *)i )
                          break;
                        v57 = CWeather::HeadLightsSpectrum;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_58:
    ++v7;
  }
  while ( v7 != 64 );
  return CSprite::FlushSpriteBuffer((CSprite *)v9);
}


// ============================================================

// Address: 0x5a2b94
// Original: _ZN8CCoronas17RenderReflectionsEv
// Demangled: CCoronas::RenderReflections(void)
int __fastcall CCoronas::RenderReflections(CCoronas *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  __int64 v3; // d8
  __int64 v4; // d9
  __int64 v5; // d10
  float32x2_t v6; // d11
  __int64 v7; // d12
  float32x2_t v8; // d13
  __int64 v9; // d14
  float32x2_t v10; // d15
  int v11; // r8
  int v12; // r4
  int v13; // r0
  int v14; // r6
  double v15; // d16
  float v16; // r0
  char *v17; // r6
  float v18; // s17
  __int64 *v19; // r1
  float v20; // s4
  float *v21; // r6
  float v22; // s17
  int v23; // r0
  int result; // r0
  char *v25; // r2
  unsigned __int8 v26; // [sp+1Ch] [bp-10Ch]
  float v27; // [sp+20h] [bp-108h]
  CSprite *v28; // [sp+24h] [bp-104h]
  double v29; // [sp+60h] [bp-C8h] BYREF
  float v30; // [sp+68h] [bp-C0h]
  double v31; // [sp+70h] [bp-B8h] BYREF
  float v32; // [sp+78h] [bp-B0h]
  _BYTE v33[4]; // [sp+7Ch] [bp-ACh] BYREF
  _BYTE v34[8]; // [sp+80h] [bp-A8h] BYREF
  float v35; // [sp+88h] [bp-A0h]
  float v36; // [sp+ACh] [bp-7Ch] BYREF
  float v37; // [sp+B0h] [bp-78h] BYREF
  _DWORD v38[2]; // [sp+B4h] [bp-74h] BYREF
  float v39; // [sp+BCh] [bp-6Ch]
  __int64 v40; // [sp+C0h] [bp-68h]
  __int64 v41; // [sp+C8h] [bp-60h]
  __int64 v42; // [sp+D0h] [bp-58h]
  unsigned __int64 v43; // [sp+D8h] [bp-50h]
  __int64 v44; // [sp+E0h] [bp-48h]
  unsigned __int64 v45; // [sp+E8h] [bp-40h]
  __int64 v46; // [sp+F0h] [bp-38h]
  unsigned __int64 v47; // [sp+F8h] [bp-30h]

  if ( CWeather::WetRoads <= 0.0 )
  {
    for ( result = 0; result != 3840; result += 60 )
    {
      v25 = (char *)&CCoronas::aCoronas + result;
      v25[54] &= ~4u;
    }
  }
  else
  {
    v40 = v3;
    v41 = v4;
    v42 = v5;
    v43 = v6.n64_u64[0];
    v44 = v7;
    v45 = v8.n64_u64[0];
    v46 = v9;
    v47 = v10.n64_u64[0];
    CSprite::InitSpriteBuffer((CSprite *)&CWeather::WetRoads);
    RwRenderStateSet(14, 0);
    RwRenderStateSet(8, 0);
    RwRenderStateSet(6, 0);
    RwRenderStateSet(12, 1);
    RwRenderStateSet(10, 2);
    RwRenderStateSet(11, 2);
    RwRenderStateSet(1, *(_DWORD *)dword_A25B14);
    v8.n64_u32[0] = 1.0;
    v11 = 0;
    v6.n64_u32[0] = 1113325568;
    v12 = 0;
    v10.n64_u32[0] = 0;
    do
    {
      v13 = *(_DWORD *)((char *)&CCoronas::aCoronas + v11 + 12);
      if ( v13 )
      {
        if ( *((_BYTE *)&CCoronas::aCoronas + v11 + 48)
          || (v13 = *((unsigned __int8 *)&CCoronas::aCoronas + v11 + 47), *((_BYTE *)&CCoronas::aCoronas + v11 + 47)) )
        {
          v13 = *((unsigned __int8 *)&CCoronas::aCoronas + v11 + 51);
          if ( *((_BYTE *)&CCoronas::aCoronas + v11 + 51) )
          {
            v14 = *(_DWORD *)((char *)&CCoronas::aCoronas + v11 + 56);
            if ( v14 )
            {
              if ( !*(_DWORD *)(v14 + 20) )
              {
                CPlaceable::AllocateMatrix(*(CPlaceable **)((char *)&CCoronas::aCoronas + v11 + 56));
                CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v14 + 4), *(CMatrix **)(v14 + 20));
              }
              operator*();
              v15 = v29;
              v16 = v30;
            }
            else
            {
              v15 = *(double *)((char *)&CCoronas::aCoronas + v11);
              v16 = *(float *)((char *)&CCoronas::aCoronas + v11 + 8);
            }
            v32 = v16;
            v31 = v15;
            v17 = (char *)&CCoronas::aCoronas + v11;
            if ( (*((_BYTE *)&CCoronas::aCoronas + v11 + 54) & 4) != 0 )
            {
              if ( !((CTimer::m_FrameCounter + v12) << 28)
                && CWorld::ProcessVerticalLine((CVector *)&v31, -998637568, (int)v34, (int)v33, 1, 0, 0, 0, 1, 0, 0) == 1 )
              {
                *(float *)((char *)&CCoronas::aCoronas + v11 + 36) = v32 - v35;
              }
            }
            else if ( CWorld::ProcessVerticalLine((CVector *)&v31, -998637568, (int)v34, (int)v33, 1, 0, 0, 0, 1, 0, 0) == 1 )
            {
              *(float *)((char *)&CCoronas::aCoronas + v11 + 36) = v32 - v35;
              v17[54] |= 4u;
            }
            v13 = (unsigned __int8)v17[54] << 29;
            if ( (v17[54] & 4) != 0 )
            {
              v13 = (int)&CCoronas::aCoronas + v11;
              v18 = *(float *)((char *)&CCoronas::aCoronas + v11 + 36);
              if ( v18 < 20.0 )
              {
                v13 = dword_951FBC;
                v19 = (__int64 *)(dword_951FBC + 48);
                if ( !dword_951FBC )
                  v19 = &qword_951FAC;
                if ( *((float *)v19 + 2) >= (float)(v32 - v18) )
                {
                  v29 = v31;
                  v30 = v32 + (float)(v18 * -2.0);
                  v13 = CSprite::CalcScreenCoors((int)&v29, (int)v38, (int)&v37, (int)&v36, 1, 1);
                  if ( v13 == 1 )
                  {
                    v13 = (int)&CCoronas::aCoronas + v11;
                    v2.n64_f32[0] = *(float *)((char *)&CCoronas::aCoronas + v11 + 28) * 0.75;
                    v2.n64_u64[0] = vmin_f32(v2, v6).n64_u64[0];
                    if ( v39 < v2.n64_f32[0] )
                    {
                      v20 = v2.n64_f32[0] * 0.5;
                      v2.n64_u64[0] = v8.n64_u64[0];
                      if ( v39 >= v20 )
                      {
                        v1.n64_f32[0] = 1.0 - (float)((float)(v39 - v20) / v20);
                        v2.n64_u64[0] = vmax_f32(vmin_f32(v1, v8), v10).n64_u64[0];
                      }
                      v28 = (CSprite *)v38[0];
                      v27 = *(float *)&v38[1];
                      v21 = (float *)((char *)&CCoronas::aCoronas + v11);
                      v22 = (float)(20.0 - v18) * (float)((float)(v2.n64_f32[0] * CWeather::WetRoads) * 230.0);
                      v23 = RwIm2DGetNearScreenZ();
                      v13 = CSprite::RenderBufferedOneXLUSprite(
                              v28,
                              v27,
                              *(float *)&v23,
                              (float)(v21[5] * v37) * 0.75,
                              (float)(v21[5] + v21[5]) * v36,
                              COERCE_FLOAT((unsigned __int8)((unsigned __int16)(*((unsigned __int8 *)v21 + 44)
                                                                              * (unsigned __int16)(int)(float)(v22 / 20.0)) >> 8)),
                              (unsigned __int16)(*((unsigned __int8 *)v21 + 45)
                                               * (unsigned __int16)(int)(float)(v22 / 20.0)) >> 8,
                              (unsigned __int16)(*((unsigned __int8 *)v21 + 46)
                                               * (unsigned __int16)(int)(float)(v22 / 20.0)) >> 8,
                              0x80u,
                              1.0 / *(float *)(dword_9FC93C + 128),
                              COERCE_FLOAT(255),
                              v26);
                    }
                  }
                }
              }
            }
          }
        }
      }
      v11 += 60;
      ++v12;
    }
    while ( v11 != 3840 );
    CSprite::FlushSpriteBuffer((CSprite *)v13);
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 6);
    RwRenderStateSet(12, 0);
    RwRenderStateSet(8, 1);
    return RwRenderStateSet(6, 1);
  }
  return result;
}


// ============================================================

// Address: 0x5a2fe8
// Original: _ZN8CCoronas37RenderOutGeometryBufferForReflectionsEv
// Demangled: CCoronas::RenderOutGeometryBufferForReflections(void)
int *__fastcall CCoronas::RenderOutGeometryBufferForReflections(CCoronas *this)
{
  int *result; // r0

  result = (int *)TempBufferIndicesStored;
  if ( TempBufferIndicesStored )
  {
    LittleTest();
    if ( RwIm3DTransform() )
    {
      RwIm3DRenderIndexedPrimitive();
      RwIm3DEnd();
    }
    result = &TempBufferIndicesStored;
    TempBufferIndicesStored = 0;
    TempBufferVerticesStored = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5a30f4
// Original: _ZN8CCoronas19RenderSunReflectionEv
// Demangled: CCoronas::RenderSunReflection(void)
int __fastcall CCoronas::RenderSunReflection(CCoronas *this)
{
  __int64 v1; // d8
  __int64 v2; // d9
  __int64 v3; // d10
  __int64 v4; // d11
  __int64 v5; // d12
  __int64 v6; // d13
  __int64 v7; // d14
  int result; // r0
  float v9; // s0
  float v10; // s22
  float v11; // s16
  float v12; // s2
  float *v13; // r3
  float v14; // s20
  float v15; // s18
  float v16; // s4
  float v17; // s6
  float v18; // s2
  float v19; // s4
  float v20; // s6
  float v21; // s2
  float v22; // s4
  float v23; // s6
  float v24; // s2
  float v25; // s6
  float v26; // s4
  float v27; // s28
  float v28; // s6
  float *v29; // r0
  int v30; // r8
  float v31; // s24
  float v32; // s26
  int v33; // r9
  int v34; // r10
  int v35; // r4
  int v36; // r5
  int v37; // r6
  int v38; // s4
  int v39; // r10
  int v40; // r0
  __int16 *v41; // r8
  unsigned int v42; // r9
  unsigned int v43; // r6
  float v44; // s0
  float v45; // s16
  float v46; // s18
  unsigned int v47; // kr00_4
  unsigned int v48; // r6
  int v49; // r5
  float v50; // s24
  float v51; // s22
  int v52; // s20
  unsigned int v53; // r4
  float v54; // s4
  float v55; // s0
  __int16 v56; // r6
  int v57; // r5
  unsigned int v58; // kr04_4
  float v59; // r0
  float v60; // s0
  __int16 v61; // r1
  float v62; // s2
  int *v63; // r0
  float v64; // s4
  float v65; // s0
  float v66; // s6
  float v67; // s2
  float v68; // [sp+8h] [bp-70h] BYREF
  float v69; // [sp+Ch] [bp-6Ch]
  int v70; // [sp+10h] [bp-68h]
  __int64 v71; // [sp+18h] [bp-60h]
  __int64 v72; // [sp+20h] [bp-58h]
  __int64 v73; // [sp+28h] [bp-50h]
  __int64 v74; // [sp+30h] [bp-48h]
  __int64 v75; // [sp+38h] [bp-40h]
  __int64 v76; // [sp+40h] [bp-38h]
  __int64 v77; // [sp+48h] [bp-30h]

  result = 3 * CTimeCycle::m_CurrentStoredValue;
  v9 = CTimeCycle::m_VectorToSun[3 * CTimeCycle::m_CurrentStoredValue + 2];
  if ( v9 > -0.05 )
  {
    v71 = v1;
    v72 = v2;
    v73 = v3;
    v74 = v4;
    v75 = v5;
    v76 = v6;
    v77 = v7;
    v10 = 1.0;
    v11 = *(float *)&CWeather::Wind;
    v12 = (float)(1.0 - *(float *)&CWeather::Wind)
        * (float)((float)(1.0 - CWeather::Foggyness)
                * (float)((float)(1.0 - CWeather::CloudCoverage) * (float)((float)(0.3 - fabsf(v9 + -0.25)) * 3.333)));
    if ( v12 > 0.0 )
    {
      v13 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v13 = (float *)&qword_951FAC;
      v14 = *v13;
      v15 = v13[1];
      v16 = 1.0;
      v17 = sqrtf(
              (float)((float)(*v13 + -611.0) * (float)(*v13 + -611.0))
            + (float)((float)(v15 + -875.0) * (float)(v15 + -875.0)));
      if ( v17 < 350.0 )
      {
        if ( v17 <= 250.0 )
          v16 = 0.0;
        else
          v16 = (float)(v17 + -250.0) / 100.0;
      }
      v18 = v12 * v16;
      v19 = 1.0;
      v20 = sqrtf(
              (float)((float)(v14 + 929.0) * (float)(v14 + 929.0))
            + (float)((float)(v15 + -2364.0) * (float)(v15 + -2364.0)));
      if ( v20 < 350.0 )
      {
        if ( v20 <= 250.0 )
          v19 = 0.0;
        else
          v19 = (float)(v20 + -250.0) / 100.0;
      }
      v21 = v18 * v19;
      v22 = 1.0;
      v23 = sqrtf(
              (float)((float)(v14 + 1034.0) * (float)(v14 + 1034.0))
            + (float)((float)(v15 + -2640.0) * (float)(v15 + -2640.0)));
      if ( v23 < 350.0 )
      {
        if ( v23 <= 250.0 )
          v22 = 0.0;
        else
          v22 = (float)(v23 + -250.0) / 100.0;
      }
      v24 = v21 * v22;
      v25 = sqrtf(
              (float)((float)(v14 + -2372.0) * (float)(v14 + -2372.0))
            + (float)((float)(v15 + 1854.0) * (float)(v15 + 1854.0)));
      v26 = 1.0;
      if ( v25 < 450.0 )
      {
        if ( v25 <= 350.0 )
          v26 = 0.0;
        else
          v26 = (float)(v25 + -350.0) / 100.0;
      }
      v27 = v24 * v26;
      v28 = sqrtf(
              (float)((float)(v14 + 1633.0) * (float)(v14 + 1633.0))
            + (float)((float)(v15 + -106.0) * (float)(v15 + -106.0)));
      if ( v28 < 350.0 )
      {
        if ( v28 <= 250.0 )
          v10 = 0.0;
        else
          v10 = (float)(v28 + -250.0) / 100.0;
      }
      v29 = &CTimeCycle::m_VectorToSun[3 * CTimeCycle::m_CurrentStoredValue];
      v30 = (unsigned __int16)word_966580;
      v32 = v29[1];
      v33 = (unsigned __int16)word_966586;
      v34 = (unsigned __int16)word_96657E;
      v35 = (unsigned __int16)word_966584;
      v36 = (unsigned __int16)word_96657C;
      v37 = (unsigned __int16)word_966582;
      v68 = *v29;
      v31 = v68;
      v69 = v32;
      v70 = 0;
      CVector::Normalise((CVector *)&v68);
      v38 = v34 + v35;
      v39 = 0;
      v40 = v30 + v33;
      v41 = &word_A7A1EE;
      v42 = 0;
      v43 = (unsigned int)(float)((float)((float)(v27 * v10) * 0.25) * (float)(v36 + v37));
      v44 = v11 * 0.5;
      v45 = (float)(v31 * 40.0) + v14;
      v46 = (float)(v32 * 40.0) + v15;
      v47 = (unsigned int)(float)((float)((float)(v27 * v10) * 0.25) * (float)v38)
          + v43
          + (unsigned int)(float)((float)((float)(v27 * v10) * 0.25) * (float)v40);
      TempBufferRenderIndexList[0] = 65538;
      dword_A7A1DC = 0x20000;
      v48 = v43 + v47 / 3;
      dword_A7A1E0 = 65539;
      v49 = (unsigned __int8)((v47 / 3 + (unsigned __int8)(v48 >> 1)) >> 1);
      v50 = v69;
      v51 = v68;
      *(float *)&v52 = v44 + 0.1;
      v53 = (unsigned __int8)(v48 >> 1) | (v49 << 8) | (v49 << 16) | 0xFF000000;
      v54 = v46 + (float)(v69 * 60.0);
      v55 = v45 + (float)(v68 * 60.0);
      *(float *)TempVertexBuffer = v45 + (float)(v69 * 30.0);
      *(float *)&dword_A5A1DC = v46 - (float)(v68 * 30.0);
      dword_A5A1E0 = v52;
      *(float *)&dword_A5A1FC = v45 - (float)(v69 * 30.0);
      *(float *)&dword_A5A200 = v46 + (float)(v68 * 30.0);
      dword_A5A204 = v52;
      *(float *)&dword_A5A220 = v55 + (float)(v69 * 30.0);
      *(float *)&dword_A5A224 = v54 - (float)(v68 * 30.0);
      dword_A5A228 = v52;
      dword_A5A214 = v53;
      dword_A5A238 = v53;
      dword_A5A25C = v53;
      *(float *)&dword_A5A244 = v55 - (float)(v69 * 30.0);
      *(float *)&dword_A5A248 = (float)(v68 * 30.0) + v54;
      dword_A5A24C = v52;
      dword_A5A240 = 1056964608;
      dword_A5A264 = 1056964608;
      dword_A5A1F0 = v53;
      dword_A5A1F4 = 0;
      dword_A5A1F8 = 1065353216;
      dword_A5A218 = 1065353216;
      dword_A5A21C = 1065353216;
      dword_A5A23C = 0;
      dword_A5A260 = 1065353216;
      v56 = CTimer::m_snTimeInMilliseconds;
      TempBufferVerticesStored = 4;
      v57 = 0;
      TempBufferIndicesStored = 6;
      do
      {
        v58 = v42;
        v59 = sinf((float)(v56 & 0x7FF) * 0.003068);
        v42 += 970;
        v60 = (float)(v39 * 4 + 60);
        v61 = (unsigned __int16)&elf_hash_bucket[16321] + 3 + v57;
        *(v41 - 4) = v61;
        v56 += 900;
        *(v41 - 3) = (unsigned __int16)&elf_hash_bucket[16321] + 2 + v57;
        *(v41 - 5) = v57 + 4;
        *(v41 - 2) = v57 + 4;
        *(v41 - 1) = v57 + 5;
        v62 = (float)(v59 * 10.0) + (float)(int)(v58 / 0x14 + 30);
        *v41 = v61;
        v63 = &TempVertexBuffer[v39];
        v39 += 18;
        v57 += 2;
        v41 += 6;
        v63[42] = v53;
        v63[43] = 0;
        v64 = v46 + (float)(v50 * v60);
        v65 = v45 + (float)(v51 * v60);
        v63[44] = 1056964608;
        v66 = v62 * v50;
        v63[51] = v53;
        v67 = v62 * v51;
        v63[52] = 1065353216;
        v63[53] = 1056964608;
        *((float *)v63 + 36) = v65 + v66;
        *((float *)v63 + 37) = v64 - v67;
        v63[38] = v52;
        *((float *)v63 + 45) = v65 - v66;
        *((float *)v63 + 46) = v67 + v64;
        v63[47] = v52;
      }
      while ( v39 != 360 );
      TempBufferIndicesStored = 126;
      TempBufferVerticesStored = 44;
      RwRenderStateSet(8, 0);
      RwRenderStateSet(6, 1);
      RwRenderStateSet(14, 0);
      RwRenderStateSet(16, 1);
      RwRenderStateSet(10, 2);
      RwRenderStateSet(11, 2);
      RwRenderStateSet(12, 1);
      RwRenderStateSet(1, *(_DWORD *)dword_A25B18);
      if ( RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
      RwRenderStateSet(8, 1);
      RwRenderStateSet(6, 1);
      RwRenderStateSet(10, 5);
      RwRenderStateSet(11, 6);
      RwRenderStateSet(14, 0);
      RwRenderStateSet(12, 0);
      result = (int)&TempBufferIndicesStored;
      TempBufferIndicesStored = 0;
      TempBufferVerticesStored = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5a37d0
// Original: _ZN8CCoronas4InitEv
// Demangled: CCoronas::Init(void)
int *__fastcall CCoronas::Init(CCoronas *this)
{
  const char *v1; // r1
  CTxdStore *TxdSlot; // r0
  int v3; // r4
  const char *v4; // r2
  int *v5; // r5
  int v6; // r0
  int i; // r2
  char *v8; // r3
  int *result; // r0

  CTxdStore::PushCurrentTxd(this);
  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"particle", v1);
  v3 = 0;
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v4);
  v5 = &gpCoronaTexture;
  do
  {
    v6 = *v5;
    if ( !*v5 )
    {
      v6 = (unsigned __int8)aCoronastar[v3];
      if ( aCoronastar[v3] )
      {
        v6 = RwTextureRead(&aCoronastar[v3], &byte_6B1B34[v3]);
        *v5 = v6;
      }
    }
    v3 += 26;
    ++v5;
  }
  while ( v3 != 260 );
  CTxdStore::PopCurrentTxd((CTxdStore *)v6);
  for ( i = 0; i != 3840; i += 60 )
  {
    v8 = (char *)&CCoronas::aCoronas + i;
    *((_DWORD *)v8 + 3) = 0;
  }
  result = &CCoronas::NumCoronas;
  CCoronas::NumCoronas = 0;
  return result;
}


// ============================================================

// Address: 0x5a3864
// Original: _ZN8CCoronas8ShutdownEv
// Demangled: CCoronas::Shutdown(void)
int *__fastcall CCoronas::Shutdown(CCoronas *this)
{
  int *result; // r0

  if ( gpCoronaTexture )
  {
    RwTextureDestroy(gpCoronaTexture);
    gpCoronaTexture = 0;
  }
  if ( dword_A25B0C )
  {
    RwTextureDestroy(dword_A25B0C);
    dword_A25B0C = 0;
  }
  if ( dword_A25B10 )
  {
    RwTextureDestroy(dword_A25B10);
    dword_A25B10 = 0;
  }
  if ( dword_A25B14 )
  {
    RwTextureDestroy(dword_A25B14);
    dword_A25B14 = 0;
  }
  if ( dword_A25B18 )
  {
    RwTextureDestroy(dword_A25B18);
    dword_A25B18 = 0;
  }
  if ( dword_A25B1C )
  {
    RwTextureDestroy(dword_A25B1C);
    dword_A25B1C = 0;
  }
  if ( dword_A25B20 )
  {
    RwTextureDestroy(dword_A25B20);
    dword_A25B20 = 0;
  }
  if ( dword_A25B24 )
  {
    RwTextureDestroy(dword_A25B24);
    dword_A25B24 = 0;
  }
  if ( dword_A25B28 )
  {
    RwTextureDestroy(dword_A25B28);
    dword_A25B28 = 0;
  }
  result = (int *)dword_A25B2C;
  if ( dword_A25B2C )
  {
    RwTextureDestroy(dword_A25B2C);
    result = &gpCoronaTexture;
    dword_A25B2C = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5a39b0
// Original: _ZN8CCoronas14RegisterCoronaEjP7CEntityhhhhRK7CVectorffhhhhhfbfbfbb
// Demangled: CCoronas::RegisterCorona(uint,CEntity *,uchar,uchar,uchar,uchar,CVector const&,float,float,uchar,uchar,uchar,uchar,uchar,float,bool,float,bool,float,bool,bool)
int __fastcall CCoronas::RegisterCorona(
        CCoronas *this,
        CPlaceable *a2,
        CEntity *a3,
        unsigned __int8 a4,
        int a5,
        int a6,
        int a7,
        const CVector *a8,
        float a9,
        float a10,
        int a11,
        int a12,
        int a13,
        unsigned __int8 a14,
        float a15,
        int a16,
        float a17,
        int a18,
        float a19,
        int a20,
        int a21,
        bool a22)
{
  return CCoronas::RegisterCorona(
           (int)this,
           a2,
           (int)a3,
           a4,
           a5,
           a6,
           a7,
           *(float *)&a8,
           a9,
           gpCoronaTexture[LODWORD(a10)],
           a11,
           a12,
           a13,
           0,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21);
}


// ============================================================

// Address: 0x5a3a3c
// Original: _ZN8CCoronas14RegisterCoronaEjP7CEntityhhhhRK7CVectorffP9RwTexturehhhhfbfbfbb
// Demangled: CCoronas::RegisterCorona(uint,CEntity *,uchar,uchar,uchar,uchar,CVector const&,float,float,RwTexture *,uchar,uchar,uchar,uchar,float,bool,float,bool,float,bool,bool)
_DWORD *__fastcall CCoronas::RegisterCorona(
        int a1,
        CMatrix **this,
        char a3,
        char a4,
        char a5,
        unsigned int a6,
        int a7,
        float a8,
        float a9,
        int a10,
        char a11,
        char a12,
        char a13,
        int a14,
        float a15,
        char *a16,
        float a17,
        char a18,
        float a19,
        char a20,
        char a21)
{
  float32x2_t v25; // d16
  float v26; // s0
  _DWORD *result; // r0
  float32x2_t *v28; // r2
  float32x2_t v29; // d16
  unsigned __int64 v30; // d1
  float v31; // s2
  unsigned int v32; // r1
  float v33; // s0
  unsigned __int16 v34; // lr
  char v35; // r6
  int *v36; // r11
  int v37; // r2
  int v38; // r3
  int *v39; // r3
  int v40; // r2
  int v41; // r6
  char v42; // r11
  char *v43; // r2
  char v44; // r0
  char *v45; // r2
  unsigned __int64 v46; // d16
  char v47; // r1
  _BYTE *v48; // r2
  char v49; // t1
  char v50; // r0
  char *v51; // r1
  char v52; // [sp+4h] [bp-3Ch]
  unsigned __int64 v53; // [sp+8h] [bp-38h]
  float v54; // [sp+10h] [bp-30h]

  if ( this )
  {
    if ( !this[5] )
    {
      CPlaceable::AllocateMatrix((CPlaceable *)this);
      CSimpleTransform::UpdateMatrix((CSimpleTransform *)(this + 1), this[5]);
    }
    operator*();
    v25.n64_u64[0] = v53;
    v26 = v54;
  }
  else
  {
    v25.n64_u64[0] = *(unsigned __int64 *)a7;
    v26 = *(float *)(a7 + 8);
  }
  result = &TheCamera;
  v28 = (float32x2_t *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v28 = (float32x2_t *)&qword_951FAC;
  v29.n64_u64[0] = vsub_f32((float32x2_t)v28->n64_u64[0], v25).n64_u64[0];
  v30 = vmul_f32(v29, v29).n64_u64[0];
  v31 = *(float *)&v30 + *((float *)&v30 + 1);
  if ( v31 <= (float)(a9 * a9) )
  {
    result = a16;
    v32 = a6;
    if ( a16 == (_BYTE *)&stderr + 1 )
    {
      v33 = sqrtf(v31 + (float)((float)(v28[1].n64_f32[0] - v26) * (float)(v28[1].n64_f32[0] - v26)));
      if ( v33 < 35.0 )
        return result;
      if ( v33 < 50.0 )
        v32 = (unsigned int)(float)((float)((float)(v33 + -35.0) / 15.0) * (float)a6);
    }
    v34 = 0;
    v35 = a20;
    v36 = &dword_A25B50;
    v37 = 0;
    do
    {
      if ( *v36 == a1 )
      {
        v38 = v37;
        goto LABEL_24;
      }
      ++v34;
      v36 += 15;
      ++v37;
      v38 = v34;
    }
    while ( v34 < 0x40u );
    if ( v34 == 64 )
    {
      if ( !v32 )
        return result;
      v34 = 0;
      v39 = &dword_A25B50;
      v40 = 0;
      do
      {
        if ( !*v39 )
        {
          v41 = v40;
          goto LABEL_27;
        }
        ++v34;
        v39 += 15;
        ++v40;
        v41 = v34;
      }
      while ( v34 < 0x40u );
      if ( v34 == 64 )
        return result;
LABEL_27:
      v42 = (char)a16;
      v43 = (char *)&CCoronas::aCoronas + 60 * v41;
      v52 = v43[54];
      v44 = v43[52];
      v43[48] = -a18;
      v43[53] = 1;
      *((_DWORD *)v43 + 3) = a1;
      v43[52] = v44 | 2;
      v35 = a20;
      v43[54] = v52 & 0xFB;
      ++CCoronas::NumCoronas;
      goto LABEL_28;
    }
LABEL_24:
    v42 = (char)a16;
    if ( !((*((unsigned __int8 *)&CCoronas::aCoronas + 60 * v38 + 48) | v32) << 24) )
    {
      *((_DWORD *)&CCoronas::aCoronas + 15 * v38 + 3) = 0;
      return (_DWORD *)--CCoronas::NumCoronas;
    }
LABEL_28:
    v45 = (char *)&CCoronas::aCoronas + 60 * v34;
    v45[45] = a4;
    v45[44] = a3;
    v45[46] = a5;
    v45[47] = v32;
    v46 = *(_QWORD *)a7;
    v47 = v45[52];
    *((_DWORD *)v45 + 2) = *(_DWORD *)(a7 + 8);
    v45[49] = 1;
    *((float *)v45 + 5) = a8;
    *((float *)v45 + 6) = a15;
    *((float *)v45 + 7) = a9;
    *((_DWORD *)v45 + 4) = a10;
    v45[50] = a11;
    v45[51] = a12;
    *(_QWORD *)v45 = v46;
    v45[52] = v47 & 0xFE | a13 & 1;
    v49 = v45[54];
    v48 = v45 + 54;
    *(float *)(v48 - 22) = a17;
    *(float *)(v48 - 14) = a19;
    v50 = v49 & 0xF4 | v42 | (8 * a21) | (2 * v35);
    *v48 = v50;
    if ( this )
    {
      *v48 = v50 | 0x10;
      v51 = (char *)&CCoronas::aCoronas + 60 * v34;
      *((_DWORD *)v51 + 14) = this;
      return (_DWORD *)CEntity::RegisterReference((CEntity *)this, (CEntity **)v51 + 14);
    }
    else
    {
      *v48 = v50 & 0xEF;
      result = (_DWORD *)((char *)&CCoronas::aCoronas + 60 * v34);
      result[14] = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5a3d28
// Original: _ZN8CCoronas17UpdateCoronaCoorsEjRK7CVectorff
// Demangled: CCoronas::UpdateCoronaCoors(uint,CVector const&,float,float)
char *__fastcall CCoronas::UpdateCoronaCoors(char *this, float32x2_t *a2, const CVector *a3, float a4, float a5)
{
  float32x2_t *v5; // r4
  float32x2_t v6; // d16
  unsigned __int64 v7; // d1
  int v9; // lr
  int *v10; // r3
  unsigned __int16 i; // r2
  int v12; // r12
  float32x2_t v13; // d16

  v5 = (float32x2_t *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v5 = (float32x2_t *)&qword_951FAC;
  v6.n64_u64[0] = vsub_f32((float32x2_t)v5->n64_u64[0], (float32x2_t)a2->n64_u64[0]).n64_u64[0];
  v7 = vmul_f32(v6, v6).n64_u64[0];
  if ( (float)(*(float *)&v7 + *((float *)&v7 + 1)) <= (float)(*(float *)&a3 * *(float *)&a3) )
  {
    v9 = 0;
    v10 = &dword_A25B50;
    for ( i = 0; i < 0x40u; v12 = i )
    {
      if ( (char *)*v10 == this )
      {
        v12 = v9;
        goto LABEL_10;
      }
      ++i;
      v10 += 15;
      ++v9;
    }
    if ( i == 64 )
      return this;
LABEL_10:
    v13.n64_u64[0] = a2->n64_u64[0];
    this = (char *)&CCoronas::aCoronas + 60 * v12;
    *((_DWORD *)this + 2) = a2[1].n64_u32[0];
    *(float32x2_t *)this = v13;
    *((float *)this + 6) = a4;
  }
  return this;
}


// ============================================================

// Address: 0x5a3dd0
// Original: _ZN8CCoronas12DoSunAndMoonEv
// Demangled: CCoronas::DoSunAndMoon(void)
int *__fastcall CCoronas::DoSunAndMoon(CCoronas *this)
{
  float *v1; // r0
  double v2; // d16
  float v3; // s2
  float *v4; // r2
  float v5; // s10
  float v6; // s12
  int *result; // r0
  double v8; // [sp+48h] [bp-40h] BYREF
  float v9; // [sp+50h] [bp-38h]
  _DWORD v10[3]; // [sp+54h] [bp-34h] BYREF
  _BYTE v11[4]; // [sp+60h] [bp-28h] BYREF
  _BYTE v12[36]; // [sp+64h] [bp-24h] BYREF

  v1 = &CTimeCycle::m_VectorToSun[3 * CTimeCycle::m_CurrentStoredValue];
  v9 = v1[2];
  v2 = *(double *)v1;
  v3 = (float)(*(float *)&CDraw::ms_fFarClipZ * 0.95) * v9;
  v8 = *(double *)v1;
  v4 = (float *)(dword_951FBC + 48);
  v9 = v3;
  if ( !dword_951FBC )
    v4 = (float *)&qword_951FAC;
  v5 = v4[1];
  v6 = v4[2];
  *(float *)&v8 = *v4 + (float)(*(float *)&v2 * (float)(*(float *)&CDraw::ms_fFarClipZ * 0.95));
  *((float *)&v8 + 1) = v5 + (float)((float)(*(float *)&CDraw::ms_fFarClipZ * 0.95) * *((float *)&v2 + 1));
  v9 = v6 + v3;
  result = (int *)CGame::CanSeeOutSideFromCurrArea((CGame *)&TheCamera);
  if ( result == (int *)((char *)&stderr + 1) )
  {
    if ( CTimeCycle::m_VectorToSun[3 * CTimeCycle::m_CurrentStoredValue + 2] > -0.1 )
    {
      CCoronas::RegisterCorona(
        1,
        0,
        (unsigned __int8)word_96657C,
        (unsigned __int8)word_96657E,
        (unsigned __int8)word_966580,
        255,
        (int)&v8,
        (float)(unk_966588 / 10.0) * 27.335,
        1000000.0,
        gpCoronaTexture[0],
        0,
        0,
        0,
        0,
        0.0,
        0,
        1.5,
        0,
        15.0,
        0,
        0);
      if ( CTimeCycle::m_VectorToSun[3 * CTimeCycle::m_CurrentStoredValue + 2] > 0.0 && !CGame::currArea )
        CCoronas::RegisterCorona(
          2,
          0,
          (unsigned __int8)word_966582,
          (unsigned __int8)word_966584,
          (unsigned __int8)word_966586,
          255,
          (int)&v8,
          (float)(unk_966588 / 10.0) * 60.0,
          1000000.0,
          gpCoronaTexture[0],
          1,
          0,
          1,
          0,
          0.0,
          0,
          1.5,
          0,
          15.0,
          0,
          0);
    }
    if ( CSprite::CalcScreenCoors((int)&v8, (int)v10, (int)v12, (int)v11, 1, 1) == 1 )
    {
      result = &CCoronas::SunScreenX;
      CCoronas::SunScreenX = v10[0];
      CCoronas::SunScreenY = v10[1];
    }
    else
    {
      result = &CCoronas::SunScreenX;
      CCoronas::SunScreenX = 1232348160;
      CCoronas::SunScreenY = 1232348160;
    }
  }
  return result;
}


// ============================================================
