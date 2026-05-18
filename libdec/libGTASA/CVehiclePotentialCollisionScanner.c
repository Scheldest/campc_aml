
// Address: 0x1909cc
// Original: j__ZN33CVehiclePotentialCollisionScanner38ScanForVehiclePotentialCollisionEventsERK4CPedPP7CEntityi
// Demangled: CVehiclePotentialCollisionScanner::ScanForVehiclePotentialCollisionEvents(CPed const&,CEntity **,int)
// attributes: thunk
int __fastcall CVehiclePotentialCollisionScanner::ScanForVehiclePotentialCollisionEvents(
        CVehiclePotentialCollisionScanner *this,
        const CPed *a2,
        CEntity **a3,
        int a4)
{
  return _ZN33CVehiclePotentialCollisionScanner38ScanForVehiclePotentialCollisionEventsERK4CPedPP7CEntityi(
           this,
           a2,
           a3,
           a4);
}


// ============================================================

// Address: 0x4bbe28
// Original: _ZN33CVehiclePotentialCollisionScanner38ScanForVehiclePotentialCollisionEventsERK4CPedPP7CEntityi
// Demangled: CVehiclePotentialCollisionScanner::ScanForVehiclePotentialCollisionEvents(CPed const&,CEntity **,int)
void __fastcall CVehiclePotentialCollisionScanner::ScanForVehiclePotentialCollisionEvents(
        CVehiclePotentialCollisionScanner *this,
        const CPed *a2,
        CEntity **a3,
        int a4)
{
  CEntity *v4; // r8
  int v6; // r1
  CTask *SimplestActiveTask; // r0
  const CTask *v8; // r1
  CTask *v9; // r10
  int IsGoToTask; // r0
  bool v11; // zf
  int v12; // r0
  float *v13; // r6
  int v14; // r1
  _DWORD *v15; // r2
  char *v16; // r0
  float32x2_t v17; // d8
  float v18; // s20
  float32x2_t v19; // d9
  float v20; // s22
  const CVector *ColModel; // r0
  float *v22; // r4
  const CVector *v23; // r5
  int v24; // r0
  float v25; // s0
  float v26; // s2
  float v27; // s8
  float v28; // s10
  float v29; // s4
  float v30; // s2
  float v31; // s0
  float v32; // s8
  float v33; // s6
  float v34; // s0
  float v35; // s2
  float v36; // s4
  float v37; // s0
  float v38; // s2
  float32x2_t v39; // d16
  unsigned __int64 v40; // d2
  int IsLineOfSightClear; // r0
  CTask *v42; // r0
  const CTask *v43; // r1
  CTask *v44; // r6
  int v45; // r2
  float *v46; // [sp+0h] [bp-78h]
  _BYTE v47[24]; // [sp+4h] [bp-74h] BYREF
  float v48; // [sp+1Ch] [bp-5Ch] BYREF
  float v49[3]; // [sp+20h] [bp-58h] BYREF
  float v50[19]; // [sp+2Ch] [bp-4Ch] BYREF

  if ( !*((_BYTE *)this + 8) )
  {
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 1) = 500;
    *((_BYTE *)this + 8) = 1;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v6 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 9) = 0;
    *(_DWORD *)this = v6;
  }
  else
  {
    v6 = *(_DWORD *)this;
  }
  if ( v6 + *((_DWORD *)this + 1) <= (unsigned int)CTimer::m_snTimeInMilliseconds )
  {
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 1) = 500;
    *((_BYTE *)this + 8) = 1;
    SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    v9 = SimplestActiveTask;
    if ( SimplestActiveTask )
    {
      IsGoToTask = CTask::IsGoToTask(SimplestActiveTask, v8);
      v11 = IsGoToTask == 0;
      if ( IsGoToTask )
      {
        v4 = *(CEntity **)(*((_DWORD *)a2 + 272) + 288);
        v11 = v4 == 0;
      }
      if ( !v11 )
      {
        v12 = *((_DWORD *)v4 + 5);
        v13 = (float *)((char *)a2 + 4);
        v14 = *((_DWORD *)a2 + 5);
        v15 = (_DWORD *)(v12 + 48);
        if ( !v12 )
          v15 = (_DWORD *)((char *)v4 + 4);
        v16 = (char *)a2 + 4;
        v17.n64_u64[0] = *(unsigned __int64 *)(v15 + 1);
        if ( v14 )
          v16 = (char *)(v14 + 48);
        v18 = *(float *)v15;
        v19.n64_u64[0] = *(unsigned __int64 *)(v16 + 4);
        v20 = *(float *)v16;
        ColModel = (const CVector *)CEntity::GetColModel(v4);
        v22 = (float *)*((_DWORD *)v4 + 5);
        v23 = ColModel;
        CVector::FromMultiply((CVector *)v50, (const CMatrix *)v22, ColModel);
        CVector::FromMultiply((CVector *)v49, (const CMatrix *)v22, (const CVector *)((char *)v23 + 12));
        v24 = *((_DWORD *)a2 + 5);
        v25 = v22[8];
        v26 = v22[9];
        v27 = v22[10];
        if ( v24 )
          v13 = (float *)(v24 + 48);
        v28 = v13[1];
        v29 = v13[2];
        if ( (float)((float)((float)((float)(v25 * *v13) + (float)(v26 * v28)) + (float)(v27 * v29))
                   - (float)((float)((float)(v25 * v49[0]) + (float)(v26 * v49[1])) + (float)(v27 * v49[2]))) < 0.5 )
        {
          v30 = -v26;
          v31 = -v25;
          v32 = -v27;
          v33 = (float)(*v13 * v31) + (float)(v28 * v30);
          v34 = (float)(v50[0] * v31) + (float)(v50[1] * v30);
          v35 = v33 + (float)(v29 * v32);
          v36 = v34 + (float)(v50[2] * v32);
          v37 = 5.0;
          v38 = v35 - v36;
          if ( *((_DWORD *)v4 + 361) == 6 )
            v37 = 10.0;
          if ( v38 < 0.5 )
          {
            if ( (*((_BYTE *)a2 + 1164) & 8) != 0
              || (v39.n64_u64[0] = vsub_f32(v19, v17).n64_u64[0],
                  v40 = vmul_f32(v39, v39).n64_u64[0],
                  (float)((float)((float)((float)(v20 - v18) * (float)(v20 - v18)) + *(float *)&v40)
                        + *((float *)&v40 + 1)) < (float)(v37 * v37)) )
            {
              v48 = 0.0;
              IsLineOfSightClear = CPedGeometryAnalyser::GetIsLineOfSightClear(
                                     a2,
                                     (CTask *)((char *)v9 + 12),
                                     v4,
                                     (CEntity *)&v48,
                                     v46);
              if ( v48 > 0.5 && !IsLineOfSightClear )
              {
                v42 = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
                v44 = v42;
                if ( v42 )
                {
                  if ( CTask::IsGoToTask(v42, v43) )
                    v45 = *((_DWORD *)v44 + 2);
                  else
                    v45 = 1;
                }
                else
                {
                  v45 = 1;
                }
                CEventPotentialWalkIntoVehicle::CEventPotentialWalkIntoVehicle(
                  (CEventPotentialWalkIntoVehicle *)v47,
                  v4,
                  v45);
                CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v47, 0);
                CEventPotentialWalkIntoVehicle::~CEventPotentialWalkIntoVehicle((CEventPotentialWalkIntoVehicle *)v47);
              }
            }
          }
        }
      }
    }
  }
}


// ============================================================
