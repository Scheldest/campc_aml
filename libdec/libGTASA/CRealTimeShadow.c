
// Address: 0x18d200
// Original: j__ZN15CRealTimeShadow6CreateEibib
// Demangled: CRealTimeShadow::Create(int,bool,int,bool)
// attributes: thunk
int __fastcall CRealTimeShadow::Create(CRealTimeShadow *this, int a2, bool a3, int a4, bool a5)
{
  return _ZN15CRealTimeShadow6CreateEibib(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x18dba4
// Original: j__ZN15CRealTimeShadow18SetLightPropertiesEffb
// Demangled: CRealTimeShadow::SetLightProperties(float,float,bool)
// attributes: thunk
int __fastcall CRealTimeShadow::SetLightProperties(CRealTimeShadow *this, float a2, float a3, bool a4)
{
  return _ZN15CRealTimeShadow18SetLightPropertiesEffb(this, a2, a3, a4);
}


// ============================================================

// Address: 0x1939a4
// Original: j__ZN15CRealTimeShadow18GetShadowRwTextureEv
// Demangled: CRealTimeShadow::GetShadowRwTexture(void)
// attributes: thunk
int __fastcall CRealTimeShadow::GetShadowRwTexture(CRealTimeShadow *this)
{
  return _ZN15CRealTimeShadow18GetShadowRwTextureEv(this);
}


// ============================================================

// Address: 0x19edf8
// Original: j__ZN15CRealTimeShadow15GetShadowCameraEv
// Demangled: CRealTimeShadow::GetShadowCamera(void)
// attributes: thunk
int __fastcall CRealTimeShadow::GetShadowCamera(CRealTimeShadow *this)
{
  return _ZN15CRealTimeShadow15GetShadowCameraEv(this);
}


// ============================================================

// Address: 0x19f3e4
// Original: j__ZN15CRealTimeShadow17SetShadowedObjectEP9CPhysical
// Demangled: CRealTimeShadow::SetShadowedObject(CPhysical *)
// attributes: thunk
int __fastcall CRealTimeShadow::SetShadowedObject(CRealTimeShadow *this, CPhysical *a2)
{
  return _ZN15CRealTimeShadow17SetShadowedObjectEP9CPhysical(this, a2);
}


// ============================================================

// Address: 0x1a08dc
// Original: j__ZN15CRealTimeShadow6UpdateEv
// Demangled: CRealTimeShadow::Update(void)
// attributes: thunk
int __fastcall CRealTimeShadow::Update(CRealTimeShadow *this)
{
  return _ZN15CRealTimeShadow6UpdateEv(this);
}


// ============================================================

// Address: 0x5b7b9a
// Original: _ZN15CRealTimeShadowC2Ev
// Demangled: CRealTimeShadow::CRealTimeShadow(void)
void __fastcall CRealTimeShadow::CRealTimeShadow(CRealTimeShadow *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 12) = 0;
  *((_BYTE *)this + 20) = 0;
  *((_WORD *)this + 2) = 0;
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x5b7bb2
// Original: _ZN15CRealTimeShadowD2Ev
// Demangled: CRealTimeShadow::~CRealTimeShadow()
void __fastcall CRealTimeShadow::~CRealTimeShadow(CRealTimeShadow *this)
{
  void *v2; // r5
  int v3; // r0

  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    CShadowCamera::Destroy(*((CShadowCamera **)this + 2));
    operator delete(v2);
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 6) = -1;
  v3 = *((_DWORD *)this + 7);
  *(_DWORD *)this = 0;
  if ( v3 )
  {
    _rwObjectHasFrameSetFrame();
    RwFrameDestroy();
    RpLightDestroy();
    *((_DWORD *)this + 7) = 0;
  }
}


// ============================================================

// Address: 0x5b7bfc
// Original: _ZN15CRealTimeShadow7DestroyEv
// Demangled: CRealTimeShadow::Destroy(void)
int __fastcall CRealTimeShadow::Destroy(CRealTimeShadow *this)
{
  void *v2; // r5
  int result; // r0

  v2 = (void *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    CShadowCamera::Destroy(*((CShadowCamera **)this + 2));
    operator delete(v2);
    *((_DWORD *)this + 2) = 0;
  }
  *((_DWORD *)this + 6) = -1;
  result = *((_DWORD *)this + 7);
  *(_DWORD *)this = 0;
  if ( result )
  {
    _rwObjectHasFrameSetFrame();
    RwFrameDestroy();
    result = RpLightDestroy();
    *((_DWORD *)this + 7) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5b7c50
// Original: _ZN15CRealTimeShadow6CreateEibib
// Demangled: CRealTimeShadow::Create(int,bool,int,bool)
int __fastcall CRealTimeShadow::Create(CRealTimeShadow *this, int a2, bool a3, int a4, bool a5)
{
  int v9; // r0
  int v10; // r5
  CShadowCamera *v11; // r0
  int v12; // r1
  int v13; // r0
  void *v14; // r5
  int v15; // r0
  int v16; // r5
  __int64 v17; // d16
  __int64 v18; // d16
  __int64 v19; // d16
  int v20; // r0
  _QWORD v22[2]; // [sp+0h] [bp-28h] BYREF

  v9 = RpLightCreate(1);
  v10 = 0;
  *((_DWORD *)this + 7) = v9;
  if ( v9 )
  {
    v22[0] = 0x3F4CCCCD3F4CCCCDLL;
    v22[1] = 1061997773LL;
    RpLightSetColor(v9, v22);
    RwFrameCreate();
    _rwObjectHasFrameSetFrame();
    v11 = (CShadowCamera *)operator new(8u);
    v12 = 4;
    *(_DWORD *)v11 = 0;
    *((_DWORD *)v11 + 1) = 0;
    *((_DWORD *)this + 2) = v11;
    if ( a2 == 1 )
      v12 = 8;
    if ( !a2 )
      v12 = 9;
    v13 = CShadowCamera::Create(v11, v12);
    v14 = (void *)*((_DWORD *)this + 2);
    if ( v13 )
    {
      v15 = *(_DWORD *)(*((_DWORD *)this + 7) + 4);
      v16 = *(_DWORD *)(*(_DWORD *)v14 + 4);
      v17 = *(_QWORD *)(v15 + 16);
      *(_DWORD *)(v16 + 24) = *(_DWORD *)(v15 + 24);
      *(_QWORD *)(v16 + 16) = v17;
      v18 = *(_QWORD *)(v15 + 32);
      *(_DWORD *)(v16 + 40) = *(_DWORD *)(v15 + 40);
      *(_QWORD *)(v16 + 32) = v18;
      v19 = *(_QWORD *)(v15 + 48);
      *(_DWORD *)(v16 + 56) = *(_DWORD *)(v15 + 56);
      *(_QWORD *)(v16 + 48) = v19;
      RwMatrixUpdate(v16 + 16);
      RwFrameUpdateObjects(v16);
      v10 = 1;
      *((_DWORD *)this + 4) = a4;
      *((_BYTE *)this + 12) = a3;
      *((_BYTE *)this + 20) = a5;
    }
    else
    {
      if ( v14 )
      {
        CShadowCamera::Destroy(*((CShadowCamera **)this + 2));
        operator delete(v14);
        *((_DWORD *)this + 2) = 0;
      }
      v10 = 0;
      *((_DWORD *)this + 6) = -1;
      v20 = *((_DWORD *)this + 7);
      *(_DWORD *)this = 0;
      if ( v20 )
      {
        _rwObjectHasFrameSetFrame();
        RwFrameDestroy();
        RpLightDestroy();
        *((_DWORD *)this + 7) = 0;
      }
    }
  }
  return v10;
}


// ============================================================

// Address: 0x5b7d60
// Original: _ZN15CRealTimeShadow17SetShadowedObjectEP9CPhysical
// Demangled: CRealTimeShadow::SetShadowedObject(CPhysical *)
int __fastcall CRealTimeShadow::SetShadowedObject(CRealTimeShadow *this, CPhysical *a2)
{
  unsigned __int8 *v3; // r5
  int v4; // r0
  int v5; // r0
  char *v6; // r1
  int v7; // r5
  void *v8; // r5
  int v9; // r0
  __int64 v10; // d17
  int v11; // r0
  char *v12; // r5
  _DWORD *v13; // r6
  float v14; // s20
  int v15; // r0
  __int64 v16; // d16
  int v17; // r4
  float v18; // s6
  float v19; // s8
  float v20; // s10

  *(_DWORD *)this = a2;
  v3 = (unsigned __int8 *)*((_DWORD *)a2 + 6);
  if ( !v3 )
    return 0;
  v4 = *v3;
  *((_DWORD *)this + 6) = v4;
  if ( (unsigned int)(v4 - 1) < 2 )
  {
    if ( v4 == 1 )
    {
      if ( (v3[76] & 2) != 0 )
        _rpAtomicResyncInterpolatedSphere();
      v6 = (char *)this + 32;
      v10 = *(_QWORD *)(v3 + 36);
      *((_QWORD *)this + 4) = *(_QWORD *)(v3 + 28);
      *((_QWORD *)this + 5) = v10;
      v5 = *((_DWORD *)this + 11);
    }
    else
    {
      if ( v4 != 2 )
      {
        v12 = (char *)this + 48;
        goto LABEL_16;
      }
      RpClumpGetBoundingSphere();
      v5 = *((_DWORD *)this + 11);
      v6 = (char *)this + 32;
    }
    *((_DWORD *)this + 15) = v5;
    v11 = *((_DWORD *)v3 + 1);
    v12 = (char *)this + 48;
    RwV3dTransformPoints((char *)this + 48, v6, 1, v11 + 16);
LABEL_16:
    v13 = (_DWORD *)*((_DWORD *)this + 2);
    v14 = *((float *)this + 11) * 1.1;
    RwCameraSetFarClipPlane();
    RwCameraSetNearClipPlane(*v13, v14 * 0.001);
    RwCameraSetViewWindow();
    v15 = *((_DWORD *)this + 2);
    v16 = *(_QWORD *)v12;
    v17 = *(_DWORD *)(*(_DWORD *)v15 + 4);
    *(_DWORD *)(v17 + 72) = *((_DWORD *)v12 + 2);
    *(_QWORD *)(v17 + 64) = v16;
    v18 = *(float *)(v17 + 52);
    v19 = *(float *)(v17 + 56);
    v20 = *(float *)(v17 + 68);
    *(float *)(v17 + 64) = *(float *)(v17 + 64)
                         + (float)(*(float *)(v17 + 48) * (float)(*(float *)(*(_DWORD *)v15 + 132) * -0.5));
    *(float *)(v17 + 68) = v20 + (float)(v18 * (float)(*(float *)(*(_DWORD *)v15 + 132) * -0.5));
    *(float *)(v17 + 72) = *(float *)(v17 + 72) + (float)(v19 * (float)(*(float *)(*(_DWORD *)v15 + 132) * -0.5));
    RwMatrixUpdate(v17 + 16);
    RwFrameUpdateObjects(v17);
    RwFrameOrthoNormalize();
    return 1;
  }
  v8 = (void *)*((_DWORD *)this + 2);
  if ( v8 )
  {
    CShadowCamera::Destroy(*((CShadowCamera **)this + 2));
    operator delete(v8);
    *((_DWORD *)this + 2) = 0;
  }
  v7 = 0;
  *((_DWORD *)this + 6) = -1;
  v9 = *((_DWORD *)this + 7);
  *(_DWORD *)this = 0;
  if ( v9 )
  {
    _rwObjectHasFrameSetFrame();
    RwFrameDestroy();
    RpLightDestroy();
    *((_DWORD *)this + 7) = 0;
  }
  return v7;
}


// ============================================================

// Address: 0x5b7ef8
// Original: _ZN15CRealTimeShadow18SetLightPropertiesEffb
// Demangled: CRealTimeShadow::SetLightProperties(float,float,bool)
int __fastcall CRealTimeShadow::SetLightProperties(CRealTimeShadow *this, float a2, float a3, int a4)
{
  int v6; // r4
  int v7; // r1
  int v8; // r5
  __int64 v9; // d16
  __int64 v10; // d16
  __int64 v11; // d16

  v6 = *(_DWORD *)(*((_DWORD *)this + 7) + 4);
  if ( !v6 )
    return 0;
  RwFrameRotate();
  RwV3dTransformVector();
  RwFrameRotate();
  if ( a4 == 1 )
  {
    v7 = *(_DWORD *)(*((_DWORD *)this + 7) + 4);
    v8 = *(_DWORD *)(**((_DWORD **)this + 2) + 4);
    v9 = *(_QWORD *)(v7 + 16);
    *(_DWORD *)(v8 + 24) = *(_DWORD *)(v7 + 24);
    *(_QWORD *)(v8 + 16) = v9;
    v10 = *(_QWORD *)(v7 + 32);
    *(_DWORD *)(v8 + 40) = *(_DWORD *)(v7 + 40);
    *(_QWORD *)(v8 + 32) = v10;
    v11 = *(_QWORD *)(v7 + 48);
    *(_DWORD *)(v8 + 56) = *(_DWORD *)(v7 + 56);
    *(_QWORD *)(v8 + 48) = v11;
    RwMatrixUpdate(v8 + 16);
    RwFrameUpdateObjects(v8);
  }
  return v6;
}


// ============================================================

// Address: 0x5b7f98
// Original: _ZN15CRealTimeShadow15GetShadowCameraEv
// Demangled: CRealTimeShadow::GetShadowCamera(void)
int __fastcall CRealTimeShadow::GetShadowCamera(CRealTimeShadow *this)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x5b7f9c
// Original: _ZN15CRealTimeShadow6UpdateEv
// Demangled: CRealTimeShadow::Update(void)
int __fastcall CRealTimeShadow::Update(CRealTimeShadow *this)
{
  int v2; // r0
  bool v3; // zf
  _DWORD *v4; // r6
  float v5; // s20
  int v6; // r0
  __int64 v7; // d16
  int v8; // r6
  float v9; // s6
  float v10; // s8
  float v11; // s10
  int v12; // r0
  int v13; // r0
  bool v14; // zf

  v2 = *((_DWORD *)this + 6);
  v3 = v2 == 1;
  if ( v2 != 1 )
    v3 = v2 == 2;
  if ( v3 )
    RwV3dTransformPoints(
      (char *)this + 48,
      (char *)this + 32,
      1,
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 24) + 4) + 16);
  if ( dword_6E049C == 2 && (*(_BYTE *)(*(_DWORD *)this + 58) & 7) == 3 )
    CPed::IsPlayer(*(CPed **)this);
  v4 = (_DWORD *)*((_DWORD *)this + 2);
  v5 = *((float *)this + 11) * 1.1;
  RwCameraSetFarClipPlane();
  RwCameraSetNearClipPlane(*v4, v5 * 0.001);
  RwCameraSetViewWindow();
  v6 = *((_DWORD *)this + 2);
  v7 = *((_QWORD *)this + 6);
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 4);
  *(_DWORD *)(v8 + 72) = *((_DWORD *)this + 14);
  *(_QWORD *)(v8 + 64) = v7;
  v9 = *(float *)(v8 + 52);
  v10 = *(float *)(v8 + 56);
  v11 = *(float *)(v8 + 68);
  *(float *)(v8 + 64) = *(float *)(v8 + 64)
                      + (float)(*(float *)(v8 + 48) * (float)(*(float *)(*(_DWORD *)v6 + 132) * -0.5));
  *(float *)(v8 + 68) = v11 + (float)(v9 * (float)(*(float *)(*(_DWORD *)v6 + 132) * -0.5));
  *(float *)(v8 + 72) = *(float *)(v8 + 72) + (float)(v10 * (float)(*(float *)(*(_DWORD *)v6 + 132) * -0.5));
  RwMatrixUpdate(v8 + 16);
  RwFrameUpdateObjects(v8);
  RwFrameOrthoNormalize();
  v12 = *((_DWORD *)this + 6);
  if ( v12 == 1 )
  {
    CShadowCamera::Update();
  }
  else if ( v12 == 2 )
  {
    CShadowCamera::Update();
  }
  v13 = *((_DWORD *)this + 2);
  v14 = dword_6E049C == 2;
  if ( dword_6E049C != 2 )
    v14 = *((_BYTE *)this + 20) == 0;
  if ( !v14 )
  {
    CShadowCamera::RasterGradient();
    v13 = *((_DWORD *)this + 2);
  }
  return *(_DWORD *)(v13 + 4);
}


// ============================================================

// Address: 0x5b8158
// Original: _ZN15CRealTimeShadow18GetShadowRwTextureEv
// Demangled: CRealTimeShadow::GetShadowRwTexture(void)
int __fastcall CRealTimeShadow::GetShadowRwTexture(CRealTimeShadow *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 2) + 4);
}


// ============================================================

// Address: 0x5b815e
// Original: _ZN15CRealTimeShadow23DrawBorderAroundTextureERK6RwRGBA
// Demangled: CRealTimeShadow::DrawBorderAroundTexture(RwRGBA const&)
int __fastcall CRealTimeShadow::DrawBorderAroundTexture(int a1)
{
  return CShadowCamera::DrawOutlineBorder(*(_DWORD *)(a1 + 8));
}


// ============================================================

// Address: 0x5b8170
// Original: _ZN15CRealTimeShadow6RenderEif
// Demangled: CRealTimeShadow::Render(int,float)
int __fastcall CRealTimeShadow::Render(CRealTimeShadow *this, int a2, float a3)
{
  return CShadowCamera::ShadowRasterRender();
}


// ============================================================
