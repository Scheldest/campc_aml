
// Address: 0x377be6
// Original: _ZNK21CEventLeaderEntryExit17TakesPriorityOverERK6CEvent
// Demangled: CEventLeaderEntryExit::TakesPriorityOver(CEvent const&)
int __fastcall CEventLeaderEntryExit::TakesPriorityOver(CEventLeaderEntryExit *this, const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x377bea
// Original: _ZNK21CEventLeaderEntryExit15AffectsPedGroupEP9CPedGroup
// Demangled: CEventLeaderEntryExit::AffectsPedGroup(CPedGroup *)
bool __fastcall CEventLeaderEntryExit::AffectsPedGroup(CEventLeaderEntryExit *this, CPedGroup *a2)
{
  int v2; // r4

  v2 = 0;
  if ( *((_DWORD *)this + 3) )
    return CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8)) == *((_DWORD *)this + 3);
  return v2;
}


// ============================================================

// Address: 0x37919c
// Original: _ZN21CEventLeaderEntryExitD0Ev
// Demangled: CEventLeaderEntryExit::~CEventLeaderEntryExit()
void __fastcall CEventLeaderEntryExit::~CEventLeaderEntryExit(CEventLeaderEntryExit *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666B8C;
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

// Address: 0x3791f0
// Original: _ZNK21CEventLeaderEntryExit12GetEventTypeEv
// Demangled: CEventLeaderEntryExit::GetEventType(void)
int __fastcall CEventLeaderEntryExit::GetEventType(CEventLeaderEntryExit *this)
{
  return 77;
}


// ============================================================

// Address: 0x3791f8
// Original: _ZNK21CEventLeaderEntryExit11GetLifeTimeEv
// Demangled: CEventLeaderEntryExit::GetLifeTime(void)
int __fastcall CEventLeaderEntryExit::GetLifeTime(CEventLeaderEntryExit *this)
{
  return 0;
}


// ============================================================

// Address: 0x3791fc
// Original: _ZNK21CEventLeaderEntryExit5CloneEv
// Demangled: CEventLeaderEntryExit::Clone(void)
int __fastcall CEventLeaderEntryExit::Clone(CEventLeaderEntryExit *this)
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
  v7 = (CEntity *)*((_DWORD *)this + 3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_666B8C;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  *(_DWORD *)v3 = &off_6671AC;
  return v3;
}


// ============================================================

// Address: 0x379294
// Original: _ZNK21CEventLeaderEntryExit27CanBeInterruptedBySameEventEv
// Demangled: CEventLeaderEntryExit::CanBeInterruptedBySameEvent(void)
int __fastcall CEventLeaderEntryExit::CanBeInterruptedBySameEvent(CEventLeaderEntryExit *this)
{
  return 1;
}


// ============================================================
