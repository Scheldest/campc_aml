
// Address: 0x18f2d4
// Original: j__ZN6CMBlur15MotionBlurCloseEv
// Demangled: CMBlur::MotionBlurClose(void)
// attributes: thunk
int __fastcall CMBlur::MotionBlurClose(CMBlur *this)
{
  return _ZN6CMBlur15MotionBlurCloseEv(this);
}


// ============================================================

// Address: 0x19a5f4
// Original: j__ZN6CMBlur14MotionBlurOpenEP8RwCamera
// Demangled: CMBlur::MotionBlurOpen(RwCamera *)
// attributes: thunk
int CMBlur::MotionBlurOpen(void)
{
  return _ZN6CMBlur14MotionBlurOpenEP8RwCamera();
}


// ============================================================

// Address: 0x19a750
// Original: j__ZN6CMBlur12SetDrunkBlurEf
// Demangled: CMBlur::SetDrunkBlur(float)
// attributes: thunk
int __fastcall CMBlur::SetDrunkBlur(CMBlur *this, float a2)
{
  return _ZN6CMBlur12SetDrunkBlurEf(this, a2);
}


// ============================================================

// Address: 0x19aad0
// Original: j__ZN6CMBlur14ClearDrunkBlurEv
// Demangled: CMBlur::ClearDrunkBlur(void)
// attributes: thunk
int __fastcall CMBlur::ClearDrunkBlur(CMBlur *this)
{
  return _ZN6CMBlur14ClearDrunkBlurEv(this);
}


// ============================================================

// Address: 0x19f938
// Original: j__ZN6CMBlur16MotionBlurRenderEP8RwCamerajjjjij
// Demangled: CMBlur::MotionBlurRender(RwCamera *,uint,uint,uint,uint,int,uint)
// attributes: thunk
int CMBlur::MotionBlurRender()
{
  return _ZN6CMBlur16MotionBlurRenderEP8RwCamerajjjjij();
}


// ============================================================

// Address: 0x2cf348
// Original: _ZN6CMBlurC2Ev
// Demangled: CMBlur::CMBlur(void)
void __fastcall CMBlur::CMBlur(CMBlur *this)
{
  CMBlur::pFrontBuffer = 0;
}


// ============================================================

// Address: 0x2cf358
// Original: _ZN6CMBlurD2Ev
// Demangled: CMBlur::~CMBlur()
void __fastcall CMBlur::~CMBlur(CMBlur *this)
{
  ;
}


// ============================================================

// Address: 0x2cf35a
// Original: _ZN6CMBlur15MotionBlurCloseEv
// Demangled: CMBlur::MotionBlurClose(void)
int __fastcall CMBlur::MotionBlurClose(CMBlur *this)
{
  return 1;
}


// ============================================================

// Address: 0x2cf35e
// Original: _ZN6CMBlur23CreateImmediateModeDataEP8RwCameraP6RwRect
// Demangled: CMBlur::CreateImmediateModeData(RwCamera *,RwRect *)
void CMBlur::CreateImmediateModeData()
{
  ;
}


// ============================================================

// Address: 0x2cf360
// Original: _ZN6CMBlur23CreateImmediateModeDataEP8RwCameraP6RwRectP14RwOpenGLVertex6RwRGBAfffffi
// Demangled: CMBlur::CreateImmediateModeData(RwCamera *,RwRect *,RwOpenGLVertex *,RwRGBA,float,float,float,float,float,int)
void CMBlur::CreateImmediateModeData()
{
  ;
}


// ============================================================

// Address: 0x2cf362
// Original: _ZN6CMBlur13OverlayRenderEP8RwCameraP8RwRaster6RwRGBAii
// Demangled: CMBlur::OverlayRender(RwCamera *,RwRaster *,RwRGBA,int,int)
void CMBlur::OverlayRender()
{
  ;
}


// ============================================================

// Address: 0x2cf364
// Original: _ZN6CMBlur15OverlayRenderFxEP8RwCameraP8RwRaster
// Demangled: CMBlur::OverlayRenderFx(RwCamera *,RwRaster *)
void CMBlur::OverlayRenderFx()
{
  ;
}


// ============================================================

// Address: 0x2cf366
// Original: _ZN6CMBlur16MotionBlurRenderEP8RwCamerajjjjij
// Demangled: CMBlur::MotionBlurRender(RwCamera *,uint,uint,uint,uint,int,uint)
void CMBlur::MotionBlurRender()
{
  ;
}


// ============================================================

// Address: 0x2cf368
// Original: _ZN6CMBlur14MotionBlurOpenEP8RwCamera
// Demangled: CMBlur::MotionBlurOpen(RwCamera *)
int CMBlur::MotionBlurOpen()
{
  return 1;
}


// ============================================================

// Address: 0x2cf36c
// Original: _ZN6CMBlur12SetDrunkBlurEf
// Demangled: CMBlur::SetDrunkBlur(float)
int *__fastcall CMBlur::SetDrunkBlur(CMBlur *this, float a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  int *result; // r0

  v2.n64_u32[0] = 1.0;
  v3.n64_u32[0] = (unsigned __int32)this;
  v4.n64_u32[0] = 0;
  result = &CMBlur::Drunkness;
  CMBlur::Drunkness = vmax_f32(vmin_f32(v3, v2), v4).n64_u32[0];
  return result;
}


// ============================================================

// Address: 0x2cf394
// Original: _ZN6CMBlur14ClearDrunkBlurEv
// Demangled: CMBlur::ClearDrunkBlur(void)
int __fastcall CMBlur::ClearDrunkBlur(CMBlur *this)
{
  int result; // r0

  CMBlur::Drunkness = 0;
  result = 1065353216;
  CTimer::ms_fTimeScale = 1065353216;
  return result;
}


// ============================================================
