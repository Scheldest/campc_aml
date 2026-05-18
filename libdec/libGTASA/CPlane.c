
// Address: 0x18a63c
// Original: j__ZN6CPlane27DoPlaneGenerationAndRemovalEv
// Demangled: CPlane::DoPlaneGenerationAndRemoval(void)
// attributes: thunk
int __fastcall CPlane::DoPlaneGenerationAndRemoval(CPlane *this)
{
  return _ZN6CPlane27DoPlaneGenerationAndRemovalEv(this);
}


// ============================================================

// Address: 0x18c384
// Original: j__ZN6CPlaneC2Eih
// Demangled: CPlane::CPlane(int,uchar)
// attributes: thunk
void __fastcall CPlane::CPlane(CPlane *this, int a2, unsigned __int8 a3)
{
  _ZN6CPlaneC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x18f8bc
// Original: j__ZN6CPlaneC2Eih_0
// Demangled: CPlane::CPlane(int,uchar)
// attributes: thunk
void __fastcall CPlane::CPlane(CPlane *this, int a2, unsigned __int8 a3)
{
  _ZN6CPlaneC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x19253c
// Original: j__ZN6CPlaneD2Ev
// Demangled: CPlane::~CPlane()
// attributes: thunk
void __fastcall CPlane::~CPlane(CPlane *this)
{
  _ZN6CPlaneD2Ev(this);
}


// ============================================================

// Address: 0x192aec
// Original: j__ZN6CPlane11SetGearDownEv
// Demangled: CPlane::SetGearDown(void)
// attributes: thunk
int __fastcall CPlane::SetGearDown(CPlane *this)
{
  return _ZN6CPlane11SetGearDownEv(this);
}


// ============================================================

// Address: 0x193f50
// Original: j__ZN6CPlane22FindPlaneCreationCoorsEP7CVectorS1_PfS2_b
// Demangled: CPlane::FindPlaneCreationCoors(CVector *,CVector *,float *,float *,bool)
// attributes: thunk
int __fastcall CPlane::FindPlaneCreationCoors(CPlane *this, CVector *a2, CVector *a3, float *a4, float *a5, bool a6)
{
  return _ZN6CPlane22FindPlaneCreationCoorsEP7CVectorS1_PfS2_b(this, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x1942fc
// Original: j__ZN6CPlane29InitPlaneGenerationAndRemovalEv
// Demangled: CPlane::InitPlaneGenerationAndRemoval(void)
// attributes: thunk
int __fastcall CPlane::InitPlaneGenerationAndRemoval(CPlane *this)
{
  return _ZN6CPlane29InitPlaneGenerationAndRemovalEv(this);
}


// ============================================================

// Address: 0x19685c
// Original: j__ZN6CPlane15IsAlreadyFlyingEv
// Demangled: CPlane::IsAlreadyFlying(void)
// attributes: thunk
int __fastcall CPlane::IsAlreadyFlying(CPlane *this)
{
  return _ZN6CPlane15IsAlreadyFlyingEv(this);
}


// ============================================================

// Address: 0x19faec
// Original: j__ZN6CPlane19SwitchAmbientPlanesEb
// Demangled: CPlane::SwitchAmbientPlanes(bool)
// attributes: thunk
int __fastcall CPlane::SwitchAmbientPlanes(CPlane *this, bool a2)
{
  return _ZN6CPlane19SwitchAmbientPlanesEb(this, a2);
}


// ============================================================

// Address: 0x1a08e8
// Original: j__ZN6CPlane9SetGearUpEv
// Demangled: CPlane::SetGearUp(void)
// attributes: thunk
int __fastcall CPlane::SetGearUp(CPlane *this)
{
  return _ZN6CPlane9SetGearUpEv(this);
}


// ============================================================

// Address: 0x575890
// Original: _ZN6CPlaneC2Eih
// Demangled: CPlane::CPlane(int,uchar)
void __fastcall CPlane::CPlane(CPlane *this, int a2, unsigned __int8 a3)
{
  CVehicleModelInfo *v5; // r5
  int v6; // r1
  int v7; // r1
  int v8; // r0
  __int16 v9; // r0
  int v10; // r0
  _BYTE v11[8]; // [sp+0h] [bp-30h] BYREF
  float v12; // [sp+8h] [bp-28h]
  _BYTE v13[8]; // [sp+Ch] [bp-24h] BYREF
  float v14; // [sp+14h] [bp-1Ch]

  CAutomobile::CAutomobile(this, a2, a3, 1u);
  *(_DWORD *)this = &off_66DD94;
  v5 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[a2]);
  v6 = *((unsigned __int16 *)this + 19);
  *(_QWORD *)((char *)this + 2460) = 0LL;
  *(_QWORD *)((char *)this + 2468) = 0LL;
  *((_QWORD *)this + 311) = 0x4170000000000000LL;
  *((_QWORD *)this + 312) = 0x41A0000041C80000LL;
  *((_DWORD *)this + 361) = 4;
  *((_DWORD *)this + 626) = 0;
  *((_DWORD *)this + 627) = 0;
  *((_DWORD *)this + 628) = 0;
  *((_DWORD *)this + 629) = 0;
  *((_DWORD *)this + 630) = 0;
  *((_DWORD *)this + 631) = 0;
  *((_DWORD *)this + 632) = 0;
  *((_DWORD *)this + 619) = 1065353216;
  *((_DWORD *)this + 620) = 0;
  *((_DWORD *)this + 621) = 0;
  if ( v6 != 539 )
    *((_DWORD *)this + 17) |= 0x1000000u;
  v7 = *((_DWORD *)this + 268);
  v8 = *((_DWORD *)this + 267) | 0x400;
  *((_WORD *)this + 600) = 255;
  *((_DWORD *)this + 267) = v8;
  *((_DWORD *)this + 268) = v7 | 0x40;
  switch ( a2 )
  {
    case 512:
    case 520:
      goto LABEL_6;
    case 513:
      CDamageManager::SetDoorStatus((char *)this + 1460, 2, 0);
      *((_DWORD *)this + 383) = 1072776763;
      *((_DWORD *)this + 384) = 0;
      *((_BYTE *)this + 1542) = 1;
      *((_WORD *)this + 770) = 19;
      *(_BYTE *)(GetFirstObject() + 2) = 0;
      goto LABEL_8;
    case 514:
    case 515:
    case 516:
    case 517:
    case 518:
    case 521:
    case 522:
    case 523:
    case 524:
    case 525:
    case 526:
    case 527:
    case 528:
    case 529:
    case 530:
    case 531:
    case 532:
    case 533:
    case 534:
    case 535:
    case 536:
    case 537:
    case 538:
    case 540:
    case 541:
    case 542:
    case 543:
    case 544:
    case 545:
    case 546:
    case 547:
    case 548:
    case 549:
    case 550:
    case 551:
    case 552:
      goto LABEL_13;
    case 519:
      CDamageManager::SetDoorStatus((char *)this + 1460, 2, 0);
      *((_DWORD *)this + 383) = -1072247836;
      *((_DWORD *)this + 384) = 0;
      *((_BYTE *)this + 1542) = 1;
      *((_WORD *)this + 770) = 18;
LABEL_8:
      *(_BYTE *)(GetFirstObject() + 2) = 0;
      goto LABEL_13;
    case 539:
      if ( *((unsigned __int16 *)this + 864) == 0xFFFF )
        CBouncingPanel::SetPanel((CPlane *)((char *)this + 1728), 21, 1, -0.25);
      goto LABEL_13;
    case 553:
      CDamageManager::SetDoorStatus((char *)this + 1460, 2, 0);
      *((_DWORD *)this + 383) = -1079977604;
      v9 = 20;
      *((_DWORD *)this + 384) = 0;
      *((_BYTE *)this + 1542) = 2;
      goto LABEL_12;
    default:
      if ( a2 != 476 )
        goto LABEL_13;
LABEL_6:
      CDamageManager::SetDoorStatus((char *)this + 1460, 2, 0);
      *((_DWORD *)this + 383) = 1072776763;
      *((_DWORD *)this + 384) = 0;
      *((_BYTE *)this + 1542) = 1;
      v9 = 19;
LABEL_12:
      *((_WORD *)this + 770) = v9;
LABEL_13:
      CVehicleModelInfo::GetWheelPosn(v5, 0, (CVector *)v13, 0);
      CVehicleModelInfo::GetWheelPosn(v5, 0, (CVector *)v11, 1);
      *((float *)this + 531) = (float)(*((float *)this + 531) - v14) + v12;
      CVehicleModelInfo::GetWheelPosn(v5, 1, (CVector *)v13, 0);
      CVehicleModelInfo::GetWheelPosn(v5, 1, (CVector *)v11, 1);
      *((float *)this + 532) = (float)(*((float *)this + 532) - v14) + v12;
      CVehicleModelInfo::GetWheelPosn(v5, 2, (CVector *)v13, 0);
      CVehicleModelInfo::GetWheelPosn(v5, 2, (CVector *)v11, 1);
      *((float *)this + 533) = (float)(*((float *)this + 533) - v14) + v12;
      CVehicleModelInfo::GetWheelPosn(v5, 3, (CVector *)v13, 0);
      CVehicleModelInfo::GetWheelPosn(v5, 3, (CVector *)v11, 1);
      *((float *)this + 534) = (float)(*((float *)this + 534) - v14) + v12;
      *(_QWORD *)((char *)this + 2556) = 0LL;
      *(_QWORD *)((char *)this + 2564) = 0LL;
      *((_DWORD *)this + 633) = 0;
      *((_DWORD *)this + 634) = 0;
      v10 = *((unsigned __int16 *)this + 19);
      *((_BYTE *)this + 2540) = 16;
      *((_DWORD *)this + 636) = 0;
      *((_DWORD *)this + 637) = 0;
      *((_DWORD *)this + 643) = 0;
      if ( v10 == 520 )
        *((_WORD *)this + 1088) = CPlane::HARRIER_NOZZLE_ROTATE_LIMIT;
      *((_BYTE *)this + 2580) = 0;
      return;
  }
}


// ============================================================

// Address: 0x575b9c
// Original: _ZN6CPlaneD2Ev
// Demangled: CPlane::~CPlane()
void __fastcall CPlane::~CPlane(CPlane *this)
{
  int v2; // r1
  int PlaneNumGuns; // r1
  _DWORD *v4; // r0
  int i; // r6
  FxSystem_c *v6; // r0
  int v7; // r1
  FxSystem_c *v8; // r0
  FxSystem_c *v9; // r0
  FxSystem_c *v10; // r0
  FxSystem_c *v11; // r0
  FxSystem_c *v12; // r0

  v2 = *((_DWORD *)this + 634);
  *(_DWORD *)this = &off_66DD94;
  if ( v2 )
  {
    PlaneNumGuns = CVehicle::GetPlaneNumGuns(this);
    v4 = (_DWORD *)*((_DWORD *)this + 634);
    if ( PlaneNumGuns >= 1 )
    {
      for ( i = 0; i < v7; ++i )
      {
        v6 = (FxSystem_c *)v4[i];
        if ( v6 )
        {
          FxSystem_c::Kill(v6);
          FxManager_c::DestroyFxSystem((FxManager_c *)&g_fxMan, *(FxSystem_c **)(*((_DWORD *)this + 634) + 4 * i));
        }
        v7 = CVehicle::GetPlaneNumGuns(this);
        v4 = (_DWORD *)*((_DWORD *)this + 634);
      }
    }
    if ( v4 )
      operator delete[](v4);
    *((_DWORD *)this + 634) = 0;
  }
  v8 = (FxSystem_c *)*((_DWORD *)this + 639);
  if ( v8 )
  {
    FxSystem_c::Kill(v8);
    *((_DWORD *)this + 639) = 0;
  }
  v9 = (FxSystem_c *)*((_DWORD *)this + 640);
  if ( v9 )
  {
    FxSystem_c::Kill(v9);
    *((_DWORD *)this + 640) = 0;
  }
  v10 = (FxSystem_c *)*((_DWORD *)this + 641);
  if ( v10 )
  {
    FxSystem_c::Kill(v10);
    *((_DWORD *)this + 641) = 0;
  }
  v11 = (FxSystem_c *)*((_DWORD *)this + 642);
  if ( v11 )
  {
    FxSystem_c::Kill(v11);
    *((_DWORD *)this + 642) = 0;
  }
  v12 = (FxSystem_c *)*((_DWORD *)this + 643);
  if ( v12 )
  {
    FxSystem_c::Kill(v12);
    *((_DWORD *)this + 643) = 0;
  }
  CAEVehicleAudioEntity::Terminate((CPlane *)((char *)this + 316));
  sub_19E4D4(this);
}


// ============================================================

// Address: 0x575c78
// Original: _ZN6CPlaneD0Ev
// Demangled: CPlane::~CPlane()
void __fastcall CPlane::~CPlane(CPlane *this)
{
  void *v1; // r0

  CPlane::~CPlane(this);
  sub_199F80(v1);
}


// ============================================================

// Address: 0x575c88
// Original: _ZN6CPlane14ProcessControlEv
// Demangled: CPlane::ProcessControl(void)
int __fastcall CPlane::ProcessControl(CPlane *this, int a2)
{
  int v3; // r0
  CPad *v4; // r0
  int v5; // r0
  int result; // r0
  float v7; // s2
  float v8; // s0
  _BYTE v9[28]; // [sp+14h] [bp-84h] BYREF
  float v10[3]; // [sp+30h] [bp-68h] BYREF
  _BYTE v11[44]; // [sp+6Ch] [bp-2Ch] BYREF

  if ( *((unsigned __int8 *)this + 58) <= 7u && (*((__int16 *)this + 19) & 0xFFFFFFFE) == 0x200 )
  {
    v3 = *((_DWORD *)this + 281);
    if ( v3 )
    {
      v4 = *(CPad **)(v3 + 1436);
      if ( v4 != (CPad *)((char *)&stderr + 1) )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
    CPad::GetPad(v4, a2);
    if ( CHID::IsReleased(102) == 1 )
      *((_BYTE *)this + 2580) = *((_BYTE *)this + 2580) == 0;
  }
  if ( *((_BYTE *)this + 2580) && ((*((_DWORD *)this + 267) & 0x40000010) != 0x10 || !*((_DWORD *)this + 281)) )
    *((_BYTE *)this + 2580) = 0;
  if ( *((_WORD *)this + 19) == 460 )
  {
    CDamageManager::SetWheelStatus((CPlane *)((char *)this + 1460), 0, 2u);
    CDamageManager::SetWheelStatus((CPlane *)((char *)this + 1460), 1, 2u);
    CDamageManager::SetWheelStatus((CPlane *)((char *)this + 1460), 2, 2u);
    CDamageManager::SetWheelStatus((CPlane *)((char *)this + 1460), 3, 2u);
  }
  CAutomobile::ProcessControl(this);
  v5 = *((_DWORD *)this + 621);
  *((_WORD *)this + 220) = v5;
  if ( v5 )
    *((_DWORD *)this + 621) = 0;
  CVehicle::ProcessWeapons(this);
  if ( *((_WORD *)this + 19) == 539 )
  {
    *(_QWORD *)((char *)this + 2428) = 0LL;
    *(_QWORD *)((char *)this + 2436) = 0LL;
  }
  result = *((_DWORD *)this + 643);
  if ( result )
  {
    *((_DWORD *)this + 644) -= (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    FxSystem_c::GetCompositeMatrix();
    v7 = *((float *)this + 18) * -5.0;
    v8 = *((float *)this + 20) * -5.0;
    v10[1] = *((float *)this + 19) * -5.0;
    v10[0] = v7;
    v10[2] = v8;
    FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)v9, 0.0, 0.0, 0.0, 0.2, 1.0, 1.0, 0.1);
    FxSystem_c::AddParticle(dword_820540, (int)v11, (int)v10, 0, (int)v9, -1.0, 1.2, 0.6, 0);
    FxSystem_c::AddParticle(dword_820540, (int)v11, (int)v10, 1028443341, (int)v9, -1.0, 1.2, 0.6, 0);
    if ( *((int *)this + 644) < 1
      || (result = *((unsigned __int8 *)this + 1071) << 25, (*((_BYTE *)this + 1071) & 0x40) != 0) )
    {
      result = FxSystem_c::Kill(*((FxSystem_c **)this + 643));
      *((_DWORD *)this + 643) = 0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x575e98
// Original: _ZN6CPlane20ProcessControlInputsEh
// Demangled: CPlane::ProcessControlInputs(uchar)
int __fastcall CPlane::ProcessControlInputs(CPlane *this, CPad *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d9
  float32x2_t v5; // d10
  float32x2_t v6; // d11
  float *v9; // r0
  float v10; // s18
  float v11; // s20
  float v12; // s16
  CPad *Pad; // r0
  float SteeringLeftRight; // s22
  int v15; // r1
  CPad *v16; // r0
  float v17; // s20
  CHID *SteeringUpDown; // r0
  float v19; // s24
  int v20; // r1
  float v21; // s22
  int v22; // r1
  float v23; // s24
  int IsPressed; // r5
  int v25; // r9
  int v26; // r6
  int v27; // r0
  float v28; // s6
  float v29; // s4
  float v30; // s8
  float v31; // s2
  float v32; // s0
  float v33; // s6
  float v34; // s16
  float *v35; // r1
  float *v36; // r0
  float v37; // s10
  float v38; // s2
  float v39; // s4
  float v40; // s6
  bool v41; // fnf
  unsigned __int32 v42; // s4
  CPad *v43; // r0
  float v44; // s0
  float *v45; // r5
  int HandBrake; // r0
  float v47; // s4
  float v48; // s0
  CPad *v49; // r0
  int v50; // r0
  float v51; // s2
  float v52; // s4
  float v53; // s0
  float v54; // s2
  float *v55; // r6
  float v56; // s4
  float v57; // s6
  float32x2_t v58; // d1
  CPad *v59; // r0
  int v60; // r1
  float *v61; // r5
  CPad *v62; // r0
  int Accelerate; // r5
  int v64; // r1
  CPad *v65; // r0
  float *v66; // r5
  int v67; // r0
  float *v68; // r2
  float v69; // r0
  int v70; // r1
  CPad *v71; // r0
  float *v72; // r0
  float v73; // s0
  float v74; // s0
  float v75; // s2
  float v76; // s0
  float v77; // s0
  __int64 v78; // r0
  float v79; // s0
  float v80; // s2
  CHID *InputType; // r0
  int v82; // r1
  CHID *v83; // r0
  CPad *v84; // r0
  int v85; // r2
  CPad *v86; // r0
  unsigned int v87; // r2
  float v88; // s2
  float v89; // s0
  float v90; // s4
  float v91; // s6
  int v92; // r0
  int v93; // r1
  CPad *v94; // r0
  CPad *v95; // r0
  float Brake; // s0
  float v97; // s0
  CPad *v98; // r0
  CPad *v99; // r0
  int result; // r0
  CPlayerPed *PlayerPed; // r0
  float v102; // s0
  float v103; // s4
  float v104; // s2
  float v105; // s6
  float v106; // s6
  float *v107; // r0
  float v108; // s0
  CEntity **v109; // [sp+4h] [bp-4Ch]
  unsigned __int8 v110; // [sp+Bh] [bp-45h] BYREF
  float v111[17]; // [sp+Ch] [bp-44h] BYREF

  v9 = (float *)*((_DWORD *)this + 5);
  v10 = *((float *)this + 19) * v9[5];
  v11 = *((float *)this + 18) * v9[4];
  v12 = *((float *)this + 20) * v9[6];
  Pad = (CPad *)CPad::GetPad(a2, (int)a2);
  SteeringLeftRight = (float)CPad::GetSteeringLeftRight(Pad);
  v16 = (CPad *)CPad::GetPad(a2, v15);
  v17 = v11 + v10;
  SteeringUpDown = (CHID *)CPad::GetSteeringUpDown(v16);
  v19 = (float)(int)SteeringUpDown;
  if ( CHID::GetInputType(SteeringUpDown) == 2 )
  {
    CPad::GetPad(a2, v20);
    v21 = *(float *)&dword_959B00;
    CPad::GetPad(a2, v22);
    v23 = *(float *)&dword_959B04;
    IsPressed = CHID::IsPressed(90, 0);
    v25 = CHID::IsPressed(91, 0);
    v26 = CHID::IsPressed(92, 0);
    v27 = CHID::IsPressed(93, 0);
    v28 = v21 * 0.12;
    v29 = v23 * 0.08;
    if ( v26 )
      v29 = -1.0;
    if ( IsPressed )
      v28 = -1.0;
    v30 = (float)((float)((float)unk_6E07DC / 100.0) * 0.5) + 0.5;
    if ( v27 )
      v29 = 1.0;
    if ( v25 )
      v28 = 1.0;
    v31 = v29 * (float)((float)((float)((float)unk_6E07FC / 100.0) * 0.5) + 0.5);
    v32 = v28 * v30;
    v33 = (float)(v28 * v30) * 0.75;
    if ( *((_WORD *)this + 19) == 513 )
    {
      v32 = v33;
      v31 = v31 * 0.75;
    }
  }
  else
  {
    v32 = SteeringLeftRight * 0.0078125;
    v31 = v19 * 0.0078125;
  }
  v6.n64_u32[0] = -1.0;
  v34 = v17 + v12;
  v5.n64_u32[0] = 1.0;
  v35 = (float *)((char *)this + 2468);
  v36 = (float *)((char *)this + 2464);
  v37 = -1.0;
  v38 = *((float *)this + 616)
      + (float)((float)(v31 - *((float *)this + 616)) * (float)(*(float *)&CTimer::ms_fTimeStep * 0.069));
  v39 = -1.0;
  if ( v38 > -1.0 )
    v39 = v38;
  v2.n64_f32[0] = *v35 + (float)((float)(v32 - *v35) * (float)(*(float *)&CTimer::ms_fTimeStep * 0.069));
  if ( v39 >= 1.0 )
    v37 = 1.0;
  v40 = v37;
  v41 = v39 < 1.0;
  v42 = vmin_f32(vmax_f32(v2, v6), v5).n64_u32[0];
  if ( v38 > -1.0 )
    v40 = v38;
  if ( !v41 )
    v40 = v37;
  *v35 = v2.n64_f32[0];
  *v36 = v38;
  *(_DWORD *)v35 = v42;
  *v36 = v40;
  v43 = (CPad *)CPad::GetPad(a2, (int)v35);
  v44 = (float)CPad::GetSteeringLeftRight(v43);
  v45 = (float *)((char *)this + 2460);
  HandBrake = *((unsigned __int16 *)this + 19);
  v47 = v44 * 0.0078125;
  v48 = *((float *)this + 615);
  if ( HandBrake == 539 )
  {
    *v45 = v48 + (float)((float)(v47 - v48) * (float)(*(float *)&CTimer::ms_fTimeStep * 0.02));
    v49 = (CPad *)CPad::GetPad(a2, 539);
    v50 = CPad::GetSteeringLeftRight(v49);
    v48 = *v45;
    v51 = (float)((float)((float)v50 * 0.0078125) - *v45) * 0.2;
    v52 = *(float *)&CTimer::ms_fTimeStep;
    HandBrake = *((unsigned __int16 *)this + 19);
  }
  else
  {
    v52 = v47 - v48;
    v51 = *(float *)&CTimer::ms_fTimeStep * 0.069;
  }
  v53 = (float)(v52 * v51) + v48;
  v4.n64_u32[0] = 1036831949;
  v54 = -1.0;
  v55 = (float *)((char *)this + 1176);
  v56 = -1.0;
  if ( v53 > -1.0 )
    v54 = v53;
  if ( v54 >= 1.0 )
    v56 = 1.0;
  v57 = v56;
  if ( v53 > -1.0 )
    v57 = v53;
  if ( v54 >= 1.0 )
    v57 = v56;
  *v45 = v57;
  v3.n64_f32[0] = 1.0 - v34;
  v58.n64_u64[0] = vmax_f32(v3, v4).n64_u64[0];
  *v55 = v58.n64_f32[0] * (float)(v57 * (float)((float)(*(float *)(*((_DWORD *)this + 226) + 160) * -3.1416) / 180.0));
  if ( HandBrake == 539 )
  {
    v59 = (CPad *)CPad::GetPad(a2, 539);
    HandBrake = CPad::GetHandBrake(v59);
    if ( HandBrake )
    {
      *v55 = *v55 * 1.5;
      *v45 = *v45 * 1.5;
    }
  }
  if ( CHID::GetInputType((CHID *)HandBrake) == 2 )
  {
    *((_DWORD *)this + 618) = 0;
    v111[0] = 0.0;
    v61 = (float *)((char *)this + 2472);
    if ( CHID::IsPressed(8, v111) == 1 )
      *v61 = v111[0];
    if ( CHID::IsPressed(6, v111) == 1 )
      *v61 = -v111[0];
    if ( CHID::IsPressed(8, 0) == 1 && CHID::IsPressed(6, 0) == 1 )
      *v61 = 0.0;
  }
  else
  {
    v62 = (CPad *)CPad::GetPad(a2, v60);
    Accelerate = CPad::GetAccelerate(v62);
    v65 = (CPad *)CPad::GetPad(a2, v64);
    *((float *)this + 618) = (float)(Accelerate - CPad::GetBrake(v65)) / 255.0;
  }
  v66 = (float *)((char *)this + 4);
  v110 = 0;
  v67 = *((_DWORD *)this + 5);
  v68 = (float *)((char *)this + 4);
  if ( v67 )
    v68 = (float *)(v67 + 48);
  v69 = COERCE_FLOAT(CWorld::FindGroundZFor3DCoord(*(CWorld **)v68, v68[1], v68[2], COERCE_FLOAT(&v110), 0, v109));
  v70 = *((_DWORD *)this + 5);
  if ( v70 )
    v66 = (float *)(v70 + 48);
  if ( v110 && (float)(v66[2] - v69) <= 30.0 )
  {
    v71 = (CPad *)CPad::GetPad(a2, v110);
    if ( CPad::GetAccelerate(v71) || *((float *)this + 632) != 1.0 )
    {
LABEL_54:
      if ( CHID::IsReleased(102) != 1 )
        goto LABEL_64;
      goto LABEL_58;
    }
  }
  else if ( *((float *)this + 632) != 0.0 )
  {
    goto LABEL_54;
  }
  CHID::IsReleased(102);
LABEL_58:
  if ( *((float *)this + 506) == 1.0
    && *((float *)this + 507) == 1.0
    && *((float *)this + 508) == 1.0
    && *((float *)this + 509) == 1.0
    && *(float *)(*((_DWORD *)this + 227) + 48) < 1.0
    && *((_WORD *)this + 19) != 464 )
  {
    v107 = (float *)((char *)this + 2528);
    v108 = *((float *)this + 632);
    if ( v108 == 0.0 )
    {
      *v107 = v108 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.02);
      *(_DWORD *)((char *)this + 1465) = 33686018;
    }
    else if ( v108 == 1.0 )
    {
      *v107 = (float)(*(float *)&CTimer::ms_fTimeStep * 0.02) + -1.0;
    }
    else
    {
      *v107 = -v108;
    }
    goto LABEL_72;
  }
LABEL_64:
  v72 = (float *)((char *)this + 2528);
  v73 = *((float *)this + 632);
  if ( v73 < 0.0 )
  {
    v74 = v73 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.02);
    *v72 = v74;
    if ( v74 < 0.0 )
      goto LABEL_72;
    *v72 = 0.0;
    v75 = *(float *)(*((_DWORD *)this + 226) + 16);
    *(_DWORD *)((char *)this + 1465) = 0;
    v76 = (float)(v75 * 0.5) / 1000.0;
    goto LABEL_71;
  }
  if ( v73 > 0.0 && v73 < 1.0 )
  {
    v77 = v73 + (float)(*(float *)&CTimer::ms_fTimeStep * 0.02);
    *v72 = v77;
    if ( v77 >= 1.0 )
    {
      *v72 = 1.0;
      v78 = *((_QWORD *)this + 113);
      v79 = (float)(*(float *)(v78 + 16) * 0.5) / 1000.0;
      v80 = *(float *)(HIDWORD(v78) + 48);
      *(_DWORD *)((char *)this + 1465) = 33686018;
      v76 = v80 * v79;
LABEL_71:
      *((float *)this + 39) = v76;
    }
  }
LABEL_72:
  if ( *((_WORD *)this + 19) == 520 )
  {
    InputType = (CHID *)CHID::GetInputType((CHID *)&elf_hash_bucket[67]);
    if ( InputType && (v83 = (CHID *)CHID::GetInputType(InputType), v83 != (CHID *)((char *)&stderr + 1)) )
    {
      if ( CHID::GetInputType(v83) == 2 )
      {
        v88 = 0.0;
        v89 = (float)(*(float *)&CTimer::ms_fTimeStep * (float)(HARRIER_NOZZLE_ROTATERATE * (float)dword_6B1258))
            + (float)*((unsigned __int16 *)this + 1088);
        v90 = (float)CPlane::HARRIER_NOZZLE_ROTATE_LIMIT;
        v91 = v89;
        if ( v89 < 0.0 )
          v91 = 0.0;
        if ( v91 >= v90 )
          v88 = (float)CPlane::HARRIER_NOZZLE_ROTATE_LIMIT;
        if ( v89 < 0.0 )
          v89 = v88;
        if ( v91 >= v90 )
          v89 = v88;
        *((_WORD *)this + 1088) = (unsigned int)v89;
        if ( CHID::IsReleased(87) == 1 )
          dword_6B1258 = (int)(float)-(float)dword_6B1258;
      }
    }
    else
    {
      if ( v34 > 0.15 )
      {
        v84 = (CPad *)CPad::GetPad(a2, v82);
        if ( CPad::GetAccelerate(v84) )
        {
          v85 = *((unsigned __int16 *)this + 1088);
          *((_WORD *)this + 1089) = v85;
          v58.n64_u32[0] = 0;
          v2.n64_f32[0] = (float)(HARRIER_NOZZLE_ROTATERATE * *(float *)&CTimer::ms_fTimeStep) + (float)-v85;
          v2.n64_u64[0] = vmax_f32(v2, v58).n64_u64[0];
          v82 = (unsigned int)v2.n64_f32[0];
          if ( (int)(unsigned int)v2.n64_f32[0] > CPlane::HARRIER_NOZZLE_ROTATE_LIMIT )
            v82 = CPlane::HARRIER_NOZZLE_ROTATE_LIMIT;
          *((_WORD *)this + 1088) = v82;
        }
      }
      if ( v34 < 0.88 )
      {
        v86 = (CPad *)CPad::GetPad(a2, v82);
        if ( CPad::GetBrake(v86) )
        {
          v87 = *((unsigned __int16 *)this + 1088);
          *((_WORD *)this + 1089) = v87;
          v58.n64_u32[0] = 0;
          v2.n64_f32[0] = (float)(HARRIER_NOZZLE_ROTATERATE * *(float *)&CTimer::ms_fTimeStep) + (float)v87;
          *((_WORD *)this + 1088) = (unsigned int)vmax_f32(v2, v58).n64_f32[0];
        }
      }
    }
    if ( *((unsigned __int16 *)this + 1088) > CPlane::HARRIER_NOZZLE_ROTATE_LIMIT )
      *((_WORD *)this + 1088) = CPlane::HARRIER_NOZZLE_ROTATE_LIMIT;
  }
  v92 = *((_DWORD *)this + 267);
  v93 = 0;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 267) = v92 & 0xFFFFFFDF;
  if ( v34 > 0.0 && (v94 = (CPad *)CPad::GetPad(a2, 0), CPad::GetBrake(v94)) )
  {
    v95 = (CPad *)CPad::GetPad(a2, v93);
    Brake = (float)CPad::GetBrake(v95);
    if ( v34 > 0.35 )
      Brake = Brake * 0.5;
    v97 = Brake / 255.0;
  }
  else if ( sqrtf(
              (float)((float)(*((float *)this + 18) * *((float *)this + 18))
                    + (float)(*((float *)this + 19) * *((float *)this + 19)))
            + (float)(*((float *)this + 20) * *((float *)this + 20))) >= 0.1
         || (v98 = (CPad *)CPad::GetPad(a2, v93), CPad::GetBrake(v98) > 9)
         || (v99 = (CPad *)CPad::GetPad(a2, v93), CPad::GetAccelerate(v99) >= 10) )
  {
    v97 = 0.0;
  }
  else
  {
    v97 = 0.5;
  }
  *((float *)this + 297) = v97;
  result = *(unsigned __int16 *)(CPad::GetPad(a2, v93) + 272);
  if ( result )
  {
    *((_DWORD *)this + 297) = 1065353216;
    *((_DWORD *)this + 267) |= 0x20u;
    *((_DWORD *)this + 296) = 0;
    PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
    result = CPlayerPed::KeepAreaAroundPlayerClear(PlayerPed);
    v102 = *((float *)this + 18);
    v103 = *((float *)this + 19);
    v104 = *((float *)this + 20);
    v105 = sqrtf((float)((float)(v102 * v102) + (float)(v103 * v103)) + (float)(v104 * v104));
    if ( v105 > 0.28 )
    {
      v106 = 0.28 / v105;
      *((float *)this + 18) = v102 * v106;
      *((float *)this + 19) = v103 * v106;
      *((float *)this + 20) = v104 * v106;
    }
  }
  return result;
}


// ============================================================

// Address: 0x576804
// Original: _ZN6CPlane11SetGearDownEv
// Demangled: CPlane::SetGearDown(void)
int __fastcall CPlane::SetGearDown(int this)
{
  int v1; // r1
  float v2; // s2

  v1 = *(_DWORD *)(this + 904);
  *(_DWORD *)(this + 2528) = 0;
  v2 = *(float *)(v1 + 16);
  *(_DWORD *)(this + 1465) = 0;
  *(float *)(this + 156) = (float)(v2 * 0.5) / 1000.0;
  return this;
}


// ============================================================

// Address: 0x576830
// Original: _ZN6CPlane9SetGearUpEv
// Demangled: CPlane::SetGearUp(void)
int __fastcall CPlane::SetGearUp(int this)
{
  __int64 v1; // kr00_8
  float v2; // s0
  float v3; // s2

  v1 = *(_QWORD *)(this + 904);
  *(_DWORD *)(this + 2528) = 1065353216;
  v2 = (float)(*(float *)(v1 + 16) * 0.5) / 1000.0;
  v3 = *(float *)(HIDWORD(v1) + 48);
  *(_DWORD *)(this + 1465) = 33686018;
  *(float *)(this + 156) = v3 * v2;
  return this;
}


// ============================================================

// Address: 0x576870
// Original: _ZN6CPlane21ProcessFlyingCarStuffEv
// Demangled: CPlane::ProcessFlyingCarStuff(void)
int __fastcall CPlane::ProcessFlyingCarStuff(CPlane *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  float32x2_t v4; // d12
  int result; // r0
  float v7; // s16
  float v8; // s18
  int v9; // r0
  float v10; // s22
  float v11; // s30
  float v12; // s2
  float v13; // s28
  float v14; // s4
  float v15; // s0
  float v16; // s16
  float v17; // s18
  float v18; // s20
  unsigned int v19; // s0
  float v20; // s2
  float *v21; // r0
  float v22; // s0
  float v23; // s0
  unsigned __int8 *v24; // r9
  char *v25; // r8
  int v26; // r10
  float v27; // s28
  int v28; // r5
  int AeroplaneCompStatus; // r6
  int v30; // r9
  float v31; // s19
  float v32; // s23
  float v33; // s30
  float v34; // s19
  float v35; // s23
  float v36; // s0
  float *v37; // r0
  float v38; // s23
  float v39; // s0
  float *v40; // r0
  float v41; // s2
  float v42; // s0
  float v43; // s23
  float v44; // s0
  float *v45; // r0
  int v46; // r1
  char *v47; // r0
  __int64 *v48; // r3
  float32x2_t v49; // d16
  int v50; // r0
  double v51; // d16
  float v52; // s0
  float v53; // s4
  unsigned int v54; // r0
  float *v55; // r8
  float v56; // s0
  float v57; // s22
  float v58; // s2
  float v59; // s26
  float v60; // s24
  float32x2_t v61; // d1
  int v62; // r2
  int v63; // r0
  float v64; // s0
  int v65; // r1
  int v66; // r2
  float v67; // s0
  int v68; // r3
  CPlane *v69; // r0
  int v70; // r1
  float *v71; // r0
  float v72; // s2
  float *v73; // r1
  int v74; // r5
  float *v75; // [sp+34h] [bp-BCh]
  float *v76; // [sp+44h] [bp-ACh]
  float *v77; // [sp+48h] [bp-A8h]
  float *v78; // [sp+50h] [bp-A0h]
  float v79; // [sp+54h] [bp-9Ch] BYREF
  float v80; // [sp+58h] [bp-98h]
  float v81; // [sp+5Ch] [bp-94h]
  double v82; // [sp+60h] [bp-90h] BYREF
  float v83; // [sp+68h] [bp-88h]
  float v84; // [sp+78h] [bp-78h]
  double v85; // [sp+80h] [bp-70h] BYREF
  float v86; // [sp+88h] [bp-68h]

  result = (int)&CTimer::ms_fTimeStep;
  v7 = *(float *)&CTimer::ms_fTimeStep;
  if ( *(float *)&CTimer::ms_fTimeStep <= 0.0 )
    return result;
  v4.n64_u32[0] = 1.0;
  v8 = PLANE_DAMAGE_WAVE_COUNTER_VAR;
  v9 = rand();
  v10 = *((float *)this + 18);
  v11 = *((float *)this + 19);
  v12 = 1.0 - v8;
  v13 = *((float *)this + 20);
  v14 = (float)((float)(v8 + 1.0) - (float)(1.0 - v8)) * (float)((float)v9 * 4.6566e-10);
  v15 = (float)(unsigned int)(float)((float)(v7 / 50.0) * 1000.0);
  v77 = (float *)((char *)this + 2468);
  v16 = *((float *)this + 617);
  v76 = (float *)((char *)this + 2464);
  v17 = *((float *)this + 616);
  v75 = (float *)((char *)this + 2460);
  v18 = *((float *)this + 615);
  v19 = (unsigned int)(float)((float)(v12 + v14) * v15);
  v20 = *((float *)this + 307);
  *((_DWORD *)this + 633) += v19;
  if ( v20 < 250.0 && *((unsigned __int8 *)this + 58) <= 7u )
  {
    CDamageManager::SetAeroplaneCompStatus((CPlane *)((char *)this + 1460), 12, 2u);
    CDamageManager::SetAeroplaneCompStatus((CPlane *)((char *)this + 1460), 13, 2u);
    v21 = (float *)*((_DWORD *)this + 5);
    if ( v21 )
    {
      v22 = sqrtf((float)(*v21 * *v21) + (float)(v21[1] * v21[1]));
      if ( v21[10] < 0.0 )
        v22 = -v22;
      v23 = atan2f(v21[2], v22);
      if ( fabsf(v23) < 2.3562 )
        v16 = v16 + 0.75;
    }
    else
    {
      v16 = v16 + 0.75;
      v23 = 0.0;
    }
    v18 = v18 + 0.5;
    if ( fabsf(v23) > 1.5708 )
      v17 = v17 + 0.5;
  }
  if ( *((_WORD *)this + 19) == 464 )
  {
    v24 = (unsigned __int8 *)this + 58;
  }
  else
  {
    v78 = (float *)((char *)this + 2472);
    v25 = (char *)this + 1676;
    v26 = 0;
    v1.n64_f32[0] = sqrtf((float)((float)(v10 * v10) + (float)(v11 * v11)) + (float)(v13 * v13)) * 3.0;
    LODWORD(v27) = vmin_f32(v1, v4).n64_u32[0];
    do
    {
      v28 = v26 + 12;
      AeroplaneCompStatus = CDamageManager::GetAeroplaneCompStatus((CPlane *)((char *)this + 1460), v26 + 12);
      if ( AeroplaneCompStatus >= 1 && *(_DWORD *)&v25[4 * v26] )
      {
        if ( v28 == *((__int16 *)this + 864) )
        {
          v30 = 0;
        }
        else if ( v28 == *((__int16 *)this + 880) )
        {
          v30 = 1;
        }
        else if ( v28 == *((__int16 *)this + 896) )
        {
          v30 = 2;
        }
        else
        {
          v30 = -1;
          if ( v28 == *((__int16 *)this + 912) )
            v30 = 3;
        }
        switch ( v26 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
            v31 = (float)AeroplaneCompStatus;
            if ( *v78 > 0.0 )
            {
              v32 = *(float *)&CTimer::ms_fTimeStep;
              v33 = (float)((float)((float)rand() * 4.6566e-10) * 1.6) + 0.2;
              *v78 = *v78
                   + (float)((float)(sinf((float)((float)*((unsigned int *)this + 633) * 6.2832) / 2500.0) + -1.0)
                           * (float)((float)((float)((float)(v31 * 0.2) * v31) * v32) * v33));
            }
            v34 = v31 * 0.5;
            goto LABEL_40;
          case 4:
            v34 = (float)AeroplaneCompStatus * 0.2;
            *v75 = (float)(1.0 - v34) * *v75;
            v43 = v27 * (float)(AeroplaneCompStatus * AeroplaneCompStatus);
            v18 = *v75
                + (float)(*(float *)&CTimer::ms_fTimeStep
                        * (float)(v43 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.1) + -0.05)));
            *v75 = v18;
            if ( v30 >= 0 )
            {
              v44 = (float)rand();
              v45 = (float *)((char *)this + 32 * v30);
              v18 = v18 + (float)(v45[435] * -10.0);
              v45[438] = v45[438]
                       + (float)(*(float *)&CTimer::ms_fTimeStep
                               * (float)(v43 * (float)((float)((float)(v44 * 4.6566e-10) * 0.004) + -0.002)));
            }
            goto LABEL_40;
          case 5:
          case 6:
            *v76 = (float)((float)((float)AeroplaneCompStatus * -0.2) + 1.0) * *v76;
            v35 = v27 * (float)(AeroplaneCompStatus * AeroplaneCompStatus);
            v17 = *v76
                + (float)(*(float *)&CTimer::ms_fTimeStep
                        * (float)(v35 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.1) + -0.05)));
            *v76 = v17;
            if ( v30 >= 0 )
            {
              v36 = (float)rand();
              v37 = (float *)((char *)this + 32 * v30);
              v17 = v17 + (float)(v37[435] * -10.0);
              v37[438] = v37[438]
                       + (float)(*(float *)&CTimer::ms_fTimeStep
                               * (float)(v35 * (float)((float)((float)(v36 * 4.6566e-10) * 0.004) + -0.002)));
            }
            v34 = (float)AeroplaneCompStatus * 0.15;
            goto LABEL_40;
          case 7:
          case 8:
            *v77 = (float)((float)((float)AeroplaneCompStatus * -0.2) + 1.0) * *v77;
            v38 = v27 * (float)(AeroplaneCompStatus * AeroplaneCompStatus);
            v16 = *v77
                + (float)(*(float *)&CTimer::ms_fTimeStep
                        * (float)(v38 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.1) + -0.05)));
            *v77 = v16;
            if ( v30 >= 0 )
            {
              v39 = (float)rand();
              v40 = (float *)((char *)this + 32 * v30);
              v41 = v40[438]
                  + (float)(*(float *)&CTimer::ms_fTimeStep
                          * (float)(v38 * (float)((float)((float)(v39 * 4.6566e-10) * 0.004) + -0.002)));
              v42 = v40[435] * 10.0;
              v40[438] = v41;
              if ( v26 == 7 )
                v16 = v16 + v42;
              else
                v16 = v16 - v42;
            }
            v34 = (float)AeroplaneCompStatus * 0.25;
LABEL_40:
            if ( v34 > 0.0 && (*((_BYTE *)this + 1071) & 0x40) == 0 && (v27 > 0.3 || (rand() & 7) == 0) )
            {
              v46 = *((_DWORD *)this + 5);
              v47 = (char *)(v46 + 48);
              if ( !v46 )
                v47 = (char *)this + 4;
              v48 = (__int64 *)(dword_951FBC + 48);
              if ( !dword_951FBC )
                v48 = &qword_951FAC;
              v49.n64_u64[0] = vsub_f32(*(float32x2_t *)(v47 + 4), *(float32x2_t *)((char *)v48 + 4)).n64_u64[0];
              v2.n64_u64[0] = vmul_f32(v49, v49).n64_u64[0];
              if ( (float)((float)((float)((float)(*(float *)v47 - *(float *)v48)
                                         * (float)(*(float *)v47 - *(float *)v48))
                                 + v2.n64_f32[0])
                         + v2.n64_f32[1]) < 6400.0
                || *((unsigned __int8 *)this + 58) <= 7u )
              {
                v50 = *(_DWORD *)&v25[4 * v26];
                if ( v50 )
                {
                  v51 = *(double *)(v50 + 64);
                  v86 = *(float *)(v50 + 72);
                  v85 = v51;
                  operator*();
                  v86 = v83;
                  v85 = v82;
                  FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&v82, 0.0, 0.0, 0.0, 0.2, 1.0, 1.0, v34);
                  v52 = (float)(*((float *)this + 18) * 0.25) * 50.0;
                  v53 = (float)(*((float *)this + 20) * 0.25) * 50.0;
                  v80 = (float)(*((float *)this + 19) * 0.25) * 50.0;
                  v79 = v52;
                  v81 = v53;
                  v79 = v52 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.2) + 0.9);
                  v80 = v80 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.2) + 0.9);
                  v81 = v81 * (float)((float)((float)((float)rand() * 4.6566e-10) * 0.2) + 0.9);
                  v84 = (float)((float)rand() * 4.6566e-10) + 0.0;
                  *(float *)&v85 = *(float *)&v85
                                 + (float)((float)((float)(v34 + v34) * (float)((float)rand() * 4.6566e-10)) - v34);
                  *((float *)&v85 + 1) = *((float *)&v85 + 1)
                                       + (float)((float)((float)(v34 + v34) * (float)((float)rand() * 4.6566e-10)) - v34);
                  v86 = v86 + (float)((float)((float)(v34 + v34) * (float)((float)rand() * 4.6566e-10)) - v34);
                  FxSystem_c::AddParticle(dword_820540, (int)&v85, (int)&v79, 0, (int)&v82, -1.0, 1.2, 0.6, 0);
                }
              }
            }
            break;
          default:
            break;
        }
      }
      ++v26;
    }
    while ( v26 != 13 );
    v24 = (unsigned __int8 *)this + 58;
  }
  v54 = *v24 >> 3;
  if ( v54 > 8 || ((1 << v54) & 0x109) == 0 )
  {
    v71 = (float *)((char *)this + 2520);
    v72 = *((float *)this + 630);
    if ( v72 <= (float)(*(float *)&CTimer::ms_fTimeStep * 0.001) )
    {
      *v71 = 0.0;
      result = *((_DWORD *)this + 267) & 0xFFFFFFEF;
      *((_DWORD *)this + 267) = result;
    }
    else
    {
      v73 = (float *)sub_57740C;
      if ( v72 > CPlane::PLANE_STD_PROP_SPEED )
        v73 = (float *)&loc_577410;
      *v71 = v72 - (float)(*(float *)&CTimer::ms_fTimeStep * *v73);
      result = 0;
      *((_BYTE *)this + 188) = 0;
    }
    return result;
  }
  v55 = (float *)((char *)this + 2472);
  v56 = *((float *)this + 618);
  v57 = CPlane::PLANE_STD_PROP_SPEED;
  if ( v56 > 0.0 )
  {
    v58 = CPlane::PLANE_MAX_PROP_SPEED - CPlane::PLANE_STD_PROP_SPEED;
LABEL_60:
    v57 = CPlane::PLANE_STD_PROP_SPEED + (float)(v56 * v58);
    goto LABEL_61;
  }
  if ( v56 < 0.0 )
  {
    v58 = CPlane::PLANE_STD_PROP_SPEED - CPlane::PLANE_MIN_PROP_SPEED;
    goto LABEL_60;
  }
LABEL_61:
  if ( (v54 & 0x17 | 8) == 8 && COERCE_FLOAT(CVehicle::HeightAboveCeiling()) > 0.0 )
  {
    v59 = COERCE_FLOAT(CVehicle::HeightAboveCeiling());
    v60 = *v55;
    v3.n64_f32[0] = v59 / 50.0;
    v2.n64_u32[0] = 0;
    v1.n64_f32[0] = v60 + (float)(COERCE_FLOAT(CVehicle::HeightAboveCeiling()) / -25.0);
    v61.n64_u64[0] = vmax_f32(v3, v2).n64_u64[0];
    v57 = v57 * v61.n64_f32[0];
    v61.n64_u32[0] = -1.0;
    *(_DWORD *)v55 = vmax_f32(v1, v61).n64_u32[0];
  }
  v62 = *((_DWORD *)this + 268);
  v63 = *((_DWORD *)this + 267);
  v64 = *((float *)this + 630)
      + (float)((float)((float)(v57 - *((float *)this + 630)) * CPlane::PLANE_ROC_PROP_SPEED)
              * *(float *)&CTimer::ms_fTimeStep);
  *((float *)this + 630) = v64;
  if ( (v63 & 0x40000000) != 0 )
  {
    v64 = 0.0;
    v63 &= ~0x10u;
    *((_DWORD *)this + 630) = 0;
    *v55 = 0.0;
    *((_DWORD *)this + 267) = v63;
    *((_DWORD *)this + 268) = v62;
  }
  v65 = *((unsigned __int16 *)this + 19);
  if ( v65 == 464 )
  {
    result = v63 & 0x40000010;
    if ( result == 0x10 )
    {
      v66 = LODWORD(v18);
      v67 = *v55;
      v68 = LODWORD(v17);
      v69 = this;
      v70 = 1;
      return CVehicle::FlyingControl((int)v69, v70, v66, v68, v16, v67);
    }
  }
  else
  {
    result = v63 << 27;
    if ( result < 0 )
    {
      result = (int)&CPlane::PLANE_MIN_PROP_SPEED;
      if ( v64 > CPlane::PLANE_MIN_PROP_SPEED
        || (float)((float)((float)(*((float *)this + 18) * *((float *)this + 18))
                         + (float)(*((float *)this + 19) * *((float *)this + 19)))
                 + (float)(*((float *)this + 20) * *((float *)this + 20))) > 0.05 )
      {
        if ( v65 != 520 || *v24 > 7u || *((unsigned __int16 *)this + 1088) < CPlane::HARRIER_NOZZLE_SWITCH_LIMIT )
        {
          v66 = LODWORD(v18);
          v67 = *v55;
          v68 = LODWORD(v17);
          v69 = this;
          v70 = 3;
          return CVehicle::FlyingControl((int)v69, v70, v66, v68, v16, v67);
        }
        v74 = *((_DWORD *)this + 227);
        *((_DWORD *)this + 227) = cHandlingDataMgr::GetFlyingPointer(
                                    (cHandlingDataMgr *)mod_HandlingManager,
                                    *(_WORD *)(dword_91E35C + 98));
        if ( *v55 > 0.0
          || (result = *((unsigned __int8 *)this + 2420), (unsigned int)result <= 3)
          && (result = *((unsigned __int8 *)this + 71) << 28, (*((_BYTE *)this + 71) & 8) == 0) )
        {
          result = CVehicle::FlyingControl((int)this, 6, SLODWORD(v18), SLODWORD(v17), -v16, *v55 * 0.25);
        }
        *((_DWORD *)this + 227) = v74;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x577414
// Original: _ZN6CPlane9PreRenderEv
// Demangled: CPlane::PreRender(void)
void __fastcall CPlane::PreRender(CPlane *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  float32x2_t v3; // d4
  float32x2_t v4; // d8
  float32x2_t v5; // d9
  float v7; // r9
  int ColModel; // r8
  float *v9; // r5
  float *v10; // r4
  int i; // r6
  float v12; // s24
  float v13; // s26
  float v14; // s28
  float v15; // s2
  float v16; // s0
  float v17; // s2
  bool v18; // nf
  int v19; // r5
  int *v20; // r6
  float v21; // s0
  int v22; // r0
  double v23; // d16
  float v24; // r0
  float v25; // s16
  float v26; // s0
  int v27; // r1
  bool v28; // zf
  int v29; // r0
  double v30; // d16
  float v31; // r0
  int v32; // r0
  double v33; // d16
  float v34; // r0
  int v35; // r1
  int v36; // r1
  int v37; // r1
  int v38; // r1
  int v39; // r0
  float v40; // s0
  float v41; // s18
  float v42; // s16
  float v43; // s20
  int v44; // r8
  int v45; // r6
  float *v46; // r4
  int v47; // r0
  int v48; // s0
  FxSystem_c *v49; // r0
  FxSystem_c *v50; // r0
  FxSystem_c *v51; // r0
  FxSystem_c *v52; // r0
  FxSystem_c *v53; // r0
  int v54; // r5
  float *v55; // r0
  float v56; // s2
  float v57; // s6
  float v58; // s4
  float v59; // s0
  float v60; // s10
  float v61; // s0
  float v62; // s12
  float v63; // s2
  bool v64; // cc
  float v65; // s18
  float v66; // s20
  float v67; // s16
  float v68; // s22
  float v69; // s26
  float v70; // r0
  float v71; // s6
  float v72; // s8
  float v73; // s2
  float v74; // s8
  float v75; // s16
  FxSystem_c *v76; // r0
  int v77; // r0
  int v78; // r0
  FxSystem_c *FxSystem; // r0
  int v80; // r0
  FxSystem_c *v81; // r0
  int v82; // r0
  FxSystem_c *v83; // r0
  int v84; // r0
  FxSystem_c *v85; // r0
  int v86; // r1
  int v87; // r1
  int v88; // r1
  float v89; // s0
  float v90; // s2
  float v91; // r4
  char *v92; // r5
  int v93; // r0
  bool v94; // zf
  int v95; // r0
  double v96; // d16
  int v97; // r0
  float v98; // s0
  int v99; // r0
  float v100; // s2
  float v101; // s2
  float v102; // s0
  double v103; // [sp+28h] [bp-150h]
  float v104; // [sp+30h] [bp-148h]
  double v105; // [sp+38h] [bp-140h] BYREF
  float v106; // [sp+40h] [bp-138h]
  double v107; // [sp+48h] [bp-130h] BYREF
  float v108; // [sp+50h] [bp-128h]
  double v109; // [sp+58h] [bp-120h] BYREF
  float v110; // [sp+60h] [bp-118h]
  double v111; // [sp+A0h] [bp-D8h]
  int v112; // [sp+A8h] [bp-D0h]
  int v113; // [sp+ACh] [bp-CCh] BYREF
  double v114; // [sp+B0h] [bp-C8h] BYREF
  float v115; // [sp+B8h] [bp-C0h]
  float v116; // [sp+BCh] [bp-BCh] BYREF
  float v117; // [sp+C0h] [bp-B8h]
  float v118; // [sp+C4h] [bp-B4h]
  _BYTE v119[8]; // [sp+C8h] [bp-B0h] BYREF
  float v120; // [sp+D0h] [bp-A8h]
  float v121; // [sp+DCh] [bp-9Ch]
  float v122; // [sp+E0h] [bp-98h]
  float v123; // [sp+E8h] [bp-90h]
  float v124; // [sp+ECh] [bp-8Ch]
  float v125; // [sp+F0h] [bp-88h]
  float v126; // [sp+F8h] [bp-80h]
  float v127; // [sp+FCh] [bp-7Ch]
  float v128; // [sp+100h] [bp-78h]
  int v129; // [sp+108h] [bp-70h]
  int v130; // [sp+10Ch] [bp-6Ch]

  v129 = 0;
  v130 = 0;
  v113 = 0;
  v7 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)];
  ColModel = CEntity::GetColModel(this);
  CVehicle::PreRender(this);
  if ( *((_WORD *)this + 19) == 539 )
    (*(void (__fastcall **)(CPlane *))(*(_DWORD *)this + 280))(this);
  if ( *((unsigned __int8 *)this + 1071) << 31 )
  {
    (*(void (__fastcall **)(CPlane *))(*(_DWORD *)this + 212))(this);
    v4.n64_u32[0] = 1.0;
    v9 = (float *)((char *)this + 2024);
    v5.n64_u32[0] = -1.0;
    v10 = (float *)((char *)this + 1864);
    for ( i = 0; i != 4; ++i )
    {
      v12 = *v9;
      v13 = v9[41];
      v14 = v9[45];
      CVehicleModelInfo::GetWheelPosn((CVehicleModelInfo *)LODWORD(v7), i, (CVector *)&v116, 1);
      v15 = (float)(v12 - (float)(1.0 - (float)(v13 / v14))) / (float)(1.0 - (float)(1.0 - (float)(v13 / v14)));
      v16 = v118 + *(float *)(*((_DWORD *)this + 226) + 184);
      if ( v15 > 0.0 )
        v16 = v16 - (float)(v15 * v9[41]);
      v17 = v9[25];
      if ( v16 <= v17 )
      {
        v18 = (*((_BYTE *)this + 71) & 4) != 0;
        if ( (*((_BYTE *)this + 71) & 4) != 0 )
          v18 = (*((_BYTE *)this + 914) & 2) != 0;
        if ( !v18 )
          v16 = v17 + (float)((float)(v16 - v17) * 0.75);
      }
      v9[25] = v16;
      if ( *((_WORD *)this + 19) == 592 )
      {
        if ( *v9 >= 1.0 )
        {
          v9[21] = v9[21] * 0.95;
        }
        else
        {
          v1.n64_f32[0] = (float)((float)(*v10 * *(float *)(*((_DWORD *)this + 5) + 16))
                                + (float)(v10[1] * *(float *)(*((_DWORD *)this + 5) + 20)))
                        + (float)(v10[2] * *(float *)(*((_DWORD *)this + 5) + 24));
          v1.n64_u64[0] = vmin_f32(vmax_f32(v1, v5), v4).n64_u64[0];
          *((_DWORD *)v9 + 21) = COERCE_UNSIGNED_INT(asinf(v1.n64_f32[0])) ^ 0x80000000;
        }
      }
      ++v9;
      v10 += 11;
    }
  }
  v19 = 1;
  CAutomobile::UpdateWheelMatrix(this, 4, 1);
  CAutomobile::UpdateWheelMatrix(this, 7, 1);
  CAutomobile::UpdateWheelMatrix(this, 2, 1);
  if ( *((_WORD *)this + 19) == 520 )
    v19 = 3;
  CAutomobile::UpdateWheelMatrix(this, 5, v19);
  v20 = (int *)((char *)this + 2524);
  v21 = *((float *)this + 631) + (float)(*((float *)this + 630) * *(float *)&CTimer::ms_fTimeStep);
  *((float *)this + 631) = v21;
  if ( v21 > 6.2832 )
  {
    do
      v21 = v21 + -6.2832;
    while ( v21 > 6.2832 );
    *(float *)v20 = v21;
  }
  if ( *((unsigned __int8 *)this + 58) <= 0x1Fu )
  {
    if ( *((_DWORD *)this + 423) )
    {
      CMatrix::Attach();
      CMatrix::UpdateRW((CMatrix *)v119);
      v22 = *(_DWORD *)(LODWORD(v7) + 116);
      v23 = *(double *)(v22 + 132);
      v24 = *(float *)(v22 + 140);
      v114 = v23;
      v115 = v24;
      if ( *(float *)&v23 == 0.0 && *((float *)&v23 + 1) == 0.0 && v115 == 0.0 )
      {
        v115 = 1.0;
      }
      else
      {
        *(float *)&v114 = *(float *)&v23 - v126;
        *((float *)&v114 + 1) = *((float *)&v23 + 1) - v127;
        v115 = v115 - v128;
        CVector::Normalise((CVector *)&v114);
      }
      CQuaternion::Set();
      CQuaternion::Get();
      if ( *((_WORD *)this + 19) == 539 )
      {
        if ( *((_DWORD *)this + 431) )
        {
          CMatrix::Attach();
          CMatrix::UpdateRW((CMatrix *)v119);
          CQuaternion::Get();
        }
      }
    }
    if ( *((_DWORD *)this + 427) )
    {
      v25 = 1.0;
      if ( *(float *)(*((_DWORD *)this + 227) + 52) > 1.0 )
      {
        v25 = 1.0;
        v26 = fabsf(*((float *)this + 632));
        if ( v26 < 1.0 )
        {
          v27 = *((_DWORD *)this + 428);
          v28 = v27 == 0;
          if ( !v27 )
            v28 = *((_DWORD *)this + 429) == 0;
          if ( !v28 )
            v25 = (float)((float)(1.0 - v26) * 0.5) + 1.0;
        }
      }
      CMatrix::Attach();
      CMatrix::UpdateRW((CMatrix *)v119);
      v29 = *(_DWORD *)(LODWORD(v7) + 116);
      v30 = *(double *)(v29 + 108);
      v31 = *(float *)(v29 + 116);
      v114 = v30;
      v115 = v31;
      if ( *(float *)&v30 == 0.0 && *((float *)&v30 + 1) == 0.0 && v115 == 0.0 )
      {
        LODWORD(v114) = 1065353216;
      }
      else
      {
        *(float *)&v114 = *(float *)&v30 - v126;
        *((float *)&v114 + 1) = *((float *)&v30 + 1) - v127;
        v115 = v115 - v128;
        CVector::Normalise((CVector *)&v114);
      }
      CQuaternion::Set();
      CQuaternion::Get();
      if ( v25 > 1.0 )
      {
        CMatrix::Update((CMatrix *)v119);
        if ( *(float *)&v114 == 1.0 )
        {
          v121 = v25 * v121;
        }
        else if ( CVehicleModelInfo::GetOriginalCompPosition((CVehicleModelInfo *)LODWORD(v7), (CVector *)&v116, 20) == 1 )
        {
          v117 = v117 + (float)((float)(1.0 - v25) * (float)(*(float *)(ColModel + 16) * 0.03));
          CMatrix::SetTranslateOnly((CMatrix *)v119, v116, v117, v118);
        }
        CMatrix::UpdateRW((CMatrix *)v119);
      }
      if ( *((_DWORD *)this + 426) )
      {
        CMatrix::Attach();
        CMatrix::UpdateRW((CMatrix *)v119);
        *(float *)&v114 = -*(float *)&v114;
        CQuaternion::Set();
        CQuaternion::Get();
        if ( v25 > 1.0 )
        {
          CMatrix::Update((CMatrix *)v119);
          if ( *(float *)&v114 == -1.0 )
          {
            v121 = v25 * v121;
          }
          else if ( CVehicleModelInfo::GetOriginalCompPosition((CVehicleModelInfo *)LODWORD(v7), (CVector *)&v116, 19) == 1 )
          {
            v117 = v117 + (float)((float)(1.0 - v25) * (float)(*(float *)(ColModel + 16) * 0.03));
            CMatrix::SetTranslateOnly((CMatrix *)v119, v116, v117, v118);
          }
          CMatrix::UpdateRW((CMatrix *)v119);
        }
      }
    }
    if ( *((_DWORD *)this + 425) )
    {
      CMatrix::Attach();
      CMatrix::UpdateRW((CMatrix *)v119);
      v32 = *(_DWORD *)(LODWORD(v7) + 116);
      v33 = *(double *)(v32 + 120);
      v34 = *(float *)(v32 + 128);
      v114 = v33;
      v115 = v34;
      if ( *(float *)&v33 == 0.0 && *((float *)&v33 + 1) == 0.0 && v115 == 0.0 )
      {
        LODWORD(v114) = 1065353216;
      }
      else
      {
        *(float *)&v114 = *(float *)&v33 - v126;
        *((float *)&v114 + 1) = *((float *)&v33 + 1) - v127;
        v115 = v115 - v128;
        CVector::Normalise((CVector *)&v114);
      }
      CQuaternion::Set();
      CQuaternion::Get();
      if ( *((_DWORD *)this + 424) )
      {
        CMatrix::Attach();
        CMatrix::UpdateRW((CMatrix *)v119);
        *(float *)&v114 = -*(float *)&v114;
        CQuaternion::Set();
        CQuaternion::Get();
      }
    }
  }
  v35 = *((_DWORD *)this + 419);
  if ( v35 )
  {
    CVehicle::SetComponentRotation((int)this, v35, 1, COERCE_INT(*(float *)v20 + *(float *)v20), 1);
    v113 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 419), GetCurrentAtomicObjectCB, &v113);
    if ( v113 )
      CVehicle::SetComponentAtomicAlpha(v113, 255);
  }
  v36 = *((_DWORD *)this + 420);
  if ( v36 )
  {
    CVehicle::SetComponentRotation((int)this, v36, 1, *v20 ^ 0x80000000, 1);
    v113 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 420), GetCurrentAtomicObjectCB, &v113);
    if ( v113 )
      CVehicle::SetComponentAtomicAlpha(v113, 0);
  }
  v37 = *((_DWORD *)this + 421);
  if ( v37 )
  {
    CVehicle::SetComponentRotation((int)this, v37, 1, COERCE_INT(*(float *)v20 * -2.0), 1);
    v113 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 421), GetCurrentAtomicObjectCB, &v113);
    if ( v113 )
      CVehicle::SetComponentAtomicAlpha(v113, 255);
  }
  v38 = *((_DWORD *)this + 422);
  if ( v38 )
  {
    CVehicle::SetComponentRotation((int)this, v38, 1, *v20, 1);
    v113 = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 422), GetCurrentAtomicObjectCB, &v113);
    if ( v113 )
      CVehicle::SetComponentAtomicAlpha(v113, 0);
  }
  v39 = *((__int16 *)this + 19);
  v40 = -1.4835;
  v41 = 1.4835;
  v42 = 0.0;
  if ( v39 > 552 )
  {
    if ( v39 == 553 )
    {
      v41 = 1.309;
      v43 = 0.0;
      v45 = 0;
      v44 = -1;
      v40 = 1.309;
      goto LABEL_87;
    }
    if ( v39 != 577 )
    {
      if ( v39 != 592 )
        goto LABEL_90;
      v41 = 2.2689;
      v43 = -2.2689;
      goto LABEL_83;
    }
LABEL_84:
    v45 = 1;
    v43 = 2.2689;
    v44 = 0;
    goto LABEL_87;
  }
  if ( v39 == 476 )
  {
    v45 = 1;
    v44 = -1;
    v43 = 0.0;
    goto LABEL_87;
  }
  if ( v39 == 519 )
    goto LABEL_84;
  if ( v39 != 520 )
    goto LABEL_90;
  v41 = -1.5708;
  v43 = -1.3963;
  v42 = 2.2689;
LABEL_83:
  v44 = 0;
  v40 = v41;
  v45 = 0;
LABEL_87:
  v46 = (float *)((char *)this + 2528);
  CVehicle::SetComponentRotation(
    (int)this,
    *((_DWORD *)this + 428),
    v45,
    COERCE_INT(v40 * fabsf(*((float *)this + 632))),
    1);
  CVehicle::SetComponentRotation(
    (int)this,
    *((_DWORD *)this + 429),
    v45,
    COERCE_INT(v41 * fabsf(*((float *)this + 632))),
    1);
  if ( v44 >= 0 )
  {
    CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 430), v44, COERCE_INT(v43 * fabsf(*v46)), 1);
    if ( v42 > 0.0 )
      CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 431), v44, COERCE_INT(v42 * fabsf(*v46)), 1);
  }
LABEL_90:
  v47 = *((__int16 *)this + 19);
  switch ( v47 )
  {
    case 520:
      *(float *)&v48 = (float)((float)*((unsigned __int16 *)this + 1088) * 1.5708)
                     / (float)CPlane::HARRIER_NOZZLE_ROTATE_LIMIT;
      CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 413), 0, v48, 1);
      CVehicle::SetComponentRotation((int)this, *((_DWORD *)this + 410), 0, v48, 1);
      if ( (*((_BYTE *)this + 1068) & 0x10) != 0 )
      {
        v75 = (float)(*((float *)this + 618) + 1.0) * 0.5;
        if ( *((unsigned __int16 *)this + 1088) >= CPlane::HARRIER_NOZZLE_SWITCH_LIMIT )
        {
          CAutomobile::DoHeliDustEffect(this, (float)(*((float *)this + 618) + 1.0) * 0.5, 2.0);
        }
        else
        {
          v76 = (FxSystem_c *)*((_DWORD *)this + 356);
          if ( v76 )
          {
            FxSystem_c::Kill(v76);
            *((_DWORD *)this + 614) = 0;
            *((_DWORD *)this + 356) = 0;
          }
        }
        v77 = *((_DWORD *)this + 6);
        if ( v77 )
        {
          if ( *((_DWORD *)this + 639) )
            goto LABEL_178;
          v78 = *(_DWORD *)(v77 + 4);
          v109 = 0.0;
          v110 = 0.0;
          FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                     (int)&g_fxMan,
                                     (CKeyGen *)"jetthrust",
                                     (int)&v109,
                                     v78 + 16,
                                     0);
          *((_DWORD *)this + 639) = FxSystem;
          if ( FxSystem )
          {
            FxSystem_c::Play(FxSystem);
            FxSystem_c::SetLocalParticles(*((FxSystem_c **)this + 639), 1u);
            FxSystem_c::CopyParentMatrix(*((FxSystem_c **)this + 639));
          }
          v77 = *((_DWORD *)this + 6);
          if ( v77 )
          {
LABEL_178:
            if ( *((_DWORD *)this + 640) )
              goto LABEL_179;
            v80 = *(_DWORD *)(v77 + 4);
            v109 = 0.0;
            v110 = 0.0;
            v81 = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                  (int)&g_fxMan,
                                  (CKeyGen *)"jetthrust",
                                  (int)&v109,
                                  v80 + 16,
                                  0);
            *((_DWORD *)this + 640) = v81;
            if ( v81 )
            {
              FxSystem_c::Play(v81);
              FxSystem_c::SetLocalParticles(*((FxSystem_c **)this + 640), 1u);
              FxSystem_c::CopyParentMatrix(*((FxSystem_c **)this + 640));
            }
            v77 = *((_DWORD *)this + 6);
            if ( v77 )
            {
LABEL_179:
              if ( *((_DWORD *)this + 641) )
                goto LABEL_180;
              v82 = *(_DWORD *)(v77 + 4);
              v109 = 0.0;
              v110 = 0.0;
              v83 = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                    (int)&g_fxMan,
                                    (CKeyGen *)"jetthrust",
                                    (int)&v109,
                                    v82 + 16,
                                    0);
              *((_DWORD *)this + 641) = v83;
              if ( v83 )
              {
                FxSystem_c::Play(v83);
                FxSystem_c::SetLocalParticles(*((FxSystem_c **)this + 641), 1u);
                FxSystem_c::CopyParentMatrix(*((FxSystem_c **)this + 641));
              }
              v77 = *((_DWORD *)this + 6);
              if ( v77 )
              {
LABEL_180:
                if ( !*((_DWORD *)this + 642) )
                {
                  v84 = *(_DWORD *)(v77 + 4);
                  v109 = 0.0;
                  v110 = 0.0;
                  v85 = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                        (int)&g_fxMan,
                                        (CKeyGen *)"jetthrust",
                                        (int)&v109,
                                        v84 + 16,
                                        0);
                  *((_DWORD *)this + 642) = v85;
                  if ( v85 )
                  {
                    FxSystem_c::Play(v85);
                    FxSystem_c::SetLocalParticles(*((FxSystem_c **)this + 642), 1u);
                    FxSystem_c::CopyParentMatrix(*((FxSystem_c **)this + 642));
                  }
                }
              }
            }
          }
        }
        if ( *((_DWORD *)this + 639) )
        {
          v111 = -0.0000106811512;
          v112 = 1028443341;
          operator*();
          FxSystem_c::SetMatrix();
          FxSystem_c::SetOffsetPos();
          FxSystem_c::SetConstTime(*((FxSystem_c **)this + 639), 1u, v75);
          CMatrix::~CMatrix((CMatrix *)&v109);
        }
        if ( *((_DWORD *)this + 640) )
        {
          v111 = -0.0000106811549;
          v112 = 1028443341;
          operator*();
          FxSystem_c::SetMatrix();
          FxSystem_c::SetOffsetPos();
          FxSystem_c::SetConstTime(*((FxSystem_c **)this + 640), 1u, v75);
          CMatrix::~CMatrix((CMatrix *)&v109);
        }
        if ( *((_DWORD *)this + 641) )
        {
          v111 = -0.0000106811512;
          v112 = 1032805417;
          operator*();
          FxSystem_c::SetMatrix();
          FxSystem_c::SetOffsetPos();
          FxSystem_c::SetConstTime(*((FxSystem_c **)this + 641), 1u, v75);
          CMatrix::~CMatrix((CMatrix *)&v109);
        }
        if ( *((_DWORD *)this + 642) )
        {
          v111 = -0.0000106811549;
          v112 = 1032805417;
          operator*();
          FxSystem_c::SetMatrix();
          FxSystem_c::SetOffsetPos();
          FxSystem_c::SetConstTime(*((FxSystem_c **)this + 642), 1u, v75);
          CMatrix::~CMatrix((CMatrix *)&v109);
        }
      }
      else
      {
        v49 = (FxSystem_c *)*((_DWORD *)this + 639);
        if ( v49 )
        {
          FxSystem_c::Kill(v49);
          *((_DWORD *)this + 639) = 0;
        }
        v50 = (FxSystem_c *)*((_DWORD *)this + 640);
        if ( v50 )
        {
          FxSystem_c::Kill(v50);
          *((_DWORD *)this + 640) = 0;
        }
        v51 = (FxSystem_c *)*((_DWORD *)this + 641);
        if ( v51 )
        {
          FxSystem_c::Kill(v51);
          *((_DWORD *)this + 641) = 0;
        }
        v52 = (FxSystem_c *)*((_DWORD *)this + 642);
        if ( v52 )
        {
          FxSystem_c::Kill(v52);
          *((_DWORD *)this + 642) = 0;
        }
        v53 = (FxSystem_c *)*((_DWORD *)this + 356);
        if ( v53 )
        {
          FxSystem_c::Kill(v53);
          *((_DWORD *)this + 614) = 0;
          *((_DWORD *)this + 356) = 0;
        }
      }
      break;
    case 539:
      if ( *((_DWORD *)this + 430) )
      {
        v54 = *(_DWORD *)(CEntity::GetColModel(this) + 44);
        CVehicleModelInfo::GetWheelPosn((CVehicleModelInfo *)LODWORD(v7), 0, (CVector *)&v109, 0);
        CMatrix::Attach();
        v55 = (float *)*((_DWORD *)this + 5);
        v56 = *((float *)this + 18);
        v57 = *((float *)this + 19);
        v58 = *((float *)this + 20);
        v59 = (float)((float)(v56 * v55[4]) + (float)(v57 * v55[5])) + (float)(v58 * v55[6]);
        v60 = v59 + v59;
        v61 = -0.3;
        if ( v60 > 0.3 || (v62 = -0.3, v60 >= -0.3) )
        {
          v62 = 0.3;
          if ( v60 <= 0.3 )
            v62 = v60;
        }
        v124 = v62;
        v63 = (float)((float)((float)(v56 * *v55) + (float)(v57 * v55[1])) + (float)(v58 * v55[2]))
            + (float)((float)((float)(v56 * *v55) + (float)(v57 * v55[1])) + (float)(v58 * v55[2]));
        v64 = v63 < 0.3;
        if ( v63 <= 0.3 )
          v64 = v63 < -0.3;
        if ( !v64 )
        {
          v61 = 0.3;
          if ( v63 <= 0.3 )
            v61 = v63;
        }
        v123 = v61;
        v65 = *((float *)this + 532);
        v66 = *((float *)this + 533);
        v67 = *((float *)this + 534);
        v68 = *((float *)this + 531);
        v69 = (float)((float)((float)(v68 - v65) + (float)(v66 - v67)) * 0.5)
            / (float)(*(float *)(*(_DWORD *)(v54 + 16) + 4) - *(float *)(*(_DWORD *)(v54 + 16) + 36));
        v70 = powf(0.9, *(float *)&CTimer::ms_fTimeStep);
        v71 = 0.1;
        v72 = 0.1;
        if ( v69 <= 0.1 )
        {
          v72 = v69;
          if ( v69 < -0.1 )
            v72 = -0.1;
        }
        v73 = 1.0 - v70;
        v122 = (float)((float)(1.0 - v70) * v72) + (float)(v70 * v122);
        v74 = (float)((float)((float)(v66 - v68) + (float)(v67 - v65)) * 0.5)
            / (float)(*(float *)(*(_DWORD *)(v54 + 16) + 96) - *(float *)(*(_DWORD *)(v54 + 16) + 32));
        if ( v74 <= 0.1 )
        {
          v71 = (float)((float)((float)(v66 - v68) + (float)(v67 - v65)) * 0.5)
              / (float)(*(float *)(*(_DWORD *)(v54 + 16) + 96) - *(float *)(*(_DWORD *)(v54 + 16) + 32));
          if ( v74 < -0.1 )
            v71 = -0.1;
        }
        v120 = (float)(v73 * v71) + (float)(v70 * v120);
        v2.n64_f32[0] = (float)((float)((float)((float)((float)((float)(v68 + v66) + v65) + v67) * 0.25) - v110)
                              / (float)(*(float *)(LODWORD(v7) + 88) * -0.5))
                      + 1.0;
        v3.n64_u32[0] = 1067869798;
        v125 = (float)(v70 * v125) + (float)(v73 * vmin_f32(v2, v3).n64_f32[0]);
        CMatrix::UpdateRW((CMatrix *)v119);
      }
      break;
    case 592:
      CVehicle::SetComponentRotation(
        (int)this,
        *((_DWORD *)this + 431),
        0,
        COERCE_INT(CPlane::ANDROM_COL_ANGLE_MULT * (float)*((unsigned __int16 *)this + 1088)),
        1);
      break;
  }
  v86 = *((__int16 *)this + 864);
  if ( v86 >= 0 )
    CBouncingPanel::ProcessPanel(
      (int)this + 1728,
      (int)this,
      *((_DWORD *)this + v86 + 407),
      *((_DWORD *)this + 562),
      *((float *)this + 563),
      *((float *)this + 564),
      *((_DWORD *)this + 565),
      *((_DWORD *)this + 566),
      *((_DWORD *)this + 567),
      0.03,
      0.98);
  v87 = *((__int16 *)this + 880);
  if ( v87 > -1 )
    CBouncingPanel::ProcessPanel(
      (int)this + 1760,
      (int)this,
      *((_DWORD *)this + v87 + 407),
      *((_DWORD *)this + 562),
      *((float *)this + 563),
      *((float *)this + 564),
      *((_DWORD *)this + 565),
      *((_DWORD *)this + 566),
      *((_DWORD *)this + 567),
      0.03,
      0.98);
  v88 = *((__int16 *)this + 896);
  if ( v88 > -1 )
    CBouncingPanel::ProcessPanel(
      (int)this + 1792,
      (int)this,
      *((_DWORD *)this + v88 + 407),
      *((_DWORD *)this + 562),
      *((float *)this + 563),
      *((float *)this + 564),
      *((_DWORD *)this + 565),
      *((_DWORD *)this + 566),
      *((_DWORD *)this + 567),
      0.03,
      0.98);
  v89 = *((float *)this + 22) + *((float *)this + 28);
  v90 = *((float *)this + 23) + *((float *)this + 29);
  *(float32x4_t *)((char *)this + 2248) = vaddq_f32(*(float32x4_t *)((char *)this + 72), *((float32x4_t *)this + 6));
  *((float *)this + 566) = v89;
  *((float *)this + 567) = v90;
  if ( *((_WORD *)this + 19) == 539 )
  {
    CShadows::StoreShadowForVehicle(this);
    v92 = (char *)this + 1068;
    v91 = v7;
  }
  else
  {
    v92 = (char *)this + 1068;
    v91 = v7;
    CShadows::StoreShadowForVehicle(this);
  }
  if ( (v92[3] & 0x40) == 0 )
  {
    v93 = *((__int16 *)this + 19);
    v94 = v93 == 464;
    if ( v93 != 464 )
      v94 = v93 == 539;
    if ( !v94 )
    {
      v95 = *(_DWORD *)(LODWORD(v91) + 116);
      v96 = *(double *)(v95 + 144);
      v110 = *(float *)(v95 + 152);
      v109 = v96;
      v111 = *(double *)(v95 + 144);
      v112 = *(_DWORD *)(v95 + 152);
      *(float *)&v111 = *(float *)&v111 + -0.1;
      operator*();
      operator*();
      CMotionBlurStreaks::RegisterStreak();
      *(float *)&v109 = -*(float *)&v109;
      *(float *)&v111 = -*(float *)&v111;
      operator*();
      v108 = v104;
      v107 = v103;
      operator*();
      v106 = v104;
      v105 = v103;
      CMotionBlurStreaks::RegisterStreak();
    }
  }
  if ( *((_BYTE *)this + 2580) )
  {
    v97 = *((__int16 *)this + 19);
    if ( v97 == 513 )
    {
      FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&v109, 1.0, 0.0, 0.0, 0.4, 1.0, 1.0, 0.3);
      v111 = -2048.0;
      v112 = 0;
      operator*();
      v99 = dword_820540;
      v101 = *((float *)this + 18) * 10.0;
      v102 = *((float *)this + 20) * 10.0;
      *((float *)&v105 + 1) = *((float *)this + 19) * 10.0;
      *(float *)&v105 = v101;
      v106 = v102;
    }
    else
    {
      if ( v97 != 512 )
      {
        if ( (unsigned __int16)v97 != 460 )
          goto LABEL_175;
        goto LABEL_173;
      }
      FxPrtMult_c::FxPrtMult_c((FxPrtMult_c *)&v109, 1.0, 1.0, 1.0, 0.4, 1.0, 1.0, 0.2);
      v111 = -0.0000305175781;
      v112 = -1090519040;
      operator*();
      v98 = *((float *)this + 18) * 10.0;
      v99 = dword_820540;
      v100 = (float)(*((float *)this + 20) * 10.0) + -3.0;
      *((float *)&v105 + 1) = *((float *)this + 19) * 10.0;
      *(float *)&v105 = v98;
      v106 = v100;
    }
    FxSystem_c::AddParticle(v99, (int)&v107, (int)&v105, 0, (int)&v109, -1.0, 1.2, 0.6, 0);
  }
  if ( *((_WORD *)this + 19) != 460 )
    goto LABEL_175;
LABEL_173:
  if ( *((unsigned __int8 *)this + 69) << 31 )
    CVehicle::DoBoatSplashes(this, *((float *)this + 601));
LABEL_175:
  CMatrix::~CMatrix((CMatrix *)v119);
}


// ============================================================

// Address: 0x5787b0
// Original: _ZN6CPlane6RenderEv
// Demangled: CPlane::Render(void)
int __fastcall CPlane::Render(CVehicle *this)
{
  *((_DWORD *)this + 312) = CTimer::m_snTimeInMilliseconds + 3000;
  return sub_18CB2C(this);
}


// ============================================================

// Address: 0x5787c8
// Original: _ZN6CPlane15IsAlreadyFlyingEv
// Demangled: CPlane::IsAlreadyFlying(void)
int __fastcall CPlane::IsAlreadyFlying(int this)
{
  *(_DWORD *)(this + 2516) = CTimer::m_snTimeInMilliseconds - 20000;
  return this;
}


// ============================================================

// Address: 0x5787e0
// Original: _ZN6CPlane3FixEv
// Demangled: CPlane::Fix(void)
unsigned int __fastcall CPlane::Fix(CPlane *this)
{
  char *v2; // r5
  unsigned int result; // r0

  v2 = (char *)this + 1460;
  CDamageManager::ResetDamageStatus((CPlane *)((char *)this + 1460));
  if ( *(unsigned __int8 *)(*((_DWORD *)this + 226) + 205) << 31 )
  {
    CDamageManager::SetDoorStatus(v2, 2, 4);
    CDamageManager::SetDoorStatus(v2, 3, 4);
    CDamageManager::SetDoorStatus(v2, 4, 4);
    CDamageManager::SetDoorStatus(v2, 5, 4);
  }
  result = *((_DWORD *)this + 267) & 0xFFFEFFFF;
  *((_DWORD *)this + 267) = result;
  return result;
}


// ============================================================

// Address: 0x578832
// Original: _ZN6CPlane20SetupDamageAfterLoadEv
// Demangled: CPlane::SetupDamageAfterLoad(void)
int __fastcall CPlane::SetupDamageAfterLoad(int this)
{
  *(_DWORD *)(this + 1068) &= ~0x10000u;
  return this;
}


// ============================================================

// Address: 0x578840
// Original: _ZN6CPlane13VehicleDamageEftP7CEntityP7CVectorS3_11eWeaponType
// Demangled: CPlane::VehicleDamage(float,ushort,CEntity *,CVector *,CVector *,eWeaponType)
unsigned int __fastcall CPlane::VehicleDamage(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  float32x2_t v7; // d0
  float32x2_t v8; // d9
  unsigned int result; // r0
  float *v12; // r9
  float v13; // s22
  float v14; // s20
  int v15; // r5
  int v16; // r5
  float v17; // s16
  int v18; // r8
  float *v19; // r6
  float v20; // s24
  float v21; // s26
  int PlayerVehicle; // r0
  int v23; // r1
  float v24; // s0
  int v25; // r0
  float v26; // s0
  int v27; // r5
  int v28; // r1
  int v29; // r0
  float v30; // s0
  float v31; // s4
  float v32; // s20
  int v33; // r2
  float *v34; // r0
  float v35; // s4
  float v36; // s10
  float v37; // s0
  int v38; // r8
  int v39; // r2
  float v40; // s0
  int v41; // r3
  float32x2_t v42; // d17
  unsigned __int64 v43; // d2
  float v44; // s2
  int AeroplaneCompStatus; // r0
  int v46; // r0
  CBouncingPanel *v47; // r0
  int v48; // r0
  __int64 v49; // d16
  FxSystem_c *v50; // r0
  int v51; // r1
  int v52; // r1
  _BYTE v53[12]; // [sp+10h] [bp-68h] BYREF
  _BYTE v54[12]; // [sp+20h] [bp-58h] BYREF

  if ( *(_WORD *)(a1 + 38) == 539 )
    return sub_18D558((CBike *)a1, a2, a3, a4, a5, a6, a7);
  result = *(unsigned __int8 *)(a1 + 1070) << 26;
  if ( (*(_BYTE *)(a1 + 1070) & 0x20) == 0 )
    return result;
  v12 = (float *)a5;
  v13 = PLANE_DAMAGE_DESTROY_THRESHHOLD;
  result = *(unsigned __int8 *)(a1 + 58);
  v14 = PLANE_DAMAGE_THRESHHOLD;
  if ( result >= 8 )
  {
    result = *(unsigned __int8 *)(a1 + 70) << 25;
    if ( (*(_BYTE *)(a1 + 70) & 0x40) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 224);
      result = FindPlayerPed(-1);
      if ( v15 != result )
      {
        v16 = *(_DWORD *)(a1 + 224);
        result = FindPlayerVehicle(-1, 0);
        if ( v16 != result )
          return result;
      }
    }
  }
  if ( *(float *)&a2 == 0.0 )
  {
    v17 = *(float *)(a1 + 220);
    if ( v17 <= 0.0 )
      return result;
    result = *(unsigned __int8 *)(a1 + 70) << 27;
    if ( (*(_BYTE *)(a1 + 70) & 0x10) != 0 )
      return result;
    v8.n64_u32[0] = 1.0;
    v12 = (float *)(a1 + 240);
    v25 = *(_DWORD *)(a1 + 224);
    v7.n64_f32[0] = *(float *)(a1 + 144) / PLANE_DAMAGE_SCALE_MASS;
    v13 = v13 * v7.n64_f32[0];
    v14 = v14 * vmax_f32(v7, v8).n64_f32[0];
    if ( v25 )
    {
      result = *(_BYTE *)(v25 + 58) & 7;
      if ( result == 3 )
        return result;
    }
    v18 = 0;
  }
  else
  {
    v54[0] = 0;
    result = CVehicle::CanVehicleBeDamaged();
    if ( !result )
      return result;
    result = a7 - 19;
    if ( (unsigned int)(a7 - 19) >= 3 && a7 != 51 )
      return result;
    v17 = 0.0;
    v18 = 1;
  }
  v19 = (float *)(a1 + 1228);
  v20 = *(float *)(a1 + 1228);
  v21 = v17 * *(float *)(*(_DWORD *)(a1 + 904) + 200);
  PlayerVehicle = FindPlayerVehicle(-1, 0);
  v23 = *(_DWORD *)(a1 + 1068) & 0x8000;
  if ( a1 == PlayerVehicle )
  {
    v24 = 2.0;
    if ( v23 )
      v24 = 6.0;
    goto LABEL_24;
  }
  if ( v23 )
  {
    v24 = 12.0;
LABEL_24:
    v26 = v21 / v24;
    goto LABEL_28;
  }
  v27 = *(_DWORD *)(a1 + 224);
  if ( v27 && v27 == FindPlayerVehicle(-1, 0) )
  {
    v24 = 1.5;
    goto LABEL_24;
  }
  v26 = v21 * 0.25;
LABEL_28:
  v28 = 0;
  v29 = 0;
  v30 = *v19 - v26;
  v31 = v30;
  if ( v30 <= 0.0 )
    v31 = 1.0;
  if ( v20 > 0.0 )
    v30 = v31;
  *v19 = v30;
  if ( v30 <= 1.0 )
    v28 = 1;
  if ( v20 > 0.0 )
    v29 = 1;
  if ( v17 > v13 || (v29 & v28) == 1 )
    return (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)a1 + 168))(a1, a1, 0);
  result = (v17 > v14) | v18;
  if ( result )
  {
    result = *(_BYTE *)(a1 + 58) & 0xF8;
    if ( result != 40 )
    {
      v32 = 1000.0;
      if ( *(float *)(a1 + 144) > 1000.0 )
      {
        v33 = *(_DWORD *)(a1 + 20);
        v34 = (float *)(v33 + 48);
        v35 = v12[2];
        if ( !v33 )
          v34 = (float *)(a1 + 4);
        v36 = v34[2];
        v37 = *v12 - *v34;
        *(float *)&v54[4] = v12[1] - v34[1];
        *(float *)v54 = v37;
        *(float *)&v54[8] = v35 - v36;
        Multiply3x3((const CVector *)v53, (const CMatrix *)v54);
        v38 = -1;
        *(_DWORD *)&v54[8] = *(_DWORD *)&v53[8];
        result = a1 + 1676;
        *(_QWORD *)v54 = *(_QWORD *)v53;
        v39 = 0;
        v40 = *(float *)v53;
        do
        {
          v41 = *(_DWORD *)(result + 4 * v39);
          if ( v41 )
          {
            *(_QWORD *)v53 = *(_QWORD *)(v41 + 64);
            *(_DWORD *)&v53[8] = *(_DWORD *)(v41 + 72);
            v42.n64_u64[0] = vsub_f32(*(float32x2_t *)&v53[4], *(float32x2_t *)&v54[4]).n64_u64[0];
            v43 = vmul_f32(v42, v42).n64_u64[0];
            v44 = (float)((float)((float)(*(float *)v53 - v40) * (float)(*(float *)v53 - v40)) + *(float *)&v43)
                + *((float *)&v43 + 1);
            if ( v44 < (float)(v32 * v32) )
            {
              v32 = sqrtf(v44);
              v38 = v39 + 12;
            }
          }
          ++v39;
        }
        while ( v39 != 13 );
        if ( v38 > -1 )
        {
          if ( v38 == 16 )
          {
            if ( (rand() & 1) != 0 )
            {
              if ( *(_DWORD *)(a1 + 1696) && (rand() & 1) != 0 )
              {
                v38 = 17;
              }
              else
              {
                v38 = 18;
                if ( !*(_DWORD *)(a1 + 1700) )
                  v38 = 16;
              }
            }
            else
            {
              v38 = 16;
            }
          }
          if ( CDamageManager::ProgressAeroplaneDamage((CDamageManager *)(a1 + 1460), v38) != 1 )
            goto LABEL_69;
          AeroplaneCompStatus = CDamageManager::GetAeroplaneCompStatus((CDamageManager *)(a1 + 1460), v38);
          if ( (unsigned int)(v38 - 16) > 6 || AeroplaneCompStatus != 1 )
          {
            if ( CDamageManager::GetAeroplaneCompStatus((CDamageManager *)(a1 + 1460), v38) == 2 )
              CVehicle::SetComponentVisibility(a1, *(_DWORD *)(a1 + 4 * v38 + 1628), 2);
            goto LABEL_69;
          }
          v46 = *(__int16 *)(a1 + 1728);
          if ( v46 == -1 )
          {
            v47 = (CBouncingPanel *)(a1 + 1728);
          }
          else
          {
            if ( v38 == v46 )
              goto LABEL_69;
            v51 = *(unsigned __int16 *)(a1 + 1760);
            if ( v51 == 0xFFFF )
            {
              v47 = (CBouncingPanel *)(a1 + 1760);
            }
            else
            {
              if ( v38 == (__int16)v51 )
                goto LABEL_69;
              v52 = *(unsigned __int16 *)(a1 + 1792);
              if ( v52 == 0xFFFF )
              {
                v47 = (CBouncingPanel *)(a1 + 1792);
              }
              else
              {
                if ( v38 == (__int16)v52 || *(unsigned __int16 *)(a1 + 1824) != 0xFFFF )
                  goto LABEL_69;
                v47 = (CBouncingPanel *)(a1 + 1824);
              }
            }
          }
          CBouncingPanel::SetPanel(v47, v38, 0, -0.02);
LABEL_69:
          CAutomobile::dmgDrawCarCollidingParticles();
          v48 = *(_DWORD *)(a1 + 4 * v38 + 1628);
          v49 = *(_QWORD *)(v48 + 64);
          *(_DWORD *)&v53[8] = *(_DWORD *)(v48 + 72);
          *(_QWORD *)v53 = v49;
          v50 = *(FxSystem_c **)(a1 + 2572);
          if ( v50 )
          {
            FxSystem_c::Kill(v50);
            *(_DWORD *)(a1 + 2572) = 0;
          }
          result = *(_DWORD *)(a1 + 24);
          if ( result )
          {
            result = FxManager_c::CreateFxSystem(
                       (int)&g_fxMan,
                       (CKeyGen *)"fire_med",
                       (int)v53,
                       *(_DWORD *)(result + 4) + 16,
                       0);
            *(_DWORD *)(a1 + 2572) = result;
            if ( result )
            {
              FxSystem_c::Play((FxSystem_c *)result);
              FxSystem_c::SetVelAdd();
              FxSystem_c::SetLocalParticles(*(FxSystem_c **)(a1 + 2572), 1u);
              result = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 2000.0) + 2000;
              *(_DWORD *)(a1 + 2576) = result;
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x578d28
// Original: _ZN6CPlane8OpenDoorEP4CPedi6eDoorsfb
// Demangled: CPlane::OpenDoor(CPed *,int,eDoors,float,bool)
int __fastcall CPlane::OpenDoor(int a1, int a2, int a3, int a4, float a5, int a6)
{
  return CAutomobile::OpenDoor(a1, a2, a3, a4, a5, a6);
}


// ============================================================

// Address: 0x578d48
// Original: _ZN6CPlane22FindPlaneCreationCoorsEP7CVectorS1_PfS2_b
// Demangled: CPlane::FindPlaneCreationCoors(CVector *,CVector *,float *,float *,bool)
float *__fastcall CPlane::FindPlaneCreationCoors(CPlane *this, CVector *a2, CVector *a3, float *a4, float *a5, bool a6)
{
  float v7; // s16
  float v9; // s18
  int v10; // r11
  int v11; // r10
  double v12; // d16
  float v13; // s26
  float v14; // s24
  float v15; // r0
  float v16; // s6
  float v17; // s8
  double v18; // d16
  int v19; // r0
  float v20; // s2
  float v21; // s4
  float v22; // s0
  float v23; // s0
  float v24; // s4
  __int16 v25; // r0
  float *result; // r0
  CColSphere *v27; // [sp+8h] [bp-B0h]
  __int16 *v28; // [sp+14h] [bp-A4h]
  int v31; // [sp+28h] [bp-90h]
  _BYTE v32[20]; // [sp+2Ch] [bp-8Ch] BYREF
  double v33; // [sp+40h] [bp-78h] BYREF
  int v34; // [sp+48h] [bp-70h]
  float v35[23]; // [sp+5Ch] [bp-5Ch] BYREF

  v7 = 25.0;
  v9 = 140.0;
  if ( a5 )
  {
    v9 = 340.0;
    v7 = 200.0;
  }
  v10 = 0;
  v28 = &CWorld::ms_nCurrentScanCode;
  v31 = 0;
  do
  {
    v11 = rand();
    FindPlayerCoors((int)&v33);
    v12 = v33;
    *((_DWORD *)this + 2) = v34;
    *(double *)this = v12;
    v13 = cosf((float)((float)(v11 % 360) * 3.1416) / 180.0);
    v14 = (float)(v7 + (float)(rand() & 0xF)) + (float)v10;
    v15 = sinf((float)((float)(v11 % 360) * 3.1416) / 180.0);
    *a4 = v14;
    v16 = *((float *)this + 1);
    v17 = *((float *)this + 2);
    *(float *)this = *(float *)this + (float)(v9 * v13);
    *((float *)this + 1) = v16 + (float)(v9 * v15);
    *((float *)this + 2) = *a4 + v17;
    FindPlayerCoors((int)&v33);
    v18 = v33;
    *((_DWORD *)a2 + 2) = v34;
    *(double *)a2 = v18;
    v19 = (rand() & 0x1F) + 20;
    v20 = (float)(*(float *)&dword_9528B4 * (float)v19) + *(float *)a2;
    v21 = (float)(*(float *)&dword_9528B8 * (float)v19) + *((float *)a2 + 1);
    v22 = (float)(*(float *)&dword_9528BC * (float)v19) + *((float *)a2 + 2);
    *(float *)a2 = v20;
    *((float *)a2 + 1) = v21;
    *((float *)a2 + 2) = v22;
    *((float *)a2 + 2) = v22 + *a4;
    *(_DWORD *)a3 = CGeneral::GetATanOfXY(
                      COERCE_CGENERAL_(v20 - *(float *)this),
                      v21 - *((float *)this + 1),
                      COERCE_FLOAT(&TheCamera));
    v23 = *(float *)a2 + (float)(*(float *)a2 - *(float *)this);
    v24 = *((float *)a2 + 2) + (float)(*((float *)a2 + 2) - *((float *)this + 2));
    v35[1] = *((float *)a2 + 1) + (float)(*((float *)a2 + 1) - *((float *)this + 1));
    v35[0] = v23;
    v35[2] = v24;
    if ( (unsigned __int16)CWorld::ms_nCurrentScanCode == 0xFFFF )
    {
      CWorld::ClearScanCodes((CWorld *)((char *)&elf_hash_bucket[16320] + 3));
      v25 = 1;
    }
    else
    {
      v25 = CWorld::ms_nCurrentScanCode + 1;
    }
    *v28 = v25;
    CColSphere::Set((CColSphere *)v32, 15.0, this, 0, 0, (unsigned __int8)elf_hash_bucket + 3);
    if ( CWorld::GetIsLineOfSightClear(
           this,
           (const CVector *)v35,
           (const CVector *)((char *)&stderr + 1),
           0,
           0,
           0,
           0,
           0,
           0,
           (bool)v28) == 1
      && CCollision::CheckCameraCollisionBuildings(
           (CCollision *)(int)*(float *)this,
           (int)*((float *)this + 1),
           (int)&v33,
           (CColBox *)v32,
           (CColSphere *)v32,
           (CColSphere *)v32,
           v27) != 1 )
    {
      v31 = 1;
    }
    else
    {
      v10 += 10;
      if ( v10 >= 500 )
        break;
    }
  }
  while ( !(v31 << 31) );
  result = a4;
  *a4 = *a4 + 20.0;
  *((float *)a2 + 2) = *((float *)a2 + 2) + 20.0;
  return result;
}


// ============================================================

// Address: 0x57901c
// Original: _ZN6CPlane19CountPlanesAndHelisEv
// Demangled: CPlane::CountPlanesAndHelis(void)
int __fastcall CPlane::CountPlanesAndHelis(CPlane *this)
{
  int v1; // r2
  int result; // r0
  int v3; // r1
  int i; // r1

  v1 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
  if ( !v1 )
    return 0;
  result = 0;
  do
  {
    v3 = 2604 * v1--;
    for ( i = v3 - 2604;
          *(char *)(*(_DWORD *)(CPools::ms_pVehiclePool + 4) + v1) < 0 || !(*(_DWORD *)CPools::ms_pVehiclePool + i);
          i -= 2604 )
    {
      if ( --v1 == -1 )
        return result;
    }
    if ( (unsigned int)(*(_DWORD *)(*(_DWORD *)CPools::ms_pVehiclePool + i + 1444) - 3) < 2 )
      ++result;
  }
  while ( v1 );
  return result;
}


// ============================================================

// Address: 0x579078
// Original: _ZN6CPlane18AreWeInNoPlaneZoneEv
// Demangled: CPlane::AreWeInNoPlaneZone(void)
bool __fastcall CPlane::AreWeInNoPlaneZone(CPlane *this)
{
  float *v1; // r2
  float v2; // s2
  float v3; // s0

  v1 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v1 = (float *)&qword_951FAC;
  v2 = *v1;
  v3 = v1[1];
  return sqrtf(
           (float)((float)((float)(*v1 + 1073.0) * (float)(*v1 + 1073.0))
                 + (float)((float)(v3 + 675.0) * (float)(v3 + 675.0)))
         + (float)((float)(v1[2] + -50.0) * (float)(v1[2] + -50.0))) < 200.0
      || v2 > -2743.0 && v2 < -2626.0 && v3 > 1300.0 && v3 < 2200.0
      || v2 > -1668.0 && v2 < -1122.0 && v3 > 541.0 && v3 < 1118.0;
}


// ============================================================

// Address: 0x579180
// Original: _ZN6CPlane21AreWeInNoBigPlaneZoneEv
// Demangled: CPlane::AreWeInNoBigPlaneZone(void)
bool __fastcall CPlane::AreWeInNoBigPlaneZone(CPlane *this)
{
  float *v1; // r2
  float v2; // s2

  v1 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v1 = (float *)&qword_951FAC;
  v2 = v1[1];
  return sqrtf(
           (float)((float)(*v1 + -1522.0) * (float)(*v1 + -1522.0))
         + (float)((float)(v2 + 1237.0) * (float)(v2 + 1237.0))) < 800.0
      || sqrtf((float)((float)(*v1 + 1836.0) * (float)(*v1 + 1836.0)) + (float)((float)(v2 + -659.0)
                                                                              * (float)(v2 + -659.0))) < 800.0;
}


// ============================================================

// Address: 0x579214
// Original: _ZN6CPlane27DoPlaneGenerationAndRemovalEv
// Demangled: CPlane::DoPlaneGenerationAndRemoval(void)
int __fastcall CPlane::DoPlaneGenerationAndRemoval(CPlane *this)
{
  return 0;
}


// ============================================================

// Address: 0x579d2c
// Original: _ZN6CPlane29InitPlaneGenerationAndRemovalEv
// Demangled: CPlane::InitPlaneGenerationAndRemoval(void)
int __fastcall CPlane::InitPlaneGenerationAndRemoval(CPlane *this)
{
  int result; // r0

  CPlane::GenPlane_LastTimeGenerated = 0;
  result = 1;
  CPlane::GenPlane_Status = 0;
  CPlane::GenPlane_Active = 1;
  return result;
}


// ============================================================

// Address: 0x579d58
// Original: _ZN6CPlane19SwitchAmbientPlanesEb
// Demangled: CPlane::SwitchAmbientPlanes(bool)
char *__fastcall CPlane::SwitchAmbientPlanes(CPlane *this, bool a2)
{
  char v2; // r8
  _DWORD *v3; // r11
  int v4; // r0
  int v5; // r5
  int v6; // r4
  int v7; // r6
  char *result; // r0

  v2 = (char)this;
  if ( CPlane::GenPlane_Active )
  {
    if ( !this )
    {
      v3 = (_DWORD *)CPools::ms_pVehiclePool;
      v4 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
      if ( v4 )
      {
        v5 = v4 - 1;
        v6 = 2604 * v4 - 1160;
        do
        {
          if ( *(char *)(v3[1] + v5) >= 0 )
          {
            v7 = *v3 + v6;
            if ( v7 != 1444 && (unsigned int)(*(_DWORD *)(*v3 + v6) - 3) <= 1 && *(_BYTE *)(v7 - 252) == 1 )
            {
              CWorld::Remove((CWorld *)(v7 - 1444), (CEntity *)(v7 - 2604));
              (*(void (__fastcall **)(int))(*(_DWORD *)(v7 - 1444) + 4))(v7 - 1444);
            }
          }
          --v5;
          v6 -= 2604;
        }
        while ( v5 != -1 );
      }
    }
  }
  result = &CPlane::GenPlane_Active;
  CPlane::GenPlane_Active = v2;
  return result;
}


// ============================================================

// Address: 0x579e00
// Original: _ZN6CPlane9BlowUpCarEP7CEntityh
// Demangled: CPlane::BlowUpCar(CEntity *,uchar)
int __fastcall CPlane::BlowUpCar(CPlane *this, CEntity *a2, unsigned __int8 a3)
{
  int result; // r0
  int v6; // r0
  bool v7; // zf
  int *v8; // r0
  float v9; // s0
  int v10; // r0
  unsigned int v11; // r1
  __int64 *v12; // r6
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r1
  int v17; // r1
  int v18; // r1
  int v19; // r1
  int v20; // r1
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0
  char v25; // r1
  int *v26; // r5
  int v27; // r2
  float *v28; // r1
  __int64 v29; // kr00_8
  char v30; // r1
  unsigned int v31; // r0
  int v32; // r1
  int v33; // r2
  int v34; // r0
  int v35; // r2
  _DWORD v36[7]; // [sp+1Ch] [bp-1Ch] BYREF

  result = *((unsigned __int8 *)this + 1070) << 26;
  if ( result < 0 )
  {
    if ( *((unsigned __int8 *)this + 58) < 8u )
      goto LABEL_8;
    v6 = *((unsigned __int8 *)this + 958);
    v7 = v6 == 57;
    if ( v6 != 57 )
      v7 = *((unsigned __int16 *)this + 19) == 464;
    if ( v7 )
    {
LABEL_8:
      if ( (CEntity *)FindPlayerPed(-1) == a2 || (CEntity *)FindPlayerVehicle(-1, 0) == a2 )
      {
        v8 = &CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
        v9 = *((float *)v8 + 82) + 10.0;
        v8[80] += 20;
        *((float *)v8 + 82) = v9;
        v10 = rand();
        CStats::IncrementStat(
          (CStats *)((char *)off_7C + 1),
          COERCE_UNSIGNED_INT((float)(v10 % 6000 + 4000)),
          COERCE_FLOAT(6000));
      }
      v11 = *((unsigned __int8 *)this + 58);
      v12 = (__int64 *)((char *)this + 1068);
      if ( v11 <= 7 )
      {
        v13 = *((_DWORD *)this + 281);
        if ( v13 )
          *(_DWORD *)(v13 + 1164) |= 2u;
        v14 = *((_DWORD *)this + 282);
        if ( v14 )
          *(_DWORD *)(v14 + 1164) |= 2u;
        v15 = *((_DWORD *)this + 283);
        if ( v15 )
          *(_DWORD *)(v15 + 1164) |= 2u;
        v16 = *((_DWORD *)this + 284);
        if ( v16 )
          *(_DWORD *)(v16 + 1164) |= 2u;
        v17 = *((_DWORD *)this + 285);
        if ( v17 )
          *(_DWORD *)(v17 + 1164) |= 2u;
        v18 = *((_DWORD *)this + 286);
        if ( v18 )
          *(_DWORD *)(v18 + 1164) |= 2u;
        v19 = *((_DWORD *)this + 287);
        if ( v19 )
          *(_DWORD *)(v19 + 1164) |= 2u;
        v20 = *((_DWORD *)this + 288);
        if ( v20 )
          *(_DWORD *)(v20 + 1164) |= 2u;
        v21 = *((_DWORD *)this + 289);
        if ( v21 )
          *(_DWORD *)(v21 + 1164) |= 2u;
        *((_DWORD *)this + 23) = 0;
        LOBYTE(v11) = *((_BYTE *)this + 58);
        v22 = *((_DWORD *)this + 7);
        *((_QWORD *)this + 9) = 0LL;
        *((_QWORD *)this + 10) = 0LL;
        *((_DWORD *)this + 22) = 0;
        *((_DWORD *)this + 7) = v22 & 0xFFFFFF7E;
      }
      v23 = *((_DWORD *)this + 17);
      *((_BYTE *)this + 58) = v11 & 7 | 0x28;
      *((_DWORD *)this + 17) = v23 | 0x20000000;
      *((_DWORD *)this + 314) = CTimer::m_snTimeInMilliseconds;
      CVisibilityPlugins::SetClumpForAllAtomicsFlag();
      CDamageManager::FuckCarCompletely((CPlane *)((char *)this + 1460), 0);
      if ( *((_WORD *)this + 19) != 464 )
      {
        CAutomobile::SetBumperDamage(this, 5, 0);
        CAutomobile::SetBumperDamage(this, 6, 0);
        CAutomobile::SetDoorDamage(this, 0, 0);
        CAutomobile::SetDoorDamage(this, 1, 0);
        CAutomobile::SetDoorDamage(this, 2, 0);
        CAutomobile::SetDoorDamage(this, 3, 0);
        CAutomobile::SetDoorDamage(this, 4, 0);
        CAutomobile::SetDoorDamage(this, 5, 0);
        CAutomobile::SpawnFlyingComponent(this, 5, 1u);
        v24 = *((_DWORD *)this + 412);
        if ( v24 )
        {
          v36[0] = 0;
          RwFrameForAllObjects(v24, GetCurrentAtomicObjectCB, v36);
          if ( v36[0] )
            *(_BYTE *)(v36[0] + 2) = 0;
        }
      }
      v25 = *((_BYTE *)this + 1202);
      v26 = (int *)((char *)this + 4);
      *((_WORD *)this + 631) = 0;
      v27 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 307) = 0;
      *((_BYTE *)this + 1202) = v25 & 0xF8;
      v28 = (float *)((char *)this + 4);
      if ( v27 )
        v28 = (float *)(v27 + 48);
      CCamera::CamShake((CCamera *)&TheCamera, 0.4, *v28, v28[1], v28[2]);
      CVehicle::KillPedsInVehicle(this);
      v29 = *v12;
      v30 = *((_BYTE *)this + 1202);
      v31 = *((_DWORD *)this + 268) & 0xFFFF7FFF;
      *((_BYTE *)this + 2580) = 0;
      *((_BYTE *)this + 1202) = v30 & 0xE7;
      v32 = v29 & 0xFFFFFFAF;
      *(_DWORD *)v12 = v29 & 0xFFFFFFAF;
      *((_DWORD *)this + 268) = v31;
      *((_BYTE *)this + 2172) &= ~1u;
      if ( (v29 & 2) != 0 )
      {
        v32 = v29 & 0xFFFFFFAD;
        *(_DWORD *)v12 = v29 & 0xFFFFFFAD;
        *((_DWORD *)this + 268) = v31;
        --CCarCtrl::NumAmbulancesOnDuty;
      }
      if ( (v32 & 4) != 0 )
      {
        *(_DWORD *)v12 = v32 & 0xFFFFFFAB;
        *((_DWORD *)this + 268) = v31 & 0xFFFF7FFF;
        --CCarCtrl::NumFireTrucksOnDuty;
      }
      CVehicle::ChangeLawEnforcerState(this, 0);
      CFireManager::StartFire((CFireManager *)gFireManager, this, a2, 0.8, 1u, 0x1B58u, 0);
      CDarkel::RegisterCarBlownUpByPlayer(this, 0, v33);
      v34 = *((_DWORD *)this + 5);
      if ( v34 )
        v26 = (int *)(v34 + 48);
      if ( *((_WORD *)this + 19) == 464 )
        v35 = 12;
      else
        v35 = 7;
      return CExplosion::AddExplosion((int)this, (int)a2, v35, *v26, v26[1], v26[2], 0, 1, -1.0, 0);
    }
    else
    {
      *((_DWORD *)this + 307) = 0;
      result = 57;
      *((_BYTE *)this + 958) = 57;
    }
  }
  return result;
}


// ============================================================

// Address: 0x57a184
// Original: _ZN6CPlane18SetUpWheelColModelEP9CColModel
// Demangled: CPlane::SetUpWheelColModel(CColModel *)
int __fastcall CPlane::SetUpWheelColModel(CPlane *this, CColModel *a2)
{
  return 0;
}


// ============================================================

// Address: 0x57a188
// Original: _ZN6CPlane9BurstTyreEhb
// Demangled: CPlane::BurstTyre(uchar,bool)
int __fastcall CPlane::BurstTyre(CPlane *this, unsigned __int8 a2, bool a3)
{
  return 0;
}


// ============================================================
