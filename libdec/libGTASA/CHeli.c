
// Address: 0x18b320
// Original: j__ZN5CHeli11UpdateHelisEv
// Demangled: CHeli::UpdateHelis(void)
// attributes: thunk
int __fastcall CHeli::UpdateHelis(CHeli *this)
{
  return _ZN5CHeli11UpdateHelisEv(this);
}


// ============================================================

// Address: 0x18d40c
// Original: j__ZN5CHeliC2Eih
// Demangled: CHeli::CHeli(int,uchar)
// attributes: thunk
void __fastcall CHeli::CHeli(CHeli *this, int a2, unsigned __int8 a3)
{
  _ZN5CHeliC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x18e2f8
// Original: j__ZN5CHeli19TestSniperCollisionEP7CVectorS1_
// Demangled: CHeli::TestSniperCollision(CVector *,CVector *)
// attributes: thunk
int __fastcall CHeli::TestSniperCollision(CHeli *this, CVector *a2, CVector *a3)
{
  return _ZN5CHeli19TestSniperCollisionEP7CVectorS1_(this, a2, a3);
}


// ============================================================

// Address: 0x18f1a8
// Original: j__ZN5CHeli17SwitchPoliceHelisEb
// Demangled: CHeli::SwitchPoliceHelis(bool)
// attributes: thunk
int __fastcall CHeli::SwitchPoliceHelis(CHeli *this, bool a2)
{
  return _ZN5CHeli17SwitchPoliceHelisEb(this, a2);
}


// ============================================================

// Address: 0x18fc8c
// Original: j__ZN5CHeli9InitHelisEv
// Demangled: CHeli::InitHelis(void)
// attributes: thunk
int __fastcall CHeli::InitHelis(CHeli *this)
{
  return _ZN5CHeli9InitHelisEv(this);
}


// ============================================================

// Address: 0x193964
// Original: j__ZN5CHeli15SearchLightConeEi7CVectorS0_ffhhPS0_S1_S1_bffff
// Demangled: CHeli::SearchLightCone(int,CVector,CVector,float,float,uchar,uchar,CVector*,CVector*,CVector*,bool,float,float,float,float)
// attributes: thunk
int CHeli::SearchLightCone()
{
  return _ZN5CHeli15SearchLightConeEi7CVectorS0_ffhhPS0_S1_S1_bffff();
}


// ============================================================

// Address: 0x194980
// Original: j__ZN5CHeli19Pre_SearchLightConeEv
// Demangled: CHeli::Pre_SearchLightCone(void)
// attributes: thunk
int __fastcall CHeli::Pre_SearchLightCone(CHeli *this)
{
  return _ZN5CHeli19Pre_SearchLightConeEv(this);
}


// ============================================================

// Address: 0x196c1c
// Original: j__ZN5CHeli20Post_SearchLightConeEv
// Demangled: CHeli::Post_SearchLightCone(void)
// attributes: thunk
int __fastcall CHeli::Post_SearchLightCone(CHeli *this)
{
  return _ZN5CHeli20Post_SearchLightConeEv(this);
}


// ============================================================

// Address: 0x198e58
// Original: j__ZN5CHeliD2Ev
// Demangled: CHeli::~CHeli()
// attributes: thunk
void __fastcall CHeli::~CHeli(CHeli *this)
{
  _ZN5CHeliD2Ev(this);
}


// ============================================================

// Address: 0x19ed94
// Original: j__ZN5CHeli12GenerateHeliEP4CPedb
// Demangled: CHeli::GenerateHeli(CPed *,bool)
// attributes: thunk
int __fastcall CHeli::GenerateHeli(CHeli *this, CPed *a2, bool a3)
{
  return _ZN5CHeli12GenerateHeliEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x1a0280
// Original: j__ZN5CHeli12SendDownSwatEv
// Demangled: CHeli::SendDownSwat(void)
// attributes: thunk
int __fastcall CHeli::SendDownSwat(CHeli *this)
{
  return _ZN5CHeli12SendDownSwatEv(this);
}


// ============================================================

// Address: 0x1a167c
// Original: j__ZN5CHeli25RenderAllHeliSearchLightsEv
// Demangled: CHeli::RenderAllHeliSearchLights(void)
// attributes: thunk
int __fastcall CHeli::RenderAllHeliSearchLights(CHeli *this)
{
  return _ZN5CHeli25RenderAllHeliSearchLightsEv(this);
}


// ============================================================

// Address: 0x571050
// Original: _ZN5CHeliC2Eih
// Demangled: CHeli::CHeli(int,uchar)
void __fastcall CHeli::CHeli(CHeli *this, int a2, unsigned __int8 a3)
{
  int v5; // r1
  char v6; // r3
  int v7; // r1
  int v8; // r0

  CAutomobile::CAutomobile(this, a2, a3, 1u);
  *((_DWORD *)this + 361) = 3;
  *((_DWORD *)this + 645) = 0;
  v5 = *((_DWORD *)this + 17);
  v6 = *((_BYTE *)this + 2460);
  *(_QWORD *)((char *)this + 2492) = 0x4120000041200000LL;
  *(_QWORD *)((char *)this + 2500) = 1092616192LL;
  *((_QWORD *)this + 308) = 0LL;
  *((_QWORD *)this + 309) = 0LL;
  *(_QWORD *)((char *)this + 2476) = 0LL;
  *(_QWORD *)((char *)this + 2484) = 0LL;
  *((_BYTE *)this + 2460) = v6 & 0xFC;
  *((_DWORD *)this + 17) = v5 | 0x1000000;
  *(_DWORD *)this = &off_66DB44;
  if ( a2 == 425 )
  {
    CDamageManager::SetDoorStatus((char *)this + 1460, 2, 0);
    *((_DWORD *)this + 383) = 1064388155;
    *((_DWORD *)this + 384) = 0;
    *((_BYTE *)this + 1542) = 1;
    *((_WORD *)this + 770) = 19;
  }
  *(_DWORD *)((char *)this + 2510) = 0;
  *((_BYTE *)this + 2509) = 4;
  v7 = *((_DWORD *)this + 268) | 0x40;
  v8 = CTimer::m_snTimeInMilliseconds;
  *(_QWORD *)((char *)this + 2548) = 0LL;
  *(_QWORD *)((char *)this + 2556) = 0LL;
  *(_QWORD *)((char *)this + 2532) = 0LL;
  *(_QWORD *)((char *)this + 2540) = 0LL;
  *(_QWORD *)((char *)this + 2516) = 0LL;
  *(_QWORD *)((char *)this + 2524) = 0LL;
  *((_DWORD *)this + 641) = v8;
  *((_DWORD *)this + 268) = v7;
  *((_BYTE *)this + 995) = 10;
  *((_BYTE *)this + 2596) = 16;
  *((_DWORD *)this + 646) = 0;
  *((_DWORD *)this + 647) = v8;
  *((_DWORD *)this + 648) = 0;
  *((_BYTE *)this + 2508) = 0;
  *((_BYTE *)this + 2597) = 0;
  *((float *)this + 650) = (float)((float)((float)rand() * 4.6566e-10) * 6.0) + 2.0;
}


// ============================================================

// Address: 0x57119c
// Original: _ZN5CHeliD2Ev
// Demangled: CHeli::~CHeli()
void __fastcall CHeli::~CHeli(CHeli *this)
{
  int v2; // r1
  int PlaneNumGuns; // r1
  _DWORD *v4; // r0
  int i; // r6
  FxSystem_c *v6; // r0
  int v7; // r1

  v2 = *((_DWORD *)this + 648);
  *(_DWORD *)this = &off_66DB44;
  if ( v2 )
  {
    PlaneNumGuns = CVehicle::GetPlaneNumGuns(this);
    v4 = (_DWORD *)*((_DWORD *)this + 648);
    if ( PlaneNumGuns >= 1 )
    {
      for ( i = 0; i < v7; ++i )
      {
        v6 = (FxSystem_c *)v4[i];
        if ( v6 )
        {
          FxSystem_c::Kill(v6);
          FxManager_c::DestroyFxSystem((FxManager_c *)&g_fxMan, *(FxSystem_c **)(*((_DWORD *)this + 648) + 4 * i));
        }
        v7 = CVehicle::GetPlaneNumGuns(this);
        v4 = (_DWORD *)*((_DWORD *)this + 648);
      }
    }
    if ( v4 )
      operator delete[](v4);
    *((_DWORD *)this + 648) = 0;
  }
  CAEVehicleAudioEntity::Terminate((CHeli *)((char *)this + 316));
  sub_19E4D4(this);
}


// ============================================================

// Address: 0x571228
// Original: _ZN5CHeliD0Ev
// Demangled: CHeli::~CHeli()
void __fastcall CHeli::~CHeli(CHeli *this)
{
  void *v1; // r0

  CHeli::~CHeli(this);
  sub_199F80(v1);
}


// ============================================================

// Address: 0x571238
// Original: _ZN5CHeli14ProcessControlEv
// Demangled: CHeli::ProcessControl(void)
int __fastcall CHeli::ProcessControl(CHeli *this)
{
  CHeli *v1; // r11
  int v2; // r1
  FxSystem_c *v3; // r0
  int v4; // r0
  CPad *v5; // r0
  CPad *Pad; // r0
  _BYTE *v7; // r4
  char *v8; // r8
  unsigned int *v9; // r5
  int (*v10)(); // r11
  unsigned int *v11; // r10
  int (*v12)(); // r6
  unsigned int v13; // r9
  unsigned int v14; // s0
  unsigned int v15; // s2
  float v16; // s4
  float v17; // s0
  float v18; // s2
  float v19; // s4
  const CVector *v20; // r1
  int result; // r0
  float v22; // s16
  float v23; // s0
  float v24; // s0
  int v25; // r0
  int PlayerEntity; // r10
  int v27; // r0
  int v28; // r1
  _BOOL4 v29; // r3
  int v30; // r0
  int v31; // r0
  float *v32; // r2
  int v33; // r1
  unsigned __int64 v34; // d16
  float v35; // r0
  float *v36; // r1
  float *v37; // r5
  float *v38; // r6
  float v39; // r9
  float v40; // r8
  float v41; // s2
  float v42; // s4
  float v43; // s0
  float v44; // s6
  float v45; // s0
  float v46; // s4
  float v47; // s2
  float v48; // s6
  float v49; // s10
  float v50; // s8
  int v51; // r3
  unsigned int v52; // r8
  int v53; // r5
  float *v54; // r4
  float v55; // s0
  int v56; // r2
  float v57; // s2
  float *v58; // r1
  float *v59; // r3
  float v60; // r11
  float v61; // r6
  float v62; // r0
  float v63; // r10
  float v64; // r8
  float v65; // r9
  float v66; // lr
  float v67; // r12
  float v68; // s4
  int v69; // r1
  float v70; // s0
  float v71; // s2
  float v72; // r4
  float v73; // r3
  float v74; // s4
  float v75; // s6
  float v76; // s10
  float v77; // s12
  float v78; // s8
  int v79; // r0
  float v80; // s0
  float v81; // s2
  float v82; // s4
  float v83; // s0
  float v84; // s6
  float v85; // s2
  float v86; // s0
  float *v87; // r1
  float v88; // s4
  unsigned int v89; // r0
  unsigned int v90; // r8
  CCullZones *v91; // r0
  char v92; // r5
  int PlayerPed; // r6
  int v94; // r0
  int v95; // r9
  int v96; // r0
  int v97; // r0
  unsigned int v98; // r1
  int IsLineOfSightClear; // r0
  unsigned int v100; // r0
  bool v101; // cc
  unsigned __int8 v102; // r5
  float v103; // s16
  unsigned __int8 v104; // r6
  float v105; // s18
  int v106; // r0
  int v107; // r1
  bool v108; // [sp+14h] [bp-BCh]
  float *v109; // [sp+18h] [bp-B8h]
  float *v110; // [sp+20h] [bp-B0h]
  float *v111; // [sp+24h] [bp-ACh]
  float *v112; // [sp+28h] [bp-A8h]
  int v113; // [sp+2Ch] [bp-A4h]
  _BYTE *v114; // [sp+30h] [bp-A0h]
  int v115; // [sp+3Ch] [bp-94h]
  CVehicle *v116; // [sp+40h] [bp-90h]
  float v117[3]; // [sp+50h] [bp-80h] BYREF
  float v118; // [sp+5Ch] [bp-74h] BYREF
  float v119; // [sp+60h] [bp-70h]
  float v120; // [sp+64h] [bp-6Ch]
  unsigned __int64 v121; // [sp+68h] [bp-68h] BYREF
  float v122; // [sp+70h] [bp-60h]
  float v123; // [sp+78h] [bp-58h] BYREF
  float v124; // [sp+7Ch] [bp-54h]
  float v125; // [sp+80h] [bp-50h]
  unsigned __int64 v126; // [sp+88h] [bp-48h] BYREF
  float v127; // [sp+90h] [bp-40h]

  v1 = this;
  CAutomobile::ProcessControl(this);
  if ( (*((_BYTE *)v1 + 1068) & 0x10) == 0 )
  {
    v3 = (FxSystem_c *)*((_DWORD *)v1 + 356);
    if ( v3 )
    {
      FxSystem_c::Kill(v3);
      *((_DWORD *)v1 + 614) = 0;
      *((_DWORD *)v1 + 356) = 0;
    }
  }
  v4 = *((_DWORD *)v1 + 281);
  if ( v4 )
  {
    v5 = *(CPad **)(v4 + 1436);
    if ( v5 != (CPad *)((char *)&stderr + 1) )
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  Pad = (CPad *)CPad::GetPad(v5, v2);
  if ( ((*((unsigned __int8 *)v1 + 58) >> 3) | 8) == 8 && CPad::HornJustDown(Pad) == 1 )
    *((_BYTE *)v1 + 2597) = *((_BYTE *)v1 + 2597) == 0;
  v116 = v1;
  if ( (*((_BYTE *)v1 + 71) & 0x20) != 0
    || CCullZones::PlayerNoRain((CCullZones *)(*((unsigned __int8 *)v1 + 71) << 26)) )
  {
    v7 = (char *)v1 + 958;
    v115 = 0;
    *((_DWORD *)v1 + 645) = 0;
    goto LABEL_15;
  }
  v25 = *((unsigned __int8 *)v1 + 958);
  v7 = (char *)v1 + 958;
  if ( v25 == 40 )
  {
    if ( !FindPlayerVehicle(-1, 0)
      || *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) != 3 && *(_DWORD *)(FindPlayerVehicle(-1, 0) + 1444) != 4 )
    {
      PlayerEntity = FindPlayerEntity(-1);
      v28 = 1;
      v27 = 1;
      goto LABEL_50;
    }
    v25 = (unsigned __int8)*v7;
  }
  if ( v25 == 39 && (PlayerEntity = *((_DWORD *)v1 + 264)) != 0 && (*((_BYTE *)v1 + 2460) & 2) != 0 )
  {
    v27 = 1;
  }
  else
  {
    if ( *((unsigned __int8 *)v1 + 58) > 7u || *((_WORD *)v1 + 19) != 497 )
    {
      PlayerEntity = 0;
      v28 = 0;
      v27 = 0;
      goto LABEL_50;
    }
    v27 = *((unsigned __int8 *)v1 + 2597);
    PlayerEntity = 0;
    if ( *((_BYTE *)v1 + 2597) )
      v27 = 1;
  }
  v28 = 0;
LABEL_50:
  v29 = (*((_DWORD *)v1 + 17) & 0x100) == 0;
  v30 = v27 & v29;
  *((_BYTE *)v1 + 2597) = v30;
  v115 = v28 & v29;
  if ( v30 )
  {
    if ( PlayerEntity )
    {
      v31 = *(_DWORD *)(PlayerEntity + 20);
      v32 = (float *)(PlayerEntity + 72);
      v33 = v31 + 48;
      if ( !v31 )
        v33 = PlayerEntity + 4;
      v34 = *(_QWORD *)v33;
      v35 = *(float *)(v33 + 8);
      v36 = (float *)(PlayerEntity + 76);
      v127 = v35;
      v126 = v34;
    }
    else
    {
      v37 = (float *)*((_DWORD *)v1 + 5);
      v38 = v37 + 12;
      if ( v37 )
      {
        v43 = v37[4];
        v41 = v37[5];
        v42 = v37[6];
      }
      else
      {
        v38 = (float *)((char *)v1 + 4);
        v39 = *((float *)v1 + 4);
        v40 = sinf(v39);
        v41 = cosf(v39);
        v42 = 0.0;
        LODWORD(v43) = LODWORD(v40) ^ 0x80000000;
      }
      v44 = v43 * 10.0;
      v45 = (float)(v42 * 10.0) + v38[2];
      v46 = (float)(v41 * 10.0) + v38[1];
      v47 = v44 + *v38;
      if ( v37 )
      {
        v48 = v37[8];
        v49 = v37[9];
        v50 = v37[10];
      }
      else
      {
        v48 = 0.0;
        v50 = 1.0;
        v49 = 0.0;
      }
      v36 = (float *)((char *)v1 + 76);
      v32 = (float *)((char *)v1 + 72);
      *((float *)&v126 + 1) = v46 - (float)(v49 * 30.0);
      *(float *)&v126 = v47 - (float)(v48 * 30.0);
      v127 = v45 - (float)(v50 * 30.0);
    }
    v51 = *((_DWORD *)v1 + 641);
    v52 = CTimer::m_snTimeInMilliseconds;
    v53 = CTimer::m_snTimeInMilliseconds - v51;
    if ( CTimer::m_snTimeInMilliseconds - v51 <= 1000 )
    {
      v76 = *((float *)v1 + 637);
      v77 = *((float *)v1 + 631);
      v74 = *((float *)v1 + 636);
      v75 = *((float *)v1 + 630);
    }
    else
    {
      v113 = PlayerEntity;
      v114 = (char *)v1 + 958;
      v54 = (float *)v1;
      v55 = *v32;
      v56 = v51 + 1000;
      v57 = *v36;
      v58 = (float *)((char *)v1 + 2520);
      v59 = (float *)((char *)v1 + 2544);
      v60 = *((float *)v1 + 629);
      v61 = v54[630];
      v62 = v54[631];
      v63 = v54[632];
      v64 = v54[635];
      v65 = v54[636];
      v66 = v54[637];
      v67 = v54[638];
      v68 = (float)(v55 * 50.0) + (float)(v55 * 50.0);
      v110 = v58;
      v109 = v54 + 635;
      v69 = v53 - 1000;
      v111 = v54 + 629;
      v112 = v59;
      v70 = (float)((float)(v57 * 50.0) + (float)(v57 * 50.0)) + *((float *)&v126 + 1);
      v71 = v68 + *(float *)&v126;
      if ( v53 <= 2000 )
      {
        v74 = v54[635];
        v75 = v60;
        v53 -= 1000;
        v73 = *((float *)v116 + 639);
        v72 = *((float *)v116 + 633);
      }
      else
      {
        do
        {
          v72 = v63;
          v73 = v67;
          v63 = v62;
          v67 = v66;
          v62 = v61;
          v66 = v65;
          v61 = v60;
          v65 = v64;
          v53 = v69 - 1000;
          v60 = v68 + *(float *)&v126;
          v64 = v70;
          v56 += 1000;
          v101 = v69 <= 2000;
          v69 -= 1000;
        }
        while ( !v101 );
        v74 = v70;
        v75 = v71;
      }
      v1 = v116;
      v77 = v61;
      v52 = CTimer::m_snTimeInMilliseconds;
      v76 = v65;
      *((float *)v116 + 640) = v73;
      *((float *)v116 + 639) = v67;
      *((float *)v116 + 638) = v66;
      *((float *)v116 + 631) = v61;
      *((float *)v116 + 632) = v62;
      *((float *)v116 + 633) = v63;
      *((float *)v116 + 634) = v72;
      *((float *)v116 + 637) = v65;
      *v110 = v75;
      *v112 = v74;
      *v111 = v71;
      *v109 = v70;
      *((_DWORD *)v116 + 641) = v56;
      PlayerEntity = v113;
      v7 = v114;
    }
    v78 = 1.0;
    v79 = *((_DWORD *)v1 + 5);
    v80 = (float)v53 / 1000.0;
    v81 = 1.0 - v80;
    v82 = v80 * v74;
    v83 = v80 * v75;
    v84 = v81 * v77;
    v85 = v82 + (float)(v81 * v76);
    v86 = v83 + v84;
    *((float *)v1 + 643) = v85;
    *((float *)v1 + 642) = v86;
    *((float *)v1 + 644) = v127;
    v87 = (float *)(v79 + 48);
    if ( !v79 )
      v87 = (float *)((char *)v1 + 4);
    v88 = sqrtf((float)((float)(v86 - *v87) * (float)(v86 - *v87)) + (float)((float)(v85 - v87[1])
                                                                           * (float)(v85 - v87[1])));
    if ( v88 <= 60.0 )
    {
      if ( v88 >= 40.0 )
        v78 = (float)((float)(v88 + -40.0) / -20.0) + 1.0;
    }
    else
    {
      v78 = 0.0;
    }
    *((float *)v1 + 645) = v78;
    if ( v78 < 0.9
      || (float)((float)((float)(*(float *)&v126 - v86) * (float)(*(float *)&v126 - v86))
               + (float)((float)(*((float *)&v126 + 1) - v85) * (float)(*((float *)&v126 + 1) - v85))) > 49.0 )
    {
      *((_DWORD *)v1 + 325) = v52;
      *((_DWORD *)v1 + 646) = v52;
    }
    else if ( v52 > *((_DWORD *)v1 + 647) )
    {
      *((_DWORD *)v1 + 647) = (rand() & 0xFFF) + v52 + 4500;
    }
    if ( v115 == 1 )
    {
      v89 = *(_DWORD *)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44) - 3;
      if ( v89 > 3 )
        v90 = 999999;
      else
        v90 = dword_571B08[v89];
      v91 = *(CCullZones **)(**(_DWORD **)(FindPlayerPed(-1) + 1092) + 44);
      if ( v91 )
        v91 = (CCullZones *)CAudioEngine::SayPedless((CAudioEngine *)&AudioEngine, 52, 174, v1, 0, 1.0, 0, 0, 0);
      v92 = CCullZones::NoPolice(v91);
      PlayerPed = FindPlayerPed(-1);
      v94 = *(unsigned __int8 *)(FindPlayerWanted(-1) + 30);
      v95 = 5000;
      if ( PlayerEntity == PlayerPed )
        v95 = v90 >> v92;
      if ( v94 << 29 )
      {
        v96 = CTimer::m_snTimeInMilliseconds;
        *((_DWORD *)v1 + 325) = CTimer::m_snTimeInMilliseconds;
        *((_DWORD *)v1 + 646) = v96;
      }
      else
      {
        v121 = 0x4060000000000000LL;
        v122 = -1.0;
        operator*();
        v97 = *((_DWORD *)v1 + 646);
        v98 = CTimer::m_snTimeInMilliseconds;
        if ( CTimer::m_snTimeInMilliseconds > (unsigned int)(v97 + v95)
          && CTimer::m_snPreviousTimeInMilliseconds <= (unsigned int)(v97 + v95) )
        {
          IsLineOfSightClear = CWorld::GetIsLineOfSightClear(
                                 (CWorld *)&v123,
                                 (const CVector *)&v126,
                                 (const CVector *)((char *)&stderr + 1),
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 0,
                                 v108);
          v98 = CTimer::m_snTimeInMilliseconds;
          if ( IsLineOfSightClear == 1 )
          {
            v97 = *((_DWORD *)v1 + 646);
          }
          else
          {
            v97 = CTimer::m_snTimeInMilliseconds;
            *((_DWORD *)v1 + 325) = CTimer::m_snTimeInMilliseconds;
            *((_DWORD *)v1 + 646) = v98;
          }
        }
        v100 = v97 + v95;
        v101 = v98 > v100;
        if ( v98 > v100 )
          v101 = v98 > *((_DWORD *)v1 + 325);
        if ( v101 )
        {
          v122 = v127;
          v121 = v126;
          v102 = rand();
          v103 = *(float *)&v121;
          v104 = rand();
          v105 = *((float *)&v121 + 1);
          v118 = *(float *)&v126 - v123;
          v119 = *((float *)&v126 + 1) - v124;
          v120 = v127 - v125;
          CVector::Normalise((CVector *)&v118);
          *(float *)&v121 = (float)(v118 * 3.0) + (float)(v103 + (float)((float)(v102 - 128) * 0.02));
          *((float *)&v121 + 1) = (float)(v119 * 3.0) + (float)(v105 + (float)((float)(v104 - 128) * 0.02));
          v122 = (float)(v120 * 3.0) + v122;
          v117[0] = (float)(v118 * 3.0) + v123;
          v117[1] = (float)(v119 * 3.0) + v124;
          v117[2] = (float)(v120 * 3.0) + v125;
          FireOneInstantHitRound((CVector *)v117, (CVector *)&v121, 20);
          CAudioEngine::ReportWeaponEvent();
          v106 = rand();
          v107 = 150;
          if ( (float)((float)((float)v106 * 4.6566e-10) + 0.0) < 0.15 )
            v107 = 400;
          *((_DWORD *)v1 + 325) = CTimer::m_snTimeInMilliseconds + v107;
        }
      }
    }
  }
LABEL_15:
  if ( *v7 == 40 && *((_BYTE *)v1 + 2509) )
  {
    CHeli::SendDownSwat(v1);
    CInterestingEvents::Add();
  }
  v8 = (char *)v1 + 2510;
  v9 = (unsigned int *)&dword_61ECC4;
  v10 = sub_571B4C;
  v11 = (unsigned int *)&dword_61ECD4;
  v12 = sub_571B5C;
  v13 = 0;
  do
  {
    if ( v8[v13] )
    {
      --v8[v13];
      v14 = 0;
      v15 = 0;
      v16 = 0.0;
      if ( v13 <= 3 )
      {
        v15 = *v11;
        v14 = *v9;
        v16 = -0.5;
      }
      v126 = __PAIR64__(v15, v14);
      v127 = v16;
      operator*();
      CRopes::RegisterRope();
      if ( !v8[v13] )
      {
        v17 = 0.0;
        v18 = 0.0;
        v19 = 0.0;
        v20 = (const CVector *)*((_DWORD *)v116 + 5);
        if ( v13 <= 3 )
        {
          v18 = *(float *)v12;
          v17 = *(float *)v10;
          v19 = -0.025;
        }
        v124 = v18;
        v123 = v17;
        v125 = v19;
        Multiply3x3((const CMatrix *)&v126, v20);
        v127 = 0.0;
        CRopes::SetSpeedOfTopNode();
      }
    }
    ++v13;
    ++v11;
    ++v9;
    v12 = (int (*)())((char *)v12 + 4);
    v10 = (int (*)())((char *)v10 + 4);
  }
  while ( v13 != 4 );
  CVehicle::UpdateWinch(v116);
  CVehicle::ProcessWeapons(v116);
  result = (unsigned __int8)byte_9EFB04 << 31;
  if ( result )
  {
    v22 = (float)(*(float *)&CTimer::ms_fTimeStep / 50.0) / 10.0;
    v23 = (float)rand();
    result = v115;
    v24 = (float)(v23 * 4.6566e-10) + 0.0;
    if ( v115 )
      v22 = v22 + v22;
    if ( v24 < v22 )
      return CInterestingEvents::Add();
  }
  return result;
}


// ============================================================

// Address: 0x571b78
// Original: _ZN5CHeli12SendDownSwatEv
// Demangled: CHeli::SendDownSwat(void)
int __fastcall CHeli::SendDownSwat(CHeli *this)
{
  int v2; // r1
  int v3; // r2
  int v4; // r0
  int v5; // r5
  float32x2_t v6; // d9
  float v7; // s16
  const CMatrix *v8; // r1
  float *v9; // r5
  float32x2_t *v10; // r0
  float32x2_t v11; // d16
  unsigned __int64 v12; // d1
  int v14; // r0
  float v15; // s10
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float v19; // s18
  int WaterLevelNoWaves; // r0
  int *v21; // r8
  unsigned int v22; // r1
  CTaskComplexSequence *v23; // r9
  unsigned int v24; // r1
  CTaskComplexUseSwatRope *v25; // r6
  unsigned int v26; // r1
  int v27; // r6
  unsigned __int16 v28; // r0
  unsigned __int8 v29; // r0
  CEntity **v30; // [sp+4h] [bp-BCh]
  float *v31; // [sp+8h] [bp-B8h]
  unsigned __int64 v32; // [sp+28h] [bp-98h] BYREF
  float v33; // [sp+30h] [bp-90h]
  _BYTE v34[72]; // [sp+38h] [bp-88h] BYREF
  unsigned __int64 v35; // [sp+80h] [bp-40h]
  float v36; // [sp+88h] [bp-38h]

  v2 = *((_DWORD *)this + 264);
  v3 = *(_DWORD *)(v2 + 20);
  v4 = v3 + 48;
  if ( !v3 )
    v4 = v2 + 4;
  if ( !*((_BYTE *)this + 2509) )
    return 0;
  v5 = 0;
  if ( (*((_DWORD *)this + 17) & 0x100) == 0 && byte_713984 == 1 )
  {
    v6.n64_u64[0] = *(unsigned __int64 *)v4;
    v7 = *(float *)(v4 + 8);
    if ( (rand() & 0x7F) != 0 )
      return 0;
    v8 = (const CMatrix *)*((_DWORD *)this + 5);
    v9 = (float *)((char *)this + 4);
    v10 = (float32x2_t *)((char *)this + 4);
    if ( v8 )
      v10 = (float32x2_t *)((char *)v8 + 48);
    v11.n64_u64[0] = vsub_f32((float32x2_t)v10->n64_u64[0], v6).n64_u64[0];
    v12 = vmul_f32(v11, v11).n64_u64[0];
    if ( sqrtf(
           (float)(*(float *)&v12 + *((float *)&v12 + 1))
         + (float)((float)(v10[1].n64_f32[0] - v7) * (float)(v10[1].n64_f32[0] - v7))) > 50.0
      || sqrtf(
           (float)((float)(*((float *)this + 18) * *((float *)this + 18))
                 + (float)(*((float *)this + 19) * *((float *)this + 19)))
         + (float)(*((float *)this + 20) * *((float *)this + 20))) > 0.1 )
    {
      return 0;
    }
    CMatrix::CMatrix((CMatrix *)v34, v8);
    Multiply3x3((const CMatrix *)&v32, (const CVector *)v34);
    v36 = v33;
    v35 = v32;
    v14 = *((_DWORD *)this + 5);
    if ( v14 )
      v9 = (float *)(v14 + 48);
    v15 = v9[2];
    v16 = *v9 + *(float *)&v32;
    v17 = v9[1] + *((float *)&v32 + 1);
    v5 = 0;
    v18 = v15 + v33;
    v35 = __PAIR64__(LODWORD(v17), LODWORD(v16));
    v36 = v15 + v33;
    v19 = COERCE_FLOAT(CWorld::FindGroundZFor3DCoord((CWorld *)LODWORD(v16), v17, v15 + v33, 0.0, 0, v30));
    if ( fabsf(v7 - v19) < 2.5 )
    {
      WaterLevelNoWaves = CWaterLevel::GetWaterLevelNoWaves(
                            (CWaterLevel *)LODWORD(v16),
                            v17,
                            v18,
                            COERCE_FLOAT(&v32),
                            0,
                            0,
                            v31);
      if ( *(float *)&v32 >= v19 && WaterLevelNoWaves || CRopes::RegisterRope() < 0 )
      {
        v5 = 0;
      }
      else
      {
        v5 = 1;
        v21 = (int *)CPopulation::AddPed();
        v23 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v22);
        CTaskComplexSequence::CTaskComplexSequence(v23);
        v25 = (CTaskComplexUseSwatRope *)CTask::operator new((CTask *)&dword_1C, v24);
        CTaskComplexUseSwatRope::CTaskComplexUseSwatRope(v25, (int)this + *((unsigned __int8 *)this + 2509) - 1, this);
        CTaskComplexSequence::AddTask(v23, v25);
        v27 = CTask::operator new((CTask *)&dword_50, v26);
        v28 = rand();
        CTaskComplexWander::CTaskComplexWander(
          (CTaskComplexWander *)v27,
          4,
          (int)(float)((float)((float)v28 * 0.000015259) * 8.0),
          1,
          0.5);
        *(_QWORD *)(v27 + 56) = 0LL;
        *(_QWORD *)(v27 + 64) = 0LL;
        *(_DWORD *)(v27 + 50) = 0;
        *(_DWORD *)(v27 + 46) = 0;
        *(_DWORD *)v27 = &off_66C5E8;
        *(_DWORD *)(v27 + 40) = 0;
        *(_DWORD *)(v27 + 44) = 0;
        *(_DWORD *)(v27 + 74) = 0;
        *(_DWORD *)(v27 + 70) = 0;
        CTaskComplexSequence::AddTask(v23, (CTask *)v27);
        CTaskManager::SetTask((CTaskManager *)(v21[272] + 4), v23, 3, 0);
        v21[7] &= ~1u;
        v29 = *((_BYTE *)this + 2509) - 1;
        *((_BYTE *)this + 2509) = v29;
        *((_BYTE *)this + v29 + 2510) = -86;
        CAnimManager::BlendAnimation(v21[6], 0, 0x98u);
      }
    }
    CMatrix::~CMatrix((CMatrix *)v34);
  }
  return v5;
}


// ============================================================

// Address: 0x571e98
// Original: _ZN5CHeli30FindSwatPositionRelativeToHeliEi
// Demangled: CHeli::FindSwatPositionRelativeToHeli(int)
float *__fastcall CHeli::FindSwatPositionRelativeToHeli(float *this, int a2, unsigned int a3)
{
  float v3; // s0
  int v4; // s2
  int v5; // s4

  if ( a3 > 3 )
  {
    v5 = 0;
    v4 = 0;
    v3 = 0.0;
  }
  else
  {
    v3 = -0.5;
    v4 = dword_61ECD4[a3];
    v5 = dword_61ECC4[a3];
  }
  *(_DWORD *)this = v5;
  *((_DWORD *)this + 1) = v4;
  this[2] = v3;
  return this;
}


// ============================================================

// Address: 0x571ee0
// Original: _ZN5CHeli20ProcessControlInputsEh
// Demangled: CHeli::ProcessControlInputs(uchar)
char *__fastcall CHeli::ProcessControlInputs(CHeli *this, CPad *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d8
  float32x2_t v5; // d9
  CPad *Pad; // r9
  _DWORD *v8; // r5
  int Accelerate; // r6
  float *v10; // r8
  CHID *SteeringUpDown; // r0
  float *v12; // r5
  CHID *InputType; // r0
  float v14; // s20
  int IsPressed; // r6
  int v16; // r0
  float v17; // s2
  int v18; // r0
  float v19; // s16
  float v20; // s0
  float v21; // s2
  float v22; // s0
  bool v23; // nf
  int v24; // r1
  CPlayerPed *PlayerPed; // r0
  float v26; // s0
  float v27; // s4
  float v28; // s2
  float v29; // s6
  float v30; // s6
  char *result; // r0
  float v32; // s2
  double v33; // [sp+10h] [bp-50h] BYREF
  float v34; // [sp+18h] [bp-48h]
  double v35; // [sp+20h] [bp-40h] BYREF
  float v36; // [sp+28h] [bp-38h]

  Pad = (CPad *)CPad::GetPad(a2, (int)a2);
  if ( CHID::GetInputType(Pad) == 2 )
  {
    *((_DWORD *)this + 619) = 0;
    v8 = (_DWORD *)((char *)this + 2476);
    if ( CHID::IsPressed(86, 0) == 1 )
      *v8 = 1065353216;
    if ( CHID::IsPressed(87, 0) == 1 )
      *v8 = -1082130432;
    if ( CHID::IsPressed(86, 0) == 1 && CHID::IsPressed(87, 0) == 1 )
      *v8 = 0;
  }
  else
  {
    Accelerate = CPad::GetAccelerate(Pad);
    *((float *)this + 619) = (float)(Accelerate - CPad::GetBrake(Pad)) / 255.0;
  }
  v10 = (float *)((char *)this + 2472);
  *((float *)this + 618) = (float)-CPad::GetSteeringLeftRight(Pad) * 0.0078125;
  SteeringUpDown = (CHID *)CPad::GetSteeringUpDown(Pad);
  v12 = (float *)((char *)this + 2468);
  *((float *)this + 617) = (float)(int)SteeringUpDown * 0.0078125;
  InputType = (CHID *)CHID::GetInputType(SteeringUpDown);
  if ( InputType == (CHID *)((char *)&stderr + 2) )
  {
    LODWORD(v35) = 0;
    if ( CHID::IsPressed(8, &v35) == 1 )
      *v12 = *(float *)&v35;
    if ( CHID::IsPressed(6, &v35) == 1 )
      *v12 = -*(float *)&v35;
    if ( CHID::IsPressed(8, 0) == 1 && CHID::IsPressed(6, 0) == 1 )
      *v12 = 0.0;
    InputType = (CHID *)CHID::IsPressed(24, (char *)this + 2472);
    v2.n64_f32[0] = -*v12;
    *v12 = v2.n64_f32[0];
    v3.n64_f32[0] = -*v10;
    *v10 = v3.n64_f32[0];
  }
  else
  {
    v3.n64_f32[0] = *v10;
    v2.n64_f32[0] = *v12;
  }
  v4.n64_u32[0] = 1.0;
  v5.n64_u32[0] = -1.0;
  *(_DWORD *)v12 = vmax_f32(vmin_f32(v2, v4), v5).n64_u32[0];
  *(_DWORD *)v10 = vmax_f32(vmin_f32(v3, v4), v5).n64_u32[0];
  if ( CHID::GetInputType(InputType) != 2 )
  {
    *((_DWORD *)this + 616) = 0;
    if ( CPad::GetTurretLeft(Pad) == 1 && CPad::GetTurretRight(Pad) == 1 )
    {
      v18 = 0;
    }
    else if ( CPad::GetTurretLeft(Pad) == 1 )
    {
      v18 = -1082130432;
    }
    else
    {
      if ( CPad::GetTurretRight(Pad) != 1 )
        goto LABEL_35;
      v18 = 1065353216;
    }
    *((_DWORD *)this + 616) = v18;
    goto LABEL_35;
  }
  v14 = *(float *)&dword_959B00;
  IsPressed = CHID::IsPressed(90, 0);
  v16 = CHID::IsPressed(91, 0);
  v17 = v14 * 0.15;
  if ( IsPressed )
    v17 = -1.0;
  if ( v16 )
    v17 = 1.0;
  *((float *)this + 616) = v17 * (float)((float)((float)((float)unk_6E07DC / 100.0) * 0.5) + 0.5);
LABEL_35:
  if ( CPad::GetHorn(Pad, 1) == 1 && *(float *)(*((_DWORD *)this + 5) + 40) > 0.0 )
  {
    *((_DWORD *)this + 616) = 0;
    v33 = 0.0;
    v34 = 1.0;
    CrossProduct((const CVector *)&v35, (const CVector *)&v33);
    CVector::Normalise((CVector *)&v35);
    v19 = -2.0;
    v20 = (float)((float)((float)(*((float *)this + 18) * *(float *)&v35)
                        + (float)(*((float *)this + 19) * *((float *)&v35 + 1)))
                + (float)(*((float *)this + 20) * v36))
        * *(float *)(*((_DWORD *)this + 227) + 36);
    if ( v20 > 2.0 || (v21 = -2.0, v20 >= -2.0) )
    {
      v21 = 2.0;
      if ( v20 <= 2.0 )
        v21 = (float)((float)((float)(*((float *)this + 18) * *(float *)&v35)
                            + (float)(*((float *)this + 19) * *((float *)&v35 + 1)))
                    + (float)(*((float *)this + 20) * v36))
            * *(float *)(*((_DWORD *)this + 227) + 36);
    }
    *v12 = v21;
    CrossProduct((const CVector *)&v33, (const CVector *)(*((_DWORD *)this + 5) + 16));
    v36 = v34;
    v35 = v33;
    CVector::Normalise((CVector *)&v35);
    v22 = (float)((float)((float)(*((float *)this + 18) * *(float *)&v35)
                        + (float)(*((float *)this + 19) * *((float *)&v35 + 1)))
                + (float)(*((float *)this + 20) * v36))
        * *(float *)(*((_DWORD *)this + 227) + 28);
    v23 = v22 < 2.0;
    if ( v22 <= 2.0 )
      v23 = v22 < -2.0;
    if ( !v23 )
    {
      v19 = 2.0;
      if ( v22 <= 2.0 )
        v19 = (float)((float)((float)(*((float *)this + 18) * *(float *)&v35)
                            + (float)(*((float *)this + 19) * *((float *)&v35 + 1)))
                    + (float)(*((float *)this + 20) * v36))
            * *(float *)(*((_DWORD *)this + 227) + 28);
    }
    *v10 = v19;
  }
  v24 = *((_DWORD *)this + 267);
  *((_DWORD *)this + 294) = 0;
  *((_DWORD *)this + 296) = 0;
  *((_DWORD *)this + 297) = 1065353216;
  *((_DWORD *)this + 267) = v24 & 0xFFFFFFDF;
  if ( *((_WORD *)Pad + 136) )
  {
    PlayerPed = (CPlayerPed *)FindPlayerPed(-1);
    CPlayerPed::KeepAreaAroundPlayerClear(PlayerPed);
    v26 = *((float *)this + 18);
    v27 = *((float *)this + 19);
    v28 = *((float *)this + 20);
    v29 = sqrtf((float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v28 * v28));
    if ( v29 > 0.28 )
    {
      v30 = 0.28 / v29;
      *((float *)this + 18) = v26 * v30;
      *((float *)this + 19) = v27 * v30;
      *((float *)this + 20) = v28 * v30;
    }
  }
  result = (char *)this + 1228;
  if ( *((float *)this + 307) < 250.0 )
  {
    result = (char *)this + 2464;
    v32 = *((float *)this + 616);
    *((_DWORD *)this + 619) = -1110651699;
    *((float *)this + 616) = v32 + 0.5;
  }
  return result;
}


// ============================================================

// Address: 0x572324
// Original: _ZN5CHeli21ProcessFlyingCarStuffEv
// Demangled: CHeli::ProcessFlyingCarStuff(void)
void __fastcall CHeli::ProcessFlyingCarStuff(CHeli *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d1
  float32x2_t v3; // d2
  unsigned int v5; // r0
  float *v6; // r5
  float v7; // s0
  int v8; // r0
  bool v9; // zf
  float *v10; // r0
  float v11; // s2
  float v12; // s0
  float v13; // s2
  int v14; // r0
  bool v15; // zf
  __int64 v16; // r0
  float v17; // s0
  int v18; // r0
  int v19; // r0
  bool v20; // zf
  unsigned int v21; // r0
  bool v22; // zf
  int v23; // r0
  bool v24; // zf
  int v25; // r2
  float *v26; // r3
  float *v27; // r2
  float v28; // s18
  float v29; // s20
  float v30; // s16
  float v31; // s22
  float v32; // s0
  double v33; // [sp+10h] [bp-E0h] BYREF
  float v34; // [sp+18h] [bp-D8h]
  double v35; // [sp+20h] [bp-D0h]
  float v36; // [sp+28h] [bp-C8h]
  _DWORD v37[18]; // [sp+30h] [bp-C0h] BYREF
  double v38; // [sp+78h] [bp-78h] BYREF
  float v39; // [sp+80h] [bp-70h]
  int v40; // [sp+B8h] [bp-38h]
  int v41; // [sp+BCh] [bp-34h]

  v5 = *((unsigned __int8 *)this + 58) >> 3;
  if ( v5 > 8 || ((1 << v5) & 0x109) == 0 )
  {
    if ( (*(_BYTE *)(*((_DWORD *)this + 226) + 207) & 2) != 0 )
    {
      *((_DWORD *)this + 267) &= ~0x10u;
      v10 = (float *)((char *)this + 2144);
      v11 = *((float *)this + 536);
      if ( v11 <= (float)(*(float *)&CTimer::ms_fTimeStep * 0.00055) )
      {
        v12 = 0.0;
        *v10 = 0.0;
      }
      else
      {
        v12 = v11 - (float)(*(float *)&CTimer::ms_fTimeStep * 0.00055);
        *v10 = v12;
        *((_BYTE *)this + 188) = 0;
      }
      v19 = *((__int16 *)this + 19);
      v20 = v19 == 465;
      if ( v19 != 465 )
        v20 = v19 == 501;
      if ( !v20 )
        goto LABEL_57;
    }
    return;
  }
  v6 = (float *)((char *)this + 2144);
  v7 = *((float *)this + 536);
  if ( v7 < 0.22 && !(*((unsigned __int8 *)this + 69) << 31) )
  {
    v8 = *((__int16 *)this + 19);
    v9 = v8 == 501;
    if ( v8 != 501 )
      v9 = v8 == 465;
    if ( v9 )
      v13 = 0.003;
    else
      v13 = 0.001;
    v7 = v13 + v7;
    *v6 = v7;
  }
  if ( v7 > 0.15 )
  {
    if ( (*((_BYTE *)this + 71) & 8) == 0 )
      goto LABEL_21;
    v14 = *((__int16 *)this + 19);
    v15 = v14 == 447;
    if ( v14 != 447 )
      v15 = v14 == 417;
    if ( v15 )
      LODWORD(v16) = 1;
    else
LABEL_21:
      LODWORD(v16) = 0;
    if ( (*((_BYTE *)this + 1072) & 0x80) != 0 )
    {
      CVehicle::FlyingControl(
        (int)this,
        2,
        *((_DWORD *)this + 616),
        *((_DWORD *)this + 617),
        *((float *)this + 618),
        *((float *)this + 619));
    }
    else
    {
      v17 = *((float *)this + 619);
      if ( v17 > 0.0
        || (HIDWORD(v16) = *((unsigned __int8 *)this + 2420) > 3u, !v16)
        || fabsf(*((float *)this + 18)) > 0.02
        || fabsf(*((float *)this + 19)) > 0.02
        || fabsf(*((float *)this + 20)) > 0.02 )
      {
        CVehicle::FlyingControl(
          (int)this,
          6,
          *((_DWORD *)this + 616),
          *((_DWORD *)this + 617),
          *((float *)this + 618),
          v17);
      }
    }
  }
  if ( *v6 > 0.015 && *((_DWORD *)this + 419) )
  {
    v40 = 0;
    v41 = 0;
    CMatrix::Attach();
    v37[0] = 0;
    RwFrameForAllObjects(*((_DWORD *)this + 419), GetCurrentAtomicObjectCB, v37);
    v18 = v37[0];
    if ( v37[0] )
    {
      if ( (*(_BYTE *)(v37[0] + 76) & 2) != 0 )
      {
        _rpAtomicResyncInterpolatedSphere();
        v18 = v37[0];
      }
      if ( *(float *)(v18 + 40) > 0.1 && ((*((unsigned __int8 *)this + 58) >> 3) | 8) == 8 )
        CVehicle::DoBladeCollision();
    }
    v21 = *((unsigned __int8 *)this + 58);
    v22 = v21 >> 3 == 3;
    if ( v21 >> 3 != 3 )
      v22 = v21 >> 3 == 0;
    if ( v22 && *v6 > 0.0075 )
    {
      v2.n64_u32[0] = 1.0;
      v1.n64_f32[0] = *v6 / 0.15;
      v1.n64_u64[0] = vmin_f32(v1, v2).n64_u64[0];
    }
    else if ( (v21 & 0xF8) != 0x10 )
    {
LABEL_52:
      CMatrix::~CMatrix((CMatrix *)&v38);
      goto LABEL_53;
    }
    CWindModifiers::RegisterOne();
    goto LABEL_52;
  }
LABEL_53:
  v23 = *((__int16 *)this + 19);
  v24 = v23 == 465;
  if ( v23 != 465 )
    v24 = v23 == 501;
  if ( !v24 )
  {
    v12 = *v6;
LABEL_57:
    if ( v12 < 0.154 && v12 > 0.0044 && *((_DWORD *)this + 419) )
    {
      v25 = *((_DWORD *)this + 5);
      v26 = (float *)(v25 + 48);
      if ( !v25 )
        v26 = (float *)((char *)this + 4);
      v27 = (float *)(dword_951FBC + 48);
      if ( !dword_951FBC )
        v27 = (float *)&qword_951FAC;
      v28 = *v27 - *v26;
      v29 = v27[1] - v26[1];
      v30 = v27[2] - v26[2];
      v31 = (float)((float)(v28 * v28) + (float)(v29 * v29)) + (float)(v30 * v30);
      if ( v31 < 400.0 && fabsf(*((float *)this + 603) - *((float *)this + 528)) > 0.5236 )
      {
        v40 = 0;
        v41 = 0;
        v37[16] = 0;
        v37[17] = 0;
        CMatrix::Attach();
        v36 = v39;
        v35 = v38;
        Multiply3x3((const CMatrix *)&v33, *((const CVector **)this + 5));
        v1.n64_f32[0] = sqrtf(v31);
        v36 = v34;
        v3.n64_u32[0] = 1008981770;
        v32 = vmax_f32(v1, v3).n64_f32[0];
        v35 = v33;
        if ( fabsf(
               (float)((float)((float)(v28 * (float)(1.0 / v32)) * *(float *)&v33)
                     + (float)((float)(v29 * (float)(1.0 / v32)) * *((float *)&v33 + 1)))
             + (float)((float)(v30 * (float)(1.0 / v32)) * v34)) > 0.95 )
        {
          CAEVehicleAudioEntity::AddAudioEvent((CHeli *)((char *)this + 316), 94, 0.0);
          *((_DWORD *)this + 603) = *((_DWORD *)this + 528);
        }
        CMatrix::~CMatrix((CMatrix *)v37);
        CMatrix::~CMatrix((CMatrix *)&v38);
      }
    }
  }
}


// ============================================================

// Address: 0x572804
// Original: _ZN5CHeli9PreRenderEv
// Demangled: CHeli::PreRender(void)
void __fastcall CHeli::PreRender(CHeli *this)
{
  unsigned __int8 v2; // r2
  CVehicleModelInfo *v3; // r9
  int v4; // r11
  int v5; // r10
  int v6; // lr
  int v7; // r1
  int v8; // r8
  char *v9; // r2
  float *v10; // r5
  int i; // r6
  float v12; // s20
  float v13; // s22
  float v14; // s24
  float v15; // s2
  float v16; // s0
  float v17; // s2
  bool v18; // nf
  int v19; // r1
  bool v20; // zf
  int v21; // r0
  float v22; // s2
  float v23; // s0
  float *v24; // r6
  float v25; // s4
  float v26; // s6
  float v27; // s6
  float *v28; // r8
  float j; // s2
  int v30; // [sp+4h] [bp-ACh]
  int v31; // [sp+8h] [bp-A8h]
  int v32; // [sp+Ch] [bp-A4h]
  double v33; // [sp+10h] [bp-A0h] BYREF
  float v34; // [sp+18h] [bp-98h]
  _BYTE v35[48]; // [sp+20h] [bp-90h] BYREF
  double v36; // [sp+50h] [bp-60h]
  float v37; // [sp+58h] [bp-58h]
  int v38; // [sp+60h] [bp-50h]
  int v39; // [sp+64h] [bp-4Ch]

  CVehicle::PreRender(this);
  v3 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]);
  v38 = 0;
  v39 = 0;
  if ( *((_BYTE *)this + 2597)
    && *((float *)this + 645) > 0.0
    && CClock::GetIsTimeInRange((CClock *)((char *)&word_12 + 1), 6u, v2) == 1 )
  {
    v33 = 128.0;
    v34 = -0.3;
    operator*();
    v4 = *((_DWORD *)this + 642);
    v5 = *((_DWORD *)this + 643);
    v6 = *((_DWORD *)this + 644);
    v7 = CHeli::NumberOfSearchLights;
    v8 = *((_DWORD *)this + 645);
    CHeli::HeliSearchLights[19 * CHeli::NumberOfSearchLights] = v30;
    v9 = (char *)&CHeli::HeliSearchLights[19 * v7];
    *((_WORD *)v9 + 18) = 257;
    *((_DWORD *)v9 + 1) = v31;
    *((_DWORD *)v9 + 2) = v32;
    *((_DWORD *)v9 + 3) = v4;
    *((_DWORD *)v9 + 4) = v5;
    *((_DWORD *)v9 + 5) = v6;
    *((_DWORD *)v9 + 6) = 1101004800;
    *((_DWORD *)v9 + 7) = v8;
    *((_DWORD *)v9 + 8) = (char *)this + 11;
    CHeli::NumberOfSearchLights = v7 + 1;
  }
  CEntity::GetColModel(this);
  if ( *((unsigned __int8 *)this + 1071) << 31 )
  {
    (*(void (__fastcall **)(CHeli *))(*(_DWORD *)this + 212))(this);
    v10 = (float *)((char *)this + 2024);
    for ( i = 0; i != 4; ++i )
    {
      v12 = *v10;
      v13 = v10[41];
      v14 = v10[45];
      CVehicleModelInfo::GetWheelPosn(v3, i, (CVector *)&v33, 1);
      v15 = (float)(v12 - (float)(1.0 - (float)(v13 / v14))) / (float)(1.0 - (float)(1.0 - (float)(v13 / v14)));
      v16 = v34 + *(float *)(*((_DWORD *)this + 226) + 184);
      if ( v15 > 0.0 )
        v16 = v16 - (float)(v15 * v10[41]);
      v17 = v10[25];
      if ( v16 <= v17 )
      {
        v18 = (*((_BYTE *)this + 71) & 4) != 0;
        if ( (*((_BYTE *)this + 71) & 4) != 0 )
          v18 = (*((_BYTE *)this + 914) & 2) != 0;
        if ( !v18 )
          v16 = v17 + (float)((float)(v16 - v17) * 0.75);
      }
      v10[25] = v16;
      ++v10;
    }
  }
  CAutomobile::UpdateWheelMatrix(this, 4, 1);
  CAutomobile::UpdateWheelMatrix(this, 7, 1);
  CAutomobile::UpdateWheelMatrix(this, 2, 1);
  CAutomobile::UpdateWheelMatrix(this, 5, 1);
  v19 = *((__int16 *)this + 19);
  v20 = v19 == 465;
  if ( v19 != 465 )
    v20 = v19 == 501;
  v21 = (unsigned __int16)v19;
  if ( !v20 )
  {
    CAutomobile::DoHeliDustEffect(this, 1.0, 1.0);
    v21 = *((unsigned __int16 *)this + 19);
  }
  if ( (unsigned int)((__int16)v21 - 469) <= 0x1C && ((1 << (v21 + 43)) & 0x100C0001) != 0 || (__int16)v21 == 447 )
  {
    v22 = *((float *)this + 536);
    v23 = v22 * 1.66;
  }
  else
  {
    v22 = *((float *)this + 536);
    v23 = v22;
  }
  v24 = (float *)((char *)this + 2484);
  v25 = *(float *)&CTimer::ms_fTimeStep;
  v26 = *((float *)this + 621) - (float)(v23 * *(float *)&CTimer::ms_fTimeStep);
  *((float *)this + 621) = v26;
  if ( v26 < -6.2832 )
  {
    do
      v26 = v26 + 6.2832;
    while ( v26 < -6.2832 );
    *v24 = v26;
  }
  v27 = 2.3;
  v28 = (float *)((char *)this + 2488);
  if ( v21 == 417 )
    v27 = 2.0;
  for ( j = *v28 - (float)(v25 * (float)(v22 * v27)); j > 6.2832; j = j + -6.2832 )
    ;
  *v28 = j;
  if ( *((_DWORD *)this + 419) )
  {
    CMatrix::Attach();
    v34 = v37;
    v33 = v36;
    CMatrix::SetRotateZ((CMatrix *)v35, *v24);
    *(float *)&v36 = *(float *)&v33 + *(float *)&v36;
    *((float *)&v36 + 1) = *((float *)&v33 + 1) + *((float *)&v36 + 1);
    v37 = v34 + v37;
    CMatrix::UpdateRW((CMatrix *)v35);
  }
  if ( *((_DWORD *)this + 420) )
  {
    CMatrix::Attach();
    v34 = v37;
    v33 = v36;
    CMatrix::SetRotateZ((CMatrix *)v35, *v24);
    *(float *)&v36 = *(float *)&v33 + *(float *)&v36;
    *((float *)&v36 + 1) = *((float *)&v33 + 1) + *((float *)&v36 + 1);
    v37 = v34 + v37;
    CMatrix::UpdateRW((CMatrix *)v35);
  }
  if ( *((_DWORD *)this + 421) )
  {
    CMatrix::Attach();
    v34 = v37;
    v33 = v36;
    CMatrix::SetRotateX((CMatrix *)v35, *v28);
    *(float *)&v36 = *(float *)&v33 + *(float *)&v36;
    *((float *)&v36 + 1) = *((float *)&v33 + 1) + *((float *)&v36 + 1);
    v37 = v34 + v37;
    CMatrix::UpdateRW((CMatrix *)v35);
  }
  if ( *((_DWORD *)this + 422) )
  {
    CMatrix::Attach();
    v34 = v37;
    v33 = v36;
    CMatrix::SetRotateX((CMatrix *)v35, *v28);
    *(float *)&v36 = *(float *)&v33 + *(float *)&v36;
    *((float *)&v36 + 1) = *((float *)&v33 + 1) + *((float *)&v36 + 1);
    v37 = v34 + v37;
    CMatrix::UpdateRW((CMatrix *)v35);
  }
  CShadows::StoreShadowForVehicle(this);
  CMatrix::~CMatrix((CMatrix *)v35);
}


// ============================================================

// Address: 0x572c50
// Original: _ZN5CHeli18AddHeliSearchLightERK7CVectorS2_ffjhh
// Demangled: CHeli::AddHeliSearchLight(CVector const&,CVector const&,float,float,uint,uchar,uchar)
int __fastcall CHeli::AddHeliSearchLight(
        CHeli *this,
        const CVector *a2,
        const CVector *a3,
        float a4,
        float a5,
        char a6,
        unsigned __int8 a7,
        unsigned __int8 a8)
{
  int v8; // lr
  __int64 v9; // kr00_8
  int v10; // r0
  _DWORD *v11; // r5
  __int64 v12; // kr08_8
  int result; // r0

  v8 = CHeli::NumberOfSearchLights;
  v9 = *(_QWORD *)this;
  v10 = *((_DWORD *)this + 2);
  v11 = &CHeli::HeliSearchLights[19 * CHeli::NumberOfSearchLights];
  *(_QWORD *)v11 = v9;
  v11[2] = v10;
  v12 = *(_QWORD *)a2;
  v11[5] = *((_DWORD *)a2 + 2);
  *(_QWORD *)(v11 + 3) = v12;
  v11[6] = a3;
  *((float *)v11 + 7) = a4;
  *((float *)v11 + 8) = a5;
  result = v8 + 1;
  *((_BYTE *)v11 + 36) = a6;
  *((_BYTE *)v11 + 37) = a7;
  CHeli::NumberOfSearchLights = v8 + 1;
  return result;
}


// ============================================================

// Address: 0x572cbc
// Original: _ZN5CHeli6RenderEv
// Demangled: CHeli::Render(void)
int __fastcall CHeli::Render(CHeli *this)
{
  unsigned __int8 v2; // r3
  unsigned __int8 v3; // r1
  CVehicleModelInfo *v4; // r0
  unsigned __int8 v5; // r2
  unsigned __int8 v6; // lr
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  _DWORD v12[3]; // [sp+4h] [bp-Ch] BYREF

  gVehicleDistanceFromCamera = gVehicleDistanceFromCamera * 0.6;
  v2 = *((_BYTE *)this + 1082);
  v3 = *((_BYTE *)this + 1080);
  v4 = (CVehicleModelInfo *)LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]);
  v5 = *((_BYTE *)this + 1081);
  v6 = *((_BYTE *)this + 1083);
  *((_DWORD *)this + 312) = CTimer::m_snTimeInMilliseconds + 3000;
  CVehicleModelInfo::SetVehicleColour(v4, v3, v5, v2, v6);
  v12[0] = 0;
  v7 = *((_DWORD *)this + 419);
  if ( v7 )
  {
    RwFrameForAllObjects(v7, GetCurrentAtomicObjectCB, v12);
    if ( v12[0] )
      CVehicle::SetComponentAtomicAlpha(v12[0], 255);
  }
  v12[0] = 0;
  v8 = *((_DWORD *)this + 421);
  if ( v8 )
  {
    RwFrameForAllObjects(v8, GetCurrentAtomicObjectCB, v12);
    if ( v12[0] )
      CVehicle::SetComponentAtomicAlpha(v12[0], 255);
  }
  v12[0] = 0;
  v9 = *((_DWORD *)this + 420);
  if ( v9 )
  {
    RwFrameForAllObjects(v9, GetCurrentAtomicObjectCB, v12);
    if ( v12[0] )
      CVehicle::SetComponentAtomicAlpha(v12[0], 0);
  }
  v12[0] = 0;
  v10 = *((_DWORD *)this + 422);
  if ( v10 )
  {
    RwFrameForAllObjects(v10, GetCurrentAtomicObjectCB, v12);
    if ( v12[0] )
      CVehicle::SetComponentAtomicAlpha(v12[0], 0);
  }
  return CEntity::Render(this);
}


// ============================================================

// Address: 0x572dc0
// Original: _ZN5CHeli3FixEv
// Demangled: CHeli::Fix(void)
unsigned int __fastcall CHeli::Fix(CHeli *this)
{
  unsigned int result; // r0

  CDamageManager::ResetDamageStatus((CHeli *)((char *)this + 1460));
  result = *((_DWORD *)this + 267) & 0xFFFEFFFF;
  *((_DWORD *)this + 267) = result;
  return result;
}


// ============================================================

// Address: 0x572ddc
// Original: _ZN5CHeli20SetupDamageAfterLoadEv
// Demangled: CHeli::SetupDamageAfterLoad(void)
int __fastcall CHeli::SetupDamageAfterLoad(int this)
{
  *(_DWORD *)(this + 1068) &= ~0x10000u;
  return this;
}


// ============================================================

// Address: 0x572dec
// Original: _ZN5CHeli9InitHelisEv
// Demangled: CHeli::InitHelis(void)
int __fastcall CHeli::InitHelis(CHeli *this)
{
  int result; // r0

  *(_QWORD *)CHeli::HeliSearchLights = 0LL;
  *(_QWORD *)&CHeli::HeliSearchLights[2] = 0LL;
  *(_QWORD *)&CHeli::HeliSearchLights[4] = 0LL;
  *(_QWORD *)&CHeli::HeliSearchLights[6] = 0LL;
  *(_QWORD *)&CHeli::HeliSearchLights[23] = 0LL;
  *(_QWORD *)&CHeli::HeliSearchLights[25] = 0LL;
  *(_QWORD *)&CHeli::HeliSearchLights[19] = 0LL;
  *(_QWORD *)&CHeli::HeliSearchLights[21] = 0LL;
  CHeli::pHelis = 0;
  dword_A12CE0 = 0;
  CHeli::NumberOfSearchLights = 0;
  result = 1;
  CHeli::bPoliceHelisAllowed = 1;
  return result;
}


// ============================================================

// Address: 0x572e4c
// Original: _ZN5CHeli11UpdateHelisEv
// Demangled: CHeli::UpdateHelis(void)
int __fastcall CHeli::UpdateHelis(CHeli *this)
{
  int v1; // r4
  CWanted *PlayerWanted; // r0
  int v3; // r0
  unsigned __int8 v4; // r10
  int v5; // r9
  int v6; // r0
  _BYTE *v7; // r1
  int v8; // r0
  int v9; // r0
  CPed *v10; // r5
  int v11; // r2
  CHeli *PlayerPed; // r0
  bool v13; // r2
  CEntity *Heli; // r0
  int *v15; // r1
  bool v16; // nf
  int result; // r0
  bool v18; // nf
  int v19; // r1
  bool v20; // zf
  bool v21; // zf
  CEntity *v22; // r1
  int v23; // r2
  float32x2_t v24; // d16
  unsigned __int64 v25; // d1
  CEntity *v26; // r1
  int v27; // r2
  float32x2_t v28; // d16
  unsigned __int64 v29; // d1
  int v30; // [sp+4h] [bp-2Ch]
  float v31; // [sp+8h] [bp-28h] BYREF
  float32x2_t v32; // [sp+Ch] [bp-24h]

  v1 = 0;
  CHeli::NumberOfSearchLights = 0;
  PlayerWanted = (CWanted *)FindPlayerWanted(-1);
  v3 = CWanted::NumOfHelisRequired(PlayerWanted);
  if ( CHeli::pHelis )
  {
    if ( *(_WORD *)(CHeli::pHelis + 38) == 497 )
    {
      v4 = 0;
      if ( (*(_BYTE *)(CHeli::pHelis + 71) & 0x20) == 0 )
        v4 = (*(_BYTE *)(CHeli::pHelis + 1071) & 0x40) == 0;
    }
    else
    {
      v4 = 0;
    }
    v1 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( dword_A12CE0 )
  {
    v5 = v3;
    v30 = v1 + 1;
    if ( *(_WORD *)(dword_A12CE0 + 38) == 497 && (*(_BYTE *)(dword_A12CE0 + 71) & 0x20) == 0 )
      v4 |= (*(_BYTE *)(dword_A12CE0 + 1071) & 0x40) == 0;
  }
  else
  {
    v30 = v1;
    v5 = v3;
  }
  v6 = CCullZones::PlayerNoRain((CCullZones *)CWeather::OldWeatherType);
  v7 = (_BYTE *)CHeli::pHelis;
  v8 = v6 | (CGame::currArea != 0) | (CHeli::bPoliceHelisAllowed == 0);
  if ( CHeli::pHelis )
    v4 &= *(unsigned __int16 *)(CHeli::pHelis + 38) != 488;
  v9 = v8 | (CWeather::NewWeatherType == 19 || CWeather::OldWeatherType == 19);
  if ( dword_A12CE0 )
    v4 &= *(unsigned __int16 *)(dword_A12CE0 + 38) != 488;
  if ( v9 )
    v5 = 0;
  v10 = (CPed *)(v4 & (CWanted::bUseNewsHeliInAdditionToPolice != 0));
  if ( (v4 & (CWanted::bUseNewsHeliInAdditionToPolice != 0)) != 0 )
    v11 = 4888;
  else
    v11 = 4978;
  if ( LOBYTE(CStreaming::ms_aInfoForModel[v11]) == 1
    && CTimer::m_snTimeInMilliseconds > (unsigned int)CHeli::TestForNewRandomHelisTimer )
  {
    CHeli::TestForNewRandomHelisTimer = CTimer::m_snTimeInMilliseconds + 15000;
    if ( v30 < v5 )
    {
      PlayerPed = (CHeli *)FindPlayerPed(-1);
      Heli = (CEntity *)CHeli::GenerateHeli(PlayerPed, v10, v13);
      if ( CHeli::pHelis )
      {
        if ( dword_A12CE0 )
        {
LABEL_30:
          v7 = (_BYTE *)CHeli::pHelis;
          goto LABEL_31;
        }
        dword_A12CE0 = (int)Heli;
        v15 = &dword_A12CE0;
      }
      else
      {
        v15 = &CHeli::pHelis;
        CHeli::pHelis = (int)Heli;
      }
      CEntity::RegisterReference(Heli, (CEntity **)v15);
      goto LABEL_30;
    }
  }
LABEL_31:
  if ( !v7 )
    goto LABEL_38;
  v16 = (v7[71] & 0x20) != 0;
  if ( (v7[71] & 0x20) == 0 )
    v16 = (v7[1071] & 0x40) != 0;
  if ( v16 )
  {
    v7[958] = 42;
LABEL_37:
    CHeli::pHelis = 0;
    goto LABEL_38;
  }
  if ( v7[958] == 42 )
  {
    FindPlayerCoors((int)&v31);
    v22 = *(CEntity **)(CHeli::pHelis + 20);
    v23 = (int)v22 + 48;
    if ( !v22 )
      v23 = CHeli::pHelis + 4;
    v24.n64_u64[0] = vsub_f32(v32, *(float32x2_t *)(v23 + 4)).n64_u64[0];
    v25 = vmul_f32(v24, v24).n64_u64[0];
    if ( fabsf(
           sqrtf(
             (float)((float)((float)(v31 - *(float *)v23) * (float)(v31 - *(float *)v23)) + *(float *)&v25)
           + *((float *)&v25 + 1))) > 170.0 )
    {
      CWorld::Remove((CWorld *)CHeli::pHelis, v22);
      if ( CHeli::pHelis )
        (*(void (__fastcall **)(int))(*(_DWORD *)CHeli::pHelis + 4))(CHeli::pHelis);
      goto LABEL_37;
    }
  }
LABEL_38:
  result = dword_A12CE0;
  if ( dword_A12CE0 )
  {
    v18 = (*(_BYTE *)(dword_A12CE0 + 71) & 0x20) != 0;
    if ( (*(_BYTE *)(dword_A12CE0 + 71) & 0x20) == 0 )
      v18 = (*(_BYTE *)(dword_A12CE0 + 1071) & 0x40) != 0;
    if ( v18 )
    {
      *(_BYTE *)(dword_A12CE0 + 958) = 42;
LABEL_44:
      result = 0;
      dword_A12CE0 = 0;
      goto LABEL_46;
    }
    if ( *(_BYTE *)(dword_A12CE0 + 958) == 42 )
    {
      FindPlayerCoors((int)&v31);
      result = dword_A12CE0;
      v26 = *(CEntity **)(dword_A12CE0 + 20);
      v27 = (int)v26 + 48;
      if ( !v26 )
        v27 = dword_A12CE0 + 4;
      v28.n64_u64[0] = vsub_f32(v32, *(float32x2_t *)(v27 + 4)).n64_u64[0];
      v29 = vmul_f32(v28, v28).n64_u64[0];
      if ( fabsf(
             sqrtf(
               (float)((float)((float)(v31 - *(float *)v27) * (float)(v31 - *(float *)v27)) + *(float *)&v29)
             + *((float *)&v29 + 1))) > 170.0 )
      {
        CWorld::Remove((CWorld *)dword_A12CE0, v26);
        if ( dword_A12CE0 )
          (*(void (__fastcall **)(int))(*(_DWORD *)dword_A12CE0 + 4))(dword_A12CE0);
        goto LABEL_44;
      }
    }
  }
  else
  {
    result = 0;
  }
LABEL_46:
  v19 = CHeli::pHelis;
  v20 = CHeli::pHelis == 0;
  if ( CHeli::pHelis )
    v20 = *(_BYTE *)(CHeli::pHelis + 958) == 42;
  if ( !v20 )
  {
    if ( v5 < 1 )
    {
      *(_DWORD *)(CHeli::pHelis + 2500) = 1120403456;
      *(_BYTE *)(v19 + 958) = 42;
      *(_DWORD *)(v19 + 2492) = 1120403456;
    }
    else
    {
      --v5;
    }
  }
  v21 = result == 0;
  if ( result )
    v21 = *(_BYTE *)(result + 958) == 42;
  if ( !v21 && v5 <= 0 )
  {
    *(_DWORD *)(result + 2500) = 1120403456;
    *(_BYTE *)(result + 958) = 42;
    *(_DWORD *)(result + 2492) = 1120403456;
  }
  return result;
}


// ============================================================

// Address: 0x573260
// Original: _ZN5CHeli12GenerateHeliEP4CPedb
// Demangled: CHeli::GenerateHeli(CPed *,bool)
CAutomobile *__fastcall CHeli::GenerateHeli(CHeli *this, CPed *a2, bool a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d2
  float32x2_t v5; // d4
  float32x2_t v6; // d9
  CAutomobile *v9; // r0
  CAutomobile *v10; // r4
  int v11; // r3
  char v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // r0
  float *v16; // r11
  float *v17; // r1
  int v18; // r0
  float v19; // s22
  float v20; // s24
  float v21; // s18
  float v22; // s16
  float v23; // r5
  float v24; // r2
  float v25; // s2
  float v26; // r6
  float v27; // s0
  int v28; // r0
  float *v29; // r1
  float v30; // s0
  int v31; // r0
  float v32; // r0
  float v33; // r2
  _DWORD *v34; // r0
  char v35; // r1
  int v36; // r5
  float v37; // r6
  float v38; // r0
  CEntity *v39; // r1

  v9 = (CAutomobile *)CVehicle::operator new((CVehicle *)&elf_hash_bucket[588], (unsigned int)a2);
  v10 = v9;
  if ( a2 == (CPed *)((char *)&stderr + 1) )
    CAutomobile::CAutomobile(v9, 488, 4u, 1u);
  else
    CAutomobile::CAutomobile(v9, 497, 4u, 1u);
  *((_DWORD *)v10 + 361) = 3;
  *((_DWORD *)v10 + 645) = 0;
  *(_DWORD *)((char *)v10 + 2510) = 0;
  v11 = *((_DWORD *)v10 + 17);
  *(_QWORD *)((char *)v10 + 2476) = 0LL;
  *(_QWORD *)((char *)v10 + 2484) = 0LL;
  v12 = *((_BYTE *)v10 + 2460);
  *((_QWORD *)v10 + 308) = 0LL;
  *((_QWORD *)v10 + 309) = 0LL;
  *(_QWORD *)((char *)v10 + 2492) = 0x4120000041200000LL;
  *(_QWORD *)((char *)v10 + 2500) = 1092616192LL;
  *((_BYTE *)v10 + 2509) = 4;
  *((_BYTE *)v10 + 2460) = v12 & 0xFC;
  *((_DWORD *)v10 + 17) = v11 | 0x1000000;
  *(_DWORD *)v10 = &off_66DB44;
  v13 = CTimer::m_snTimeInMilliseconds;
  *(_QWORD *)((char *)v10 + 2548) = 0LL;
  *(_QWORD *)((char *)v10 + 2556) = 0LL;
  *(_QWORD *)((char *)v10 + 2532) = 0LL;
  *(_QWORD *)((char *)v10 + 2540) = 0LL;
  *(_QWORD *)((char *)v10 + 2516) = 0LL;
  *(_QWORD *)((char *)v10 + 2524) = 0LL;
  *((_DWORD *)v10 + 646) = 0;
  *((_DWORD *)v10 + 641) = v13;
  *((_DWORD *)v10 + 647) = v13;
  *((_BYTE *)v10 + 995) = 10;
  *((_DWORD *)v10 + 648) = 0;
  v14 = *((_DWORD *)v10 + 268);
  *((_BYTE *)v10 + 2596) = 16;
  *((_BYTE *)v10 + 2508) = 0;
  *((_BYTE *)v10 + 2597) = 0;
  *((_DWORD *)v10 + 268) = v14 | 0x40;
  v15 = rand();
  v16 = (float *)((char *)this + 4);
  v17 = (float *)((char *)this + 4);
  *((float *)v10 + 650) = (float)((float)((float)v15 * 4.6566e-10) * 6.0) + 2.0;
  v18 = *((_DWORD *)this + 5);
  if ( v18 )
    v17 = (float *)(v18 + 48);
  v19 = *v17;
  v20 = v17[1];
  v21 = v17[2];
  v22 = (float)(unsigned __int8)rand() * 0.024531;
  v23 = cosf(v22);
  v3.n64_f32[0] = v20 + (float)(sinf(v22) * 250.0);
  if ( v3.n64_f32[0] > 3000.0
    || (v25 = v19 + (float)(v23 * 250.0), v25 < -3000.0)
    || v25 > 3000.0
    || v3.n64_f32[0] < -3000.0 )
  {
    v22 = v22 + 3.1416;
    v26 = cosf(v22);
    v27 = sinf(v22);
    v28 = *((_DWORD *)this + 5);
    v29 = (float *)((char *)this + 4);
    v30 = v27 * 250.0;
    if ( v28 )
      v29 = (float *)(v28 + 48);
    v21 = v29[2];
    v3.n64_f32[0] = v29[1] + v30;
    v25 = *v29 + (float)(v26 * 250.0);
  }
  if ( sqrtf(
         (float)((float)(v25 + 2322.0) * (float)(v25 + 2322.0))
       + (float)((float)(v3.n64_f32[0] + 1653.0) * (float)(v3.n64_f32[0] + 1653.0))) >= 350.0 )
  {
    v6.n64_f32[0] = v21 + 50.0;
  }
  else
  {
    v31 = *((_DWORD *)this + 5);
    v5.n64_u32[0] = 1141637120;
    if ( v31 )
      v16 = (float *)(v31 + 48);
    v25 = *v16;
    v4.n64_f32[0] = v16[2] + 200.0;
    v3.n64_f32[0] = v16[1];
    v6.n64_u64[0] = vmax_f32(v4, v5).n64_u64[0];
  }
  v32 = COERCE_FLOAT(CWorld::FindGroundZForCoord((CWorld *)LODWORD(v25), v3.n64_f32[0], v24));
  v33 = v3.n64_f32[0];
  v3.n64_f32[0] = v32 + 20.0;
  CMatrix::SetTranslate(*((CMatrix **)v10 + 5), v25, v33, vmax_f32(v6, v3).n64_f32[0]);
  *((_BYTE *)v10 + 58) = *((_BYTE *)v10 + 58) & 7 | 0x18;
  *((_DWORD *)v10 + 267) |= 8u;
  if ( a2 == (CPed *)((char *)&stderr + 1) )
  {
    *((_BYTE *)v10 + 958) = 41;
    *((_DWORD *)v10 + 264) = FindPlayerPed(-1);
    v34 = (_DWORD *)((char *)v10 + 1056);
    v35 = 35;
  }
  else
  {
    v35 = 70;
    *((_BYTE *)v10 + 958) = 40;
    v34 = (_DWORD *)((char *)v10 + 1056);
  }
  *((_DWORD *)v10 + 623) = 1101004800;
  *((_BYTE *)v10 + 980) = v35;
  *((_DWORD *)v10 + 625) = 1094713344;
  *v34 = this;
  if ( a2 == (CPed *)((char *)&stderr + 1) )
  {
    *((_DWORD *)v10 + 623) = 1106247680;
    *((_DWORD *)v10 + 625) = 1104674816;
  }
  v36 = *((_DWORD *)v10 + 5);
  *((_DWORD *)v10 + 536) = 1042871747;
  *(_DWORD *)(v36 + 8) = 0;
  *(_DWORD *)(v36 + 24) = 0;
  *(_DWORD *)(v36 + 32) = 0;
  *(_DWORD *)(v36 + 36) = 0;
  *(_DWORD *)(v36 + 40) = 1065353216;
  v37 = cosf(v22 + 3.1416);
  *(_DWORD *)(v36 + 4) = LODWORD(v37) ^ 0x80000000;
  v38 = sinf(v22 + 3.1416);
  *(float *)v36 = v38;
  *(float *)(v36 + 16) = v37;
  *(float *)(v36 + 20) = v38;
  CWorld::Add(v10, v39);
  CVehicle::SetUpDriver(v10, -1, 0, 0);
  return v10;
}


// ============================================================

// Address: 0x573630
// Original: _ZN5CHeli25RenderAllHeliSearchLightsEv
// Demangled: CHeli::RenderAllHeliSearchLights(void)
int __fastcall CHeli::RenderAllHeliSearchLights(CHeli *this)
{
  int result; // r0
  int v2; // r5

  result = CHeli::NumberOfSearchLights;
  if ( CHeli::NumberOfSearchLights )
  {
    v2 = 0;
    do
    {
      CHeli::SearchLightCone();
      result = (unsigned __int8)++v2;
    }
    while ( CHeli::NumberOfSearchLights > (unsigned int)(unsigned __int8)v2 );
  }
  return result;
}


// ============================================================

// Address: 0x5736d0
// Original: _ZN5CHeli15SearchLightConeEi7CVectorS0_ffhhPS0_S1_S1_bffff
// Demangled: CHeli::SearchLightCone(int,CVector,CVector,float,float,uchar,uchar,CVector*,CVector*,CVector*,bool,float,float,float,float)
void *__fastcall CHeli::SearchLightCone(
        CCoronas *a1,
        float a2,
        unsigned __int64 a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        void *a10,
        int a11,
        float *a12,
        float *a13,
        int a14,
        float a15)
{
  int32x2_t v15; // d1
  float32x2_t v16; // d3
  int32x2_t v17; // d11
  float32x2_t v18; // d13
  float32x2_t v20; // d14
  float v21; // s24
  float32x2_t v22; // d8
  float v23; // s18
  float *v24; // r2
  float v25; // s4
  float v26; // s6
  float v27; // s0
  float32x2_t v28; // d15
  int v29; // r10
  float v30; // s21
  float32x2_t v31; // d8
  float32x2_t v32; // d14
  int v33; // r9
  float v34; // r4
  float v35; // r0
  float32x2_t v36; // d16
  float32x2_t v37; // d0
  float32x2_t v38; // d17
  float32x2_t v39; // d5
  float32x2_t v40; // d9
  float v41; // s2
  float v42; // s12
  float v43; // s24
  float v44; // s6
  float32x2_t v45; // d2
  float *v46; // r0
  float32x2_t v47; // d16
  unsigned __int64 v48; // d6
  int *v49; // r0
  int v50; // r0
  int v51; // r2
  int v52; // r1
  _WORD *v53; // r6
  char *v54; // r2
  int v55; // r1
  float *v56; // r3
  float *v57; // r6
  int v58; // r2
  int *v59; // r0
  float v60; // s2
  float v61; // s4
  unsigned __int64 v62; // d16
  float v63; // s2
  float v64; // s14
  float v65; // s6
  float v66; // s0
  float v67; // s8
  float v68; // s4
  float v69; // s10
  void *result; // r0
  float v71; // s0
  int v72; // s6
  float v73; // s4
  float v74; // s2
  float32x2_t *v75; // r2
  float32x2_t v76; // d16
  unsigned __int64 v77; // d4
  float v78; // s8
  bool v79; // [sp+44h] [bp-3FCh]
  float v80; // [sp+7Ch] [bp-3C4h] BYREF
  unsigned __int64 v81; // [sp+80h] [bp-3C0h]
  float v82; // [sp+88h] [bp-3B8h] BYREF
  float32x2_t v83; // [sp+8Ch] [bp-3B4h]
  float v84; // [sp+94h] [bp-3ACh] BYREF
  float32x2_t v85; // [sp+98h] [bp-3A8h]
  double v86; // [sp+A0h] [bp-3A0h] BYREF
  float v87; // [sp+A8h] [bp-398h]
  float v88[3]; // [sp+ACh] [bp-394h] BYREF
  float v89; // [sp+B8h] [bp-388h] BYREF
  float v90; // [sp+BCh] [bp-384h]
  float v91; // [sp+C0h] [bp-380h]
  char v92[4]; // [sp+C4h] [bp-37Ch] BYREF
  double v93; // [sp+C8h] [bp-378h] BYREF
  float v94; // [sp+D0h] [bp-370h]
  float v95; // [sp+F4h] [bp-34Ch] BYREF
  unsigned __int64 v96; // [sp+F8h] [bp-348h]
  _DWORD v97[82]; // [sp+100h] [bp-340h] BYREF
  float v98[82]; // [sp+248h] [bp-1F8h] BYREF
  _DWORD v99[3]; // [sp+390h] [bp-B0h] BYREF
  int v100; // [sp+39Ch] [bp-A4h] BYREF
  float v101[3]; // [sp+3A8h] [bp-98h] BYREF
  float v102[3]; // [sp+3B4h] [bp-8Ch] BYREF
  float32x2_t v103; // [sp+3C0h] [bp-80h] BYREF
  float v104; // [sp+3C8h] [bp-78h]
  float v105; // [sp+3D0h] [bp-70h] BYREF
  float32x2_t v106; // [sp+3D4h] [bp-6Ch]

  v106.n64_u64[0] = a3;
  v105 = a2;
  *(float *)&v96 = a5 - *(float *)&a3;
  v95 = a4 - a2;
  *((float *)&v96 + 1) = a6 - *((float *)&a3 + 1);
  CVector::Normalise((CVector *)&v95);
  v103.n64_f32[0] = (float)(v95 * 3.0) + a4;
  v103.n64_f32[1] = (float)(*(float *)&v96 * 3.0) + a5;
  v104 = (float)(*((float *)&v96 + 1) * 3.0) + a6;
  if ( CWorld::ProcessLineOfSight((int)&v105, (int)&v103, (int)&v93, (int)v92, 1, 0, 0, 0, 0, 0, 0, 0) == 1 )
  {
    v104 = v94;
    v103.n64_f64[0] = v93;
  }
  v17.n64_f32[0] = a15;
  v20.n64_u64[0] = v96;
  v21 = v95;
  v22.n64_u64[0] = v106.n64_u64[0];
  v23 = v105;
  v24 = (float *)(dword_951FBC + 48);
  if ( !dword_951FBC )
    v24 = (float *)&qword_951FAC;
  v15.n64_f32[0] = v24[1] - v106.n64_f32[0];
  v25 = v24[2] - v106.n64_f32[1];
  v89 = *v24 - v105;
  v90 = v15.n64_f32[0];
  v91 = v25;
  CVector::Normalise((CVector *)&v89);
  v18.n64_u32[0] = 0;
  v16.n64_f32[0] = (float)((float)(v95 * v89) + (float)(*(float *)&v96 * v90)) + (float)(*((float *)&v96 + 1) * v91);
  v26 = vmax_f32(v16, v18).n64_f32[0];
  v88[0] = (float)(v89 * 15.0) + v105;
  v88[1] = (float)(v90 * 15.0) + v106.n64_f32[0];
  v88[2] = (float)(v91 * 15.0) + v106.n64_f32[1];
  v27 = v26 * (float)(v26 * (float)(v26 * (float)(v26 * (float)(v26 * v26))));
  CCoronas::RegisterCorona(
    a1,
    0,
    (CEntity *)&dword_C8,
    0xC8u,
    0xFFu,
    (unsigned int)(float)(v27 * 255.0),
    (unsigned __int8)v88,
    COERCE_CONST_CVECTOR_(v27 * 20.0),
    100.0,
    0.0,
    0,
    1u,
    0,
    0,
    0.0,
    0.0,
    1.5,
    0.0,
    15.0,
    0.0,
    0,
    v79);
  v28.n64_u64[0] = vdup_lane_s32(v17, 0).n64_u64[0];
  v15.n64_f32[0] = a7;
  v29 = 0;
  TempBufferVerticesStored = 0;
  TempBufferIndicesStored = 0;
  v30 = (float)(v21 * 100.0) + v23;
  v31.n64_u64[0] = vadd_f32(vmul_f32(v20, (float32x2_t)0x42C8000042C80000LL), v22).n64_u64[0];
  v32.n64_u64[0] = vdup_lane_s32(v15, 0).n64_u64[0];
  do
  {
    v33 = 0;
    v86 = 0.0;
    v87 = 1.0;
    CrossProduct((const CVector *)&v84, (const CVector *)&v95);
    CVector::Normalise((CVector *)&v84);
    CrossProduct((const CVector *)&v82, (const CVector *)&v84);
    CVector::Normalise((CVector *)&v82);
    v34 = sinf((float)v29 * 0.15708);
    v35 = cosf((float)v29 * 0.15708);
    v36.n64_u64[0] = vmul_n_f32(v85, v34).n64_u64[0];
    v37.n64_u64[0] = v106.n64_u64[0];
    v38.n64_u64[0] = vmul_n_f32(v83, v35).n64_u64[0];
    v39.n64_u64[0] = vadd_f32(vadd_f32(v31, vmul_f32(v32, v36)), vmul_f32(v32, v38)).n64_u64[0];
    v40.n64_u64[0] = vadd_f32(vadd_f32(vmul_f32(v28, v36), v106), vmul_f32(v28, v38)).n64_u64[0];
    v41 = v105;
    v42 = (float)(v40.n64_f32[1] - v104) / (float)(v40.n64_f32[1] - v39.n64_f32[1]);
    v43 = (float)((float)((float)(v34 * v84) * a15) + v105) + (float)((float)(v35 * v82) * a15);
    v44 = v43
        + (float)((float)((float)((float)(v30 + (float)((float)(v34 * v84) * a7)) + (float)((float)(v35 * v82) * a7))
                        - v43)
                * v42);
    v45.n64_u64[0] = vadd_f32(v40, vmul_n_f32(vsub_f32(v39, v40), v42)).n64_u64[0];
    v46 = (float *)v99;
    switch ( v29 )
    {
      case 0:
        goto LABEL_10;
      case 10:
        v33 = 1;
        v46 = (float *)&v100;
        goto LABEL_10;
      case 20:
        v33 = 2;
        v46 = v101;
        goto LABEL_10;
      case 30:
        v46 = v102;
        v33 = 3;
LABEL_10:
        *v46 = v44;
        *(float32x2_t *)&v99[3 * v33 + 1] = v45;
        break;
      default:
        break;
    }
    v47.n64_u64[0] = vsub_f32(v45, v40).n64_u64[0];
    v48 = vmul_f32(v47, v47).n64_u64[0];
    if ( sqrtf(*((float *)&v48 + 1) + (float)((float)((float)(v44 - v43) * (float)(v44 - v43)) + *(float *)&v48)) > 100.0 )
    {
      v81 = v47.n64_u64[0];
      v80 = v44 - v43;
      CVector::Normalise((CVector *)&v80);
      v45.n64_f32[1] = v40.n64_f32[1] + (float)(*((float *)&v81 + 1) * 100.0);
      v44 = v43 + (float)(v80 * 100.0);
      v37.n64_u64[0] = v106.n64_u64[0];
      v45.n64_f32[0] = v40.n64_f32[0] + (float)(*(float *)&v81 * 100.0);
      v41 = v105;
    }
    v37.n64_f32[0] = v40.n64_f32[0] - v37.n64_f32[0];
    v49 = &TempVertexBuffer[9 * TempBufferVerticesStored];
    *((float *)v49 + 9) = v44;
    *((float32x2_t *)v49 + 5) = v45;
    v49[2] = v40.n64_i32[1];
    *(float *)v49 = v43;
    v49[1] = v40.n64_u32[0];
    v40.n64_u32[0] = CCustomBuildingDNPipeline::m_fDNBalanceParam;
    LODWORD(v81) = v37.n64_u32[0];
    v80 = v43 - v41;
    *((float *)&v81 + 1) = v40.n64_f32[1] - v37.n64_f32[1];
    CVector::Normalise((CVector *)&v80);
    v50 = TempBufferVerticesStored;
    v51 = TempBufferVerticesStored + 1;
    v37.n64_f32[0] = fabsf((float)((float)(v89 * v80) + (float)(v90 * *(float *)&v81)) + (float)(v91
                                                                                               * *((float *)&v81 + 1)));
    v98[TempBufferVerticesStored] = (float)(v40.n64_f32[0] * 0.15) + 0.1;
    v37.n64_f32[0] = v37.n64_f32[0] * v37.n64_f32[0];
    v18.n64_u64[0] = vmax_f32(v37, v18).n64_u64[0];
    v97[v50] = v37.n64_u32[0];
    v98[v51] = 0.0;
    v97[v51] = v37.n64_u32[0];
    if ( v29 != 40 )
    {
      v52 = TempBufferIndicesStored;
      v53 = (_WORD *)TempBufferRenderIndexList + TempBufferIndicesStored;
      *v53 = v50;
      v53[1] = v50 + 3;
      v53[2] = v51;
      TempBufferIndicesStored = v52 + 3;
      if ( a15 > 0.0 )
      {
        *((_WORD *)&TempBufferRenderIndexList[1] + v52 + 1) = v50;
        v54 = (char *)TempBufferRenderIndexList + 2 * v52;
        *((_WORD *)v54 + 5) = v50 + 3;
        *((_WORD *)v54 + 4) = v50 + 2;
        TempBufferIndicesStored = v52 + 6;
      }
    }
    v55 = v50 + 2;
    ++v29;
    TempBufferVerticesStored = v50 + 2;
  }
  while ( v29 != 41 );
  if ( v50 >= -1 )
  {
    v56 = v98;
    v57 = (float *)v97;
    v58 = 0;
    v59 = &dword_A5A1F0;
    do
    {
      v60 = *v57;
      ++v58;
      v61 = *v56;
      ++v57;
      ++v56;
      *v59 = (unsigned int)(float)((float)((float)(v61 * v60) / v18.n64_f32[0]) * 200.0) | ((unsigned int)(float)((float)((float)(v61 * v60) / v18.n64_f32[0]) * 200.0) << 8) | ((unsigned int)(float)((float)((float)(v61 * v60) / v18.n64_f32[0]) * 255.0) << 16);
      v59 += 9;
    }
    while ( v58 < v55 );
  }
  if ( TempBufferIndicesStored > 0 && RwIm3DTransform() )
  {
    RwIm3DRenderIndexedPrimitive();
    RwIm3DEnd();
  }
  v62 = v103.n64_u64[0];
  v87 = v104;
  v63 = v104;
  v86 = v103.n64_f64[0];
  v64 = v101[2] - v104;
  v65 = v101[0] - v103.n64_f32[0];
  v66 = v101[1] - v103.n64_f32[1];
  v67 = v102[0] - v103.n64_f32[0];
  v68 = v102[1] - v103.n64_f32[1];
  v69 = v102[2] - v104;
  *(float *)(a11 + 8) = v104;
  *(_QWORD *)a11 = v62;
  *a12 = v65;
  a12[1] = v66;
  a12[2] = v64;
  *a13 = v67;
  a13[1] = v68;
  a13[2] = v69;
  result = a10;
  if ( a10 )
  {
    v71 = v66 * 1.2;
    *(float *)&v72 = v65 * 1.2;
    v87 = v63 + 5.0;
    if ( sqrtf((float)(*(float *)&v72 * *(float *)&v72) + (float)(v71 * v71)) < 100.0 )
    {
      v73 = v68 * 1.2;
      v74 = v67 * 1.2;
      if ( sqrtf((float)(v74 * v74) + (float)(v73 * v73)) < 100.0 )
      {
        result = &TheCamera;
        v75 = (float32x2_t *)(dword_951FBC + 48);
        if ( !dword_951FBC )
          v75 = (float32x2_t *)&qword_951FAC;
        v76.n64_u64[0] = vsub_f32(v103, (float32x2_t)v75->n64_u64[0]).n64_u64[0];
        v77 = vmul_f32(v76, v76).n64_u64[0];
        v78 = sqrtf((float)(*(float *)&v77 + *((float *)&v77 + 1)) + 0.0);
        if ( v78 <= 25.0 )
          return (void *)CShadows::StoreShadowToBeRendered(
                           2,
                           gpShadowExplosionTex,
                           (int)&v86,
                           v72,
                           v71,
                           v74,
                           v73,
                           (int)(float)((float)((float)((float)((float)(v78 * -0.04) + 1.0) * a8) * 0.5) * 128.0),
                           (unsigned int)(float)((float)((float)((float)((float)(v78 * -0.04) + 1.0) * a8) * 0.5) * 200.0),
                           (unsigned int)(float)((float)((float)((float)((float)(v78 * -0.04) + 1.0) * a8) * 0.5) * 200.0),
                           (unsigned int)(float)((float)((float)((float)((float)(v78 * -0.04) + 1.0) * a8) * 0.5) * 255.0),
                           15.0,
                           1,
                           1.0,
                           0,
                           0);
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x573f00
// Original: _ZN5CHeli19TestSniperCollisionEP7CVectorS1_
// Demangled: CHeli::TestSniperCollision(CVector *,CVector *)
bool __fastcall CHeli::TestSniperCollision(float32x2_t *this, float32x2_t *a2, CVector *a3)
{
  float32x2_t v5; // d16
  unsigned __int64 v6; // d1
  const CVector *v7; // r3
  int v8; // r6
  float v9; // s0
  int v10; // r8
  int v11; // r0
  void (__fastcall *v12)(int, int, _DWORD, int, int, int, int); // r10
  int PlayerPed; // r0
  int v14; // r3
  const CVector *v16; // r3
  float v17; // s0
  int v18; // r4
  int v19; // r0
  void (__fastcall *v20)(int, int, _DWORD, int, int, int, int); // r6
  int v21; // r0
  int v22; // r3
  _BYTE v24[36]; // [sp+Ch] [bp-24h] BYREF

  v5.n64_u64[0] = vsub_f32((float32x2_t)a2->n64_u64[0], (float32x2_t)this->n64_u64[0]).n64_u64[0];
  v6 = vmul_f32(v5, v5).n64_u64[0];
  if ( (float)(a2[1].n64_f32[0] - this[1].n64_f32[0]) >= (float)(sqrtf(
                                                                   (float)(*(float *)&v6 + *((float *)&v6 + 1))
                                                                 + (float)((float)(a2[1].n64_f32[0] - this[1].n64_f32[0])
                                                                         * (float)(a2[1].n64_f32[0] - this[1].n64_f32[0])))
                                                               * 0.5) )
    return 0;
  if ( !CHeli::pHelis || (*(_BYTE *)(CHeli::pHelis + 70) & 4) != 0 )
  {
    v8 = 0;
  }
  else
  {
    operator*();
    v8 = 0;
    if ( COERCE_FLOAT(CCollision::DistToLine((CCollision *)this, (const CVector *)a2, (const CVector *)v24, v7)) < 0.8 )
    {
      v9 = 0.0;
      if ( (rand() & 1) != 0 )
        v9 = 1.0;
      v10 = CHeli::pHelis;
      v11 = *(_DWORD *)CHeli::pHelis;
      *(float *)(CHeli::pHelis + 2240) = (float)(v9 * 0.1) + -0.05;
      v12 = *(void (__fastcall **)(int, int, _DWORD, int, int, int, int))(v11 + 168);
      PlayerPed = FindPlayerPed(-1);
      v12(v10, PlayerPed, 0, v14, -1092867850, 1069463634, 1069547520);
      *(_BYTE *)(CHeli::pHelis + 2509) = 0;
      v8 = 1;
    }
  }
  if ( dword_A12CE0 )
  {
    if ( (*(_BYTE *)(dword_A12CE0 + 70) & 4) == 0 )
    {
      operator*();
      if ( COERCE_FLOAT(CCollision::DistToLine((CCollision *)this, (const CVector *)a2, (const CVector *)v24, v16)) < 0.8 )
      {
        v17 = 0.0;
        if ( (rand() & 1) != 0 )
          v17 = 1.0;
        v18 = dword_A12CE0;
        v19 = *(_DWORD *)dword_A12CE0;
        *(float *)(dword_A12CE0 + 2240) = (float)(v17 * 0.1) + -0.05;
        v20 = *(void (__fastcall **)(int, int, _DWORD, int, int, int, int))(v19 + 168);
        v21 = FindPlayerPed(-1);
        v20(v18, v21, 0, v22, -1092867850, 1069463634, 1069547520);
        v8 = 1;
        *(_BYTE *)(dword_A12CE0 + 2509) = 0;
      }
    }
  }
  return v8 != 0;
}


// ============================================================

// Address: 0x5740e8
// Original: _ZN5CHeli19Pre_SearchLightConeEv
// Demangled: CHeli::Pre_SearchLightCone(void)
int __fastcall CHeli::Pre_SearchLightCone(CHeli *this)
{
  RwRenderStateSet(8, 0);
  RwRenderStateSet(6, 1);
  RwRenderStateSet(10, 2);
  RwRenderStateSet(11, 2);
  RwRenderStateSet(12, 1);
  RwRenderStateSet(1, 0);
  RwRenderStateSet(14, 0);
  RwRenderStateSet(7, 2);
  RwRenderStateSet(29, 7);
  return sub_192888();
}


// ============================================================

// Address: 0x574140
// Original: _ZN5CHeli20Post_SearchLightConeEv
// Demangled: CHeli::Post_SearchLightCone(void)
int __fastcall CHeli::Post_SearchLightCone(CHeli *this)
{
  RwRenderStateSet(8, 1);
  RwRenderStateSet(6, 1);
  RwRenderStateSet(10, 5);
  RwRenderStateSet(11, 6);
  RwRenderStateSet(12, 0);
  RwRenderStateSet(20, 2);
  RwRenderStateSet(29, 5);
  return sub_192888();
}


// ============================================================

// Address: 0x574188
// Original: _ZN5CHeli9BlowUpCarEP7CEntityh
// Demangled: CHeli::BlowUpCar(CEntity *,uchar)
int __fastcall CHeli::BlowUpCar(CHeli *this, CEntity *a2, unsigned __int8 a3)
{
  int result; // r0
  int v6; // r0
  bool v7; // zf
  int *v8; // r0
  float v9; // s0
  int v10; // r0
  unsigned int v11; // r1
  unsigned int *v12; // r6
  int v13; // r2
  int v14; // r3
  int v15; // r0
  bool v16; // zf
  char v17; // r1
  int v18; // r2
  int *v19; // r5
  float *v20; // r1
  int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r0
  unsigned int v24; // r1
  int v25; // r2
  int v26; // r0
  bool v27; // zf
  int v28; // r0
  int v29; // r0
  int v30[7]; // [sp+1Ch] [bp-1Ch] BYREF

  result = *((unsigned __int8 *)this + 1070) << 26;
  if ( result < 0 )
  {
    if ( *((unsigned __int8 *)this + 58) < 8u || *((_BYTE *)this + 958) == 58 )
      goto LABEL_9;
    v6 = *((__int16 *)this + 19);
    v7 = v6 == 465;
    if ( v6 != 465 )
      v7 = v6 == 501;
    if ( v7 )
    {
LABEL_9:
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
      if ( *((_WORD *)this + 19) == 488 )
        CWanted::bUseNewsHeliInAdditionToPolice = 0;
      v11 = *((unsigned __int8 *)this + 58);
      v12 = (unsigned int *)((char *)this + 1068);
      if ( v11 <= 7 )
      {
        *((_DWORD *)this + 23) = 0;
        v13 = *((_DWORD *)this + 7);
        *((_QWORD *)this + 9) = 0LL;
        *((_QWORD *)this + 10) = 0LL;
        *((_DWORD *)this + 22) = 0;
        *((_DWORD *)this + 7) = v13 & 0xFFFFFF7E;
      }
      v14 = *((_DWORD *)this + 17);
      *((_BYTE *)this + 58) = v11 & 7 | 0x28;
      *((_DWORD *)this + 17) = v14 | 0x20000000;
      *((_DWORD *)this + 314) = CTimer::m_snTimeInMilliseconds;
      CVisibilityPlugins::SetClumpForAllAtomicsFlag();
      CDamageManager::FuckCarCompletely((CHeli *)((char *)this + 1460), 0);
      v15 = *((unsigned __int16 *)this + 19);
      v16 = v15 == 465;
      if ( v15 != 465 )
        v16 = v15 == 501;
      if ( !v16 )
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
        v30[0] = 0;
        RwFrameForAllObjects(*((_DWORD *)this + 412), GetCurrentAtomicObjectCB, v30);
        if ( v30[0] )
          *(_BYTE *)(v30[0] + 2) = 0;
      }
      v17 = *((_BYTE *)this + 1202);
      *((_WORD *)this + 631) = 0;
      v18 = *((_DWORD *)this + 5);
      *((_DWORD *)this + 307) = 0;
      v19 = (int *)((char *)this + 4);
      *((_BYTE *)this + 1202) = v17 & 0xF8;
      v20 = (float *)((char *)this + 4);
      if ( v18 )
        v20 = (float *)(v18 + 48);
      CCamera::CamShake((CCamera *)&TheCamera, 0.4, *v20, v20[1], v20[2]);
      CVehicle::KillPedsInVehicle(this);
      v21 = *((_DWORD *)this + 268);
      v22 = *v12;
      *((_BYTE *)this + 1202) &= 0xE7u;
      v23 = v21 & 0xFFFF7FFF;
      v24 = v22 & 0xFFFFFFAF;
      *v12 = v22 & 0xFFFFFFAF;
      *((_DWORD *)this + 268) = v23;
      *((_BYTE *)this + 2172) &= ~1u;
      if ( (v22 & 2) != 0 )
      {
        v24 = v22 & 0xFFFFFFAD;
        *v12 = v22 & 0xFFFFFFAD;
        *((_DWORD *)this + 268) = v23;
        --CCarCtrl::NumAmbulancesOnDuty;
      }
      if ( (v24 & 4) != 0 )
      {
        *v12 = v24 & 0xFFFFFFAB;
        *((_DWORD *)this + 268) = v23 & 0xFFFF7FFF;
        --CCarCtrl::NumFireTrucksOnDuty;
      }
      CVehicle::ChangeLawEnforcerState(this, 0);
      CFireManager::StartFire((CFireManager *)gFireManager, this, a2, 0.8, 1u, 0x1B58u, 0);
      CDarkel::RegisterCarBlownUpByPlayer(this, 0, v25);
      v26 = *((unsigned __int16 *)this + 19);
      v27 = v26 == 501;
      if ( v26 != 501 )
        v27 = v26 == 465;
      if ( v27 )
      {
        v28 = *((_DWORD *)this + 5);
        if ( v28 )
          v19 = (int *)(v28 + 48);
        return CExplosion::AddExplosion((int)this, (int)a2, 12, *v19, v19[1], v19[2], 0, 1, -1.0, 0);
      }
      else
      {
        v29 = *((_DWORD *)this + 5);
        if ( v29 )
          v19 = (int *)(v29 + 48);
        return CExplosion::AddExplosion((int)this, (int)a2, 7, *v19, v19[1], v19[2], 0, 1, -1.0, 0);
      }
    }
    else
    {
      *((_DWORD *)this + 307) = 0;
      result = 58;
      *((_BYTE *)this + 958) = 58;
    }
  }
  return result;
}


// ============================================================

// Address: 0x5744b4
// Original: _ZN5CHeli17SwitchPoliceHelisEb
// Demangled: CHeli::SwitchPoliceHelis(bool)
char __fastcall CHeli::SwitchPoliceHelis(char this, bool a2)
{
  CHeli::bPoliceHelisAllowed = this;
  return this;
}


// ============================================================

// Address: 0x5744c4
// Original: _ZN5CHeli18SetUpWheelColModelEP9CColModel
// Demangled: CHeli::SetUpWheelColModel(CColModel *)
int __fastcall CHeli::SetUpWheelColModel(CHeli *this, CColModel *a2)
{
  return 0;
}


// ============================================================

// Address: 0x5744c8
// Original: _ZN5CHeli9BurstTyreEhb
// Demangled: CHeli::BurstTyre(uchar,bool)
int __fastcall CHeli::BurstTyre(CHeli *this, unsigned __int8 a2, bool a3)
{
  return 0;
}


// ============================================================
