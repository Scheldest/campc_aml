
// Address: 0x1990a8
// Original: j__ZN22CCollisionEventScanner22ScanForCollisionEventsER4CPedP11CEventGroup
// Demangled: CCollisionEventScanner::ScanForCollisionEvents(CPed &,CEventGroup *)
// attributes: thunk
int __fastcall CCollisionEventScanner::ScanForCollisionEvents(CCollisionEventScanner *this, CPed *a2, CEventGroup *a3)
{
  return _ZN22CCollisionEventScanner22ScanForCollisionEventsER4CPedP11CEventGroup(this, a2, a3);
}


// ============================================================

// Address: 0x4beeec
// Original: _ZN22CCollisionEventScanner22ScanForCollisionEventsER4CPedP11CEventGroup
// Demangled: CCollisionEventScanner::ScanForCollisionEvents(CPed &,CEventGroup *)
int __fastcall CCollisionEventScanner::ScanForCollisionEvents(CCollisionEventScanner *this, CPed *a2, CEventGroup *a3)
{
  float v3; // s20
  float32x2_t v4; // d0
  float32x2_t v5; // d1
  float32x2_t v6; // d2
  float32x2_t v7; // d8
  CTask *SimplestActiveTask; // r0
  const CTask *v12; // r1
  const CPhysical *v13; // r2
  CTask *v14; // r6
  int v15; // r11
  int v16; // r10
  CTask *v17; // r0
  const CTask *v18; // r1
  CTask *v19; // r6
  int v20; // r4
  float32x2_t v21; // d1
  int v22; // r0
  float v23; // s4
  bool v24; // zf
  int v25; // r0
  float v26; // s16
  bool v27; // nf
  const CPhysical *v28; // r2
  int v29; // r0
  float v30; // s18
  int v31; // r0
  unsigned int v32; // r1
  unsigned int v33; // r2
  int v34; // r0
  unsigned __int8 v35; // r4
  CEventDamage *v36; // r0
  float v37; // s16
  unsigned __int16 v38; // r11
  CTask *v39; // r0
  const CTask *v40; // r1
  CTask *v41; // r6
  int v42; // r0
  float v43; // s0
  float v44; // s4
  char LocalDirection; // r0
  int v46; // r0
  unsigned __int8 v47; // r4
  float v48; // r2
  char v49; // r1
  int Acquaintances; // r6
  int v51; // r1
  float v52; // r0
  int v53; // r0
  unsigned int v54; // r1
  unsigned int v55; // r2
  float *ColModel; // r0
  float v57; // s22
  int v58; // r0
  float v59; // s26
  float v60; // s28
  float *v61; // r4
  float *v62; // r1
  int v63; // r0
  float v64; // s2
  float v65; // s4
  float v66; // r0
  float v67; // r1
  float v68; // r9
  float v69; // r6
  int v70; // r0
  int v71; // r1
  float *v72; // r2
  float v73; // s0
  float v74; // s4
  float v75; // s0
  float *v76; // r0
  float v77; // s0
  float v78; // s0
  char v79; // r1
  int v80; // r4
  int v81; // r1
  int v82; // r0
  int v83; // r1
  bool v84; // zf
  int v85; // r0
  float v86; // s0
  int v87; // r0
  float v88; // s16
  int *v89; // r1
  int v90; // r0
  CEntity **v91; // r4
  int v92; // r0
  char *v93; // r2
  double v94; // d16
  CEventGroup *EventGlobalGroup; // r0
  int result; // r0
  CVehicle *v97; // [sp+14h] [bp-C4h]
  double v98; // [sp+18h] [bp-C0h] BYREF
  float v99; // [sp+20h] [bp-B8h]
  double v100; // [sp+28h] [bp-B0h] BYREF
  float v101; // [sp+30h] [bp-A8h]
  CEntity *v102; // [sp+38h] [bp-A0h]
  float v103; // [sp+3Ch] [bp-9Ch]
  int v104; // [sp+40h] [bp-98h]
  double v105; // [sp+44h] [bp-94h]
  int v106; // [sp+4Ch] [bp-8Ch]
  double v107; // [sp+68h] [bp-70h] BYREF
  float v108; // [sp+70h] [bp-68h]

  if ( !*((_DWORD *)a2 + 56) )
    goto LABEL_131;
  SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v14 = SimplestActiveTask;
  if ( SimplestActiveTask )
  {
    if ( CTask::IsGoToTask(SimplestActiveTask, v12) )
      v15 = *((_DWORD *)v14 + 2);
    else
      v15 = 1;
  }
  else
  {
    v15 = 1;
  }
  v16 = *((_DWORD *)a2 + 56);
  switch ( *(_BYTE *)(v16 + 58) & 7 )
  {
    case 1:
      CEventBuildingCollision::CEventBuildingCollision(
        (CEventBuildingCollision *)&v100,
        *((_WORD *)a2 + 126),
        *((float *)a2 + 55),
        (const CBuilding *)v16,
        (CPed *)((char *)a2 + 228),
        (CPed *)((char *)a2 + 240),
        v15);
      CEventGroup::Add(a3, (CEvent *)&v100, 0);
      CEventBuildingCollision::~CEventBuildingCollision((CEventBuildingCollision *)&v100);
      goto LABEL_108;
    case 2:
      if ( *(_BYTE *)this )
        goto LABEL_108;
      v26 = (float)((float)(*(float *)(v16 + 72) * *(float *)(v16 + 72))
                  + (float)(*(float *)(v16 + 76) * *(float *)(v16 + 76)))
          + (float)(*(float *)(v16 + 80) * *(float *)(v16 + 80));
      if ( *(_DWORD *)(v16 + 1444) == 6 )
      {
        v27 = (*(_BYTE *)(v16 + 68) & 4) != 0;
        if ( (*(_BYTE *)(v16 + 68) & 4) != 0 )
          v27 = (*((_BYTE *)a2 + 28) & 0x10) != 0;
        if ( v27 && *((unsigned __int8 *)a2 + 1156) << 31 && v26 > 0.0001 && !*((_DWORD *)a2 + 347) )
          CPed::KillPedWithCar(a2, *((CVehicle **)a2 + 56), 15.0, 0);
      }
      if ( v26 <= 0.0025 )
      {
        v34 = *((_DWORD *)a2 + 64);
        if ( !v34 || (*(_BYTE *)(v34 + 58) & 7) != 2 )
        {
          if ( !CPed::IsPlayer(a2) )
          {
            v97 = (CVehicle *)*((_DWORD *)a2 + 56);
            v37 = *((float *)a2 + 55);
            v38 = *((_WORD *)a2 + 126);
            v39 = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
            v41 = v39;
            if ( v39 && CTask::IsGoToTask(v39, v40) )
              v42 = *((_DWORD *)v41 + 2);
            else
              v42 = 1;
            CEventVehicleCollision::CEventVehicleCollision(
              (CEventVehicleCollision *)&v100,
              v38,
              v37,
              v97,
              (CPed *)((char *)a2 + 228),
              (CPed *)((char *)a2 + 240),
              v42,
              0);
            CEventGroup::Add(a3, (CEvent *)&v100, 0);
            CEventVehicleCollision::~CEventVehicleCollision((CEventVehicleCollision *)&v100);
          }
          goto LABEL_108;
        }
        v35 = CPedGeometryAnalyser::ComputePedHitSide(a2, (const CPed *)v16, v13);
        CPedDamageResponseCalculator::CPedDamageResponseCalculator((int)&v107, v16, *((_DWORD *)a2 + 55), 49, 3, 0);
        v36 = (CEventDamage *)CEventDamage::CEventDamage(
                                (int)&v100,
                                (CEntity *)v16,
                                CTimer::m_snTimeInMilliseconds,
                                49,
                                3,
                                v35,
                                0,
                                (*((_DWORD *)a2 + 289) >> 8) & 1);
LABEL_65:
        if ( CEventDamage::AffectsPed(v36, a2) == 1 )
          CPedDamageResponseCalculator::ComputeDamageResponse((int)&v107, a2);
        CEventDamage::~CEventDamage((CEventDamage *)&v100);
        CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)&v107);
        goto LABEL_108;
      }
      v7.n64_u32[0] = *((_DWORD *)a2 + 55);
      if ( *((unsigned __int8 *)a2 + 1156) << 31 )
      {
        v4.n64_f32[0] = (float)(*((float *)a2 + 57) * *((float *)a2 + 341))
                      + (float)(*((float *)a2 + 58) * *((float *)a2 + 342));
        if ( v4.n64_f32[0] < 0.0 )
        {
          v5.n64_u32[0] = 0;
          v4.n64_f32[0] = v7.n64_f32[0] + (float)(v4.n64_f32[0] * *((float *)a2 + 36));
          v7.n64_u64[0] = vmax_f32(v4, v5).n64_u64[0];
        }
      }
      if ( CPed::IsPlayer(a2) != 1 )
      {
        v46 = *((_DWORD *)a2 + 64);
        if ( !v46 || (*(_BYTE *)(v46 + 58) & 7) != 2 )
        {
          v48 = *((float *)a2 + 55);
LABEL_107:
          CPed::KillPedWithCar(a2, (CVehicle *)v16, v48, 0);
          goto LABEL_108;
        }
        v47 = CPedGeometryAnalyser::ComputePedHitSide(a2, (const CPed *)v16, v28);
        CPedDamageResponseCalculator::CPedDamageResponseCalculator((int)&v107, v16, *((_DWORD *)a2 + 55), 49, 3, 0);
        v36 = (CEventDamage *)CEventDamage::CEventDamage(
                                (int)&v100,
                                (CEntity *)v16,
                                CTimer::m_snTimeInMilliseconds,
                                49,
                                3,
                                v47,
                                0,
                                (*((_DWORD *)a2 + 289) >> 8) & 1);
        goto LABEL_65;
      }
      v29 = *(_DWORD *)(v16 + 20);
      if ( v29 )
        v30 = atan2f(COERCE_FLOAT(*(_DWORD *)(v29 + 16) ^ 0x80000000), *(float *)(v29 + 20));
      else
        v30 = *(float *)(v16 + 16);
      ColModel = (float *)CEntity::GetColModel((CEntity *)v16);
      if ( ColModel )
      {
        v3 = *ColModel;
        v57 = ColModel[1];
        v58 = CEntity::GetColModel((CEntity *)v16);
        v59 = *(float *)(v58 + 12);
        v60 = *(float *)(v58 + 16);
        operator*();
        v61 = (float *)((char *)a2 + 4);
        v101 = v108;
        v62 = (float *)((char *)a2 + 4);
        v100 = v107;
        v63 = *((_DWORD *)a2 + 5);
        if ( v63 )
          v62 = (float *)(v63 + 48);
        v64 = *((float *)&v107 + 1) - v62[1];
        v65 = v108 - v62[2];
        *(float *)&v100 = *(float *)&v107 - *v62;
        *((float *)&v100 + 1) = v64;
        v101 = v65;
        v66 = atan2f(COERCE_FLOAT(LODWORD(v100) ^ 0x80000000), v64);
        v68 = COERCE_FLOAT(CGeneral::LimitRadianAngle(COERCE_CGENERAL_(v30 - v66), v67));
        v69 = atan2f(v59 - v3, v60 - v57);
        v70 = *(_DWORD *)(v16 + 20);
        v71 = *((_DWORD *)a2 + 5);
        v72 = (float *)(v70 + 48);
        if ( !v70 )
          v72 = (float *)(v16 + 4);
        if ( v71 )
          v61 = (float *)(v71 + 48);
        v73 = *v61 - *v72;
        v74 = v61[2] - v72[2];
        *((float *)&v107 + 1) = v61[1] - v72[1];
        *(float *)&v107 = v73;
        v108 = v74;
        CVector::Normalise((CVector *)&v107);
        v75 = fabsf(v68);
        if ( v75 < v69 || v75 > (float)(3.1416 - v69) )
        {
          v78 = (float)((float)(*(float *)&v107 * *(float *)(v16 + 72))
                      + (float)(*((float *)&v107 + 1) * *(float *)(v16 + 76)))
              + (float)(v108 * *(float *)(v16 + 80));
        }
        else
        {
          v76 = *(float **)(v16 + 20);
          v77 = *v76;
          v78 = v68 <= 0.0
              ? (float)((float)(v77 * *(float *)(v16 + 72)) + (float)(v76[1] * *(float *)(v16 + 76)))
              + (float)(v76[2] * *(float *)(v16 + 80))
              : (float)((float)-(float)(v76[1] * *(float *)(v16 + 76)) - (float)(v77 * *(float *)(v16 + 72)))
              - (float)(v76[2] * *(float *)(v16 + 80));
        }
        if ( v78 > 0.1 )
        {
          v4.n64_u32[0] = 20.0;
          LODWORD(v48) = vmin_f32(v7, v4).n64_u32[0];
          goto LABEL_107;
        }
      }
LABEL_108:
      v82 = *((_DWORD *)a2 + 273);
      if ( v82 )
      {
        v83 = *(_BYTE *)(*((_DWORD *)a2 + 56) + 58) & 7;
        v84 = v83 == 4;
        if ( v83 != 4 )
          v84 = v83 == 1;
        if ( v84 && CPedClothesDesc::GetIsWearingBalaclava(*(CPedClothesDesc **)(v82 + 4)) == 1 )
        {
          v85 = *((_DWORD *)a2 + 56);
          if ( (unsigned __int8)((*(_BYTE *)(v85 + 58) & 7) - 2) <= 2u && (*(_BYTE *)(v85 + 68) & 0x20) != 0 )
          {
            if ( fabsf(*(float *)(v85 + 92)) <= 0.04 )
              goto LABEL_131;
            v87 = CTimer::m_snTimeInMilliseconds;
            if ( CTimer::m_snTimeInMilliseconds <= (unsigned int)(dword_9EFB84 + 2000) )
              goto LABEL_131;
            v88 = 40.0;
            v89 = &dword_9EFB84;
          }
          else
          {
            v86 = *((float *)a2 + 55);
            if ( v86 <= 1.0 )
              goto LABEL_131;
            v87 = CTimer::m_snTimeInMilliseconds;
            if ( CTimer::m_snTimeInMilliseconds <= (unsigned int)(dword_9EFB80 + 1000) )
              goto LABEL_131;
            v88 = 30.0;
            v89 = &dword_9EFB80;
            if ( v86 > 3.0 )
              v88 = 40.0;
          }
          *v89 = v87;
          CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)&v100);
          v91 = (CEntity **)(v90 + 16);
          v102 = a2;
          v103 = v88;
          v104 = -1;
          v105 = 0.0;
          v106 = 0;
          LODWORD(v100) = &off_66715C;
          CEntity::RegisterReference(a2, (CEntity **)(v90 + 16));
          if ( v104 == -1 )
          {
            v104 = CTimer::m_snTimeInMilliseconds;
            v92 = *((_DWORD *)v102 + 5);
            v93 = (char *)(v92 + 48);
            if ( !v92 )
              v93 = (char *)v102 + 4;
            v94 = *(double *)v93;
            v106 = *((_DWORD *)v93 + 2);
            v105 = v94;
          }
          EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
          CEventGroup::Add(EventGlobalGroup, (CEvent *)&v100, 0);
          LODWORD(v100) = &off_66715C;
          if ( v102 )
            CEntity::CleanUpOldReference(v102, v91);
          CEvent::~CEvent((CEvent *)&v100);
        }
      }
LABEL_131:
      result = 0;
      *(_BYTE *)this = 0;
      return result;
    case 3:
      v17 = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*(_DWORD *)(v16 + 1088) + 4));
      v19 = v17;
      if ( v17 )
      {
        if ( CTask::IsGoToTask(v17, v18) )
          v20 = *((_DWORD *)v19 + 2);
        else
          v20 = 1;
      }
      else
      {
        v20 = 1;
      }
      if ( CPed::IsPlayer(a2) == 1 )
      {
        CEventPedCollisionWithPed::CEventPedCollisionWithPed(
          (CEventPedCollisionWithPed *)&v100,
          *((_WORD *)a2 + 126),
          *((float *)a2 + 55),
          *((const CPed **)a2 + 56),
          (CPed *)((char *)a2 + 228),
          (CPed *)((char *)a2 + 240),
          v15,
          v20);
        LODWORD(v100) = &off_6691D8;
        CEventGroup::Add(a3, (CEvent *)&v100, 0);
        CPed::Say((CPed *)v16, 0x1Cu, 0, 1.0, 0, 0, 0);
      }
      else
      {
        if ( CPed::IsPlayer((CPed *)v16) != 1 )
        {
          CEventPedCollisionWithPed::CEventPedCollisionWithPed(
            (CEventPedCollisionWithPed *)&v100,
            *((_WORD *)a2 + 126),
            *((float *)a2 + 55),
            *((const CPed **)a2 + 56),
            (CPed *)((char *)a2 + 228),
            (CPed *)((char *)a2 + 240),
            v15,
            v20);
          CEventGroup::Add(a3, (CEvent *)&v100, 0);
          CEventPedCollisionWithPed::~CEventPedCollisionWithPed((CEventPedCollisionWithPed *)&v100);
          goto LABEL_75;
        }
        CEventPedCollisionWithPed::CEventPedCollisionWithPed(
          (CEventPedCollisionWithPed *)&v100,
          *((_WORD *)a2 + 126),
          *((float *)a2 + 55),
          *((const CPed **)a2 + 56),
          (CPed *)((char *)a2 + 228),
          (CPed *)((char *)a2 + 240),
          v15,
          v20);
        LODWORD(v100) = &off_669224;
        CEventGroup::Add(a3, (CEvent *)&v100, 0);
        v31 = *((_DWORD *)a2 + 272);
        if ( *(_BYTE *)(v31 + 384) )
        {
          if ( *(_BYTE *)(v31 + 385) )
          {
            v32 = CTimer::m_snTimeInMilliseconds;
            *(_BYTE *)(v31 + 385) = 0;
            *(_DWORD *)(v31 + 376) = v32;
            v33 = v32;
          }
          else
          {
            v33 = *(_DWORD *)(v31 + 376);
            v32 = CTimer::m_snTimeInMilliseconds;
          }
          if ( v33 + *(_DWORD *)(v31 + 380) <= v32 )
          {
            *(_DWORD *)(v31 + 376) = v32;
            *(_DWORD *)(v31 + 380) = 3000;
            v49 = *(_BYTE *)(v31 + 372);
            *(_BYTE *)(v31 + 384) = 1;
            *(_BYTE *)(v31 + 372) = v49 + 1;
          }
        }
        CPed::Say(a2, 0x1Cu, 0, 1.0, 0, 0, 0);
        Acquaintances = CAcquaintance::GetAcquaintances((CPed *)((char *)a2 + 1260), 4);
        if ( (CPedType::GetPedFlag(*(CPedType **)(v16 + 1436), v51) & Acquaintances) != 0 )
        {
          CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)&v107, (CPed *)v16);
          LODWORD(v107) = &off_6653A4;
          CEventGroup::Add(a3, (CEvent *)&v107, 0);
          CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)&v107);
        }
      }
      CEventPedCollisionWithPed::~CEventPedCollisionWithPed((CEventPedCollisionWithPed *)&v100);
LABEL_75:
      if ( !*(_DWORD *)(v16 + 224) )
      {
        v52 = *((float *)a2 + 59);
        v98 = *(double *)((char *)a2 + 228);
        *(float *)&v98 = -*(float *)&v98;
        *((float *)&v98 + 1) = -*((float *)&v98 + 1);
        v99 = -v52;
        if ( CPed::IsPlayer((CPed *)v16) == 1 )
        {
          CEventPedCollisionWithPed::CEventPedCollisionWithPed(
            (CEventPedCollisionWithPed *)&v100,
            *((_WORD *)a2 + 126),
            *((float *)a2 + 55),
            a2,
            (const CVector *)&v98,
            (CPed *)((char *)a2 + 240),
            v15,
            v20);
          LODWORD(v100) = &off_6691D8;
          CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v16 + 1088) + 104), (CEvent *)&v100, 0);
          CEventPedCollisionWithPed::~CEventPedCollisionWithPed((CEventPedCollisionWithPed *)&v100);
        }
        else if ( CPed::IsPlayer(a2) == 1 )
        {
          CEventPedCollisionWithPed::CEventPedCollisionWithPed(
            (CEventPedCollisionWithPed *)&v100,
            *((_WORD *)a2 + 126),
            *((float *)a2 + 55),
            a2,
            (const CVector *)&v98,
            (CPed *)((char *)a2 + 240),
            v15,
            v20);
          LODWORD(v100) = &off_669224;
          CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v16 + 1088) + 104), (CEvent *)&v100, 0);
          v53 = *(_DWORD *)(v16 + 1088);
          if ( *(_BYTE *)(v53 + 384) )
          {
            if ( *(_BYTE *)(v53 + 385) )
            {
              v54 = CTimer::m_snTimeInMilliseconds;
              *(_BYTE *)(v53 + 385) = 0;
              *(_DWORD *)(v53 + 376) = v54;
              v55 = v54;
            }
            else
            {
              v55 = *(_DWORD *)(v53 + 376);
              v54 = CTimer::m_snTimeInMilliseconds;
            }
            if ( v55 + *(_DWORD *)(v53 + 380) <= v54 )
            {
              *(_DWORD *)(v53 + 376) = v54;
              *(_DWORD *)(v53 + 380) = 3000;
              v79 = *(_BYTE *)(v53 + 372);
              *(_BYTE *)(v53 + 384) = 1;
              *(_BYTE *)(v53 + 372) = v79 + 1;
            }
          }
          v80 = CAcquaintance::GetAcquaintances((CAcquaintance *)(v16 + 1260), 4);
          if ( (CPedType::GetPedFlag(*((CPedType **)a2 + 359), v81) & v80) != 0 )
          {
            CEventAcquaintancePed::CEventAcquaintancePed((CEventAcquaintancePed *)&v107, a2);
            LODWORD(v107) = &off_6653A4;
            CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v16 + 1088) + 104), (CEvent *)&v107, 0);
            CEventAcquaintancePed::~CEventAcquaintancePed((CEventAcquaintancePed *)&v107);
          }
          CEventPedCollisionWithPed::~CEventPedCollisionWithPed((CEventPedCollisionWithPed *)&v100);
        }
        else
        {
          CEventPedCollisionWithPed::CEventPedCollisionWithPed(
            (CEventPedCollisionWithPed *)&v100,
            *((_WORD *)a2 + 126),
            *((float *)a2 + 55),
            a2,
            (const CVector *)&v98,
            (CPed *)((char *)a2 + 240),
            v15,
            v20);
          CEventGroup::Add((CEventGroup *)(*(_DWORD *)(v16 + 1088) + 104), (CEvent *)&v100, 0);
          CEventPedCollisionWithPed::~CEventPedCollisionWithPed((CEventPedCollisionWithPed *)&v100);
        }
      }
      goto LABEL_108;
    case 4:
      v4.n64_u32[0] = *((_DWORD *)a2 + 55);
      v21.n64_u32[0] = v4.n64_u32[0];
      v22 = *((_DWORD *)a2 + 289) & 1;
      if ( v22 )
      {
        v21.n64_u32[0] = *((_DWORD *)a2 + 55);
        if ( (*(_DWORD *)(v16 + 28) & 0x40004) == 0 )
        {
          v6.n64_f32[0] = (float)(*((float *)a2 + 57) * *((float *)a2 + 341))
                        + (float)(*((float *)a2 + 58) * *((float *)a2 + 342));
          v21.n64_u64[0] = v4.n64_u64[0];
          if ( v6.n64_f32[0] < 0.0 )
          {
            v21.n64_f32[0] = v6.n64_f32[0] * *((float *)a2 + 36);
            v6.n64_u32[0] = 0;
            v21.n64_f32[0] = v4.n64_f32[0] + v21.n64_f32[0];
            v21.n64_u32[0] = vmax_f32(v21, v6).n64_u32[0];
          }
        }
      }
      v23 = 2.0;
      if ( !*((_DWORD *)a2 + 273) )
        v23 = 1.0;
      if ( v21.n64_f32[0] <= v23 || (*(_DWORD *)(v16 + 28) & 0x40004) != 0 )
        goto LABEL_28;
      v24 = v22 == 0;
      if ( v22 )
        v24 = v16 == *((_DWORD *)a2 + 354);
      if ( v24 || (v25 = *(_DWORD *)(v16 + 256)) != 0 && v16 == v25 )
      {
LABEL_28:
        CEventObjectCollision::CEventObjectCollision(
          (CEventObjectCollision *)&v100,
          *((_WORD *)a2 + 126),
          *((float *)a2 + 55),
          (const CObject *)v16,
          (CPed *)((char *)a2 + 228),
          (CPed *)((char *)a2 + 240),
          v15);
        CEventGroup::Add(a3, (CEvent *)&v100, 0);
        CEventObjectCollision::~CEventObjectCollision((CEventObjectCollision *)&v100);
      }
      else
      {
        v43 = 10.0 / v23;
        v44 = *((float *)a2 + 57);
        *((float *)&v100 + 1) = -*((float *)a2 + 58);
        *(float *)&v100 = -v44;
        LocalDirection = CPed::GetLocalDirection();
        CWeapon::GenerateDamageEvent(
          (int)a2,
          *((_DWORD *)a2 + 56),
          54,
          (int)(float)(v21.n64_f32[0] * v43),
          3,
          LocalDirection);
        *((_DWORD *)a2 + 75) = *((_DWORD *)a2 + 56);
      }
      goto LABEL_108;
    default:
      goto LABEL_108;
  }
}


// ============================================================
