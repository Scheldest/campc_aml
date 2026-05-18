
// Address: 0x4b2ca4
// Original: _ZNK35CPedGroupDefaultTaskAllocatorRandom20AllocateDefaultTasksEP9CPedGroupP4CPed
// Demangled: CPedGroupDefaultTaskAllocatorRandom::AllocateDefaultTasks(CPedGroup *,CPed *)
void __fastcall CPedGroupDefaultTaskAllocatorRandom::AllocateDefaultTasks(
        CPedGroupDefaultTaskAllocatorRandom *this,
        CPedGroup *a2,
        CPed *a3)
{
  int v5; // r5
  int v6; // r4
  int *v7; // r6
  CPed *v8; // r2
  unsigned int v9; // r1
  CTaskComplexGangFollower *v10; // r0
  CPed *v11; // r2
  unsigned int v12; // r1
  CTaskComplexGangLeader *v13; // r0
  int v14; // r0

  v5 = 0;
  v6 = 0;
  v7 = &dword_9FF894;
  do
  {
    v8 = *(CPed **)((char *)a2 + v5 + 540);
    v9 = a3 == 0;
    if ( v8 && ((v8 == a3) | v9) == 1 )
    {
      CTask::operator new((CTask *)&dword_4C, v9);
      v10 = (CTaskComplexGangFollower *)CTaskComplexGangFollower::CTaskComplexGangFollower();
      *(_DWORD *)((char *)a2 + v5 + 544) = v10;
      CTaskComplexGangFollower::SetFollowLeader(v10, *((_BYTE *)a2 + 4) != 0);
    }
    ++v6;
    v7 += 2;
    v5 += 20;
  }
  while ( v6 != 7 );
  v11 = (CPed *)*((_DWORD *)a2 + 170);
  v12 = v11 == a3;
  if ( v11 )
  {
    if ( ((a3 == 0) | v12) == 1 )
    {
      v13 = (CTaskComplexGangLeader *)CTask::operator new((CTask *)&dword_38, v12);
      CTaskComplexGangLeader::CTaskComplexGangLeader(v13, a2);
      *((_DWORD *)a2 + 171) = v14;
    }
  }
}


// ============================================================

// Address: 0x4b8cc4
// Original: _ZNK35CPedGroupDefaultTaskAllocatorRandom7GetTypeEv
// Demangled: CPedGroupDefaultTaskAllocatorRandom::GetType(void)
int __fastcall CPedGroupDefaultTaskAllocatorRandom::GetType(CPedGroupDefaultTaskAllocatorRandom *this)
{
  return 5;
}


// ============================================================
