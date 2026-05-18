
// Address: 0x37682a
// Original: _ZNK22CEventLowAngerAtPlayer10AffectsPedEP4CPed
// Demangled: CEventLowAngerAtPlayer::AffectsPed(CPed *)
int __fastcall CEventLowAngerAtPlayer::AffectsPed(CEventLowAngerAtPlayer *this, CPed *a2)
{
  return sub_196874(a2);
}


// ============================================================

// Address: 0x3784cc
// Original: _ZN22CEventLowAngerAtPlayerD0Ev
// Demangled: CEventLowAngerAtPlayer::~CEventLowAngerAtPlayer()
void __fastcall CEventLowAngerAtPlayer::~CEventLowAngerAtPlayer(CEventLowAngerAtPlayer *this)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pEventPool;
  v2 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x3784fc
// Original: _ZNK22CEventLowAngerAtPlayer12GetEventTypeEv
// Demangled: CEventLowAngerAtPlayer::GetEventType(void)
int __fastcall CEventLowAngerAtPlayer::GetEventType(CEventLowAngerAtPlayer *this)
{
  return 50;
}


// ============================================================

// Address: 0x378500
// Original: _ZNK22CEventLowAngerAtPlayer16GetEventPriorityEv
// Demangled: CEventLowAngerAtPlayer::GetEventPriority(void)
int __fastcall CEventLowAngerAtPlayer::GetEventPriority(CEventLowAngerAtPlayer *this)
{
  return 33;
}


// ============================================================

// Address: 0x378504
// Original: _ZNK22CEventLowAngerAtPlayer11GetLifeTimeEv
// Demangled: CEventLowAngerAtPlayer::GetLifeTime(void)
int __fastcall CEventLowAngerAtPlayer::GetLifeTime(CEventLowAngerAtPlayer *this)
{
  return 0;
}


// ============================================================

// Address: 0x378508
// Original: _ZNK22CEventLowAngerAtPlayer13CloneEditableEv
// Demangled: CEventLowAngerAtPlayer::CloneEditable(void)
int __fastcall CEventLowAngerAtPlayer::CloneEditable(CEventLowAngerAtPlayer *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int result; // r0
  int v4; // r12
  int v5; // r2
  int v6; // r3

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  result = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++result;
    if ( result == v4 )
    {
      result = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + result);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + result) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  result = *v2 + 68 * v2[3];
LABEL_7:
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 13107456;
  *(_WORD *)(result + 12) = -1;
  *(_DWORD *)result = &off_666DB8;
  return result;
}


// ============================================================
