
// Address: 0x18ecf0
// Original: j__ZN13CShadowCamera18ShadowRasterRenderEP5RwV2d
// Demangled: CShadowCamera::ShadowRasterRender(RwV2d *)
// attributes: thunk
int CShadowCamera::ShadowRasterRender()
{
  return _ZN13CShadowCamera18ShadowRasterRenderEP5RwV2d();
}


// ============================================================

// Address: 0x192e90
// Original: j__ZN13CShadowCamera7DestroyEv
// Demangled: CShadowCamera::Destroy(void)
// attributes: thunk
int __fastcall CShadowCamera::Destroy(CShadowCamera *this)
{
  return _ZN13CShadowCamera7DestroyEv(this);
}


// ============================================================

// Address: 0x1935bc
// Original: j__ZN13CShadowCamera6UpdateEP8RpAtomic
// Demangled: CShadowCamera::Update(RpAtomic *)
// attributes: thunk
int CShadowCamera::Update()
{
  return _ZN13CShadowCamera6UpdateEP8RpAtomic();
}


// ============================================================

// Address: 0x197200
// Original: j__ZN13CShadowCamera18MakeGradientRasterEv
// Demangled: CShadowCamera::MakeGradientRaster(void)
// attributes: thunk
int __fastcall CShadowCamera::MakeGradientRaster(CShadowCamera *this)
{
  return _ZN13CShadowCamera18MakeGradientRasterEv(this);
}


// ============================================================

// Address: 0x197744
// Original: j__ZN13CShadowCamera6UpdateEP7RpClumpbP4CPed
// Demangled: CShadowCamera::Update(RpClump *,bool,CPed *)
// attributes: thunk
int CShadowCamera::Update()
{
  return _ZN13CShadowCamera6UpdateEP7RpClumpbP4CPed();
}


// ============================================================

// Address: 0x197cdc
// Original: j__ZN13CShadowCamera6CreateEi
// Demangled: CShadowCamera::Create(int)
// attributes: thunk
int __fastcall CShadowCamera::Create(CShadowCamera *this, int a2)
{
  return _ZN13CShadowCamera6CreateEi(this, a2);
}


// ============================================================

// Address: 0x199d58
// Original: j__ZN13CShadowCamera14RasterGradientEP8RwRaster
// Demangled: CShadowCamera::RasterGradient(RwRaster *)
// attributes: thunk
int CShadowCamera::RasterGradient()
{
  return _ZN13CShadowCamera14RasterGradientEP8RwRaster();
}


// ============================================================

// Address: 0x19cd98
// Original: j__ZN13CShadowCamera12InvertRasterEv
// Demangled: CShadowCamera::InvertRaster(void)
// attributes: thunk
int __fastcall CShadowCamera::InvertRaster(CShadowCamera *this)
{
  return _ZN13CShadowCamera12InvertRasterEv(this);
}


// ============================================================

// Address: 0x19d254
// Original: j__ZN13CShadowCamera17DrawOutlineBorderERK6RwRGBA
// Demangled: CShadowCamera::DrawOutlineBorder(RwRGBA const&)
// attributes: thunk
int CShadowCamera::DrawOutlineBorder()
{
  return _ZN13CShadowCamera17DrawOutlineBorderERK6RwRGBA();
}


// ============================================================

// Address: 0x5b6ee0
// Original: _ZN13CShadowCameraC2Ev
// Demangled: CShadowCamera::CShadowCamera(void)
void __fastcall CShadowCamera::CShadowCamera(CShadowCamera *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x5b6ee8
// Original: _ZN13CShadowCameraD2Ev
// Demangled: CShadowCamera::~CShadowCamera()
void __fastcall CShadowCamera::~CShadowCamera(CShadowCamera *this)
{
  CShadowCamera::Destroy(this);
}


// ============================================================

// Address: 0x5b6ef6
// Original: _ZN13CShadowCamera7DestroyEv
// Demangled: CShadowCamera::Destroy(void)
int __fastcall CShadowCamera::Destroy(CShadowCamera *this)
{
  int result; // r0
  int v3; // r0

  result = *(_DWORD *)this;
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) )
    {
      _rwObjectHasFrameSetFrame();
      RwFrameDestroy();
      result = *(_DWORD *)this;
    }
    if ( *(_DWORD *)(result + 96) )
    {
      *(_DWORD *)(result + 96) = 0;
      RwRasterDestroy();
    }
    v3 = *((_DWORD *)this + 1);
    if ( v3 )
    {
      RwTextureSetRaster(v3, 0);
      RwTextureDestroy(*((_DWORD *)this + 1));
      *((_DWORD *)this + 1) = 0;
    }
    RwCameraDestroy(*(_DWORD *)this);
    result = 0;
    *(_DWORD *)this = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5b6f44
// Original: _ZN13CShadowCamera6CreateEi
// Demangled: CShadowCamera::Create(int)
int __fastcall CShadowCamera::Create(CShadowCamera *this, char a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r0

  v4 = RwCameraCreate();
  *(_DWORD *)this = v4;
  if ( v4
    && (RwFrameCreate(), _rwObjectHasFrameSetFrame(), *(_DWORD *)(*(_DWORD *)this + 4))
    && (v5 = RwRasterCreate(1 << a2, 1 << a2, 0, 5)) != 0
    && (*(_DWORD *)(*(_DWORD *)this + 96) = v5, v6 = RwTextureCreate(), (*((_DWORD *)this + 1) = v6) != 0) )
  {
    *(_BYTE *)(v6 + 81) = 51;
    *(_BYTE *)(*((_DWORD *)this + 1) + 80) = 2;
    RwCameraSetProjection();
    return *(_DWORD *)this;
  }
  else
  {
    CShadowCamera::Destroy(this);
    return 0;
  }
}


// ============================================================

// Address: 0x5b6fb8
// Original: _ZN13CShadowCamera13ReInitRastersEv
// Demangled: CShadowCamera::ReInitRasters(void)
int __fastcall CShadowCamera::ReInitRasters(CShadowCamera *this)
{
  int v2; // r5

  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 96) + 12);
  *(_DWORD *)(*(_DWORD *)this + 96) = 0;
  RwRasterDestroy();
  *(_DWORD *)(*(_DWORD *)this + 96) = RwRasterCreate(v2, v2, 0, 5);
  return sub_19DA68();
}


// ============================================================

// Address: 0x5b6fe8
// Original: _ZN13CShadowCamera10SetFrustumEf
// Demangled: CShadowCamera::SetFrustum(float)
int __fastcall CShadowCamera::SetFrustum(CShadowCamera *this, float a2)
{
  RwCameraSetFarClipPlane();
  RwCameraSetNearClipPlane(*(_DWORD *)this, a2 * 0.001);
  RwCameraSetViewWindow();
  return *(_DWORD *)this;
}


// ============================================================

// Address: 0x5b703c
// Original: _ZN13CShadowCamera8SetLightEP7RpLight
// Demangled: CShadowCamera::SetLight(RpLight *)
int __fastcall CShadowCamera::SetLight(int a1, int a2)
{
  int v3; // r1
  __int64 v4; // d16
  int v5; // r5
  __int64 v6; // d16
  __int64 v7; // d16

  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  *(_DWORD *)(v5 + 24) = *(_DWORD *)(v3 + 24);
  *(_QWORD *)(v5 + 16) = v4;
  v6 = *(_QWORD *)(v3 + 32);
  *(_DWORD *)(v5 + 40) = *(_DWORD *)(v3 + 40);
  *(_QWORD *)(v5 + 32) = v6;
  v7 = *(_QWORD *)(v3 + 48);
  *(_DWORD *)(v5 + 56) = *(_DWORD *)(v3 + 56);
  *(_QWORD *)(v5 + 48) = v7;
  RwMatrixUpdate(v5 + 16);
  RwFrameUpdateObjects(v5);
  return *(_DWORD *)a1;
}


// ============================================================

// Address: 0x5b707e
// Original: _ZN13CShadowCamera9SetCenterEP5RwV3d
// Demangled: CShadowCamera::SetCenter(RwV3d *)
int __fastcall CShadowCamera::SetCenter(int a1, __int64 *a2)
{
  __int64 v3; // d16
  int v4; // r5
  float v5; // s6
  float v6; // s8
  float v7; // s10

  v3 = *a2;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  *(_DWORD *)(v4 + 72) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(v4 + 64) = v3;
  v5 = *(float *)(v4 + 52);
  v6 = *(float *)(v4 + 56);
  v7 = *(float *)(v4 + 68);
  *(float *)(v4 + 64) = *(float *)(v4 + 64)
                      + (float)(*(float *)(v4 + 48) * (float)(*(float *)(*(_DWORD *)a1 + 132) * -0.5));
  *(float *)(v4 + 68) = v7 + (float)(v5 * (float)(*(float *)(*(_DWORD *)a1 + 132) * -0.5));
  *(float *)(v4 + 72) = *(float *)(v4 + 72) + (float)(v6 * (float)(*(float *)(*(_DWORD *)a1 + 132) * -0.5));
  RwMatrixUpdate(v4 + 16);
  RwFrameUpdateObjects(v4);
  RwFrameOrthoNormalize();
  return *(_DWORD *)a1;
}


// ============================================================

// Address: 0x5b710c
// Original: _ZN13CShadowCamera6UpdateEP7RpClumpbP4CPed
// Demangled: CShadowCamera::Update(RpClump *,bool,CPed *)
int __fastcall CShadowCamera::Update(CShadowCamera *a1, int a2, int a3, int a4)
{
  int v8; // r8
  int v9; // r6
  int (*v10)(); // r1
  int v11; // r5
  int MatrixArray; // r10
  __int64 *v13; // r2
  _QWORD *v14; // r5
  __int64 *v15; // r1
  _QWORD *v16; // r0
  __int64 v17; // d16
  __int64 v18; // d17
  __int64 v19; // d23
  __int64 v20; // d18
  __int64 v21; // d19
  __int64 v22; // d20
  __int64 v23; // d21
  CTaskSimpleJetPack *TaskJetPack; // r0
  int v26; // [sp+Ch] [bp-2Ch]
  _BYTE v27[4]; // [sp+14h] [bp-24h] BYREF
  _BYTE v28[32]; // [sp+18h] [bp-20h] BYREF

  CRGBA::CRGBA((CRGBA *)v28, 0xFFu, 0xFFu, 0xFFu, 0);
  RwCameraClear();
  if ( RwCameraBeginUpdate(*(_DWORD *)a1) )
  {
    RwRenderStateSet(14, 0);
    if ( a3 == 1 )
    {
      RwRenderStateSet(20, 1);
      CVisibilityPlugins::SetupVehicleVariables();
      carLodLerp = 1065353216;
    }
    v8 = *(_DWORD *)(GetFirstAtomic() + 24);
    v9 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v9 & 0xFFFFFF13;
    if ( a3 == 1 )
      v10 = sub_5B72E0;
    else
      v10 = sub_5B7308;
    RpClumpForAllAtomics(a2, v10, 0);
    if ( a4 )
    {
      v11 = *(_DWORD *)(a4 + 1280);
      if ( v11 )
      {
        v26 = *(_DWORD *)(a4 + 1280);
        GetAnimHierarchyFromSkinClump();
        MatrixArray = RpHAnimHierarchyGetMatrixArray();
        v13 = (__int64 *)(MatrixArray + (RpHAnimIDGetIndex() << 6));
        v14 = *(_QWORD **)(*(_DWORD *)(a4 + 1280) + 4);
        v15 = v13 + 4;
        v16 = v13 + 6;
        v17 = *v13;
        v18 = v13[1];
        v13 += 2;
        v19 = v16[1];
        v20 = *v15;
        v21 = v15[1];
        v22 = *v13;
        v23 = v13[1];
        v14[8] = *v16;
        v14[9] = v19;
        v14[6] = v20;
        v14[7] = v21;
        v14[4] = v22;
        v14[5] = v23;
        v14[2] = v17;
        v14[3] = v18;
        if ( *(_DWORD *)(a4 + 1444 + 28 * *(char *)(a4 + 1820)) == 46 )
        {
          RwMatrixTranslate();
          RwMatrixRotate();
        }
        RwFrameUpdateObjects(v14);
        v11 = v26;
      }
      if ( CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(a4 + 1088)) )
      {
        TaskJetPack = (CTaskSimpleJetPack *)CPedIntelligence::GetTaskJetPack(*(CPedIntelligence **)(a4 + 1088));
        CTaskSimpleJetPack::RenderJetPack(TaskJetPack, (CPed *)a4);
      }
      if ( v11 )
        RpClumpForAllAtomics(v11, sub_5B7308, 0);
    }
    CShadowCamera::InvertRaster(a1);
    CRGBA::CRGBA((CRGBA *)v27, 0, 0, 0, 0xFFu);
    CShadowCamera::DrawOutlineBorder();
    if ( a3 == 1 )
      RwRenderStateSet(20, 2);
    *(_DWORD *)(v8 + 8) = v9;
    RwCameraEndUpdate();
  }
  return *(_DWORD *)a1;
}


// ============================================================

// Address: 0x5b7338
// Original: _ZN13CShadowCamera12InvertRasterEv
// Demangled: CShadowCamera::InvertRaster(void)
int __fastcall CShadowCamera::InvertRaster(CShadowCamera *this)
{
  int v1; // r0
  float v2; // s2
  int v3; // r0
  float v4; // s16
  float v5; // s2
  float v6; // s20
  _DWORD v8[38]; // [sp+0h] [bp-98h] BYREF

  v1 = *(_DWORD *)this;
  v2 = *(float *)(v1 + 128);
  v3 = *(_DWORD *)(v1 + 96);
  v4 = 1.0 / v2;
  v5 = (float)*(int *)(v3 + 16);
  v6 = (float)*(int *)(v3 + 12);
  v8[0] = -1054867456;
  v8[1] = -1054867456;
  v8[2] = RwIm2DGetNearScreenZ();
  v8[4] = -1;
  v8[7] = -1054867456;
  *(float *)&v8[8] = v5 + 10.0;
  *(float *)&v8[3] = v4;
  v8[11] = -1;
  *(float *)&v8[10] = v4;
  v8[9] = RwIm2DGetNearScreenZ();
  *(float *)&v8[14] = v6 + 10.0;
  v8[15] = -1054867456;
  v8[16] = RwIm2DGetNearScreenZ();
  *(float *)&v8[17] = v4;
  v8[18] = -1;
  *(float *)&v8[21] = v6 + 10.0;
  *(float *)&v8[22] = v5 + 10.0;
  v8[23] = RwIm2DGetNearScreenZ();
  *(float *)&v8[24] = v4;
  v8[25] = -1;
  RwRenderStateSet(6, 0);
  RwRenderStateSet(1, 0);
  RwRenderStateSet(12, 1);
  RwRenderStateSet(10, 10);
  RwRenderStateSet(11, 1);
  RwIm2DRenderPrimitive_BUGFIX(4, v8, 4);
  RwRenderStateSet(6, 1);
  RwRenderStateSet(10, 5);
  return RwRenderStateSet(11, 6);
}


// ============================================================

// Address: 0x5b7414
// Original: _ZN13CShadowCamera17DrawOutlineBorderERK6RwRGBA
// Demangled: CShadowCamera::DrawOutlineBorder(RwRGBA const&)
int __fastcall CShadowCamera::DrawOutlineBorder(int a1)
{
  int v1; // r8

  v1 = *(_DWORD *)(*(_DWORD *)a1 + 96);
  RwIm2DGetNearScreenZ();
  RwRenderStateSet(6, 0);
  RwRenderStateSet(12, 0);
  RwRenderStateSet(1, 0);
  RwIm2DRenderIndexedPrimitive_BUGFIX();
  RwIm2DRenderIndexedPrimitive_BUGFIX();
  RwIm2DRenderIndexedPrimitive_BUGFIX();
  RwIm2DRenderIndexedPrimitive_BUGFIX();
  RwRenderStateSet(6, 1);
  RwRenderStateSet(12, 1);
  return v1;
}


// ============================================================

// Address: 0x5b75b4
// Original: _ZN13CShadowCamera6UpdateEP8RpAtomic
// Demangled: CShadowCamera::Update(RpAtomic *)
int __fastcall CShadowCamera::Update(CShadowCamera *a1, int a2)
{
  int v4; // r6
  int v5; // r8
  int (__fastcall *v6)(int); // r5
  _BYTE v8[28]; // [sp+4h] [bp-1Ch] BYREF

  CRGBA::CRGBA((CRGBA *)v8, 0xFFu, 0xFFu, 0xFFu, 0);
  RwCameraClear();
  if ( RwCameraBeginUpdate(*(_DWORD *)a1) )
  {
    v4 = *(_DWORD *)(a2 + 24);
    v5 = *(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 8) = v5 & 0xFFFFFF03;
    v6 = *(int (__fastcall **)(int))(a2 + 72);
    *(_DWORD *)(a2 + 72) = AtomicDefaultRenderCallBack;
    AtomicDefaultRenderCallBack(a2);
    if ( !v6 )
      v6 = AtomicDefaultRenderCallBack;
    *(_DWORD *)(a2 + 72) = v6;
    *(_DWORD *)(v4 + 8) = v5;
    CShadowCamera::InvertRaster(a1);
    RwCameraEndUpdate();
  }
  return *(_DWORD *)a1;
}


// ============================================================

// Address: 0x5b7634
// Original: _ZN13CShadowCamera18MakeGradientRasterEv
// Demangled: CShadowCamera::MakeGradientRaster(void)
int __fastcall CShadowCamera::MakeGradientRaster(CShadowCamera *this)
{
  int v2; // r5
  int v3; // r4
  int v4; // s0
  float v5; // s24
  int v6; // r4
  int v7; // r9

  if ( !*(_DWORD *)this )
    return 0;
  RwIm2DGetNearScreenZ();
  v2 = *(_DWORD *)(*(_DWORD *)this + 96);
  v3 = *(_DWORD *)(v2 + 16);
  if ( v3 < 1 )
    return 0;
  if ( RwCameraBeginUpdate(*(_DWORD *)this) )
  {
    RwRenderStateSet(1, 0);
    RwRenderStateSet(6, 0);
    RwRenderStateSet(12, 0);
    RwRenderStateSet(11, 1);
    RwRenderStateSet(10, 10);
    RwRenderStateSet(7, 1);
    v4 = v3;
    v5 = 128.0;
    v6 = v3 + 1;
    v7 = 0;
    do
    {
      RwIm2DRenderLine_BUGFIX();
      v5 = v5 - (float)(64.0 / (float)v4);
      ++v7;
    }
    while ( v6 != v7 );
    RwRenderStateSet(6, 1);
    RwRenderStateSet(11, 6);
    RwRenderStateSet(10, 5);
    RwRenderStateSet(7, 2);
    RwCameraEndUpdate();
  }
  return v2;
}


// ============================================================

// Address: 0x5b7780
// Original: _ZN13CShadowCamera17GetRwRenderRasterEv
// Demangled: CShadowCamera::GetRwRenderRaster(void)
int __fastcall CShadowCamera::GetRwRenderRaster(CShadowCamera *this)
{
  return *(_DWORD *)(*(_DWORD *)this + 96);
}


// ============================================================

// Address: 0x5b7786
// Original: _ZN13CShadowCamera21ApplyAlphaMapToRasterEv
// Demangled: CShadowCamera::ApplyAlphaMapToRaster(void)
int __fastcall CShadowCamera::ApplyAlphaMapToRaster(CShadowCamera *this)
{
  int result; // r0
  int v3; // r4

  result = *(_DWORD *)this;
  v3 = *(_DWORD *)(result + 96);
  if ( v3 )
  {
    result = RwImageCreate(*(_DWORD *)(v3 + 12), *(_DWORD *)(v3 + 16), 32);
    if ( result )
    {
      RwImageAllocatePixels();
      CShadowCamera::InvertRaster(this);
      RwImageSetFromRaster();
      RwImageMakeMask();
      RwRasterSetFromImage();
      return sub_19ED54();
    }
  }
  return result;
}


// ============================================================

// Address: 0x5b77dc
// Original: _ZN13CShadowCamera18ShadowRasterRenderEP5RwV2d
// Demangled: CShadowCamera::ShadowRasterRender(RwV2d *)
int __fastcall CShadowCamera::ShadowRasterRender(int a1, float *a2)
{
  float v3; // s20
  float v4; // s22
  float v5; // s18
  float v6; // s16
  int v7; // r4
  float v8; // s24
  float v9; // s26
  float v10; // s28
  float v12[2]; // [sp+0h] [bp-B0h] BYREF
  int v13; // [sp+8h] [bp-A8h]
  float v14; // [sp+Ch] [bp-A4h]
  int v15; // [sp+10h] [bp-A0h]
  int v16; // [sp+14h] [bp-9Ch]
  int v17; // [sp+18h] [bp-98h]
  float v18; // [sp+1Ch] [bp-94h]
  float v19; // [sp+20h] [bp-90h]
  int v20; // [sp+24h] [bp-8Ch]
  float v21; // [sp+28h] [bp-88h]
  int v22; // [sp+2Ch] [bp-84h]
  int v23; // [sp+30h] [bp-80h]
  int v24; // [sp+34h] [bp-7Ch]
  float v25; // [sp+38h] [bp-78h]
  float v26; // [sp+3Ch] [bp-74h]
  int v27; // [sp+40h] [bp-70h]
  float v28; // [sp+44h] [bp-6Ch]
  int v29; // [sp+48h] [bp-68h]
  int v30; // [sp+4Ch] [bp-64h]
  int v31; // [sp+50h] [bp-60h]
  float v32; // [sp+54h] [bp-5Ch]
  float v33; // [sp+58h] [bp-58h]
  int v34; // [sp+5Ch] [bp-54h]
  float v35; // [sp+60h] [bp-50h]
  int v36; // [sp+64h] [bp-4Ch]
  int v37; // [sp+68h] [bp-48h]
  int v38; // [sp+6Ch] [bp-44h]

  if ( a2 )
  {
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    v6 = a2[3];
  }
  else
  {
    v6 = 0.17;
    v5 = 0.98;
    v4 = 0.02;
    v3 = 0.83;
  }
  v7 = *(_DWORD *)(*(_DWORD *)RwEngineInstance + 96);
  v8 = (float)*(int *)(v7 + 12);
  v9 = *(float *)(*(_DWORD *)RwEngineInstance + 128);
  v10 = (float)*(int *)(v7 + 16);
  RwRenderStateSet(11, 1);
  RwRenderStateSet(10, 2);
  RwRenderStateSet(9, 2);
  RwRenderStateSet(1, *(_DWORD *)(*(_DWORD *)a1 + 96));
  v12[1] = v4 * v10;
  v12[0] = v3 * v8;
  v13 = RwIm2DGetNearScreenZ();
  v15 = -1;
  v16 = 0;
  v17 = 0;
  v18 = v3 * v8;
  v20 = v13;
  v19 = v6 * v10;
  v22 = -1;
  v23 = 0;
  v24 = 1065353216;
  v27 = v13;
  v26 = v4 * v10;
  v29 = -1;
  v30 = 1065353216;
  v31 = 0;
  v25 = v5 * v8;
  v14 = 1.0 / v9;
  v21 = 1.0 / v9;
  v28 = 1.0 / v9;
  v34 = v13;
  v33 = v6 * v10;
  v36 = -1;
  v35 = 1.0 / v9;
  v37 = 1065353216;
  v38 = 1065353216;
  v32 = v5 * v8;
  RwIm2DRenderPrimitive_BUGFIX(4, v12, 4);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(10, 5);
  return v7;
}


// ============================================================

// Address: 0x5b798a
// Original: _ZN13CShadowCamera18GetRwRenderTextureEv
// Demangled: CShadowCamera::GetRwRenderTexture(void)
int __fastcall CShadowCamera::GetRwRenderTexture(CShadowCamera *this)
{
  return *((_DWORD *)this + 1);
}


// ============================================================

// Address: 0x5b7990
// Original: _ZN13CShadowCamera14RasterResampleEP8RwRaster
// Demangled: CShadowCamera::RasterResample(RwRaster *)
int __fastcall CShadowCamera::RasterResample(int *a1, int a2)
{
  int v3; // r0
  int v4; // r4
  float v5; // s16
  float v6; // s18
  _DWORD v8[2]; // [sp+0h] [bp-A0h] BYREF
  int v9; // [sp+8h] [bp-98h]
  float v10; // [sp+Ch] [bp-94h]
  int v11; // [sp+10h] [bp-90h]
  float v12; // [sp+14h] [bp-8Ch]
  float v13; // [sp+18h] [bp-88h]
  int v14; // [sp+1Ch] [bp-84h]
  float v15; // [sp+20h] [bp-80h]
  int v16; // [sp+24h] [bp-7Ch]
  float v17; // [sp+28h] [bp-78h]
  int v18; // [sp+2Ch] [bp-74h]
  float v19; // [sp+30h] [bp-70h]
  float v20; // [sp+34h] [bp-6Ch]
  float v21; // [sp+38h] [bp-68h]
  int v22; // [sp+3Ch] [bp-64h]
  int v23; // [sp+40h] [bp-60h]
  float v24; // [sp+44h] [bp-5Ch]
  int v25; // [sp+48h] [bp-58h]
  float v26; // [sp+4Ch] [bp-54h]
  float v27; // [sp+50h] [bp-50h]
  float v28; // [sp+54h] [bp-4Ch]
  float v29; // [sp+58h] [bp-48h]
  int v30; // [sp+5Ch] [bp-44h]
  float v31; // [sp+60h] [bp-40h]
  int v32; // [sp+64h] [bp-3Ch]
  float v33; // [sp+68h] [bp-38h]
  float v34; // [sp+6Ch] [bp-34h]

  v3 = *a1;
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(v3 + 96);
  v5 = (float)*(int *)(v4 + 12);
  v6 = *(float *)(v3 + 128);
  if ( RwCameraBeginUpdate(v3) )
  {
    RwRenderStateSet(10, 2);
    RwRenderStateSet(11, 1);
    RwRenderStateSet(6, 0);
    RwRenderStateSet(9, 2);
    RwRenderStateSet(1, a2);
    v8[0] = 0;
    v8[1] = 0;
    v9 = RwIm2DGetNearScreenZ();
    v11 = -1;
    v14 = 0;
    v16 = v9;
    v15 = v5;
    v18 = -1;
    v22 = 0;
    v21 = v5;
    v12 = 0.0 / v5;
    v13 = 0.0 / v5;
    v19 = 0.0 / v5;
    v10 = 1.0 / v6;
    v17 = 1.0 / v6;
    v20 = (float)(0.0 / v5) + 1.0;
    v23 = v9;
    v25 = -1;
    v27 = 0.0 / v5;
    v24 = 1.0 / v6;
    v26 = v20;
    v28 = v5;
    v30 = v9;
    v29 = v5;
    v32 = -1;
    v31 = 1.0 / v6;
    v33 = v20;
    v34 = v20;
    RwIm2DRenderPrimitive_BUGFIX(4, v8, 4);
    RwRenderStateSet(6, 1);
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 6);
    RwCameraEndUpdate();
  }
  return v4;
}


// ============================================================

// Address: 0x5b7aa0
// Original: _ZN13CShadowCamera10RasterBlurEP8RwRasteri
// Demangled: CShadowCamera::RasterBlur(RwRaster *,int)
int __fastcall CShadowCamera::RasterBlur(int *a1, int a2)
{
  int result; // r0

  result = *a1;
  if ( result )
    return a2;
  return result;
}


// ============================================================

// Address: 0x5b7aaa
// Original: _ZN13CShadowCamera14RasterGradientEP8RwRaster
// Demangled: CShadowCamera::RasterGradient(RwRaster *)
int __fastcall CShadowCamera::RasterGradient(_DWORD *a1, int a2)
{
  int v4; // r0
  int v5; // r8
  float v6; // s16
  float v7; // s18
  _DWORD v9[2]; // [sp+0h] [bp-90h] BYREF
  int v10; // [sp+8h] [bp-88h]
  float v11; // [sp+Ch] [bp-84h]
  int v12; // [sp+10h] [bp-80h]
  int v13; // [sp+14h] [bp-7Ch]
  int v14; // [sp+18h] [bp-78h]
  int v15; // [sp+1Ch] [bp-74h]
  float v16; // [sp+20h] [bp-70h]
  int v17; // [sp+24h] [bp-6Ch]
  float v18; // [sp+28h] [bp-68h]
  int v19; // [sp+2Ch] [bp-64h]
  int v20; // [sp+30h] [bp-60h]
  int v21; // [sp+34h] [bp-5Ch]
  float v22; // [sp+38h] [bp-58h]
  int v23; // [sp+3Ch] [bp-54h]
  int v24; // [sp+40h] [bp-50h]
  float v25; // [sp+44h] [bp-4Ch]
  int v26; // [sp+48h] [bp-48h]
  int v27; // [sp+4Ch] [bp-44h]
  int v28; // [sp+50h] [bp-40h]
  float v29; // [sp+54h] [bp-3Ch]
  float v30; // [sp+58h] [bp-38h]
  int v31; // [sp+5Ch] [bp-34h]
  float v32; // [sp+60h] [bp-30h]
  int v33; // [sp+64h] [bp-2Ch]
  int v34; // [sp+68h] [bp-28h]
  int v35; // [sp+6Ch] [bp-24h]

  v4 = *a1;
  v5 = *(_DWORD *)(v4 + 96);
  v6 = (float)*(int *)(a2 + 12);
  v7 = *(float *)(v4 + 128);
  *(_DWORD *)(v4 + 96) = a2;
  if ( RwCameraBeginUpdate(*a1) )
  {
    RwRenderStateSet(10, 1);
    RwRenderStateSet(11, 3);
    RwRenderStateSet(6, 0);
    RwRenderStateSet(9, 2);
    RwRenderStateSet(1, v5);
    v9[0] = 0;
    v9[1] = 0;
    v10 = RwIm2DGetNearScreenZ();
    v12 = -1;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v17 = v10;
    v16 = v6;
    v19 = -1;
    v20 = 0;
    v21 = 1065353216;
    v23 = 0;
    v22 = v6;
    v11 = 1.0 / v7;
    v18 = 1.0 / v7;
    v24 = v10;
    v26 = -1;
    v27 = 1065353216;
    v28 = 0;
    v25 = 1.0 / v7;
    v29 = v6;
    v31 = v10;
    v30 = v6;
    v33 = -1;
    v32 = 1.0 / v7;
    v34 = 1065353216;
    v35 = 1065353216;
    RwIm2DRenderPrimitive_BUGFIX(4, v9, 4);
    RwRenderStateSet(6, 1);
    RwRenderStateSet(10, 5);
    RwRenderStateSet(11, 6);
    RwCameraEndUpdate();
  }
  *(_DWORD *)(*a1 + 96) = v5;
  return a2;
}


// ============================================================
