
// Address: 0x376824
// Original: _ZNK21CEventHealthReallyLow10AffectsPedEP4CPed
// Demangled: CEventHealthReallyLow::AffectsPed(CPed *)
int __fastcall CEventHealthReallyLow::AffectsPed(CEventHealthReallyLow *this, CPed *a2)
{
  return sub_196874(a2);
}


// ============================================================

// Address: 0x37840c
// Original: _ZN21CEventHealthReallyLowD0Ev
// Demangled: CEventHealthReallyLow::~CEventHealthReallyLow()
void __fastcall CEventHealthReallyLow::~CEventHealthReallyLow(CEventHealthReallyLow *this)
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

// Address: 0x37843c
// Original: _ZNK21CEventHealthReallyLow12GetEventTypeEv
// Demangled: CEventHealthReallyLow::GetEventType(void)
int __fastcall CEventHealthReallyLow::GetEventType(CEventHealthReallyLow *this)
{
  return 52;
}


// ============================================================

// Address: 0x378440
// Original: _ZNK21CEventHealthReallyLow16GetEventPriorityEv
// Demangled: CEventHealthReallyLow::GetEventPriority(void)
int __fastcall CEventHealthReallyLow::GetEventPriority(CEventHealthReallyLow *this)
{
  return 69;
}


// ============================================================

// Address: 0x378444
// Original: _ZNK21CEventHealthReallyLow11GetLifeTimeEv
// Demangled: CEventHealthReallyLow::GetLifeTime(void)
int __fastcall CEventHealthReallyLow::GetLifeTime(CEventHealthReallyLow *this)
{
  return 0;
}


// ============================================================

// Address: 0x378448
// Original: _ZNK21CEventHealthReallyLow13CloneEditableEv
// Demangled: CEventHealthReallyLow::CloneEditable(void)
int __fastcall CEventHealthReallyLow::CloneEditable(CEventHealthReallyLow *this)
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
  *(_DWORD *)result = &off_666D68;
  return result;
}


// ============================================================
