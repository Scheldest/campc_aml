
// Address: 0x4b2944
// Original: _ZNK33CPedGroupDefaultTaskAllocatorChat20AllocateDefaultTasksEP9CPedGroupP4CPed
// Demangled: CPedGroupDefaultTaskAllocatorChat::AllocateDefaultTasks(CPedGroup *,CPed *)
void __fastcall CPedGroupDefaultTaskAllocatorChat::AllocateDefaultTasks(
        CPedGroupDefaultTaskAllocatorChat *this,
        CPedGroup *a2,
        CPed *a3)
{
  CPedGroup *v3; // r11
  int v4; // r10
  int v6; // r6
  int *v7; // r1
  _DWORD *v8; // r5
  _DWORD *v9; // r8
  int v10; // r9
  int v11; // r5
  int v12; // r11
  CTaskComplexGoToPointAndStandStill *v13; // r10
  int v14; // r0
  const CVector *v15; // r2
  CTaskComplexSequence *v16; // r4
  unsigned int v17; // r1
  CTaskSimpleAchieveHeading *v18; // r5
  CTask *v19; // r1
  int v20; // r0
  int v21; // r6
  int v22; // r10
  int v23; // r11
  CTaskComplexSequence *v24; // r4
  CTaskSimpleStandStill *v25; // r5
  CTask *v26; // r1
  int v27; // r6
  int *v28; // r4
  int v29; // r5
  CPed *v30; // [sp+18h] [bp-290h]
  CPedGroup *v31; // [sp+3Ch] [bp-26Ch]
  int v32; // [sp+40h] [bp-268h]
  _DWORD v33[16]; // [sp+48h] [bp-260h] BYREF
  _BYTE v34[64]; // [sp+88h] [bp-220h] BYREF
  _BYTE v35[64]; // [sp+C8h] [bp-1E0h] BYREF
  _BYTE v36[64]; // [sp+108h] [bp-1A0h] BYREF
  _BYTE v37[64]; // [sp+148h] [bp-160h] BYREF
  _BYTE v38[64]; // [sp+188h] [bp-120h] BYREF
  _BYTE v39[64]; // [sp+1C8h] [bp-E0h] BYREF
  _BYTE v40[64]; // [sp+208h] [bp-A0h] BYREF
  _DWORD v41[24]; // [sp+248h] [bp-60h] BYREF

  v3 = a2;
  v4 = 0;
  if ( *((_DWORD *)a2 + 3) )
  {
    v41[0] = 0;
    v4 = 1;
  }
  if ( *((_DWORD *)a2 + 4) )
    v41[v4++] = 1;
  if ( *((_DWORD *)a2 + 5) )
    v41[v4++] = 2;
  if ( *((_DWORD *)a2 + 6) )
    v41[v4++] = 3;
  if ( *((_DWORD *)a2 + 7) )
    v41[v4++] = 4;
  if ( *((_DWORD *)a2 + 8) )
    v41[v4++] = 5;
  if ( *((_DWORD *)a2 + 9) )
    v41[v4++] = 6;
  if ( *((_DWORD *)a2 + 10) )
    v41[v4++] = 7;
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v33);
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v34);
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v35);
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v36);
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v37);
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v38);
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v39);
  CTaskComplexSequence::CTaskComplexSequence((CTaskComplexSequence *)v40);
  if ( v4 > 0 )
  {
    v6 = 0;
    v7 = &CTaskSimpleAchieveHeading::ms_fHeadingChangeRateFrac;
    v30 = a3;
    v8 = v41;
    v31 = v3;
    do
    {
      v9 = v8;
      v10 = v4;
      v11 = v8[v6];
      v12 = *((_DWORD *)v3 + v11 + 3);
      v13 = (CTaskComplexGoToPointAndStandStill *)CTask::operator new((CTask *)&word_28, (unsigned int)v7);
      v14 = *(_DWORD *)(v12 + 20);
      v15 = (const CVector *)(v14 + 48);
      if ( !v14 )
        v15 = (const CVector *)(v12 + 4);
      CTaskComplexGoToPointAndStandStill::CTaskComplexGoToPointAndStandStill(v13, 4, v15, 0.5, 2.0, 0, 0);
      v16 = (CTaskComplexSequence *)&v33[16 * v11];
      CTaskComplexSequence::AddTask(v16, v13);
      v18 = (CTaskSimpleAchieveHeading *)CTask::operator new((CTask *)&off_18, v17);
      v4 = v10;
      CTaskSimpleAchieveHeading::CTaskSimpleAchieveHeading(v18, *(float *)(v12 + 1372), 0.5, 0.2);
      v19 = v18;
      v8 = v9;
      CTaskComplexSequence::AddTask(v16, v19);
      v3 = v31;
      ++v6;
      *((_DWORD *)v16 + 12) = 1;
    }
    while ( v10 != v6 );
    v20 = 0;
    do
    {
      v32 = v20;
      v21 = 0;
      v22 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * (float)v10);
      v23 = (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 3000.0) + 3000;
      do
      {
        v24 = (CTaskComplexSequence *)&v33[16 * v8[v21]];
        if ( v22 == v21 )
        {
          v25 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_34, (unsigned int)v33);
          CTaskSimpleRunTimedAnim::CTaskSimpleRunTimedAnim((int)v25, 0, 12, 1082130432, -4.0, v23, 416, (int)"Chat", 0);
          *(_DWORD *)v25 = &off_668888;
        }
        else
        {
          v25 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, (unsigned int)v33);
          CTaskSimpleStandStill::CTaskSimpleStandStill(v25, v23, 0, 0, 8.0);
        }
        v26 = v25;
        v8 = v9;
        CTaskComplexSequence::AddTask(v24, v26);
        ++v21;
      }
      while ( v10 != v21 );
      v27 = v10;
      v20 = v32 + 1;
    }
    while ( v32 + 1 != v10 );
    v28 = v41;
    do
    {
      v29 = *v28;
      if ( !v30 || *((CPed **)v31 + 5 * v29 + 135) == v30 )
        *((_DWORD *)v31 + 5 * v29 + 136) = (*(int (__fastcall **)(_DWORD *))(v33[16 * v29] + 8))(&v33[16 * v29]);
      --v27;
      ++v28;
    }
    while ( v27 );
  }
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v40);
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v39);
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v38);
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v37);
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v36);
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v35);
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v34);
  CTaskComplexSequence::~CTaskComplexSequence((CTaskComplexSequence *)v33);
}


// ============================================================

// Address: 0x4b8cc0
// Original: _ZNK33CPedGroupDefaultTaskAllocatorChat7GetTypeEv
// Demangled: CPedGroupDefaultTaskAllocatorChat::GetType(void)
int __fastcall CPedGroupDefaultTaskAllocatorChat::GetType(CPedGroupDefaultTaskAllocatorChat *this)
{
  return 3;
}


// ============================================================
