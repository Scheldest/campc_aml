
// Address: 0x18c03c
// Original: j__ZN10CExplosion12AddExplosionEP7CEntityS1_14eExplosionType7CVectorjhfh
// Demangled: CExplosion::AddExplosion(CEntity *,CEntity *,eExplosionType,CVector,uint,uchar,float,uchar)
// attributes: thunk
int __fastcall CExplosion::AddExplosion(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        float a9,
        int a10)
{
  return _ZN10CExplosion12AddExplosionEP7CEntityS1_14eExplosionType7CVectorjhfh(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}


// ============================================================

// Address: 0x18e608
// Original: j__ZN10CExplosion6UpdateEv
// Demangled: CExplosion::Update(void)
// attributes: thunk
int __fastcall CExplosion::Update(CExplosion *this)
{
  return _ZN10CExplosion6UpdateEv(this);
}


// ============================================================

// Address: 0x1933e4
// Original: j__ZN10CExplosion25RemoveAllExplosionsInAreaE7CVectorf
// Demangled: CExplosion::RemoveAllExplosionsInArea(CVector,float)
// attributes: thunk
int CExplosion::RemoveAllExplosionsInArea()
{
  return _ZN10CExplosion25RemoveAllExplosionsInAreaE7CVectorf();
}


// ============================================================

// Address: 0x1948b0
// Original: j__ZN10CExplosion10InitialiseEv
// Demangled: CExplosion::Initialise(void)
// attributes: thunk
int __fastcall CExplosion::Initialise(CExplosion *this)
{
  return _ZN10CExplosion10InitialiseEv(this);
}


// ============================================================

// Address: 0x197bd0
// Original: j__ZN10CExplosion8ShutdownEv
// Demangled: CExplosion::Shutdown(void)
// attributes: thunk
int __fastcall CExplosion::Shutdown(CExplosion *this)
{
  return _ZN10CExplosion8ShutdownEv(this);
}


// ============================================================

// Address: 0x1981b0
// Original: j__ZN10CExplosion22TestForExplosionInAreaEiffffff
// Demangled: CExplosion::TestForExplosionInArea(int,float,float,float,float,float,float)
// attributes: thunk
int __fastcall CExplosion::TestForExplosionInArea(
        CExplosion *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  return _ZN10CExplosion22TestForExplosionInAreaEiffffff(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x5d7870
// Original: _ZN10CExplosion10InitialiseEv
// Demangled: CExplosion::Initialise(void)
int __fastcall CExplosion::Initialise(CExplosion *this)
{
  int result; // r0
  int v2; // r2
  int *v3; // r3

  result = 0;
  v2 = 0;
  do
  {
    v3 = &dword_A84370[v2];
    v2 += 31;
    *((_BYTE *)v3 + 40) = 0;
    v3[11] = 0;
    *((_BYTE *)v3 + 42) = 1;
    v3[13] = 0;
    v3[14] = 0;
    v3[15] = 0;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    v3[4] = 1065353216;
    dword_A843B0 = 0;
    unk_A843B4 = 0;
    dword_A843B8 = 0;
    dword_A843E0 = 0;
    dword_A843D4 = 0;
    dword_A84438 = 0;
    unk_A8443C = 0;
    dword_A84440 = 0;
    dword_A84454 = 0;
    dword_A84460 = 0;
    dword_A844D4 = 0;
    dword_A844E0 = 0;
    dword_A844C0 = 0;
    unk_A844C4 = 0;
    dword_A844C8 = 0;
  }
  while ( v2 != 496 );
  return result;
}


// ============================================================

// Address: 0x5d78e4
// Original: _ZN10CExplosion18ClearAllExplosionsEv
// Demangled: CExplosion::ClearAllExplosions(void)
int __fastcall CExplosion::ClearAllExplosions(CExplosion *this)
{
  int result; // r0
  int v2; // r2
  int *v3; // r3

  result = 0;
  v2 = 0;
  do
  {
    v3 = &dword_A84370[v2];
    v2 += 31;
    *((_BYTE *)v3 + 40) = 0;
    v3[11] = 0;
    *((_BYTE *)v3 + 42) = 1;
    v3[13] = 0;
    v3[14] = 0;
    v3[15] = 0;
    *(_QWORD *)(v3 + 5) = 0LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    *(_QWORD *)v3 = 0LL;
    *((_QWORD *)v3 + 1) = 0LL;
    v3[4] = 1065353216;
    dword_A843B0 = 0;
    unk_A843B4 = 0;
    dword_A843B8 = 0;
    dword_A843E0 = 0;
    dword_A843D4 = 0;
    dword_A84438 = 0;
    unk_A8443C = 0;
    dword_A84440 = 0;
    dword_A84454 = 0;
    dword_A84460 = 0;
    dword_A844D4 = 0;
    dword_A844E0 = 0;
    dword_A844C0 = 0;
    unk_A844C4 = 0;
    dword_A844C8 = 0;
  }
  while ( v2 != 496 );
  return result;
}


// ============================================================

// Address: 0x5d7958
// Original: _ZN10CExplosion8ShutdownEv
// Demangled: CExplosion::Shutdown(void)
void __fastcall CExplosion::Shutdown(CExplosion *this)
{
  ;
}


// ============================================================

// Address: 0x5d795c
// Original: _ZN10CExplosion25GetExplosionActiveCounterEh
// Demangled: CExplosion::GetExplosionActiveCounter(uchar)
int __fastcall CExplosion::GetExplosionActiveCounter(CExplosion *this, unsigned __int8 a2)
{
  return BYTE1(dword_A84370[31 * (_DWORD)this + 10]);
}


// ============================================================

// Address: 0x5d7974
// Original: _ZN10CExplosion27ResetExplosionActiveCounterEh
// Demangled: CExplosion::ResetExplosionActiveCounter(uchar)
int *__fastcall CExplosion::ResetExplosionActiveCounter(CExplosion *this, unsigned __int8 a2)
{
  int *result; // r0

  result = &dword_A84370[31 * (_DWORD)this];
  *((_BYTE *)result + 41) = 0;
  return result;
}


// ============================================================

// Address: 0x5d798c
// Original: _ZN10CExplosion22DoesExplosionMakeSoundEh
// Demangled: CExplosion::DoesExplosionMakeSound(uchar)
int __fastcall CExplosion::DoesExplosionMakeSound(CExplosion *this, unsigned __int8 a2)
{
  return BYTE2(dword_A84370[31 * (_DWORD)this + 10]);
}


// ============================================================

// Address: 0x5d79a4
// Original: _ZN10CExplosion16GetExplosionTypeEh
// Demangled: CExplosion::GetExplosionType(uchar)
int __fastcall CExplosion::GetExplosionType(CExplosion *this, unsigned __int8 a2)
{
  return dword_A84370[31 * (_DWORD)this];
}


// ============================================================

// Address: 0x5d79b8
// Original: _ZN10CExplosion20GetExplosionPositionEh
// Demangled: CExplosion::GetExplosionPosition(uchar)
int *__fastcall CExplosion::GetExplosionPosition(CExplosion *this, unsigned __int8 a2)
{
  return &dword_A84370[31 * (_DWORD)this + 1];
}


// ============================================================

// Address: 0x5d79cc
// Original: _ZN10CExplosion12AddExplosionEP7CEntityS1_14eExplosionType7CVectorjhfh
// Demangled: CExplosion::AddExplosion(CEntity *,CEntity *,eExplosionType,CVector,uint,uchar,float,uchar)
int __fastcall CExplosion::AddExplosion(
        float *a1,
        CEntity *a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        char a7,
        float a8,
        int a9)
{
  int PlayerPed; // r0
  CEntity *v13; // r3
  int *v14; // r0
  float v15; // s0
  int v16; // r2
  int v17; // r6
  float v18; // s16
  _BYTE *v19; // r0
  _BYTE *v20; // r10
  int v21; // r1
  bool v22; // zf
  int v23; // r4
  CEntity *v24; // r0
  __int64 v25; // d16
  CEntity *v26; // r0
  int v27; // r0
  int v28; // r0
  float v29; // s0
  float *v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // s0
  float v34; // s0
  float *v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // s0
  int v39; // r2
  int v40; // r0
  float v41; // s0
  int *v42; // r1
  int v43; // s4
  int v44; // r0
  int v45; // r1
  int v46; // r0
  float *v47; // r2
  float v48; // s2
  float v49; // s4
  int v50; // r0
  unsigned int v51; // r0
  float v52; // s2
  int v53; // r1
  int *v54; // r6
  int v55; // s6
  int v56; // r4
  int v57; // r0
  int v58; // r0
  double v59; // d16
  int v60; // r0
  FxSystem_c *v61; // r4
  unsigned int v62; // r0
  float v63; // s2
  int *v64; // r1
  int v65; // s6
  int v66; // r0
  int v67; // r1
  int v68; // r0
  float *v69; // r2
  float v70; // s2
  float v71; // s4
  int v72; // r0
  unsigned int v73; // r0
  float v74; // s0
  int *v75; // r1
  int v76; // s4
  int v77; // r0
  int v78; // r1
  int v79; // r0
  float *v80; // r2
  float v81; // s2
  float v82; // s4
  int FxSystem; // r0
  unsigned int v84; // r0
  float v85; // s2
  int GroundZFor3DCoord; // r0
  float v87; // s0
  unsigned int v88; // r0
  float v89; // s2
  int *v90; // r1
  int v91; // s6
  float v92; // s0
  unsigned int v93; // r0
  float v94; // s0
  int v95; // r2
  int *v96; // r1
  int v97; // s4
  float v98; // s0
  int *v99; // r1
  int v100; // s4
  int v101; // r0
  int v102; // r1
  int v103; // r0
  float *v104; // r2
  float v105; // s2
  float v106; // s4
  int v107; // r0
  unsigned int v108; // r0
  float v109; // s0
  int *v110; // r1
  int v111; // s4
  int v112; // r0
  int v113; // r1
  int v114; // r0
  float *v115; // r2
  float v116; // s2
  float v117; // s4
  int v118; // r0
  unsigned int v119; // r0
  float v120; // s0
  int *v121; // r1
  int v122; // s4
  int v123; // r0
  int v124; // r1
  int v125; // r0
  float *v126; // r2
  float v127; // s2
  float v128; // s4
  int v129; // r0
  int v130; // r0
  int v131; // r1
  int v132; // r0
  float *v133; // r2
  float v134; // s2
  float v135; // s4
  int v136; // r0
  CVector *v137; // r2
  float v138; // r3
  int v139; // r0
  int v140; // r4
  int v141; // r0
  int v142; // r11
  int v143; // r8
  float v144; // s23
  float v145; // r5
  float v146; // r6
  float v147; // r2
  float v148; // r9
  int v149; // r0
  TouchSense *IsCoopGameGoingOn; // r0
  CEntity *v151; // r0
  int v152; // r1
  CPad *Pad; // r0
  CGameLogic *started; // r0
  int v155; // r1
  CPad *v156; // r0
  TouchSense *v157; // r0
  CEntity **v159; // [sp+4h] [bp-C4h]
  float *v160; // [sp+8h] [bp-C0h]
  float v161; // [sp+Ch] [bp-BCh]
  int v162; // [sp+28h] [bp-A0h]
  CEntity *v163; // [sp+30h] [bp-98h]
  CEntity *v164; // [sp+34h] [bp-94h]
  double v165; // [sp+38h] [bp-90h] BYREF
  float v166; // [sp+40h] [bp-88h]
  _BYTE v167[4]; // [sp+48h] [bp-80h] BYREF
  _BYTE v168[4]; // [sp+4Ch] [bp-7Ch] BYREF
  float v169; // [sp+50h] [bp-78h] BYREF
  char v170; // [sp+57h] [bp-71h] BYREF
  _QWORD v171[14]; // [sp+58h] [bp-70h] BYREF

  LODWORD(v171[0]) = a4;
  *(_QWORD *)((char *)v171 + 4) = a5;
  CRGBA::CRGBA((CRGBA *)v168, 0, 0, 0, 0);
  CRGBA::CRGBA((CRGBA *)v167, 0xA0u, 0xA0u, 0xA0u, 0xFFu);
  PlayerPed = FindPlayerPed(-1);
  v13 = a2;
  if ( (CEntity *)PlayerPed == a2 )
  {
    v14 = &CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
    v15 = *((float *)v14 + 82) + 7.0;
    v14[80] += 5;
    *((float *)v14 + 82) = v15;
  }
  v16 = 0;
  v17 = a6;
  v18 = a8;
  v19 = algn_A842F4;
  do
  {
    v20 = v19 + 124;
    v21 = v16 + 1;
    if ( v16 > 15 )
      break;
    ++v16;
    v22 = v19[164] == 0;
    v19 += 124;
  }
  while ( !v22 );
  v23 = 0;
  if ( v21 != 17 )
  {
    v164 = (CEntity *)a1;
    *(_DWORD *)v20 = a3;
    v24 = (CEntity *)*((_DWORD *)v20 + 6);
    v25 = v171[0];
    *((_DWORD *)v20 + 3) = v171[1];
    *((_DWORD *)v20 + 4) = 1065353216;
    *((_DWORD *)v20 + 13) = 0;
    *((_DWORD *)v20 + 14) = 0;
    *((_DWORD *)v20 + 9) = 1065353216;
    *(_QWORD *)(v20 + 4) = v25;
    v163 = v13;
    if ( v24 )
    {
      CEntity::CleanUpOldReference(v24, (CEntity **)v20 + 6);
      v13 = v163;
    }
    *((_DWORD *)v20 + 6) = v13;
    if ( v13 )
      CEntity::RegisterReference(v13, (CEntity **)v20 + 6);
    v26 = (CEntity *)*((_DWORD *)v20 + 7);
    if ( v26 )
      CEntity::CleanUpOldReference(v26, (CEntity **)v20 + 7);
    *((_DWORD *)v20 + 7) = a1;
    if ( a1 )
      CEntity::RegisterReference((CEntity *)a1, (CEntity **)v20 + 7);
    v20[42] = a7;
    *((_WORD *)v20 + 20) = 257;
    *((_DWORD *)v20 + 15) = 0;
    v27 = rand();
    *((float *)v20 + 16) = (float)((float)((float)v27 * 4.6566e-10) + (float)((float)v27 * 4.6566e-10)) + -1.0;
    v28 = rand();
    *((float *)v20 + 17) = (float)((float)((float)v28 * 4.6566e-10) + (float)((float)v28 * 4.6566e-10)) + -1.0;
    *((float *)v20 + 18) = (float)((float)((float)rand() * 4.6566e-10) * 0.8) + 0.2;
    *((float *)v20 + 25) = (float)((float)((float)rand() * 4.6566e-10) * 1.5) + 0.5;
    *((float *)v20 + 28) = (float)((float)((float)rand() * 4.6566e-10) * 10.0) + 20.0;
    if ( (rand() & 1) != 0 )
    {
      v31 = rand();
      *((float *)v20 + 19) = (float)((float)((float)v31 * 4.6566e-10) + (float)((float)v31 * 4.6566e-10)) + -1.0;
      v32 = rand();
      *((float *)v20 + 20) = (float)((float)((float)v32 * 4.6566e-10) + (float)((float)v32 * 4.6566e-10)) + -1.0;
      *((float *)v20 + 21) = (float)((float)((float)rand() * 4.6566e-10) * 0.8) + 0.2;
      *((float *)v20 + 26) = (float)((float)((float)rand() * 4.6566e-10) * 1.5) + 0.5;
      v33 = rand();
      v30 = (float *)(v20 + 116);
      v29 = (float)((float)((float)v33 * 4.6566e-10) * 10.0) + 20.0;
    }
    else
    {
      v29 = 0.0;
      v30 = (float *)(v20 + 104);
    }
    *v30 = v29;
    if ( (rand() & 1) != 0 )
    {
      v36 = rand();
      *((float *)v20 + 22) = (float)((float)((float)v36 * 4.6566e-10) + (float)((float)v36 * 4.6566e-10)) + -1.0;
      v37 = rand();
      *((float *)v20 + 23) = (float)((float)((float)v37 * 4.6566e-10) + (float)((float)v37 * 4.6566e-10)) + -1.0;
      *((float *)v20 + 24) = (float)((float)((float)rand() * 4.6566e-10) * 0.8) + 0.2;
      *((float *)v20 + 27) = (float)((float)((float)rand() * 4.6566e-10) * 1.5) + 0.5;
      v38 = rand();
      v35 = (float *)(v20 + 120);
      v34 = (float)((float)((float)v38 * 4.6566e-10) * 10.0) + 20.0;
    }
    else
    {
      v34 = 0.0;
      v35 = (float *)(v20 + 108);
    }
    *v35 = v34;
    v39 = CTimer::m_snTimeInMilliseconds;
    v40 = CTimer::m_snTimeInMilliseconds + a6;
    if ( a6 )
      v17 = CTimer::m_snTimeInMilliseconds + a6;
    *((_DWORD *)v20 + 12) = v17;
    switch ( a3 )
    {
      case 0:
        v73 = v40 + 750;
        v74 = 0.0;
        v75 = &dword_5D88EC;
        if ( !a9 )
        {
          v74 = 9.0;
          v75 = &dword_5D88F0;
        }
        v76 = *v75;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v76;
        *((float *)v20 + 4) = v74;
        *((float *)v20 + 8) = (float)v73;
        if ( a1 )
        {
          v77 = *((_DWORD *)a1 + 6);
          if ( !v77 )
            goto LABEL_112;
          v78 = *(_DWORD *)(v77 + 4);
          v79 = *((_DWORD *)a1 + 5);
          v80 = (float *)(v79 + 48);
          if ( !v79 )
            v80 = a1 + 1;
          v81 = *((float *)v171 + 1) - v80[1];
          v82 = *(float *)&v171[1] - v80[2];
          *(float *)&v165 = *(float *)v171 - *v80;
          *((float *)&v165 + 1) = v81;
          v166 = v82;
          FxSystem = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_small", (int)&v165, v78 + 16, 0);
        }
        else
        {
          FxSystem = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_small", (int)v171, 0, 0);
        }
        v61 = (FxSystem_c *)FxSystem;
        if ( !FxSystem )
          goto LABEL_131;
        if ( !v20[42] )
          goto LABEL_130;
        goto LABEL_128;
      case 1:
        v84 = v40 + 3000;
        v85 = 0.0;
        if ( !a9 )
          v85 = 6.0;
        *((_DWORD *)v20 + 13) = 0;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((float *)v20 + 4) = v85;
        *((float *)v20 + 8) = (float)v84;
        GroundZFor3DCoord = CWorld::FindGroundZFor3DCoord(
                              (CWorld *)v171[0],
                              *((float *)v171 + 1),
                              *(float *)&v171[1] + 3.0,
                              COERCE_FLOAT(&v170),
                              0,
                              v159);
        if ( v170 )
        {
          v87 = *(float *)&GroundZFor3DCoord;
          LODWORD(v171[1]) = GroundZFor3DCoord;
        }
        else
        {
          v87 = *(float *)&v171[1];
        }
        if ( CWaterLevel::GetWaterLevelNoWaves(
               (CWaterLevel *)v171[0],
               *((float *)v171 + 1),
               v87,
               COERCE_FLOAT(&v169),
               0,
               0,
               v160) == 1
          && *(float *)&v171[1] < v169 )
        {
          v56 = 1;
          if ( a1 )
            goto LABEL_133;
          goto LABEL_134;
        }
        if ( a1 )
        {
          v130 = *((_DWORD *)a1 + 6);
          if ( !v130 )
            goto LABEL_112;
          v131 = *(_DWORD *)(v130 + 4);
          v132 = *((_DWORD *)a1 + 5);
          v133 = (float *)(v132 + 48);
          if ( !v132 )
            v133 = a1 + 1;
          v134 = *((float *)v171 + 1) - v133[1];
          v135 = *(float *)&v171[1] - v133[2];
          *(float *)&v165 = *(float *)v171 - *v133;
          *((float *)&v165 + 1) = v134;
          v166 = v135;
          v136 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_molotov", (int)&v165, v131 + 16, 0);
        }
        else
        {
          v136 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_molotov", (int)v171, 0, 0);
        }
        v61 = (FxSystem_c *)v136;
        if ( !v136 )
          goto LABEL_131;
        if ( !v20[42] )
          goto LABEL_130;
        v138 = -36.0;
        v137 = (CVector *)(v20 + 4);
        goto LABEL_129;
      case 2:
      case 3:
        v41 = 0.0;
        v42 = &dword_5D88EC;
        if ( !a9 )
        {
          v41 = 10.0;
          v42 = &dword_5D88F0;
        }
        v43 = *v42;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v43;
        *((float *)v20 + 4) = v41;
        *((float *)v20 + 8) = (float)(unsigned int)(v40 + 750);
        if ( a3 == 3 )
        {
          *((_DWORD *)v20 + 9) = 1045220557;
          *((_DWORD *)v20 + 13) = 1128792064;
        }
        if ( a1 )
        {
          v44 = *((_DWORD *)a1 + 6);
          if ( !v44 )
            goto LABEL_112;
          v45 = *(_DWORD *)(v44 + 4);
          v46 = *((_DWORD *)a1 + 5);
          v47 = (float *)(v46 + 48);
          if ( !v46 )
            v47 = a1 + 1;
          v48 = *((float *)v171 + 1) - v47[1];
          v49 = *(float *)&v171[1] - v47[2];
          *(float *)&v165 = *(float *)v171 - *v47;
          *((float *)&v165 + 1) = v48;
          v166 = v49;
          v50 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_small", (int)&v165, v45 + 16, 0);
        }
        else
        {
          v50 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_small", (int)v171, 0, 0);
        }
        v61 = (FxSystem_c *)v50;
        if ( !v50 )
          goto LABEL_131;
        if ( v20[42] )
          goto LABEL_128;
        goto LABEL_130;
      case 4:
      case 5:
        v51 = v40 + 4250;
        v52 = 0.0;
        v53 = *((_DWORD *)v20 + 7);
        v54 = &dword_5D88EC;
        if ( !a9 )
        {
          v52 = 9.0;
          v54 = &dword_5D88F0;
        }
        v55 = *v54;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v55;
        *((float *)v20 + 11) = (float)v39;
        *((float *)v20 + 4) = v52;
        *((float *)v20 + 8) = (float)v51;
        if ( !v53 )
          goto LABEL_131;
        v56 = 0;
        CCrime::ReportCrime();
        v57 = *((_DWORD *)v20 + 7);
        if ( !v57 )
          goto LABEL_132;
        v58 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v57 + 38)]) + 116);
        v59 = *(double *)(v58 + 84);
        v166 = *(float *)(v58 + 92);
        v165 = v59;
        v60 = *((_DWORD *)a1 + 6);
        if ( !v60 )
          goto LABEL_131;
        v61 = (FxSystem_c *)FxManager_c::CreateFxSystem(
                              (int)&g_fxMan,
                              (CKeyGen *)"explosion_medium",
                              (int)&v165,
                              *(_DWORD *)(v60 + 4) + 16,
                              0);
        if ( !v61 )
          goto LABEL_131;
        if ( v20[42] )
          goto LABEL_128;
        goto LABEL_130;
      case 6:
      case 7:
        v62 = v40 + 3000;
        v63 = 0.0;
        v64 = &dword_5D88D8;
        if ( !a9 )
        {
          v63 = 25.0;
          v64 = &dword_5D88DC;
        }
        v65 = *v64;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v65;
        *((float *)v20 + 11) = (float)v39;
        *((float *)v20 + 4) = v63;
        *((float *)v20 + 8) = (float)v62;
        if ( a1 )
        {
          v66 = *((_DWORD *)a1 + 6);
          if ( !v66 )
            goto LABEL_112;
          v67 = *(_DWORD *)(v66 + 4);
          v68 = *((_DWORD *)a1 + 5);
          v69 = (float *)(v68 + 48);
          if ( !v68 )
            v69 = a1 + 1;
          v70 = *((float *)v171 + 1) - v69[1];
          v71 = *(float *)&v171[1] - v69[2];
          *(float *)&v165 = *(float *)v171 - *v69;
          *((float *)&v165 + 1) = v70;
          v166 = v71;
          v72 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_large", (int)&v165, v67 + 16, 0);
        }
        else
        {
          v72 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_large", (int)v171, 0, 0);
        }
        v61 = (FxSystem_c *)v72;
        if ( !v72 )
          goto LABEL_131;
        if ( v20[42] )
          goto LABEL_128;
        goto LABEL_130;
      case 8:
        v88 = v40 + 750;
        v89 = 0.0;
        if ( !a9 )
          v89 = 10.0;
        v90 = &dword_5D88AC;
        if ( !a9 )
          v90 = &dword_5D88B0;
        v91 = *v90;
        *((_DWORD *)v20 + 5) = 1056964608;
        v56 = 0;
        *((_DWORD *)v20 + 13) = v91;
        *((float *)v20 + 4) = v89;
        v92 = *(float *)&v171[1] + 4.0;
        *((float *)v20 + 8) = (float)v88;
        CWorld::FindGroundZFor3DCoord((CWorld *)v171[0], *((float *)v171 + 1), v92, 0.0, 0, v159);
        if ( v20[42] )
          goto LABEL_76;
        goto LABEL_132;
      case 9:
        v93 = v40 + 750;
        v94 = 0.0;
        v95 = (unsigned __int8)v20[42];
        if ( !a9 )
          v94 = 10.0;
        v96 = &dword_5D88AC;
        if ( !a9 )
          v96 = &dword_5D88B0;
        v97 = *v96;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v97;
        *((float *)v20 + 4) = v94;
        *((float *)v20 + 8) = (float)v93;
        if ( !v95 )
          goto LABEL_131;
LABEL_76:
        v56 = 0;
        CAEExplosionAudioEntity::AddAudioEvent(
          (CAEExplosionAudioEntity *)&CExplosion::m_ExplosionAudioEntity,
          129,
          (CVector *)(v20 + 4),
          0.0);
        if ( !a1 )
          goto LABEL_134;
        goto LABEL_133;
      case 10:
        v98 = 0.0;
        v99 = &dword_5D88AC;
        if ( !a9 )
        {
          v98 = 10.0;
          v99 = &dword_5D88B0;
        }
        v100 = *v99;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v100;
        *((float *)v20 + 4) = v98;
        *((float *)v20 + 8) = (float)(unsigned int)(v40 + 750);
        if ( a1 )
        {
          v101 = *((_DWORD *)a1 + 6);
          if ( !v101 )
            goto LABEL_112;
          v102 = *(_DWORD *)(v101 + 4);
          v103 = *((_DWORD *)a1 + 5);
          v104 = (float *)(v103 + 48);
          if ( !v103 )
            v104 = a1 + 1;
          v105 = *((float *)v171 + 1) - v104[1];
          v106 = *(float *)&v171[1] - v104[2];
          *(float *)&v165 = *(float *)v171 - *v104;
          *((float *)&v165 + 1) = v105;
          v166 = v106;
          v107 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_large", (int)&v165, v102 + 16, 0);
        }
        else
        {
          v107 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_large", (int)v171, 0, 0);
        }
        v61 = (FxSystem_c *)v107;
        if ( !v107 )
          goto LABEL_131;
        if ( v20[42] )
          goto LABEL_128;
        goto LABEL_130;
      case 11:
        v108 = v40 + 750;
        v109 = 0.0;
        v110 = &dword_5D886C;
        if ( !a9 )
        {
          v109 = 3.0;
          v110 = &dword_5D8870;
        }
        v111 = *v110;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v111;
        *((float *)v20 + 4) = v109;
        *((float *)v20 + 8) = (float)v108;
        if ( a1 )
        {
          v112 = *((_DWORD *)a1 + 6);
          if ( !v112 )
            goto LABEL_112;
          v113 = *(_DWORD *)(v112 + 4);
          v114 = *((_DWORD *)a1 + 5);
          v115 = (float *)(v114 + 48);
          if ( !v114 )
            v115 = a1 + 1;
          v116 = *((float *)v171 + 1) - v115[1];
          v117 = *(float *)&v171[1] - v115[2];
          *(float *)&v165 = *(float *)v171 - *v115;
          *((float *)&v165 + 1) = v116;
          v166 = v117;
          v118 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_small", (int)&v165, v113 + 16, 0);
        }
        else
        {
          v118 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_small", (int)v171, 0, 0);
        }
        v61 = (FxSystem_c *)v118;
        if ( !v118 )
          goto LABEL_131;
        if ( v20[42] )
          goto LABEL_128;
        goto LABEL_130;
      case 12:
        v119 = v40 + 750;
        v120 = 0.0;
        v121 = &dword_5D886C;
        if ( !a9 )
        {
          v120 = 3.0;
          v121 = &dword_5D8870;
        }
        v122 = *v121;
        *((_DWORD *)v20 + 5) = 1056964608;
        *((_DWORD *)v20 + 13) = v122;
        *((float *)v20 + 4) = v120;
        *((float *)v20 + 8) = (float)v119;
        if ( a1 )
        {
          v123 = *((_DWORD *)a1 + 6);
          if ( !v123 )
          {
LABEL_112:
            CInterestingEvents::Add();
            goto LABEL_136;
          }
          v124 = *(_DWORD *)(v123 + 4);
          v125 = *((_DWORD *)a1 + 5);
          v126 = (float *)(v125 + 48);
          if ( !v125 )
            v126 = a1 + 1;
          v127 = *((float *)v171 + 1) - v126[1];
          v128 = *(float *)&v171[1] - v126[2];
          *(float *)&v165 = *(float *)v171 - *v126;
          *((float *)&v165 + 1) = v127;
          v166 = v128;
          v129 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_tiny", (int)&v165, v124 + 16, 0);
        }
        else
        {
          v129 = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_tiny", (int)v171, 0, 0);
        }
        v61 = (FxSystem_c *)v129;
        if ( v129 )
        {
          if ( v20[42] )
          {
LABEL_128:
            v137 = (CVector *)(v20 + 4);
            v138 = 0.0;
LABEL_129:
            CAEExplosionAudioEntity::AddAudioEvent(
              (CAEExplosionAudioEntity *)&CExplosion::m_ExplosionAudioEntity,
              129,
              v137,
              v138);
          }
LABEL_130:
          FxSystem_c::PlayAndKill(v61);
        }
LABEL_131:
        v56 = 0;
LABEL_132:
        if ( a1 )
LABEL_133:
          CInterestingEvents::Add();
LABEL_134:
        if ( v56 )
        {
          v23 = 0;
          v20[40] = 0;
          return v23;
        }
LABEL_136:
        v139 = a3 - 1;
        if ( (unsigned int)(a3 - 1) <= 8 )
        {
          if ( 0x107u >> v139 << 31 )
          {
            v140 = dword_5D8954[v139];
            v141 = ((unsigned __int8)rand() + (_BYTE)v140) & 3;
            if ( v141 )
            {
              v162 = a3;
              v142 = -v141;
              v143 = 0;
              do
              {
                v144 = *((float *)v20 + 3);
                v145 = *((float *)v20 + 2);
                v146 = *((float *)v20 + 1);
                if ( v143 )
                {
                  v146 = (float)((float)((float)((float)rand() * 4.6566e-10) * 8.0) + -4.0) + v146;
                  v145 = (float)((float)((float)((float)rand() * 4.6566e-10) * 8.0) + -4.0) + v145;
                }
                v148 = COERCE_FLOAT(
                         CWorld::FindGroundZFor3DCoord(
                           (CWorld *)LODWORD(v146),
                           v145,
                           v144 + 3.0,
                           COERCE_FLOAT(&v170),
                           0,
                           v159));
                if ( v170 && fabsf(v148 - *((float *)v20 + 3)) < 10.0 )
                {
                  rand();
                  v149 = v143;
                  if ( v143 )
                    v149 = 1;
                  v159 = (CEntity **)v149;
                  CFireManager::StartFire();
                }
                --v143;
              }
              while ( v142 != v143 );
              a3 = v162;
              a1 = (float *)v164;
              if ( v163 && (*((_BYTE *)v163 + 58) & 7) == 3 && !*((_DWORD *)v163 + 359) )
                CStats::IncrementStat((CStats *)&dword_D8, 0, v147);
            }
          }
        }
        v165 = *(double *)v171;
        v166 = *(float *)&v171[1] + 5.0;
        CShadows::AddPermanentShadow(
          1,
          gpShadowHeliTex,
          (int)&v165,
          1090519040,
          0.0,
          0.0,
          -8.0,
          200,
          0,
          0,
          0,
          10.0,
          30000,
          1.0);
        if ( *((float *)v20 + 13) == 0.0 || *((_DWORD *)v20 + 12) )
        {
          if ( a3 == 1 )
            goto LABEL_155;
        }
        else
        {
          if ( (unsigned int)(a3 - 2) > 8 )
            v151 = 0;
          else
            v151 = (CEntity *)((0x1C9u >> (a3 - 2)) & 1);
          CWorld::TriggerExplosion(
            (CWorld *)v171,
            *((const CVector **)v20 + 4),
            *((float *)v20 + 13),
            *(float *)&a1,
            v163,
            v151,
            *((float *)v20 + 9),
            v161);
          if ( a3 == 1 )
          {
LABEL_155:
            if ( a8 == -1.0 )
              v18 = 0.2;
            IsCoopGameGoingOn = (TouchSense *)CCamera::CamShake(
                                                (CCamera *)&TheCamera,
                                                v18,
                                                *(float *)v171,
                                                *((float *)v171 + 1),
                                                *(float *)&v171[1]);
            goto LABEL_166;
          }
        }
        if ( a8 == -1.0 )
          v18 = 0.6;
        CCamera::CamShake((CCamera *)&TheCamera, v18, *(float *)v171, *((float *)v171 + 1), *(float *)&v171[1]);
        Pad = (CPad *)CPad::GetPad(0, v152);
        started = (CGameLogic *)CPad::StartShake_Distance(
                                  Pad,
                                  300,
                                  0x80u,
                                  *(float *)v171,
                                  *((float *)v171 + 1),
                                  *(float *)&v171[1]);
        IsCoopGameGoingOn = (TouchSense *)CGameLogic::IsCoopGameGoingOn(started);
        if ( IsCoopGameGoingOn == (TouchSense *)((char *)&stderr + 1) )
        {
          v156 = (CPad *)CPad::GetPad((CPad *)((char *)&stderr + 1), v155);
          IsCoopGameGoingOn = (TouchSense *)CPad::StartShake_Distance(
                                              v156,
                                              300,
                                              0x80u,
                                              *(float *)v171,
                                              *((float *)v171 + 1),
                                              *(float *)&v171[1]);
        }
LABEL_166:
        v157 = (TouchSense *)TouchSense::instance(IsCoopGameGoingOn);
        v23 = 1;
        TouchSense::playBuiltinEffect(v157, 1, 81, 115, 20);
        break;
      default:
        goto LABEL_131;
    }
  }
  return v23;
}


// ============================================================

// Address: 0x5d898c
// Original: _ZN10CExplosion6UpdateEv
// Demangled: CExplosion::Update(void)
unsigned int __fastcall CExplosion::Update(CExplosion *this)
{
  int i; // r6
  int *v2; // r4
  unsigned int result; // r0
  unsigned int v4; // r1
  unsigned int v5; // r1
  CEntity *v6; // r4
  int *v7; // r5
  float v8; // s4
  unsigned int v9; // r0
  int *v10; // r9
  float v11; // r11
  __int64 v12; // kr08_8
  int v13; // r0
  int v14; // r3
  int *v15; // r2
  float v16; // s21
  int v17; // r0
  int v18; // s0
  int v19; // r0
  float v20; // s0
  float v21; // s4
  float v22; // s6
  float v23; // s0
  int v24; // r1
  float *v25; // r2
  char v26; // r0
  int *v27; // r4
  int *v28; // r5
  float v29; // s0
  double v30; // d16
  float v31; // s4
  float v32; // s6
  float v33; // s0
  float v34; // s4
  FxSystem_c *FxSystem; // r0
  float v36; // s0
  float v37; // s2
  double v38; // d16
  float v39; // s0
  float v40; // s4
  float v41; // s2
  float v42; // s0
  FxSystem_c *v43; // r0
  float v44; // s0
  float v45; // s2
  double v46; // d16
  float v47; // s0
  float v48; // s4
  float v49; // s2
  float v50; // s0
  CEntity *v51; // [sp+4h] [bp-F4h]
  CEntity *v52; // [sp+4h] [bp-F4h]
  CEntity *v53; // [sp+4h] [bp-F4h]
  int v54; // [sp+Ch] [bp-ECh]
  int v55; // [sp+54h] [bp-A4h]
  double v56; // [sp+58h] [bp-A0h] BYREF
  float v57; // [sp+60h] [bp-98h]
  _BYTE v58[4]; // [sp+64h] [bp-94h] BYREF
  double v59; // [sp+68h] [bp-90h] BYREF
  float v60; // [sp+70h] [bp-88h] BYREF
  _BYTE v61[100]; // [sp+94h] [bp-64h] BYREF

  CRGBA::CRGBA((CRGBA *)v61, 0, 0, 0, 0);
  for ( i = 0; i != 496; i += 31 )
  {
    v2 = &dword_A84370[i];
    result = LOBYTE(dword_A84370[i + 10]);
    if ( LOBYTE(dword_A84370[i + 10]) )
    {
      result = (unsigned int)&dword_A84370[i];
      v4 = dword_A84370[i + 12];
      if ( v4 )
      {
        if ( CTimer::m_snTimeInMilliseconds > v4 )
        {
          *(_DWORD *)(result + 48) = 0;
          result = (unsigned int)&dword_A84370[i];
          if ( *(float *)&dword_A84370[i + 13] != 0.0 )
          {
            v5 = dword_A84370[i] - 2;
            if ( v5 > 8 )
              v6 = 0;
            else
              v6 = (CEntity *)((0x1C9u >> v5) & 1);
            result = CWorld::TriggerExplosion(
                       (CWorld *)&dword_A84370[i + 1],
                       (const CVector *)dword_A84370[i + 4],
                       *(float *)&dword_A84370[i + 13],
                       *(float *)&dword_A84370[i + 7],
                       (CEntity *)dword_A84370[i + 6],
                       v6,
                       *(float *)&dword_A84370[i + 9],
                       *(float *)&v54);
          }
        }
      }
      else
      {
        v7 = &dword_A84370[i];
        v8 = *(float *)&dword_A84370[i + 8];
        *(float *)&dword_A84370[i + 4] = *(float *)&dword_A84370[i + 4]
                                       + (float)(*(float *)&dword_A84370[i + 5] * *(float *)&CTimer::ms_fTimeStep);
        v9 = dword_A84370[i];
        v55 = (int)(float)(v8 - (float)(unsigned int)CTimer::m_snTimeInMilliseconds);
        if ( v9 <= 9 )
        {
          v10 = v7 + 3;
          v11 = *((float *)v7 + 3);
          v12 = *(_QWORD *)(v7 + 1);
          if ( ((1 << v9) & 0x38D) != 0 )
          {
            if ( (unsigned __int8)CTimer::m_FrameCounter << 31 )
            {
              v51 = 0;
              v54 = 1101004800;
              CPointLights::AddLight();
              v9 = *v7;
            }
            if ( v9 == 7 && (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 4 )
            {
              v13 = dword_A84370[i + 7];
              if ( v13 )
              {
                v14 = *(_DWORD *)(v13 + 20);
                v15 = (int *)(v14 + 48);
                if ( !v14 )
                  v15 = (int *)(v13 + 4);
                CExplosion::AddExplosion(v13, dword_A84370[i + 6], 2, *v15, v15[1], v15[2], 0, 1, -1.0, 0);
              }
            }
          }
          else if ( ((1 << v9) & 0x70) != 0 )
          {
            if ( dword_A84370[i + 7] && (rand() & 0x1F) == 0 )
            {
              v16 = (float)rand();
              v17 = rand();
              v60 = 0.0;
              *(float *)&v59 = (float)(v16 * 4.6566e-10) + -0.5;
              *((float *)&v59 + 1) = (float)((float)v17 * 4.6566e-10) + -0.5;
              CVector::Normalise((CVector *)&v59);
              v18 = rand();
              v19 = dword_A84370[i + 7];
              v20 = (float)((float)v18 * 4.6566e-10) + 1.0;
              v21 = *((float *)&v59 + 1) * v20;
              v22 = v20 * v60;
              v23 = *(float *)&v59 * v20;
              *((float *)&v59 + 1) = v21;
              v60 = v22;
              v24 = *(_DWORD *)(v19 + 20);
              v25 = (float *)(v24 + 48);
              if ( !v24 )
                v25 = (float *)(v19 + 4);
              *(float *)&v59 = *v25 + v23;
              *((float *)&v59 + 1) = v25[1] + v21;
              v60 = (float)(v25[2] + v22) + 2.0;
              v51 = 0;
              CCreepingFire::TryToStartFireAtCoors();
            }
            if ( (unsigned __int8)CTimer::m_FrameCounter << 31 )
            {
              v51 = 0;
              v54 = 1097859072;
              CPointLights::AddLight();
            }
          }
          else
          {
            CWorld::SetPedsOnFire(
              (CWorld *)v12,
              *((float *)&v12 + 1),
              *((float *)v7 + 3),
              6.0,
              (CPed *)dword_A84370[i + 6],
              v51);
            CWorld::SetCarsOnFire((CWorld *)v12, *((float *)&v12 + 1), v11, 6.0, (CEntity *)dword_A84370[i + 6], v52);
            CWorld::SetWorldOnFire((CWorld *)v12, *((float *)&v12 + 1), v11, 0.1, *(float *)&dword_A84370[i + 6], v53);
            if ( *((_BYTE *)v2 + 40) == 1 )
            {
              v57 = *(float *)&dword_A84370[i + 3];
              v56 = *(double *)&dword_A84370[i + 1];
              v57 = v57 + 5.0;
              if ( CWorld::ProcessVerticalLine((CVector *)&v56, -998637568, (int)&v59, (int)v58, 1, 0, 0, 0, 1, 0, 0) )
                v10 = (int *)&v60;
              dword_A84370[i + 14] = *v10;
            }
          }
        }
        if ( v55 < 1 )
          v26 = 0;
        else
          v26 = *((_BYTE *)v2 + 40) + 1;
        *((_BYTE *)v2 + 40) = v26;
        v27 = &dword_A84370[i];
        result = dword_A84370[i + 15] + (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
        dword_A84370[i + 15] = result;
        if ( (*v7 & 0xFFFFFFFC) == 4 && result <= 0xC8 )
        {
          v28 = &dword_A84370[i + 1];
          v29 = *(float *)&dword_A84370[i + 25];
          if ( v29 > 0.0 )
          {
            v30 = *(double *)v28;
            v31 = *(float *)&dword_A84370[i + 28];
            v32 = *(float *)&dword_A84370[i + 18];
            v60 = *(float *)&dword_A84370[i + 3];
            v59 = v30;
            v33 = v29 + (float)(v31 * (float)((float)result * 0.001));
            v34 = *(float *)&dword_A84370[i + 17] * v33;
            *(float *)&v59 = (float)(*(float *)&dword_A84370[i + 16] * v33) + *(float *)&v30;
            *((float *)&v59 + 1) = v34 + *((float *)&v30 + 1);
            v60 = (float)(v33 * v32) + v60;
            FxSystem = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                       (int)&g_fxMan,
                                       (CKeyGen *)"explosion_fuel_car",
                                       (int)&v59,
                                       0,
                                       0);
            if ( FxSystem )
              FxSystem_c::PlayAndKill(FxSystem);
          }
          v36 = *(float *)&dword_A84370[i + 26];
          if ( v36 > 0.0 )
          {
            v37 = (float)(unsigned int)v27[15];
            v38 = *(double *)v28;
            v60 = *(float *)&dword_A84370[i + 3];
            v59 = v38;
            v39 = v36 + (float)(*(float *)&dword_A84370[i + 29] * (float)(v37 * 0.001));
            v40 = *(float *)&dword_A84370[i + 20] * v39;
            v41 = *(float *)&dword_A84370[i + 19] * v39;
            v42 = v39 * *(float *)&dword_A84370[i + 21];
            *(float *)&v59 = v41 + *(float *)&v38;
            *((float *)&v59 + 1) = v40 + *((float *)&v38 + 1);
            v60 = v42 + v60;
            v43 = (FxSystem_c *)FxManager_c::CreateFxSystem(
                                  (int)&g_fxMan,
                                  (CKeyGen *)"explosion_fuel_car",
                                  (int)&v59,
                                  0,
                                  0);
            if ( v43 )
              FxSystem_c::PlayAndKill(v43);
          }
          result = (unsigned int)&dword_A84370[i];
          v44 = *(float *)&dword_A84370[i + 27];
          if ( v44 > 0.0 )
          {
            v45 = (float)(unsigned int)v27[15];
            v46 = *(double *)v28;
            v60 = *(float *)&dword_A84370[i + 3];
            v59 = v46;
            v47 = v44 + (float)(*(float *)&dword_A84370[i + 30] * (float)(v45 * 0.001));
            v48 = *(float *)&dword_A84370[i + 23] * v47;
            v49 = *(float *)&dword_A84370[i + 22] * v47;
            v50 = v47 * *(float *)&dword_A84370[i + 24];
            *(float *)&v59 = v49 + *(float *)&v46;
            *((float *)&v59 + 1) = v48 + *((float *)&v46 + 1);
            v60 = v50 + v60;
            result = FxManager_c::CreateFxSystem((int)&g_fxMan, (CKeyGen *)"explosion_fuel_car", (int)&v59, 0, 0);
            if ( result )
              result = FxSystem_c::PlayAndKill((FxSystem_c *)result);
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x5d9094
// Original: _ZN10CExplosion22TestForExplosionInAreaEiffffff
// Demangled: CExplosion::TestForExplosionInArea(int,float,float,float,float,float,float)
int __fastcall CExplosion::TestForExplosionInArea(
        CExplosion *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8)
{
  char *v10; // r1
  int v11; // r2
  bool v13; // zf
  float v14; // s12
  float v15; // s12
  float v16; // s12

  v10 = &byte_A84398;
  v11 = -1;
  while ( 1 )
  {
    if ( *v10 )
    {
      v13 = (CExplosion *)((char *)this + 1) == 0;
      if ( this != (CExplosion *)-1 )
        v13 = *((_DWORD *)v10 - 10) == (_DWORD)this;
      if ( v13 )
      {
        v14 = *((float *)v10 - 9);
        if ( v14 >= a2 && v14 <= a3 )
        {
          v15 = *((float *)v10 - 8);
          if ( v15 >= a4 && v15 <= a5 )
          {
            v16 = *((float *)v10 - 7);
            if ( v16 >= a6 && v16 <= a7 )
              break;
          }
        }
      }
    }
    ++v11;
    v10 += 124;
    if ( v11 >= 15 )
      return 0;
  }
  return 1;
}


// ============================================================

// Address: 0x5d912c
// Original: _ZN10CExplosion25RemoveAllExplosionsInAreaE7CVectorf
// Demangled: CExplosion::RemoveAllExplosionsInArea(CVector,float)
int *__fastcall CExplosion::RemoveAllExplosionsInArea(float a1, float a2, float a3, float a4)
{
  float v4; // s0
  int i; // r3
  int *result; // r0

  v4 = a4 * a4;
  for ( i = 0; i != 496; i += 31 )
  {
    result = &dword_A84370[i];
    if ( LOBYTE(dword_A84370[i + 10]) )
    {
      if ( (float)((float)((float)((float)(a1 - *(float *)&dword_A84370[i + 1])
                                 * (float)(a1 - *(float *)&dword_A84370[i + 1]))
                         + (float)((float)(a2 - *(float *)&dword_A84370[i + 2])
                                 * (float)(a2 - *(float *)&dword_A84370[i + 2])))
                 + (float)((float)(a3 - *(float *)&dword_A84370[i + 3]) * (float)(a3 - *(float *)&dword_A84370[i + 3]))) < v4 )
        *((_BYTE *)result + 40) = 0;
    }
  }
  return result;
}


// ============================================================
