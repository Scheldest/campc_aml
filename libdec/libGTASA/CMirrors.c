
// Address: 0x189e0c
// Original: j__ZN8CMirrors27BuildCameraMatrixForScreensEP7CMatrix
// Demangled: CMirrors::BuildCameraMatrixForScreens(CMatrix *)
// attributes: thunk
int __fastcall CMirrors::BuildCameraMatrixForScreens(CMirrors *this, CMatrix *a2)
{
  return _ZN8CMirrors27BuildCameraMatrixForScreensEP7CMatrix(this, a2);
}


// ============================================================

// Address: 0x18e4c8
// Original: j__ZN8CMirrors16RenderReflBufferEb
// Demangled: CMirrors::RenderReflBuffer(bool)
// attributes: thunk
int __fastcall CMirrors::RenderReflBuffer(CMirrors *this, bool a2)
{
  return _ZN8CMirrors16RenderReflBufferEb(this, a2);
}


// ============================================================

// Address: 0x1927c4
// Original: j__ZN8CMirrors12CreateBufferEv
// Demangled: CMirrors::CreateBuffer(void)
// attributes: thunk
int __fastcall CMirrors::CreateBuffer(CMirrors *this)
{
  return _ZN8CMirrors12CreateBufferEv(this);
}


// ============================================================

// Address: 0x1928d8
// Original: j__ZN8CMirrors18RenderMirrorBufferEb
// Demangled: CMirrors::RenderMirrorBuffer(bool)
// attributes: thunk
int __fastcall CMirrors::RenderMirrorBuffer(CMirrors *this, bool a2)
{
  return _ZN8CMirrors18RenderMirrorBufferEb(this, a2);
}


// ============================================================

// Address: 0x195bcc
// Original: j__ZN8CMirrors16BeforeMainRenderEv
// Demangled: CMirrors::BeforeMainRender(void)
// attributes: thunk
int __fastcall CMirrors::BeforeMainRender(CMirrors *this)
{
  return _ZN8CMirrors16BeforeMainRenderEv(this);
}


// ============================================================

// Address: 0x196bac
// Original: j__ZN8CMirrors25BeforeConstructRenderListEv
// Demangled: CMirrors::BeforeConstructRenderList(void)
// attributes: thunk
int __fastcall CMirrors::BeforeConstructRenderList(CMirrors *this)
{
  return _ZN8CMirrors25BeforeConstructRenderListEv(this);
}


// ============================================================

// Address: 0x19d294
// Original: j__ZN8CMirrors17RenderReflectionsEv
// Demangled: CMirrors::RenderReflections(void)
// attributes: thunk
int __fastcall CMirrors::RenderReflections(CMirrors *this)
{
  return _ZN8CMirrors17RenderReflectionsEv(this);
}


// ============================================================

// Address: 0x5bfd88
// Original: _ZN8CMirrors4InitEv
// Demangled: CMirrors::Init(void)
int *__fastcall CMirrors::Init(CMirrors *this)
{
  int *result; // r0

  result = &CMirrors::MirrorFlags;
  CMirrors::MirrorFlags = 0;
  CMirrors::TypeOfMirror = 0;
  return result;
}


// ============================================================

// Address: 0x5bfff0
// Original: _ZN8CMirrors8ShutDownEv
// Demangled: CMirrors::ShutDown(void)
int *__fastcall CMirrors::ShutDown(CMirrors *this)
{
  int *result; // r0

  if ( CMirrors::pBuffer )
  {
    RwRasterDestroy();
    CMirrors::pBuffer = 0;
  }
  result = (int *)CMirrors::pZBuffer;
  if ( CMirrors::pZBuffer )
  {
    RwRasterDestroy();
    result = &CMirrors::pZBuffer;
    CMirrors::pZBuffer = 0;
  }
  return result;
}


// ============================================================

// Address: 0x5c460c
// Original: _ZN8CMirrors25BeforeConstructRenderListEv
// Demangled: CMirrors::BeforeConstructRenderList(void)
void __fastcall CMirrors::BeforeConstructRenderList(CMirrors *this)
{
  int PlayerVehicle; // r0
  int MirrorAttributesForCoors; // r0
  int v3; // r4
  char v4; // r0
  int IsSphereVisible; // r9
  CMatrix *v6; // r1
  int v7; // s4
  int v8; // s6
  float v9; // s0
  CMirrors *v10; // r0
  float v11; // [sp+10h] [bp-68h] BYREF
  float v12; // [sp+14h] [bp-64h]
  float v13; // [sp+18h] [bp-60h]
  int v14; // [sp+50h] [bp-28h]
  int v15; // [sp+54h] [bp-24h]

  if ( CMirrors::d3dRestored )
  {
    CMirrors::TypeOfMirror = 0;
    CMirrors::d3dRestored = 0;
    CMirrors::MirrorFlags = 0;
  }
  PlayerVehicle = FindPlayerVehicle(-1, 0);
  if ( PlayerVehicle && (unsigned int)(*(_DWORD *)(PlayerVehicle + 1444) - 3) < 2 )
    goto LABEL_9;
  MirrorAttributesForCoors = CCullZones::FindMirrorAttributesForCoors();
  v3 = MirrorAttributesForCoors;
  if ( !MirrorAttributesForCoors )
    goto LABEL_9;
  v4 = *(_BYTE *)(MirrorAttributesForCoors + 23);
  if ( (v4 & 2) == 0 )
  {
LABEL_11:
    CMirrors::MirrorV = *(_DWORD *)(v3 + 16);
    v7 = *(char *)(v3 + 21);
    v8 = *(char *)(v3 + 20);
    v9 = (float)*(char *)(v3 + 22) / 100.0;
    CMirrors::MirrorFlags = v4;
    v10 = (CMirrors *)(&stderr + 1);
    CMirrors::MirrorNormal = (float)v8 / 100.0;
    unk_A5A14C = (float)v7 / 100.0;
    unk_A5A150 = LODWORD(v9);
    if ( fabsf(v9) > 0.7 )
      v10 = (CMirrors *)((char *)&stderr + 2);
    CMirrors::TypeOfMirror = (int)v10;
    CMirrors::CreateBuffer(v10);
    if ( (CMirrors::MirrorFlags & 2) != 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  byte_95289C = 0;
  v11 = (float)((float)((float)(*(float *)&Screens8Track + qword_6B2350) + *(float *)&dword_6B235C) + unk_6B2368) * 0.25;
  v12 = (float)((float)((float)(unk_6B2348 + *(float *)&MEMORY[0x6B2354]) + unk_6B2360) + *(float *)&dword_6B236C)
      * 0.25;
  v13 = (float)((float)((float)(*(float *)&dword_6B234C + unk_6B2358) + *(float *)&dword_6B2364) + unk_6B2370) * 0.25;
  IsSphereVisible = CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)&v11, 8.0);
  byte_95289C = 0;
  v11 = (float)((float)((float)(unk_6B2374 + unk_6B2380) + unk_6B238C) + unk_6B2398) * 0.25;
  v12 = (float)((float)((float)(unk_6B2378 + unk_6B2384) + *(float *)&dword_6B2390) + unk_6B239C) * 0.25;
  v13 = (float)((float)((float)(unk_6B237C + unk_6B2388) + unk_6B2394) + *(float *)&dword_6B23A0) * 0.25;
  if ( CCamera::IsSphereVisible((CCamera *)&TheCamera, (const CVector *)&v11, 8.0) || IsSphereVisible == 1 )
  {
    v4 = *(_BYTE *)(v3 + 23);
    goto LABEL_11;
  }
LABEL_9:
  v6 = (CMatrix *)&CMirrors::TypeOfMirror;
  CMirrors::MirrorFlags = 0;
  CMirrors::TypeOfMirror = 0;
LABEL_14:
  if ( !bFudgeNow )
  {
    CCamera::DealWithMirrorBeforeConstructRenderList();
    return;
  }
LABEL_16:
  v14 = 0;
  v15 = 0;
  CMirrors::BuildCameraMatrixForScreens((CMirrors *)&v11, v6);
  CCamera::DealWithMirrorBeforeConstructRenderList();
  CMatrix::~CMatrix((CMatrix *)&v11);
}


// ============================================================

// Address: 0x5c4924
// Original: _ZN8CMirrors12CreateBufferEv
// Demangled: CMirrors::CreateBuffer(void)
int __fastcall CMirrors::CreateBuffer(CMirrors *this)
{
  int v1; // r4
  int v2; // r4
  int result; // r0
  int v4; // r5

  if ( !CMirrors::pBuffer )
  {
    v1 = *(_DWORD *)(*(_DWORD *)(dword_9FC93C + 96) + 20);
    if ( Fx_c::GetFxQuality((Fx_c *)&g_fx) >= 1 )
    {
      CMirrors::pBuffer = RwRasterCreate(1024, 512, v1, 5);
      if ( CMirrors::pBuffer )
      {
        CMirrors::pZBuffer = RwRasterCreate(1024, 512, v1, 1);
        if ( CMirrors::pZBuffer )
          goto LABEL_7;
        RwRasterDestroy();
        CMirrors::pBuffer = 0;
      }
    }
    CMirrors::pBuffer = RwRasterCreate(512, 256, v1, 5);
    CMirrors::pZBuffer = RwRasterCreate(512, 256, v1, 1);
  }
LABEL_7:
  v2 = 0;
  result = CMirrors::reflBuffer;
  if ( dword_6E04DC == 2 )
    v2 = 256;
  if ( dword_6E04DC == 3 )
    v2 = 512;
  if ( v2 )
  {
    if ( CMirrors::reflBuffer )
    {
      if ( *(_DWORD *)(CMirrors::reflBuffer + 16) == v2 )
        return result;
      v4 = *(_DWORD *)(*(_DWORD *)(dword_9FC93C + 96) + 20);
      RwRasterDestroy();
      RwRasterDestroy();
    }
    else
    {
      v4 = *(_DWORD *)(*(_DWORD *)(dword_9FC93C + 96) + 20);
    }
    CMirrors::reflBuffer = RwRasterCreate(v2, v2, v4, 5);
    result = RwRasterCreate(v2, v2, v4, 1);
  }
  else
  {
    if ( !CMirrors::reflBuffer )
      return result;
    RwRasterDestroy();
    RwRasterDestroy();
    result = 0;
    CMirrors::reflBuffer = 0;
  }
  dword_A5A140 = result;
  return result;
}


// ============================================================

// Address: 0x5c4aa4
// Original: _ZN8CMirrors27BuildCameraMatrixForScreensEP7CMatrix
// Demangled: CMirrors::BuildCameraMatrixForScreens(CMatrix *)
int __fastcall CMirrors::BuildCameraMatrixForScreens(CMirrors *this, CMatrix *a2)
{
  unsigned int v3; // r5
  signed int v4; // r6
  int v5; // r0
  float v6; // s16
  CVector *v7; // r5
  double v8; // d16
  double v9; // d16
  int result; // r0
  double v11; // [sp+0h] [bp-28h] BYREF
  int v12; // [sp+8h] [bp-20h]

  v3 = (CTimer::m_snTimeInMilliseconds / 0x3E8u) & 0x1F;
  if ( v3 <= 0x19 )
  {
    v4 = CTimer::m_snTimeInMilliseconds % 0x3E8u;
    if ( 1 << v3 << 28 )
    {
      v6 = (float)((float)((float)((float)v4 / 1000.0) + (float)(int)v3) * 6.0) + -1249.3;
      CMatrix::SetTranslateOnly(this, v6, -224.5, 1064.2);
      v7 = (CMirrors *)((char *)this + 16);
      *((float *)this + 4) = -1265.4 - v6;
      *(_QWORD *)((char *)this + 20) = 0xC130000041880000LL;
LABEL_9:
      CVector::Normalise(v7);
      *((_DWORD *)this + 9) = 0;
      *((_DWORD *)this + 10) = 1065353216;
      *((_DWORD *)this + 8) = 0;
      CrossProduct((const CVector *)&v11, (CMirrors *)((char *)this + 32));
      v8 = v11;
      *((_DWORD *)this + 2) = v12;
      *(double *)this = v8;
      CVector::Normalise(this);
      CrossProduct((const CVector *)&v11, v7);
      v9 = v11;
      result = v12;
      *((_DWORD *)this + 10) = v12;
      *((double *)this + 4) = v9;
      return result;
    }
    if ( ((1 << v3) & 0x3C00) != 0 )
    {
      CMatrix::SetTranslateOnly(this, -1406.4, -135.3, 1045.7);
      *(_QWORD *)((char *)this + 20) = 0xC0233400C1380000LL;
      v5 = 1081711104;
      goto LABEL_8;
    }
    if ( ((1 << v3) & 0x3C00000) != 0 )
    {
      CMatrix::SetTranslateOnly(this, -1479.0, -290.5, 1099.5);
      *((_DWORD *)this + 5) = 1107768112;
      v5 = 1112276992;
      *((float *)this + 6) = (float)((float)((float)((float)((float)v4 / 1000.0) + (float)(int)(v3 - 22)) * 3.0) + 1057.3)
                           + -1099.5;
LABEL_8:
      *((_DWORD *)this + 4) = v5;
      v7 = (CMirrors *)((char *)this + 16);
      goto LABEL_9;
    }
  }
  CMatrix::SetRotateZOnly(this, (float)(CTimer::m_snTimeInMilliseconds & 0x3FFF) * 0.0003835);
  return sub_19A66C(this, -1397.0, -219.0, 1054.0);
}


// ============================================================

// Address: 0x5c4cc0
// Original: _ZN8CMirrors16BeforeMainRenderEv
// Demangled: CMirrors::BeforeMainRender(void)
int __fastcall CMirrors::BeforeMainRender(CMirrors *this)
{
  int result; // r0
  int v2; // r2
  __int64 v3; // kr00_8
  CVisibilityPlugins *v4; // r0
  int i; // r0
  _BYTE v6[20]; // [sp+4h] [bp-1Ch] BYREF

  result = CMirrors::TypeOfMirror;
  if ( CMirrors::TypeOfMirror )
  {
    v2 = dword_9FC93C;
    v3 = *(_QWORD *)(dword_9FC93C + 96);
    *(_DWORD *)(dword_9FC93C + 96) = CMirrors::pBuffer;
    *(_DWORD *)(v2 + 100) = CMirrors::pZBuffer;
    CCamera::SetCameraUpForMirror((CCamera *)&TheCamera);
    CRGBA::CRGBA((CRGBA *)v6, 0, 0, 0, 0xFFu);
    RwCameraClear();
    *(float *)(dword_9FC93C + 108) = -*(float *)(dword_9FC93C + 108);
    result = RsCameraBeginUpdate();
    if ( result )
    {
      CMirrors::bRenderingReflection = 1;
      DefinedState();
      v4 = (CVisibilityPlugins *)RenderScene(1);
      CVisibilityPlugins::RenderWeaponPedsForPC(v4);
      for ( i = dword_A84140; (_BYTE *)dword_A84140 != algn_A84144; i = dword_A84140 )
      {
        *(_DWORD *)(*(_DWORD *)(i + 8) + 4) = *(_DWORD *)(i + 4);
        *(_DWORD *)(*(_DWORD *)(i + 4) + 8) = *(_DWORD *)(i + 8);
        *(_DWORD *)(i + 8) = dword_A84158;
        *(_DWORD *)(dword_A84158 + 4) = i;
        *(_DWORD *)(i + 4) = &unk_A84150;
        dword_A84158 = i;
      }
      CMirrors::bRenderingReflection = 0;
      RwCameraEndUpdate();
      *(_QWORD *)(dword_9FC93C + 96) = v3;
      return CCamera::RestoreCameraAfterMirror((CCamera *)&TheCamera);
    }
  }
  return result;
}


// ============================================================

// Address: 0x5c4de0
// Original: _ZN8CMirrors17RenderReflectionsEv
// Demangled: CMirrors::RenderReflections(void)
int __fastcall CMirrors::RenderReflections(CMirrors *this)
{
  int result; // r0
  char v2; // r0
  int *v3; // r2
  int v4; // r10
  __int64 v5; // kr00_8
  unsigned __int8 v6; // r4
  unsigned __int8 v7; // r2
  unsigned __int8 v8; // r0
  float v9; // s0
  int v10; // r0
  __int64 v11; // kr08_8
  int v12; // r2
  __int64 v13; // d16
  CEntity *PlayerPed; // r0
  CRenderer *v15; // r0
  CBirds *v16; // r0
  __int64 v17; // [sp+8h] [bp-30h] BYREF
  float v18; // [sp+10h] [bp-28h]
  _BYTE v19[32]; // [sp+18h] [bp-20h] BYREF

  result = dword_6E04DC;
  if ( dword_6E04DC >= 2 )
  {
    CMirrors::CreateBuffer((CMirrors *)dword_6E04DC);
    result = dword_6E04DC;
    if ( dword_6E04DC >= 2 )
    {
      result = FindPlayerPed(-1);
      if ( result )
      {
        result = CMirrors::reflBuffer;
        if ( CMirrors::reflBuffer )
        {
          v2 = byte_A5A164;
          __dmb(0xBu);
          if ( (v2 & 1) == 0 && j___cxa_guard_acquire((__guard *)&byte_A5A164) )
          {
            v3 = dword_5C4FFC;
            if ( dword_6E04DC == 2 )
              v3 = &dword_5C4FFC[1];
            dword_A5A160 = *v3;
            j___cxa_guard_release((__guard *)&byte_A5A164);
          }
          CCamera::SetToSphereMap((CCamera *)&TheCamera, *(float *)&dword_A5A160);
          v4 = CMirrors::TypeOfMirror;
          CMirrors::TypeOfMirror = 3;
          v5 = *(_QWORD *)(dword_9FC93C + 96);
          *(_QWORD *)(dword_9FC93C + 96) = *(_QWORD *)&CMirrors::reflBuffer;
          emu_SetRenderingSphere(0, 1u);
          v6 = 64;
          v7 = BYTE2(dword_966570);
          v8 = dword_966570;
          if ( (unsigned __int16)dword_966570 <= 0x40u )
            v8 = 64;
          if ( HIWORD(dword_966570) <= 0x40u )
            v7 = 64;
          if ( (unsigned __int16)qword_966574 > 0x40u )
            v6 = qword_966574;
          CRGBA::CRGBA((CRGBA *)v19, v8, v7, v6, 0xFFu);
          RwCameraClear();
          if ( RsCameraBeginUpdate() )
          {
            v9 = *(float *)&dword_A5A160 * 0.75;
            v10 = dword_9FC93C;
            v11 = *(_QWORD *)(dword_9FC93C + 132);
            *(_DWORD *)(dword_9FC93C + 132) = dword_A5A160;
            *(float *)(v10 + 136) = v9;
            CMirrors::bRenderingReflection = 1;
            if ( CCutsceneMgr::ms_running )
            {
              v12 = dword_951FBC + 48;
              if ( !dword_951FBC )
                v12 = (int)&qword_951FAC;
              v13 = *(_QWORD *)v12;
              v18 = *(float *)&byte_8[v12];
              v17 = v13;
            }
            else
            {
              PlayerPed = (CEntity *)FindPlayerPed(-1);
              CPed::GetBonePosition(PlayerPed);
              v18 = v18 + -2.0;
            }
            emu_SetCameraPosition((float *)&v17);
            v15 = (CRenderer *)DefinedState();
            CRenderer::ConstructReflectionList(v15);
            v16 = (CBirds *)RenderScene(0);
            CBirds::Render(v16);
            CMirrors::bRenderingReflection = 0;
            RwCameraEndUpdate();
            emu_SetRenderingSphere(0, 0);
            *(_QWORD *)(dword_9FC93C + 96) = v5;
            CMirrors::TypeOfMirror = v4;
            CCamera::SetToSphereMap((CCamera *)&TheCamera, 0.0);
            result = dword_9FC93C;
            *(_QWORD *)(dword_9FC93C + 132) = v11;
          }
          else
          {
            emu_SetRenderingSphere(0, 0);
            return CCamera::SetToSphereMap((CCamera *)&TheCamera, 0.0);
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5c5048
// Original: _ZN8CMirrors16RenderReflBufferEb
// Demangled: CMirrors::RenderReflBuffer(bool)
int __fastcall CMirrors::RenderReflBuffer(CMirrors *this, bool a2)
{
  int result; // r0
  int v4; // r1
  float v5; // s16
  float v6; // s20
  float v7; // s18
  float v8; // s20
  int v9; // r0

  result = CMirrors::reflBuffer;
  if ( CMirrors::reflBuffer )
  {
    result = dword_6E04DC;
    if ( dword_6E04DC >= 2 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)RwEngineInstance + 96);
      v5 = (float)*(int *)(v4 + 12);
      v6 = *(float *)(*(_DWORD *)RwEngineInstance + 128);
      v7 = (float)*(int *)(v4 + 16);
      RwRenderStateSet(11, 1);
      RwRenderStateSet(10, 2);
      RwRenderStateSet(9, 2);
      RwRenderStateSet(1, CMirrors::reflBuffer);
      v8 = 1.0 / v6;
      v9 = RwIm2DGetNearScreenZ();
      if ( this == (CMirrors *)((char *)&stderr + 1) )
        Im2DRenderQuad(v5 * 0.68, v7 * 0.02, v5 * 0.68, v7 * 0.02, *(float *)&v9, v8, 0.0);
      else
        Im2DRenderQuad(v5 * 0.68, v7 * 0.02, v5 * 0.98, v7 * 0.32, *(float *)&v9, v8, 0.0);
      RwRenderStateSet(11, 6);
      return sub_192888();
    }
  }
  return result;
}


// ============================================================

// Address: 0x5c5178
// Original: _ZN8CMirrors18RenderMirrorBufferEb
// Demangled: CMirrors::RenderMirrorBuffer(bool)
int __fastcall CMirrors::RenderMirrorBuffer(CMirrors *this, bool a2)
{
  int result; // r0
  int v4; // r0
  int v5; // s2
  float v6; // s16
  float v7; // s0
  float v8; // s0
  float v9; // s0
  float v10; // s0
  __int64 *v11; // r2
  float32x2_t v12; // d16
  unsigned __int64 v13; // d1

  result = CMirrors::TypeOfMirror;
  if ( CMirrors::TypeOfMirror )
  {
    v4 = *(_DWORD *)(dword_9FC93C + 96);
    v5 = *(_DWORD *)(v4 + 16);
    v6 = (float)*(int *)(v4 + 12);
    DefinedState();
    RwRenderStateSet(9, 2);
    RwRenderStateSet(14, 0);
    RwRenderStateSet(6, 0);
    RwRenderStateSet(8, 0);
    RwRenderStateSet(1, CMirrors::pBuffer);
    RwRenderStateSet(12, 0);
    RwRenderStateSet(10, 2);
    RwRenderStateSet(11, 1);
    result = CMirrors::MirrorFlags << 30;
    if ( (CMirrors::MirrorFlags & 2) != 0 || (result = (unsigned __int8)bFudgeNow, bFudgeNow) )
    {
      if ( this != (CMirrors *)((char *)&stderr + 1) )
        return result;
      RwRenderStateSet(8, 1);
      RwRenderStateSet(6, 1);
      RwRenderStateSet(12, 0);
      RwRenderStateSet(14, 1);
      dword_A5A204 = unk_6B2358;
      *(_QWORD *)TempVertexBuffer = *(_QWORD *)&Screens8Track;
      dword_A5A1E0 = dword_6B234C;
      *(_QWORD *)&dword_A5A1FC = qword_6B2350;
      dword_A5A220 = dword_6B235C;
      dword_A5A224 = unk_6B2360;
      dword_A5A228 = dword_6B2364;
      dword_A5A244 = unk_6B2368;
      dword_A5A24C = unk_6B2370;
      dword_A5A248 = dword_6B236C;
      dword_A5A214 = -1;
      dword_A5A238 = -1;
      dword_A5A25C = -1;
      dword_A5A1F8 = 0;
      dword_A5A1F0 = -1;
      dword_A5A1F4 = 0;
      dword_A5A21C = 0;
      dword_A5A218 = 1065353216;
      dword_A5A23C = 1065353216;
      dword_A5A240 = 1065353216;
      TempBufferIndicesStored = 6;
      TempBufferVerticesStored = 4;
      TempBufferRenderIndexList[0] = dword_6B23A4;
      dword_A7A1DC = dword_6B23A8;
      dword_A7A1E0 = dword_6B23AC;
      dword_A5A264 = 1065353216;
      dword_A5A260 = 0;
      if ( RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
      TempVertexBuffer[0] = unk_6B2374;
      dword_A5A1DC = unk_6B2378;
      dword_A5A1E0 = unk_6B237C;
      dword_A5A204 = unk_6B2388;
      dword_A5A1FC = unk_6B2380;
      dword_A5A200 = unk_6B2384;
      dword_A5A228 = unk_6B2394;
      dword_A5A220 = unk_6B238C;
      dword_A5A224 = dword_6B2390;
      dword_A5A1F8 = 0;
      dword_A5A1F0 = -1;
      dword_A5A1F4 = 0;
      dword_A5A21C = 0;
      dword_A5A214 = -1;
      dword_A5A218 = 1065353216;
      dword_A5A238 = -1;
      dword_A5A23C = 1065353216;
      dword_A5A240 = 1065353216;
      dword_A5A244 = unk_6B2398;
      dword_A5A248 = unk_6B239C;
      dword_A5A24C = dword_6B23A0;
      dword_A5A25C = -1;
      dword_A5A260 = 0;
      TempBufferRenderIndexList[0] = dword_6B23A4;
      dword_A7A1DC = dword_6B23A8;
      TempBufferIndicesStored = 6;
      dword_A7A1E0 = dword_6B23AC;
      dword_A5A264 = 1065353216;
      TempBufferVerticesStored = 4;
      if ( RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
    }
    else
    {
      if ( this )
        return result;
      dword_A5A168 = 0;
      *(_DWORD *)algn_A5A16C = 0;
      dword_A5A170 = RwIm2DGetNearScreenZ();
      v7 = *(float *)(dword_9FC93C + 128);
      *(_QWORD *)&dword_A5A178 = 0x3F800000FFFFDCDCLL;
      dword_A5A180 = 0;
      unk_A5A184 = 0;
      unk_A5A188 = (float)v5;
      *(float *)algn_A5A174 = 1.0 / v7;
      dword_A5A18C = RwIm2DGetNearScreenZ();
      v8 = *(float *)(dword_9FC93C + 128);
      *(_QWORD *)&dword_A5A194 = 0x3F800000FFFFDCDCLL;
      dword_A5A19C = 1065353216;
      unk_A5A1A0 = LODWORD(v6);
      unk_A5A1A4 = (float)v5;
      unk_A5A190 = 1.0 / v8;
      dword_A5A1A8 = RwIm2DGetNearScreenZ();
      v9 = *(float *)(dword_9FC93C + 128);
      dword_A5A1B0 = -8996;
      unk_A5A1B4 = 0;
      dword_A5A1B8 = 1065353216;
      dword_A5A1C0 = 0;
      *(float *)algn_A5A1BC = v6;
      *(float *)algn_A5A1AC = 1.0 / v9;
      dword_A5A1C4 = RwIm2DGetNearScreenZ();
      v10 = *(float *)(dword_9FC93C + 128);
      dword_A5A1CC = -8996;
      unk_A5A1D0 = 0;
      dword_A5A1D4 = 0;
      unk_A5A1C8 = 1.0 / v10;
      RwIm2DRenderIndexedPrimitive_BUGFIX();
    }
    v11 = (__int64 *)(dword_951FBC + 48);
    if ( !dword_951FBC )
      v11 = &qword_951FAC;
    v12.n64_u64[0] = vadd_f32(*(float32x2_t *)((char *)v11 + 4), (float32x2_t)0xC47AC00042280000LL).n64_u64[0];
    v13 = vmul_f32(v12, v12).n64_u64[0];
    if ( sqrtf(
           (float)((float)((float)(*(float *)v11 + -216.0) * (float)(*(float *)v11 + -216.0)) + *(float *)&v13)
         + *((float *)&v13 + 1)) < 50.0 )
    {
      RwRenderStateSet(8, 1);
      RwRenderStateSet(12, 0);
      RwRenderStateSet(10, 1);
      RwRenderStateSet(11, 2);
      dword_A5A1DC = -1036779520;
      TempVertexBuffer[0] = 1129840640;
      dword_A5A1E0 = 1148846080;
      dword_A5A1F0 = -1;
      dword_A5A1F4 = 0;
      dword_A5A1F8 = 0;
      dword_A5A1FC = 1129840640;
      dword_A5A200 = -1036779520;
      dword_A5A204 = 1148944384;
      dword_A5A214 = -1;
      dword_A5A218 = 1065353216;
      dword_A5A21C = 0;
      dword_A5A220 = 1129840640;
      dword_A5A224 = -1038352384;
      dword_A5A228 = 1148944384;
      dword_A5A238 = -1;
      dword_A5A23C = 1065353216;
      dword_A5A240 = 1065353216;
      dword_A5A244 = 1129840640;
      dword_A5A248 = -1038352384;
      dword_A5A24C = 1148846080;
      dword_A5A25C = -1;
      dword_A5A260 = 0;
      TempBufferIndicesStored = 6;
      TempBufferVerticesStored = 4;
      TempBufferRenderIndexList[0] = dword_6B23A4;
      dword_A7A1DC = dword_6B23A8;
      dword_A7A1E0 = dword_6B23AC;
      dword_A5A264 = 1065353216;
      if ( RwIm3DTransform() )
      {
        RwIm3DRenderIndexedPrimitive();
        RwIm3DEnd();
      }
    }
    RwRenderStateSet(14, 0);
    RwRenderStateSet(6, 1);
    RwRenderStateSet(8, 1);
    RwRenderStateSet(1, 0);
    RwRenderStateSet(12, 0);
    RwRenderStateSet(10, 5);
    return sub_192888();
  }
  return result;
}


// ============================================================

// Address: 0x5c5688
// Original: _ZN8CMirrors14BuildCamMatrixEP7CMatrix7CVectorS2_
// Demangled: CMirrors::BuildCamMatrix(CMatrix *,CVector,CVector)
int __fastcall CMirrors::BuildCamMatrix(int a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  double v11; // d16
  double v12; // d16
  int result; // r0
  double v14; // [sp+0h] [bp-20h] BYREF
  int v15; // [sp+8h] [bp-18h]

  CMatrix::SetTranslateOnly((CMatrix *)a1, a2, a3, a4);
  *(float *)(a1 + 16) = a5 - a2;
  *(float *)(a1 + 20) = a6 - a3;
  *(float *)(a1 + 24) = a7 - a4;
  CVector::Normalise((CVector *)(a1 + 16));
  *(_QWORD *)(a1 + 36) = 0x3F80000000000000LL;
  *(_DWORD *)(a1 + 32) = 0;
  CrossProduct((const CVector *)&v14, (const CVector *)(a1 + 32));
  v11 = v14;
  *(_DWORD *)(a1 + 8) = v15;
  *(double *)a1 = v11;
  CVector::Normalise((CVector *)a1);
  CrossProduct((const CVector *)&v14, (const CVector *)(a1 + 16));
  v12 = v14;
  result = v15;
  *(_DWORD *)(a1 + 40) = v15;
  *(double *)(a1 + 32) = v12;
  return result;
}


// ============================================================
