
// Address: 0x3771b0
// Original: _ZN13CEventSpecialC2Ev
// Demangled: CEventSpecial::CEventSpecial(void)
void __fastcall CEventSpecial::CEventSpecial(CEventSpecial *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_666960;
}


// ============================================================

// Address: 0x3771d4
// Original: _ZN13CEventSpecialD0Ev
// Demangled: CEventSpecial::~CEventSpecial()
void __fastcall CEventSpecial::~CEventSpecial(CEventSpecial *this)
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

// Address: 0x37ab50
// Original: _ZNK13CEventSpecial12GetEventTypeEv
// Demangled: CEventSpecial::GetEventType(void)
int __fastcall CEventSpecial::GetEventType(CEventSpecial *this)
{
  return 42;
}


// ============================================================

// Address: 0x37ab54
// Original: _ZNK13CEventSpecial16GetEventPriorityEv
// Demangled: CEventSpecial::GetEventPriority(void)
int __fastcall CEventSpecial::GetEventPriority(CEventSpecial *this)
{
  return 52;
}


// ============================================================

// Address: 0x37ab58
// Original: _ZNK13CEventSpecial11GetLifeTimeEv
// Demangled: CEventSpecial::GetLifeTime(void)
int __fastcall CEventSpecial::GetLifeTime(CEventSpecial *this)
{
  return 0;
}


// ============================================================

// Address: 0x37ab5c
// Original: _ZNK13CEventSpecial10AffectsPedEP4CPed
// Demangled: CEventSpecial::AffectsPed(CPed *)
int __fastcall CEventSpecial::AffectsPed(CEventSpecial *this, CPed *a2)
{
  return 1;
}


// ============================================================

// Address: 0x37ab60
// Original: _ZNK13CEventSpecial13CloneEditableEv
// Demangled: CEventSpecial::CloneEditable(void)
int __fastcall CEventSpecial::CloneEditable(CEventSpecial *this)
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
  *(_DWORD *)result = &off_666960;
  return result;
}


// ============================================================
