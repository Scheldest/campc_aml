
// Address: 0x376830
// Original: _ZNK23CEventHighAngerAtPlayer10AffectsPedEP4CPed
// Demangled: CEventHighAngerAtPlayer::AffectsPed(CPed *)
int __fastcall CEventHighAngerAtPlayer::AffectsPed(CEventHighAngerAtPlayer *this, CPed *a2)
{
  return sub_196874(a2);
}


// ============================================================

// Address: 0x37858c
// Original: _ZN23CEventHighAngerAtPlayerD0Ev
// Demangled: CEventHighAngerAtPlayer::~CEventHighAngerAtPlayer()
void __fastcall CEventHighAngerAtPlayer::~CEventHighAngerAtPlayer(CEventHighAngerAtPlayer *this)
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

// Address: 0x3785bc
// Original: _ZNK23CEventHighAngerAtPlayer12GetEventTypeEv
// Demangled: CEventHighAngerAtPlayer::GetEventType(void)
int __fastcall CEventHighAngerAtPlayer::GetEventType(CEventHighAngerAtPlayer *this)
{
  return 51;
}


// ============================================================

// Address: 0x3785c0
// Original: _ZNK23CEventHighAngerAtPlayer16GetEventPriorityEv
// Demangled: CEventHighAngerAtPlayer::GetEventPriority(void)
int __fastcall CEventHighAngerAtPlayer::GetEventPriority(CEventHighAngerAtPlayer *this)
{
  return 34;
}


// ============================================================

// Address: 0x3785c4
// Original: _ZNK23CEventHighAngerAtPlayer11GetLifeTimeEv
// Demangled: CEventHighAngerAtPlayer::GetLifeTime(void)
int __fastcall CEventHighAngerAtPlayer::GetLifeTime(CEventHighAngerAtPlayer *this)
{
  return 0;
}


// ============================================================

// Address: 0x3785c8
// Original: _ZNK23CEventHighAngerAtPlayer13CloneEditableEv
// Demangled: CEventHighAngerAtPlayer::CloneEditable(void)
int __fastcall CEventHighAngerAtPlayer::CloneEditable(CEventHighAngerAtPlayer *this)
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
  *(_DWORD *)result = &off_666E08;
  return result;
}


// ============================================================
