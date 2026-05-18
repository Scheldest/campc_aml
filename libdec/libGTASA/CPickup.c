
// Address: 0x18b38c
// Original: j__ZN7CPickup6UpdateEP10CPlayerPedP8CVehiclei
// Demangled: CPickup::Update(CPlayerPed *,CVehicle *,int)
// attributes: thunk
int __fastcall CPickup::Update(CPickup *this, CPlayerPed *a2, CVehicle *a3, int a4)
{
  return _ZN7CPickup6UpdateEP10CPlayerPedP8CVehiclei(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18c944
// Original: j__ZN7CPickup21ExtractAmmoFromPickupEP10CPlayerPed
// Demangled: CPickup::ExtractAmmoFromPickup(CPlayerPed *)
// attributes: thunk
int __fastcall CPickup::ExtractAmmoFromPickup(CPickup *this, CPlayerPed *a2)
{
  return _ZN7CPickup21ExtractAmmoFromPickupEP10CPlayerPed(this, a2);
}


// ============================================================

// Address: 0x1921c0
// Original: j__ZN7CPickup23PickUpShouldBeInvisibleEv
// Demangled: CPickup::PickUpShouldBeInvisible(void)
// attributes: thunk
int __fastcall CPickup::PickUpShouldBeInvisible(CPickup *this)
{
  return _ZN7CPickup23PickUpShouldBeInvisibleEv(this);
}


// ============================================================

// Address: 0x199a94
// Original: j__ZN7CPickup19GiveUsAPickUpObjectEPP7CObjecti
// Demangled: CPickup::GiveUsAPickUpObject(CObject **,int)
// attributes: thunk
int __fastcall CPickup::GiveUsAPickUpObject(CPickup *this, CObject **a2, int a3)
{
  return _ZN7CPickup19GiveUsAPickUpObjectEPP7CObjecti(this, a2, a3);
}


// ============================================================

// Address: 0x1a07ac
// Original: j__ZN7CPickup14ProcessGunShotEP7CVectorS1_
// Demangled: CPickup::ProcessGunShot(CVector *,CVector *)
// attributes: thunk
int __fastcall CPickup::ProcessGunShot(CPickup *this, CVector *a2, CVector *a3)
{
  return _ZN7CPickup14ProcessGunShotEP7CVectorS1_(this, a2, a3);
}


// ============================================================

// Address: 0x31d0e4
// Original: _ZN7CPickup6RemoveEv
// Demangled: CPickup::Remove(void)
int __fastcall CPickup::Remove(CPickup *this)
{
  CEntity *v2; // r1
  CWorld *v3; // r0
  int v4; // r0
  int v5; // r0
  int result; // r0

  CRadar::ClearBlipForEntity();
  v3 = (CWorld *)*((_DWORD *)this + 1);
  if ( v3 )
  {
    CWorld::Remove(v3, v2);
    v4 = *((_DWORD *)this + 1);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    *((_DWORD *)this + 1) = 0;
  }
  v5 = *((unsigned __int8 *)this + 29);
  *((_BYTE *)this + 28) = 0;
  result = v5 | 1;
  *((_BYTE *)this + 29) = result;
  return result;
}


// ============================================================

// Address: 0x31d468
// Original: _ZN7CPickup29IsPickUpCloseEnoughForObjectsEv
// Demangled: CPickup::IsPickUpCloseEnoughForObjects(void)
bool __fastcall CPickup::IsPickUpCloseEnoughForObjects(CPickup *this)
{
  int16x4_t v1; // d16
  float32x2_t *v2; // r2
  float32x2_t v3; // d16
  float32x2_t v4; // d16
  unsigned __int64 v5; // d0

  v1.n64_u32[0] = *((_DWORD *)this + 4);
  v2 = (float32x2_t *)(dword_951FBC + 48);
  v3.n64_u64[0] = vmul_f32(vcvt_f32_s32((int32x2_t)vmovl_s16(v1).n128_u64[0]), (float32x2_t)0x3E0000003E000000LL).n64_u64[0];
  if ( !dword_951FBC )
    v2 = (float32x2_t *)&qword_951FAC;
  v4.n64_u64[0] = vsub_f32((float32x2_t)v2->n64_u64[0], v3).n64_u64[0];
  v5 = vmul_f32(v4, v4).n64_u64[0];
  return sqrtf(*(float *)&v5 + *((float *)&v5 + 1)) < 100.0;
}


// ============================================================

// Address: 0x31d4c0
// Original: _ZN7CPickup19GiveUsAPickUpObjectEPP7CObjecti
// Demangled: CPickup::GiveUsAPickUpObject(CObject **,int)
void __fastcall CPickup::GiveUsAPickUpObject(CPickup *this, CObject **a2, CPools *a3)
{
  float v6; // r0
  int v7; // r1
  bool v8; // r2
  int v9; // r2
  CEntity *v10; // r0
  CObject *v11; // r0
  CEntity *v12; // r0
  int v13; // r1
  float v14; // s0
  float v15; // s2
  float v16; // s4
  float *v17; // r0
  CEntity *v18; // r6
  float *v19; // r0
  float v20; // s16
  float v21; // s18
  float v22; // s20
  float *v23; // r0
  float v24; // s2
  float v25; // s4
  CEntity *v26; // r0
  __int64 v27; // kr00_8
  CEntity *v28; // r0
  __int64 v29; // kr08_8
  CEntity *v30; // r0
  __int64 v31; // kr10_8
  int v32; // r0
  int v33; // r0
  int v34; // r0

  *a2 = 0;
  if ( CCutsceneMgr::ms_cutsceneLoadStatus == 2 )
    return;
  v6 = CModelInfo::ms_modelInfoPtrs[*((unsigned __int16 *)this + 12)];
  if ( (*(int (__fastcall **)(float))(*(_DWORD *)LODWORD(v6) + 20))(COERCE_FLOAT(LODWORD(v6))) == 4 )
    CWeaponInfo::GetWeaponInfo();
  if ( (int)a3 < 0 )
  {
    v10 = (CEntity *)CObject::Create((CObject *)*((unsigned __int16 *)this + 12), 0, v8);
LABEL_8:
    *a2 = v10;
    if ( !v10 )
      return;
    goto LABEL_9;
  }
  CPools::MakeSureSlotInObjectPoolIsEmpty(a3, v7);
  v10 = *a2;
  if ( !*a2 )
  {
    v11 = (CObject *)CObject::operator new((CObject *)&elf_hash_bucket[34], (_DWORD)a3 << 8, v9);
    CObject::CObject(v11, *((unsigned __int16 *)this + 12), 0);
    goto LABEL_8;
  }
LABEL_9:
  *((_BYTE *)v10 + 320) = 5;
  v12 = *a2;
  v13 = *((_DWORD *)*a2 + 5);
  v14 = (float)*((__int16 *)this + 10) * 0.125;
  v15 = (float)*((__int16 *)this + 9) * 0.125;
  v16 = (float)*((__int16 *)this + 8) * 0.125;
  if ( v13 )
  {
    *(float *)(v13 + 48) = v16;
    *(float *)(*((_DWORD *)v12 + 5) + 52) = v15;
    v17 = (float *)(*((_DWORD *)v12 + 5) + 56);
  }
  else
  {
    *((float *)v12 + 1) = v16;
    *((float *)v12 + 2) = v15;
    v17 = (float *)((char *)v12 + 12);
  }
  *v17 = v14;
  v18 = *a2;
  if ( *((__int16 *)*a2 + 19) == (unsigned __int16)MI_OYSTER )
  {
    *((_DWORD *)v18 + 7) |= 0x100000u;
    v18 = *a2;
  }
  v19 = (float *)*((_DWORD *)v18 + 5);
  if ( v19 )
  {
    v20 = v19[12];
    v21 = v19[13];
    v22 = v19[14];
    CMatrix::SetRotate((CMatrix *)v19, 0.0, 0.0, -1.5708);
    v23 = (float *)*((_DWORD *)v18 + 5);
    v24 = v21 + v23[13];
    v25 = v22 + v23[14];
    v23[12] = v20 + v23[12];
    v23[13] = v24;
    v23[14] = v25;
  }
  else
  {
    *((_DWORD *)v18 + 4) = -1077342245;
  }
  if ( *((_DWORD *)*a2 + 6) )
  {
    if ( *((_DWORD *)*a2 + 5) )
      CMatrix::UpdateRwMatrix();
    else
      CSimpleTransform::UpdateRwMatrix();
  }
  CEntity::UpdateRwFrame(*a2);
  *((_DWORD *)*a2 + 17) &= ~2u;
  *((_DWORD *)*a2 + 17) |= 0x800000u;
  v26 = *a2;
  v27 = *(_QWORD *)((char *)*a2 + 28);
  *((_DWORD *)v26 + 7) = v27 & 0xFFFFFFFE;
  *((_DWORD *)v26 + 8) = HIDWORD(v27);
  *((_DWORD *)*a2 + 81) |= 1u;
  *((_DWORD *)*a2 + 81) = *((_DWORD *)*a2 + 81) & 0xFFFFFFFD | (2 * ((*((unsigned __int8 *)this + 29) >> 1) & 1));
  v28 = *a2;
  v29 = *(_QWORD *)((char *)*a2 + 28);
  *((_DWORD *)v28 + 7) = v29 | 0x200000;
  *((_DWORD *)v28 + 8) = HIDWORD(v29);
  *((_DWORD *)*a2 + 81) = *((_DWORD *)*a2 + 81) & 0xFDFFFFFF | (CPickup::PickUpShouldBeInvisible(this) << 25);
  v30 = *a2;
  v31 = *(_QWORD *)((char *)*a2 + 28);
  *((_DWORD *)v30 + 7) = v31 | 0x80000000;
  *((_DWORD *)v30 + 8) = HIDWORD(v31);
  CEntity::RegisterReference(*a2, a2);
  v32 = *((unsigned __int16 *)this + 12);
  if ( v32 == (unsigned __int16)MI_PICKUP_BONUS || v32 == (unsigned __int16)MI_PICKUP_CLOTHES )
    v33 = *((_DWORD *)this + 2);
  else
    LOBYTE(v33) = 0;
  *((_BYTE *)*a2 + 321) = v33;
  v34 = *((unsigned __int8 *)this + 28);
  if ( v34 == 18 )
  {
    *((_DWORD *)*a2 + 81) |= 4u;
    *((_WORD *)*a2 + 161) = *((_DWORD *)this + 2) / 5;
  }
  else if ( v34 == 7 )
  {
    *((_DWORD *)*a2 + 81) |= 8u;
    *((_DWORD *)*a2 + 17) |= 0x20000000u;
  }
}


// ============================================================

// Address: 0x31d740
// Original: _ZN7CPickup15GetRidOfObjectsEv
// Demangled: CPickup::GetRidOfObjects(void)
CWorld *__fastcall CPickup::GetRidOfObjects(CPickup *this, CEntity *a2)
{
  CWorld *result; // r0
  int v4; // r0

  result = (CWorld *)*((_DWORD *)this + 1);
  if ( result )
  {
    CWorld::Remove(result, a2);
    v4 = *((_DWORD *)this + 1);
    if ( v4 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    result = 0;
    *((_DWORD *)this + 1) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x31d7ac
// Original: _ZN7CPickup6UpdateEP10CPlayerPedP8CVehiclei
// Demangled: CPickup::Update(CPlayerPed *,CVehicle *,int)
int __fastcall CPickup::Update(CPickup *this, float32x2_t **a2, CVehicle *a3, int a4)
{
  float32x2_t v4; // d2
  int16x4_t v5; // d16
  int v9; // r0
  CObject **v10; // r9
  int v11; // r1
  float v12; // s0
  float v13; // s2
  float v14; // s4
  float *v15; // r0
  int v16; // r6
  int v17; // r5
  float32x2_t v18; // d16
  float32x2_t v19; // d1
  int v20; // r0
  float v21; // s2
  unsigned int v22; // r1
  CObject *v23; // r6
  int v24; // r1
  float *v25; // r3
  char v26; // r1
  int v27; // r4
  float v28; // s16
  int v29; // r5
  float v30; // s18
  int v31; // r6
  float v32; // s20
  float v33; // s0
  int v34; // r6
  CEntity *v35; // r1
  CWorld *v36; // r0
  int v37; // r11
  int v38; // r1
  float *v39; // r3
  char IsSphereTouchingVehicle; // r0
  CEntity *v41; // r1
  CWorld *v42; // r0
  int CanPlayerStartMission; // r1
  float32x2_t *v44; // r1
  float32x2_t *v45; // r3
  float32x2_t *v46; // r0
  float32x2_t *v47; // r1
  float v48; // s0
  float32x2_t *v49; // r2
  float32x2_t *v50; // r3
  float32x2_t v51; // d16
  unsigned __int64 v52; // d0
  float v53; // s2
  CObject *v54; // r0
  float v55; // s8
  int v56; // r2
  float v57; // s0
  float v58; // s2
  float *v59; // r3
  float v60; // s4
  float v61; // s2
  float v62; // s0
  float *v63; // r0
  _DWORD *v64; // r5
  int v65; // r6
  int v66; // r8
  int v67; // r0
  CVehicle *v68; // r0
  int v69; // r2
  float *v70; // r3
  _DWORD *v71; // r5
  int v72; // r6
  int v73; // r8
  int v74; // r0
  CVehicle *v75; // r0
  int v76; // r2
  float *v77; // r3
  int v78; // r0
  int v79; // r1
  int *v80; // r2
  CEntity *v81; // r1
  CWorld *v82; // r0
  char v83; // r0
  int v84; // r1
  float *v85; // r3
  CEntity *v86; // r1
  CWorld *v87; // r0
  char v88; // r1
  int v89; // r5
  unsigned int v91; // r0
  CEntity *v92; // r1
  CWorld *v93; // r0
  char v94; // r0
  CVector *v95; // [sp+8h] [bp-88h]
  CVehicle *v96; // [sp+1Ch] [bp-74h]
  char v97[4]; // [sp+24h] [bp-6Ch] BYREF
  float v98; // [sp+28h] [bp-68h]
  char v99[4]; // [sp+30h] [bp-60h] BYREF
  float v100; // [sp+34h] [bp-5Ch]
  float v101; // [sp+3Ch] [bp-54h] BYREF
  float v102; // [sp+48h] [bp-48h] BYREF
  float32x2_t v103; // [sp+4Ch] [bp-44h]

  v10 = (CObject **)((char *)this + 4);
  v9 = *((_DWORD *)this + 1);
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 20);
    v12 = (float)*((__int16 *)this + 10) * 0.125;
    v13 = (float)*((__int16 *)this + 9) * 0.125;
    v14 = (float)*((__int16 *)this + 8) * 0.125;
    if ( v11 )
    {
      *(float *)(v11 + 48) = v14;
      *(float *)(*(_DWORD *)(v9 + 20) + 52) = v13;
      v15 = (float *)(*(_DWORD *)(v9 + 20) + 56);
    }
    else
    {
      *(float *)(v9 + 4) = v14;
      *(float *)(v9 + 8) = v13;
      v15 = (float *)(v9 + 12);
    }
    *v15 = v12;
  }
  if ( *((_BYTE *)this + 28) == 16 )
  {
    v16 = *((_DWORD *)this + 3);
    v17 = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 3) = CTimer::m_snTimeInMilliseconds;
    FindPlayerCoors((int)&v102);
    v5.n64_u32[0] = *(_DWORD *)((char *)this + 18);
    v18.n64_u64[0] = vsub_f32(
                       v103,
                       vmul_f32(vcvt_f32_s32((int32x2_t)vmovl_s16(v5).n128_u64[0]), (float32x2_t)0x3E0000003E000000LL)).n64_u64[0];
    v19.n64_u64[0] = vmul_f32(v18, v18).n64_u64[0];
    if ( sqrtf(
           (float)((float)((float)(v102 + (float)((float)*((__int16 *)this + 8) * -0.125))
                         * (float)(v102 + (float)((float)*((__int16 *)this + 8) * -0.125)))
                 + v19.n64_f32[0])
         + v19.n64_f32[1]) <= 10.0 )
    {
      v19.n64_u32[0] = *(_DWORD *)this;
    }
    else
    {
      v19.n64_f32[0] = *(float *)this
                     + (float)((float)((unsigned int)*((unsigned __int16 *)this + 11) * (v17 - v16)) / 1440000.0);
      *(_DWORD *)this = v19.n64_u32[0];
    }
    v4.n64_f32[0] = (float)*((int *)this + 2);
    v20 = *((_DWORD *)this + 1);
    LODWORD(v21) = vmin_f32(v19, v4).n64_u32[0];
    *(float *)this = v21;
    if ( v20 )
    {
      if ( v21 >= 10.0 )
        v22 = (unsigned int)(float)(v21 / 5.0);
      else
        LOWORD(v22) = 0;
      *(_WORD *)(v20 + 322) = v22;
    }
  }
  if ( !(*((unsigned __int8 *)this + 29) << 31) )
  {
    v23 = *v10;
    if ( !*v10 )
    {
      CPickup::GiveUsAPickUpObject(this, v10, -1);
      v42 = (CWorld *)*((_DWORD *)this + 1);
      if ( !v42 )
        return 0;
      CWorld::Add(v42, v41);
      v23 = *v10;
      if ( !*v10 )
        return 0;
    }
    if ( (unsigned __int8)(*((_BYTE *)this + 28) - 9) <= 5u )
    {
      switch ( *((_BYTE *)this + 28) )
      {
        case 9:
          if ( !a3 )
            goto LABEL_136;
          v24 = *((_DWORD *)v23 + 5);
          v25 = (float *)(v24 + 48);
          if ( !v24 )
            v25 = (float *)((char *)v23 + 4);
          if ( CVehicle::IsSphereTouchingVehicle(a3, *v25, v25[1], v25[2], 2.0) )
            goto LABEL_136;
          v26 = 10;
          goto LABEL_94;
        case 0xA:
          goto LABEL_97;
        case 0xB:
          if ( CWaterLevel::GetWaterLevel(
                 *(CWaterLevel **)(*((_DWORD *)v23 + 5) + 48),
                 *(float *)(*((_DWORD *)v23 + 5) + 52),
                 *(float *)(*((_DWORD *)v23 + 5) + 56) + 5.0,
                 COERCE_FLOAT(&v102),
                 (float *)((char *)&stderr + 1),
                 0,
                 v95) == 1 )
            *(float *)(*((_DWORD *)*v10 + 5) + 56) = v102 + 0.6;
          if ( *((_DWORD *)*v10 + 6) )
          {
            if ( *((_DWORD *)*v10 + 5) )
              CMatrix::UpdateRwMatrix();
            else
              CSimpleTransform::UpdateRwMatrix();
          }
          CEntity::UpdateRwFrame(*v10);
          v64 = (_DWORD *)CPools::ms_pVehiclePool;
          v65 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
          if ( !v65 )
            goto LABEL_93;
          v66 = 0;
          do
          {
            v67 = 2604 - 2604 * v65--;
            while ( *(char *)(v64[1] + v65) < 0 || *v64 == v67 )
            {
              --v65;
              v67 += 2604;
              if ( v65 == -1 )
                goto LABEL_92;
            }
            v68 = (CVehicle *)(*v64 - v67);
            v69 = *((_DWORD *)*v10 + 5);
            v70 = (float *)(v69 + 48);
            if ( !v69 )
              v70 = (float *)((char *)*v10 + 4);
            v66 |= CVehicle::IsSphereTouchingVehicle(v68, *v70, v70[1], v70[2], 2.0);
          }
          while ( v65 );
LABEL_92:
          if ( v66 << 31 )
            goto LABEL_136;
LABEL_93:
          v26 = 12;
LABEL_94:
          *((_BYTE *)this + 28) = v26;
          v34 = 0;
          *((_DWORD *)this + 3) = CTimer::m_snTimeInMilliseconds + 10000;
          goto LABEL_137;
        case 0xC:
          if ( CWaterLevel::GetWaterLevel(
                 *(CWaterLevel **)(*((_DWORD *)v23 + 5) + 48),
                 *(float *)(*((_DWORD *)v23 + 5) + 52),
                 *(float *)(*((_DWORD *)v23 + 5) + 56) + 5.0,
                 COERCE_FLOAT(&v102),
                 (float *)((char *)&stderr + 1),
                 0,
                 v95) == 1 )
            *(float *)(*((_DWORD *)*v10 + 5) + 56) = v102 + 0.6;
          if ( *((_DWORD *)*v10 + 6) )
          {
            if ( *((_DWORD *)*v10 + 5) )
              CMatrix::UpdateRwMatrix();
            else
              CSimpleTransform::UpdateRwMatrix();
          }
          CEntity::UpdateRwFrame(*v10);
LABEL_97:
          v71 = (_DWORD *)CPools::ms_pVehiclePool;
          v72 = *(_DWORD *)(CPools::ms_pVehiclePool + 8);
          v73 = (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 3);
          if ( !v72 )
            goto LABEL_106;
          break;
        case 0xD:
          v53 = *(float *)&CTimer::ms_fTimeStep;
          *((float *)v23 + 20) = *((float *)v23 + 20) + (float)(*(float *)&CTimer::ms_fTimeStep * -0.01);
          v54 = *v10;
          v55 = v53 * *((float *)*v10 + 18);
          v56 = *((_DWORD *)*v10 + 5);
          v57 = v53 * *((float *)*v10 + 20);
          v58 = v53 * *((float *)*v10 + 19);
          v59 = (float *)(v56 + 48);
          if ( !v56 )
            v59 = (float *)((char *)v54 + 4);
          v60 = v55 + *v59;
          v61 = v58 + v59[1];
          v62 = v57 + v59[2];
          if ( v56 )
          {
            *(float *)(v56 + 48) = v60;
            *(float *)(*((_DWORD *)v54 + 5) + 52) = v61;
            v63 = (float *)(*((_DWORD *)v54 + 5) + 56);
          }
          else
          {
            *((float *)v54 + 1) = v60;
            *((float *)v54 + 2) = v61;
            v63 = (float *)((char *)v54 + 12);
          }
          *v63 = v62;
          if ( *((_DWORD *)*v10 + 6) )
          {
            if ( *((_DWORD *)*v10 + 5) )
              CMatrix::UpdateRwMatrix();
            else
              CSimpleTransform::UpdateRwMatrix();
          }
          CEntity::UpdateRwFrame(*v10);
          v34 = 0;
          if ( CWaterLevel::GetWaterLevel(
                 *(CWaterLevel **)(*((_DWORD *)*v10 + 5) + 48),
                 *(float *)(*((_DWORD *)*v10 + 5) + 52),
                 *(float *)(*((_DWORD *)*v10 + 5) + 56) + 5.0,
                 COERCE_FLOAT(&v102),
                 (float *)((char *)&stderr + 1),
                 0,
                 v95) == 1 )
          {
            v34 = 0;
            if ( v102 >= *(float *)(*((_DWORD *)*v10 + 5) + 56) )
              *((_BYTE *)this + 28) = 14;
          }
          goto LABEL_137;
        case 0xE:
          if ( CWaterLevel::GetWaterLevel(
                 *(CWaterLevel **)(*((_DWORD *)v23 + 5) + 48),
                 *(float *)(*((_DWORD *)v23 + 5) + 52),
                 *(float *)(*((_DWORD *)v23 + 5) + 56) + 5.0,
                 COERCE_FLOAT(&v102),
                 (float *)((char *)&stderr + 1),
                 0,
                 v95) == 1 )
            *(float *)(*((_DWORD *)*v10 + 5) + 56) = v102;
          if ( *((_DWORD *)*v10 + 6) )
          {
            if ( *((_DWORD *)*v10 + 5) )
              CMatrix::UpdateRwMatrix();
            else
              CSimpleTransform::UpdateRwMatrix();
          }
          CEntity::UpdateRwFrame(*v10);
          if ( !a3 )
            goto LABEL_136;
          v84 = *((_DWORD *)*v10 + 5);
          v85 = (float *)(v84 + 48);
          if ( !v84 )
            v85 = (float *)((char *)*v10 + 4);
          if ( CVehicle::IsSphereTouchingVehicle(a3, *v85, v85[1], v85[2], 2.0) != 1 )
            goto LABEL_136;
          CRadar::ClearBlipForEntity();
          v87 = (CWorld *)*((_DWORD *)this + 1);
          if ( v87 )
          {
            CWorld::Remove(v87, v86);
            if ( *v10 )
              (*(void (__fastcall **)(CObject *))(*(_DWORD *)*v10 + 4))(*v10);
            *v10 = 0;
          }
          v88 = *((_BYTE *)this + 29);
          *((_BYTE *)this + 28) = 0;
          *((_BYTE *)this + 29) = v88 | 1;
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 12, 0.0, 1.0);
          v34 = 1;
          goto LABEL_137;
        default:
          goto LABEL_136;
      }
      do
      {
        v74 = 2604 - 2604 * v72--;
        while ( *(char *)(v71[1] + v72) < 0 || *v71 == v74 )
        {
          --v72;
          v74 += 2604;
          if ( v72 == -1 )
            goto LABEL_106;
        }
        v75 = (CVehicle *)(*v71 - v74);
        v76 = *((_DWORD *)*v10 + 5);
        v77 = (float *)(v76 + 48);
        if ( !v76 )
          v77 = (float *)((char *)*v10 + 4);
        v73 |= CVehicle::IsSphereTouchingVehicle(v75, *v77, v77[1], v77[2], 1.5);
      }
      while ( v72 );
LABEL_106:
      v34 = 0;
      if ( v73 << 31 )
      {
        v78 = *((_DWORD *)this + 1);
        v79 = *(_DWORD *)(v78 + 20);
        v80 = (int *)(v79 + 48);
        if ( !v79 )
          v80 = (int *)(v78 + 4);
        CExplosion::AddExplosion(0, 0, 8, *v80, v80[1], v80[2], 0, 1, -1.0, 0);
        CRadar::ClearBlipForEntity();
        v82 = (CWorld *)*((_DWORD *)this + 1);
        if ( v82 )
        {
          CWorld::Remove(v82, v81);
          if ( *v10 )
            (*(void (__fastcall **)(CObject *))(*(_DWORD *)*v10 + 4))(*v10);
          *v10 = 0;
        }
        v83 = *((_BYTE *)this + 29);
        v34 = 0;
        *((_BYTE *)this + 28) = 0;
        *((_BYTE *)this + 29) = v83 | 1;
      }
      goto LABEL_137;
    }
    v96 = a3;
    v37 = *((__int16 *)v23 + 19);
    if ( v37 == (unsigned __int16)MI_PICKUP_BRIBE )
    {
      if ( v96 )
      {
        v38 = *((_DWORD *)v23 + 5);
        v39 = (float *)(v38 + 48);
        if ( !v38 )
          v39 = (float *)((char *)v23 + 4);
        IsSphereTouchingVehicle = CVehicle::IsSphereTouchingVehicle(v96, *v39, v39[1], v39[2], 2.0);
LABEL_131:
        v34 = 0;
        v89 = (unsigned __int8)IsSphereTouchingVehicle & ((*((_DWORD *)*v10 + 81) & 0x2000000) == 0);
        if ( CPlayerPed::GetPadFromPlayer((CPlayerPed *)a2) )
        {
          if ( ((unsigned __int8)v89 & (*(_WORD *)(CPlayerPed::GetPadFromPlayer((CPlayerPed *)a2) + 272) == 0
                                     || (unsigned __int16)v37 != 370)) == 0 )
            goto LABEL_137;
        }
        else if ( v89 != 1 )
        {
LABEL_136:
          v34 = 0;
LABEL_137:
          if ( !(*((unsigned __int8 *)this + 29) << 31) )
          {
            v91 = *((unsigned __int8 *)this + 28);
            if ( v91 <= 8
              && ((1 << v91) & 0x130) != 0
              && (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 3) )
            {
              CRadar::ClearBlipForEntity();
              v93 = (CWorld *)*((_DWORD *)this + 1);
              if ( v93 )
              {
                CWorld::Remove(v93, v92);
                if ( *v10 )
                  (*(void (__fastcall **)(CObject *))(*(_DWORD *)*v10 + 4))(*v10);
                *v10 = 0;
              }
              v94 = *((_BYTE *)this + 29);
              *((_BYTE *)this + 28) = 0;
              *((_BYTE *)this + 29) = v94 | 1;
            }
          }
          return v34;
        }
        return sub_3F6582();
      }
      v49 = (float32x2_t *)*((_DWORD *)v23 + 5);
      v50 = a2[5];
      v47 = v49 + 6;
      if ( !v49 )
        v47 = (float32x2_t *)((char *)v23 + 4);
      v46 = v50 + 6;
      if ( !v50 )
        v46 = (float32x2_t *)(a2 + 1);
      v48 = v46[1].n64_f32[0] - v47[1].n64_f32[0];
      goto LABEL_55;
    }
    if ( v37 != (unsigned __int16)MI_PICKUP_CAMERA )
    {
      if ( v37 == (unsigned __int16)MI_PICKUP_SAVEGAME
        || v37 == (unsigned __int16)MI_PICKUP_2P_KILLFRENZY
        || v37 == (unsigned __int16)MI_PICKUP_2P_COOP )
      {
        CanPlayerStartMission = CPlayerPed::CanPlayerStartMission((CPlayerPed *)a2);
        IsSphereTouchingVehicle = 0;
        if ( v96 || !CanPlayerStartMission )
          goto LABEL_131;
      }
      else if ( v96 )
      {
        goto LABEL_130;
      }
      if ( CPed::IsAlive((CPed *)a2) == 1 )
      {
        v44 = a2[5];
        v45 = (float32x2_t *)*((_DWORD *)*v10 + 5);
        v46 = v44 + 6;
        if ( !v44 )
          v46 = (float32x2_t *)(a2 + 1);
        v47 = v45 + 6;
        if ( !v45 )
          v47 = (float32x2_t *)((char *)*v10 + 4);
        v48 = v46[1].n64_f32[0] - v47[1].n64_f32[0];
LABEL_55:
        if ( fabsf(v48) < 2.0 )
        {
          v51.n64_u64[0] = vsub_f32((float32x2_t)v46->n64_u64[0], (float32x2_t)v47->n64_u64[0]).n64_u64[0];
          v52 = vmul_f32(v51, v51).n64_u64[0];
          if ( (float)(*(float *)&v52 + *((float *)&v52 + 1)) < 1.8 )
          {
            IsSphereTouchingVehicle = 1;
            goto LABEL_131;
          }
        }
      }
    }
LABEL_130:
    IsSphereTouchingVehicle = 0;
    goto LABEL_131;
  }
  if ( (unsigned int)CTimer::m_snTimeInMilliseconds > *((_DWORD *)this + 3) )
  {
    FindPlayerCoors((int)&v102);
    v27 = *((__int16 *)this + 8);
    v28 = v102;
    FindPlayerCoors((int)&v101);
    v29 = *((__int16 *)this + 8);
    v30 = v101;
    FindPlayerCoors((int)v99);
    v31 = *((__int16 *)this + 9);
    v32 = v100;
    FindPlayerCoors((int)v97);
    v33 = (float)((float)(v28 - (float)((float)v27 * 0.125)) * (float)(v30 - (float)((float)v29 * 0.125)))
        + (float)((float)(v32 - (float)((float)v31 * 0.125))
                * (float)(v98 - (float)((float)*((__int16 *)this + 9) * 0.125)));
    if ( v33 <= 100.0 )
    {
      v34 = 0;
      if ( v33 <= 2.4 || *((_BYTE *)this + 28) != 1 )
        return v34;
    }
    CPickup::GiveUsAPickUpObject(this, v10, -1);
    v36 = (CWorld *)*((_DWORD *)this + 1);
    if ( v36 )
    {
      CWorld::Add(v36, v35);
      *((_BYTE *)this + 29) &= ~1u;
    }
  }
  return 0;
}


// ============================================================

// Address: 0x31f118
// Original: _ZN7CPickup22FindTextIndexForStringEPc
// Demangled: CPickup::FindTextIndexForString(char *)
int __fastcall CPickup::FindTextIndexForString(CPickup *this, char *a2)
{
  int v3; // r1
  int result; // r0

  if ( !this )
    return 0;
  if ( !strcasecmp("PROP_3", (const char *)this) || !strcasecmp("PROP_3X", (const char *)this) )
    return 1;
  v3 = strcasecmp("PROP_4", (const char *)this);
  result = 0;
  if ( !v3 )
    return 2;
  return result;
}


// ============================================================

// Address: 0x31f5a8
// Original: _ZN7CPickup14ProcessGunShotEP7CVectorS1_
// Demangled: CPickup::ProcessGunShot(CVector *,CVector *)
int __fastcall CPickup::ProcessGunShot(CPickup *this, CVector *a2, CVector *a3)
{
  int result; // r0
  int v5; // r1
  const CColSphere *v6; // r2
  double v7; // d16
  int v8; // r0
  int v9; // r1
  int *v10; // r2
  CEntity *v11; // r1
  CWorld *v12; // r0
  int v13; // r0
  int v14; // r0
  double v15; // [sp+18h] [bp-48h] BYREF
  int v16; // [sp+20h] [bp-40h]
  int v17; // [sp+24h] [bp-3Ch]
  _BYTE v18[48]; // [sp+30h] [bp-30h] BYREF

  CColLine::CColLine((CColLine *)v18, a2, a3);
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v5 = *(_DWORD *)(result + 20);
    v6 = (const CColSphere *)(v5 + 48);
    if ( !v5 )
      v6 = (const CColSphere *)(result + 4);
    v7 = *(double *)v6;
    v16 = *((_DWORD *)v6 + 2);
    v17 = 1082130432;
    v15 = v7;
    result = CCollision::TestLineSphere((CCollision *)v18, (const CColLine *)&v15, v6);
    if ( result == 1 )
    {
      v8 = *((_DWORD *)this + 1);
      v9 = *(_DWORD *)(v8 + 20);
      v10 = (int *)(v9 + 48);
      if ( !v9 )
        v10 = (int *)(v8 + 4);
      CExplosion::AddExplosion(0, 0, 8, *v10, v10[1], v10[2], 0, 1, -1.0, 0);
      CRadar::ClearBlipForEntity();
      v12 = (CWorld *)*((_DWORD *)this + 1);
      if ( v12 )
      {
        CWorld::Remove(v12, v11);
        v13 = *((_DWORD *)this + 1);
        if ( v13 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
        *((_DWORD *)this + 1) = 0;
      }
      v14 = *((unsigned __int8 *)this + 29);
      *((_BYTE *)this + 28) = 0;
      result = v14 | 1;
      *((_BYTE *)this + 29) = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x31f6b0
// Original: _ZN7CPickup21ExtractAmmoFromPickupEP10CPlayerPed
// Demangled: CPickup::ExtractAmmoFromPickup(CPlayerPed *)
unsigned int __fastcall CPickup::ExtractAmmoFromPickup(CPickup *this, CPlayerPed *a2)
{
  int v3; // r0
  unsigned int result; // r0
  _BYTE *v5; // r5

  v3 = *(__int16 *)(*((_DWORD *)this + 1) + 38);
  if ( (unsigned __int16)MI_PICKUP_BODYARMOUR != v3
    && (unsigned __int16)MI_PICKUP_HEALTH != v3
    && (unsigned __int16)MI_PICKUP_ADRENALINE != v3
    && v3 != -1
    && v3 != 370 )
  {
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(CModelInfo::ms_modelInfoPtrs[v3]) + 20))(LODWORD(CModelInfo::ms_modelInfoPtrs[v3]));
  }
  result = CWeaponInfo::GetWeaponInfo();
  if ( *((_BYTE *)this + 28) != 1 )
  {
    result = *(_DWORD *)(result + 20) - 3;
    if ( result <= 2 )
    {
      if ( *((_DWORD *)this + 2) )
      {
        CPed::GrantAmmo();
        CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 6, 0.0, 1.0);
        v5 = (char *)this + 29;
      }
      else
      {
        v5 = (char *)this + 29;
        if ( (*((_BYTE *)this + 29) & 2) == 0 )
        {
          CPed::GrantAmmo();
          CAudioEngine::ReportFrontendAudioEvent((CAudioEngine *)&AudioEngine, 6, 0.0, 1.0);
        }
      }
      *((_DWORD *)this + 2) = 0;
      result = (unsigned __int8)*v5 | 2;
      *v5 = result;
    }
  }
  return result;
}


// ============================================================

// Address: 0x31fa18
// Original: _ZN7CPickup22FindStringForTextIndexEi
// Demangled: CPickup::FindStringForTextIndex(int)
const char *__fastcall CPickup::FindStringForTextIndex(CPickup *this, int a2)
{
  int InputType; // r1
  const char *result; // r0

  if ( this == (CPickup *)((char *)&stderr + 2) )
    return "PROP_4";
  if ( this != (CPickup *)((char *)&stderr + 1) )
    return "FESZ_CA";
  InputType = CHID::GetInputType((CHID *)((char *)&stderr + 1));
  result = "PROP_3";
  if ( InputType )
    return "PROP_3X";
  return result;
}


// ============================================================

// Address: 0x31fa70
// Original: _ZN7CPickup23PickUpShouldBeInvisibleEv
// Demangled: CPickup::PickUpShouldBeInvisible(void)
int __fastcall CPickup::PickUpShouldBeInvisible(CPickup *this)
{
  int16x4_t v1; // d16
  float32x2_t v4; // d16
  float32x2_t v5; // d17
  unsigned __int64 v6; // d0
  float32x2_t v7; // d16
  unsigned __int64 v8; // d1
  CGameLogic *v9; // r0
  bool v10; // zf
  int v11; // r0

  if ( CCutsceneMgr::ms_running
    || *((unsigned __int16 *)this + 12) == (unsigned __int16)MI_PICKUP_KILLFRENZY
    && (CTheScripts::IsPlayerOnAMission((CTheScripts *)(unsigned __int16)MI_PICKUP_KILLFRENZY)
     || CDarkel::FrenzyOnGoing(0)
     || !CLocalisation::KillFrenzy(0)) )
  {
    return 1;
  }
  if ( *((_BYTE *)this + 28) == 21 && FindPlayerPed(1) )
    return 1;
  if ( *((unsigned __int16 *)this + 12) == (unsigned __int16)MI_PICKUP_2P_KILLFRENZY )
  {
    if ( CLocalisation::GermanGame((CLocalisation *)(unsigned __int16)MI_PICKUP_2P_KILLFRENZY) )
    {
      v1.n64_u32[0] = *((_DWORD *)this + 4);
      v4.n64_u64[0] = vmul_f32(vcvt_f32_s32((int32x2_t)vmovl_s16(v1).n128_u64[0]), (float32x2_t)0x3E0000003E000000LL).n64_u64[0];
      v5.n64_u64[0] = vadd_f32(v4, (float32x2_t)0x44CF4000C4B8E000LL).n64_u64[0];
      v6 = vmul_f32(v5, v5).n64_u64[0];
      if ( sqrtf(*(float *)&v6 + *((float *)&v6 + 1)) < 10.0 )
        return 1;
      v7.n64_u64[0] = vadd_f32(v4, (float32x2_t)0xC4970000C51CF000LL).n64_u64[0];
      v8 = vmul_f32(v7, v7).n64_u64[0];
      if ( sqrtf(*(float *)&v8 + *((float *)&v8 + 1)) < 10.0 )
        return 1;
    }
  }
  v9 = (CGameLogic *)(unsigned __int8)byte_951FE3;
  v10 = byte_951FE3 == 0;
  if ( byte_951FE3 )
  {
    v9 = (CGameLogic *)*((unsigned __int8 *)this + 28);
    v10 = v9 == (CGameLogic *)&word_10;
  }
  if ( !v10 )
  {
    v9 = (CGameLogic *)*((unsigned __int16 *)this + 12);
    if ( v9 != (CGameLogic *)((char *)&elf_hash_bucket[28] + 2) )
      return 1;
  }
  if ( CGameLogic::IsCoopGameGoingOn(v9) == 1 )
  {
    v11 = *((unsigned __int16 *)this + 12);
    if ( (unsigned __int16)MI_PICKUP_BODYARMOUR != v11
      && (unsigned __int16)MI_PICKUP_HEALTH != v11
      && (unsigned __int16)MI_PICKUP_ADRENALINE != v11
      && v11 != 370 )
    {
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(CModelInfo::ms_modelInfoPtrs[v11]) + 20))(LODWORD(CModelInfo::ms_modelInfoPtrs[v11]));
    }
    if ( CWeapon::CanBeUsedFor2Player() != 1 )
      return 1;
  }
  return 0;
}


// ============================================================
