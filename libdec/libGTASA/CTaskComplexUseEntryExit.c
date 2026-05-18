
// Address: 0x525ef8
// Original: _ZN24CTaskComplexUseEntryExit18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseEntryExit::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexUseEntryExit::CreateFirstSubTask(CTaskComplexUseEntryExit *this, CPed *a2)
{
  int v2; // r0
  float v3; // s16
  float v4; // s18
  float v5; // s20
  float v6; // s22
  int v7; // r4
  CTaskSimple *v8; // r0
  int result; // r0
  char v10; // r3
  char v11; // r2

  v2 = *((_DWORD *)this + 3);
  v3 = *(float *)(v2 + 8);
  v4 = *(float *)(v2 + 12);
  v5 = *(float *)(v2 + 16);
  v6 = *(float *)(v2 + 20);
  v7 = *(_DWORD *)(v2 + 24);
  v8 = (CTaskSimple *)CTask::operator new((CTask *)&word_2C, (unsigned int)a2);
  CTaskSimple::CTaskSimple(v8);
  v10 = *(_BYTE *)(result + 28);
  v11 = *(_BYTE *)(result + 29);
  *(_DWORD *)(result + 8) = 6;
  *(_DWORD *)(result + 20) = v7;
  *(_DWORD *)(result + 24) = 1056964608;
  *(_DWORD *)result = &off_66C0E4;
  *(_BYTE *)(result + 28) = v10 & 0xC0;
  *(_BYTE *)(result + 29) = v11 & 0xE0;
  *(float *)(result + 12) = (float)(v3 + v5) * 0.5;
  *(float *)(result + 16) = (float)(v4 + v6) * 0.5;
  return result;
}


// ============================================================

// Address: 0x525f70
// Original: _ZN24CTaskComplexUseEntryExit17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseEntryExit::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseEntryExit::CreateNextSubTask(CTaskComplexUseEntryExit *this, CPed *a2, float a3)
{
  char v5; // r1
  CEntryExitManager *v6; // r0
  CEntryExitManager *v7; // r1
  unsigned int v8; // r1
  CEntity *NearestDoor; // r8
  int v10; // r5
  char v11; // r2
  int v12; // r0
  int v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r3
  void (__fastcall *v17)(CPed *, int, int, int, _DWORD); // r12
  float v18; // s0
  CEntity *v19; // r1
  CEntity *v20; // r1

  v5 = *((_BYTE *)this + 20);
  if ( (v5 & 1) != 0 )
    goto LABEL_6;
  v6 = (CEntryExitManager *)*((_DWORD *)this + 3);
  *((_BYTE *)this + 20) = v5 | 1;
  v7 = (CEntryExitManager *)*((_DWORD *)v6 + 14);
  if ( !v7 )
    v7 = v6;
  *((_DWORD *)this + 4) = v7;
  NearestDoor = (CEntity *)CEntryExitManager::FindNearestDoor(v6, (const CEntryExit *)0x41200000, a3);
  if ( !NearestDoor )
  {
LABEL_6:
    v12 = *((_DWORD *)this + 4);
    v13 = *(_DWORD *)a2;
    v14 = *(_DWORD *)(v12 + 32);
    v15 = *(_DWORD *)(v12 + 36);
    v16 = *(_DWORD *)(v12 + 40);
    *((_BYTE *)a2 + 51) = *(_BYTE *)(v12 + 50);
    *((_DWORD *)a2 + 485) = *((_DWORD *)this + 3);
    v17 = *(void (__fastcall **)(CPed *, int, int, int, _DWORD))(v13 + 60);
    v10 = 0;
    v17(a2, v14, v15, v16, 0);
    v18 = (float)(*(float *)(*((_DWORD *)this + 4) + 44) * 3.1416) / 180.0;
    *((float *)a2 + 344) = v18;
    *((float *)a2 + 343) = v18;
    CWorld::Remove(a2, v19);
    *((_DWORD *)a2 + 7) |= 0x40000u;
    CWorld::Add(a2, v20);
  }
  else
  {
    v10 = CTask::operator new((CTask *)&dword_38, v8);
    CTaskComplex::CTaskComplex((CTaskComplex *)v10);
    *(_WORD *)(v10 + 48) = 0;
    v11 = *(_BYTE *)(v10 + 52);
    *(_DWORD *)(v10 + 40) = 0;
    *(_DWORD *)(v10 + 44) = 0;
    *(_DWORD *)v10 = &off_66C4B4;
    *(_BYTE *)(v10 + 52) = v11 & 0xF0 | 1;
    *(_DWORD *)(v10 + 12) = NearestDoor;
    CEntity::RegisterReference(NearestDoor, (CEntity **)(v10 + 12));
  }
  return v10;
}


// ============================================================

// Address: 0x52605c
// Original: _ZN24CTaskComplexUseEntryExit12UseEntryExitEP4CPed
// Demangled: CTaskComplexUseEntryExit::UseEntryExit(CPed *)
int __fastcall CTaskComplexUseEntryExit::UseEntryExit(CTaskComplexUseEntryExit *this, CPed *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  float v9; // s0
  CEntity *v10; // r1
  CEntity *v11; // r1

  v4 = *((_DWORD *)this + 4);
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(_DWORD *)(v4 + 36);
  v7 = *(_DWORD *)(v4 + 40);
  v8 = *(_DWORD *)a2;
  *((_BYTE *)a2 + 51) = *(_BYTE *)(v4 + 50);
  *((_DWORD *)a2 + 485) = *((_DWORD *)this + 3);
  (*(void (__fastcall **)(CPed *, int, int, int, _DWORD))(v8 + 60))(a2, v5, v6, v7, 0);
  v9 = (float)(*(float *)(*((_DWORD *)this + 4) + 44) * 3.1416) / 180.0;
  *((float *)a2 + 344) = v9;
  *((float *)a2 + 343) = v9;
  CWorld::Remove(a2, v10);
  *((_DWORD *)a2 + 7) |= 0x40000u;
  return sub_19B3B8(a2, v11);
}


// ============================================================

// Address: 0x5260d4
// Original: _ZN24CTaskComplexUseEntryExit14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseEntryExit::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseEntryExit::ControlSubTask(CTaskComplexUseEntryExit *this, CPed *a2)
{
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x5260d8
// Original: _ZN24CTaskComplexUseEntryExit13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexUseEntryExit::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexUseEntryExit::MakeAbortable(
        CTaskComplexUseEntryExit *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  if ( a3 == 2 )
    return (*(int (__fastcall **)(_DWORD, CPed *, int, const CEvent *))(**((_DWORD **)this + 2) + 28))(
             *((_DWORD *)this + 2),
             a2,
             2,
             a4);
  else
    return 0;
}


// ============================================================

// Address: 0x526fd8
// Original: _ZN24CTaskComplexUseEntryExitD0Ev
// Demangled: CTaskComplexUseEntryExit::~CTaskComplexUseEntryExit()
void __fastcall CTaskComplexUseEntryExit::~CTaskComplexUseEntryExit(CTaskComplexUseEntryExit *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x526fe8
// Original: _ZNK24CTaskComplexUseEntryExit5CloneEv
// Demangled: CTaskComplexUseEntryExit::Clone(void)
int __fastcall CTaskComplexUseEntryExit::Clone(CTaskComplexUseEntryExit *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  int result; // r0
  char v6; // r2

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&off_18, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 16) = 0;
  v6 = *(_BYTE *)(result + 20);
  *(_DWORD *)result = &off_66C680;
  *(_BYTE *)(result + 20) = v6 & 0xFE;
  return result;
}


// ============================================================

// Address: 0x527018
// Original: _ZNK24CTaskComplexUseEntryExit11GetTaskTypeEv
// Demangled: CTaskComplexUseEntryExit::GetTaskType(void)
int __fastcall CTaskComplexUseEntryExit::GetTaskType(CTaskComplexUseEntryExit *this)
{
  return 938;
}


// ============================================================
