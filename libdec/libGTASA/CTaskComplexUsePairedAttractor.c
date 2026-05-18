
// Address: 0x190ccc
// Original: j__ZN30CTaskComplexUsePairedAttractor15SeekPartnershipEP4CPed
// Demangled: CTaskComplexUsePairedAttractor::SeekPartnership(CPed *)
// attributes: thunk
int __fastcall CTaskComplexUsePairedAttractor::SeekPartnership(CTaskComplexUsePairedAttractor *this, CPed *a2)
{
  return _ZN30CTaskComplexUsePairedAttractor15SeekPartnershipEP4CPed(this, a2);
}


// ============================================================

// Address: 0x193c34
// Original: j__ZN30CTaskComplexUsePairedAttractor13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexUsePairedAttractor::CreateSubTask(int,CPed *)
// attributes: thunk
int __fastcall CTaskComplexUsePairedAttractor::CreateSubTask(CTaskComplexUsePairedAttractor *this, int a2, CPed *a3)
{
  return _ZN30CTaskComplexUsePairedAttractor13CreateSubTaskEiP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x19ccdc
// Original: j__ZN30CTaskComplexUsePairedAttractorC2EP13CPedAttractor
// Demangled: CTaskComplexUsePairedAttractor::CTaskComplexUsePairedAttractor(CPedAttractor *)
// attributes: thunk
void __fastcall CTaskComplexUsePairedAttractor::CTaskComplexUsePairedAttractor(
        CTaskComplexUsePairedAttractor *this,
        CPedAttractor *a2)
{
  _ZN30CTaskComplexUsePairedAttractorC2EP13CPedAttractor(this, a2);
}


// ============================================================

// Address: 0x4eeea4
// Original: _ZN30CTaskComplexUsePairedAttractorC2EP13CPedAttractor
// Demangled: CTaskComplexUsePairedAttractor::CTaskComplexUsePairedAttractor(CPedAttractor *)
void __fastcall CTaskComplexUsePairedAttractor::CTaskComplexUsePairedAttractor(
        CTaskComplexUsePairedAttractor *this,
        CPedAttractor *a2)
{
  int v3; // r0

  CTaskComplex::CTaskComplex(this);
  *(_DWORD *)(v3 + 12) = a2;
  *(_DWORD *)(v3 + 16) = 0;
  *(_BYTE *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)v3 = &off_66A30C;
}


// ============================================================

// Address: 0x4eeecc
// Original: _ZN30CTaskComplexUsePairedAttractorD2Ev
// Demangled: CTaskComplexUsePairedAttractor::~CTaskComplexUsePairedAttractor()
// attributes: thunk
void __fastcall CTaskComplexUsePairedAttractor::~CTaskComplexUsePairedAttractor(CTaskComplexUsePairedAttractor *this)
{
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x4eeed0
// Original: _ZN30CTaskComplexUsePairedAttractorD0Ev
// Demangled: CTaskComplexUsePairedAttractor::~CTaskComplexUsePairedAttractor()
void __fastcall CTaskComplexUsePairedAttractor::~CTaskComplexUsePairedAttractor(CTaskComplexUsePairedAttractor *this)
{
  void *v1; // r0

  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x4eeee0
// Original: _ZN30CTaskComplexUsePairedAttractor15SeekPartnershipEP4CPed
// Demangled: CTaskComplexUsePairedAttractor::SeekPartnership(CPed *)
int __fastcall CTaskComplexUsePairedAttractor::SeekPartnership(CTaskComplexUsePairedAttractor *this, CPed *a2)
{
  int result; // r0
  int i; // r8
  int v5; // r10
  int v6; // r9
  bool v7; // zf
  const C2dEffect *v8; // r4
  CPedAttractorManager *PedAttractorManager; // r0
  CEntity *v10; // r4
  int v11; // r6
  CEntity **v13; // [sp+8h] [bp-28h]
  int *EffectPairs; // [sp+10h] [bp-20h]

  EffectPairs = (int *)CScripted2dEffects::GetEffectPairs(*(CScripted2dEffects **)(*((_DWORD *)this + 3) + 4), a2);
  result = *EffectPairs;
  if ( *EffectPairs >= 1 )
  {
    v13 = (CEntity **)((char *)this + 16);
    for ( i = 4; i != 8; ++i )
    {
      v5 = (*((_DWORD *)this + 7) + i) % 4;
      result = (int)&EffectPairs[9 * v5];
      v6 = result + 4;
      v7 = *(_DWORD *)(result + 4) == -1;
      if ( *(_DWORD *)(result + 4) != -1 )
      {
        result = *(_DWORD *)(result + 20);
        v7 = result == -1;
      }
      if ( !v7 )
      {
        v8 = (const C2dEffect *)&CScripted2dEffects::ms_effects[16 * result];
        PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
        result = CPedAttractorManager::GetPedUsingEffect(PedAttractorManager, v8, 0);
        v10 = (CEntity *)result;
        if ( result )
        {
          result = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(result + 1088) + 4), 246);
          v11 = result;
          if ( result )
          {
            result = *(_DWORD *)(result + 16);
            if ( !result )
            {
              result = (int)*v13;
              if ( !*v13 )
              {
                *((_DWORD *)this + 4) = v10;
                *((_DWORD *)this + 7) = v5;
                CEntity::RegisterReference(v10, v13);
                *((_DWORD *)this + 6) = v6;
                *((_BYTE *)this + 20) = 1;
                *(_DWORD *)(v11 + 16) = a2;
                CEntity::RegisterReference(a2, (CEntity **)(v11 + 16));
                result = 0;
                *(_DWORD *)(v11 + 24) = v6;
                *(_BYTE *)(v11 + 20) = 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x4eefbc
// Original: _ZN30CTaskComplexUsePairedAttractor14SetPartnershipEP4CPedbPK19CScriptedEffectPair
// Demangled: CTaskComplexUsePairedAttractor::SetPartnership(CPed *,bool,CScriptedEffectPair const*)
int __fastcall CTaskComplexUsePairedAttractor::SetPartnership(
        CTaskComplexUsePairedAttractor *this,
        CPed *a2,
        char a3,
        const CScriptedEffectPair *a4)
{
  char *v4; // r6
  int result; // r0

  *((_DWORD *)this + 4) = a2;
  v4 = (char *)this + 16;
  result = CEntity::RegisterReference(a2, (CEntity **)this + 4);
  *((_DWORD *)v4 + 2) = a4;
  v4[4] = a3;
  return result;
}


// ============================================================

// Address: 0x4eefe0
// Original: _ZN30CTaskComplexUsePairedAttractor16ClearPartnershipEv
// Demangled: CTaskComplexUsePairedAttractor::ClearPartnership(void)
int __fastcall CTaskComplexUsePairedAttractor::ClearPartnership(CEntity **this)
{
  CEntity *v2; // r0
  CEntity **v3; // r5
  int result; // r0

  v3 = this + 4;
  v2 = this[4];
  if ( v2 )
  {
    CEntity::CleanUpOldReference(v2, v3);
    *v3 = 0;
  }
  result = 0;
  this[6] = 0;
  *((_BYTE *)this + 20) = 0;
  return result;
}


// ============================================================

// Address: 0x4ef000
// Original: _ZN30CTaskComplexUsePairedAttractor17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexUsePairedAttractor::CreateNextSubTask(CPed *)
int __fastcall CTaskComplexUsePairedAttractor::CreateNextSubTask(CTaskComplexUsePairedAttractor *this, CPed *a2)
{
  int v4; // r0
  _BYTE *v5; // r1
  int v6; // r0
  CEntity **v7; // r6
  const C2dEffect *v8; // r1
  CTaskComplex *v9; // r0
  int v10; // r6
  int SubTask; // r5
  char v12; // r4
  void **v13; // r0
  int v14; // r0
  int v15; // r1
  _DWORD *v16; // r2
  int v17; // r1
  int v18; // r0
  CTaskComplex *v19; // r0
  char *v20; // r0
  int Index; // r0
  int v22; // r4
  CEntity *v23; // r0
  unsigned int v24; // r1
  CTaskComplex *v25; // r0
  int v26; // r6
  char v27; // r4
  int *v28; // r0
  unsigned int v29; // r1
  CTaskComplex *v30; // r0
  int v31; // r0
  CPedAttractorManager *PedAttractorManager; // r0

  v4 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2));
  if ( v4 != 247 )
  {
    if ( v4 != 248 )
    {
      if ( v4 == 249 )
      {
        v7 = (CEntity **)((char *)this + 16);
        v6 = *((_DWORD *)this + 4);
        v8 = (const C2dEffect *)(*((_DWORD *)this + 8) + 1);
        *((_DWORD *)this + 8) = v8;
        if ( v6 )
        {
          if ( *((_BYTE *)this + 20) )
          {
            v9 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, *((unsigned __int8 *)this + 20));
            v10 = *((_DWORD *)this + 6);
            SubTask = (int)v9;
            v12 = *((_BYTE *)this + 20);
            CTaskComplex::CTaskComplex(v9);
            v13 = (void **)&`vtable for'CTaskComplexAttractorPartnerWait;
LABEL_17:
            *(_BYTE *)(SubTask + 12) = v12;
            v20 = (char *)*v13;
            *(_DWORD *)(SubTask + 16) = v10;
LABEL_22:
            *(_DWORD *)SubTask = v20 + 8;
            return SubTask;
          }
          CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v6 + 1088) + 4), 246);
          v25 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, v24);
          v26 = *((_DWORD *)this + 6);
          SubTask = (int)v25;
          v27 = *((_BYTE *)this + 20);
          CTaskComplex::CTaskComplex(v25);
          v28 = (int *)&`vtable for'CTaskComplexAttractorPartnerWait;
          goto LABEL_31;
        }
        Index = CScripted2dEffects::GetIndex(*(CScripted2dEffects **)(*((_DWORD *)this + 3) + 4), v8);
        v5 = CScripted2dEffects::ms_useAgainFlags;
        if ( CScripted2dEffects::ms_useAgainFlags[Index] )
        {
          if ( *v7 )
          {
            CEntity::CleanUpOldReference(*v7, (CEntity **)this + 4);
            *v7 = 0;
          }
          goto LABEL_21;
        }
        PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
        CPedAttractorManager::BroadcastDeparture(PedAttractorManager, a2, *((CPedAttractor **)this + 3));
      }
      return 0;
    }
    v18 = *((_DWORD *)this + 4);
    if ( v18 )
    {
      if ( *((_BYTE *)this + 20) )
      {
        v19 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, *((unsigned __int8 *)this + 20));
        v10 = *((_DWORD *)this + 6);
        SubTask = (int)v19;
        v12 = *((_BYTE *)this + 20);
        CTaskComplex::CTaskComplex(v19);
        v13 = (void **)&`vtable for'CTaskComplexUseAttractorPartner;
        goto LABEL_17;
      }
      CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v18 + 1088) + 4), 246);
      v30 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, v29);
      v26 = *((_DWORD *)this + 6);
      SubTask = (int)v30;
      v27 = *((_BYTE *)this + 20);
      CTaskComplex::CTaskComplex(v30);
      v28 = (int *)&`vtable for'CTaskComplexUseAttractorPartner;
LABEL_31:
      v31 = *v28;
      *(_BYTE *)(SubTask + 12) = v27;
      *(_DWORD *)SubTask = v31 + 8;
      *(_DWORD *)(SubTask + 16) = v26;
      return SubTask;
    }
LABEL_21:
    *((_DWORD *)this + 6) = 0;
    *((_BYTE *)this + 20) = 0;
    SubTask = CTask::operator new((CTask *)&word_10, (unsigned int)v5);
    v22 = *((_DWORD *)this + 3);
    CTaskComplex::CTaskComplex((CTaskComplex *)SubTask);
    v20 = (char *)&`vtable for'CTaskComplexUseScriptedAttractor;
    *(_DWORD *)(SubTask + 12) = v22;
    goto LABEL_22;
  }
  v14 = *((unsigned __int8 *)this + 20);
  if ( *((_BYTE *)this + 20) )
    *((_DWORD *)this + 7) = (*((_DWORD *)this + 7) + 5) % 4;
  v15 = *((_DWORD *)this + 6);
  v16 = (_DWORD *)(v15 + 12);
  if ( !v14 )
    v16 = (_DWORD *)(v15 + 28);
  if ( *v16 == 1 )
  {
    v17 = 249;
  }
  else
  {
    if ( *v16 )
    {
      SubTask = 0;
      goto LABEL_26;
    }
    v17 = 1302;
  }
  SubTask = CTaskComplexUsePairedAttractor::CreateSubTask(this, v17, a2);
LABEL_26:
  v23 = (CEntity *)*((_DWORD *)this + 4);
  if ( v23 )
  {
    CEntity::CleanUpOldReference(v23, (CEntity **)this + 4);
    *((_DWORD *)this + 4) = 0;
  }
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 20) = 0;
  return SubTask;
}


// ============================================================

// Address: 0x4ef1b4
// Original: _ZN30CTaskComplexUsePairedAttractor13CreateSubTaskEiP4CPed
// Demangled: CTaskComplexUsePairedAttractor::CreateSubTask(int,CPed *)
void __fastcall CTaskComplexUsePairedAttractor::CreateSubTask(CTaskComplexUsePairedAttractor *this, int a2, CPed *a3)
{
  CTaskComplex *v5; // r0
  int v6; // r5
  char v7; // r4
  _DWORD *v8; // r0
  void **v9; // r1
  CEntity *v10; // r0
  CTaskComplex *v11; // r0
  int v12; // r4
  char *v13; // r1
  CTaskComplex *v14; // r0
  CPedAttractorManager *PedAttractorManager; // r0
  unsigned int v16; // r1
  CTaskComplex *v17; // r0
  int v18; // r5
  char v19; // r4
  int v20; // r0
  int *v21; // r1
  unsigned int v22; // r1
  CTaskComplex *v23; // r0
  int v24; // r1

  if ( a2 > 248 )
  {
    if ( a2 != 1302 )
    {
      if ( a2 != 249 )
        return;
      v10 = (CEntity *)*((_DWORD *)this + 4);
      if ( v10 )
      {
        CEntity::CleanUpOldReference(v10, (CEntity **)this + 4);
        *((_DWORD *)this + 4) = 0;
      }
      *((_DWORD *)this + 6) = 0;
      *((_BYTE *)this + 20) = 0;
      v11 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, a2);
      v12 = *((_DWORD *)this + 3);
      CTaskComplex::CTaskComplex(v11);
      v8[3] = v12;
      v13 = (char *)&`vtable for'CTaskComplexUseScriptedAttractor;
      goto LABEL_14;
    }
    PedAttractorManager = (CPedAttractorManager *)GetPedAttractorManager();
    CPedAttractorManager::BroadcastDeparture(PedAttractorManager, a3, *((CPedAttractor **)this + 3));
  }
  else
  {
    if ( a2 == 247 )
    {
      if ( *((_BYTE *)this + 20) )
      {
        v14 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, 0xF7u);
        v6 = *((_DWORD *)this + 6);
        v7 = *((_BYTE *)this + 20);
        CTaskComplex::CTaskComplex(v14);
        v9 = (void **)&`vtable for'CTaskComplexUseAttractorPartner;
        goto LABEL_13;
      }
      CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 246);
      v23 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, v22);
      v18 = *((_DWORD *)this + 6);
      v19 = *((_BYTE *)this + 20);
      CTaskComplex::CTaskComplex(v23);
      v21 = (int *)&`vtable for'CTaskComplexUseAttractorPartner;
      goto LABEL_19;
    }
    if ( a2 == 248 )
    {
      if ( *((_BYTE *)this + 20) )
      {
        v5 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, 0xF8u);
        v6 = *((_DWORD *)this + 6);
        v7 = *((_BYTE *)this + 20);
        CTaskComplex::CTaskComplex(v5);
        v9 = (void **)&`vtable for'CTaskComplexAttractorPartnerWait;
LABEL_13:
        *((_BYTE *)v8 + 12) = v7;
        v13 = (char *)*v9;
        v8[4] = v6;
LABEL_14:
        *v8 = v13 + 8;
        return;
      }
      CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 246);
      v17 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, v16);
      v18 = *((_DWORD *)this + 6);
      v19 = *((_BYTE *)this + 20);
      CTaskComplex::CTaskComplex(v17);
      v21 = (int *)&`vtable for'CTaskComplexAttractorPartnerWait;
LABEL_19:
      v24 = *v21;
      *(_BYTE *)(v20 + 12) = v19;
      *(_DWORD *)v20 = v24 + 8;
      *(_DWORD *)(v20 + 16) = v18;
    }
  }
}


// ============================================================

// Address: 0x4ef2b4
// Original: _ZN30CTaskComplexUsePairedAttractor18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexUsePairedAttractor::CreateFirstSubTask(CPed *)
_DWORD *__fastcall CTaskComplexUsePairedAttractor::CreateFirstSubTask(CEntity **this, CPed *a2)
{
  CEntity *v3; // r0
  CEntity **v4; // r5
  CTaskComplex *v5; // r0
  CEntity *v6; // r4
  _DWORD *result; // r0

  v4 = this + 4;
  v3 = this[4];
  if ( v3 )
  {
    CEntity::CleanUpOldReference(v3, v4);
    *v4 = 0;
  }
  this[6] = 0;
  *((_BYTE *)this + 20) = 0;
  v5 = (CTaskComplex *)CTask::operator new((CTask *)&word_10, (unsigned int)a2);
  v6 = this[3];
  CTaskComplex::CTaskComplex(v5);
  result[3] = v6;
  *result = &off_66A3C0;
  return result;
}


// ============================================================

// Address: 0x4ef2f0
// Original: _ZN30CTaskComplexUsePairedAttractor14ControlSubTaskEP4CPed
// Demangled: CTaskComplexUsePairedAttractor::ControlSubTask(CPed *)
int __fastcall CTaskComplexUsePairedAttractor::ControlSubTask(CTaskComplexUsePairedAttractor *this, CPed *a2)
{
  int v4; // r4
  int v5; // r0
  int ActiveTaskByType; // r0
  int v7; // r0
  int v8; // r0
  CEntity **v9; // r5
  int v10; // r1
  int v11; // r0

  v4 = *((_DWORD *)this + 2);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
  if ( v5 == 247 )
  {
    v7 = *((_DWORD *)this + 4);
    if ( !v7
      || !CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v7 + 1088) + 4), 246)
      || !CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 247)
      && !CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 248) )
    {
      goto LABEL_19;
    }
    return v4;
  }
  if ( v5 != 248 )
  {
    if ( v5 != 249 )
      return v4;
    if ( !*((_DWORD *)this + 4) )
    {
      CTaskComplexUsePairedAttractor::SeekPartnership(this, a2);
      if ( !*((_DWORD *)this + 4) )
        return v4;
    }
    ActiveTaskByType = *(unsigned __int8 *)(*((_DWORD *)this + 6) + 32);
    goto LABEL_18;
  }
  v9 = (CEntity **)((char *)this + 16);
  v8 = *((_DWORD *)this + 4);
  if ( !v8 )
  {
LABEL_22:
    v11 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 6) = 0;
    *((_BYTE *)this + 20) = 0;
    goto LABEL_23;
  }
  if ( !CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(v8 + 1088) + 4), 246) )
  {
    if ( *v9 )
    {
      CEntity::CleanUpOldReference(*v9, (CEntity **)this + 4);
      *v9 = 0;
    }
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 20) )
    v10 = 248;
  else
    v10 = 247;
  ActiveTaskByType = CTaskManager::FindActiveTaskByType(
                       (CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4),
                       v10);
LABEL_18:
  if ( ActiveTaskByType )
  {
LABEL_19:
    v11 = *((_DWORD *)this + 2);
LABEL_23:
    (*(void (__fastcall **)(int, CPed *, _DWORD, _DWORD))(*(_DWORD *)v11 + 28))(v11, a2, 0, 0);
  }
  return v4;
}


// ============================================================

// Address: 0x4f3a90
// Original: _ZNK30CTaskComplexUsePairedAttractor5CloneEv
// Demangled: CTaskComplexUsePairedAttractor::Clone(void)
int __fastcall CTaskComplexUsePairedAttractor::Clone(CTaskComplexUsePairedAttractor *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int v4; // r4
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_24, a2);
  v4 = *((_DWORD *)this + 3);
  CTaskComplex::CTaskComplex(v3);
  *(_DWORD *)(result + 12) = v4;
  *(_DWORD *)(result + 16) = 0;
  *(_BYTE *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_66A30C;
  return result;
}


// ============================================================

// Address: 0x4f3ac0
// Original: _ZNK30CTaskComplexUsePairedAttractor11GetTaskTypeEv
// Demangled: CTaskComplexUsePairedAttractor::GetTaskType(void)
int __fastcall CTaskComplexUsePairedAttractor::GetTaskType(CTaskComplexUsePairedAttractor *this)
{
  return 246;
}


// ============================================================
