
// Address: 0x18d5b4
// Original: j__ZN13FxEmitterBP_c15IsFxInfoPresentEi
// Demangled: FxEmitterBP_c::IsFxInfoPresent(int)
// attributes: thunk
int __fastcall FxEmitterBP_c::IsFxInfoPresent(FxEmitterBP_c *this, int a2)
{
  return _ZN13FxEmitterBP_c15IsFxInfoPresentEi(this, a2);
}


// ============================================================

// Address: 0x18f63c
// Original: j__ZN13FxEmitterBP_cC2Ev
// Demangled: FxEmitterBP_c::FxEmitterBP_c(void)
// attributes: thunk
void __fastcall FxEmitterBP_c::FxEmitterBP_c(FxEmitterBP_c *this)
{
  _ZN13FxEmitterBP_cC2Ev(this);
}


// ============================================================

// Address: 0x1976d4
// Original: j__ZN13FxEmitterBP_cnwEj
// Demangled: FxEmitterBP_c::operator new(uint)
// attributes: thunk
int __fastcall FxEmitterBP_c::operator new(FxEmitterBP_c *this, unsigned int a2)
{
  return _ZN13FxEmitterBP_cnwEj(this, a2);
}


// ============================================================

// Address: 0x19e5a0
// Original: j__ZN13FxEmitterBP_c14UpdateParticleEfP14FxEmitterPrt_c
// Demangled: FxEmitterBP_c::UpdateParticle(float,FxEmitterPrt_c *)
// attributes: thunk
int __fastcall FxEmitterBP_c::UpdateParticle(FxEmitterBP_c *this, float a2, FxEmitterPrt_c *a3)
{
  return _ZN13FxEmitterBP_c14UpdateParticleEfP14FxEmitterPrt_c(this, a2, a3);
}


// ============================================================

// Address: 0x366cc0
// Original: _ZN13FxEmitterBP_cC2Ev
// Demangled: FxEmitterBP_c::FxEmitterBP_c(void)
void __fastcall FxEmitterBP_c::FxEmitterBP_c(FxEmitterBP_c *this)
{
  int v1; // r0

  FxPrimBP_c::FxPrimBP_c(this);
  *(_BYTE *)(v1 + 4) = 0;
  *(_DWORD *)v1 = &off_665968;
}


// ============================================================

// Address: 0x366cdc
// Original: _ZN13FxEmitterBP_cD2Ev
// Demangled: FxEmitterBP_c::~FxEmitterBP_c()
// attributes: thunk
void __fastcall FxEmitterBP_c::~FxEmitterBP_c(FxEmitterBP_c *this)
{
  sub_19572C(this);
}


// ============================================================

// Address: 0x366ce0
// Original: _ZN13FxEmitterBP_cD0Ev
// Demangled: FxEmitterBP_c::~FxEmitterBP_c()
void __fastcall FxEmitterBP_c::~FxEmitterBP_c(FxEmitterBP_c *this)
{
  void *v1; // r0

  FxPrimBP_c::~FxPrimBP_c(this);
  operator delete(v1);
}


// ============================================================

// Address: 0x366cf0
// Original: _ZN13FxEmitterBP_cnwEj
// Demangled: FxEmitterBP_c::operator new(uint)
int __fastcall FxEmitterBP_c::operator new(FxEmitterBP_c *this, unsigned int a2)
{
  return j_FxMemoryPool_c::GetMem((FxMemoryPool_c *)&unk_820640, (int)this, 4);
}


// ============================================================

// Address: 0x366d04
// Original: _ZN13FxEmitterBP_c14CreateInstanceEv
// Demangled: FxEmitterBP_c::CreateInstance(void)
_DWORD *__fastcall FxEmitterBP_c::CreateInstance(FxEmitterBP_c *this)
{
  FxPrim_c *v1; // r0
  _DWORD *result; // r0

  v1 = (FxPrim_c *)operator new(0x14u);
  FxPrim_c::FxPrim_c(v1);
  *result = &off_665990;
  return result;
}


// ============================================================

// Address: 0x366d24
// Original: _ZN13FxEmitterBP_c6UpdateEf
// Demangled: FxEmitterBP_c::Update(float)
int __fastcall FxEmitterBP_c::Update(FxEmitterBP_c *this, float a2)
{
  FxEmitterPrt_c *v2; // r6
  List_c *v4; // r9
  bool v6; // zf
  int v7; // r0
  int updated; // r0
  FxEmitterPrt_c *v9; // r8
  int NumItems; // [sp+0h] [bp-20h]

  v4 = (FxEmitterBP_c *)((char *)this + 32);
  NumItems = List_c::GetNumItems((FxEmitterBP_c *)((char *)this + 32));
  v6 = NumItems == 0;
  if ( NumItems )
  {
    v2 = *(FxEmitterPrt_c **)v4;
    v6 = *(_DWORD *)v4 == 0;
  }
  if ( !v6 )
  {
    do
    {
      while ( 1 )
      {
        v7 = *((_DWORD *)v2 + 10);
        if ( *(_BYTE *)(v7 + 85) == 3 )
        {
          *(_BYTE *)(v7 + 85) = 2;
          v7 = *((_DWORD *)v2 + 10);
        }
        if ( *(_BYTE *)(v7 + 84) != 2 )
          break;
        v2 = (FxEmitterPrt_c *)*((_DWORD *)v2 + 1);
        if ( !v2 )
          return NumItems;
      }
      updated = FxEmitterBP_c::UpdateParticle(this, a2, v2);
      v9 = (FxEmitterPrt_c *)*((_DWORD *)v2 + 1);
      if ( updated )
      {
        List_c::RemoveItem(v4, v2);
        FxManager_c::ReturnParticle((FxManager_c *)&g_fxMan, v2);
      }
      v2 = v9;
    }
    while ( v9 );
  }
  return NumItems;
}


// ============================================================

// Address: 0x366dac
// Original: _ZN13FxEmitterBP_c14UpdateParticleEfP14FxEmitterPrt_c
// Demangled: FxEmitterBP_c::UpdateParticle(float,FxEmitterPrt_c *)
int __fastcall FxEmitterBP_c::UpdateParticle(FxEmitterBP_c *this, float a2, FxEmitterPrt_c *a3)
{
  int v4; // r12
  int v5; // s16
  float v6; // s0
  float v7; // s2
  float v8; // s4
  float v9; // s6
  double v10; // d16
  double v11; // d16
  double v12; // d16
  double v13; // d16
  bool v14; // zf
  int WaterLevel; // r0
  int v17; // r0
  float v18; // s4
  float v19; // s0
  float v20; // s2
  float v21; // s0
  float v22; // s2
  float v23; // s0
  CVector *v24; // [sp+8h] [bp-50h]
  float v25; // [sp+Ch] [bp-4Ch] BYREF
  double v26; // [sp+10h] [bp-48h] BYREF
  int v27; // [sp+18h] [bp-40h]
  double v28; // [sp+1Ch] [bp-3Ch]
  int v29; // [sp+24h] [bp-34h]
  float v30; // [sp+28h] [bp-30h]
  float v31; // [sp+2Ch] [bp-2Ch]
  float v32; // [sp+30h] [bp-28h]
  float v33; // [sp+34h] [bp-24h]
  char v34; // [sp+38h] [bp-20h]
  char v35; // [sp+39h] [bp-1Fh]

  v4 = *((_DWORD *)a3 + 10);
  *(float *)&v5 = (float)((float)*(unsigned __int16 *)(v4 + 100) / 1000.0) * a2;
  v6 = *((float *)a3 + 2);
  v7 = *((float *)a3 + 3) + *(float *)&v5;
  *((float *)a3 + 3) = v7;
  if ( v7 >= v6 )
    return 1;
  v8 = *((float *)a3 + 5) + (float)(*(float *)&v5 * *((float *)a3 + 8));
  v9 = *((float *)a3 + 6) + (float)(*(float *)&v5 * *((float *)a3 + 9));
  *((float *)a3 + 4) = *((float *)a3 + 4) + (float)(*(float *)&v5 * *((float *)a3 + 7));
  *((float *)a3 + 5) = v8;
  *((float *)a3 + 6) = v9;
  v10 = *((double *)a3 + 2);
  v27 = *((_DWORD *)a3 + 6);
  v26 = v10;
  v11 = *(double *)((char *)a3 + 28);
  v29 = *((_DWORD *)a3 + 9);
  v28 = v11;
  FxInfoManager_c::ProcessMovementInfo(
    (int)this + 44,
    *(_DWORD *)(v4 + 88),
    COERCE_INT(v7 / v6),
    v5,
    *(float *)(*(_DWORD *)(v4 + 8) + 12),
    0,
    (int)&v26);
  v12 = v26;
  *((_DWORD *)a3 + 6) = v27;
  *((double *)a3 + 2) = v12;
  v13 = v28;
  *((_DWORD *)a3 + 9) = v29;
  *(double *)((char *)a3 + 28) = v13;
  v14 = v34 == 0;
  if ( !v34 )
    v14 = v35 == 0;
  if ( !v14 )
  {
    WaterLevel = CWaterLevel::GetWaterLevel(
                   *((CWaterLevel **)a3 + 4),
                   *((float *)a3 + 5),
                   *((float *)a3 + 6),
                   COERCE_FLOAT(&v25),
                   (float *)((char *)&stderr + 1),
                   0,
                   v24);
    if ( WaterLevel == 1 && v34 && *((float *)a3 + 6) < v25 )
      *((float *)a3 + 6) = v25;
    if ( v35 && (WaterLevel != 1 || *((float *)a3 + 6) > v25) )
      return 1;
  }
  if ( v30 > 0.0 || v31 > 0.0 )
  {
    if ( v32 > 0.0 || v33 > 0.0 )
    {
      v17 = *((char *)a3 + 50);
      v18 = (float)(unsigned __int8)v17;
      if ( v17 < 0 )
      {
        v19 = (float)(*(float *)&v5
                    * (float)(v32 + (float)((float)((float)(v18 + -128.0) * 0.0078125) * (float)(v33 - v32))))
            * (float)*((unsigned __int8 *)a3 + 49);
        v20 = -255.0;
      }
      else
      {
        v19 = (float)(*(float *)&v5 * (float)(v30 + (float)((float)(v18 * 0.0078125) * (float)(v31 - v30))))
            * (float)*((unsigned __int8 *)a3 + 49);
        v20 = 255.0;
      }
      v21 = v19 / v20;
      goto LABEL_25;
    }
    if ( v30 > 0.0 )
    {
      v22 = v31;
LABEL_24:
      v21 = (float)((float)(*(float *)&v5
                          * (float)(v30
                                  + (float)((float)((float)*((unsigned __int8 *)a3 + 50) / 255.0) * (float)(v22 - v30))))
                  * (float)*((unsigned __int8 *)a3 + 49))
          / 255.0;
LABEL_25:
      v23 = *((float *)a3 + 14) + v21;
      goto LABEL_26;
    }
  }
  v22 = v31;
  if ( v31 > 0.0 )
    goto LABEL_24;
  if ( v32 <= 0.0 )
    return 0;
  v23 = *((float *)a3 + 14)
      - (float)((float)((float)(*(float *)&v5
                              * (float)(v32
                                      + (float)((float)((float)*((unsigned __int8 *)a3 + 50) / 255.0)
                                              * (float)(v33 - v32))))
                      * (float)*((unsigned __int8 *)a3 + 49))
              / 255.0);
LABEL_26:
  *((float *)a3 + 14) = v23;
  return 0;
}


// ============================================================

// Address: 0x36708c
// Original: _ZN13FxEmitterBP_c6RenderEP8RwCamerajfh
// Demangled: FxEmitterBP_c::Render(RwCamera *,uint,float,uchar)
int __fastcall FxEmitterBP_c::Render(int a1, int a2, int a3, float a4, int a5)
{
  float32x2_t v5; // d0
  float32x2_t v6; // d1
  float32x2_t v7; // d2
  float32x2_t v8; // d3
  float32x2_t v9; // d4
  float32x2_t v10; // d10
  float32x2_t v11; // d11
  int v14; // r1
  int v16; // r3
  int v17; // r6
  int result; // r0
  int *v19; // r4
  int v20; // r6
  int v21; // r1
  int v22; // r8
  float v23; // s26
  float v24; // s25
  float v25; // s29
  __int64 v26; // d18
  __int64 v27; // d19
  __int64 v28; // d16
  __int64 v29; // d17
  __int64 v30; // d20
  __int64 v31; // d21
  __int64 v32; // d23
  float v33; // s2
  float v34; // s4
  int v35; // r5
  __int64 v36; // d16
  float v37; // s16
  int v38; // r5
  float32x2_t v39; // d16
  float32x2_t v40; // d19
  double v41; // d16
  int v42; // r5
  unsigned __int64 *v43; // r10
  float v44; // s4
  float v45; // s2
  float v46; // s0
  float v47; // s10
  float v48; // s8
  float v49; // s6
  unsigned __int64 v50; // d16
  float v51; // s0
  float v52; // s2
  float v53; // s4
  __int64 v54; // d18
  __int64 v55; // d19
  __int64 v56; // d16
  __int64 v57; // d17
  __int64 v58; // d20
  __int64 v59; // d21
  __int64 v60; // d23
  float v61; // s8
  float v62; // s6
  float v63; // s10
  float v64; // s12
  float v65; // s14
  float v66; // s2
  unsigned __int64 v67; // d16
  float *v68; // r0
  float v69; // s6
  float v70; // s6
  float v71; // s18
  float v72; // s24
  unsigned __int8 v73; // r0
  float v74; // s6
  float v75; // s12
  float *v76; // r0
  float v77; // s5
  float v78; // s14
  float v79; // s11
  float v80; // s13
  float v81; // s19
  float v82; // s27
  float v83; // s17
  unsigned __int64 v84; // d16
  float v85; // s12
  float v86; // s0
  float v87; // s10
  float v88; // s2
  float32x2_t v89; // d16
  unsigned int v90; // r0
  float v91; // s6
  float v92; // s0
  int v93; // r4
  int v94; // r5
  unsigned int v95; // r0
  int v96; // r2
  unsigned int v97; // r0
  unsigned int v98; // r0
  unsigned int v99; // r0
  unsigned int v100; // s4
  unsigned int v101; // s6
  float v102; // s10
  int *v103; // r0
  int v104; // r4
  float v105; // s2
  float v106; // s0
  float v107; // s25
  float v108; // s24
  float v109; // s18
  float v110; // s26
  float v111; // s29
  float v112; // s22
  float v113; // s31
  float v114; // s16
  float v115; // s27
  float v116; // s19
  float v117; // s17
  float v118; // [sp+A8h] [bp-198h]
  _DWORD *v119; // [sp+B0h] [bp-190h]
  int v120; // [sp+BCh] [bp-184h]
  int v121; // [sp+C0h] [bp-180h]
  int v122; // [sp+D4h] [bp-16Ch]
  int v123; // [sp+D8h] [bp-168h]
  _DWORD v124[3]; // [sp+DCh] [bp-164h] BYREF
  double v125; // [sp+E8h] [bp-158h] BYREF
  float v126; // [sp+F0h] [bp-150h]
  unsigned __int64 v127; // [sp+F8h] [bp-148h] BYREF
  float v128; // [sp+100h] [bp-140h]
  float v129; // [sp+104h] [bp-13Ch]
  int v130; // [sp+108h] [bp-138h]
  int v131; // [sp+10Ch] [bp-134h]
  int v132; // [sp+110h] [bp-130h]
  char v133[4]; // [sp+118h] [bp-128h] BYREF
  unsigned __int8 v134; // [sp+11Ch] [bp-124h]
  unsigned __int8 v135; // [sp+11Dh] [bp-123h]
  unsigned __int8 v136; // [sp+11Eh] [bp-122h]
  unsigned __int8 v137; // [sp+11Fh] [bp-121h]
  int v138; // [sp+120h] [bp-120h]
  float v139; // [sp+124h] [bp-11Ch]
  float v140; // [sp+128h] [bp-118h]
  float v141; // [sp+12Ch] [bp-114h]
  float v142; // [sp+130h] [bp-110h]
  float v143; // [sp+134h] [bp-10Ch]
  float v144; // [sp+138h] [bp-108h]
  float v145; // [sp+13Ch] [bp-104h]
  float v146; // [sp+140h] [bp-100h]
  int v147; // [sp+144h] [bp-FCh]
  float v148; // [sp+148h] [bp-F8h]
  char v149; // [sp+14Ch] [bp-F4h]
  char v150; // [sp+14Dh] [bp-F3h]
  char v151; // [sp+14Fh] [bp-F1h]
  __int64 v152; // [sp+150h] [bp-F0h]
  __int64 v153; // [sp+158h] [bp-E8h]
  __int64 v154; // [sp+160h] [bp-E0h]
  __int64 v155; // [sp+168h] [bp-D8h]
  __int64 v156; // [sp+170h] [bp-D0h]
  __int64 v157; // [sp+178h] [bp-C8h]
  __int64 v158; // [sp+180h] [bp-C0h]
  __int64 v159; // [sp+188h] [bp-B8h]
  char v160; // [sp+190h] [bp-B0h]
  char v161; // [sp+191h] [bp-AFh]
  char v162; // [sp+192h] [bp-AEh]
  char v163; // [sp+193h] [bp-ADh]
  unsigned __int64 v164; // [sp+194h] [bp-ACh]
  float v165; // [sp+19Ch] [bp-A4h]
  float v166; // [sp+1A0h] [bp-A0h]
  float v167; // [sp+1A4h] [bp-9Ch]
  float v168; // [sp+1A8h] [bp-98h]
  float v169; // [sp+1ACh] [bp-94h]
  float v170; // [sp+1B0h] [bp-90h]
  int v171; // [sp+1B4h] [bp-8Ch]
  int v172; // [sp+1B8h] [bp-88h]
  _BYTE v173[12]; // [sp+1C0h] [bp-80h] BYREF
  unsigned __int64 v174; // [sp+1D0h] [bp-70h]
  float v175; // [sp+1D8h] [bp-68h]

  v14 = *(_DWORD *)(a1 + 44);
  if ( v14 < 1 )
  {
LABEL_5:
    v17 = 0;
    if ( !a5 )
      goto LABEL_9;
LABEL_6:
    result = *(unsigned __int8 *)(a1 + 61);
    if ( *(_BYTE *)(a1 + 61) )
      return FxEmitterBP_c::RenderHeatHaze(a1, a2);
    return result;
  }
  v16 = 0;
  while ( *(_WORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 48) + 4 * v16) + 4) != 16392 )
  {
    if ( ++v16 >= v14 )
      goto LABEL_5;
  }
  v17 = 1;
  if ( a5 )
    goto LABEL_6;
LABEL_9:
  v19 = (int *)(a1 + 32);
  result = List_c::GetNumItems((List_c *)(a1 + 32));
  if ( v17 )
  {
    if ( result >= 1 )
    {
      result = (int)&g_fxMan;
      byte_82064C = 1;
    }
    return result;
  }
  if ( !result )
    return result;
  v20 = **(_DWORD **)(a1 + 12);
  result = List_c::GetNumItems((List_c *)(a1 + 32));
  if ( !result )
    return result;
  v122 = v20;
  RwRenderStateSet(12, *(unsigned __int8 *)(a1 + 7));
  if ( *(_BYTE *)(a1 + 7) )
  {
    RwRenderStateSet(10, g_blendFunctions[*(char *)(a1 + 5)]);
    v21 = g_blendFunctions[*(char *)(a1 + 6)];
  }
  else
  {
    RwRenderStateSet(10, dword_686780);
    v21 = g_blendFunctions[0];
  }
  RwRenderStateSet(11, v21);
  v119 = (_DWORD *)a1;
  g_pMatrix = 0;
  g_pVertex3d = (int)&TempVertexBuffer;
  g_pRaster = v20;
  g_rwFlags = 1;
  g_numTris = 0;
  g_numVertices = 0;
  RwRenderStateGet(1, v133);
  if ( *(_DWORD *)v133 != v20 )
    RwRenderStateSet(1, v20);
  v22 = *v19;
  if ( *v19 )
  {
    v11.n64_u32[0] = 1.0;
    v118 = a4;
    v23 = -0.5;
    v24 = 4.0;
    v25 = 0.5;
    v123 = *(_DWORD *)(a2 + 4);
    v10.n64_u32[0] = 1132396544;
    v120 = 0;
    v121 = 0;
    do
    {
      if ( *(_BYTE *)(v22 + 55) )
      {
        v35 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
        FxSystem_c::GetCompositeMatrix();
        RwV3dTransformPoints(v173, v22 + 16, 1, v35);
        FxManager_c::FxRwMatrixDestroy(&g_fxMan, v35);
      }
      else
      {
        v36 = *(_QWORD *)(v22 + 16);
        *(_DWORD *)&v173[8] = *(_DWORD *)(v22 + 24);
        *(_QWORD *)v173 = v36;
      }
      FxInfoManager_c::ProcessRenderInfo(
        (int)(v119 + 11),
        *(_DWORD *)(*(_DWORD *)(v22 + 40) + 88),
        COERCE_INT(*(float *)(v22 + 12) / *(float *)(v22 + 8)),
        0,
        *(float *)(*(_DWORD *)(*(_DWORD *)(v22 + 40) + 8) + 12),
        0,
        (int)v133);
      if ( v163 >= 0 )
      {
        v37 = v170;
        v38 = rand();
        FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&v127);
        v131 = 1065353216;
        v130 = v171;
        v132 = v172;
        v129 = v169 / 255.0;
        v5.n64_f32[0] = (float)((float)((float)(v37 + v37) * (float)((float)v38 * 4.6566e-10)) - v37) / 255.0;
        v8.n64_f32[0] = v5.n64_f32[0] + (float)(v168 / 255.0);
        v7.n64_f32[0] = v5.n64_f32[0] + (float)(v167 / 255.0);
        v5.n64_f32[0] = (float)(v166 / 255.0) + v5.n64_f32[0];
        v39.n64_u64[0] = vmin_f32(v5, v11).n64_u64[0];
        v5.n64_u32[0] = 0;
        v40.n64_u64[0] = v5.n64_u64[0];
        v6.n64_u64[0] = vmax_f32(v39, v5).n64_u64[0];
        v5.n64_u64[0] = vmax_f32(vmin_f32(v8, v11), v5).n64_u64[0];
        v7.n64_u64[0] = vmax_f32(vmin_f32(v7, v11), v40).n64_u64[0];
        v127 = __PAIR64__(v7.n64_u32[0], v6.n64_u32[0]);
        v128 = v5.n64_f32[0];
        v41 = *(double *)(v22 + 16);
        v126 = *(float *)(v22 + 24);
        v125 = v41;
        memset(v124, 0, sizeof(v124));
        FxSystem_c::AddParticle(dword_820540, (int)&v125, (int)v124, 0, (int)&v127, -1.0, 1.2, 0.6, 0);
      }
      v42 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
      *(_DWORD *)v42 = 1065353216;
      *(_DWORD *)(v42 + 4) = 0;
      *(_DWORD *)(v42 + 8) = 0;
      *(_DWORD *)(v42 + 20) = 1065353216;
      *(_DWORD *)(v42 + 24) = 0;
      *(_DWORD *)(v42 + 32) = 0;
      *(_DWORD *)(v42 + 36) = 0;
      *(_DWORD *)(v42 + 40) = 1065353216;
      *(_DWORD *)(v42 + 56) = 0;
      *(_DWORD *)(v42 + 48) = 0;
      *(_DWORD *)(v42 + 16) = 0;
      v43 = (unsigned __int64 *)(v42 + 16);
      *(_DWORD *)(v42 + 52) = 0;
      *(_DWORD *)(v42 + 12) |= (unsigned int)&elf_hash_chain[16294] + 3;
      if ( v147 < 1 )
      {
        if ( !v161 )
        {
          if ( v160 )
          {
            v54 = v156;
            v55 = v157;
            v56 = v152;
            v57 = v153;
            v58 = v154;
            v59 = v155;
            v60 = v159;
            *(_QWORD *)(v42 + 48) = v158;
            *(_QWORD *)(v42 + 56) = v60;
            *(_QWORD *)(v42 + 32) = v54;
            *(_QWORD *)(v42 + 40) = v55;
            *(_QWORD *)v42 = v56;
            *(_QWORD *)(v42 + 8) = v57;
            *(_QWORD *)(v42 + 16) = v58;
            *(_QWORD *)(v42 + 24) = v59;
            v33 = *((float *)&v156 + 1);
            v5.n64_u32[0] = v156;
            v34 = *(float *)&v157;
          }
          else
          {
            v26 = *(_QWORD *)(v123 + 48);
            v27 = *(_QWORD *)(v123 + 56);
            v28 = *(_QWORD *)(v123 + 16);
            v29 = *(_QWORD *)(v123 + 24);
            v30 = *(_QWORD *)(v123 + 32);
            v31 = *(_QWORD *)(v123 + 40);
            v32 = *(_QWORD *)(v123 + 72);
            *(_QWORD *)(v42 + 48) = *(_QWORD *)(v123 + 64);
            *(_QWORD *)(v42 + 56) = v32;
            *(_QWORD *)(v42 + 32) = v26;
            *(_QWORD *)(v42 + 40) = v27;
            *(_QWORD *)v42 = v28;
            *(_QWORD *)(v42 + 8) = v29;
            *(_QWORD *)(v42 + 16) = v30;
            *(_QWORD *)(v42 + 24) = v31;
            v5.n64_u32[0] = *(_DWORD *)(v123 + 48);
            v33 = *(float *)(v123 + 52);
            v34 = *(float *)(v123 + 56);
          }
          goto LABEL_47;
        }
        if ( v162 )
        {
          v50 = *(_QWORD *)(v22 + 28);
          v175 = *(float *)(v22 + 36);
          v174 = v50;
          if ( *(float *)&v50 == 0.0 && v175 == 0.0 )
            v175 = 1.0;
        }
        else
        {
          v174 = v164;
          v175 = v165;
        }
        RwV3dNormalize();
        *(float *)&v127 = *(float *)v173 - *(float *)(v123 + 64);
        *((float *)&v127 + 1) = *(float *)&v173[4] - *(float *)(v123 + 68);
        v128 = *(float *)&v173[8] - *(float *)(v123 + 72);
        RwV3dNormalize();
        v52 = *((float *)&v127 + 1);
        v51 = *(float *)&v127;
        v53 = v128;
      }
      else
      {
        v44 = *(float *)(v22 + 16);
        v45 = *(float *)(v22 + 20);
        v46 = *(float *)(v22 + 24);
        if ( v147 == 2 )
        {
          v7.n64_f32[1] = flt_95291C[0];
          v6.n64_f32[1] = flt_95291C[2];
          v47 = v148
              * (float)((float)(v45 - *(float *)(v123 + 68))
                      - (float)((float)(v45
                                      - (float)(*(float *)(v22 + 32) * (float)(*(float *)&CTimer::ms_fTimeStep / 50.0)))
                              - flt_95291C[1]));
          v48 = v148
              * (float)((float)(v44 - *(float *)(v123 + 64))
                      - (float)((float)(v44
                                      - (float)(*(float *)(v22 + 28) * (float)(*(float *)&CTimer::ms_fTimeStep / 50.0)))
                              - flt_95291C[0]));
          v49 = v148
              * (float)((float)(v46 - *(float *)(v123 + 72))
                      - (float)((float)(v46
                                      - (float)(*(float *)(v22 + 36) * (float)(*(float *)&CTimer::ms_fTimeStep / 50.0)))
                              - flt_95291C[2]));
        }
        else
        {
          v48 = v44 - (float)(v44 - (float)(*(float *)(v22 + 28) * v148));
          v47 = v45 - (float)(v45 - (float)(v148 * *(float *)(v22 + 32)));
          v49 = v46 - (float)(v46 - (float)(v148 * *(float *)(v22 + 36)));
        }
        v128 = v49;
        v174 = __PAIR64__(LODWORD(v47), LODWORD(v48));
        v127 = __PAIR64__(LODWORD(v47), LODWORD(v48));
        v175 = v49;
        if ( v48 == 0.0 && v47 == 0.0 )
        {
          v175 = 1.0;
        }
        else
        {
          RwV3dNormalize();
          v44 = *(float *)(v22 + 16);
          v45 = *(float *)(v22 + 20);
          v46 = *(float *)(v22 + 24);
        }
        *(float *)&v125 = v44 - *(float *)(v123 + 64);
        *((float *)&v125 + 1) = v45 - *(float *)(v123 + 68);
        v126 = v46 - *(float *)(v123 + 72);
        RwV3dNormalize();
        v52 = *((float *)&v125 + 1);
        v51 = *(float *)&v125;
        v53 = v126;
      }
      v61 = *((float *)&v174 + 1);
      v62 = *(float *)&v174;
      v63 = v175;
      v64 = (float)(v52 * *(float *)&v174) - (float)(*((float *)&v174 + 1) * v51);
      v65 = (float)(*((float *)&v174 + 1) * v53) - (float)(v175 * v52);
      v5.n64_f32[1] = (float)(v175 * v51) - (float)(v53 * *(float *)&v174);
      v5.n64_f32[0] = *(float *)&v174 * v64;
      v66 = v175 * v65;
      *(float *)v42 = v65;
      *(_DWORD *)(v42 + 4) = v5.n64_u32[1];
      *(float *)(v42 + 8) = v64;
      v67 = v174;
      *(float *)(v42 + 24) = v175;
      v33 = v66 - v5.n64_f32[0];
      *v43 = v67;
      v5.n64_f32[0] = (float)(v61 * v64) - (float)(v63 * v5.n64_f32[1]);
      v34 = (float)(v62 * v5.n64_f32[1]) - (float)(v61 * v65);
      *(_DWORD *)(v42 + 32) = v5.n64_u32[0];
      *(float *)(v42 + 36) = v33;
      *(float *)(v42 + 40) = v34;
LABEL_47:
      if ( *(unsigned __int8 *)(v22 + 54) == 255 )
      {
        v69 = *(float *)(v22 + 56);
        v68 = (float *)(v22 + 56);
        if ( v69 < 0.0 )
        {
          do
            v69 = v69 + 360.0;
          while ( v69 < 0.0 );
          *v68 = v69;
        }
      }
      else
      {
        v68 = (float *)(v22 + 56);
        v69 = (float)*(unsigned __int8 *)(v22 + 54) + (float)*(unsigned __int8 *)(v22 + 54);
        *(float *)(v22 + 56) = v69;
      }
      if ( v69 >= 360.0 )
      {
        do
          v69 = v69 + -360.0;
        while ( v69 >= 360.0 );
        *v68 = v69;
      }
      if ( v69 <= 0.0 )
      {
        v82 = *(float *)v42;
        v83 = *(float *)(v42 + 4);
        v81 = *(float *)(v42 + 8);
        v84 = *v43;
        v175 = *(float *)(v42 + 24);
        v174 = v84;
      }
      else
      {
        v70 = (float)((float)(v69 * 0.017453) * 256.0) / 6.2832;
        v9.n64_u32[0] = CMaths::ms_SinTable[(unsigned __int8)(unsigned int)(float)(v70 + 64.0)];
        v71 = *(float *)(v42 + 4);
        v72 = *(float *)(v42 + 8);
        v73 = (unsigned int)v70;
        v74 = v5.n64_f32[0] * (float)(v11.n64_f32[0] - v9.n64_f32[0]);
        v75 = v33 * (float)(v11.n64_f32[0] - v9.n64_f32[0]);
        v76 = (float *)&CMaths::ms_SinTable[v73];
        v5.n64_f32[1] = v5.n64_f32[0] * *v76;
        v77 = v33 * *v76;
        v78 = v34 * *v76;
        v79 = v5.n64_f32[1] + (float)(v34 * v75);
        v80 = (float)(v34 * v74) - v77;
        v7.n64_f32[1] = v77 + (float)(v34 * v74);
        v9.n64_f32[1] = *(float *)v42 * v80;
        v5.n64_f32[1] = (float)((float)(v34 * v75) - v5.n64_f32[1]) * v72;
        v6.n64_f32[1] = v7.n64_f32[1] * v72;
        v81 = (float)((float)(v9.n64_f32[0] + (float)(v34 * (float)(v34 * (float)(v11.n64_f32[0] - v9.n64_f32[0]))))
                    * v72)
            + (float)(v9.n64_f32[1] + (float)(v71 * v79));
        v82 = (float)(v7.n64_f32[1] * v72)
            + (float)((float)(*(float *)v42 * (float)(v9.n64_f32[0] + (float)(v5.n64_f32[0] * v74)))
                    + (float)(v71 * (float)((float)(v33 * v74) - v78)));
        v83 = v5.n64_f32[1]
            + (float)((float)(*(float *)v42 * (float)(v78 + (float)(v33 * v74)))
                    + (float)(v71 * (float)(v9.n64_f32[0] + (float)(v33 * v75))));
        *((float *)&v174 + 1) = (float)(v34 * v82) - (float)(v5.n64_f32[0] * v81);
        *(float *)&v174 = (float)(v33 * v81) - (float)(v34 * v83);
        v175 = (float)(v5.n64_f32[0] * v83) - (float)(v33 * v82);
      }
      FxManager_c::FxRwMatrixDestroy(&g_fxMan, v42);
      v85 = (float)*(unsigned __int8 *)(v22 + 50);
      v86 = v139 + (float)(v141 * (float)((float)(v85 / 255.0) + v23));
      v139 = v86;
      v87 = (float)*(unsigned __int8 *)(v22 + 51) / 255.0;
      v88 = v140 + (float)(v142 * (float)(v87 + v23));
      v140 = v88;
      v89.n64_u64[0] = vsub_f32(*(float32x2_t *)&v173[4], *(float32x2_t *)(v42 + 52)).n64_u64[0];
      v90 = *(unsigned __int8 *)(v22 + 48);
      v8.n64_u64[0] = vmul_f32(v89, v89).n64_u64[0];
      v7.n64_f32[0] = (float)(v24
                            - (float)((float)(v88 * v86)
                                    / (float)((float)((float)((float)(*(float *)v173 - *(float *)(v42 + 48))
                                                            * (float)(*(float *)v173 - *(float *)(v42 + 48)))
                                                    + v8.n64_f32[0])
                                            + v8.n64_f32[1])))
                    * v25;
      v7.n64_u64[0] = vmin_f32(v7, v11).n64_u64[0];
      if ( v90 != 255 )
      {
        v91 = (float)v90 / 255.0;
        v140 = v88 * v91;
        v139 = v86 * v91;
      }
      v6.n64_f32[0] = (float)(unsigned __int8)v133[2];
      v92 = v7.n64_f32[0] * (float)(unsigned __int8)v133[3];
      v7.n64_f32[0] = (float)(unsigned __int8)v133[1];
      v8.n64_f32[0] = (float)(unsigned __int8)v133[0];
      if ( v92 >= 0.0 )
      {
        if ( v138 == 2 )
        {
          v94 = v120;
          v93 = v121;
          v9.n64_f32[0] = (float)((float)(v85 * 0.0078125) + -1.0) * (float)v137;
          v6.n64_f32[0] = v9.n64_f32[0] + v6.n64_f32[0];
          v7.n64_f32[0] = v9.n64_f32[0] + v7.n64_f32[0];
          v8.n64_f32[0] = v9.n64_f32[0] + v8.n64_f32[0];
          v9.n64_u32[0] = 0;
          v6.n64_u32[0] = vmin_f32(vmax_f32(v6, v9), v10).n64_u32[0];
          v7.n64_u64[0] = vmin_f32(vmax_f32(v7, v9), v10).n64_u64[0];
          v8.n64_u64[0] = vmin_f32(vmax_f32(v8, v9), v10).n64_u64[0];
        }
        else
        {
          v94 = v120;
          v93 = v121;
          if ( v138 == 1 )
          {
            v9.n64_f32[1] = (float)v136 - v6.n64_f32[0];
            v7.n64_f32[0] = (float)((float)((float)v135 - v7.n64_f32[0]) * v87) + v7.n64_f32[0];
            v8.n64_f32[0] = (float)((float)((float)v134 - v8.n64_f32[0]) * (float)(v85 / 255.0)) + v8.n64_f32[0];
            v6.n64_f32[0] = (float)(v9.n64_f32[1] * (float)((float)*(unsigned __int8 *)(v22 + 52) / 255.0))
                          + v6.n64_f32[0];
          }
        }
        v95 = *(unsigned __int8 *)(v22 + 44);
        v96 = v122;
        if ( v95 != 255 )
          v8.n64_f32[0] = v8.n64_f32[0] * (float)((float)v95 / 255.0);
        v97 = *(unsigned __int8 *)(v22 + 45);
        if ( v97 != 255 )
          v7.n64_f32[0] = v7.n64_f32[0] * (float)((float)v97 / 255.0);
        v98 = *(unsigned __int8 *)(v22 + 46);
        if ( v98 != 255 )
          v6.n64_f32[0] = v6.n64_f32[0] * (float)((float)v98 / 255.0);
        v99 = *(unsigned __int8 *)(v22 + 47);
        if ( v99 != 255 )
          v92 = v92 * (float)((float)v99 / 255.0);
        if ( v151 )
        {
          v100 = (unsigned int)v7.n64_f32[0];
          v101 = (unsigned int)v8.n64_f32[0];
        }
        else
        {
          v102 = v118;
          if ( *(unsigned __int8 *)(v22 + 53) < 0x65u )
            v102 = (float)*(unsigned __int8 *)(v22 + 53) * 0.01;
          v118 = v102;
          v6.n64_f32[0] = v6.n64_f32[0] * v102;
          v100 = (unsigned int)(float)(v7.n64_f32[0] * v102);
          v101 = (unsigned int)(float)(v8.n64_f32[0] * v102);
        }
        v133[1] = v100;
        v133[0] = v101;
        v133[3] = (unsigned int)v92;
        v133[2] = (unsigned int)v6.n64_f32[0];
        if ( v149 )
        {
          switch ( v150 )
          {
            case 1:
              goto LABEL_85;
            case 2:
              v103 = (int *)v119[4];
              if ( !v103 )
                goto LABEL_85;
              goto LABEL_86;
            case 3:
              v103 = (int *)v119[5];
              if ( !v103 )
                goto LABEL_85;
              goto LABEL_86;
            case 4:
              v103 = (int *)v119[6];
              if ( !v103 )
                goto LABEL_85;
              goto LABEL_86;
            default:
              break;
          }
        }
        else
        {
LABEL_85:
          v103 = (int *)v119[3];
LABEL_86:
          v93 = *v103;
          v94 = *v103;
        }
        if ( v122 != v94 )
        {
          if ( g_numTris )
          {
            if ( RwIm3DTransform() )
            {
              RwIm3DRenderPrimitive();
              RwIm3DEnd();
            }
            g_numVertices = 0;
            g_numTris = 0;
            g_pVertex3d = (int)&TempVertexBuffer;
          }
          g_pMatrix = 0;
          g_pRaster = v93;
          g_rwFlags = 1;
          g_numTris = 0;
          g_numVertices = 0;
          g_pVertex3d = (int)&TempVertexBuffer;
          RwRenderStateGet(1, &v125);
          if ( LODWORD(v125) != v93 )
            RwRenderStateSet(1, v93);
          v96 = v94;
        }
        v120 = v94;
        v121 = v93;
        v104 = v96;
        if ( v147 <= 0 )
        {
          v106 = v143;
          v105 = v144;
        }
        else
        {
          v105 = 0.0;
          v106 = COERCE_FLOAT(RwV3dLength());
          v143 = v106;
          v144 = 0.0;
        }
        v122 = v104;
        v6.n64_f32[0] = v140 * v105;
        v5.n64_f32[0] = v140 * v106;
        v107 = *(float *)&v174 * v6.n64_f32[0];
        v108 = *(float *)&v174 * v5.n64_f32[0];
        v109 = *((float *)&v174 + 1) * v5.n64_f32[0];
        v110 = v5.n64_f32[0] * v175;
        v111 = v82 * (float)(v139 * v146);
        v112 = *((float *)&v174 + 1) * v6.n64_f32[0];
        v113 = v83 * (float)(v139 * v145);
        v114 = v81 * (float)(v139 * v145);
        v115 = v82 * (float)(v139 * v145);
        v6.n64_f32[1] = (float)(*((float *)&v174 + 1) * v5.n64_f32[0]) + *(float *)&v173[4];
        v11.n64_f32[1] = v175 * v6.n64_f32[0];
        v116 = v81 * (float)(v139 * v146);
        v117 = v83 * (float)(v139 * v146);
        RenderAddTri(
          v115 + (float)((float)(*(float *)&v174 * v5.n64_f32[0]) + *(float *)v173),
          v113 + v6.n64_f32[1],
          v114 + (float)((float)(v5.n64_f32[0] * v175) + *(float *)&v173[8]),
          (float)((float)(*(float *)&v174 * v6.n64_f32[0]) + *(float *)v173) + v111,
          v117 + (float)((float)(*((float *)&v174 + 1) * v6.n64_f32[0]) + *(float *)&v173[4]),
          v116 + (float)((float)(v175 * v6.n64_f32[0]) + *(float *)&v173[8]),
          (float)((float)(*(float *)&v174 * v5.n64_f32[0]) + *(float *)v173) + v111,
          v117 + v6.n64_f32[1],
          v116 + (float)((float)(v5.n64_f32[0] * v175) + *(float *)&v173[8]),
          0.0,
          0.0,
          1.0,
          1.0,
          1.0,
          0.0,
          v133[0],
          (unsigned __int8)v133[1],
          (unsigned __int8)v133[2],
          (unsigned __int8)v133[3],
          v133[0],
          (unsigned __int8)v133[1],
          (unsigned __int8)v133[2],
          (unsigned __int8)v133[3],
          v133[0],
          (unsigned __int8)v133[1],
          (unsigned __int8)v133[2],
          (unsigned __int8)v133[3]);
        v5.n64_f32[1] = v116 + (float)(v11.n64_f32[1] + *(float *)&v173[8]);
        RenderAddTri(
          v111 + (float)(v107 + *(float *)v173),
          v117 + (float)(v112 + *(float *)&v173[4]),
          v5.n64_f32[1],
          v115 + (float)(v108 + *(float *)v173),
          v113 + (float)(v109 + *(float *)&v173[4]),
          v114 + (float)(v110 + *(float *)&v173[8]),
          v115 + (float)(v107 + *(float *)v173),
          v113 + (float)(v112 + *(float *)&v173[4]),
          v114 + (float)(v11.n64_f32[1] + *(float *)&v173[8]),
          1.0,
          1.0,
          0.0,
          0.0,
          0.0,
          1.0,
          v133[0],
          (unsigned __int8)v133[1],
          (unsigned __int8)v133[2],
          (unsigned __int8)v133[3],
          v133[0],
          (unsigned __int8)v133[1],
          (unsigned __int8)v133[2],
          (unsigned __int8)v133[3],
          v133[0],
          (unsigned __int8)v133[1],
          (unsigned __int8)v133[2],
          (unsigned __int8)v133[3]);
        v11.n64_u32[0] = 1.0;
        v23 = -0.5;
        v24 = 4.0;
        v25 = 0.5;
      }
      v22 = *(_DWORD *)(v22 + 4);
    }
    while ( v22 );
  }
  result = (int)&g_numTris;
  if ( g_numTris )
  {
    if ( RwIm3DTransform() )
    {
      RwIm3DRenderPrimitive();
      RwIm3DEnd();
    }
    result = (int)&g_numVertices;
    g_numVertices = 0;
    g_numTris = 0;
    g_pVertex3d = (int)&TempVertexBuffer;
  }
  return result;
}


// ============================================================

// Address: 0x367fe4
// Original: _ZN13FxEmitterBP_c15IsFxInfoPresentEi
// Demangled: FxEmitterBP_c::IsFxInfoPresent(int)
int __fastcall FxEmitterBP_c::IsFxInfoPresent(FxEmitterBP_c *this, int a2)
{
  int v2; // r2
  int i; // r3

  v2 = *((_DWORD *)this + 11);
  if ( v2 < 1 )
    return 0;
  for ( i = 0; i < v2; ++i )
  {
    if ( *(unsigned __int16 *)(*(_DWORD *)(*((_DWORD *)this + 12) + 4 * i) + 4) == a2 )
      return 1;
  }
  return 0;
}


// ============================================================

// Address: 0x368010
// Original: _ZN13FxEmitterBP_c14RenderHeatHazeEP8RwCamerajf
// Demangled: FxEmitterBP_c::RenderHeatHaze(RwCamera *,uint,float)
int *__fastcall FxEmitterBP_c::RenderHeatHaze(int a1, int a2)
{
  List_c *v3; // r5
  int *result; // r0
  int v6; // r10
  int v7; // r6
  int v8; // r10
  int v9; // r11
  int v10; // r5
  double v11; // d16
  _DWORD *v12; // r9
  double *v13; // r5
  double v14; // d16
  __int64 v15; // d18
  __int64 v16; // d19
  __int64 v17; // d16
  __int64 v18; // d17
  __int64 v19; // d20
  __int64 v20; // d21
  __int64 v21; // d23
  float v22; // s0
  float v23; // s2
  float v24; // s4
  float v25; // s8
  float v26; // s6
  float v27; // s10
  float v28; // s12
  float v29; // s14
  float v30; // s1
  float v31; // s0
  float v32; // s2
  double v33; // d16
  float *v34; // r0
  float v35; // s6
  float v36; // s6
  float v37; // s8
  float v38; // s20
  float v39; // s22
  unsigned __int8 v40; // r0
  float v41; // s6
  float v42; // s12
  float *v43; // r0
  float v44; // s1
  float v45; // s5
  float v46; // s14
  float v47; // s19
  float v48; // s23
  float v49; // s21
  double v50; // d16
  int v51; // r5
  float v52; // s0
  float v53; // s2
  unsigned int v54; // r0
  float v55; // s4
  int *v56; // r0
  __int64 v57; // d18
  __int64 v58; // d19
  __int64 v59; // d16
  __int64 v60; // d17
  __int64 v61; // d20
  __int64 v62; // d21
  __int64 v63; // d23
  char v64; // r4
  int v65; // r12
  int v66; // r6
  float v67; // s4
  float v68; // s2
  float v69; // s6
  float v70; // s0
  float v71; // s22
  float v72; // s20
  float v73; // s25
  float v74; // s29
  float v75; // s18
  float v76; // s24
  float v77; // s27
  float v78; // s31
  float v79; // s23
  float v80; // s26
  float v81; // s19
  float v82; // s21
  __int64 *v83; // [sp+5Ch] [bp-19Ch]
  float *v84; // [sp+A8h] [bp-150h]
  int v85; // [sp+B4h] [bp-144h]
  _DWORD *v86; // [sp+B8h] [bp-140h]
  int v87; // [sp+BCh] [bp-13Ch]
  int v88; // [sp+C0h] [bp-138h]
  float v89; // [sp+C4h] [bp-134h] BYREF
  float v90; // [sp+C8h] [bp-130h]
  float v91; // [sp+CCh] [bp-12Ch]
  char v92[12]; // [sp+D0h] [bp-128h] BYREF
  float v93; // [sp+DCh] [bp-11Ch]
  float v94; // [sp+E0h] [bp-118h]
  float v95; // [sp+E4h] [bp-114h]
  float v96; // [sp+E8h] [bp-110h]
  float v97; // [sp+ECh] [bp-10Ch]
  float v98; // [sp+F0h] [bp-108h]
  float v99; // [sp+F4h] [bp-104h]
  float v100; // [sp+F8h] [bp-100h]
  char v101; // [sp+104h] [bp-F4h]
  char v102; // [sp+105h] [bp-F3h]
  __int64 v103; // [sp+108h] [bp-F0h]
  __int64 v104; // [sp+110h] [bp-E8h]
  __int64 v105; // [sp+118h] [bp-E0h]
  __int64 v106; // [sp+120h] [bp-D8h]
  __int64 v107; // [sp+128h] [bp-D0h]
  __int64 v108; // [sp+130h] [bp-C8h]
  __int64 v109; // [sp+138h] [bp-C0h]
  __int64 v110; // [sp+140h] [bp-B8h]
  char v111; // [sp+148h] [bp-B0h]
  char v112; // [sp+149h] [bp-AFh]
  char v113; // [sp+14Ah] [bp-AEh]
  double v114; // [sp+14Ch] [bp-ACh]
  float v115; // [sp+154h] [bp-A4h]
  double v116; // [sp+178h] [bp-80h] BYREF
  float v117; // [sp+180h] [bp-78h]
  double v118; // [sp+188h] [bp-70h]
  float v119; // [sp+190h] [bp-68h]

  v3 = (List_c *)(a1 + 32);
  result = (int *)List_c::GetNumItems((List_c *)(a1 + 32));
  if ( result )
  {
    v6 = **(_DWORD **)(a1 + 12);
    result = (int *)List_c::GetNumItems(v3);
    if ( result )
    {
      v86 = (_DWORD *)a1;
      RwRenderStateSet(12, 1);
      RwRenderStateSet(10, 5);
      RwRenderStateSet(11, 2);
      g_pRaster = v6;
      g_pMatrix = 0;
      v7 = v6;
      g_rwFlags = 1;
      g_numTris = 0;
      g_numVertices = 0;
      g_pVertex3d = (int)&TempVertexBuffer;
      RwRenderStateGet(1, v92);
      if ( *(_DWORD *)v92 != v6 )
        RwRenderStateSet(1, v6);
      v8 = *(_DWORD *)v3;
      if ( *(_DWORD *)v3 )
      {
        v85 = a1 + 44;
        v83 = (__int64 *)(*(_DWORD *)(a2 + 4) + 16);
        v84 = *(float **)(a2 + 4);
        v9 = 0;
        v87 = 0;
        do
        {
          v88 = v7;
          if ( *(_BYTE *)(v8 + 55) )
          {
            v10 = FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
            FxSystem_c::GetCompositeMatrix();
            RwV3dTransformPoints(&v116, v8 + 16, 1, v10);
            FxManager_c::FxRwMatrixDestroy(&g_fxMan, v10);
          }
          else
          {
            v11 = *(double *)(v8 + 16);
            v117 = *(float *)(v8 + 24);
            v116 = v11;
          }
          FxInfoManager_c::ProcessRenderInfo(
            v85,
            *(_DWORD *)(*(_DWORD *)(v8 + 40) + 88),
            COERCE_INT(*(float *)(v8 + 12) / *(float *)(v8 + 8)),
            0,
            *(float *)(*(_DWORD *)(*(_DWORD *)(v8 + 40) + 8) + 12),
            0,
            (int)v92);
          v12 = (_DWORD *)FxManager_c::FxRwMatrixCreate((FxManager_c *)&g_fxMan);
          v12[1] = 0;
          v12[2] = 0;
          *v12 = 1065353216;
          v12[5] = 1065353216;
          v12[6] = 0;
          v12[8] = 0;
          v12[9] = 0;
          v12[10] = 1065353216;
          v12[12] = 0;
          v12[13] = 0;
          v12[14] = 0;
          v12[3] |= (unsigned int)&elf_hash_chain[16294] + 3;
          v12[4] = 0;
          v13 = (double *)(v12 + 4);
          if ( v112 )
          {
            if ( v113 )
            {
              v14 = *(double *)(v8 + 28);
              v119 = *(float *)(v8 + 36);
              v118 = v14;
            }
            else
            {
              v118 = v114;
              v119 = v115;
            }
            RwV3dNormalize();
            v89 = *(float *)&v116 - v84[16];
            v90 = *((float *)&v116 + 1) - v84[17];
            v91 = v117 - v84[18];
            RwV3dNormalize();
            v25 = *((float *)&v118 + 1);
            v26 = *(float *)&v118;
            v27 = v119;
            v28 = (float)(v90 * *(float *)&v118) - (float)(*((float *)&v118 + 1) * v89);
            v29 = (float)(*((float *)&v118 + 1) * v91) - (float)(v119 * v90);
            v30 = (float)(v119 * v89) - (float)(v91 * *(float *)&v118);
            v31 = *(float *)&v118 * v28;
            v32 = v119 * v29;
            *(float *)v12 = v29;
            *((float *)v12 + 1) = v30;
            *((float *)v12 + 2) = v28;
            v33 = v118;
            *((float *)v12 + 6) = v119;
            v23 = v32 - v31;
            *v13 = v33;
            v22 = (float)(v25 * v28) - (float)(v27 * v30);
            v24 = (float)(v26 * v30) - (float)(v25 * v29);
            *((float *)v12 + 8) = v22;
            *((float *)v12 + 9) = v23;
            *((float *)v12 + 10) = v24;
          }
          else if ( v111 )
          {
            v15 = v107;
            v16 = v108;
            v17 = v103;
            v18 = v104;
            v19 = v105;
            v20 = v106;
            v21 = v110;
            *((_QWORD *)v12 + 6) = v109;
            *((_QWORD *)v12 + 7) = v21;
            *((_QWORD *)v12 + 4) = v15;
            *((_QWORD *)v12 + 5) = v16;
            *(_QWORD *)v12 = v17;
            *((_QWORD *)v12 + 1) = v18;
            *((_QWORD *)v12 + 2) = v19;
            *((_QWORD *)v12 + 3) = v20;
            v23 = *((float *)&v107 + 1);
            v22 = *(float *)&v107;
            v24 = *(float *)&v108;
          }
          else
          {
            v57 = v83[4];
            v58 = v83[5];
            v59 = *v83;
            v60 = v83[1];
            v61 = v83[2];
            v62 = v83[3];
            v63 = v83[7];
            *((_QWORD *)v12 + 6) = v83[6];
            *((_QWORD *)v12 + 7) = v63;
            *((_QWORD *)v12 + 4) = v57;
            *((_QWORD *)v12 + 5) = v58;
            *(_QWORD *)v12 = v59;
            *((_QWORD *)v12 + 1) = v60;
            *((_QWORD *)v12 + 2) = v61;
            *((_QWORD *)v12 + 3) = v62;
            v22 = v84[12];
            v23 = v84[13];
            v24 = v84[14];
          }
          if ( *(unsigned __int8 *)(v8 + 54) == 255 )
          {
            v35 = *(float *)(v8 + 56);
            v34 = (float *)(v8 + 56);
            if ( v35 < 0.0 )
            {
              do
                v35 = v35 + 360.0;
              while ( v35 < 0.0 );
              *v34 = v35;
            }
          }
          else
          {
            v34 = (float *)(v8 + 56);
            v35 = (float)*(unsigned __int8 *)(v8 + 54) + (float)*(unsigned __int8 *)(v8 + 54);
            *(float *)(v8 + 56) = v35;
          }
          if ( v35 >= 360.0 )
          {
            do
              v35 = v35 + -360.0;
            while ( v35 >= 360.0 );
            *v34 = v35;
          }
          if ( v35 <= 0.0 )
          {
            v48 = *(float *)v12;
            v49 = *((float *)v12 + 1);
            v47 = *((float *)v12 + 2);
            v50 = *v13;
            v119 = *((float *)v12 + 6);
            v118 = v50;
          }
          else
          {
            v36 = (float)((float)(v35 * 0.017453) * 256.0) / 6.2832;
            v37 = CMaths::ms_SinTable[(unsigned __int8)(unsigned int)(float)(v36 + 64.0)];
            v38 = *((float *)v12 + 1);
            v39 = *((float *)v12 + 2);
            v40 = (unsigned int)v36;
            v41 = v22 * (float)(1.0 - v37);
            v42 = v23 * (float)(1.0 - v37);
            v43 = &CMaths::ms_SinTable[v40];
            v44 = v22 * *v43;
            v45 = v23 * *v43;
            v46 = v24 * *v43;
            v47 = (float)((float)(v37 + (float)(v24 * (float)(v24 * (float)(1.0 - v37)))) * v39)
                + (float)((float)(*(float *)v12 * (float)((float)(v24 * v41) - v45))
                        + (float)(v38 * (float)(v44 + (float)(v24 * v42))));
            v48 = (float)((float)(v45 + (float)(v24 * v41)) * v39)
                + (float)((float)(*(float *)v12 * (float)(v37 + (float)(v22 * v41)))
                        + (float)(v38 * (float)((float)(v23 * v41) - v46)));
            v49 = (float)((float)((float)(v24 * v42) - v44) * v39)
                + (float)((float)(*(float *)v12 * (float)(v46 + (float)(v23 * v41)))
                        + (float)(v38 * (float)(v37 + (float)(v23 * v42))));
            *((float *)&v118 + 1) = (float)(v24 * v48) - (float)(v22 * v47);
            *(float *)&v118 = (float)(v23 * v47) - (float)(v24 * v49);
            v119 = (float)(v22 * v49) - (float)(v23 * v48);
          }
          v51 = v9;
          FxManager_c::FxRwMatrixDestroy(&g_fxMan, v12);
          v52 = v93 + (float)(v95 * (float)((float)((float)*(unsigned __int8 *)(v8 + 50) / 255.0) + -0.5));
          v93 = v52;
          v53 = v94 + (float)(v96 * (float)((float)((float)*(unsigned __int8 *)(v8 + 51) / 255.0) + -0.5));
          v94 = v53;
          v54 = *(unsigned __int8 *)(v8 + 48);
          if ( v54 != 255 )
          {
            v55 = (float)v54 / 255.0;
            v53 = v53 * v55;
            v52 = v55 * v52;
            v94 = v53;
            v93 = v52;
          }
          v92[2] = 0;
          *(_WORD *)v92 = 0;
          if ( v101 )
          {
            switch ( v102 )
            {
              case 1:
                break;
              case 2:
                v56 = (int *)v86[4];
                goto LABEL_37;
              case 3:
                v56 = (int *)v86[5];
                goto LABEL_37;
              case 4:
                v56 = (int *)v86[6];
LABEL_37:
                if ( !v56 )
                  v56 = (int *)v86[3];
                goto LABEL_39;
              default:
                goto LABEL_40;
            }
          }
          v56 = (int *)v86[3];
LABEL_39:
          v51 = *v56;
          v87 = *v56;
LABEL_40:
          if ( v7 == v51 )
          {
            v9 = v51;
            v66 = 0;
            v65 = 0;
            v64 = 0;
          }
          else
          {
            if ( g_numTris )
            {
              if ( RwIm3DTransform() )
              {
                RwIm3DRenderPrimitive();
                RwIm3DEnd();
              }
              g_numVertices = 0;
              g_numTris = 0;
              g_pVertex3d = (int)&TempVertexBuffer;
            }
            g_pMatrix = 0;
            g_pRaster = v87;
            g_rwFlags = 1;
            g_numTris = 0;
            g_numVertices = 0;
            g_pVertex3d = (int)&TempVertexBuffer;
            RwRenderStateGet(1, &v89);
            if ( LODWORD(v89) != v87 )
              RwRenderStateSet(1, v87);
            v64 = v92[0];
            v9 = v51;
            v65 = (unsigned __int8)v92[1];
            v66 = (unsigned __int8)v92[2];
            v52 = v93;
            v53 = v94;
            v88 = v51;
          }
          v67 = v53 * v98;
          v68 = v53 * v97;
          v69 = v52 * v100;
          v70 = v52 * v99;
          v71 = *(float *)&v118 * v67;
          v72 = *(float *)&v118 * v68;
          v73 = *((float *)&v118 + 1) * v68;
          v74 = v68 * v119;
          v75 = v48 * v69;
          v76 = v119 * v67;
          v77 = v49 * v70;
          v78 = v47 * v70;
          v79 = v48 * v70;
          v80 = *((float *)&v118 + 1) * v67;
          v81 = v47 * v69;
          v82 = v49 * v69;
          RenderAddTri(
            v79 + (float)((float)(*(float *)&v118 * v68) + *(float *)&v116),
            v77 + (float)((float)(*((float *)&v118 + 1) * v68) + *((float *)&v116 + 1)),
            v78 + (float)((float)(v68 * v119) + v117),
            (float)((float)(*(float *)&v118 * v67) + *(float *)&v116) + v75,
            v82 + (float)((float)(*((float *)&v118 + 1) * v67) + *((float *)&v116 + 1)),
            v81 + (float)((float)(v119 * v67) + v117),
            (float)((float)(*(float *)&v118 * v68) + *(float *)&v116) + v75,
            v82 + (float)((float)(*((float *)&v118 + 1) * v68) + *((float *)&v116 + 1)),
            v81 + (float)((float)(v68 * v119) + v117),
            0.0,
            0.0,
            1.0,
            1.0,
            1.0,
            0.0,
            v64,
            v65,
            v66,
            (unsigned __int8)v92[3],
            v64,
            v65,
            v66,
            (unsigned __int8)v92[3],
            v64,
            v65,
            v66,
            (unsigned __int8)v92[3]);
          RenderAddTri(
            v75 + (float)(v71 + *(float *)&v116),
            v82 + (float)(v80 + *((float *)&v116 + 1)),
            v81 + (float)(v76 + v117),
            v79 + (float)(v72 + *(float *)&v116),
            v77 + (float)(v73 + *((float *)&v116 + 1)),
            v78 + (float)(v74 + v117),
            v79 + (float)(v71 + *(float *)&v116),
            v77 + (float)(v80 + *((float *)&v116 + 1)),
            v78 + (float)(v76 + v117),
            1.0,
            1.0,
            0.0,
            0.0,
            0.0,
            1.0,
            v92[0],
            (unsigned __int8)v92[1],
            (unsigned __int8)v92[2],
            (unsigned __int8)v92[3],
            v92[0],
            (unsigned __int8)v92[1],
            (unsigned __int8)v92[2],
            (unsigned __int8)v92[3],
            v92[0],
            (unsigned __int8)v92[1],
            (unsigned __int8)v92[2],
            (unsigned __int8)v92[3]);
          v8 = *(_DWORD *)(v8 + 4);
          v7 = v88;
        }
        while ( v8 );
      }
      result = &g_numTris;
      if ( g_numTris )
      {
        if ( RwIm3DTransform() )
        {
          RwIm3DRenderPrimitive();
          RwIm3DEnd();
        }
        result = &g_numVertices;
        g_numVertices = 0;
        g_numTris = 0;
        g_pVertex3d = (int)&TempVertexBuffer;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x3689a0
// Original: _ZN13FxEmitterBP_c15FreePrtFromPrimEP10FxSystem_c
// Demangled: FxEmitterBP_c::FreePrtFromPrim(FxSystem_c *)
int __fastcall FxEmitterBP_c::FreePrtFromPrim(FxEmitterBP_c *this, FxSystem_c *a2)
{
  List_c *v2; // r0
  FxSystem_c ***v3; // r2
  FxSystem_c **v4; // r4

  v2 = (FxEmitterBP_c *)((char *)this + 32);
  v3 = (FxSystem_c ***)v2;
  while ( 1 )
  {
    v4 = *v3;
    if ( !*v3 )
      break;
    v3 = (FxSystem_c ***)(v4 + 1);
    if ( v4[10] == a2 )
    {
      List_c::RemoveItem(v2, (ListItem_c *)v4);
      FxManager_c::ReturnParticle((FxManager_c *)&g_fxMan, (FxEmitterPrt_c *)v4);
      return 1;
    }
  }
  return 0;
}


// ============================================================

// Address: 0x46deac
// Original: _ZN13FxEmitterBP_c12LoadTexturesEP10FxName32_ti
// Demangled: FxEmitterBP_c::LoadTextures(FxName32_t *,int)
int __fastcall FxEmitterBP_c::LoadTextures(_DWORD *a1, const char *a2, int a3)
{
  int v6; // r0
  int v7; // r0
  int v8; // r0
  const char *v9; // r5
  int v10; // r0
  char v12[64]; // [sp+4h] [bp-54h] BYREF

  sub_5E6BC0(v12, (const char *)&dword_46DFB8, a2);
  v6 = RwTextureRead(a2, v12);
  a1[3] = v6;
  if ( v6 )
  {
    if ( a3 < 102 )
      return 1;
  }
  else
  {
    a1[3] = RwTextureRead(a2, 0);
    if ( a3 < 102 )
      return 1;
  }
  if ( strcmp(a2 + 32, "NULL") )
  {
    sub_5E6BC0(v12, (const char *)&dword_46DFB8, a2 + 32);
    v7 = RwTextureRead(a2 + 32, v12);
    a1[4] = v7;
    if ( !v7 )
      a1[4] = RwTextureRead(a2 + 32, 0);
  }
  if ( strcmp(a2 + 64, "NULL") )
  {
    sub_5E6BC0(v12, (const char *)&dword_46DFB8, a2 + 64);
    v8 = RwTextureRead(a2 + 64, v12);
    a1[5] = v8;
    if ( !v8 )
      a1[5] = RwTextureRead(a2 + 64, 0);
  }
  v9 = a2 + 96;
  if ( strcmp(v9, "NULL") )
  {
    sub_5E6BC0(v12, (const char *)&dword_46DFB8, v9);
    v10 = RwTextureRead(v9, v12);
    a1[6] = v10;
    if ( !v10 )
      a1[6] = RwTextureRead(v9, 0);
  }
  return 1;
}


// ============================================================

// Address: 0x46dfc8
// Original: _ZN13FxEmitterBP_c4LoadEjiP10FxName32_t
// Demangled: FxEmitterBP_c::Load(uint,int,FxName32_t *)
int __fastcall FxEmitterBP_c::Load(int a1, unsigned int a2)
{
  float v5; // [sp+0h] [bp-1A8h] BYREF
  char v6; // [sp+4h] [bp-1A4h] BYREF
  char v7[256]; // [sp+84h] [bp-124h] BYREF

  FxPrimBP_c::Load(a1, a2);
  ReadLine(a2, v7, 256);
  sscanf(v7, "%s %f", &v6, &v5);
  *(_WORD *)(a1 + 56) = (unsigned int)(float)(v5 * 64.0);
  ReadLine(a2, v7, 256);
  sscanf(v7, "%s %f", &v6, &v5);
  *(_WORD *)(a1 + 58) = (unsigned int)(float)(v5 * 64.0);
  return 1;
}


// ============================================================
