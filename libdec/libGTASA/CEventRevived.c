
// Address: 0x1a0ae0
// Original: j__ZN13CEventRevivedC2Ev
// Demangled: CEventRevived::CEventRevived(void)
// attributes: thunk
void __fastcall CEventRevived::CEventRevived(CEventRevived *this)
{
  _ZN13CEventRevivedC2Ev(this);
}


// ============================================================

// Address: 0x374698
// Original: _ZN13CEventRevivedC2Ev
// Demangled: CEventRevived::CEventRevived(void)
void __fastcall CEventRevived::CEventRevived(CEventRevived *this)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_666304;
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x3746b0
// Original: _ZN13CEventRevivedD0Ev
// Demangled: CEventRevived::~CEventRevived()
void __fastcall CEventRevived::~CEventRevived(CEventRevived *this)
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

// Address: 0x3746e0
// Original: _ZNK13CEventRevived10AffectsPedEP4CPed
// Demangled: CEventRevived::AffectsPed(CPed *)
int __fastcall CEventRevived::AffectsPed(CEventRevived *this, CPed *a2)
{
  if ( *((_BYTE *)a2 + 1096) == 2 )
    return 0;
  else
    return CPed::IsAlive(a2) ^ 1;
}


// ============================================================

// Address: 0x379fd4
// Original: _ZNK13CEventRevived12GetEventTypeEv
// Demangled: CEventRevived::GetEventType(void)
int __fastcall CEventRevived::GetEventType(CEventRevived *this)
{
  return 18;
}


// ============================================================

// Address: 0x379fd8
// Original: _ZNK13CEventRevived16GetEventPriorityEv
// Demangled: CEventRevived::GetEventPriority(void)
int __fastcall CEventRevived::GetEventPriority(CEventRevived *this)
{
  return 74;
}


// ============================================================

// Address: 0x379fdc
// Original: _ZNK13CEventRevived11GetLifeTimeEv
// Demangled: CEventRevived::GetLifeTime(void)
int __fastcall CEventRevived::GetLifeTime(CEventRevived *this)
{
  return 0;
}


// ============================================================

// Address: 0x379fe0
// Original: _ZNK13CEventRevived5CloneEv
// Demangled: CEventRevived::Clone(void)
int __fastcall CEventRevived::Clone(CEventRevived *this)
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
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)result = &off_666304;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


// ============================================================
