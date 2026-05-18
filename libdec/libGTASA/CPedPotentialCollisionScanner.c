
// Address: 0x190ca4
// Original: j__ZNK29CPedPotentialCollisionScanner34ScanForPedPotentialCollisionEventsERK4CPedPS0_
// Demangled: CPedPotentialCollisionScanner::ScanForPedPotentialCollisionEvents(CPed const&,CPed*)
// attributes: thunk
int __fastcall CPedPotentialCollisionScanner::ScanForPedPotentialCollisionEvents(
        CPedPotentialCollisionScanner *this,
        const CPed *a2,
        CPed *a3)
{
  return _ZNK29CPedPotentialCollisionScanner34ScanForPedPotentialCollisionEventsERK4CPedPS0_(this, a2, a3);
}


// ============================================================

// Address: 0x4bbb70
// Original: _ZNK29CPedPotentialCollisionScanner34ScanForPedPotentialCollisionEventsERK4CPedPS0_
// Demangled: CPedPotentialCollisionScanner::ScanForPedPotentialCollisionEvents(CPed const&,CPed*)
void __fastcall CPedPotentialCollisionScanner::ScanForPedPotentialCollisionEvents(
        CPedPotentialCollisionScanner *this,
        float32x2_t *a2,
        CPed *a3)
{
  float32x2_t v3; // d0
  float32x2_t v4; // d8
  bool v6; // zf
  CTask *SimplestActiveTask; // r0
  const CTask *v8; // r1
  CTask *v9; // r5
  CTask *v10; // r0
  const CTask *v11; // r1
  CTask *v12; // r6
  int IsGoToTask; // r0
  bool v14; // zf
  int v15; // r10
  int v16; // r9
  int v17; // r6
  int v18; // r5
  float *v19; // r0
  float *v20; // r3
  int v21; // r1
  float *v22; // r2
  float v23; // s18
  float v24; // s20
  float v25; // s22
  unsigned __int32 v26; // r0
  const CVector *v27; // r1
  bool v28; // nf
  CTask *v29; // r0
  const CTask *v30; // r1
  float v31; // s2
  float32x2_t v32; // d16
  unsigned __int64 v33; // d2
  CTask *v34; // r0
  const CTask *v35; // r1
  CTask *v36; // r5
  int v37; // r3
  CVector *v38; // [sp+8h] [bp-80h]
  _BYTE v39[36]; // [sp+Ch] [bp-7Ch] BYREF
  _BYTE v40[12]; // [sp+30h] [bp-58h] BYREF
  _BYTE v41[76]; // [sp+3Ch] [bp-4Ch] BYREF

  v6 = a3 == 0;
  if ( a3 )
    v6 = a2[3].n64_u8[4] << 31 == 0;
  if ( !v6 )
  {
    SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(a2[136].n64_u32[0] + 4));
    v9 = SimplestActiveTask;
    if ( SimplestActiveTask )
    {
      if ( CTask::IsGoToTask(SimplestActiveTask, v8) )
      {
        v10 = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(a2[136].n64_u32[0] + 4));
        v12 = v10;
        if ( v10 )
        {
          IsGoToTask = CTask::IsGoToTask(v10, v11);
          v14 = IsGoToTask == 0;
          if ( IsGoToTask )
            v14 = *((_DWORD *)v12 + 2) == 1;
          if ( !v14 )
          {
            v4.n64_u32[0] = 6.25;
            v15 = a2[136].n64_u32[0] + 304;
            v16 = 0;
            v17 = 0;
            v38 = (CTask *)((char *)v9 + 12);
            do
            {
              v18 = *(_DWORD *)(v15 + 4 * v16);
              if ( v18 && CPed::IsAlive(*(CPed **)(v15 + 4 * v16)) == 1 && *(unsigned __int8 *)(v18 + 28) << 31 )
              {
                v19 = (float *)a2[2].n64_u32[1];
                v20 = &a2->n64_f32[1];
                v21 = *(_DWORD *)(v18 + 20);
                if ( v19 )
                  v20 = v19 + 12;
                v22 = (float *)(v21 + 48);
                if ( !v21 )
                  v22 = (float *)(v18 + 4);
                v23 = *v22 - *v20;
                v24 = v22[1] - v20[1];
                v25 = v22[2] - v20[2];
                if ( (float)((float)((float)(v23 * v19[4]) + (float)(v24 * v19[5])) + (float)(v25 * v19[6])) > 0.0 )
                {
                  CColSphere::Set((CColSphere *)v39, 0.7, (const CVector *)v22, 0, 0, 0xFFu);
                  v26 = a2[2].n64_u32[1];
                  v27 = (const CVector *)&a2->n64_u8[4];
                  if ( v26 )
                    v27 = (const CVector *)(v26 + 48);
                  if ( CColSphere::IntersectEdge((CColSphere *)v39, v27, v38, (CVector *)v41, (CVector *)v40) == 1 )
                  {
                    v3.n64_f32[0] = (float)((float)(v23 * v23) + (float)(v24 * v24)) + (float)(v25 * v25);
                    v28 = v3.n64_f32[0] < v4.n64_f32[0];
                    v4.n64_u64[0] = vmin_f32(v3, v4).n64_u64[0];
                    if ( v28 )
                      v17 = v18;
                  }
                }
              }
              ++v16;
            }
            while ( v16 != 16 );
            if ( v17 )
            {
              v29 = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*(_DWORD *)(v17 + 1088) + 4));
              if ( !v29
                || !CTask::IsGoToTask(v29, v30)
                || (float)((float)((float)(*(float *)(a2[2].n64_u32[1] + 16) * *(float *)(*(_DWORD *)(v17 + 20) + 16))
                                 + (float)(*(float *)(a2[2].n64_u32[1] + 20) * *(float *)(*(_DWORD *)(v17 + 20) + 20)))
                         + (float)(*(float *)(a2[2].n64_u32[1] + 24) * *(float *)(*(_DWORD *)(v17 + 20) + 24))) < 0.923
                || v4.n64_f32[0] <= 1.0
                || (v31 = (float)((float)((float)((float)(*(float *)(v17 + 72) * 50.0)
                                                * (float)(*(float *)(v17 + 72) * 50.0))
                                        + (float)((float)(*(float *)(v17 + 76) * 50.0)
                                                * (float)(*(float *)(v17 + 76) * 50.0)))
                                + 0.0)
                        + 0.25,
                    v31 < 0.01)
                || (v32.n64_u64[0] = vmul_f32(a2[9], (float32x2_t)0x4248000042480000LL).n64_u64[0],
                    v33 = vmul_f32(v32, v32).n64_u64[0],
                    v31 <= (float)((float)(*(float *)&v33 + *((float *)&v33 + 1)) + 0.0)) )
              {
                v34 = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(a2[136].n64_u32[0] + 4));
                v36 = v34;
                if ( v34 )
                {
                  if ( CTask::IsGoToTask(v34, v35) )
                    v37 = *((_DWORD *)v36 + 2);
                  else
                    v37 = 1;
                }
                else
                {
                  v37 = 1;
                }
                CEventPotentialWalkIntoPed::CEventPotentialWalkIntoPed(
                  (CEventPotentialWalkIntoPed *)v39,
                  (CPed *)v17,
                  v38,
                  v37);
                CEventGroup::Add((CEventGroup *)(a2[136].n64_u32[0] + 104), (CEvent *)v39, 0);
                CEventPotentialWalkIntoPed::~CEventPotentialWalkIntoPed((CEventPotentialWalkIntoPed *)v39);
              }
            }
          }
        }
      }
    }
  }
}


// ============================================================
