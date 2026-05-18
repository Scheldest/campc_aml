
// Address: 0x19fda0
// Original: j__ZN24CTaskComplexUseAttractorC2EP13CPedAttractor
// Demangled: CTaskComplexUseAttractor::CTaskComplexUseAttractor(CPedAttractor *)
// attributes: thunk
void __fastcall CTaskComplexUseAttractor::CTaskComplexUseAttractor(CTaskComplexUseAttractor *this, CPedAttractor *a2)
{
  _ZN24CTaskComplexUseAttractorC2EP13CPedAttractor(this, a2);
}


// ============================================================

// Address: 0x4edf54
// Original: _ZN24CTaskComplexUseAttractorC2EP13CPedAttractor
// Demangled: CTaskComplexUseAttractor::CTaskComplexUseAttractor(CPedAttractor *)
void __fastcall CTaskComplexUseAttractor::CTaskComplexUseAttractor(CTaskComplexUseAttractor *this, CPedAttractor *a2)
{
  _DWORD *v3; // r0

  CTaskComplex::CTaskComplex(this);
  v3[3] = a2;
  *v3 = &off_66A178;
}


// ============================================================

// Address: 0x4edf70
// Original: _ZN24CTaskComplexUseAttractorD2Ev
// Demangled: CTaskComplexUseAttractor::~CTaskComplexUseAttractor()
// attributes: thunk
void __fastcall CTaskComplexUseAttractor::~CTaskComplexUseAttractor(CTaskComplexUseAttractor *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4edf74
// Original: _ZN24CTaskComplexUseAttractorD0Ev
// Demangled: CTaskComplexUseAttractor::~CTaskComplexUseAttractor()
void __fastcall CTaskComplexUseAttractor::~CTaskComplexUseAttractor(CTaskComplexUseAttractor *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4edf84
// Original: _ZN24CTaskComplexUseAttractor17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseAttractor::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseAttractor::CreateNextSubTask(CTaskComplexUseAttractor *this, CPed *a2)
{
  int v4; // r0
  __int16 v5; // r0
  unsigned int v6; // r0
  CPedAttractorManager *PedAttractorManager; // r0

  v4 = (***((int (__fastcall ****)(_DWORD))this + 3))(*((_DWORD *)this + 3));
  if ( v4 == 3 )
  {
    v6 = *((unsigned __int16 *)a2 + 943);
    if ( v6 < 0xB )
      v5 = 0;
    else
      v5 = v6 - 10;
    goto LABEL_7;
  }
  if ( !v4 )
  {
    v5 = *((_WORD *)a2 + 943) + 20 * (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 50.0) + 20;
LABEL_7:
    *((_WORD *)a2 + 943) = v5;
  }
  PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
  CPedAttractorManager::BroadcastDeparture(PedAttractorManager, a2, *((CPedAttractor **)this + 3));
  return 0;
}


// ============================================================

// Address: 0x4edffc
// Original: _ZN24CTaskComplexUseAttractor18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseAttractor::CreateFirstSubTask(CPed *)
int __fastcall CTaskComplexUseAttractor::CreateFirstSubTask(CTaskComplexUseAttractor *this, CPed *a2)
{
  unsigned int v4; // r1
  unsigned int v5; // r1
  int v6; // r9
  int v7; // r6
  _DWORD *v8; // r0
  unsigned __int16 v9; // r5
  unsigned int v10; // r1
  int HasAttractorScriptBrainWithThisNameLoaded; // r0
  int v12; // r1
  bool v13; // zf
  int v14; // r2
  bool v15; // zf
  int *v16; // r6
  int v17; // r0
  CPed *v18; // r1
  unsigned __int16 v19; // r5
  unsigned int v20; // r1
  int v21; // r5
  CPedAttractorManager *PedAttractorManager; // r0
  const char *v24; // r1
  const char *v25; // r1
  const char *v26; // r1
  unsigned __int16 v27; // r0
  int v28; // r5
  int v29; // r10
  CEntity *v30; // r0
  int v31; // r5

  CInterestingEvents::Add();
  switch ( (***((int (__fastcall ****)(_DWORD))this + 3))(*((_DWORD *)this + 3)) )
  {
    case 0:
      v7 = CTask::operator new((CTask *)&dword_20, v4);
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v7, 0, 151, 1082130432, 420, (int)"UseAtm", 0);
      v8 = &`vtable for'CTaskSimpleUseAtm;
      goto LABEL_24;
    case 1:
    case 9:
      if ( (int)(float)((float)((float)(unsigned __int16)rand() * 0.000015259) * 100.0) <= 40 )
      {
        v27 = rand();
        v5 = 15000;
        v6 = (int)(float)((float)((float)v27 * 0.000015259) * 45000.0) + 15000;
      }
      else
      {
        v6 = 9999999;
      }
      v7 = CTask::operator new((CTask *)&dword_14, v5);
      v28 = (***((int (__fastcall ****)(_DWORD))this + 3))(*((_DWORD *)this + 3));
      v29 = *((_DWORD *)a2 + 291);
      CTaskComplex::CTaskComplex((CTaskComplex *)v7);
      *(_DWORD *)(v7 + 12) = v6;
      *(_DWORD *)v7 = &off_669F28;
      *(_BYTE *)(v7 + 16) = v28 == 9;
      *(_BYTE *)(v7 + 17) = (v29 & 0x200000) != 0;
      *(_BYTE *)(v7 + 18) = 0;
      if ( !v7 )
        goto LABEL_25;
      goto LABEL_26;
    case 2:
      v7 = CTask::operator new((CTask *)&word_10, v4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v7);
      *(_DWORD *)(v7 + 12) = 0;
      v8 = &`vtable for'CTaskComplexWaitForBus;
      goto LABEL_24;
    case 3:
      v9 = rand();
      v7 = CTask::operator new((CTask *)&dword_20, v10);
      CTaskSimple::CTaskSimple((CTaskSimple *)v7);
      *(_DWORD *)v7 = &off_669C0C;
      *(_WORD *)(v7 + 20) = 0;
      *(_DWORD *)(v7 + 28) = 1090519040;
      *(_WORD *)(v7 + 24) = 0;
      *(_DWORD *)(v7 + 16) = 0;
      *(_DWORD *)(v7 + 12) = 0;
      *(_DWORD *)(v7 + 8) = (int)(float)((float)((float)v9 * 0.000015259) * 6000.0) + 6000;
      if ( !v7 )
        goto LABEL_25;
      goto LABEL_26;
    case 4:
      v7 = CTask::operator new((CTask *)&byte_9[3], v4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v7);
      v8 = &`vtable for'CTaskComplexWaitForDryWeather;
      goto LABEL_24;
    case 5:
      if ( *((unsigned __int8 *)a2 + 1166) >> 7 )
        goto LABEL_25;
      HasAttractorScriptBrainWithThisNameLoaded = CScriptsForBrains::HasAttractorScriptBrainWithThisNameLoaded(
                                                    (CScriptsForBrains *)CTheScripts::ScriptsForBrains,
                                                    (const char *)(*((_DWORD *)this + 3) + 120));
      v13 = HasAttractorScriptBrainWithThisNameLoaded == 0;
      if ( HasAttractorScriptBrainWithThisNameLoaded )
      {
        HasAttractorScriptBrainWithThisNameLoaded = *((_DWORD *)this + 3);
        v12 = *(_DWORD *)(HasAttractorScriptBrainWithThisNameLoaded + 8);
        v13 = v12 == 0;
      }
      if ( v13 )
        goto LABEL_25;
      v14 = *(_BYTE *)(v12 + 58) & 7;
      v15 = v14 == 4;
      if ( v14 == 4 )
        v15 = *(unsigned __int8 *)(v12 + 327) << 31 == 0;
      if ( !v15 )
        CScriptsForBrains::StartAttractorScriptBrainWithThisName(
          (CScriptsForBrains *)CTheScripts::ScriptsForBrains,
          (const char *)(HasAttractorScriptBrainWithThisNameLoaded + 120),
          a2,
          (*((_DWORD *)a2 + 291) & 0x200000) != 0);
      v16 = &CScriptedBrainTaskStore::ms_entries;
      v17 = -1;
      break;
    case 6:
      v19 = rand();
      v7 = CTask::operator new((CTask *)&dword_20, v20);
      CTaskSimple::CTaskSimple((CTaskSimple *)v7);
      *(_DWORD *)v7 = &off_669C0C;
      *(_WORD *)(v7 + 20) = 0;
      *(_DWORD *)(v7 + 28) = 1090519040;
      *(_WORD *)(v7 + 24) = 0;
      *(_DWORD *)(v7 + 8) = (int)(float)((float)((float)v19 * 0.000015259) * 3000.0) + 3000;
      *(_DWORD *)(v7 + 12) = 0;
      *(_DWORD *)(v7 + 16) = 0;
      if ( !v7 )
        goto LABEL_25;
      goto LABEL_26;
    case 7:
      v7 = CTask::operator new((CTask *)&word_10, v4);
      v21 = *((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex((CTaskComplex *)v7);
      *(_DWORD *)(v7 + 12) = v21;
      v8 = &`vtable for'CTaskComplexUseScriptedAttractor;
LABEL_24:
      *(_DWORD *)v7 = *v8 + 8;
      if ( !v7 )
        goto LABEL_25;
      goto LABEL_26;
    case 8:
      v7 = CTask::operator new((CTask *)&dword_38, v4);
      CTaskComplex::CTaskComplex((CTaskComplex *)v7);
      *(_BYTE *)(v7 + 12) = 1;
      *(_WORD *)(v7 + 28) = 0;
      *(_DWORD *)(v7 + 13) = 0;
      *(_DWORD *)(v7 + 52) = 0;
      *(_DWORD *)(v7 + 20) = 0;
      *(_DWORD *)(v7 + 24) = 0;
      *(_DWORD *)v7 = &off_66A0C4;
      *(_DWORD *)(v7 + 36) = CAnimManager::GetAnimationBlock((CAnimManager *)"beach", 0);
      *(_DWORD *)(v7 + 44) = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"beach", v24);
      *(_DWORD *)(v7 + 40) = CAnimManager::GetAnimationBlock((CAnimManager *)"sunbathe", v25);
      *(_DWORD *)(v7 + 48) = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"sunbathe", v26);
      if ( !v7 )
        goto LABEL_25;
      goto LABEL_26;
    default:
      goto LABEL_25;
  }
  while ( 1 )
  {
    v18 = (CPed *)*v16;
    if ( (CPed *)*v16 == a2 )
      break;
    ++v17;
    v16 += 4;
    if ( v17 >= 47 )
      goto LABEL_36;
  }
  v18 = (CPed *)v16[3];
  v30 = a2;
  if ( v18 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v16[3]);
    v30 = (CEntity *)*v16;
  }
  v16[3] = 0;
  if ( v30 )
  {
    CEntity::CleanUpOldReference(v30, (CEntity **)v16);
    *v16 = 0;
  }
LABEL_36:
  v7 = CTask::operator new((CTask *)&dword_1C, (unsigned int)v18);
  v31 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex((CTaskComplex *)v7);
  *(_BYTE *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 24) = 0;
  *(_DWORD *)v7 = &off_66A710;
  strcpy((char *)(v7 + 13), (const char *)(v31 + 120));
  if ( !v7 )
  {
LABEL_25:
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    CPedAttractorManager::BroadcastDeparture(PedAttractorManager, a2, *((CPedAttractor **)this + 3));
    v7 = 0;
  }
LABEL_26:
  *((_DWORD *)a2 + 291) &= ~0x200000u;
  return v7;
}


// ============================================================

// Address: 0x4ee3f8
// Original: _ZN24CTaskComplexUseAttractor14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseAttractor::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseAttractor::ControlSubTask(CTaskComplexUseAttractor *this, CPed *a2)
{
  int v3; // r0
  bool v4; // zf

  v3 = *((_DWORD *)this + 3);
  v4 = v3 == 0;
  if ( v3 )
  {
    v3 = *(_DWORD *)(v3 + 8);
    v4 = v3 == 0;
  }
  if ( !v4 && (*(_BYTE *)(v3 + 58) & 7) == 4 && (*(_BYTE *)(v3 + 325) & 4) != 0 )
    (*(void (__fastcall **)(_DWORD, CPed *, _DWORD, _DWORD))(**((_DWORD **)this + 2) + 28))(
      *((_DWORD *)this + 2),
      a2,
      0,
      0);
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x4f3620
// Original: _ZNK24CTaskComplexUseAttractor5CloneEv
// Demangled: CTaskComplexUseAttractor::Clone(void)
_DWORD *__fastcall CTaskComplexUseAttractor::Clone(CTaskComplexUseAttractor *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  _DWORD *result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  result[3] = v4;
  *result = &off_66A178;
  return result;
}


// ============================================================

// Address: 0x4f3644
// Original: _ZNK24CTaskComplexUseAttractor11GetTaskTypeEv
// Demangled: CTaskComplexUseAttractor::GetTaskType(void)
int __fastcall CTaskComplexUseAttractor::GetTaskType(CTaskComplexUseAttractor *this)
{
  return 235;
}


// ============================================================
