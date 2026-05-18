
// Address: 0x19ef84
// Original: j__ZN32CObjectPotentialCollisionScanner37ScanForObjectPotentialCollisionEventsERK4CPed
// Demangled: CObjectPotentialCollisionScanner::ScanForObjectPotentialCollisionEvents(CPed const&)
// attributes: thunk
int __fastcall CObjectPotentialCollisionScanner::ScanForObjectPotentialCollisionEvents(
        CObjectPotentialCollisionScanner *this,
        const CPed *a2)
{
  return _ZN32CObjectPotentialCollisionScanner37ScanForObjectPotentialCollisionEventsERK4CPed(this, a2);
}


// ============================================================

// Address: 0x4bc07c
// Original: _ZN32CObjectPotentialCollisionScanner37ScanForObjectPotentialCollisionEventsERK4CPed
// Demangled: CObjectPotentialCollisionScanner::ScanForObjectPotentialCollisionEvents(CPed const&)
int __fastcall CObjectPotentialCollisionScanner::ScanForObjectPotentialCollisionEvents(int this, const CPed *a2)
{
  int v3; // r1
  int v4; // r5
  CTask *SimplestActiveTask; // r0
  const CTask *v6; // r1
  CTask *v7; // r6
  const CTask *v8; // r1
  int v9; // r6
  int v10; // r0
  bool v11; // zf
  __int16 *v12; // r10
  int v13; // r0
  float *v14; // r11
  int v15; // r1
  int v16; // r2
  char *v17; // r0
  float32x2_t v18; // d16
  unsigned __int64 v19; // d1
  int v20; // r2
  float *v21; // r1
  float v22; // s2
  float v23; // s4
  const CPed *v24; // r6
  int IsLineOfSightClear; // r0
  CEntity *v26; // r3
  int v27; // r0
  float v28; // s2
  int v29; // r6
  CEntity *v30; // r0
  __int64 v31; // [sp+0h] [bp-88h] BYREF
  float v32; // [sp+8h] [bp-80h]
  float v33; // [sp+18h] [bp-70h] BYREF
  CEntity *v34[3]; // [sp+1Ch] [bp-6Ch] BYREF
  _BYTE v35[56]; // [sp+28h] [bp-60h] BYREF
  int v36; // [sp+60h] [bp-28h]
  __int64 v37; // [sp+64h] [bp-24h] BYREF

  if ( !*(_BYTE *)(this + 8) )
  {
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(this + 4) = 500;
    *(_BYTE *)(this + 8) = 1;
  }
  if ( *(_BYTE *)(this + 9) )
  {
    v3 = CTimer::m_snTimeInMilliseconds;
    *(_BYTE *)(this + 9) = 0;
    *(_DWORD *)this = v3;
  }
  else
  {
    v3 = *(_DWORD *)this;
  }
  if ( v3 + *(_DWORD *)(this + 4) <= (unsigned int)CTimer::m_snTimeInMilliseconds )
  {
    v4 = 1;
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *(_DWORD *)(this + 4) = 500;
    *(_BYTE *)(this + 8) = 1;
    SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    v7 = SimplestActiveTask;
    if ( SimplestActiveTask )
    {
      if ( CTask::IsGoToTask(SimplestActiveTask, v6) )
        v4 = *((_DWORD *)v7 + 2);
      else
        v4 = 1;
    }
    this = CPed::IsPlayer(a2);
    if ( v4 != 1 && !this )
    {
      this = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
      v9 = this;
      if ( this )
      {
        this = CTask::IsGoToTask((CTask *)this, v8);
        if ( this )
        {
          v34[1] = 0;
          memset(v35, 0, sizeof(v35));
          v36 = 0;
          v37 = 0LL;
          v34[2] = (CEntity *)&word_10;
          v34[0] = (CEntity *)&off_6690DC;
          v10 = *((_DWORD *)a2 + 356);
          v11 = v10 == 0;
          if ( v10 )
            v11 = *((unsigned __int8 *)a2 + 1157) << 31 == 0;
          if ( v11 )
          {
            if ( CPed::IsAlive(a2) )
            {
              CEntityScanner::ScanForEntitiesInRange(v34, 2, a2);
              v12 = (__int16 *)HIDWORD(v37);
              if ( HIDWORD(v37) )
              {
                if ( (*(_WORD *)(HIDWORD(v37) + 324) & 0x401) == 0 && *(unsigned __int8 *)(HIDWORD(v37) + 28) << 31 )
                {
                  v13 = *(_DWORD *)(HIDWORD(v37) + 20);
                  v14 = (float *)((char *)a2 + 4);
                  v15 = *((_DWORD *)a2 + 5);
                  v16 = v13 + 48;
                  if ( !v13 )
                    v16 = HIDWORD(v37) + 4;
                  v17 = (char *)a2 + 4;
                  if ( v15 )
                    v17 = (char *)(v15 + 48);
                  v18.n64_u64[0] = vsub_f32(*(float32x2_t *)(v17 + 4), *(float32x2_t *)(v16 + 4)).n64_u64[0];
                  v19 = vmul_f32(v18, v18).n64_u64[0];
                  if ( (float)((float)((float)((float)(*(float *)v17 - *(float *)v16)
                                             * (float)(*(float *)v17 - *(float *)v16))
                                     + *(float *)&v19)
                             + *((float *)&v19 + 1)) < 56.25 )
                  {
                    CEntity::GetBoundCentre((CEntity *)&v31);
                    v20 = *((_DWORD *)a2 + 5);
                    v21 = (float *)((char *)a2 + 4);
                    if ( v20 )
                      v21 = (float *)(v20 + 48);
                    v22 = v21[2];
                    v23 = *(float *)(*(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[v12[19]]) + 44) + 36);
                    if ( (float)(v22 + -1.0) <= (float)(v32 + v23) && (float)(v22 + 1.0) >= (float)(v32 - v23) )
                    {
                      v24 = (const CPed *)(v9 + 12);
                      v33 = 0.0;
                      IsLineOfSightClear = CPedGeometryAnalyser::GetIsLineOfSightClear(
                                             a2,
                                             v24,
                                             (const CVector *)v12,
                                             (CEntity *)&v33,
                                             (float *)v31);
                      if ( v33 > 0.5 && !IsLineOfSightClear )
                      {
                        v27 = *((_DWORD *)a2 + 5);
                        if ( v27 )
                          v14 = (float *)(v27 + 48);
                        v28 = v14[2];
                        v31 = *(_QWORD *)v14;
                        v32 = v28 + -0.75;
                        if ( !CPedGeometryAnalyser::GetIsLineOfSightClear(
                                (CPedGeometryAnalyser *)&v31,
                                v24,
                                (const CVector *)v12,
                                v26) )
                        {
                          CEventPotentialWalkIntoObject::CEventPotentialWalkIntoObject(
                            (CEventPotentialWalkIntoObject *)&v31,
                            (CObject *)v12,
                            v4);
                          CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)&v31, 0);
                          CEventPotentialWalkIntoObject::~CEventPotentialWalkIntoObject((CEventPotentialWalkIntoObject *)&v31);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          v29 = 0;
          v34[0] = (CEntity *)&off_669080;
          do
          {
            v30 = *(CEntity **)&v35[v29];
            if ( v30 )
            {
              CEntity::CleanUpOldReference(v30, (CEntity **)&v35[v29]);
              *(_DWORD *)&v35[v29] = 0;
            }
            v29 += 4;
          }
          while ( v29 != 64 );
          this = HIDWORD(v37);
          if ( HIDWORD(v37) )
          {
            CEntity::CleanUpOldReference((CEntity *)HIDWORD(v37), (CEntity **)&v37 + 1);
            return 0;
          }
        }
      }
    }
  }
  return this;
}


// ============================================================
