
// Address: 0x4b2d64
// Original: _ZNK43CPedGroupDefaultTaskAllocatorSitInLeaderCar20AllocateDefaultTasksEP9CPedGroupP4CPed
// Demangled: CPedGroupDefaultTaskAllocatorSitInLeaderCar::AllocateDefaultTasks(CPedGroup *,CPed *)
unsigned __int8 *__fastcall CPedGroupDefaultTaskAllocatorSitInLeaderCar::AllocateDefaultTasks(
        CPedGroupDefaultTaskAllocatorSitInLeaderCar *this,
        unsigned __int8 **a2,
        CPed *a3)
{
  CPedGroup *v3; // r6
  unsigned __int8 *result; // r0
  bool v5; // zf
  CTaskComplexSequence *v6; // r8
  unsigned int v7; // r1
  CTaskComplexEnterCarAsDriver *v8; // r5
  unsigned int v9; // r1
  CTaskSimpleCarDrive *v10; // r5
  _BOOL4 v11; // r2
  CPed *v12; // r0
  bool v13; // zf
  int v14; // r9
  const CVehicle *v15; // r4
  int v16; // r10
  CPedGroup *v17; // r8
  int v18; // r6
  unsigned int v19; // r1
  CTaskComplexSequence *v20; // r5
  unsigned int v21; // r1
  CTaskComplexEnterCarAsPassenger *v22; // r0
  int v23; // r2
  CTask *v24; // r4
  unsigned int v25; // r1
  CTaskSimpleCarDrive *v26; // r4
  CPed *v27; // r3
  const CVehicle *v28; // r4
  unsigned __int8 *v29; // [sp+0h] [bp-28h]
  const CVehicle *v31; // [sp+8h] [bp-20h]

  v3 = (CPedGroup *)a2;
  result = a2[10];
  v5 = result == 0;
  if ( result )
  {
    result = (unsigned __int8 *)*((_DWORD *)result + 356);
    v29 = result;
    v5 = result == 0;
  }
  if ( !v5 )
  {
    v6 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, (unsigned int)a2);
    CTaskComplexSequence::CTaskComplexSequence(v6);
    v8 = (CTaskComplexEnterCarAsDriver *)CTask::operator new((CTask *)&dword_50, v7);
    CTaskComplexEnterCarAsDriver::CTaskComplexEnterCarAsDriver(v8, (CVehicle *)v29);
    CTaskComplexSequence::AddTask(v6, v8);
    v10 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, v9);
    CTaskSimpleCarDrive::CTaskSimpleCarDrive(v10, (CVehicle *)v29, 0, 0);
    CTaskComplexSequence::AddTask(v6, v10);
    v12 = (CPed *)*((_DWORD *)v3 + 170);
    if ( !v12 )
      goto LABEL_10;
    v13 = a3 == 0;
    if ( a3 )
      v13 = v12 == a3;
    if ( v13 )
    {
      *((_DWORD *)v3 + 171) = v6;
    }
    else
    {
LABEL_10:
      if ( v6 )
        (*(void (__fastcall **)(CTaskComplexSequence *))(*(_DWORD *)v6 + 4))(v6);
    }
    result = v29;
    v14 = 0;
    v15 = 0;
    v16 = v29[1164];
    do
    {
      if ( (int)v15 < v16 )
      {
        result = *(unsigned __int8 **)((char *)v3 + v14 + 12);
        if ( result )
        {
          v31 = v15;
          v17 = v3;
          v18 = CCarEnterExit::ComputeTargetDoorToEnterAsPassenger((CCarEnterExit *)v29, v15, v11);
          v20 = (CTaskComplexSequence *)CTask::operator new((CTask *)&dword_40, v19);
          CTaskComplexSequence::CTaskComplexSequence(v20);
          v22 = (CTaskComplexEnterCarAsPassenger *)CTask::operator new((CTask *)&dword_50, v21);
          v23 = v18;
          v24 = v22;
          v3 = v17;
          CTaskComplexEnterCarAsPassenger::CTaskComplexEnterCarAsPassenger(v22, (CVehicle *)v29, v23, 0);
          CTaskComplexSequence::AddTask(v20, v24);
          v26 = (CTaskSimpleCarDrive *)CTask::operator new((CTask *)&dword_60, v25);
          CTaskSimpleCarDrive::CTaskSimpleCarDrive(v26, (CVehicle *)v29, 0, 0);
          CTaskComplexSequence::AddTask(v20, v26);
          result = (unsigned __int8 *)v17 + 5 * v14;
          v27 = (CPed *)*((_DWORD *)result + 135);
          v11 = a3 == 0;
          if ( v27 && (v27 == a3 || v11) )
          {
            *((_DWORD *)result + 136) = v20;
            v28 = v31;
          }
          else
          {
            v28 = v31;
            if ( v20 )
              result = (unsigned __int8 *)(*(int (__fastcall **)(CTaskComplexSequence *))(*(_DWORD *)v20 + 4))(v20);
          }
          v15 = (const CVehicle *)((char *)v28 + 1);
        }
      }
      v14 += 4;
    }
    while ( v14 != 28 );
  }
  return result;
}


// ============================================================

// Address: 0x4b8cc8
// Original: _ZNK43CPedGroupDefaultTaskAllocatorSitInLeaderCar7GetTypeEv
// Demangled: CPedGroupDefaultTaskAllocatorSitInLeaderCar::GetType(void)
int __fastcall CPedGroupDefaultTaskAllocatorSitInLeaderCar::GetType(CPedGroupDefaultTaskAllocatorSitInLeaderCar *this)
{
  return 4;
}


// ============================================================
