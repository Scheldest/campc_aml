
// Address: 0x18da0c
// Original: j__ZN14CWeaponEffects8ShutdownEv
// Demangled: CWeaponEffects::Shutdown(void)
// attributes: thunk
int __fastcall CWeaponEffects::Shutdown(CWeaponEffects *this)
{
  return _ZN14CWeaponEffects8ShutdownEv(this);
}


// ============================================================

// Address: 0x18fbd4
// Original: j__ZN14CWeaponEffects10MarkTargetEi7CVectorhhhhfh
// Demangled: CWeaponEffects::MarkTarget(int,CVector,uchar,uchar,uchar,uchar,float,uchar)
// attributes: thunk
int CWeaponEffects::MarkTarget()
{
  return _ZN14CWeaponEffects10MarkTargetEi7CVectorhhhhfh();
}


// ============================================================

// Address: 0x1939b4
// Original: j__ZN14CWeaponEffects14ClearCrossHairEi
// Demangled: CWeaponEffects::ClearCrossHair(int)
// attributes: thunk
int __fastcall CWeaponEffects::ClearCrossHair(CWeaponEffects *this, int a2)
{
  return _ZN14CWeaponEffects14ClearCrossHairEi(this, a2);
}


// ============================================================

// Address: 0x193e34
// Original: j__ZN14CWeaponEffects25ClearCrossHairImmediatelyEi
// Demangled: CWeaponEffects::ClearCrossHairImmediately(int)
// attributes: thunk
int __fastcall CWeaponEffects::ClearCrossHairImmediately(CWeaponEffects *this, int a2)
{
  return _ZN14CWeaponEffects25ClearCrossHairImmediatelyEi(this, a2);
}


// ============================================================

// Address: 0x194500
// Original: j__ZN14CWeaponEffects18ClearAllCrosshairsEv
// Demangled: CWeaponEffects::ClearAllCrosshairs(void)
// attributes: thunk
int __fastcall CWeaponEffects::ClearAllCrosshairs(CWeaponEffects *this)
{
  return _ZN14CWeaponEffects18ClearAllCrosshairsEv(this);
}


// ============================================================

// Address: 0x19a60c
// Original: j__ZN14CWeaponEffects4InitEv
// Demangled: CWeaponEffects::Init(void)
// attributes: thunk
int __fastcall CWeaponEffects::Init(CWeaponEffects *this)
{
  return _ZN14CWeaponEffects4InitEv(this);
}


// ============================================================

// Address: 0x19a874
// Original: j__ZN14CWeaponEffects15ClearCrossHairsEv
// Demangled: CWeaponEffects::ClearCrossHairs(void)
// attributes: thunk
int __fastcall CWeaponEffects::ClearCrossHairs(CWeaponEffects *this)
{
  return _ZN14CWeaponEffects15ClearCrossHairsEv(this);
}


// ============================================================

// Address: 0x19c780
// Original: j__ZN14CWeaponEffects10IsLockedOnEi
// Demangled: CWeaponEffects::IsLockedOn(int)
// attributes: thunk
int __fastcall CWeaponEffects::IsLockedOn(CWeaponEffects *this, int a2)
{
  return _ZN14CWeaponEffects10IsLockedOnEi(this, a2);
}


// ============================================================

// Address: 0x19fbfc
// Original: j__ZN14CWeaponEffects6RenderEv
// Demangled: CWeaponEffects::Render(void)
// attributes: thunk
int __fastcall CWeaponEffects::Render(CWeaponEffects *this)
{
  return _ZN14CWeaponEffects6RenderEv(this);
}


// ============================================================

// Address: 0x5e3104
// Original: _ZN14CWeaponEffectsC2Ev
// Demangled: CWeaponEffects::CWeaponEffects(void)
void __fastcall CWeaponEffects::CWeaponEffects(CWeaponEffects *this)
{
  ;
}


// ============================================================

// Address: 0x5e3106
// Original: _ZN14CWeaponEffectsD2Ev
// Demangled: CWeaponEffects::~CWeaponEffects()
void __fastcall CWeaponEffects::~CWeaponEffects(CWeaponEffects *this)
{
  ;
}


// ============================================================

// Address: 0x5e3108
// Original: _ZN14CWeaponEffects4InitEv
// Demangled: CWeaponEffects::Init(void)
int __fastcall CWeaponEffects::Init(CWeaponEffects *this)
{
  const char *v1; // r1
  CTxdStore *TxdSlot; // r0
  const char *v3; // r2

  gCrossHair = 0;
  dword_A86210 = 0;
  unk_A86214 = 0;
  dword_A86218 = 0;
  unk_A8621C = 0;
  dword_A86220 = 2130706687;
  unk_A86224 = 1065353216;
  dword_A86228 = 0;
  byte_A86234 = 0;
  dword_A86230 = 0;
  byte_A86238 = 0;
  dword_A8623C = 0;
  unk_A86240 = 0;
  dword_A86244 = 0;
  unk_A86248 = 0;
  dword_A8624C = 2130706687;
  unk_A86250 = 1065353216;
  dword_A86254 = 0;
  byte_A86260 = 0;
  dword_A8625C = 0;
  CTxdStore::PushCurrentTxd((CTxdStore *)&gCrossHair);
  TxdSlot = (CTxdStore *)CTxdStore::FindTxdSlot((CTxdStore *)"particle", v1);
  CTxdStore::SetCurrentTxd(TxdSlot, 0, v3);
  gpCrossHairTex = RwTextureRead("target256", "target256m");
  gpCrossHairTexFlight = RwTextureRead("lockon", "lockonA");
  dword_A8626C = RwTextureRead("lockonFire", "lockonFireA");
  return sub_1979CC((CTxdStore *)dword_A8626C);
}


// ============================================================

// Address: 0x5e31e8
// Original: _ZN14CWeaponEffects8ShutdownEv
// Demangled: CWeaponEffects::Shutdown(void)
int __fastcall CWeaponEffects::Shutdown(CWeaponEffects *this)
{
  int result; // r0

  RwTextureDestroy(dword_A8626C);
  dword_A8626C = 0;
  RwTextureDestroy(gpCrossHairTexFlight);
  gpCrossHairTexFlight = 0;
  result = RwTextureDestroy(gpCrossHairTex);
  gpCrossHairTex = 0;
  return result;
}


// ============================================================

// Address: 0x5e3224
// Original: _ZN14CWeaponEffects10IsLockedOnEi
// Demangled: CWeaponEffects::IsLockedOn(int)
unsigned int __fastcall CWeaponEffects::IsLockedOn(CWeaponEffects *this, int a2)
{
  return (unsigned int)*(float *)&gCrossHair[44 * (_DWORD)this + 36];
}


// ============================================================

// Address: 0x5e3244
// Original: _ZN14CWeaponEffects10MarkTargetEi7CVectorhhhhfh
// Demangled: CWeaponEffects::MarkTarget(int,CVector,uchar,uchar,uchar,uchar,float,uchar)
char *__fastcall CWeaponEffects::MarkTarget(
        int a1,
        int a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        int a8,
        char a9)
{
  char *result; // r0

  result = &gCrossHair[44 * a1];
  *result = 1;
  result[21] = a5;
  result[22] = a6;
  result[23] = a7;
  *((_DWORD *)result + 6) = a8;
  *((_DWORD *)result + 1) = -1;
  *((_DWORD *)result + 2) = a2;
  *(_QWORD *)(result + 12) = a3;
  result[20] = a4;
  result[40] = a9;
  return result;
}


// ============================================================

// Address: 0x5e32a8
// Original: _ZN14CWeaponEffects14ClearCrossHairEi
// Demangled: CWeaponEffects::ClearCrossHair(int)
char *__fastcall CWeaponEffects::ClearCrossHair(CWeaponEffects *this, int a2)
{
  char *result; // r0

  result = &gCrossHair[44 * (_DWORD)this];
  *((_DWORD *)result + 1) = CTimer::m_snTimeInMilliseconds + 400;
  return result;
}


// ============================================================

// Address: 0x5e32cc
// Original: _ZN14CWeaponEffects15ClearCrossHairsEv
// Demangled: CWeaponEffects::ClearCrossHairs(void)
char *__fastcall CWeaponEffects::ClearCrossHairs(CWeaponEffects *this)
{
  char *result; // r0

  result = gCrossHair;
  byte_A86238 = 0;
  gCrossHair[0] = 0;
  return result;
}


// ============================================================

// Address: 0x5e32e0
// Original: _ZN14CWeaponEffects25ClearCrossHairImmediatelyEi
// Demangled: CWeaponEffects::ClearCrossHairImmediately(int)
int __fastcall CWeaponEffects::ClearCrossHairImmediately(CWeaponEffects *this, int a2)
{
  char *v2; // lr
  int result; // r0

  v2 = &gCrossHair[44 * (_DWORD)this];
  *v2 = 0;
  result = CTimer::m_snTimeInMilliseconds - 100;
  *((_DWORD *)v2 + 1) = CTimer::m_snTimeInMilliseconds - 100;
  return result;
}


// ============================================================

// Address: 0x5e3318
// Original: _ZN14CWeaponEffects18ClearAllCrosshairsEv
// Demangled: CWeaponEffects::ClearAllCrosshairs(void)
int __fastcall CWeaponEffects::ClearAllCrosshairs(CWeaponEffects *this)
{
  int result; // r0

  gCrossHair[0] = 0;
  byte_A86238 = 0;
  result = CTimer::m_snTimeInMilliseconds - 100;
  dword_A86210 = CTimer::m_snTimeInMilliseconds - 100;
  dword_A8623C = CTimer::m_snTimeInMilliseconds - 100;
  return result;
}


// ============================================================

// Address: 0x5e3340
// Original: _ZN14CWeaponEffects6RenderEv
// Demangled: CWeaponEffects::Render(void)
int __fastcall CWeaponEffects::Render(CWeaponEffects *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  float32x2_t v4; // d3
  float32x2_t v5; // d8
  __int64 v6; // d9
  __int64 v7; // d10
  __int64 v8; // d11
  __int64 v9; // d12
  __int64 v10; // d13
  float32x2_t v11; // d14
  __int64 v12; // d15
  int result; // r0
  float v14; // s31
  int i; // r4
  float v16; // s0
  float v17; // s2
  float v18; // s0
  char *v19; // r0
  unsigned int v20; // r1
  char *v21; // r0
  double v22; // d16
  float v23; // s2
  float32x2_t v24; // d0
  float v25; // r3
  float32x2_t v26; // d0
  float32x2_t v27; // d0
  float v28; // r3
  float32x2_t v29; // d0
  char *v30; // r9
  float32x2_t v31; // d13
  float v32; // s30
  float32x2_t v33; // d1
  float v34; // s28
  float32x2_t v35; // d0
  float32x2_t v36; // d0
  float v37; // s20
  float v38; // s19
  CPlayerPed **v39; // r9
  int IsCoopGameGoingOn; // r5
  int v41; // r0
  int v42; // r1
  float *v43; // r5
  float v44; // s20
  char *v45; // r5
  float32x2_t v46; // d16
  float v47; // s28
  bool v48; // nf
  float v49; // r0
  float v50; // s30
  float v51; // s19
  char *v52; // r10
  float v53; // s20
  float v54; // s28
  float v55; // s30
  float v56; // s19
  float v57; // s29
  float v58; // s21
  float v59; // s26
  float v60; // s27
  float v61; // r5
  int v62; // r1
  float *v63; // r2
  float v64; // r6
  float v65; // r4
  float v66; // r6
  float v67; // s6
  float v68; // s30
  float v69; // s19
  unsigned __int64 v70; // d13
  float v71; // s6
  int v72; // r11
  char *v73; // r0
  float *v74; // r8
  float *v75; // r2
  float v76; // s20
  float v77; // r4
  float v78; // s0
  float v79; // s2
  float v80; // s20
  float v81; // s0
  float v82; // s2
  float v83; // s26
  float v84; // s28
  float v85; // s17
  float v86; // s21
  float v87; // s27
  float v88; // s21
  float v89; // s4
  float v90; // s0
  float v91; // s2
  float v92; // s20
  float v93; // s28
  float v94; // s21
  unsigned __int64 v95; // d13
  float v96; // s2
  int v97; // r0
  float v98; // s0
  float v99; // s2
  char *v100; // r4
  int v101; // r1
  int NearestTargetEntityWithScreenCoors; // r5
  bool v103; // zf
  int v104; // r1
  int v105; // r0
  float v106; // s0
  float v107; // s2
  int v108; // r5
  float v109; // s2
  unsigned __int8 v110; // [sp+20h] [bp-F0h]
  unsigned __int8 v111; // [sp+20h] [bp-F0h]
  unsigned __int8 v112; // [sp+20h] [bp-F0h]
  unsigned __int8 v113; // [sp+20h] [bp-F0h]
  unsigned __int8 v114; // [sp+20h] [bp-F0h]
  unsigned __int8 v115; // [sp+20h] [bp-F0h]
  unsigned __int8 v116; // [sp+24h] [bp-ECh]
  unsigned __int8 v117; // [sp+24h] [bp-ECh]
  unsigned __int8 v118; // [sp+24h] [bp-ECh]
  int *v119; // [sp+5Ch] [bp-B4h]
  int v120; // [sp+6Ch] [bp-A4h]
  float *v121; // [sp+74h] [bp-9Ch]
  _BYTE *v122; // [sp+78h] [bp-98h]
  _BYTE *v123; // [sp+7Ch] [bp-94h]
  unsigned __int8 *v124; // [sp+80h] [bp-90h]
  unsigned __int8 *v125; // [sp+84h] [bp-8Ch]
  double v126; // [sp+88h] [bp-88h] BYREF
  int v127; // [sp+90h] [bp-80h]
  float v128; // [sp+94h] [bp-7Ch] BYREF
  float v129; // [sp+98h] [bp-78h] BYREF
  CSprite *v130; // [sp+9Ch] [bp-74h] BYREF
  float v131; // [sp+A0h] [bp-70h]
  float v132; // [sp+A4h] [bp-6Ch]
  unsigned __int64 v133; // [sp+A8h] [bp-68h]
  __int64 v134; // [sp+B0h] [bp-60h]
  __int64 v135; // [sp+B8h] [bp-58h]
  __int64 v136; // [sp+C0h] [bp-50h]
  __int64 v137; // [sp+C8h] [bp-48h]
  __int64 v138; // [sp+D0h] [bp-40h]
  unsigned __int64 v139; // [sp+D8h] [bp-38h]
  __int64 v140; // [sp+E0h] [bp-30h]

  result = (unsigned __int8)byte_951FE3;
  if ( byte_951FE3 )
    return result;
  v133 = v5.n64_u64[0];
  v134 = v6;
  v135 = v7;
  v136 = v8;
  v137 = v9;
  v138 = v10;
  v139 = v11.n64_u64[0];
  v140 = v12;
  v11.n64_u32[0] = 20.0;
  v5.n64_u32[0] = 15.0;
  v14 = -15.0;
  for ( i = 0; i != 2; ++i )
  {
    v19 = &gCrossHair[44 * i];
    v20 = *((_DWORD *)v19 + 1);
    if ( !v20 )
      goto LABEL_11;
    if ( v20 < CTimer::m_snTimeInMilliseconds )
    {
      *v19 = 0;
      *((_DWORD *)v19 + 1) = 0;
      dword_A86278[i] = 0;
LABEL_11:
      dword_A86278[i] = 0;
      goto LABEL_14;
    }
    if ( v20 != -1 )
      dword_A86278[i] = 0;
LABEL_14:
    if ( CWorld::Players[101 * i] )
    {
      if ( *v19 )
      {
        if ( gCrossHair[44 * i + 40] == 1 )
        {
          v21 = &gCrossHair[44 * i];
          v22 = *((double *)v21 + 1);
          v127 = *((_DWORD *)v21 + 4);
          v126 = v22;
          if ( CSprite::CalcScreenCoors((int)&v126, (int)&v130, (int)&v129, (int)&v128, 1, 1) == 1 )
          {
            v23 = v11.n64_f32[0] / v128;
            if ( (float)(v11.n64_f32[0] / v128) > 1.0 )
            {
              v128 = v23 * v128;
              v129 = v23 * v129;
            }
            RwRenderStateSet(8, 0);
            RwRenderStateSet(6, 0);
            RwRenderStateSet(12, 1);
            RwRenderStateSet(10, 5);
            RwRenderStateSet(11, 6);
            RwRenderStateSet(1, *(_DWORD *)gpCrossHairTexFlight);
            v5.n64_u32[0] = 28.0;
            v1.n64_f32[0] = v129;
            v24.n64_u64[0] = vmin_f32(v1, v5).n64_u64[0];
            v25 = (float)(v24.n64_f32[0] * 1.8) * 0.95;
            v24.n64_f32[0] = v128;
            v26.n64_u64[0] = vmin_f32(v24, v11).n64_u64[0];
            CSprite::RenderOneXLUSprite_Rotate_Aspect(
              v130,
              v131,
              v132,
              v25,
              (float)(v26.n64_f32[0] * 1.8) * 0.95,
              0.0,
              0,
              0,
              0xFFu,
              55050,
              0.0,
              COERCE_FLOAT(255),
              v110);
            v26.n64_f32[0] = v129;
            v27.n64_u64[0] = vmin_f32(v26, v5).n64_u64[0];
            v28 = (float)(v27.n64_f32[0] * 1.8) * 1.05;
            v27.n64_f32[0] = v128;
            v29.n64_u64[0] = vmin_f32(v27, v11).n64_u64[0];
            CSprite::RenderOneXLUSprite_Rotate_Aspect(
              v130,
              v131,
              v132,
              v28,
              (float)(v29.n64_f32[0] * 1.8) * 1.05,
              0.0,
              0,
              0,
              0xFFu,
              55050,
              0.0,
              COERCE_FLOAT(255),
              v111);
            v30 = &gCrossHair[44 * i];
            v29.n64_f32[0] = v129;
            v35.n64_u64[0] = vmin_f32(v29, v5).n64_u64[0];
            v2.n64_f32[0] = v128;
            v33.n64_u64[0] = vmin_f32(v2, v11).n64_u64[0];
            CSprite::RenderOneXLUSprite_Rotate_Aspect(
              v130,
              v131,
              v132,
              v35.n64_f32[0] * 1.8,
              v33.n64_f32[0] * 1.8,
              COERCE_FLOAT(v30[20]),
              v30[21],
              v30[22],
              0xFFu,
              55050,
              0.0,
              COERCE_FLOAT(v30[23]),
              v112);
            RwRenderStateSet(1, *(_DWORD *)dword_A8626C);
            v31.n64_u64[0] = v11.n64_u64[0];
            v32 = (float)(CTimer::m_snTimeInMilliseconds & 0x3FF) * 0.0061359;
            v35.n64_f32[0] = *((float *)v30 + 8) - (float)(v32 * v11.n64_f32[0]);
            v33.n64_u32[0] = 0;
            v34 = vmax_f32(v35, v33).n64_f32[0];
            v35.n64_u32[0] = 0;
            if ( v34 == 0.0 )
              v35.n64_u32[0] = 1.0;
            *((float *)v30 + 8) = v34;
            *((_DWORD *)v30 + 9) = v35.n64_u32[0];
            v35.n64_f32[0] = v128;
            v33.n64_f32[0] = v129;
            v36.n64_u64[0] = vmin_f32(v35, v31).n64_u64[0];
            v37 = vmin_f32(v33, v5).n64_f32[0];
            v38 = v36.n64_f32[0] * 0.8;
            v5.n64_u32[1] = cosf(v32);
            v3.n64_f32[0] = v5.n64_f32[1] * v34;
            v36.n64_f32[0] = sinf(v32) * v34;
            v11.n64_u64[0] = v31.n64_u64[0];
            flt_A86284 = v3.n64_f32[0];
            flt_A86280 = v36.n64_f32[0];
            CSprite::RenderOneXLUSprite_Rotate_Aspect(
              COERCE_CSPRITE_(*(float *)&v130 - v36.n64_f32[0]),
              v131 - v3.n64_f32[0],
              v132,
              (float)(v37 * 0.8) * 0.95,
              v38 * 0.95,
              0.0,
              0,
              0,
              0xFFu,
              55050,
              v32,
              COERCE_FLOAT(255),
              v113);
            v5.n64_u32[0] = 28.0;
            v33.n64_f32[0] = v129;
            v36.n64_f32[0] = v128;
            v2.n64_u64[0] = vmin_f32(v33, v5).n64_u64[0];
            CSprite::RenderOneXLUSprite_Rotate_Aspect(
              COERCE_CSPRITE_(*(float *)&v130 - flt_A86280),
              v131 - flt_A86284,
              v132,
              (float)(v2.n64_f32[0] * 0.8) * 1.05,
              (float)(vmin_f32(v36, v31).n64_f32[0] * 0.8) * 1.05,
              0.0,
              0,
              0,
              0xFFu,
              55050,
              v32,
              COERCE_FLOAT(255),
              v114);
            v3.n64_f32[0] = v129;
            v3.n64_u64[0] = vmin_f32(v3, v5).n64_u64[0];
            v4.n64_f32[0] = v128;
            v1.n64_u64[0] = vmin_f32(v4, v31).n64_u64[0];
            CSprite::RenderOneXLUSprite_Rotate_Aspect(
              COERCE_CSPRITE_(*(float *)&v130 - flt_A86280),
              v131 - flt_A86284,
              v132,
              v3.n64_f32[0] * 0.8,
              v1.n64_f32[0] * 0.8,
              COERCE_FLOAT(v30[20]),
              v30[21],
              v30[22],
              v30[23],
              55050,
              v32,
              COERCE_FLOAT(255),
              v115);
            v5.n64_u32[0] = 15.0;
            v14 = -15.0;
          }
          RwRenderStateSet(8, 1);
          RwRenderStateSet(6, 1);
        }
        else
        {
          v119 = (int *)(v19 + 4);
          v39 = (CPlayerPed **)&CWorld::Players[101 * i];
          RwRenderStateSet(8, 0);
          RwRenderStateSet(6, 0);
          RwRenderStateSet(12, 1);
          RwRenderStateSet(1, 0);
          IsCoopGameGoingOn = CGameLogic::IsCoopGameGoingOn((CGameLogic *)gCrossHair);
          v41 = CGameLogic::IsCoopGameGoingOn((CGameLogic *)IsCoopGameGoingOn);
          v42 = IsCoopGameGoingOn ^ 1;
          v43 = (float *)&gCrossHair[44 * i + 8];
          CSprite::CalcScreenCoors((int)v43, (int)&v130, (int)&v129, (int)&v128, v42, v41 ^ 1);
          v120 = i;
          if ( *(float *)&v130 < 0.0
            || *(float *)&v130 > (float)dword_9FC900
            || v131 < 0.0
            || v131 > (float)dword_9FC904 )
          {
            if ( CGameLogic::IsCoopGameGoingOn((CGameLogic *)&RsGlobal) == 1 )
            {
              v52 = &gCrossHair[44 * i];
              v53 = *v43;
              v54 = *((float *)v52 + 3);
              v55 = *((float *)v52 + 4);
              v56 = unk_9528C8;
              v5.n64_f32[1] = flt_9528C4;
              v57 = unk_9528A8;
              v58 = unk_9528A4;
              v59 = unk_9528CC;
              v60 = flt_9528AC[0];
              v61 = atan2f(
                      (float)((float)((float)(*v43 - *(float *)&dword_9528D4) * flt_9528C4)
                            + (float)((float)(v54 - *(float *)&dword_9528D8) * unk_9528C8))
                    + (float)((float)(v55 - *(float *)&dword_9528DC) * unk_9528CC),
                      (float)((float)((float)(*v43 - *(float *)&dword_9528D4) * unk_9528A4)
                            + (float)((float)(v54 - *(float *)&dword_9528D8) * unk_9528A8))
                    + (float)((float)(v55 - *(float *)&dword_9528DC) * flt_9528AC[0]));
              v62 = *((_DWORD *)*v39 + 5);
              v63 = (float *)(v62 + 48);
              if ( !v62 )
                v63 = (float *)((char *)*v39 + 4);
              v64 = atan2f(
                      (float)((float)(v5.n64_f32[1] * (float)(v53 - *v63)) + (float)(v56 * (float)(v54 - v63[1])))
                    + (float)(v59 * (float)(v55 - v63[2])),
                      (float)((float)(v58 * (float)(v53 - *v63)) + (float)(v57 * (float)(v54 - v63[1])))
                    + (float)(v60 * (float)(v55 - v63[2])));
              v65 = sinf(v64);
              v66 = cosf(v64);
              v67 = sinf(v61);
              v5.n64_f32[1] = v65 * v5.n64_f32[0];
              v68 = (float)(1.0 - cosf(v61)) * (float)((float)dword_9FC900 * 0.5);
              v69 = (float)(1.0 - v67) * (float)((float)dword_9FC904 * 0.5);
              *((float *)&v70 + 1) = v66 * 7.5;
              CSprite::RenderOneXLUSprite_Triangle(
                (CSprite *)LODWORD(v68),
                v69,
                (float)(v65 * 7.5) + (float)((float)(v66 * v5.n64_f32[0]) + v68),
                (float)(v5.n64_f32[1] + v69) - (float)(v66 * 7.5),
                (float)((float)(v66 * v5.n64_f32[0]) + v68) - (float)(v65 * 7.5),
                (float)(v66 * 7.5) + (float)(v5.n64_f32[1] + v69),
                2.5,
                0.0,
                0,
                0,
                0xFFu,
                1.0,
                COERCE_FLOAT(255),
                v116);
              v71 = v66 * 1.5 + v68;
              LODWORD(v70) = 20.0;
              v11.n64_u64[0] = v70;
              CSprite::RenderOneXLUSprite_Triangle(
                (CSprite *)LODWORD(v71),
                (float)(v65 * 1.5) + v69,
                (float)((float)((float)(v65 * 7.5) + (float)(v66 * v5.n64_f32[0])) * 0.8) + v71,
                (float)((float)(v5.n64_f32[1] - *((float *)&v70 + 1)) * 0.8) + (float)((float)(v65 * 1.5) + v69),
                (float)((float)((float)(v66 * v5.n64_f32[0]) - (float)(v65 * 7.5)) * 0.8) + v71,
                (float)((float)(v5.n64_f32[1] + *((float *)&v70 + 1)) * 0.8) + (float)((float)(v65 * 1.5) + v69),
                2.5,
                COERCE_FLOAT(v52[20]),
                v52[21],
                v52[22],
                0xFFu,
                1.0,
                COERCE_FLOAT(255),
                v117);
            }
          }
          else
          {
            v44 = v11.n64_f32[0];
            v2.n64_u32[0] = 1067030938;
            v45 = &gCrossHair[44 * i + 24];
            v1.n64_u32[0] = *(_DWORD *)v45;
            v46.n64_u64[0] = vmin_f32(v1, v2).n64_u64[0];
            v1.n64_u32[0] = 1050253722;
            LODWORD(v47) = vmax_f32(v46, v1).n64_u32[0];
            v48 = v132 < 2.5;
            *(float *)v45 = v47;
            if ( v48 )
              v132 = 2.5;
            v49 = COERCE_FLOAT(CPlayerPed::GetWeaponRadiusOnScreen(*v39));
            if ( v49 <= 0.0 )
            {
              v51 = v47 * 25.0;
              v50 = v47 * 5.0;
            }
            else
            {
              v50 = v49 * 30.0;
              v51 = (float)(v49 * 30.0) + (float)(*(float *)v45 * v44);
            }
            RwRenderStateSet(10, 1);
            RwRenderStateSet(11, 1);
            v72 = 0;
            v73 = &gCrossHair[44 * i];
            v125 = (unsigned __int8 *)(v73 + 22);
            v124 = (unsigned __int8 *)(v73 + 21);
            v123 = v73 + 20;
            v74 = (float *)(v73 + 28);
            v122 = v73 + 23;
            v75 = (float *)&dword_A86278[i];
            v121 = v75;
            do
            {
              v5.n64_f32[1] = v50 + *v75;
              v76 = (float)v72 * 120.0;
              v77 = (float)((float)(v76 * 3.1416) / 180.0) + *v74;
              v78 = v76 + v5.n64_f32[0];
              v79 = v76 + v14;
              v80 = v51 + *v75;
              v81 = (float)((float)(v78 * 3.1416) / 180.0) + *v74;
              v82 = (float)((float)(v79 * 3.1416) / 180.0) + *v74;
              v83 = v5.n64_f32[1] * sinf(v77);
              v84 = v5.n64_f32[1] * cosf(v77);
              v85 = sinf(v81);
              v86 = sinf(v82);
              v87 = cosf(v82);
              v88 = v80 * v86;
              v89 = v80 * v85;
              v90 = v80 * cosf(v81);
              v91 = v80 * v87;
              v92 = v131 - v84;
              v93 = *(float *)&v130 - v88;
              *(float *)&v95 = *(float *)&v130 - v83;
              v94 = *(float *)&v130 - v89;
              *((float *)&v95 + 1) = v131 - v90;
              v5.n64_f32[1] = v131 - v91;
              CSprite::RenderOneXLUSprite_Triangle(
                (CSprite *)v95,
                v92,
                *(float *)&v130 - v89,
                v131 - v90,
                v93,
                v131 - v91,
                v132,
                0.0,
                0,
                0,
                0xFFu,
                1.0,
                COERCE_FLOAT(*v122),
                v116);
              RwRenderStateSet(10, 5);
              RwRenderStateSet(11, 6);
              RwRenderStateSet(20, 1);
              v1.n64_f32[0] = (float)((float)(*(float *)&v95 + v94) + v93) / 3.0;
              v96 = (float)((float)(v92 + *((float *)&v95 + 1)) + v5.n64_f32[1]) / 3.0;
              v1.n64_f32[1] = v93 - v1.n64_f32[0];
              CSprite::RenderOneXLUSprite_Triangle(
                COERCE_CSPRITE_(v1.n64_f32[0] + (float)((float)(*(float *)&v95 - v1.n64_f32[0]) * 0.75)),
                v96 + (float)((float)(v92 - v96) * 0.75),
                v1.n64_f32[0] + (float)((float)(v94 - v1.n64_f32[0]) * 0.75),
                v96 + (float)((float)(*((float *)&v95 + 1) - v96) * 0.75),
                v1.n64_f32[0] + (float)((float)(v93 - v1.n64_f32[0]) * 0.75),
                v96 + (float)((float)(v5.n64_f32[1] - v96) * 0.75),
                v132,
                COERCE_FLOAT(*v123),
                *v124,
                *v125,
                0xFFu,
                1.0,
                COERCE_FLOAT(*v122),
                v118);
              v75 = v121;
              ++v72;
            }
            while ( v72 != 3 );
            v97 = *v119;
            if ( (unsigned int)(*v119 + 1) >= 2 )
            {
              v98 = *v74 + 0.75;
              v99 = *v121 + 2.0;
              *v74 = v98;
              *v121 = v99;
              *(float *)v45 = *(float *)v45 * 0.9;
            }
            else
            {
              v98 = *v74 + 0.05;
              *v74 = v98;
            }
            LODWORD(v95) = 20.0;
            v11.n64_u64[0] = v95;
            if ( v98 > 6.2832 )
              *v74 = 0.0;
            if ( !v97 )
            {
              if ( byte_6B2C94[v120] )
              {
                v16 = *(float *)v45 * 20.0;
                v17 = *v121 + (float)(*(float *)v45 + *(float *)v45);
                *v121 = v17;
                if ( v17 > v16 )
                  byte_6B2C94[v120] = 0;
              }
              else
              {
                v18 = *v121 + -2.0;
                *v121 = v18;
                if ( v18 < 0.0 )
                  byte_6B2C94[v120] = 1;
              }
            }
          }
          RwRenderStateSet(12, 0);
          RwRenderStateSet(8, 1);
          RwRenderStateSet(6, 1);
          i = v120;
        }
      }
    }
    else
    {
      *v19 = 0;
    }
  }
  if ( *((_WORD *)&TheCamera + 264 * (unsigned __int8)byte_951FFF + 191) == 49 )
  {
    RwRenderStateSet(8, 0);
    RwRenderStateSet(6, 0);
    RwRenderStateSet(12, 1);
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 6);
    RwRenderStateSet(1, *(_DWORD *)gpCrossHairTex);
    v100 = (char *)dword_96B830;
    v101 = *(_DWORD *)(CWorld::Players[0] + 1424);
    if ( v101 && *(_DWORD *)(v101 + 1124) != CWorld::Players[0] )
      v100 = (char *)CWorld::Players[0];
    if ( *(_DWORD *)&v100[28 * v100[1820] + 1456] )
      CSprite::RenderOneXLUSprite_Rotate_Aspect(
        COERCE_CSPRITE_(
          (float)((float)(*((float *)&TheCamera + 132 * (unsigned __int8)byte_951FFF + 148) + 1.0) * (float)dword_9FC900)
        * 0.5),
        (float)((float)(*((float *)&TheCamera + 132 * (unsigned __int8)byte_951FFF + 149) + 1.0) * (float)dword_9FC904)
      * 0.5,
        100.0,
        20.0,
        20.0,
        COERCE_FLOAT(255),
        0x80u,
        0,
        0x80u,
        55050,
        (float)(CTimer::m_snTimeInMilliseconds & 0x3FF) * 0.0061359,
        COERCE_FLOAT(255),
        v110);
    NearestTargetEntityWithScreenCoors = 0;
    if ( v100 )
    {
      CPed::GetWeaponSkill((CPed *)v100);
      CWeaponInfo::GetWeaponInfo();
      NearestTargetEntityWithScreenCoors = CWeapon::FindNearestTargetEntityWithScreenCoors();
    }
    if ( NearestTargetEntityWithScreenCoors != dword_A86270 )
    {
      dword_A86270 = NearestTargetEntityWithScreenCoors;
      dword_A86274 = CTimer::m_snTimeInMilliseconds;
    }
    v103 = NearestTargetEntityWithScreenCoors == 0;
    if ( NearestTargetEntityWithScreenCoors )
      v103 = *(_DWORD *)&v100[28 * v100[1820] + 1456] == 0;
    if ( !v103 )
    {
      v104 = *(_DWORD *)(NearestTargetEntityWithScreenCoors + 20);
      v105 = v104 + 48;
      if ( !v104 )
        v105 = NearestTargetEntityWithScreenCoors + 4;
      if ( CSprite::CalcScreenCoors(v105, (int)&v130, (int)&v129, (int)&v128, 1, 1) == 1 )
      {
        v106 = v128;
        v107 = v11.n64_f32[0] / v128;
        if ( (float)(v11.n64_f32[0] / v128) > 1.0 )
        {
          v106 = v107 * v128;
          v128 = v107 * v128;
          v129 = v107 * v129;
        }
        LOBYTE(v108) = -1;
        if ( CTimer::m_snTimeInMilliseconds - dword_A86274 < 744 )
          v108 = (CTimer::m_snTimeInMilliseconds - dword_A86274) / 4 + 70;
        v3.n64_u32[0] = 1.0;
        v2.n64_f32[0] = (float)((float)(CTimer::m_snTimeInMilliseconds - dword_A86274) * -0.0019531) + 3.0;
        v109 = vmax_f32(v2, v3).n64_f32[0];
        CSprite::RenderOneXLUSprite_Rotate_Aspect(
          v130,
          v131,
          v132,
          v109 * v129,
          v109 * v106,
          COERCE_FLOAT((unsigned __int8)v108),
          0,
          0,
          v108,
          55050,
          (float)(CTimer::m_snTimeInMilliseconds & 0x3FF) * 0.0061359,
          COERCE_FLOAT(255),
          v110);
      }
    }
    RwRenderStateSet(8, 1);
    RwRenderStateSet(6, 1);
  }
  CPlayerCrossHair::Render((CPlayerCrossHair *)&unk_96B7F4, 0);
  return CPlayerCrossHair::Render((CPlayerCrossHair *)&unk_96B988, 1);
}


// ============================================================
