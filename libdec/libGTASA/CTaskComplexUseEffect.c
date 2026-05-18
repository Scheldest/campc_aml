
// Address: 0x18a244
// Original: j__ZN21CTaskComplexUseEffectC2EP9C2dEffectP7CEntity
// Demangled: CTaskComplexUseEffect::CTaskComplexUseEffect(C2dEffect *,CEntity *)
// attributes: thunk
CTaskComplexUseEffect *__fastcall CTaskComplexUseEffect::CTaskComplexUseEffect(
        CTaskComplexUseEffect *a1,
        C2dEffect *a2,
        CEntity *a3)
{
  return _ZN21CTaskComplexUseEffectC2EP9C2dEffectP7CEntity(a1, a2, a3);
}


// ============================================================

// Address: 0x4edc1c
// Original: _ZN21CTaskComplexUseEffectC2EP9C2dEffectP7CEntity
// Demangled: CTaskComplexUseEffect::CTaskComplexUseEffect(C2dEffect *,CEntity *)
int __fastcall CTaskComplexUseEffect::CTaskComplexUseEffect(int a1, int a2, CEntity *a3)
{
  CTaskComplex::CTaskComplex((CTaskComplex *)a1);
  *(_DWORD *)(a1 + 12) = a2;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 4;
  *(_BYTE *)(a1 + 32) = 0;
  *(_DWORD *)a1 = &off_66A100;
  *(_DWORD *)(a1 + 16) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 16));
  return a1;
}


// ============================================================

// Address: 0x4edc68
// Original: _ZN21CTaskComplexUseEffectD0Ev
// Demangled: CTaskComplexUseEffect::~CTaskComplexUseEffect()
void __fastcall CTaskComplexUseEffect::~CTaskComplexUseEffect(CTaskComplexUseEffect *this)
{
  int v2; // r1
  bool v3; // zf
  CPedAttractorManager *PedAttractorManager; // r0
  CEntity *v5; // r0
  void *v6; // r0

  v2 = *((_DWORD *)this + 6);
  v3 = v2 == 0;
  *(_DWORD *)this = &off_66A100;
  if ( v2 )
    v3 = *((_DWORD *)this + 5) == 0;
  if ( !v3 )
  {
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    CPedAttractorManager::DeRegisterPed(PedAttractorManager, *((CPed **)this + 6), *((CPedAttractor **)this + 5));
  }
  v5 = (CEntity *)*((_DWORD *)this + 4);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 4);
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v6);
}


// ============================================================

// Address: 0x4edcb4
// Original: _ZN21CTaskComplexUseEffect13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexUseEffect::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexUseEffect::MakeAbortable(CPedAttractor **this, CPed *a2, int a3, const CEvent *a4)
{
  int v7; // r5
  CPedAttractorManager *PedAttractorManager; // r0
  CPedAttractor *v9; // r5
  int v10; // r0
  float v11; // s0
  float *v12; // r1
  float v13; // s2
  int v14; // r0
  int v15; // r1
  float *v16; // r2

  v7 = 0;
  if ( (*(int (__fastcall **)(CPedAttractor *, CPed *, int))(*(_DWORD *)this[2] + 28))(this[2], a2, a3) == 1 )
  {
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    CPedAttractorManager::DeRegisterPed(PedAttractorManager, a2, this[5]);
    this[5] = 0;
    this[6] = 0;
    if ( !a4 )
      return 1;
    if ( (*(int (__fastcall **)(CPedAttractor *))(*(_DWORD *)this[2] + 20))(this[2]) != 915 )
      return 1;
    v9 = this[2];
    if ( ((*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) | 1) != 3 )
      return 1;
    v10 = *((_DWORD *)a2 + 5);
    v11 = *((float *)v9 + 4);
    v12 = (float *)(v10 + 48);
    v13 = *((float *)v9 + 5);
    if ( !v10 )
      v12 = (float *)((char *)a2 + 4);
    if ( (float)((float)((float)((float)(*v12 - v11) * (float)(*v12 - v11))
                       + (float)((float)(v12[1] - v13) * (float)(v12[1] - v13)))
               + 0.0) >= 2.25 )
      return 1;
    v14 = *((_DWORD *)a4 + 4);
    if ( !v14 )
      return 1;
    v15 = *(_DWORD *)(v14 + 20);
    v16 = (float *)(v15 + 48);
    if ( !v15 )
      v16 = (float *)(v14 + 4);
    if ( (float)((float)((float)((float)(*v16 - v11) * (float)(*v16 - v11))
                       + (float)((float)(v16[1] - v13) * (float)(v16[1] - v13)))
               + 0.0) < 2.25 )
    {
      v7 = 1;
      if ( *(_DWORD *)(v14 + 1104) == 1 )
        *((_BYTE *)this + 32) = 1;
    }
    else
    {
      return 1;
    }
  }
  return v7;
}


// ============================================================

// Address: 0x4eddac
// Original: _ZN21CTaskComplexUseEffect17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUseEffect::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUseEffect::CreateNextSubTask(CTaskComplexUseEffect *this, CPed *a2)
{
  CPedAttractorManager *PedAttractorManager; // r0
  CPedAttractor *RelevantAttractor; // r0

  if ( *((_DWORD *)this + 5)
    && (PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager(),
        RelevantAttractor = (CPedAttractor *)CPedAttractorManager::GetRelevantAttractor(
                                               PedAttractorManager,
                                               a2,
                                               *((const C2dEffect **)this + 3),
                                               *((const CEntity **)this + 4)),
        RelevantAttractor == *((CPedAttractor **)this + 5)) )
  {
    return j_CPedAttractor::GetTaskForPed(RelevantAttractor, a2);
  }
  else
  {
    return 0;
  }
}


// ============================================================

// Address: 0x4edddc
// Original: _ZN21CTaskComplexUseEffect18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUseEffect::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexUseEffect::CreateFirstSubTask(CEntity **this, CPed *a2)
{
  CEntity *v4; // r0
  CEntity **v5; // r6
  CTaskSimple *v6; // r0
  _DWORD *result; // r0
  CPedAttractorManager *PedAttractorManager; // r0
  C2dEffect *v9; // r2
  CEntity *v10; // r3
  CEntity *v11; // r0
  CEntity *v12; // r6

  v5 = this + 6;
  v4 = this[6];
  if ( v4 )
    CEntity::CleanUpOldReference(v4, v5);
  *v5 = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, v5);
  if ( *((_BYTE *)this + 32) )
    goto LABEL_6;
  if ( this[4] )
  {
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    v9 = this[3];
LABEL_10:
    v10 = this[4];
    goto LABEL_11;
  }
  if ( CScripted2dEffects::GetIndex(this[3], a2) < 0 )
  {
LABEL_6:
    this[5] = 0;
LABEL_7:
    v6 = (CTaskSimple *)CTask::operator new((CTask *)byte_8, (unsigned int)a2);
    CTaskSimple::CTaskSimple(v6);
    *result = &off_669000;
    return result;
  }
  v12 = this[4];
  PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
  v9 = this[3];
  if ( v12 )
    goto LABEL_10;
  v10 = 0;
LABEL_11:
  v11 = (CEntity *)CPedAttractorManager::RegisterPedWithAttractor(PedAttractorManager, a2, v9, v10, (int)this[7]);
  this[5] = v11;
  if ( !v11 )
    goto LABEL_7;
  return (_DWORD *)j_CPedAttractor::GetTaskForPed(v11, a2);
}


// ============================================================

// Address: 0x4ede78
// Original: _ZN21CTaskComplexUseEffect14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUseEffect::ControlSubTask(CPed *)
int __fastcall CTaskComplexUseEffect::ControlSubTask(CPedAttractor **this, CPed *a2)
{
  CWanted *PlayerWanted; // r0
  CPedAttractorManager *PedAttractorManager; // r0
  CPedAttractor *v7; // r0

  if ( *((_DWORD *)a2 + 359) == 6
    && *(_DWORD *)(FindPlayerWanted(-1) + 44)
    && (PlayerWanted = (CWanted *)FindPlayerWanted(-1), CWanted::CanCopJoinPursuit(PlayerWanted, a2) == 1)
    && (*(int (__fastcall **)(CPedAttractor *, CPed *, int, _DWORD))(*(_DWORD *)this[2] + 28))(this[2], a2, 1, 0) )
  {
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    CPedAttractorManager::DeRegisterPed(PedAttractorManager, a2, this[5]);
    return 0;
  }
  else
  {
    v7 = this[5];
    if ( v7 )
      return j_CPedAttractor::GetTaskForPed(v7, a2);
    else
      return (*((int (__fastcall **)(CPedAttractor **, CPed *))*this + 11))(this, a2);
  }
}


// ============================================================

// Address: 0x4f1d08
// Original: _ZN21CTaskComplexUseEffectD2Ev
// Demangled: CTaskComplexUseEffect::~CTaskComplexUseEffect()
void __fastcall CTaskComplexUseEffect::~CTaskComplexUseEffect(CTaskComplexUseEffect *this)
{
  int v2; // r1
  bool v3; // zf
  CPedAttractorManager *PedAttractorManager; // r0
  CEntity *v5; // r0

  v2 = *((_DWORD *)this + 6);
  v3 = v2 == 0;
  *(_DWORD *)this = &off_66A100;
  if ( v2 )
    v3 = *((_DWORD *)this + 5) == 0;
  if ( !v3 )
  {
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    CPedAttractorManager::DeRegisterPed(PedAttractorManager, *((CPed **)this + 6), *((CPedAttractor **)this + 5));
  }
  v5 = (CEntity *)*((_DWORD *)this + 4);
  if ( v5 )
    CEntity::CleanUpOldReference(v5, (CEntity **)this + 4);
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4f359c
// Original: _ZNK21CTaskComplexUseEffect5CloneEv
// Demangled: CTaskComplexUseEffect::Clone(void)
int __fastcall CTaskComplexUseEffect::Clone(CTaskComplexUseEffect *this, unsigned int a2)
{
  int v3; // r4
  __int64 v4; // kr00_8

  v3 = CTask::operator new((CTask *)&dword_24, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  CTaskComplex::CTaskComplex((CTaskComplex *)v3);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 4;
  *(_BYTE *)(v3 + 32) = 0;
  *(_DWORD *)v3 = &off_66A100;
  *(_DWORD *)(v3 + 16) = HIDWORD(v4);
  if ( HIDWORD(v4) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v4), (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================

// Address: 0x4f35f0
// Original: _ZNK21CTaskComplexUseEffect11GetTaskTypeEv
// Demangled: CTaskComplexUseEffect::GetTaskType(void)
int __fastcall CTaskComplexUseEffect::GetTaskType(CTaskComplexUseEffect *this)
{
  return 233;
}


// ============================================================
