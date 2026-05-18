
// Address: 0x19f49c
// Original: j__ZN13CEventSexyPedD2Ev
// Demangled: CEventSexyPed::~CEventSexyPed()
// attributes: thunk
void __fastcall CEventSexyPed::~CEventSexyPed(CEventSexyPed *this)
{
  _ZN13CEventSexyPedD2Ev(this);
}


// ============================================================

// Address: 0x1a0ed0
// Original: j__ZN13CEventSexyPedC2EP4CPed
// Demangled: CEventSexyPed::CEventSexyPed(CPed *)
// attributes: thunk
void __fastcall CEventSexyPed::CEventSexyPed(CEventSexyPed *this, CPed *a2)
{
  _ZN13CEventSexyPedC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x3747cc
// Original: _ZN13CEventSexyPedC2EP4CPed
// Demangled: CEventSexyPed::CEventSexyPed(CPed *)
void __fastcall CEventSexyPed::CEventSexyPed(CEventSexyPed *this, CPed *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_66639C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x37480c
// Original: _ZN13CEventSexyPedD2Ev
// Demangled: CEventSexyPed::~CEventSexyPed()
void __fastcall CEventSexyPed::~CEventSexyPed(CEventSexyPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66639C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x374834
// Original: _ZN13CEventSexyPedD0Ev
// Demangled: CEventSexyPed::~CEventSexyPed()
void __fastcall CEventSexyPed::~CEventSexyPed(CEventSexyPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66639C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x374888
// Original: _ZNK13CEventSexyPed10AffectsPedEP4CPed
// Demangled: CEventSexyPed::AffectsPed(CPed *)
int __fastcall CEventSexyPed::AffectsPed(CEventSexyPed *this, CPed *a2)
{
  CPed *v4; // r0
  int ActiveTaskByType; // r6
  int v6; // r5
  int v7; // r4

  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  v4 = (CPed *)*((_DWORD *)this + 4);
  if ( !v4
    || CPed::IsAlive(v4) != 1
    || IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, a2)
    && IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, a2) == *((_DWORD *)this + 4) )
  {
    return 0;
  }
  if ( ((ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1202)) != 0
     || (ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1215)) != 0
     || (ActiveTaskByType = CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 1203)) != 0)
    && ((v6 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 1202)) != 0
     || (v6 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 1215)) != 0
     || (v6 = CTaskManager::FindActiveTaskByType((CTaskManager *)(*(_DWORD *)(*((_DWORD *)this + 4) + 1088) + 4), 1203)) != 0)
    && (v7 = (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTaskByType + 20))(ActiveTaskByType),
        v7 == (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6)) )
  {
    return 0;
  }
  else
  {
    return 1;
  }
}


// ============================================================

// Address: 0x37a0f4
// Original: _ZNK13CEventSexyPed12GetEventTypeEv
// Demangled: CEventSexyPed::GetEventType(void)
int __fastcall CEventSexyPed::GetEventType(CEventSexyPed *this)
{
  return 20;
}


// ============================================================

// Address: 0x37a0f8
// Original: _ZNK13CEventSexyPed16GetEventPriorityEv
// Demangled: CEventSexyPed::GetEventPriority(void)
int __fastcall CEventSexyPed::GetEventPriority(CEventSexyPed *this)
{
  return 4;
}


// ============================================================

// Address: 0x37a0fc
// Original: _ZNK13CEventSexyPed11GetLifeTimeEv
// Demangled: CEventSexyPed::GetLifeTime(void)
int __fastcall CEventSexyPed::GetLifeTime(CEventSexyPed *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a100
// Original: _ZNK13CEventSexyPed15GetSourceEntityEv
// Demangled: CEventSexyPed::GetSourceEntity(void)
int __fastcall CEventSexyPed::GetSourceEntity(CEventSexyPed *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x37a104
// Original: _ZNK13CEventSexyPed13CloneEditableEv
// Demangled: CEventSexyPed::CloneEditable(void)
int __fastcall CEventSexyPed::CloneEditable(CEventSexyPed *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r0

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)v3 = &off_66639C;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
