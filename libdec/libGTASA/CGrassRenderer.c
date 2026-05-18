
// Address: 0x18ea28
// Original: j__ZN14CGrassRenderer13DrawTriPlantsEP10PPTriPlantiPP8RpAtomicP11RwMatrixTag
// Demangled: CGrassRenderer::DrawTriPlants(PPTriPlant *,int,RpAtomic **,RwMatrixTag *)
// attributes: thunk
int CGrassRenderer::DrawTriPlants()
{
  return _ZN14CGrassRenderer13DrawTriPlantsEP10PPTriPlantiPP8RpAtomicP11RwMatrixTag();
}


// ============================================================

// Address: 0x18f694
// Original: j__ZN14CGrassRenderer10InitialiseEv
// Demangled: CGrassRenderer::Initialise(void)
// attributes: thunk
int __fastcall CGrassRenderer::Initialise(CGrassRenderer *this)
{
  return _ZN14CGrassRenderer10InitialiseEv(this);
}


// ============================================================

// Address: 0x190658
// Original: j__ZN14CGrassRenderer18SetCurrentScanCodeEt
// Demangled: CGrassRenderer::SetCurrentScanCode(ushort)
// attributes: thunk
int __fastcall CGrassRenderer::SetCurrentScanCode(CGrassRenderer *this, unsigned __int16 a2)
{
  return _ZN14CGrassRenderer18SetCurrentScanCodeEt(this, a2);
}


// ============================================================

// Address: 0x1934f8
// Original: j__ZN14CGrassRenderer20SetGlobalWindBendingEf
// Demangled: CGrassRenderer::SetGlobalWindBending(float)
// attributes: thunk
int __fastcall CGrassRenderer::SetGlobalWindBending(CGrassRenderer *this, float a2)
{
  return _ZN14CGrassRenderer20SetGlobalWindBendingEf(this, a2);
}


// ============================================================

// Address: 0x196554
// Original: j__ZN14CGrassRenderer8ShutdownEv
// Demangled: CGrassRenderer::Shutdown(void)
// attributes: thunk
int __fastcall CGrassRenderer::Shutdown(CGrassRenderer *this)
{
  return _ZN14CGrassRenderer8ShutdownEv(this);
}


// ============================================================

// Address: 0x19f0c8
// Original: j__ZN14CGrassRenderer18SetGlobalCameraPosERK7CVector
// Demangled: CGrassRenderer::SetGlobalCameraPos(CVector const&)
// attributes: thunk
int __fastcall CGrassRenderer::SetGlobalCameraPos(CGrassRenderer *this, const CVector *a2)
{
  return _ZN14CGrassRenderer18SetGlobalCameraPosERK7CVector(this, a2);
}


// ============================================================

// Address: 0x2ccee8
// Original: _ZN14CGrassRendererC2Ev
// Demangled: CGrassRenderer::CGrassRenderer(void)
void __fastcall CGrassRenderer::CGrassRenderer(CGrassRenderer *this)
{
  ;
}


// ============================================================

// Address: 0x2cceea
// Original: _ZN14CGrassRendererD2Ev
// Demangled: CGrassRenderer::~CGrassRenderer()
void __fastcall CGrassRenderer::~CGrassRenderer(CGrassRenderer *this)
{
  ;
}


// ============================================================

// Address: 0x2cceec
// Original: _ZN14CGrassRenderer8ShutdownEv
// Demangled: CGrassRenderer::Shutdown(void)
void __fastcall CGrassRenderer::Shutdown(CGrassRenderer *this)
{
  ;
}


// ============================================================

// Address: 0x2cceee
// Original: _ZN14CGrassRenderer18SetCurrentScanCodeEt
// Demangled: CGrassRenderer::SetCurrentScanCode(ushort)
void __fastcall CGrassRenderer::SetCurrentScanCode(CGrassRenderer *this, unsigned __int16 a2)
{
  ;
}


// ============================================================

// Address: 0x2ccef0
// Original: _ZN14CGrassRenderer11AddTriPlantEP10PPTriPlantj
// Demangled: CGrassRenderer::AddTriPlant(PPTriPlant *,uint)
void __fastcall CGrassRenderer::AddTriPlant(void *a1, int a2)
{
  unsigned int v4; // r8
  int v5; // r5
  unsigned int v6; // r5
  unsigned int v7; // r4

  if ( dword_70CB08 != a2 )
  {
    if ( dword_70BF84[0] >= 1 )
    {
      v4 = rand();
      CGrassRenderer::DrawTriPlants();
      dword_70BF84[0] = 0;
      srand(v4);
    }
    dword_70CB08 = a2;
  }
  v5 = dword_70BF84[0];
  if ( dword_70BF84[0] >= 32 )
  {
    v6 = rand();
    CGrassRenderer::DrawTriPlants();
    dword_70BF84[0] = 0;
    srand(v6);
    v5 = dword_70BF84[0];
  }
  memcpy_0(&dword_70BF84[23 * v5 + 1], a1, 0x5Cu);
  if ( dword_70CB08 == a2 )
  {
    dword_70BF84[0] = v5 + 1;
    if ( v5 >= 31 )
    {
      v7 = rand();
      CGrassRenderer::DrawTriPlants();
      dword_70BF84[0] = 0;
      j_srand(v7);
    }
  }
}


// ============================================================

// Address: 0x2cd144
// Original: _ZN14CGrassRenderer19FlushTriPlantBufferEv
// Demangled: CGrassRenderer::FlushTriPlantBuffer(void)
void __fastcall CGrassRenderer::FlushTriPlantBuffer(CGrassRenderer *this)
{
  unsigned int v1; // r5

  if ( dword_70BF84[0] >= 1 )
  {
    v1 = rand();
    CGrassRenderer::DrawTriPlants();
    dword_70BF84[0] = 0;
    j_srand(v1);
  }
}


// ============================================================

// Address: 0x2cd200
// Original: _ZN14CGrassRenderer17SetPlantModelsTabEjPP8RpAtomic
// Demangled: CGrassRenderer::SetPlantModelsTab(uint,RpAtomic **)
int __fastcall CGrassRenderer::SetPlantModelsTab(unsigned int a1, int a2)
{
  if ( a1 > 3 )
    return 0;
  dword_70BF84[a1 + 738] = a2;
  return 1;
}


// ============================================================

// Address: 0x2cd230
// Original: _ZN14CGrassRenderer17GetPlantModelsTabEj
// Demangled: CGrassRenderer::GetPlantModelsTab(uint)
int __fastcall CGrassRenderer::GetPlantModelsTab(unsigned int this, unsigned int a2)
{
  if ( this <= 3 )
    return dword_70BF84[this + 738];
  else
    return 0;
}


// ============================================================

// Address: 0x2cd25c
// Original: _ZN14CGrassRenderer18SetGlobalCameraPosERK7CVector
// Demangled: CGrassRenderer::SetGlobalCameraPos(CVector const&)
int __fastcall CGrassRenderer::SetGlobalCameraPos(__int64 *a1)
{
  __int64 v1; // d16
  int result; // r0

  v1 = *a1;
  result = *((_DWORD *)a1 + 2);
  dword_70BF78 = result;
  CGrassRenderer::m_vecCameraPos = v1;
  return result;
}


// ============================================================

// Address: 0x2cd274
// Original: _ZN14CGrassRenderer20SetCloseFarAlphaDistEff
// Demangled: CGrassRenderer::SetCloseFarAlphaDist(float,float)
int __fastcall CGrassRenderer::SetCloseFarAlphaDist(int this, int a2, float a3)
{
  CGrassRenderer::m_farDist = a2;
  CGrassRenderer::m_closeDist = this;
  return this;
}


// ============================================================

// Address: 0x2cd290
// Original: _ZN14CGrassRenderer20SetGlobalWindBendingEf
// Demangled: CGrassRenderer::SetGlobalWindBending(float)
int __fastcall CGrassRenderer::SetGlobalWindBending(int this, float a2)
{
  CGrassRenderer::m_windBending = this;
  return this;
}


// ============================================================

// Address: 0x2cd2a0
// Original: _ZN14CGrassRenderer13DrawTriPlantsEP10PPTriPlantiPP8RpAtomicP11RwMatrixTag
// Demangled: CGrassRenderer::DrawTriPlants(PPTriPlant *,int,RpAtomic **,RwMatrixTag *)
int __fastcall CGrassRenderer::DrawTriPlants(int a1, int a2, int a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d10
  float32x2_t v5; // d12
  int v6; // r1
  int v7; // r10
  float32x2_t v8; // d16
  unsigned __int64 v9; // d1
  float v10; // s0
  int FxQuality; // r0
  float v12; // s30
  float v13; // s17
  float *v14; // r9
  int v15; // r0
  float32x2_t v16; // d0
  int v17; // r6
  int v24; // r0
  int v25; // r8
  float v26; // s2
  float v27; // s0
  float v28; // s4
  float32x2_t v29; // d16
  float v30; // s2
  unsigned __int64 v31; // d2
  float v32; // s30
  float v33; // s17
  float v34; // s0
  float v35; // s2
  float v36; // s0
  float v37; // s30
  float v38; // s17
  float v39; // s30
  float v40; // s0
  int v45; // [sp+18h] [bp-A0h]
  int v46; // [sp+3Ch] [bp-7Ch]
  float32x2_t v47; // [sp+4Ch] [bp-6Ch] BYREF
  float v48; // [sp+54h] [bp-64h]

  if ( a2 >= 1 )
  {
    v4.n64_u32[0] = 1132396544;
    v6 = 0;
    v5.n64_u32[0] = 0;
    do
    {
      v7 = a1 + 92 * v6;
      v45 = v6;
      v8.n64_u64[0] = vsub_f32(*(float32x2_t *)(v7 + 40), *(float32x2_t *)((char *)&CGrassRenderer::m_vecCameraPos + 4)).n64_u64[0];
      v9 = vmul_f32(v8, v8).n64_u64[0];
      v10 = (float)((float)(*(float *)(v7 + 36) - CGrassRenderer::m_vecCameraPos.n64_f32[0])
                  * (float)(*(float *)(v7 + 36) - CGrassRenderer::m_vecCameraPos.n64_f32[0]))
          + *(float *)&v9;
      FxQuality = Fx_c::GetFxQuality((Fx_c *)&g_fx);
      v12 = sqrtf(v10 + *((float *)&v9 + 1));
      v13 = *(float *)&CGrassRenderer::m_farDist * 0.5;
      if ( FxQuality > 1 )
        v13 = *(float *)&CGrassRenderer::m_farDist;
      if ( v12 <= (float)(v13 + 20.0) )
      {
        v46 = *(_DWORD *)(a3 + 4 * *(unsigned __int16 *)(v7 + 48));
        v14 = *(float **)(v46 + 4);
        srand((unsigned int)*(float *)(v7 + 72));
        v15 = *(unsigned __int8 *)(v7 + 67);
        if ( v12 >= v13 )
        {
          v3.n64_f32[0] = (float)(int)floorf((float)((float)((float)(v13 + 20.0) - v12) / 20.0) * (float)(unsigned int)v15);
          v16.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
          v16.n64_f32[0] = (float)(int)v16.n64_f32[0];
          v3.n64_u64[0] = vmax_f32(v16, v5).n64_u64[0];
          v15 = (int)v3.n64_f32[0];
        }
        v3.n64_f32[0] = (float)*(unsigned __int8 *)(v7 + 68);
        v3.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
        v3.n64_u32[0] = (unsigned int)v3.n64_f32[0];
        v17 = *(_DWORD *)(v7 + 60);
        _R1 = (*(unsigned __int8 *)(v7 + 66) * v3.n64_u32[0]) << 8;
        __asm { UXTB16.W        R1, R1 }
        v47.n64_u32[0] = (*(unsigned __int8 *)(v7 + 65) * v3.n64_u16[0]) & 0xFF00 | (v15 << 24) | _R1 | (unsigned __int8)((unsigned __int16)(*(unsigned __int8 *)(v7 + 64) * v3.n64_u16[0]) >> 8);
        v24 = *(_DWORD *)(v46 + 24);
        dword_70CB1C = v17;
        RpGeometryForAllMaterials(v24, sub_2CD6A0, &v47);
        v25 = *(unsigned __int16 *)(v7 + 50);
        if ( *(_WORD *)(v7 + 50) )
        {
          do
          {
            while ( 1 )
            {
              v26 = (float)((float)rand() * 4.6566e-10) + 0.0;
              v27 = (float)((float)rand() * 4.6566e-10) + 0.0;
              if ( (float)(v26 + v27) > 1.0 )
              {
                v26 = 1.0 - v26;
                v27 = 1.0 - v27;
              }
              v28 = (float)(1.0 - v26) - v27;
              v47.n64_u64[0] = vadd_f32(
                                 vmul_n_f32(*(float32x2_t *)(v7 + 24), v27),
                                 vadd_f32(
                                   vmul_n_f32(*(float32x2_t *)(v7 + 12), v26),
                                   vmul_n_f32(*(float32x2_t *)v7, v28))).n64_u64[0];
              v29.n64_u64[0] = vsub_f32(v47, CGrassRenderer::m_vecCameraPos).n64_u64[0];
              v30 = (float)(v28 * *(float *)(v7 + 8)) + (float)(v26 * *(float *)(v7 + 20));
              v31 = vmul_f32(v29, v29).n64_u64[0];
              v48 = v30 + (float)(v27 * *(float *)(v7 + 32));
              if ( sqrtf(
                     (float)(*(float *)&v31 + *((float *)&v31 + 1))
                   + (float)((float)(v48 - *(float *)&dword_70BF78) * (float)(v48 - *(float *)&dword_70BF78))) >= (float)(*(float *)&CGrassRenderer::m_closeDist + -2.0) )
                break;
              rand();
              rand();
              rand();
              if ( !--v25 )
                goto LABEL_15;
            }
            RwFrameTranslate();
            v32 = *(float *)(v7 + 52);
            v33 = *(float *)(v7 + 76);
            v34 = v32 + (float)(v33 * (float)((float)((float)rand() * 4.6566e-10) + 0.0));
            v35 = v14[4] * v34;
            v36 = v14[9] * v34;
            v14[4] = v35;
            v14[9] = v36;
            v37 = *(float *)(v7 + 56);
            v38 = *(float *)(v7 + 80);
            v14[14] = v14[14] * (float)(v37 + (float)(v38 * (float)((float)((float)rand() * 4.6566e-10) + 0.0)));
            v39 = *(float *)(v7 + 88);
            v40 = (float)(*(float *)&CGrassRenderer::m_windBending * *(float *)(v7 + 84))
                * (float)((float)(v39 * (float)((float)((float)rand() * 4.6566e-10) + 0.0)) + 1.0);
            v14[12] = v40;
            v14[13] = v40;
            RwMatrixUpdate(v14 + 4);
            (*(void (**)(void))(v46 + 72))();
            --v25;
          }
          while ( v25 );
        }
      }
LABEL_15:
      v6 = v45 + 1;
    }
    while ( v45 + 1 != a2 );
  }
  return 1;
}


// ============================================================

// Address: 0x2cf344
// Original: _ZN14CGrassRenderer10InitialiseEv
// Demangled: CGrassRenderer::Initialise(void)
int __fastcall CGrassRenderer::Initialise(CGrassRenderer *this)
{
  return 1;
}


// ============================================================
