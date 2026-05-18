
// Address: 0x18ed2c
// Original: j__ZN6CBirds13HandleGunShotEPK7CVectorS2_
// Demangled: CBirds::HandleGunShot(CVector const*,CVector const*)
// attributes: thunk
int __fastcall CBirds::HandleGunShot(CBirds *this, const CVector *a2, const CVector *a3)
{
  return _ZN6CBirds13HandleGunShotEPK7CVectorS2_(this, a2, a3);
}


// ============================================================

// Address: 0x191038
// Original: j__ZN6CBirds19CreateNumberOfBirdsE7CVectorS0_iib
// Demangled: CBirds::CreateNumberOfBirds(CVector,CVector,int,int,bool)
// attributes: thunk
int CBirds::CreateNumberOfBirds()
{
  return _ZN6CBirds19CreateNumberOfBirdsE7CVectorS0_iib();
}


// ============================================================

// Address: 0x19153c
// Original: j__ZN6CBirds6UpdateEv
// Demangled: CBirds::Update(void)
// attributes: thunk
int __fastcall CBirds::Update(CBirds *this)
{
  return _ZN6CBirds6UpdateEv(this);
}


// ============================================================

// Address: 0x193bb0
// Original: j__ZN6CBirds6RenderEv
// Demangled: CBirds::Render(void)
// attributes: thunk
int __fastcall CBirds::Render(CBirds *this)
{
  return _ZN6CBirds6RenderEv(this);
}


// ============================================================

// Address: 0x194a08
// Original: j__ZN6CBirds4InitEv
// Demangled: CBirds::Init(void)
// attributes: thunk
int __fastcall CBirds::Init(CBirds *this)
{
  return _ZN6CBirds4InitEv(this);
}


// ============================================================

// Address: 0x19f264
// Original: j__ZN6CBirds8ShutdownEv
// Demangled: CBirds::Shutdown(void)
// attributes: thunk
int __fastcall CBirds::Shutdown(CBirds *this)
{
  return _ZN6CBirds8ShutdownEv(this);
}


// ============================================================

// Address: 0x59cf10
// Original: _ZN6CBirds4InitEv
// Demangled: CBirds::Init(void)
void *__fastcall CBirds::Init(CBirds *this)
{
  void *result; // r0

  result = &CBirds::aBirds;
  byte_A23CAF = 0;
  byte_A23C6B = 0;
  byte_A23CF3 = 0;
  byte_A23D37 = 0;
  byte_A23D7B = 0;
  byte_A23DBF = 0;
  CBirds::NumberOfBirds = 0;
  CBirds::bHasBirdBeenShot = 0;
  return result;
}


// ============================================================

// Address: 0x59cf50
// Original: _ZN6CBirds6UpdateEv
// Demangled: CBirds::Update(void)
float __fastcall CBirds::Update(CBirds *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  float *v3; // r0
  float v4; // s16
  float v5; // s18
  int v6; // r4
  float v7; // s20
  int v8; // r5
  char v9; // r9
  float v10; // s24
  float v11; // s22
  float v12; // s26
  float v13; // s20
  float v14; // r4
  float v15; // s0
  float v16; // s24
  float v17; // r0
  char *v18; // r0
  _BYTE *v19; // r0
  int v20; // t1
  float *v21; // r1
  int v22; // r4
  float v23; // s16
  unsigned int v24; // r9
  float v25; // s18
  float v26; // s20
  float result; // r0
  float *v28; // r8
  float v29; // s24
  float v30; // s22
  float v31; // r5
  float v32; // r0
  float v33; // s0
  float *v34; // r5
  float v35; // s8
  float v36; // s0
  float v37; // s10
  float v38; // s4
  float v39; // s6
  float *v40; // [sp+8h] [bp-80h]
  float x; // [sp+18h] [bp-70h]
  float v42; // [sp+24h] [bp-64h] BYREF
  float v43; // [sp+28h] [bp-60h] BYREF
  float v44; // [sp+2Ch] [bp-5Ch]
  int v45; // [sp+30h] [bp-58h]

  v3 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v3 = (float *)&qword_951FAC;
  v4 = *v3;
  v5 = v3[1];
  if ( !CGame::currArea )
  {
    v6 = CBirds::NumberOfBirds;
    if ( CBirds::NumberOfBirds <= 5
      && (unsigned __int8)(CClock::ms_nGameClockHours - 6) <= 0xFu
      && (CTimer::m_FrameCounter & 0x1FF) == 6 )
    {
      v7 = v3[2];
      v8 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)(6 - v6)) + 1;
      if ( *(float *)&dword_952088 < 30.0 )
      {
        v9 = 0;
        if ( v8 < 1 )
          goto LABEL_30;
        goto LABEL_16;
      }
      if ( CWeather::WeatherRegion != 4 )
      {
        v9 = 2;
        if ( v8 < 1 )
          goto LABEL_30;
        goto LABEL_16;
      }
      v9 = 1;
      if ( v8 >= 3 - CBirds::NumberOfBirds )
        v8 = 3 - CBirds::NumberOfBirds;
      if ( v8 >= 1 )
      {
LABEL_16:
        rand();
        rand();
        if ( (v9 & 3) == 1 )
        {
          v10 = 15.0;
          v11 = 80.0;
          v12 = 10.0;
        }
        else if ( (v9 & 3) != 0 )
        {
          v10 = 2.0;
          v11 = 40.0;
          v12 = 8.0;
        }
        else
        {
          v10 = 4.0;
          v11 = 45.0;
          v12 = 9.0;
        }
        v13 = v7 + (float)(v10 + (float)(v12 * (float)((float)rand() * 4.6566e-10)));
        if ( v13 > 5.0 )
        {
          if ( (rand() & 1) != 0 )
          {
            v15 = (float)(unsigned __int8)rand() * 0.024531;
          }
          else
          {
            v43 = *(float *)&dword_9528B4;
            v44 = *(float *)&dword_9528B8;
            v45 = 0;
            if ( *(float *)&dword_9528B4 == 0.0 )
              v43 = 0.01;
            CVector::Normalise((CVector *)&v43);
            v14 = atan2f(v43, v44);
            v15 = v14 + (float)((float)((unsigned __int8)rand() - 128) * 0.0039062);
          }
          v16 = sinf(v15);
          v17 = cosf(v15);
          if ( CWaterLevel::GetWaterLevelNoWaves(
                 COERCE_CWATERLEVEL_(v4 + (float)(v11 * v16)),
                 v5 + (float)(v11 * v17),
                 v13,
                 COERCE_FLOAT(&v42),
                 0,
                 0,
                 v40) != 1
            || (float)(v42 + 4.0) < v13 )
          {
            v45 = 0;
            v43 = *(float *)&dword_9528B4;
            v44 = *(float *)&dword_9528B8;
            CVector::Normalise((CVector *)&v43);
            CBirds::CreateNumberOfBirds();
          }
        }
      }
    }
  }
LABEL_30:
  v18 = (char *)&CBirds::aBirds + 68 * (CTimer::m_FrameCounter % 6u);
  v20 = (unsigned __int8)v18[63];
  v19 = v18 + 63;
  if ( v20 )
  {
    v21 = (float *)((char *)&CBirds::aBirds + 68 * (CTimer::m_FrameCounter % 6u));
    if ( (float)((float)((float)(*v21 - v4) * (float)(*v21 - v4)) + (float)((float)(v21[1] - v5) * (float)(v21[1] - v5))) > (float)(v21[13] * v21[13]) )
    {
      *v19 = 0;
      --CBirds::NumberOfBirds;
    }
  }
  v2.n64_u32[0] = 1.0;
  v22 = 0;
  v23 = *(float *)&CTimer::ms_fTimeStep / 50.0;
  v24 = CTimer::m_snTimeInMilliseconds;
  v1.n64_f32[0] = (float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 0.5;
  v25 = vmin_f32(v1, v2).n64_f32[0];
  v26 = 1.0 - v25;
  x = *(float *)&CTimer::ms_fTimeStep * 0.002;
  do
  {
    LODWORD(result) = *((unsigned __int8 *)&CBirds::aBirds + v22 + 63);
    if ( *((_BYTE *)&CBirds::aBirds + v22 + 63) )
    {
      LODWORD(result) = *((unsigned __int8 *)&CBirds::aBirds + v22 + 56);
      if ( LODWORD(result) == 1 )
      {
        result = *(float *)((char *)&CBirds::aBirds + v22 + 40);
        if ( v24 > LODWORD(result) )
        {
          v28 = (float *)((char *)&CBirds::aBirds + v22);
          v29 = *(float *)((char *)&CBirds::aBirds + v22 + 24);
          v30 = *(float *)((char *)&CBirds::aBirds + v22 + 28);
          if ( *((_BYTE *)&CBirds::aBirds + v22 + 64) )
          {
            v31 = cosf(x);
            v32 = sinf(x);
            v33 = v29 * v32;
            v29 = (float)(v29 * v31) + (float)(v30 * v32);
            v30 = (float)(v30 * v31) - v33;
            v28[6] = v29;
            v28[7] = v30;
          }
          v34 = (float *)((char *)&CBirds::aBirds + v22);
          v35 = (float)(v29 * v25) + (float)(*(float *)((char *)&CBirds::aBirds + v22 + 12) * v26);
          v36 = (float)(v30 * v25) + (float)(*(float *)((char *)&CBirds::aBirds + v22 + 16) * v26);
          v37 = (float)(*(float *)((char *)&CBirds::aBirds + v22 + 32) * v25)
              + (float)(*(float *)((char *)&CBirds::aBirds + v22 + 20) * v26);
          v38 = (float)(v36 * v23) + *(float *)((char *)&CBirds::aBirds + v22 + 4);
          v39 = (float)(v37 * v23) + *(float *)((char *)&CBirds::aBirds + v22 + 8);
          *v34 = *(float *)((char *)&CBirds::aBirds + v22) + (float)(v35 * v23);
          v34[1] = v38;
          v34[2] = v39;
          v34[3] = v35;
          v34[4] = v36;
          v34[5] = v37;
          result = atan2f(v29, v30);
          v34[9] = result;
        }
      }
    }
    v22 += 68;
  }
  while ( v22 != 408 );
  return result;
}


// ============================================================

// Address: 0x59d464
// Original: _ZN6CBirds19CreateNumberOfBirdsE7CVectorS0_iib
// Demangled: CBirds::CreateNumberOfBirds(CVector,CVector,int,int,bool)
float *__fastcall CBirds::CreateNumberOfBirds(
        float a1,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        int a7,
        int a8,
        int a9)
{
  int *v9; // r1
  float *result; // r0
  float v11; // s16
  int v12; // r5
  char *v13; // r8
  int v14; // r0
  int v15; // r10
  float *v16; // r4
  float v17; // s4
  float v18; // s0
  float v19; // s2
  float *v20; // r11
  float v21; // s2
  float v22; // s4
  int v23; // r5
  float v24; // s28
  char *v25; // r8
  float v26; // s31
  int v27; // r5
  int v28; // r6
  float v29; // s2
  float v30; // s0
  float v31; // s2
  float *v32; // r8
  char *v33; // r4
  float v34; // s0
  float v35; // s2
  float v36; // s6
  float v37; // s0
  __int64 v38; // d16
  char v39; // r0
  char v40; // r0
  char *v41; // r4
  float v42; // s0
  float v43; // s2
  float v44; // s6
  float v45; // s0
  __int64 v46; // d16
  char v47; // r0
  char v48; // r0
  int v49; // r4
  float v50; // s0
  char *v51; // r5
  float v52; // s0
  float v53; // s4
  float v54; // s6
  float v55; // s0
  __int64 v56; // d16
  int v57; // r0
  bool v58; // [sp+14h] [bp-CCh]
  int *v62; // [sp+54h] [bp-8Ch]
  int v63; // [sp+58h] [bp-88h]
  float *v64; // [sp+5Ch] [bp-84h]
  float *v65; // [sp+60h] [bp-80h]
  float *v66; // [sp+64h] [bp-7Ch]
  float v67; // [sp+68h] [bp-78h] BYREF
  float v68; // [sp+6Ch] [bp-74h]
  float v69; // [sp+70h] [bp-70h]
  float v70; // [sp+74h] [bp-6Ch] BYREF
  float v71; // [sp+78h] [bp-68h]
  float v72; // [sp+7Ch] [bp-64h]

  v9 = dword_59D94C;
  result = (float *)LODWORD(a5);
  if ( a8 == 1 )
    v9 = &dword_59D94C[1];
  v11 = *(float *)v9;
  v12 = a7;
  v71 = a5;
  if ( !a8 )
    v11 = 45.0;
  v70 = a4;
  v72 = a6;
  if ( a7 >= 1 )
  {
    v66 = (float *)&dword_59D954;
    v65 = (float *)&dword_59D96C;
    v64 = (float *)&dword_59D984;
    while ( 1 )
    {
      v13 = &byte_A23C6B;
      if ( !byte_A23C6B )
        break;
      v13 = &byte_A23CAF;
      if ( !byte_A23CAF )
      {
        v14 = 1;
        goto LABEL_19;
      }
      v13 = &byte_A23CF3;
      if ( !byte_A23CF3 )
      {
        v14 = 2;
        goto LABEL_19;
      }
      if ( !byte_A23D37 )
      {
        v13 = &byte_A23D37;
        v14 = 3;
        goto LABEL_19;
      }
      if ( !byte_A23D7B )
      {
        v13 = &byte_A23D7B;
        v14 = 4;
        goto LABEL_19;
      }
      if ( !byte_A23DBF )
      {
        v13 = &byte_A23DBF;
        v14 = 5;
LABEL_19:
        v15 = 17 * v14;
        v16 = (float *)((char *)&CBirds::aBirds + 68 * v14);
        v17 = v72;
        v18 = v70 - a1;
        v19 = v71 - a2;
        *v16 = a1;
        v16[2] = a3;
        v16[1] = a2;
        v20 = v16 + 1;
        v67 = v18;
        v68 = v19;
        v69 = v17 - a3;
        CVector::Normalise((CVector *)&v67);
        v21 = (float)((float)(v11 * v68) * 2.4) + v16[1];
        v22 = (float)((float)(v11 * v69) * 2.4) + v16[2];
        v70 = (float)((float)(v11 * v67) * 2.4) + *v16;
        v71 = v21;
        v72 = v22;
        if ( !a9
          || CWorld::GetIsLineOfSightClear(
               (CWorld *)v16,
               (const CVector *)&v70,
               (const CVector *)((char *)&stderr + 1),
               0,
               0,
               0,
               0,
               0,
               0,
               v58) == 1 )
        {
          v63 = v12;
          v23 = rand();
          v24 = v67;
          *v13 = 1;
          v25 = (char *)&CBirds::aBirds + 4 * v15;
          v26 = v68;
          v25[56] = 1;
          *((float *)v25 + 9) = atan2f(v24, v26);
          *((_DWORD *)v25 + 10) = 0;
          v27 = v23 % 31;
          v28 = 1000 - 12 * v27;
          *((_DWORD *)v25 + 11) = v28;
          v62 = (int *)(v25 + 44);
          v29 = *v65;
          *v16 = *v66 + *v16;
          v30 = v29 + *v20;
          v31 = *v64;
          *v20 = v30;
          v16[2] = v31 + v16[2];
          v25[64] = 0;
          v32 = (float *)(v25 + 64);
          *(v32 - 3) = v11;
          switch ( a8 )
          {
            case 2:
              v41 = (char *)&CBirds::aBirds + 4 * v15;
              v42 = (float)((float)v27 * 0.02) + 5.0;
              v43 = v42 * v24;
              v44 = v42 * v26;
              v45 = v42 * v69;
              *((float *)v41 + 6) = v43;
              *((float *)v41 + 7) = v44;
              v46 = *((_QWORD *)v41 + 3);
              *((float *)v41 + 8) = v45;
              *((_DWORD *)v41 + 5) = *((_DWORD *)v41 + 8);
              *(_QWORD *)(v41 + 12) = v46;
              v47 = rand() | 0x80;
              v41[59] = v47;
              v41[58] = v47;
              v41[57] = v47;
              v48 = rand() | 0x80;
              v41[62] = v48;
              v41[61] = v48;
              v41[60] = v48;
              *((float *)v41 + 12) = (float)((float)((float)rand() * 4.6566e-10) * 0.1) + 0.5;
              *v62 = 500 - 6 * v27;
              break;
            case 1:
              v49 = 12 * v27;
              v50 = (float)v27;
              v51 = (char *)&CBirds::aBirds + 4 * v15;
              v52 = (float)(v50 * 0.02) + 3.0;
              v53 = v52 * v24;
              v54 = v52 * v26;
              v55 = v52 * v69;
              *((float *)v51 + 6) = v53;
              *((float *)v51 + 7) = v54;
              *((float *)v51 + 8) = v55;
              *(_DWORD *)(v51 + 57) = 1342836510;
              v56 = *((_QWORD *)v51 + 3);
              v57 = *((_DWORD *)v51 + 8);
              *(_WORD *)(v51 + 61) = 2575;
              *((_DWORD *)v51 + 5) = v57;
              *(_QWORD *)(v51 + 12) = v56;
              *((float *)v51 + 12) = (float)((float)((float)rand() * 4.6566e-10) * 0.5) + 2.0;
              *v62 = 1500 - v49;
              if ( (rand() & 4) != 0 )
                *v62 = (int)"ledCollisionBoxSectorListER8CPtrListRK4CBoxRK7CMatrixRK7CVectorPssPP7CEntity";
              if ( (rand() & 8) != 0 )
                *(_BYTE *)v32 = 1;
              break;
            case 0:
              v33 = (char *)&CBirds::aBirds + 4 * v15;
              v34 = (float)((float)v27 * 0.02) + 4.0;
              v35 = v34 * v24;
              v36 = v34 * v26;
              v37 = v34 * v69;
              *((float *)v33 + 6) = v35;
              *((float *)v33 + 7) = v36;
              v38 = *((_QWORD *)v33 + 3);
              *((float *)v33 + 8) = v37;
              *((_DWORD *)v33 + 5) = *((_DWORD *)v33 + 8);
              *(_QWORD *)(v33 + 12) = v38;
              v39 = (rand() & 0x3F) + 80;
              v33[59] = v39;
              v33[58] = v39;
              v33[57] = v39;
              v40 = (rand() & 0x3F) - 76;
              v33[62] = v40;
              v33[61] = v40;
              v33[60] = v40;
              *((float *)v33 + 12) = (float)((float)((float)rand() * 4.6566e-10) * 0.4) + 0.8;
              *v62 = v28;
              break;
          }
          v12 = v63;
          ++CBirds::NumberOfBirds;
        }
      }
      --v12;
      ++v64;
      ++v65;
      result = ++v66;
      if ( !v12 )
        return result;
    }
    v14 = 0;
    goto LABEL_19;
  }
  return result;
}


// ============================================================

// Address: 0x59d9d0
// Original: _ZN6CBirds6RenderEv
// Demangled: CBirds::Render(void)
int __fastcall CBirds::Render(CBirds *this)
{
  unsigned int v1; // r5
  float32x2_t v2; // d9
  float32x2_t v3; // d12
  unsigned int v4; // r4
  int result; // r0
  int v6; // r6
  _BYTE *v7; // r10
  int32x4_t v8; // q7
  int v9; // r8
  char *v10; // r4
  float v11; // r1
  float v12; // r2
  float v13; // r3
  char *v14; // r9
  float v15; // r0
  int v16; // r0
  int v17; // r6
  float *v18; // r0
  float v19; // r11
  float v20; // r8
  float v21; // s20
  float v22; // s0
  char v23; // r0
  int32x4_t v24; // q13
  int v25; // r10
  unsigned int v26; // r0
  int32x4_t v27; // q3
  int32x4_t v28; // q8
  int32x4_t v29; // q0
  int32x4_t v30; // q12
  int32x4_t v31; // q15
  unsigned __int64 v32; // d20
  char *v33; // r1
  int32x4_t v34; // q14
  int32x4_t v35; // q1
  char *v36; // r9
  unsigned int v37; // r8
  unsigned int v38; // r6
  float v39; // s20
  float v40; // s18
  float v41; // r8
  float v42; // s18
  float v43; // r11
  float v44; // r6
  float v45; // r0
  float v46; // s18
  int v47; // r1
  float v48; // s17
  char *v49; // r2
  float32x2_t v50; // d16
  unsigned __int64 v51; // d1
  float v52; // s2
  unsigned int v53; // r0
  float v54; // s20
  unsigned int v55; // r6
  char *v56; // r1
  int v57; // r10
  _BYTE *v58; // r0
  int v59; // r1
  int v60; // r2
  int *v61; // r11
  int *v62; // r9
  float *v63; // r8
  int v64; // r3
  int *v65; // r3
  int v66; // r2
  int v67; // r1
  int v68; // r12
  int v69; // r0
  int v70; // r3
  int v71; // r2
  int *v72; // r2
  int *v73; // r2
  int v74; // r1
  CBrightLights *v75; // r0
  int v76; // [sp+0h] [bp-1C8h] BYREF
  int *v77; // [sp+10h] [bp-1B8h]
  int *v78; // [sp+14h] [bp-1B4h]
  char *v79; // [sp+18h] [bp-1B0h]
  _DWORD *v80; // [sp+1Ch] [bp-1ACh]
  int32x4_t v81; // [sp+20h] [bp-1A8h]
  int *v82; // [sp+30h] [bp-198h]
  char *v83; // [sp+34h] [bp-194h]
  int *v84; // [sp+38h] [bp-190h]
  int *v85; // [sp+3Ch] [bp-18Ch]
  int32x4_t v86; // [sp+40h] [bp-188h]
  int32x4_t v87; // [sp+50h] [bp-178h]
  int32x4_t v88; // [sp+60h] [bp-168h]
  int32x4_t v89; // [sp+70h] [bp-158h]
  unsigned int *v90; // [sp+8Ch] [bp-13Ch]
  int32x4_t v91; // [sp+90h] [bp-138h]
  _BYTE *v92; // [sp+ACh] [bp-11Ch]
  char *v93; // [sp+B0h] [bp-118h]
  unsigned int *v94; // [sp+B4h] [bp-114h]
  int *v95; // [sp+B8h] [bp-110h]
  char *v96; // [sp+BCh] [bp-10Ch]
  int v97; // [sp+C0h] [bp-108h]
  _BYTE *v98; // [sp+C4h] [bp-104h]
  _BYTE *v99; // [sp+C8h] [bp-100h]
  _BYTE *v100; // [sp+CCh] [bp-FCh]
  _BYTE *v101; // [sp+D0h] [bp-F8h]
  _BYTE *v102; // [sp+D4h] [bp-F4h]
  float v103; // [sp+D8h] [bp-F0h]
  int *v104; // [sp+DCh] [bp-ECh]
  int *v105; // [sp+E0h] [bp-E8h]
  int *v106; // [sp+E4h] [bp-E4h]
  float *v107; // [sp+E8h] [bp-E0h]
  float32x2_t *v108; // [sp+ECh] [bp-DCh]
  int v109; // [sp+F0h] [bp-D8h]
  int v110; // [sp+F4h] [bp-D4h]
  int v111; // [sp+F8h] [bp-D0h]
  int v112; // [sp+FCh] [bp-CCh]
  float v113; // [sp+100h] [bp-C8h]
  int v114; // [sp+104h] [bp-C4h]
  float v115; // [sp+108h] [bp-C0h]
  char v116[12]; // [sp+10Ch] [bp-BCh] BYREF
  float v117[12]; // [sp+118h] [bp-B0h] BYREF
  _BYTE v118[8]; // [sp+148h] [bp-80h] BYREF
  float v119; // [sp+150h] [bp-78h]
  int v120; // [sp+158h] [bp-70h]
  int v121; // [sp+15Ch] [bp-6Ch]
  char v122[4]; // [sp+160h] [bp-68h] BYREF
  char v123[4]; // [sp+164h] [bp-64h] BYREF

  v4 = (unsigned int)&v76;
  result = CBirds::NumberOfBirds;
  if ( CBirds::NumberOfBirds )
  {
    v3.n64_u32[0] = 1.0;
    v6 = 0;
    TempBufferVerticesStored = 0;
    v7 = v118;
    TempBufferIndicesStored = 0;
    v98 = &CBirds::aBirds;
    v92 = v118;
    v96 = (char *)&CBirds::aBirds;
    v95 = &CTimer::m_snTimeInMilliseconds;
    v94 = (unsigned int *)&CBirds::aBirds;
    v91.n128_u64[0] = 0x600000000LL;
    v91.n128_u64[1] = 7LL;
    v93 = (char *)&CBirds::aBirds;
    v90 = (unsigned int *)&TempBufferVerticesStored;
    v89.n128_u64[0] = 0x200000003LL;
    v89.n128_u64[1] = 0x500000002LL;
    v88.n128_u64[0] = 0x200000004LL;
    v88.n128_u64[1] = 0x500000003LL;
    v87.n128_u64[0] = 0x100000000LL;
    v87.n128_u64[1] = 3LL;
    v86.n128_u64[0] = 0x200000005LL;
    v86.n128_u64[1] = 0x300000005LL;
    v8.n128_u64[0] = 0x300000000LL;
    v8.n128_u64[1] = 1LL;
    v84 = TempBufferRenderIndexList;
    v85 = &TempBufferIndicesStored;
    v81.n128_u64[0] = 0x300000002LL;
    v81.n128_u64[1] = 0x400000002LL;
    v83 = (char *)&CBirds::aBirds;
    v82 = &CTimer::m_snTimeInMilliseconds;
    v80 = &TheCamera;
    v79 = (char *)&CBirds::aBirds;
    v106 = &TempBufferVerticesStored;
    v105 = TempVertexBuffer;
    v78 = &TempBufferIndicesStored;
    v77 = &TempBufferVerticesStored;
    v104 = &TempBufferVerticesStored;
    do
    {
      v9 = 17 * v6;
      if ( v98[68 * v6 + 63] )
      {
        v109 = v4;
        v120 = 0;
        v121 = 0;
        v10 = &v96[68 * v6];
        v11 = *(float *)v10;
        v12 = *((float *)v10 + 1);
        v13 = *((float *)v10 + 2);
        v108 = (float32x2_t *)(v10 + 4);
        CMatrix::SetTranslate((CMatrix *)v117, v11, v12, v13);
        v107 = (float *)v10;
        v14 = v10 + 56;
        if ( (unsigned __int8)(v10[56] - 1) <= 1u )
        {
          v9 = 17 * v6;
          v15 = sinf((float)(6.28 / (float)v94[17 * v6 + 11]) * (float)((*v95 + 100 * v6) % v94[17 * v6 + 11]));
          v119 = v119 + (float)(v15 * 0.1);
        }
        v16 = CSprite::CalcScreenCoors((int)v7, (int)v116, (int)v123, (int)v122, 0, 1);
        v4 = v109;
        if ( v16 == 1 )
        {
          v97 = v6;
          v17 = v9;
          v18 = (float *)&v93[4 * v9];
          v19 = v18[9];
          v117[8] = 0.0;
          v117[9] = 0.0;
          v20 = v18[12];
          v21 = cosf(v19);
          v2.n64_f32[0] = v20;
          v22 = sinf(v19);
          v23 = *v14;
          v117[10] = v20;
          v117[2] = 0.0;
          v117[6] = 0.0;
          v117[0] = v21 * v20;
          v117[1] = -(float)(v22 * v20);
          v117[4] = v22 * v20;
          v117[5] = v21 * v20;
          if ( (unsigned __int8)(v23 - 1) <= 1u )
          {
            v24 = v91;
            v25 = v17;
            v26 = *v90;
            v27 = v88;
            v28 = vdupq_n_s32(*v90);
            v29 = v87;
            v30 = vdupq_n_s32(*v90 + 8);
            v31 = v86;
            v32 = vmovn_s32(vaddq_s32(v28, v89)).n64_u64[0];
            v33 = (char *)v84 + 2 * *v85;
            v34 = v81;
            v35 = vaddq_s32(v30, v89);
            *(int16x4_t *)v33 = vmovn_s32(vaddq_s32(v28, v8));
            *(int16x4_t *)(v33 + 60) = vmovn_s32(vaddq_s32(v30, v8));
            *((int16x4_t *)v33 + 1) = vmovn_s32(vaddq_s32(v28, v34));
            *((int16x4_t *)v33 + 2) = vmovn_s32(vaddq_s32(v28, v31));
            *(int16x4_t *)(v33 + 68) = vmovn_s32(vaddq_s32(v30, v34));
            *(int16x4_t *)(v33 + 76) = vmovn_s32(vaddq_s32(v30, v31));
            *((int16x4_t *)v33 + 3) = vmovn_s32(vaddq_s32(v28, v29));
            *(int16x4_t *)(v33 + 84) = vmovn_s32(vaddq_s32(v30, v29));
            *((_QWORD *)v33 + 4) = v32;
            *(int16x4_t *)(v33 + 92) = vmovn_s32(v35);
            *((int16x4_t *)v33 + 5) = vmovn_s32(vaddq_s32(v28, v27));
            *(int16x4_t *)(v33 + 100) = vmovn_s32(vaddq_s32(v30, v27));
            *((int16x4_t *)v33 + 6) = vmovn_s32(vaddq_s32(v28, v24));
            *(int16x4_t *)(v33 + 108) = vmovn_s32(vaddq_s32(v30, v24));
            *((_WORD *)v33 + 28) = v26 + 7;
            *((_WORD *)v33 + 58) = v26 + 15;
            *((_WORD *)v33 + 29) = v26 + 6;
            *((_WORD *)v33 + 59) = v26 + 14;
            v36 = &v83[4 * v17];
            v37 = *((_DWORD *)v36 + 11);
            v38 = *v82 + 100 * v97;
            v39 = 6.28 / (float)v37;
            v40 = vmax_f32(v2, v3).n64_f32[0];
            v29.n128_f32[0] = v39 * (float)(v38 % v37);
            v41 = COERCE_FLOAT(COERCE_UNSIGNED_INT(sinf(v39 * (float)((v38 + v37 / 6) % v37))) ^ 0x80000000) / v40;
            v42 = COERCE_FLOAT(COERCE_UNSIGNED_INT(sinf(v29.n128_f32[0])) ^ 0x80000000) / v40;
            v43 = cosf(v41);
            v44 = sinf(v41);
            v103 = cosf(v42);
            v45 = sinf(v42);
            v46 = v44 * 0.5;
            v47 = v80[5];
            v48 = v43 * 0.5;
            v49 = (char *)(v47 + 48);
            if ( !v47 )
              v49 = (char *)(v80 + 1);
            v50.n64_u64[0] = vsub_f32((float32x2_t)v108->n64_u64[0], *(float32x2_t *)(v49 + 4)).n64_u64[0];
            v35.n128_u32[2] = *((_DWORD *)v36 + 13);
            v51 = vmul_f32(v50, v50).n64_u64[0];
            v35.n128_f32[0] = sqrtf(
                                (float)((float)((float)(*v107 - *(float *)v49) * (float)(*v107 - *(float *)v49))
                                      + *(float *)&v51)
                              + *((float *)&v51 + 1));
            v52 = v45 * 0.5;
            if ( v35.n128_f32[0] <= (float)(v35.n128_f32[2] * 0.7) )
            {
              v53 = 255;
            }
            else
            {
              v35.n128_f32[0] = (float)((float)(v35.n128_f32[0] - (float)(v35.n128_f32[2] * 0.7))
                                      / (float)(v35.n128_f32[2] * -0.3))
                              + 1.0;
              v35.n128_u32[2] = 0;
              v53 = (unsigned int)(float)(vmax_f32((float32x2_t)v35.n128_u64[0], *(float32x2_t *)&v35.n128_i8[8]).n64_f32[0]
                                        * 255.0);
            }
            v2.n64_f32[1] = v46 + v52;
            v54 = v48 + (float)(v103 * 0.5);
            LOBYTE(v55) = (_BYTE)v104;
            v56 = &v79[4 * v25];
            v101 = v56 + 62;
            v100 = v56 + 61;
            v99 = v56 + 60;
            v57 = 0;
            v104 = (int *)(v56 + 59);
            LODWORD(v103) = v56 + 58;
            v102 = v56 + 57;
            v107 = (float *)(v53 << 24);
            do
            {
              switch ( v57 )
              {
                case 0:
                case 1:
                case 7:
                  v115 = 0.0;
                  v113 = 0.0;
                  goto LABEL_19;
                case 2:
                case 3:
                  v115 = v46;
                  v113 = v48;
                  goto LABEL_19;
                case 4:
                case 5:
                  v115 = v46 + v52;
                  v113 = v54;
                  LOBYTE(v55) = *v101;
                  LOBYTE(v1) = *v100;
                  v58 = v99;
                  goto LABEL_20;
                case 6:
                  v113 = 0.1;
                  v115 = 0.0;
LABEL_19:
                  LOBYTE(v55) = *(_BYTE *)v104;
                  LOBYTE(v1) = *(_BYTE *)LODWORD(v103);
                  v58 = v102;
LABEL_20:
                  LOBYTE(v4) = *v58;
                  break;
                default:
                  break;
              }
              v114 = dword_59E1CC[v57];
              operator*();
              v59 = v111;
              v60 = v112;
              v61 = v106;
              v62 = v105;
              v63 = v107;
              v64 = 9 * (*v106 + v57);
              v105[9 * *v106 + 9 * v57] = v110;
              v65 = &v62[v64];
              v65[1] = v59;
              v65[2] = v60;
              v65 += 6;
              v67 = dword_59E214[v57];
              v109 = dword_59E1F4[v57];
              v66 = v109;
              v108 = (float32x2_t *)v67;
              *v65 = (unsigned int)v63 | (unsigned __int8)v4 | ((unsigned __int8)v1 << 8) | ((unsigned __int8)v55 << 16);
              v65[1] = v67;
              v65[2] = v66;
              v113 = -v113;
              operator*();
              v68 = v111;
              v69 = *v61;
              v70 = v112;
              v71 = v57 + *v61;
              ++v57;
              v72 = &v62[9 * v71];
              v72[72] = v110;
              v4 = (unsigned int)(float)((float)(unsigned __int8)v4 * 0.8);
              v1 = (unsigned int)(float)((float)(unsigned __int8)v1 * 0.8);
              v72[73] = v68;
              v72[74] = v70;
              v55 = (unsigned int)(float)((float)(unsigned __int8)v55 * 0.8);
              v72[78] = (unsigned int)v63 | v4 | (v1 << 8) | (v55 << 16);
              v72[79] = (int)v108;
              v72[80] = v109;
            }
            while ( v57 != 8 );
            v73 = v78;
            v104 = (int *)v55;
            v74 = *v78;
            *v77 = v69 + 16;
            *v73 = v74 + 60;
          }
          v7 = v92;
          v6 = v97;
        }
        CMatrix::~CMatrix((CMatrix *)v117);
      }
      ++v6;
    }
    while ( v6 != 6 );
    result = TempBufferIndicesStored;
    if ( TempBufferIndicesStored )
    {
      RwRenderStateSet(10, 5);
      RwRenderStateSet(11, 6);
      RwRenderStateSet(2, 3);
      RwRenderStateSet(14, 0);
      RwRenderStateSet(12, 1);
      v75 = (CBrightLights *)RwRenderStateSet(1, *(_DWORD *)dword_A23DEC);
      return CBrightLights::RenderOutGeometryBuffer(v75);
    }
  }
  return result;
}


// ============================================================

// Address: 0x59e244
// Original: _ZN6CBirds8ShutdownEv
// Demangled: CBirds::Shutdown(void)
int *__fastcall CBirds::Shutdown(CBirds *this)
{
  int *result; // r0

  if ( byte_A23C6B )
    byte_A23C6B = 0;
  if ( byte_A23CAF )
    byte_A23CAF = 0;
  if ( byte_A23CF3 )
    byte_A23CF3 = 0;
  if ( byte_A23D37 )
    byte_A23D37 = 0;
  if ( byte_A23D7B )
    byte_A23D7B = 0;
  if ( byte_A23DBF )
    byte_A23DBF = 0;
  result = &CBirds::NumberOfBirds;
  CBirds::NumberOfBirds = 0;
  return result;
}


// ============================================================

// Address: 0x59e314
// Original: _ZN6CBirds13HandleGunShotEPK7CVectorS2_
// Demangled: CBirds::HandleGunShot(CVector const*,CVector const*)
int __fastcall CBirds::HandleGunShot(CBirds *this, const CVector *a2, const CVector *a3)
{
  CCollision *v5; // r0
  CCollision *v6; // r0
  CCollision *v7; // r0
  CCollision *v8; // r0
  CCollision *v9; // r0
  int result; // r0
  CCollision *v11; // r0
  double v12; // [sp+0h] [bp-48h] BYREF
  int v13; // [sp+8h] [bp-40h]
  int v14; // [sp+Ch] [bp-3Ch]
  _BYTE v15[48]; // [sp+18h] [bp-30h] BYREF

  if ( byte_A23C6B )
  {
    CColLine::CColLine((CColLine *)v15, this, a2);
    v13 = dword_A23C34;
    v14 = 1056964608;
    *(_QWORD *)&v12 = CBirds::aBirds;
    if ( CCollision::TestLineSphere(v5, (const CColLine *)&v12, (const CColSphere *)0x3F000000) == 1 )
    {
      CBirds::bHasBirdBeenShot = 1;
      dword_A23DD4 = dword_A23C34;
      byte_A23C6B = 0;
      CBirds::BirdShotAt = CBirds::aBirds;
      --CBirds::NumberOfBirds;
    }
  }
  if ( byte_A23CAF )
  {
    CColLine::CColLine((CColLine *)v15, this, a2);
    v13 = dword_A23C78;
    v14 = 1056964608;
    *(_QWORD *)&v12 = unk_A23C70;
    if ( CCollision::TestLineSphere(v6, (const CColLine *)&v12, (const CColSphere *)0x3F000000) == 1 )
    {
      CBirds::bHasBirdBeenShot = 1;
      byte_A23CAF = 0;
      dword_A23DD4 = dword_A23C78;
      --CBirds::NumberOfBirds;
      CBirds::BirdShotAt = unk_A23C70;
    }
  }
  if ( byte_A23CF3 )
  {
    CColLine::CColLine((CColLine *)v15, this, a2);
    v13 = dword_A23CBC;
    v14 = 1056964608;
    *(_QWORD *)&v12 = unk_A23CB4;
    if ( CCollision::TestLineSphere(v7, (const CColLine *)&v12, (const CColSphere *)0x3F000000) == 1 )
    {
      CBirds::bHasBirdBeenShot = 1;
      byte_A23CF3 = 0;
      dword_A23DD4 = dword_A23CBC;
      --CBirds::NumberOfBirds;
      CBirds::BirdShotAt = unk_A23CB4;
    }
  }
  if ( byte_A23D37 )
  {
    CColLine::CColLine((CColLine *)v15, this, a2);
    v13 = dword_A23D00;
    v14 = 1056964608;
    v12 = *(double *)&algn_A23CF4[4];
    if ( CCollision::TestLineSphere(v8, (const CColLine *)&v12, (const CColSphere *)0x3F000000) == 1 )
    {
      CBirds::bHasBirdBeenShot = 1;
      byte_A23D37 = 0;
      dword_A23DD4 = dword_A23D00;
      --CBirds::NumberOfBirds;
      CBirds::BirdShotAt = *(_QWORD *)&algn_A23CF4[4];
    }
  }
  if ( byte_A23D7B )
  {
    CColLine::CColLine((CColLine *)v15, this, a2);
    v13 = dword_A23D44;
    v14 = 1056964608;
    *(_QWORD *)&v12 = unk_A23D3C;
    if ( CCollision::TestLineSphere(v9, (const CColLine *)&v12, (const CColSphere *)0x3F000000) == 1 )
    {
      CBirds::bHasBirdBeenShot = 1;
      byte_A23D7B = 0;
      dword_A23DD4 = dword_A23D44;
      --CBirds::NumberOfBirds;
      CBirds::BirdShotAt = unk_A23D3C;
    }
  }
  result = (unsigned __int8)byte_A23DBF;
  if ( byte_A23DBF )
  {
    CColLine::CColLine((CColLine *)v15, this, a2);
    v13 = dword_A23D88;
    v14 = 1056964608;
    *(_QWORD *)&v12 = unk_A23D80;
    result = CCollision::TestLineSphere(v11, (const CColLine *)&v12, (const CColSphere *)0x3F000000);
    if ( result == 1 )
    {
      CBirds::bHasBirdBeenShot = 1;
      byte_A23DBF = 0;
      result = CBirds::NumberOfBirds - 1;
      dword_A23DD4 = dword_A23D88;
      --CBirds::NumberOfBirds;
      CBirds::BirdShotAt = unk_A23D80;
    }
  }
  return result;
}


// ============================================================
