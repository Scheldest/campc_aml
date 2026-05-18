
// Address: 0x18af40
// Original: j__ZN11CEventDeathC2Eb
// Demangled: CEventDeath::CEventDeath(bool)
// attributes: thunk
void __fastcall CEventDeath::CEventDeath(CEventDeath *this, bool a2)
{
  _ZN11CEventDeathC2Eb(this, a2);
}


// ============================================================

// Address: 0x373a60
// Original: _ZN11CEventDeathC2Eb
// Demangled: CEventDeath::CEventDeath(bool)
void __fastcall CEventDeath::CEventDeath(CEventDeath *this, bool a2)
{
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 9) = a2;
  *(_DWORD *)this = &off_666040;
  *((_DWORD *)this + 3) = CTimer::m_snTimeInMilliseconds;
}


// ============================================================

// Address: 0x373a8c
// Original: _ZN11CEventDeathC2Ebi
// Demangled: CEventDeath::CEventDeath(bool,int)
void __fastcall CEventDeath::CEventDeath(CEventDeath *this, bool a2, int a3)
{
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 9) = a2;
  *((_DWORD *)this + 3) = a3;
  *(_DWORD *)this = &off_666040;
}


// ============================================================

// Address: 0x373aac
// Original: _ZNK11CEventDeath10AffectsPedEP4CPed
// Demangled: CEventDeath::AffectsPed(CPed *)
int __fastcall CEventDeath::AffectsPed(CEventDeath *this, CPed *a2)
{
  return 1;
}


// ============================================================

// Address: 0x373ab0
// Original: _ZN11CEventDeathD0Ev
// Demangled: CEventDeath::~CEventDeath()
void __fastcall CEventDeath::~CEventDeath(CEventDeath *this)
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

// Address: 0x37993c
// Original: _ZNK11CEventDeath12GetEventTypeEv
// Demangled: CEventDeath::GetEventType(void)
int __fastcall CEventDeath::GetEventType(CEventDeath *this)
{
  return 10;
}


// ============================================================

// Address: 0x379940
// Original: _ZNK11CEventDeath16GetEventPriorityEv
// Demangled: CEventDeath::GetEventPriority(void)
int __fastcall CEventDeath::GetEventPriority(CEventDeath *this)
{
  return 73;
}


// ============================================================

// Address: 0x379944
// Original: _ZNK11CEventDeath11GetLifeTimeEv
// Demangled: CEventDeath::GetLifeTime(void)
int __fastcall CEventDeath::GetLifeTime(CEventDeath *this)
{
  return 0;
}


// ============================================================

// Address: 0x379948
// Original: _ZNK11CEventDeath5CloneEv
// Demangled: CEventDeath::Clone(void)
int __fastcall CEventDeath::Clone(CEventDeath *this)
{
  int v1; // lr
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r4
  int v7; // r3
  char v8; // r0

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
  v7 = *((_DWORD *)this + 3);
  v8 = *((_BYTE *)this + 9);
  *(_BYTE *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 9) = v8;
  *(_DWORD *)(v3 + 12) = v7;
  *(_DWORD *)v3 = &off_666040;
  *(_DWORD *)(v3 + 4) = 0;
  return v3;
}


// ============================================================
