
// Address: 0x18adb8
// Original: j__ZN4CBmx15ProcessBunnyHopEv
// Demangled: CBmx::ProcessBunnyHop(void)
// attributes: thunk
int __fastcall CBmx::ProcessBunnyHop(CBmx *this)
{
  return _ZN4CBmx15ProcessBunnyHopEv(this);
}


// ============================================================

// Address: 0x19f468
// Original: j__ZN4CBmxC2Eih
// Demangled: CBmx::CBmx(int,uchar)
// attributes: thunk
void __fastcall CBmx::CBmx(CBmx *this, int a2, unsigned __int8 a3)
{
  _ZN4CBmxC2Eih(this, a2, a3);
}


// ============================================================

// Address: 0x568964
// Original: _ZN4CBmxC2Eih
// Demangled: CBmx::CBmx(int,uchar)
void __fastcall CBmx::CBmx(CBmx *this, int a2, unsigned __int8 a3)
{
  float v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r4
  int v9; // r6
  float v10; // s16
  int v11; // r4
  __int64 v12; // [sp+30h] [bp-38h]
  __int64 v13; // [sp+30h] [bp-38h]

  CBike::CBike(this, a2, a3);
  *(_DWORD *)this = &off_66D918;
  v5 = CModelInfo::ms_modelInfoPtrs[a2];
  *((_DWORD *)this + 361) = 10;
  v6 = *(_DWORD *)&CAnimManager::ms_aAnimBlocks[32
                                              * (*(int (__fastcall **)(float))(*(_DWORD *)LODWORD(v5) + 60))(COERCE_FLOAT(LODWORD(v5)))
                                              + 28];
  *((_QWORD *)this + 261) = 0LL;
  *((_QWORD *)this + 262) = 0LL;
  *((_WORD *)this + 996) = 0;
  *((_BYTE *)this + 2120) = 0;
  *((_DWORD *)this + 526) = 0;
  *((_DWORD *)this + 527) = 0;
  if ( (unsigned int)(v6 - 7) > 2 )
    v6 = 7;
  *((_DWORD *)this + 405) = v6;
  v7 = *((_DWORD *)this + 369);
  v12 = *(_QWORD *)(v7 + 64);
  v8 = *(_DWORD *)(v7 + 4);
  while ( v8 )
  {
    RwMatrixTransform();
    v8 = *(_DWORD *)(v8 + 4);
    if ( v8 == v7 )
      v8 = 0;
  }
  v9 = *((_DWORD *)this + 370);
  v10 = *((float *)&v12 + 1);
  v13 = *(_QWORD *)(v9 + 64);
  v11 = *(_DWORD *)(v9 + 4);
  while ( v11 )
  {
    RwMatrixTransform();
    v11 = *(_DWORD *)(v11 + 4);
    if ( v11 == v9 )
      v11 = 0;
  }
  *((float *)this + 528) = v10 - *((float *)&v13 + 1);
  *((float *)this + 529) = v10 / (float)(v10 - *((float *)&v13 + 1));
}


// ============================================================

// Address: 0x568ac0
// Original: _ZN4CBmxD2Ev
// Demangled: CBmx::~CBmx()
void __fastcall CBmx::~CBmx(CBmx *this)
{
  *(_DWORD *)this = &off_66D918;
  CAEVehicleAudioEntity::Terminate((CBmx *)((char *)this + 316));
  sub_19BF34(this);
}


// ============================================================

// Address: 0x568ae8
// Original: _ZN4CBmxD0Ev
// Demangled: CBmx::~CBmx()
void __fastcall CBmx::~CBmx(CBmx *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_66D918;
  CAEVehicleAudioEntity::Terminate((CBmx *)((char *)this + 316));
  CBike::~CBike(this);
  sub_199F80(v2);
}


// ============================================================

// Address: 0x568b14
// Original: _ZN4CBmx14ProcessControlEv
// Demangled: CBmx::ProcessControl(void)
unsigned int __fastcall CBmx::ProcessControl(CBmx *this)
{
  unsigned int result; // r0
  float v3; // s4
  float v4; // s6
  float v5; // s0
  float v6; // s2
  int Association; // r0
  float v8; // s0
  float *v9; // r1
  float v10; // s16
  float v11; // s0
  float v12; // s0
  float *v13; // r3
  float v14; // s16
  int v15; // r0
  float v16; // s0

  CBike::ProcessControl(this);
  result = *((unsigned __int8 *)this + 28) << 25;
  if ( (*((_BYTE *)this + 28) & 0x40) == 0 )
  {
    v3 = 0.5;
    v4 = 0.5;
    v5 = *(float *)&dword_A0257C + (float)(*(float *)&CTimer::ms_fTimeStep / -50.0);
    if ( v5 < 0.0 )
      v4 = 0.0;
    if ( v5 < 0.5 )
      v3 = v4;
    v6 = v3;
    if ( v5 < 0.5 )
      v6 = *(float *)&dword_A0257C + (float)(*(float *)&CTimer::ms_fTimeStep / -50.0);
    if ( v5 < 0.0 )
      v6 = v3;
    dword_A0257C = LODWORD(v6);
    result = *((unsigned __int8 *)this + 58);
    if ( result <= 7 )
    {
      result = *((_DWORD *)this + 281);
      if ( result )
      {
        Association = RpAnimBlendClumpGetAssociation();
        if ( Association && (v8 = *(float *)(Association + 24), v8 > 0.01) )
        {
          v9 = (float *)&BMX_SPRINT_LEANMULT;
          if ( *((_WORD *)this + 19) == 510 )
            v9 = (float *)&MTB_SPRINT_LEANMULT;
          v10 = v8 * *v9;
          v11 = sinf(
                  BMX_SPRINT_LEANSTART
                + (float)((float)(*(float *)(Association + 32) * 6.2832) / *(float *)(*(_DWORD *)(Association + 20) + 16)));
          result = (unsigned int)this + 2096;
          v12 = v10 * v11;
        }
        else
        {
          v13 = (float *)&BMX_PEDAL_LEANMULT;
          if ( *((_WORD *)this + 19) == 510 )
            v13 = (float *)&MTB_PEDAL_LEANMULT;
          v14 = *v13;
          v15 = RpAnimBlendClumpGetAssociation();
          if ( v15 )
          {
            v16 = *(float *)(v15 + 24);
            if ( v16 > 0.01 )
              *((float *)this + 407) = *((float *)this + 407)
                                     + (float)((float)(v14 * v16)
                                             * sinf(
                                                 BMX_PEDAL_LEANSTART
                                               + (float)((float)(*(float *)(v15 + 32) * 6.2832)
                                                       / *(float *)(*(_DWORD *)(v15 + 20) + 16))));
          }
          result = (unsigned int)this + 2096;
          v12 = *((float *)this + 524) * 0.95;
        }
        *(float *)result = v12;
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x568ce4
// Original: _ZN4CBmx9ProcessAIERj
// Demangled: CBmx::ProcessAI(uint &)
int __fastcall CBmx::ProcessAI(CBmx *this, unsigned int *a2)
{
  float32x2_t v2; // d0
  float32x2_t v3; // d1
  float32x2_t v4; // d2
  float32x2_t v5; // d3
  CVehicle *v8; // r1
  unsigned int v9; // r3
  float v10; // r6
  CPed *v11; // r0
  CPad *PadFromPlayer; // r8
  CPlayerPed *v13; // r9
  float v14; // s2
  int v15; // r0
  float v16; // s0
  float v17; // s4
  CVehicle *v18; // r1
  int v19; // r0
  float v20; // s0
  char v21; // r2
  int v22; // r0
  char v23; // r1
  CVehicle *v24; // r1
  char v25; // r2
  __int64 v26; // r0
  float v27; // s0
  float v28; // s4
  float v29; // s2
  int v30; // r0
  unsigned int v31; // r1
  int v32; // r1
  char v33; // r0
  char v34; // r0
  _DWORD *v35; // r0
  unsigned int v36; // r0
  _BYTE *v37; // r3
  float *v38; // r0
  float v39; // s0
  float v40; // s2
  int v41; // r0
  int v42; // r5
  int v43; // r0
  float v44; // s0
  char v45; // r0
  float *v46; // r0
  float v47; // s16
  float v48; // s0
  float v49; // s2
  float v50; // s4
  float v51; // s6
  float v52; // s0
  float *v53; // r0
  float v54; // s6
  float v55; // s6
  int v57; // r2
  bool v58; // zf
  int *v59; // r3
  float v60; // s0
  float v61; // s4
  float v62; // s18
  float *v63; // r5
  CPad *v64; // r0
  _BOOL4 v65; // r6
  int Association; // r5
  CBmx *v67; // r2
  int v68; // r0
  float v69; // r0
  char v70; // r0
  float32x2_t v71; // d0
  float v72; // s0
  int AccelerateJustDown; // r0
  float *v74; // r1
  int v75; // r1
  CPad *Pad; // r0

  v8 = (CVehicle *)*((__int16 *)this + 19);
  v9 = *((unsigned __int8 *)this + 58);
  v10 = CModelInfo::ms_modelInfoPtrs[(_DWORD)v8];
  *(_WORD *)((char *)this + 991) &= 0xFFFCu;
  *((_BYTE *)this + 2120) = 0;
  switch ( v9 >> 3 )
  {
    case 0u:
      *a2 += 2;
      v11 = (CPed *)*((_DWORD *)this + 281);
      *((_BYTE *)this + 1576) &= ~8u;
      if ( !v11 || CPed::IsPlayer(v11) != 1 )
        goto LABEL_31;
      (*(void (__fastcall **)(CBmx *, _DWORD))(*(_DWORD *)this + 100))(
        this,
        *(unsigned __int8 *)(*((_DWORD *)this + 281) + 1436));
      PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(*((CPlayerPed **)this + 281));
      v13 = (CPlayerPed *)*((_DWORD *)this + 281);
      v14 = *((float *)this + 409);
      v15 = *((_DWORD *)this + 404);
      v16 = *(float *)(*((_DWORD *)this + 226) + 24);
      if ( v14 >= 0.0 )
      {
        v61 = *((float *)this + 297);
        *((float *)this + 43) = v16 + (float)(v14 * *(float *)(v15 + 4));
        if ( v61 < 0.0 || !*((_BYTE *)this + 2072) )
        {
          v4.n64_f32[0] = (float)((float)(*((float *)this + 18) * *((float *)this + 18))
                                + (float)(*((float *)this + 19) * *((float *)this + 19)))
                        + (float)(*((float *)this + 20) * *((float *)this + 20));
          goto LABEL_79;
        }
      }
      else
      {
        v17 = *((float *)this + 297);
        *((float *)this + 43) = v16 + (float)(v14 * *(float *)(v15 + 12));
        if ( v17 == 0.0 && (*((_BYTE *)this + 1068) & 0x20) == 0 || !*((_BYTE *)this + 2072) )
        {
          v4.n64_f32[0] = (float)(*((float *)this + 20) * *((float *)this + 20))
                        + (float)((float)(*((float *)this + 18) * *((float *)this + 18))
                                + (float)(*((float *)this + 19) * *((float *)this + 19)));
LABEL_79:
          v4.n64_f32[0] = sqrtf(v4.n64_f32[0]);
          v5.n64_u32[0] = 1036831949;
          v4.n64_u64[0] = vmin_f32(v4, v5).n64_u64[0];
          CPhysical::ApplyTurnForce();
        }
      }
      CEntity::PruneReferences(this);
      if ( *((unsigned __int8 *)this + 58) <= 7u )
        CVehicle::DoDriveByShootings(this);
      CBike::DoSoftGroundResistance(this, a2);
      if ( *((float *)this + 457) == 1.0
        && *((float *)this + 458) == 1.0
        && *((float *)this + 459) == 1.0
        && *((float *)this + 460) == 1.0 )
      {
        if ( (v62 = (float)((float)(*((float *)this + 21) * *(float *)(*((_DWORD *)this + 5) + 32))
                          + (float)(*((float *)this + 22) * *(float *)(*((_DWORD *)this + 5) + 36)))
                  + (float)(*((float *)this + 23) * *(float *)(*((_DWORD *)this + 5) + 40)),
              v62 < 0.04)
          && CPad::GetSteeringLeftRight(PadFromPlayer) < 0
          || v62 > -0.04 && CPad::GetSteeringLeftRight(PadFromPlayer) >= 1 )
        {
          CPad::GetSteeringLeftRight(PadFromPlayer);
          CPhysical::ApplyTurnForce();
        }
      }
      if ( *(float *)&dword_A0257C == 0.0 )
        CBmx::ProcessBunnyHop(this);
      v63 = (float *)((char *)this + 1176);
      if ( fabsf(*((float *)this + 294)) < 0.0001 )
        *v63 = 0.0;
      v64 = (CPad *)CPlayerPed::GetPadFromPlayer(v13);
      if ( CPad::GetAccelerate(v64) )
        v65 = *v63 == 0.0;
      else
        v65 = 0;
      Association = RpAnimBlendClumpGetAssociation();
      if ( COERCE_FLOAT(CPlayerPed::ControlButtonSprint()) > 1.2
        || (v69 = COERCE_FLOAT(CPlayerPed::GetButtonSprintResults()), Association)
        && v69 > 1.0
        && *(float *)(Association + 24) > 0.5 )
      {
        *((_BYTE *)this + 1576) |= 0x20u;
        v68 = *(_DWORD *)(*((_DWORD *)v13 + 273) + 28);
LABEL_100:
        *((_DWORD *)this + 523) = v68;
        goto LABEL_116;
      }
      if ( v65 )
      {
        v70 = *((_BYTE *)this + 1576);
        *((_DWORD *)this + 523) = 1084227794;
        *((_BYTE *)this + 1576) = v70 | 0x20;
        goto LABEL_116;
      }
      v3.n64_u32[0] = 0.5;
      v2.n64_f32[0] = (float)((float)((float)CPad::GetAccelerate(PadFromPlayer) / -255.0) * 0.5) + 1.0;
      v71.n64_u64[0] = vmax_f32(v2, v3).n64_u64[0];
      CPlayerPed::HandleSprintEnergy(v13, 0, v71.n64_f32[0]);
      if ( COERCE_FLOAT(CPlayerPed::GetButtonSprintResults()) > 0.0 )
      {
        v72 = *((float *)this + 296);
        *((_DWORD *)this + 523) = 1084017869;
        if ( v72 == 0.0 && *((float *)this + 297) == 0.0 )
          *((_DWORD *)this + 296) = 1065353216;
        goto LABEL_116;
      }
      if ( *(float *)(*((_DWORD *)v13 + 273) + 24) >= 0.0 )
      {
        v68 = 0;
        goto LABEL_100;
      }
      AccelerateJustDown = CPad::GetAccelerateJustDown(PadFromPlayer);
      v74 = (float *)((char *)this + 2092);
      if ( AccelerateJustDown == 1 )
      {
        *v74 = 4.9;
      }
      else
      {
        v4.n64_u32[0] = 0;
        v71.n64_f32[0] = *v74 + -0.4;
        *(_DWORD *)v74 = vmax_f32(v71, v4).n64_u32[0];
      }
LABEL_116:
      CStats::UpdateStatsWhenCycling((CStats *)((*((unsigned __int8 *)this + 1576) >> 5) & 1), (bool)this, v67);
      if ( (unsigned __int8)((*((_BYTE *)this + 1202) & 7) - 1) <= 1u )
      {
        Pad = (CPad *)CPad::GetPad(0, v75);
        if ( CPad::UseBomb(Pad) == 1 )
          CVehicle::ActivateBomb(this);
      }
LABEL_31:
      if ( !*((_DWORD *)this + 281) )
        goto LABEL_51;
      v41 = RpAnimBlendClumpGetAssociation();
      v42 = v41;
      if ( !v41 || *(float *)(v41 + 24) < 0.5 )
        v42 = RpAnimBlendClumpGetAssociation();
      v43 = RpAnimBlendClumpGetAssociation();
      if ( v43 )
      {
        v44 = *(float *)(v43 + 24);
        if ( v44 >= 0.5 )
        {
LABEL_39:
          if ( v44 >= 0.5 )
            goto LABEL_41;
          goto LABEL_40;
        }
      }
      v43 = RpAnimBlendClumpGetAssociation();
      if ( v43 )
      {
        v44 = *(float *)(v43 + 24);
        goto LABEL_39;
      }
LABEL_40:
      v43 = RpAnimBlendClumpGetAssociation();
LABEL_41:
      if ( v42 && *(float *)(v42 + 24) > 0.5 || v43 && *(float *)(v43 + 24) > 0.5 )
      {
        v45 = *((_BYTE *)this + 1068);
        *((_DWORD *)this + 296) = 0;
        if ( (v45 & 0x20) == 0
          && (*((float *)this + 457) < 1.0
           || *((float *)this + 458) < 1.0
           || *((float *)this + 459) < 1.0
           || *((float *)this + 460) < 1.0) )
        {
          *((_BYTE *)this + 2120) = 1;
        }
        return 1;
      }
LABEL_51:
      if ( *((float *)this + 523) > 5.0 && (*((float *)this + 459) < 1.0 || *((float *)this + 460) < 1.0) )
      {
        v46 = (float *)*((_DWORD *)this + 5);
        v47 = 2.0;
        v48 = v46[4];
        v49 = v46[5];
        v50 = v46[6];
        v51 = (float)((float)((float)((float)((float)(*((float *)this + 18) * v48) + (float)(*((float *)this + 19) * v49))
                                    + (float)(*((float *)this + 20) * v50))
                            / *(float *)(*((_DWORD *)this + 226) + 136))
                    * -1.5)
            + 2.4;
        if ( v51 <= 2.0 )
        {
          v47 = (float)((float)((float)((float)((float)(*((float *)this + 18) * v48)
                                              + (float)(*((float *)this + 19) * v49))
                                      + (float)(*((float *)this + 20) * v50))
                              / *(float *)(*((_DWORD *)this + 226) + 136))
                      * -1.5)
              + 2.4;
          if ( v51 < 0.0 )
            v47 = 0.0;
        }
        if ( *((unsigned __int8 *)this + 58) > 7u )
        {
          v54 = v47 * 1.25;
          if ( (*((_BYTE *)this + 1075) & 2) == 0 )
            v54 = v47;
        }
        else
        {
          v52 = COERCE_FLOAT(CStats::GetFatAndMuscleModifier());
          v53 = (float *)*((_DWORD *)this + 5);
          v54 = v47 * v52;
          v48 = v53[4];
          v49 = v53[5];
          v50 = v53[6];
        }
        v55 = *(float *)&CTimer::ms_fTimeStep * (float)((float)((float)(v54 * 0.25) * *((float *)this + 36)) * 0.008);
        CPhysical::ApplyMoveForce(this, v48 * v55, v55 * v49, v55 * v50);
      }
      return 1;
    case 1u:
      *a2 += 2;
      goto LABEL_31;
    case 2u:
      CCarAI::UpdateCarAI(this, v8);
      CPhysical::ProcessControl(this);
      CCarCtrl::UpdateCarOnRails(this, v18);
      v19 = *((_DWORD *)this + 226);
      v20 = *((float *)this + 243) / 50.0;
      v21 = *((_BYTE *)this + 2073);
      *((_BYTE *)this + 2072) = 2;
      *((_BYTE *)this + 2073) = 2;
      *((_BYTE *)this + 2074) = v21;
      cTransmission::CalculateGearForSimpleCar((cTransmission *)(v19 + 44), v20, (unsigned __int8 *)this + 1216);
      *((float *)this + 473) = COERCE_FLOAT(
                                 CVehicle::ProcessWheelRotation(
                                   (int)this,
                                   0,
                                   *((_DWORD *)this + 5) + 16,
                                   (int)this + 72,
                                   *(float *)(LODWORD(v10) + 88) * 0.5))
                             + *((float *)this + 473);
      *((float *)this + 474) = COERCE_FLOAT(
                                 CVehicle::ProcessWheelRotation(
                                   (int)this,
                                   0,
                                   *((_DWORD *)this + 5) + 16,
                                   (int)this + 72,
                                   *(float *)(LODWORD(v10) + 92) * 0.5))
                             + *((float *)this + 474);
      CBike::PlayHornIfNecessary(this);
      CBike::ReduceHornCounter(this);
      v22 = *((_DWORD *)this + 267);
      *((_DWORD *)this + 523) = 0;
      v23 = *((_BYTE *)this + 1576);
      *((_DWORD *)this + 267) = v22 & 0xDEFFFFFF;
      goto LABEL_29;
    case 3u:
      CCarAI::UpdateCarAI(this, v8);
      CCarCtrl::SteerAICarWithPhysics(this, v24);
      CBike::PlayHornIfNecessary(this);
      *a2 += 2;
      v25 = *((_BYTE *)this + 1576);
      v26 = *(_QWORD *)((char *)this + 1068);
      *((_BYTE *)this + 1576) = v25 & 0x7F;
      if ( (v26 & 0x80000) != 0 )
      {
        *((_DWORD *)this + 296) = 0;
        *((_DWORD *)this + 297) = 1065353216;
        LODWORD(v26) = v26 | 0x20;
        *(_QWORD *)((char *)this + 1068) = v26;
      }
      else
      {
        *((_BYTE *)this + 1576) = v25 & 0x77;
      }
      v38 = (float *)((char *)this + 2092);
      v39 = *((float *)this + 523);
      if ( v39 > 0.0 )
      {
        if ( v39 <= 5.0 )
        {
          v59 = dword_5697B0;
          if ( (v26 & 0x200000000000000LL) != 0 )
            v59 = &dword_5697B0[1];
          v40 = *(float *)v59;
        }
        else
        {
          v40 = 0.02;
        }
        v60 = v39 - (float)(*(float *)&CTimer::ms_fTimeStep * v40);
        *v38 = v60;
        if ( v60 < 0.0 )
          *v38 = 0.0;
      }
      goto LABEL_31;
    case 4u:
      v27 = *((float *)this + 18) * *((float *)this + 18);
      v28 = *((float *)this + 20);
      v29 = *((float *)this + 19) * *((float *)this + 19);
      *((_DWORD *)this + 297) = 0;
      if ( (float)((float)(v27 + v29) + (float)(v28 * v28)) < 0.01 || (*((_BYTE *)this + 1576) & 0x10) != 0 )
      {
        v30 = *((_DWORD *)this + 268);
        v31 = *((_DWORD *)this + 267) | 0x20;
      }
      else
      {
        v30 = *((_DWORD *)this + 268);
        v31 = *((_DWORD *)this + 267) & 0xFFFFFFDF;
      }
      *((_DWORD *)this + 267) = v31;
      *((_DWORD *)this + 329) = 0;
      *((_DWORD *)this + 296) = 0;
      if ( *((_DWORD *)this + 281) )
        goto LABEL_21;
      v57 = *((_DWORD *)this + 282);
      v58 = v57 == 0;
      if ( !v57 )
        v58 = (v31 & 0x80000) == 0;
      if ( v58 )
      {
        v37 = (char *)this + 1576;
      }
      else
      {
LABEL_21:
        v37 = (char *)this + 1576;
        if ( (*((_BYTE *)this + 1576) & 0x10) == 0 )
        {
          *a2 += 2;
          v31 = *((_DWORD *)this + 267);
          v30 = *((_DWORD *)this + 268);
        }
      }
      *((_DWORD *)this + 410) = 0;
      *((_DWORD *)this + 411) = 0;
      *v37 &= ~0x80u;
      *((_DWORD *)this + 523) = 0;
      if ( (v31 & 0x80000) != 0 )
      {
        *((_DWORD *)this + 296) = 0;
        *((_DWORD *)this + 297) = 1065353216;
        *((_DWORD *)this + 267) = v31 | 0x20;
        *((_DWORD *)this + 268) = v30;
      }
      goto LABEL_31;
    case 5u:
      v32 = *((_DWORD *)this + 267);
      *((_DWORD *)this + 294) = 0;
      *((_DWORD *)this + 296) = 0;
      *((_DWORD *)this + 297) = 1028443341;
      *((_DWORD *)this + 329) = 0;
      *((_DWORD *)this + 523) = 0;
      *((_DWORD *)this + 410) = 0;
      *((_DWORD *)this + 411) = 0;
      v33 = *((_BYTE *)this + 1576);
      *((_DWORD *)this + 267) = v32 | 0x20;
      v34 = v33 & 0x7F;
      goto LABEL_30;
    case 9u:
      v35 = (_DWORD *)((char *)this + 1188);
      if ( (float)((float)((float)(*((float *)this + 18) * *((float *)this + 18))
                         + (float)(*((float *)this + 19) * *((float *)this + 19)))
                 + (float)(*((float *)this + 20) * *((float *)this + 20))) >= 0.01 )
      {
        *v35 = 0;
        v36 = *((_DWORD *)this + 267) & 0xFFFFFFDF;
      }
      else
      {
        *v35 = 1065353216;
        v36 = *((_DWORD *)this + 267) | 0x20;
      }
      *((_DWORD *)this + 267) = v36;
      *((_DWORD *)this + 296) = 0;
      *((_DWORD *)this + 294) = 0;
      *((_DWORD *)this + 329) = 0;
      *a2 += 2;
      v23 = *((_BYTE *)this + 1576);
      *((_DWORD *)this + 523) = 0;
LABEL_29:
      v34 = v23 & 0x7F;
LABEL_30:
      *((_BYTE *)this + 1576) = v34;
      goto LABEL_31;
    default:
      goto LABEL_31;
  }
}


// ============================================================

// Address: 0x5697f8
// Original: _ZN4CBmx15ProcessBunnyHopEv
// Demangled: CBmx::ProcessBunnyHop(void)
unsigned int __fastcall CBmx::ProcessBunnyHop(CBmx *this)
{
  float32x2_t v1; // d0
  float32x2_t v2; // d2
  int Association; // r5
  unsigned int result; // r0
  CPad *PadFromPlayer; // r0
  float *v7; // r9
  CPad *v8; // r8
  unsigned int v9; // r1
  unsigned int v10; // r6
  int v11; // r0
  int v12; // r0
  int BunnyHopDown; // r0
  int v14; // r1
  bool v15; // zf
  float v16; // s0
  float v17; // s2

  if ( *((_DWORD *)this + 281) )
    Association = RpAnimBlendClumpGetAssociation();
  else
    Association = 0;
  result = *((unsigned __int8 *)this + 58);
  if ( result <= 7 )
  {
    result = *((_DWORD *)this + 281);
    if ( result )
    {
      result = CPed::IsPlayer((CPed *)result);
      if ( result == 1 )
      {
        PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(*((CPlayerPed **)this + 281));
        v7 = (float *)((char *)this + 2088);
        v8 = PadFromPlayer;
        if ( *((float *)this + 522) == 0.0 && CPad::GetBunnyHopDown(PadFromPlayer) == 1 )
        {
          *v7 = *(float *)&CTimer::ms_fTimeStep + *v7;
          Association = CAnimManager::BlendAnimation(
                          *(_DWORD *)(*((_DWORD *)this + 281) + 24),
                          *((_DWORD *)this + 405),
                          0xCEu);
          CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)Association, 0.0);
          *(_WORD *)(Association + 46) &= ~1u;
        }
        result = CPad::GetBunnyHop(v8);
        v10 = result;
        if ( result || *v7 > 0.0 )
        {
          CWidgetHelpText::ConditionSatisfied((CWidgetHelpText *)&dword_20, v9);
          if ( !*((_WORD *)v8 + 136) )
          {
            if ( v10 )
            {
              Association = CAnimManager::BlendAnimation(
                              *(_DWORD *)(*((_DWORD *)this + 281) + 24),
                              *((_DWORD *)this + 405),
                              0xCEu);
              CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)Association, 0.0);
              *(_WORD *)(Association + 46) &= ~1u;
              *v7 = 25.0;
              result = CAnimBlendAssociation::SetCurrentTime((CAnimBlendAssociation *)Association, 0.2);
              if ( !Association )
                return result;
            }
            else
            {
              if ( !Association )
              {
                result = 0;
                *v7 = 0.0;
                return result;
              }
              BunnyHopDown = CPad::GetBunnyHopDown(v8);
              v14 = *(unsigned __int16 *)(Association + 46);
              v15 = BunnyHopDown == 1;
              if ( BunnyHopDown == 1 )
                v15 = (v14 & 1) == 0;
              if ( v15 )
              {
                v2.n64_u32[0] = 25.0;
                v1.n64_f32[0] = *(float *)&CTimer::ms_fTimeStep + *v7;
                v16 = vmin_f32(v1, v2).n64_f32[0];
                *v7 = v16;
                result = CAnimBlendAssociation::SetCurrentTime(
                           (CAnimBlendAssociation *)Association,
                           (float)(v16 * 0.2) / 25.0);
              }
              else
              {
                result = v14 << 31;
                if ( !(v14 << 31) )
                {
                  v17 = *(float *)(Association + 32);
                  if ( v17 < 0.2 )
                  {
                    CAnimBlendAssociation::SetCurrentTime(
                      (CAnimBlendAssociation *)Association,
                      (float)((float)((float)(0.2 - v17) / 0.2)
                            * (float)(*(float *)(*(_DWORD *)(Association + 20) + 16) + -0.2))
                    + 0.2);
                    LOWORD(v14) = *(_WORD *)(Association + 46);
                  }
                  *(_WORD *)(Association + 46) = v14 | 1;
                  *(_DWORD *)(Association + 36) = 1069547520;
                  result = CAnimBlendAssociation::SetFinishCallback(
                             (CAnimBlendAssociation *)Association,
                             (void (*)(CAnimBlendAssociation *, void *))CBmx::LaunchBunnyHopCB,
                             this);
                }
              }
            }
            goto LABEL_20;
          }
          result = 0;
          *v7 = 0.0;
          if ( !Association )
            return result;
        }
        else if ( !Association )
        {
          return result;
        }
        v12 = *(unsigned __int16 *)(Association + 46);
        *(_DWORD *)(Association + 28) = -1056964608;
        result = v12 | 5;
        *(_WORD *)(Association + 46) = result;
LABEL_20:
        if ( *(float *)(Association + 24) > 0.5 )
        {
          *((_DWORD *)this + 296) = 0;
          *(_DWORD *)(*(_DWORD *)(FindPlayerPed(-1) + 1092) + 28) = 0;
          result = *((unsigned __int8 *)this + 1068) << 26;
          if ( (*((_BYTE *)this + 1068) & 0x20) == 0 )
          {
            if ( *((float *)this + 457) < 1.0
              || *((float *)this + 458) < 1.0
              || *((float *)this + 459) < 1.0
              || (result = (unsigned int)this + 1840, *((float *)this + 460) < 1.0) )
            {
              result = 1;
              *((_BYTE *)this + 2120) = 1;
            }
          }
        }
        return result;
      }
    }
  }
  if ( Association )
  {
    v11 = *(unsigned __int16 *)(Association + 46);
    *(_DWORD *)(Association + 28) = -1056964608;
    result = v11 | 5;
    *(_WORD *)(Association + 46) = result;
  }
  return result;
}


// ============================================================

// Address: 0x569a7c
// Original: _ZN4CBmx19ProcessDrivingAnimsEP4CPedh
// Demangled: CBmx::ProcessDrivingAnims(CPed *,uchar)
char *__fastcall CBmx::ProcessDrivingAnims(CBmx *this, CPed *a2, unsigned __int8 a3)
{
  char *result; // r0
  int Association; // r0
  float v7; // s0
  float *v8; // r1
  float v9; // s16
  float v10; // s22
  float v11; // s26
  float v12; // s24
  float v13; // s20
  float v14; // s18
  int v15; // r11
  int v16; // r6
  int v17; // r10
  int v18; // r9
  int v19; // r8
  int *v20; // r2
  float v21; // s4
  float v22; // s0
  int *v23; // r0
  float v24; // s4
  float v25; // s6
  float v26; // s16
  __int16 v27; // r0
  __int16 v28; // r0
  __int16 v29; // r0
  float v30; // s0
  float v31; // s16
  float *v32; // r6
  float v33; // s0
  float v34; // s2
  float v35; // s0
  float v36; // s2
  float v37; // s0
  float v38; // s2
  float v39; // s0
  float v40; // s0
  char v41; // r0
  float v42; // s0
  float v43; // s2
  float v44; // s2
  float v45; // s0
  int v46; // r0
  int v47; // r0
  __int16 v48; // r1
  __int16 v49; // r1
  float v50; // s0
  float v51; // s16
  float v52; // s0
  float v53; // s2
  int v54; // [sp+4h] [bp-54h]

  result = (char *)(*((unsigned __int8 *)this + 30) << 30);
  if ( (int)result >= 0 || a2 && (result = (char *)CPed::IsPlayer(a2), result == (_BYTE *)&stderr + 1) )
  {
    *((_WORD *)this + 996) = 257;
    Association = RpAnimBlendClumpGetAssociation();
    if ( Association )
    {
      v7 = (float)(*(float *)(Association + 24) * 1.5708)
         + (float)((float)(1.0 - *(float *)(Association + 24)) * *((float *)this + 525));
      *((float *)this + 525) = v7;
LABEL_67:
      v45 = -v7;
      *((float *)this + 527) = v45;
      result = (char *)this + 2104;
      *((float *)this + 526) = v45;
      return result;
    }
    if ( *((_DWORD *)a2 + 273) )
      CPed::SetMoveState(a2, 0);
    v8 = (float *)*((_DWORD *)this + 5);
    v9 = *((float *)this + 18);
    v10 = v8[4];
    v11 = v8[5];
    v12 = v8[6];
    v13 = *((float *)this + 19);
    v14 = *((float *)this + 20);
    v15 = RpAnimBlendClumpGetAssociation();
    v16 = RpAnimBlendClumpGetAssociation();
    v17 = RpAnimBlendClumpGetAssociation();
    v18 = RpAnimBlendClumpGetAssociation();
    v54 = RpAnimBlendClumpGetAssociation();
    v19 = RpAnimBlendClumpGetAssociation();
    if ( !v19 )
    {
      v19 = RpAnimBlendClumpGetAssociation();
      if ( !v19 )
        v19 = RpAnimBlendClumpGetAssociation();
    }
    v20 = (int *)((char *)this + 1620);
    v21 = fabsf(*((float *)this + 407));
    v22 = *((float *)this + 523);
    v23 = dword_56A214;
    if ( v22 > 5.0 )
      v23 = &dword_56A214[1];
    if ( v21 < *(float *)v23 && !v19 )
    {
      v24 = (float)((float)(v9 * v10) + (float)(v13 * v11)) + (float)(v14 * v12);
      if ( v24 > 0.01 && *((float *)this + 409) < *(float *)v23 )
      {
        if ( *((_WORD *)this + 19) == 510 )
        {
          v25 = 2.0;
          if ( *((_BYTE *)this + 1216) )
            v26 = (float)(v24 * 5.0)
                / (float)((float)(*(float *)(*((_DWORD *)this + 226) + 136) * (float)*((unsigned __int8 *)this + 1216))
                        + -0.25);
          else
            v26 = 0.0;
        }
        else
        {
          v25 = 2.5;
          v26 = v24 * 3.0;
        }
        if ( v26 < v25 && v22 > 5.0 )
        {
          if ( v16 && (*(float *)(v16 + 24) >= 1.0 || *(float *)(v16 + 28) > 0.0) )
          {
            v46 = 0;
          }
          else
          {
            v16 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *v20, 0xD0u);
            v46 = 1;
          }
          *(_WORD *)(v16 + 46) |= 1u;
          if ( v15 )
          {
            v48 = *(_WORD *)(v15 + 46);
            v16 = v15;
            *(float *)(v15 + 36) = v26;
            *(_WORD *)(v15 + 46) = v48 | 1;
            if ( !v46 )
              goto LABEL_106;
          }
          else
          {
            *(float *)(v16 + 36) = v26;
            if ( !v46 )
            {
LABEL_106:
              v51 = (float)((float)(*(float *)(v16 + 32) * -6.2832) / *(float *)(*(_DWORD *)(v16 + 20) + 16)) + 0.0;
LABEL_107:
              *((float *)this + 525) = v51;
              goto LABEL_108;
            }
          }
LABEL_94:
          if ( v17 && *(float *)(v17 + 24) > 0.5 )
          {
            v50 = 3.1416;
          }
          else if ( v18 && *(float *)(v18 + 24) > 0.5 )
          {
            v50 = 0.0;
          }
          else
          {
            if ( !v54 || *(float *)(v54 + 24) <= 0.5 )
              goto LABEL_106;
            v50 = 1.5708;
          }
          v51 = (float)(0.0 - v50) / 6.2832;
          if ( v51 < 0.0 )
            v51 = v51 + 1.0;
          CAnimBlendAssociation::SetCurrentTime(
            (CAnimBlendAssociation *)v16,
            *(float *)(*(_DWORD *)(v16 + 20) + 16) * v51);
          goto LABEL_107;
        }
        if ( v22 <= 0.0 && *((float *)this + 296) == 0.0 && (*((_BYTE *)this + 58) & 0xF8) != 0x10 )
        {
          if ( v15 && (*(float *)(v15 + 24) >= 1.0 || *(float *)(v15 + 28) > 0.0) )
          {
            v47 = 0;
            v16 = v15;
          }
          else
          {
            v16 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *v20, 0xCFu);
            v47 = 1;
          }
          *(_WORD *)(v16 + 46) &= ~1u;
          if ( (*((_BYTE *)this + 1068) & 0x20) == 0
            && (*((float *)this + 461) < 1.0
             || *((float *)this + 462) < 1.0
             || *((float *)this + 463) < 1.0
             || *((float *)this + 464) < 1.0) )
          {
            *((_BYTE *)this + 2120) = 1;
            if ( v16 )
            {
LABEL_91:
              if ( v47 != 1 )
                goto LABEL_106;
              goto LABEL_94;
            }
LABEL_121:
            *((float *)this + 525) = powf(0.97, *(float *)&CTimer::ms_fTimeStep) * *((float *)this + 525);
LABEL_108:
            v52 = *((float *)this + 410);
            v53 = *((float *)this + 411);
            if ( fabsf(v52) > 0.05 )
            {
              *((float *)this + 410) = v52 * 0.95;
              *((float *)this + 411) = v53 * 0.95;
            }
            goto LABEL_51;
          }
        }
        else
        {
          if ( v15 && (*(float *)(v15 + 24) >= 1.0 || *(float *)(v15 + 28) > 0.0) )
          {
            v47 = 0;
            v16 = v15;
          }
          else
          {
            v16 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), *v20, 0xCFu);
            v47 = 1;
          }
          v49 = *(_WORD *)(v16 + 46);
          *(float *)(v16 + 36) = v26;
          *(_WORD *)(v16 + 46) = v49 | 1;
        }
        if ( v16 )
          goto LABEL_91;
        goto LABEL_121;
      }
    }
    if ( v15 && *(float *)(v15 + 28) >= 0.0 && *(float *)(v15 + 24) > 0.0 )
    {
      v27 = *(_WORD *)(v15 + 46);
      *(_DWORD *)(v15 + 28) = -1056964608;
      *(_WORD *)(v15 + 46) = v27 & 0xFFFE;
      if ( !v16 )
      {
LABEL_31:
        v30 = *((float *)this + 411) * 0.95;
        *((float *)this + 410) = *((float *)this + 410) * 0.95;
        *((float *)this + 411) = v30;
        if ( !(v15 | v16) )
        {
LABEL_32:
          v31 = 0.0;
          goto LABEL_37;
        }
LABEL_34:
        if ( v15 )
          v16 = v15;
        v31 = (float)((float)(*(float *)(v16 + 32) * -6.2832) / *(float *)(*(_DWORD *)(v16 + 20) + 16)) + 0.0;
LABEL_37:
        v32 = (float *)((char *)this + 2100);
        *((float *)this + 525) = v31;
        if ( v17 && (v33 = *(float *)(v17 + 24), v33 > 0.1) )
        {
          v34 = 1.0 - v33;
          v35 = v33 * 3.1416;
          v36 = v31 * v34;
        }
        else
        {
          if ( !v18 || (v37 = *(float *)(v18 + 24), v37 <= 0.1) )
          {
            if ( v54 && (v39 = *(float *)(v54 + 24), v39 > 0.1) )
              v40 = (float)(v39 * 1.5708) + (float)((float)(1.0 - v39) * v31);
            else
              v40 = powf(0.97, *(float *)&CTimer::ms_fTimeStep) * v31;
            *v32 = v40;
LABEL_49:
            if ( v19 )
            {
              *((_BYTE *)this + 2120) = 1;
              *((_BYTE *)this + 1993) = 0;
            }
LABEL_51:
            if ( CPed::IsPlayer(a2) == 1 )
            {
              v41 = *((_BYTE *)this + 1576);
              v42 = *((float *)this + 465);
              *((_BYTE *)this + 1576) = v41 & 0x7F;
              if ( v42 > 0.0
                || *((float *)this + 466) > 0.0
                || (v43 = *(float *)(*((_DWORD *)this + 5) + 24), v43 <= 0.0)
                || *((float *)this + 467) <= 0.0 && *((float *)this + 468) <= 0.0 )
              {
                if ( *((float *)this + 467) > 0.0 )
                  goto LABEL_66;
                if ( *((float *)this + 468) > 0.0 )
                  goto LABEL_66;
                v44 = *(float *)(*((_DWORD *)this + 5) + 24);
                if ( v44 >= 0.0 || v42 <= 0.0 && *((float *)this + 466) <= 0.0 )
                  goto LABEL_66;
                if ( (float)(*(float *)(*((_DWORD *)this + 404) + 48) - v44) <= (float)(*(float *)(*((_DWORD *)this + 404)
                                                                                                 + 48)
                                                                                      * 0.6) )
                  goto LABEL_66;
              }
              else if ( (float)(*(float *)(*((_DWORD *)this + 404) + 44) - v43) >= (float)(*(float *)(*((_DWORD *)this + 404) + 44)
                                                                                         * 0.5) )
              {
                goto LABEL_66;
              }
              *((_BYTE *)this + 1576) = v41 | 0x80;
            }
LABEL_66:
            v7 = *((float *)this + 525);
            goto LABEL_67;
          }
          v38 = 1.0 - v37;
          v35 = v37 * 0.0;
          v36 = v38 * v31;
        }
        *v32 = v35 + v36;
        *((_BYTE *)this + 2120) = 1;
        goto LABEL_49;
      }
    }
    else
    {
      if ( !v16 || *(float *)(v16 + 28) < 0.0 || *(float *)(v16 + 24) <= 0.0 )
      {
        CBike::ProcessRiderAnims();
        if ( !(v15 | v16) )
          goto LABEL_32;
        goto LABEL_34;
      }
      if ( v15 )
      {
        v28 = *(_WORD *)(v15 + 46);
        *(_DWORD *)(v15 + 28) = -1056964608;
        *(_WORD *)(v15 + 46) = v28 & 0xFFFE;
      }
    }
    v29 = *(_WORD *)(v16 + 46);
    *(_DWORD *)(v16 + 28) = -1056964608;
    *(_WORD *)(v16 + 46) = v29 & 0xFFFE;
    goto LABEL_31;
  }
  return result;
}


// ============================================================

// Address: 0x56a240
// Original: _ZN4CBmx16LaunchBunnyHopCBEP21CAnimBlendAssociationPv
// Demangled: CBmx::LaunchBunnyHopCB(CAnimBlendAssociation *,void *)
int *__fastcall CBmx::LaunchBunnyHopCB(CBmx *this, CAnimBlendAssociation *a2, void *a3)
{
  int *result; // r0
  float v5; // s0
  float v6; // s16
  float v7; // s18

  if ( *((float *)a2 + 465) > 0.0 || (result = (int *)((char *)a2 + 1864), *((float *)a2 + 466) > 0.0) )
  {
    if ( *((float *)a2 + 467) > 0.0 || (result = (int *)((char *)a2 + 1872), *((float *)a2 + 468) > 0.0) )
    {
      v5 = *((float *)a2 + 522) / 25.0;
      v6 = v5 + 1.0;
      if ( v5 > 1.0 )
        v6 = 2.0;
      if ( *((unsigned __int8 *)a2 + 58) <= 7u )
        v6 = v6 * COERCE_FLOAT(CStats::GetFatAndMuscleModifier());
      v7 = v6 * 5.0;
      if ( !byte_79682D )
        v7 = v6;
      CPhysical::ApplyMoveForce(
        a2,
        *(float *)(*((_DWORD *)a2 + 5) + 32) * (float)(*((float *)a2 + 36) * (float)(v7 * 0.06)),
        *(float *)(*((_DWORD *)a2 + 5) + 36) * (float)(*((float *)a2 + 36) * (float)(v7 * 0.06)),
        (float)(*((float *)a2 + 36) * (float)(v7 * 0.06)) * *(float *)(*((_DWORD *)a2 + 5) + 40));
      CPhysical::ApplyTurnForce();
      result = &dword_A0257C;
      dword_A0257C = 1056964608;
    }
  }
  return result;
}


// ============================================================

// Address: 0x56a398
// Original: _ZN4CBmx14GetFrameOffsetERfS0_
// Demangled: CBmx::GetFrameOffset(float &,float &)
float __fastcall CBmx::GetFrameOffset(CBmx *this, float *a2, float *a3)
{
  float v4; // s0
  float v5; // s2
  float result; // r0

  v4 = *((float *)this + 477) - *((float *)this + 479);
  v5 = *((float *)this + 478) - *((float *)this + 480);
  *a2 = (float)(*((float *)this + 529) * v5) + (float)(v4 * (float)(1.0 - *((float *)this + 529)));
  result = atan2f(v4 - v5, *((float *)this + 528));
  *a3 = result;
  return result;
}


// ============================================================

// Address: 0x56a3fc
// Original: _ZN4CBmx9PreRenderEv
// Demangled: CBmx::PreRender(void)
void __fastcall CBmx::PreRender(CBmx *this)
{
  float32x2_t v1; // d3
  float32x2_t v2; // d4
  float32x2_t v3; // d5
  float32x2_t v4; // d6
  CBmx *v5; // r10
  int v6; // r4
  float v7; // s2
  float v8; // s6
  float v9; // s8
  float v10; // s0
  float v11; // s6
  float v12; // s4
  float v13; // s10
  float v14; // s2
  float v15; // s4
  float v16; // s0
  int v17; // r9
  float v18; // s16
  int v19; // r8
  int v20; // r11
  int v21; // r0
  float **v22; // r4
  char *v23; // r10
  float v24; // s24
  float v25; // s26
  float v26; // r6
  float v27; // s0
  double *v28; // r0
  double v29; // d16
  float v30; // s0
  float *v31; // r1
  char *v32; // r5
  float v33; // s6
  float v34; // s2
  float v35; // s4
  float **v36; // r1
  float v37; // s0
  int v38; // r3
  int v39; // r2
  int v40; // r4
  int v41; // r6
  int v42; // r1
  int v43; // r0
  float v44; // r5
  float v45; // r11
  float v46; // r0
  const CVector *v47; // r6
  int v48; // r0
  double v49; // d16
  float v50; // r0
  float v51; // r0
  float v52; // s16
  float v53; // s18
  float v54; // s20
  float v55; // s2
  float v56; // s0
  float v57; // s20
  float v58; // s18
  float v59; // s16
  float v60; // r5
  float v61; // s16
  float v62; // s18
  float v63; // s20
  float v64; // s16
  float v65; // s18
  float v66; // s0
  float v67; // s20
  float v68; // r0
  float v69; // s16
  float v70; // s18
  float v71; // s0
  float v72; // s20
  float v73; // r0
  float v74; // s16
  float v75; // s18
  float v76; // s20
  float v77; // r6
  float v78; // s22
  float v79; // s24
  float v80; // s28
  float v81; // s26
  float v82; // r0
  float v83; // s16
  float v84; // s18
  float v85; // s20
  float v86; // s16
  float v87; // s18
  float v88; // s20
  float v89; // s16
  float v90; // s18
  float v91; // s20
  int v92; // [sp+4h] [bp-1F4h]
  int ColModel; // [sp+20h] [bp-1D8h]
  float *v94; // [sp+28h] [bp-1D0h]
  float *v95; // [sp+2Ch] [bp-1CCh]
  float *v96; // [sp+30h] [bp-1C8h]
  float *v97; // [sp+34h] [bp-1C4h]
  float *v98; // [sp+38h] [bp-1C0h]
  _DWORD v99[3]; // [sp+3Ch] [bp-1BCh] BYREF
  char v100; // [sp+58h] [bp-1A0h] BYREF
  _BYTE v101[64]; // [sp+98h] [bp-160h] BYREF
  char *v102; // [sp+D8h] [bp-120h]
  int v103; // [sp+DCh] [bp-11Ch]
  double v104; // [sp+E0h] [bp-118h] BYREF
  int v105; // [sp+E8h] [bp-110h]
  _BYTE v106[12]; // [sp+ECh] [bp-10Ch] BYREF
  double v107; // [sp+F8h] [bp-100h] BYREF
  float v108; // [sp+100h] [bp-F8h]
  _BYTE v109[48]; // [sp+108h] [bp-F0h] BYREF
  float v110; // [sp+138h] [bp-C0h]
  float v111; // [sp+13Ch] [bp-BCh]
  float v112; // [sp+140h] [bp-B8h]
  int v113; // [sp+148h] [bp-B0h]
  int v114; // [sp+14Ch] [bp-ACh]
  double v115; // [sp+150h] [bp-A8h] BYREF
  float v116; // [sp+158h] [bp-A0h]

  v5 = this;
  CVehicle::PreRender(this);
  ColModel = CEntity::GetColModel(v5);
  v6 = *(_DWORD *)(ColModel + 44);
  if ( *((unsigned __int8 *)v5 + 1071) << 31 )
  {
    (*(void (__fastcall **)(CBmx *))(*(_DWORD *)v5 + 212))(v5);
    v1.n64_u32[0] = *((_DWORD *)v5 + 457);
    v7 = *((float *)v5 + 481);
    v2.n64_u32[0] = *((_DWORD *)v5 + 458);
    v8 = vmin_f32(v2, v1).n64_f32[0];
    v9 = *((float *)v5 + 483);
    v4.n64_u32[0] = *((_DWORD *)v5 + 460);
    v10 = (float)(v8 - (float)(1.0 - (float)(v7 / *((float *)v5 + 485))))
        / (float)(1.0 - (float)(1.0 - (float)(v7 / *((float *)v5 + 485))));
    v11 = 1.0 - (float)(v9 / *((float *)v5 + 487));
    v3.n64_u32[0] = *((_DWORD *)v5 + 459);
    v12 = 1.0 - v11;
    v13 = vmin_f32(v4, v3).n64_f32[0] - v11;
    v1.n64_u32[0] = *(_DWORD *)(*(_DWORD *)(v6 + 16) + 8);
    v14 = v1.n64_f32[0] - (float)(v7 * v10);
    v15 = v13 / v12;
    if ( v10 > 0.0 )
      v1.n64_f32[0] = v14;
    *((float *)v5 + 477) = *((float *)v5 + 477) + (float)((float)(v1.n64_f32[0] - *((float *)v5 + 477)) * 0.75);
    v16 = *(float *)(*(_DWORD *)(v6 + 16) + 72);
    if ( v15 > 0.0 )
      v16 = v16 - (float)(v9 * v15);
    *((float *)v5 + 478) = *((float *)v5 + 478) + (float)((float)(v16 - *((float *)v5 + 478)) * 0.75);
  }
  if ( *((unsigned __int8 *)v5 + 58) < 0x20u )
  {
    v95 = (float *)((char *)v5 + 1852);
    v97 = (float *)((char *)v5 + 1856);
    v98 = (float *)((char *)v5 + 1628);
    v17 = 0;
    v94 = (float *)((char *)v5 + 1848);
    v96 = (float *)((char *)v5 + 1844);
    v18 = sqrtf(
            (float)((float)(*((float *)v5 + 18) * *((float *)v5 + 18))
                  + (float)(*((float *)v5 + 19) * *((float *)v5 + 19)))
          + (float)(*((float *)v5 + 20) * *((float *)v5 + 20)));
    while ( v17 )
    {
      if ( *v97 < 1.0 || *v95 >= 1.0 )
        v19 = 3;
      else
        v19 = 2;
      if ( *((_DWORD *)v5 + 521) == 3 )
        goto LABEL_20;
      v20 = 0;
LABEL_21:
      v21 = CEntity::GetColModel(v5);
      v22 = (float **)v5;
      v23 = (char *)v5 + 44 * (__int16)v19;
      v24 = *v98;
      v25 = *(float *)(v21 + 8) * 0.8;
      v26 = *((float *)v23 + 415);
      v27 = sinf(*v98);
      v28 = (double *)(v23 + 1652);
      v5 = (CBmx *)v22;
      v29 = *v28;
      v30 = v25 * v27;
      v116 = v26;
      v115 = v29;
      v31 = v22[5];
      v32 = (char *)v22 + v17;
      v33 = v31[2];
      v34 = v30 * *v31;
      v35 = v30 * v31[1];
      v36 = &v22[v17];
      *(float *)&v115 = v34 + *(float *)&v29;
      *((float *)&v115 + 1) = v35 + *((float *)&v29 + 1);
      v116 = (float)(v30 * v33) + v26;
      v37 = 1.0;
      v38 = (int)v22[v19 + 461];
      v39 = *((unsigned __int8 *)v22 + v17 + 1648);
      v40 = *((unsigned __int8 *)v22 + v17 + 1888);
      v41 = (int)v36[470];
      v42 = (int)v36[520];
      v92 = (int)v28;
      if ( v24 > 0.0 )
        v37 = -1.0;
      v43 = v20 | v40;
      if ( v32[1890] )
        v43 |= 2u;
      CVehicle::AddSingleWheelParticles(
        (int)v5,
        v42,
        v39,
        v38,
        v18,
        v92,
        (int)&v115,
        SLODWORD(v37),
        v17++,
        v41,
        (int)(v32 + 1888),
        v43);
      if ( v17 == 2 )
        goto LABEL_26;
    }
    v19 = *v96 >= 1.0 && *v94 < 1.0;
LABEL_20:
    v20 = 4;
    goto LABEL_21;
  }
LABEL_26:
  *((_BYTE *)v5 + 1500) = 0;
  CBike::CalculateLeanMatrix(v5);
  CShadows::StoreShadowForVehicle(v5);
  v113 = 0;
  v114 = 0;
  v44 = *((float *)v5 + 294);
  v45 = CModelInfo::ms_modelInfoPtrs[*((__int16 *)v5 + 19)];
  v46 = cosf(v44);
  v47 = (const CVector *)*((_DWORD *)v5 + 5);
  *((float *)&v115 + 1) = v46;
  LODWORD(v115) = COERCE_UNSIGNED_INT(sinf(v44)) ^ 0x80000000;
  v116 = 0.0;
  Multiply3x3((const CMatrix *)v106, v47);
  v48 = *((_DWORD *)v5 + 5);
  v49 = *(double *)(v48 + 16);
  v105 = *(_DWORD *)(v48 + 24);
  v104 = v49;
  if ( *((float *)v5 + 465) > 0.0 || *((float *)v5 + 466) > 0.0 )
  {
    CPhysical::GetSpeed();
    v108 = v116;
    v107 = v115;
    v50 = COERCE_FLOAT(CVehicle::ProcessWheelRotation((int)v5, 0, (int)v106, (int)&v107, *(float *)(LODWORD(v45) + 88) * 0.5));
    *((float *)v5 + 475) = v50;
    *((float *)v5 + 473) = *((float *)v5 + 473) + (float)(v50 * *(float *)&CTimer::ms_fTimeStep);
  }
  if ( *((float *)v5 + 467) > 0.0 || *((float *)v5 + 468) > 0.0 )
  {
    CPhysical::GetSpeed();
    v108 = v116;
    v107 = v115;
    v51 = COERCE_FLOAT(
            CVehicle::ProcessWheelRotation(
              (int)v5,
              *((_DWORD *)v5 + 521),
              (int)&v104,
              (int)&v107,
              *(float *)(LODWORD(v45) + 92) * 0.5));
    *((float *)v5 + 476) = v51;
    *((float *)v5 + 474) = *((float *)v5 + 474) + (float)(v51 * *(float *)&CTimer::ms_fTimeStep);
  }
  if ( *((_DWORD *)v5 + 367) )
  {
    CMatrix::Attach();
    v103 = 0;
    v102 = &v100;
    v52 = v110;
    v53 = v111;
    v54 = v112;
    CMatrix::SetUnity((CMatrix *)v101);
    CMatrix::UpdateRW((CMatrix *)v101);
    v55 = *(float *)(LODWORD(v45) + 112);
    v99[0] = 0;
    v56 = (float)(v55 * 3.1416) / 180.0;
    v99[1] = sinf(v56);
    v99[2] = COERCE_UNSIGNED_INT(cosf(v56)) ^ 0x80000000;
    CVector::Normalise((CVector *)v99);
    CQuaternion::Set();
    CQuaternion::Get();
    CMatrix::Update((CMatrix *)v101);
    CMatrix::SetUnity((CMatrix *)v109);
    operator*();
    CMatrix::operator=();
    CMatrix::~CMatrix((CMatrix *)&v115);
    v110 = v52 + v110;
    v111 = v53 + v111;
    v112 = v54 + v112;
    CMatrix::UpdateRW((CMatrix *)v109);
    if ( *((_DWORD *)v5 + 371) )
    {
      CMatrix::Attach();
      v57 = v110;
      v58 = v111;
      v59 = v112;
      if ( (*((_BYTE *)v5 + 58) & 0xF0) == 0x20 )
      {
        CMatrix::SetUnity((CMatrix *)v109);
        operator*();
        CMatrix::operator=();
        CMatrix::~CMatrix((CMatrix *)&v115);
        v110 = v57 + v110;
        v111 = v58 + v111;
        v112 = v59 + v112;
      }
      else
      {
        CMatrix::SetTranslate((CMatrix *)v109, v110, v111, v112);
      }
      CMatrix::UpdateRW((CMatrix *)v109);
    }
    CMatrix::~CMatrix((CMatrix *)v101);
  }
  if ( *((_DWORD *)v5 + 368) )
  {
    v60 = asinf((float)(*((float *)v5 + 478) - *((float *)v5 + 480)) / *((float *)v5 + 491));
    CMatrix::Attach();
    v61 = v110;
    v62 = v111;
    v63 = v112;
    CMatrix::SetRotate((CMatrix *)v109, COERCE_FLOAT(LODWORD(v60) ^ 0x80000000), 0.0, 0.0);
    v110 = v61 + v110;
    v111 = v62 + v111;
    v112 = v63 + v112;
    CMatrix::UpdateRW((CMatrix *)v109);
  }
  CMatrix::Attach();
  v64 = v110;
  v65 = v111;
  v66 = *((float *)v5 + 473);
  v67 = v112;
  if ( *((_BYTE *)v5 + 1648) == 1 )
  {
    v68 = sinf(*((float *)v5 + 473));
    CMatrix::SetRotate((CMatrix *)v109, v66, 0.0, v68 * 0.02);
  }
  else
  {
    CMatrix::SetRotateX((CMatrix *)v109, *((float *)v5 + 473));
  }
  v110 = v64 + v110;
  v111 = v65 + v111;
  v112 = v67 + v112;
  CMatrix::UpdateRW((CMatrix *)v109);
  CMatrix::Attach();
  v69 = v110;
  v70 = v111;
  v71 = *((float *)v5 + 474);
  v72 = v112;
  if ( *((_BYTE *)v5 + 1649) == 1 )
  {
    v73 = sinf(*((float *)v5 + 474));
    CMatrix::SetRotate((CMatrix *)v109, v71, 0.0, v73 * 0.04);
  }
  else
  {
    CMatrix::SetRotateX((CMatrix *)v109, *((float *)v5 + 474));
  }
  v110 = v69 + v110;
  v111 = v70 + v111;
  v112 = v72 + v112;
  CMatrix::UpdateRW((CMatrix *)v109);
  if ( *((_DWORD *)v5 + 366) )
  {
    v74 = *((float *)v5 + 478) - *((float *)v5 + 480);
    v75 = *((float *)v5 + 477) - *((float *)v5 + 479);
    v76 = *((float *)v5 + 529);
    v77 = atan2f(v75 - v74, *((float *)v5 + 528));
    CMatrix::Attach();
    v78 = *((float *)v5 + 407);
    v79 = v110;
    v80 = *(float *)(ColModel + 8);
    v81 = v111;
    CMatrix::SetRotateX((CMatrix *)v109, v77 + (float)(fabsf(v78) * -0.05));
    CMatrix::RotateY((CMatrix *)v109, *((float *)v5 + 407) + *((float *)v5 + 524));
    v82 = cosf(v78);
    v110 = v79 + v110;
    v111 = v81 + v111;
    v112 = (float)((float)((float)(v76 * v74) + (float)(v75 * (float)(1.0 - v76)))
                 + (float)((float)(v80 * 0.9) * (float)(1.0 - v82)))
         + v112;
    CMatrix::UpdateRW((CMatrix *)v109);
  }
  if ( *((_DWORD *)v5 + 372) )
  {
    CMatrix::Attach();
    v83 = v110;
    v84 = v111;
    v85 = v112;
    CMatrix::SetRotate((CMatrix *)v109, *((float *)v5 + 525), 0.0, 0.0);
    v110 = v83 + v110;
    v111 = v84 + v111;
    v112 = v85 + v112;
    CMatrix::UpdateRW((CMatrix *)v109);
  }
  if ( *((_DWORD *)v5 + 373) )
  {
    CMatrix::Attach();
    v86 = v110;
    v87 = v111;
    v88 = v112;
    CMatrix::SetRotate((CMatrix *)v109, *((float *)v5 + 526), 0.0, 0.0);
    v110 = v86 + v110;
    v111 = v87 + v111;
    v112 = v88 + v112;
    CMatrix::UpdateRW((CMatrix *)v109);
  }
  if ( *((_DWORD *)v5 + 374) )
  {
    CMatrix::Attach();
    v89 = v110;
    v90 = v111;
    v91 = v112;
    CMatrix::SetRotate((CMatrix *)v109, *((float *)v5 + 527), 0.0, 0.0);
    v110 = v89 + v110;
    v111 = v90 + v111;
    v112 = v91 + v112;
    CMatrix::UpdateRW((CMatrix *)v109);
  }
  CMatrix::~CMatrix((CMatrix *)v109);
}


// ============================================================

// Address: 0x56ae48
// Original: _ZN4CBmx9BlowUpCarEP7CEntityh
// Demangled: CBmx::BlowUpCar(CEntity *,uchar)
void __fastcall CBmx::BlowUpCar(CBmx *this, CEntity *a2, unsigned __int8 a3)
{
  ;
}


// ============================================================

// Address: 0x56ae4a
// Original: _ZN4CBmx18SetUpWheelColModelEP9CColModel
// Demangled: CBmx::SetUpWheelColModel(CColModel *)
int __fastcall CBmx::SetUpWheelColModel(CBmx *this, CColModel *a2)
{
  return 0;
}


// ============================================================

// Address: 0x56ae4e
// Original: _ZN4CBmx9BurstTyreEhb
// Demangled: CBmx::BurstTyre(uchar,bool)
int __fastcall CBmx::BurstTyre(CBmx *this, unsigned __int8 a2, bool a3)
{
  return 0;
}


// ============================================================

// Address: 0x56ae52
// Original: _ZN4CBmx14FindWheelWidthEb
// Demangled: CBmx::FindWheelWidth(bool)
int __fastcall CBmx::FindWheelWidth(CBmx *this, bool a2)
{
  return 1032805417;
}


// ============================================================
