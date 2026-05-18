
// Address: 0x377db8
// Original: _ZNK15CEventEscalator10AffectsPedEP4CPed
// Demangled: CEventEscalator::AffectsPed(CPed *)
bool __fastcall CEventEscalator::AffectsPed(CEventEscalator *this, CPed *a2)
{
  int v3; // r0
  int v4; // r1

  if ( CPed::IsAlive(a2) != 1 )
    return 0;
  if ( CPed::IsPlayer(a2) )
    return 0;
  v3 = *((_DWORD *)a2 + 354);
  if ( !v3 )
    return 0;
  v4 = *(__int16 *)(v3 + 38);
  return v4 == (unsigned __int16)MI_ESCALATORSTEP || v4 == (unsigned __int16)MI_ESCALATORSTEP8;
}


// ============================================================

// Address: 0x377e08
// Original: _ZNK15CEventEscalator17TakesPriorityOverERK6CEvent
// Demangled: CEventEscalator::TakesPriorityOver(CEvent const&)
bool __fastcall CEventEscalator::TakesPriorityOver(CEventEscalator *this, const CEvent *a2)
{
  int v3; // r5

  v3 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2);
  return v3 != (*(int (__fastcall **)(CEventEscalator *))(*(_DWORD *)this + 8))(this);
}


// ============================================================

// Address: 0x3793a8
// Original: _ZN15CEventEscalatorD0Ev
// Demangled: CEventEscalator::~CEventEscalator()
void __fastcall CEventEscalator::~CEventEscalator(CEventEscalator *this)
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

// Address: 0x3793d8
// Original: _ZNK15CEventEscalator12GetEventTypeEv
// Demangled: CEventEscalator::GetEventType(void)
int __fastcall CEventEscalator::GetEventType(CEventEscalator *this)
{
  return 74;
}


// ============================================================

// Address: 0x3793dc
// Original: _ZNK15CEventEscalator16GetEventPriorityEv
// Demangled: CEventEscalator::GetEventPriority(void)
int __fastcall CEventEscalator::GetEventPriority(CEventEscalator *this)
{
  return 56;
}


// ============================================================

// Address: 0x3793e0
// Original: _ZNK15CEventEscalator11GetLifeTimeEv
// Demangled: CEventEscalator::GetLifeTime(void)
int __fastcall CEventEscalator::GetLifeTime(CEventEscalator *this)
{
  return 0;
}


// ============================================================

// Address: 0x3793e4
// Original: _ZNK15CEventEscalator5CloneEv
// Demangled: CEventEscalator::Clone(void)
int __fastcall CEventEscalator::Clone(CEventEscalator *this)
{
  int *v1; // r0
  int v2; // r1
  int v3; // r12
  int v4; // r3
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int result; // r0

  v1 = (int *)CPools::ms_pEventPool;
  v2 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    ++v2;
    v4 = v1[1];
    if ( v2 == v3 )
      v2 = 0;
    v1[3] = v2;
    v5 = *(char *)(v4 + v2);
  }
  while ( v5 > -1 );
  *(_BYTE *)(v4 + v2) = v5 & 0x7F;
  *(_BYTE *)(v1[1] + v1[3]) = (*(_BYTE *)(v1[1] + v1[3]) + 1) & 0x7F | *(_BYTE *)(v1[1] + v1[3]) & 0x80;
  v6 = *v1;
  v7 = 17 * v1[3];
  *(_DWORD *)(v6 + 4 * v7) = &off_667248;
  result = v6 + 4 * v7;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


// ============================================================
