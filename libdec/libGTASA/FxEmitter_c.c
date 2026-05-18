
// Address: 0x199e44
// Original: j__ZN11FxEmitter_c14CreateParticleEP14EmissionInfo_tP11RwMatrixTagP5RwV3dfP11FxPrtMult_cfh
// Demangled: FxEmitter_c::CreateParticle(EmissionInfo_t *,RwMatrixTag *,RwV3d *,float,FxPrtMult_c *,float,uchar)
// attributes: thunk
int __fastcall FxEmitter_c::CreateParticle(int a1, int a2, int a3, int a4, float a5, int a6, float a7, int a8)
{
  return _ZN11FxEmitter_c14CreateParticleEP14EmissionInfo_tP11RwMatrixTagP5RwV3dfP11FxPrtMult_cfh(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}


// ============================================================

// Address: 0x3689d4
// Original: _ZN11FxEmitter_c4InitEP10FxPrimBP_cP10FxSystem_c
// Demangled: FxEmitter_c::Init(FxPrimBP_c *,FxSystem_c *)
int __fastcall FxEmitter_c::Init(FxEmitter_c *this, FxPrimBP_c *a2, FxSystem_c *a3)
{
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = a3;
  *((_DWORD *)this + 4) = 0;
  return 1;
}


// ============================================================

// Address: 0x3689e0
// Original: _ZN11FxEmitter_c6UpdateEff
// Demangled: FxEmitter_c::Update(float,float)
int __fastcall FxEmitter_c::Update(int this, float a2, float a3)
{
  if ( *(_BYTE *)(this + 12) )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(this + 8) + 102) & 8) == 0 )
      return FxEmitter_c::CreateParticles((FxEmitter_c *)this, a2, a3);
  }
  return this;
}


// ============================================================

// Address: 0x3689f8
// Original: _ZN11FxEmitter_c15CreateParticlesEff
// Demangled: FxEmitter_c::CreateParticles(float,float)
int *__fastcall FxEmitter_c::CreateParticles(FxEmitter_c *this, int a2, int a3)
{
  __int64 v5; // r0
  unsigned int v6; // s4
  float v7; // s0
  unsigned int v8; // r0
  float v9; // s2
  float v10; // s6
  float v11; // s2
  float v12; // s4
  int *result; // r0
  float v14; // s0
  int v15; // r9
  _QWORD *v16; // r8
  int v17; // r0
  __int64 v18; // d16
  __int64 v19; // d17
  __int64 v20; // d20
  __int64 v21; // d21
  __int64 v22; // d23
  __int64 v23; // d18
  __int64 v24; // d19
  int v25; // r6
  float v26; // s0
  int v27; // r0
  int v28; // r6
  _BYTE v29[28]; // [sp+14h] [bp-ACh] BYREF
  float v30[36]; // [sp+30h] [bp-90h] BYREF

  FxInfoManager_c::ProcessEmissionInfo(
    *((_DWORD *)this + 1) + 44,
    a2,
    a3,
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 2) + 8) + 12),
    *(unsigned __int8 *)(*((_DWORD *)this + 2) + 86),
    (int)v30);
  v5 = *(_QWORD *)((char *)this + 4);
  v6 = *(unsigned __int16 *)(v5 + 56);
  v7 = (float)*(unsigned __int16 *)(HIDWORD(v5) + 98) / 1000.0;
  if ( !dword_6E03FC )
    v7 = v7 * 0.5;
  v8 = *(unsigned __int16 *)(v5 + 58);
  v9 = (float)v6 * 0.015625;
  if ( dword_6E03FC == 1 )
    v7 = v7 * 0.75;
  v10 = *(float *)(HIDWORD(v5) + 92);
  if ( v10 >= v9 )
  {
    v12 = (float)v8 * 0.015625;
    if ( v10 <= v12 )
      v11 = 1.0 - (float)((float)(v10 - v9) / (float)(v12 - v9));
    else
      v11 = 0.0;
  }
  else
  {
    v11 = 1.0;
  }
  result = &CWeather::Wind;
  v14 = *((float *)this + 4) + (float)(v7 * (float)(v11 * v30[0]));
  *((float *)this + 4) = v14;
  if ( *(float *)&CWeather::Wind >= v30[22] && *(float *)&CWeather::Wind <= v30[23] )
  {
    result = &CWeather::Rain;
    if ( *(float *)&CWeather::Rain >= v30[24] && v14 >= 1.0 && *(float *)&CWeather::Rain <= v30[25] )
    {
      v15 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
      v16 = (_QWORD *)FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
      TestMatrix(*((_DWORD *)this + 2) + 20);
      RwMatrixUpdate(*((_DWORD *)this + 2) + 20);
      v17 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)(v17 + 12) )
      {
        RwMatrixMultiply();
      }
      else
      {
        v18 = *(_QWORD *)(v17 + 20);
        v19 = *(_QWORD *)(v17 + 28);
        v20 = *(_QWORD *)(v17 + 36);
        v21 = *(_QWORD *)(v17 + 44);
        v22 = *(_QWORD *)(v17 + 76);
        v23 = *(_QWORD *)(v17 + 52);
        v24 = *(_QWORD *)(v17 + 60);
        v16[6] = *(_QWORD *)(v17 + 68);
        v16[7] = v22;
        v16[4] = v23;
        v16[5] = v24;
        *v16 = v18;
        v16[1] = v19;
        v16[2] = v20;
        v16[3] = v21;
      }
      v25 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
      FxPrimBP_c::GetRWMatrix();
      RwMatrixMultiply();
      FxManager_c::FxRwMatrixDestroy(&g_fxMan, v25);
      v26 = *((float *)this + 4);
      v27 = (int)v26;
      if ( (int)v26 >= 1 )
      {
        v28 = 0;
        do
        {
          FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v29);
          FxEmitter_c::CreateParticle(
            (int)this,
            (int)v30,
            v15,
            0,
            (float)((float)v28 * *(float *)&a3) / *((float *)this + 4),
            (int)v29,
            1.2,
            (*(unsigned __int8 *)(*((_DWORD *)this + 2) + 102) >> 1) & 1);
          v26 = *((float *)this + 4);
          ++v28;
          v27 = (int)v26;
        }
        while ( v28 < (int)v26 );
      }
      *((float *)this + 4) = v26 - (float)v27;
      FxManager_c::FxRwMatrixDestroy(&g_fxMan, v16);
      return (int *)FxManager_c::FxRwMatrixDestroy(&g_fxMan, v15);
    }
  }
  return result;
}


// ============================================================

// Address: 0x368c98
// Original: _ZN11FxEmitter_c5ResetEv
// Demangled: FxEmitter_c::Reset(void)
int __fastcall FxEmitter_c::Reset(int this)
{
  *(_DWORD *)(this + 16) = 0;
  return this;
}


// ============================================================

// Address: 0x368ca0
// Original: _ZN11FxEmitter_c11AddParticleEP5RwV3dS1_fP11FxPrtMult_cffh
// Demangled: FxEmitter_c::AddParticle(RwV3d *,RwV3d *,float,FxPrtMult_c *,float,float,uchar)
int __fastcall FxEmitter_c::AddParticle(int a1, _DWORD *a2, int a3, float a4, int a5, float a6, float a7, int a8)
{
  int v11; // r9
  _QWORD *v12; // r11
  _DWORD *v13; // r4
  __int64 v14; // d16
  __int64 v15; // d17
  __int64 v16; // d20
  __int64 v17; // d21
  __int64 v18; // d23
  __int64 v19; // d18
  __int64 v20; // d19
  int v21; // r5
  int Particle; // r0
  _BYTE v25[160]; // [sp+18h] [bp-A0h] BYREF

  FxInfoManager_c::ProcessEmissionInfo(
    *(_DWORD *)(a1 + 4) + 44,
    0,
    0,
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) + 12),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 86),
    (int)v25);
  v11 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  v12 = (_QWORD *)FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  v13 = (_DWORD *)FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  *v13 = 1065353216;
  v13[1] = 0;
  v13[4] = 0;
  v13[5] = 1065353216;
  v13[2] = 0;
  v13[6] = 0;
  v13[8] = 0;
  v13[9] = 0;
  v13[10] = 1065353216;
  v13[12] = 0;
  v13[13] = 0;
  v13[14] = 0;
  v13[3] |= 0x20003u;
  v13[12] = *a2;
  v13[13] = a2[1];
  v13[14] = a2[2];
  RwMatrixUpdate(v13);
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12) )
  {
    RwMatrixMultiply();
  }
  else
  {
    v14 = *(_QWORD *)v13;
    v15 = *((_QWORD *)v13 + 1);
    v16 = *((_QWORD *)v13 + 2);
    v17 = *((_QWORD *)v13 + 3);
    v18 = *((_QWORD *)v13 + 7);
    v19 = *((_QWORD *)v13 + 4);
    v20 = *((_QWORD *)v13 + 5);
    v12[6] = *((_QWORD *)v13 + 6);
    v12[7] = v18;
    v12[4] = v19;
    v12[5] = v20;
    *v12 = v14;
    v12[1] = v15;
    v12[2] = v16;
    v12[3] = v17;
  }
  v21 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  FxPrimBP_c::GetRWMatrix();
  RwMatrixMultiply();
  FxManager_c::FxRwMatrixDestroy(&g_fxMan, v21);
  Particle = FxEmitter_c::CreateParticle(a1, (int)v25, v11, a3, a4, a5, a7, a8);
  if ( a6 >= 0.0 && Particle )
    *(_BYTE *)(Particle + 54) = (unsigned int)(float)(a6 * 0.5);
  FxManager_c::FxRwMatrixDestroy(&g_fxMan, v13);
  FxManager_c::FxRwMatrixDestroy(&g_fxMan, v12);
  return FxManager_c::FxRwMatrixDestroy(&g_fxMan, v11);
}


// ============================================================

// Address: 0x368e24
// Original: _ZN11FxEmitter_c14CreateParticleEP14EmissionInfo_tP11RwMatrixTagP5RwV3dfP11FxPrtMult_cfh
// Demangled: FxEmitter_c::CreateParticle(EmissionInfo_t *,RwMatrixTag *,RwV3d *,float,FxPrtMult_c *,float,uchar)
int __fastcall FxEmitter_c::CreateParticle(
        int a1,
        float *a2,
        float *a3,
        int a4,
        float a5,
        float *a6,
        float a7,
        char a8)
{
  int Particle; // r5
  float v12; // s20
  float v13; // s22
  int v14; // r0
  float v15; // s2
  unsigned int v16; // s0
  int v17; // r0
  float v18; // s24
  float v19; // s0
  int v20; // r0
  float v21; // s2
  float v22; // s24
  int v23; // r8
  float v24; // s26
  float v25; // s28
  float v26; // s30
  int v27; // r9
  float v28; // s17
  float v29; // s19
  float v30; // s21
  int v31; // s0
  float v32; // s4
  int v33; // r0
  int v34; // r8
  float v35; // s6
  float v36; // s4
  float v37; // s2
  float v38; // s0
  float v39; // s24
  float v40; // s26
  float v41; // s28
  float v42; // s30
  float v43; // s0
  float v44; // s4
  float v45; // s4
  float v46; // s2
  float v47; // s0
  __int64 v48; // d16
  float v49; // s0
  float v50; // s4
  float v51; // s2
  float v52; // s20
  float v53; // s0
  float v56; // [sp+28h] [bp-78h]
  float v57; // [sp+2Ch] [bp-74h]
  float v58; // [sp+30h] [bp-70h]

  Particle = FxManager_c::GetParticle((FxManager_c *)&g_fxMan, 0);
  if ( !Particle && (*(_BYTE *)(*(_DWORD *)(a1 + 8) + 102) & 0x20) != 0 )
  {
    FxManager_c::FreeUpParticle((FxManager_c *)&g_fxMan);
    Particle = FxManager_c::GetParticle((FxManager_c *)&g_fxMan, 0);
  }
  if ( Particle )
  {
    v12 = a6[6];
    v13 = a2[15];
    v14 = rand();
    v15 = a2[16];
    *(_DWORD *)(Particle + 12) = 0;
    *(float *)(Particle + 8) = v12
                             * (float)(v13 + (float)(v15 * (float)((float)((float)(v14 % 10000) * 0.0002) + -1.0)));
    *(_DWORD *)(Particle + 40) = *(_DWORD *)(a1 + 8);
    *(_BYTE *)(Particle + 44) = (unsigned int)(float)(*a6 * 255.0);
    *(_BYTE *)(Particle + 45) = (unsigned int)(float)(a6[1] * 255.0);
    *(_BYTE *)(Particle + 46) = (unsigned int)(float)(a6[2] * 255.0);
    *(_BYTE *)(Particle + 47) = (unsigned int)(float)(a6[3] * 255.0);
    *(_BYTE *)(Particle + 48) = (unsigned int)(float)(a6[4] * 255.0);
    v16 = (unsigned int)(float)(a6[5] * 255.0);
    *(_BYTE *)(Particle + 55) = a8;
    *(_BYTE *)(Particle + 49) = v16;
    *(_BYTE *)(Particle + 50) = (unsigned int)(float)((float)((float)((float)(rand() % 10000) * 0.0001) * 255.0) + 0.0);
    *(_BYTE *)(Particle + 51) = (unsigned int)(float)((float)((float)((float)(rand() % 10000) * 0.0001) * 255.0) + 0.0);
    v17 = rand();
    *(_BYTE *)(Particle + 53) = (unsigned int)(float)(a7 * 100.0);
    *(_BYTE *)(Particle + 52) = (unsigned int)(float)((float)((float)((float)(v17 % 10000) * 0.0001) * 255.0) + 0.0);
    v18 = a2[20];
    v19 = (float)(rand() % 10000);
    v20 = *(unsigned __int8 *)(Particle + 55);
    v21 = a2[21] - a2[20];
    *(_BYTE *)(Particle + 54) = -1;
    *(float *)(Particle + 56) = v18 + (float)(v21 * (float)((float)(v19 * 0.0001) + 0.0));
    if ( v20 )
      FxPrimBP_c::GetRWMatrix();
    if ( fabsf(a2[1]) >= 0.001 )
    {
      v39 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
      v40 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
      v41 = (float)((float)(rand() % 10000) * 0.0002) + -1.0;
      v42 = 1.0 / sqrtf((float)((float)(v39 * v39) + (float)(v40 * v40)) + (float)(v41 * v41));
      v43 = a2[1];
      if ( v43 >= 0.0 )
      {
        v42 = v42 * (float)((float)((float)(rand() % 10000) * 0.0001) + 0.0);
        v43 = a2[1];
      }
      v44 = v42 * v43;
      v33 = a4;
      v34 = a1;
      v38 = v41 * (float)(v42 * v43);
      v37 = v40 * v44;
      v36 = v39 * v44;
    }
    else
    {
      v22 = a2[2];
      v23 = rand();
      v24 = a2[2];
      v25 = a2[3];
      v26 = a2[5];
      v27 = rand();
      v28 = a2[3];
      v29 = a2[4];
      v30 = a2[6];
      v31 = v23 % 10000;
      v32 = (float)(rand() % 10000);
      v33 = a4;
      v34 = a1;
      v35 = (float)(a2[7] - a2[4]) * (float)((float)(v32 * 0.0001) + 0.0);
      v36 = v22 + (float)((float)(v26 - v24) * (float)((float)((float)v31 * 0.0001) + 0.0));
      v37 = v25 + (float)((float)(v30 - v28) * (float)((float)((float)(v27 % 10000) * 0.0001) + 0.0));
      v38 = v29 + v35;
    }
    v45 = v36 + a2[17];
    v46 = v37 + a2[18];
    v47 = v38 + a2[19];
    *(float *)(Particle + 16) = (float)((float)(a3[12] + (float)(v45 * *a3)) + (float)(v46 * a3[4]))
                              + (float)(v47 * a3[8]);
    *(float *)(Particle + 20) = (float)((float)(a3[13] + (float)(v45 * a3[1])) + (float)(v46 * a3[5]))
                              + (float)(v47 * a3[9]);
    *(float *)(Particle + 24) = (float)((float)(a3[14] + (float)(v45 * a3[2])) + (float)(v46 * a3[6]))
                              + (float)(v47 * a3[10]);
    if ( v33 )
    {
      v48 = *(_QWORD *)v33;
      *(_DWORD *)(Particle + 36) = *(_DWORD *)(v33 + 8);
      v49 = *(float *)(Particle + 36);
      *(_QWORD *)(Particle + 28) = v48;
      v50 = *(float *)(Particle + 28);
      v51 = *(float *)(Particle + 32);
    }
    else
    {
      rand();
      rand();
      if ( a2[10] <= 10.0 )
        RwV3dNormalize();
      RwV3dTransformVectors();
      RotateVecIntoVec();
      v52 = a2[8];
      v53 = v52 + (float)(a2[9] * (float)((float)((float)(rand() % 10000) * 0.0002) + -1.0));
      v50 = v56 * v53;
      v51 = v57 * v53;
      v49 = v58 * v53;
      *(float *)(Particle + 28) = v50;
      *(float *)(Particle + 32) = v51;
      *(float *)(Particle + 36) = v49;
    }
    *(float *)(Particle + 28) = *(float *)(*(_DWORD *)(v34 + 8) + 108) + v50;
    *(float *)(Particle + 32) = *(float *)(*(_DWORD *)(v34 + 8) + 112) + v51;
    *(float *)(Particle + 36) = *(float *)(*(_DWORD *)(v34 + 8) + 116) + v49;
    FxEmitterBP_c::UpdateParticle(*(FxEmitterBP_c **)(v34 + 4), a5, (FxEmitterPrt_c *)Particle);
    List_c::AddItem((List_c *)(*(_DWORD *)(v34 + 4) + 32), (ListItem_c *)Particle);
  }
  return Particle;
}


// ============================================================

// Address: 0x36950c
// Original: _ZN11FxEmitter_c11AddParticleEP11RwMatrixTagP5RwV3dfP11FxPrtMult_cffh
// Demangled: FxEmitter_c::AddParticle(RwMatrixTag *,RwV3d *,float,FxPrtMult_c *,float,float,uchar)
int __fastcall FxEmitter_c::AddParticle(int a1, __int64 *a2, int a3, float a4, int a5, float a6, float a7, int a8)
{
  int v11; // r9
  _QWORD *v12; // r11
  _DWORD *v13; // r4
  __int64 v14; // d16
  __int64 v15; // d17
  __int64 v16; // d18
  __int64 v17; // d19
  __int64 v18; // d20
  __int64 v19; // d21
  __int64 v20; // d23
  __int64 v21; // d16
  __int64 v22; // d17
  __int64 v23; // d20
  __int64 v24; // d21
  __int64 v25; // d23
  __int64 v26; // d18
  __int64 v27; // d19
  int v28; // r5
  int Particle; // r0
  _BYTE v32[160]; // [sp+18h] [bp-A0h] BYREF

  FxInfoManager_c::ProcessEmissionInfo(
    *(_DWORD *)(a1 + 4) + 44,
    0,
    0,
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 8) + 12),
    *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + 86),
    (int)v32);
  v11 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  v12 = (_QWORD *)FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  v13 = (_DWORD *)FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  *v13 = 1065353216;
  v13[1] = 0;
  v13[2] = 0;
  v13[9] = 0;
  v13[10] = 1065353216;
  v13[5] = 1065353216;
  v13[6] = 0;
  v13[13] = 0;
  v13[14] = 0;
  v13[4] = 0;
  v13[12] = 0;
  v13[8] = 0;
  v13[3] |= 0x20003u;
  v14 = *a2;
  v15 = a2[1];
  v16 = a2[2];
  v17 = a2[3];
  v18 = a2[6];
  v19 = a2[7];
  v20 = a2[5];
  *((_QWORD *)v13 + 4) = a2[4];
  *((_QWORD *)v13 + 5) = v20;
  *((_QWORD *)v13 + 6) = v18;
  *((_QWORD *)v13 + 7) = v19;
  *(_QWORD *)v13 = v14;
  *((_QWORD *)v13 + 1) = v15;
  *((_QWORD *)v13 + 2) = v16;
  *((_QWORD *)v13 + 3) = v17;
  RwMatrixUpdate(v13);
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 12) )
  {
    RwMatrixMultiply();
  }
  else
  {
    v21 = *(_QWORD *)v13;
    v22 = *((_QWORD *)v13 + 1);
    v23 = *((_QWORD *)v13 + 2);
    v24 = *((_QWORD *)v13 + 3);
    v25 = *((_QWORD *)v13 + 7);
    v26 = *((_QWORD *)v13 + 4);
    v27 = *((_QWORD *)v13 + 5);
    v12[6] = *((_QWORD *)v13 + 6);
    v12[7] = v25;
    v12[4] = v26;
    v12[5] = v27;
    *v12 = v21;
    v12[1] = v22;
    v12[2] = v23;
    v12[3] = v24;
  }
  TestMatrix(v12);
  v28 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
  FxPrimBP_c::GetRWMatrix();
  RwMatrixMultiply();
  FxManager_c::FxRwMatrixDestroy(&g_fxMan, v28);
  TestMatrix(v11);
  Particle = FxEmitter_c::CreateParticle(a1, (int)v32, v11, a3, a4, a5, a7, a8);
  if ( a6 >= 0.0 && Particle )
    *(_BYTE *)(Particle + 54) = (unsigned int)(float)(a6 * 0.5);
  FxManager_c::FxRwMatrixDestroy(&g_fxMan, v13);
  FxManager_c::FxRwMatrixDestroy(&g_fxMan, v12);
  return FxManager_c::FxRwMatrixDestroy(&g_fxMan, v11);
}


// ============================================================

// Address: 0x3696c4
// Original: _ZN11FxEmitter_cD0Ev
// Demangled: FxEmitter_c::~FxEmitter_c()
void __fastcall FxEmitter_c::~FxEmitter_c(FxEmitter_c *this)
{
  void *v1; // r0

  FxPrim_c::~FxPrim_c(this);
  operator delete(v1);
}


// ============================================================
