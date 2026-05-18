
// Address: 0x376af0
// Original: _ZNK31CEventPotentialWalkIntoBuilding10AffectsPedEP4CPed
// Demangled: CEventPotentialWalkIntoBuilding::AffectsPed(CPed *)
bool __fastcall CEventPotentialWalkIntoBuilding::AffectsPed(CEventPotentialWalkIntoBuilding *this, CPed *a2)
{
  int IsAlive; // r0
  bool v5; // zf
  int ActiveTask; // r0

  if ( CPed::IsPlayer(a2) )
    return 0;
  IsAlive = CPed::IsAlive(a2);
  v5 = IsAlive == 1;
  if ( IsAlive == 1 )
    v5 = *((_DWORD *)a2 + 64) == 0;
  if ( !v5
    || *((_WORD *)this + 6) == 1
    || CEventHandler::GetCurrentEventType((CEventHandler *)(*((_DWORD *)a2 + 272) + 52)) == 6
    && *(_DWORD *)(CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56)) + 20) == *((_DWORD *)this + 5) )
  {
    return 0;
  }
  if ( CEventHandler::GetCurrentEventType((CEventHandler *)(*((_DWORD *)a2 + 272) + 52)) == 6
    && *(_DWORD *)(CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56)) + 20) == *((_DWORD *)this + 5) )
  {
    return 0;
  }
  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  return !ActiveTask || (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) != 601;
}


// ============================================================

// Address: 0x3789b0
// Original: _ZN31CEventPotentialWalkIntoBuildingD0Ev
// Demangled: CEventPotentialWalkIntoBuilding::~CEventPotentialWalkIntoBuilding()
void __fastcall CEventPotentialWalkIntoBuilding::~CEventPotentialWalkIntoBuilding(
        CEventPotentialWalkIntoBuilding *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665F54;
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

// Address: 0x378a04
// Original: _ZNK31CEventPotentialWalkIntoBuilding12GetEventTypeEv
// Demangled: CEventPotentialWalkIntoBuilding::GetEventType(void)
int __fastcall CEventPotentialWalkIntoBuilding::GetEventType(CEventPotentialWalkIntoBuilding *this)
{
  return 60;
}


// ============================================================

// Address: 0x378a08
// Original: _ZNK31CEventPotentialWalkIntoBuilding16GetEventPriorityEv
// Demangled: CEventPotentialWalkIntoBuilding::GetEventPriority(void)
int __fastcall CEventPotentialWalkIntoBuilding::GetEventPriority(CEventPotentialWalkIntoBuilding *this)
{
  return 30;
}


// ============================================================

// Address: 0x378a10
// Original: _ZNK31CEventPotentialWalkIntoBuilding5CloneEv
// Demangled: CEventPotentialWalkIntoBuilding::Clone(void)
int __fastcall CEventPotentialWalkIntoBuilding::Clone(CEventPotentialWalkIntoBuilding *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int16 v7; // r3
  CEntity *v8; // r2
  __int64 v9; // d16
  __int64 v10; // d16

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
  v7 = *((_WORD *)this + 6);
  v8 = (CEntity *)*((_DWORD *)this + 5);
  *(_BYTE *)(v3 + 8) = 0;
  *(_WORD *)(v3 + 10) = 0;
  *(_WORD *)(v3 + 12) = v7;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_665F54;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 20) = v8;
  v9 = *((_QWORD *)this + 3);
  *(_DWORD *)(v3 + 32) = *((_DWORD *)this + 8);
  *(_QWORD *)(v3 + 24) = v9;
  v10 = *(_QWORD *)((char *)this + 36);
  *(_DWORD *)(v3 + 44) = *((_DWORD *)this + 11);
  *(_QWORD *)(v3 + 36) = v10;
  if ( v8 )
    CEntity::RegisterReference(v8, (CEntity **)(v3 + 20));
  *(_DWORD *)v3 = &off_666F90;
  return v3;
}


// ============================================================
