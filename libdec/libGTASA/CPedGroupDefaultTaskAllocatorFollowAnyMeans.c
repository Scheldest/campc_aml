
// Address: 0x4b2580
// Original: _ZNK43CPedGroupDefaultTaskAllocatorFollowAnyMeans20AllocateDefaultTasksEP9CPedGroupP4CPed
// Demangled: CPedGroupDefaultTaskAllocatorFollowAnyMeans::AllocateDefaultTasks(CPedGroup *,CPed *)
void __fastcall CPedGroupDefaultTaskAllocatorFollowAnyMeans::AllocateDefaultTasks(
        CPedGroupDefaultTaskAllocatorFollowAnyMeans *this,
        CPedGroup *a2,
        CPed *a3)
{
  int v5; // r4
  int *v6; // r6
  CPed *v7; // r2
  unsigned int v8; // r1
  CTaskComplexFollowLeaderAnyMeans *v9; // r0
  CPed *v10; // r2
  int v11; // r3
  int v12; // r0
  CPed *v13; // r2
  unsigned int v14; // r1
  CTaskComplexWanderGang *v15; // r5
  unsigned __int16 v16; // r0
  _DWORD v17[10]; // [sp+8h] [bp-28h] BYREF

  v5 = 0;
  v6 = &dword_9FF894;
  do
  {
    v7 = *(CPed **)((char *)a2 + v5 + 540);
    v8 = a3 == 0;
    if ( v7 && ((v7 == a3) | v8) == 1 )
    {
      v9 = (CTaskComplexFollowLeaderAnyMeans *)CTask::operator new((CTask *)&dword_24, v8);
      v10 = (CPed *)*((_DWORD *)a2 + 10);
      v11 = *v6;
      v17[0] = *(v6 - 1);
      v17[1] = v11;
      v17[2] = 0;
      CTaskComplexFollowLeaderAnyMeans::CTaskComplexFollowLeaderAnyMeans(v9, a2, v10, (const CVector *)v17);
      *(_DWORD *)((char *)a2 + v5 + 544) = v12;
    }
    v5 += 20;
    v6 += 2;
  }
  while ( v5 != 140 );
  v13 = (CPed *)*((_DWORD *)a2 + 170);
  v14 = v13 == a3;
  if ( v13 )
  {
    if ( ((a3 == 0) | v14) == 1 )
    {
      v15 = (CTaskComplexWanderGang *)CTask::operator new((CTask *)&dword_38, v14);
      v16 = rand();
      CTaskComplexWanderGang::CTaskComplexWanderGang(
        v15,
        4,
        (int)(float)((float)((float)v16 * 0.000015259) * 8.0),
        5000,
        1,
        0.5);
      *((_DWORD *)a2 + 171) = v15;
    }
  }
}


// ============================================================

// Address: 0x4b8cb4
// Original: _ZNK43CPedGroupDefaultTaskAllocatorFollowAnyMeans7GetTypeEv
// Demangled: CPedGroupDefaultTaskAllocatorFollowAnyMeans::GetType(void)
int __fastcall CPedGroupDefaultTaskAllocatorFollowAnyMeans::GetType(CPedGroupDefaultTaskAllocatorFollowAnyMeans *this)
{
  return 0;
}


// ============================================================
