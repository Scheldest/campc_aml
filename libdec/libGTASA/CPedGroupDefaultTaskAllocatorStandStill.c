
// Address: 0x4b276c
// Original: _ZNK39CPedGroupDefaultTaskAllocatorStandStill20AllocateDefaultTasksEP9CPedGroupP4CPed
// Demangled: CPedGroupDefaultTaskAllocatorStandStill::AllocateDefaultTasks(CPedGroup *,CPed *)
void __fastcall CPedGroupDefaultTaskAllocatorStandStill::AllocateDefaultTasks(
        CPedGroupDefaultTaskAllocatorStandStill *this,
        CPedGroup *a2,
        CPed *a3)
{
  CPed *v5; // r2
  int v6; // r6
  unsigned int v7; // r1
  CTaskComplex *v8; // r0
  _DWORD *v9; // r0
  CPed *v10; // r1
  bool v11; // zf
  CTaskComplex *v12; // r0
  _DWORD *v13; // r0
  CPed *v14; // r2
  int v15; // r6
  unsigned int v16; // r1
  CTaskComplex *v17; // r0
  _DWORD *v18; // r0
  CPed *v19; // r1
  CTaskComplex *v20; // r0
  _DWORD *v21; // r0
  CPed *v22; // r2
  int v23; // r6
  unsigned int v24; // r1
  CTaskComplex *v25; // r0
  _DWORD *v26; // r0
  CPed *v27; // r1
  CTaskComplex *v28; // r0
  _DWORD *v29; // r0
  CPed *v30; // r2
  int v31; // r6
  unsigned int v32; // r1
  CTaskComplex *v33; // r0
  _DWORD *v34; // r0
  CPed *v35; // r1
  bool v36; // zf
  CTaskComplex *v37; // r0
  _DWORD *v38; // r0

  v5 = (CPed *)*((_DWORD *)a2 + 135);
  v6 = 0;
  v7 = a3 == 0;
  if ( v5 && ((v5 == a3) | v7) == 1 )
  {
    v8 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], v7);
    CTaskComplex::CTaskComplex(v8);
    *v9 = &off_66A780;
    *((_DWORD *)a2 + 136) = v9;
  }
  v10 = (CPed *)*((_DWORD *)a2 + 140);
  if ( !a3 )
    v6 = 1;
  v11 = v10 == 0;
  if ( v10 )
    v11 = ((v10 == a3) | v6) == 0;
  if ( !v11 )
  {
    v12 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)v10);
    CTaskComplex::CTaskComplex(v12);
    *v13 = &off_66A780;
    *((_DWORD *)a2 + 141) = v13;
  }
  v14 = (CPed *)*((_DWORD *)a2 + 145);
  v15 = 0;
  v16 = a3 == 0;
  if ( v14 && ((v14 == a3) | v16) == 1 )
  {
    v17 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], v16);
    CTaskComplex::CTaskComplex(v17);
    *v18 = &off_66A780;
    *((_DWORD *)a2 + 146) = v18;
  }
  v19 = (CPed *)*((_DWORD *)a2 + 150);
  if ( !a3 )
    v15 = 1;
  if ( v19 && ((v19 == a3) | v15) == 1 )
  {
    v20 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)v19);
    CTaskComplex::CTaskComplex(v20);
    *v21 = &off_66A780;
    *((_DWORD *)a2 + 151) = v21;
  }
  v22 = (CPed *)*((_DWORD *)a2 + 155);
  v23 = 0;
  v24 = a3 == 0;
  if ( v22 && ((v22 == a3) | v24) == 1 )
  {
    v25 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], v24);
    CTaskComplex::CTaskComplex(v25);
    *v26 = &off_66A780;
    *((_DWORD *)a2 + 156) = v26;
  }
  v27 = (CPed *)*((_DWORD *)a2 + 160);
  if ( !a3 )
    v23 = 1;
  if ( v27 && ((v27 == a3) | v23) == 1 )
  {
    v28 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)v27);
    CTaskComplex::CTaskComplex(v28);
    *v29 = &off_66A780;
    *((_DWORD *)a2 + 161) = v29;
  }
  v30 = (CPed *)*((_DWORD *)a2 + 165);
  v31 = 0;
  v32 = a3 == 0;
  if ( v30 && ((v30 == a3) | v32) == 1 )
  {
    v33 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], v32);
    CTaskComplex::CTaskComplex(v33);
    *v34 = &off_66A780;
    *((_DWORD *)a2 + 166) = v34;
  }
  v35 = (CPed *)*((_DWORD *)a2 + 170);
  if ( !a3 )
    v31 = 1;
  v36 = v35 == 0;
  if ( v35 )
    v36 = ((v35 == a3) | v31) == 0;
  if ( !v36 )
  {
    v37 = (CTaskComplex *)CTask::operator new((CTask *)&byte_9[3], (unsigned int)v35);
    CTaskComplex::CTaskComplex(v37);
    *v38 = &off_66A780;
    *((_DWORD *)a2 + 171) = v38;
  }
}


// ============================================================

// Address: 0x4b8cbc
// Original: _ZNK39CPedGroupDefaultTaskAllocatorStandStill7GetTypeEv
// Demangled: CPedGroupDefaultTaskAllocatorStandStill::GetType(void)
int __fastcall CPedGroupDefaultTaskAllocatorStandStill::GetType(CPedGroupDefaultTaskAllocatorStandStill *this)
{
  return 2;
}


// ============================================================
