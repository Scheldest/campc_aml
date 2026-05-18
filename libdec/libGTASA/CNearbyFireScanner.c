
// Address: 0x194834
// Original: j__ZN18CNearbyFireScanner18ScanForNearbyFiresERK4CPed
// Demangled: CNearbyFireScanner::ScanForNearbyFires(CPed const&)
// attributes: thunk
int __fastcall CNearbyFireScanner::ScanForNearbyFires(CNearbyFireScanner *this, const CPed *a2)
{
  return _ZN18CNearbyFireScanner18ScanForNearbyFiresERK4CPed(this, a2);
}


// ============================================================

// Address: 0x4bd308
// Original: _ZN18CNearbyFireScanner18ScanForNearbyFiresERK4CPed
// Demangled: CNearbyFireScanner::ScanForNearbyFires(CPed const&)
void __fastcall CNearbyFireScanner::ScanForNearbyFires(CNearbyFireScanner *this, const CPed *a2)
{
  float v2; // s16
  int v4; // r1
  int v5; // r8
  CTask *SimplestActiveTask; // r0
  const CTask *v7; // r1
  CTask *v8; // r5
  int ActiveTask; // r5
  int v10; // r2
  float *v11; // r6
  const CVector *v12; // r1
  float *NearestFire; // r10
  int v14; // r0
  CTask *v15; // r0
  const CTask *v16; // r1
  int IsGoToTask; // r0
  bool v18; // zf
  _BYTE v19[80]; // [sp+0h] [bp-50h] BYREF

  if ( !*((_BYTE *)this + 8) )
  {
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 1) = 0;
    *((_BYTE *)this + 8) = 1;
  }
  if ( *((_BYTE *)this + 9) )
  {
    v4 = CTimer::m_snTimeInMilliseconds;
    *((_BYTE *)this + 9) = 0;
    *(_DWORD *)this = v4;
  }
  else
  {
    v4 = *(_DWORD *)this;
  }
  if ( v4 + *((_DWORD *)this + 1) <= (unsigned int)CTimer::m_snTimeInMilliseconds )
  {
    v5 = 1;
    *(_DWORD *)this = CTimer::m_snTimeInMilliseconds;
    *((_DWORD *)this + 1) = 100;
    *((_BYTE *)this + 8) = 1;
    SimplestActiveTask = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    v8 = SimplestActiveTask;
    if ( SimplestActiveTask )
    {
      if ( CTask::IsGoToTask(SimplestActiveTask, v7) )
        v5 = *((_DWORD *)v8 + 2);
      else
        v5 = 1;
    }
    ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
    v10 = *((_DWORD *)a2 + 5);
    v11 = (float *)((char *)a2 + 4);
    v12 = (const CPed *)((char *)a2 + 4);
    if ( v10 )
      v12 = (const CVector *)(v10 + 48);
    NearestFire = (float *)CFireManager::FindNearestFire((CFireManager *)gFireManager, v12, 0, 0);
    if ( NearestFire )
    {
      v14 = *((_DWORD *)a2 + 5);
      if ( v14 )
        v11 = (float *)(v14 + 48);
      v2 = NearestFire[3] - v11[2];
      if ( fabsf(v2) < 2.0 )
      {
        CEventFireNearby::CEventFireNearby((CEventFireNearby *)v19, (const CVector *)(NearestFire + 1));
        CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v19, 0);
        CEvent::~CEvent((CEvent *)v19);
      }
      if ( !ActiveTask )
        return;
    }
    else if ( !ActiveTask )
    {
      return;
    }
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) != 514 )
    {
      v15 = (CTask *)CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
      if ( v15 )
      {
        IsGoToTask = CTask::IsGoToTask(v15, v16);
        if ( fabsf(v2) < 2.0 )
        {
          v18 = NearestFire == 0;
          if ( NearestFire )
            v18 = IsGoToTask == 0;
          if ( !v18 )
          {
            CEventPotentialWalkIntoFire::CEventPotentialWalkIntoFire(
              (CEventPotentialWalkIntoFire *)v19,
              (const CVector *)(NearestFire + 1),
              NearestFire[7],
              v5);
            CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v19, 0);
            CEvent::~CEvent((CEvent *)v19);
          }
        }
      }
    }
  }
}


// ============================================================
