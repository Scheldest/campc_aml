
// Address: 0x18bb80
// Original: j__ZN16CEventFireNearbyC2ERK7CVector
// Demangled: CEventFireNearby::CEventFireNearby(CVector const&)
// attributes: thunk
void __fastcall CEventFireNearby::CEventFireNearby(CEventFireNearby *this, const CVector *a2)
{
  _ZN16CEventFireNearbyC2ERK7CVector(this, a2);
}


// ============================================================

// Address: 0x377530
// Original: _ZN16CEventFireNearbyC2ERK7CVector
// Demangled: CEventFireNearby::CEventFireNearby(CVector const&)
int __fastcall CEventFireNearby::CEventFireNearby(int result, __int64 *a2)
{
  __int64 v2; // d16

  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 13107456;
  *(_WORD *)(result + 12) = -1;
  *(_DWORD *)result = &off_666A9C;
  v2 = *a2;
  *(_DWORD *)(result + 24) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(result + 16) = v2;
  return result;
}


// ============================================================

// Address: 0x377560
// Original: _ZN16CEventFireNearbyD0Ev
// Demangled: CEventFireNearby::~CEventFireNearby()
void __fastcall CEventFireNearby::~CEventFireNearby(CEventFireNearby *this)
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

// Address: 0x377590
// Original: _ZNK16CEventFireNearby10AffectsPedEP4CPed
// Demangled: CEventFireNearby::AffectsPed(CPed *)
int __fastcall CEventFireNearby::AffectsPed(CEventFireNearby *this, CPed *a2)
{
  if ( CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 604) )
    return 0;
  else
    return sub_196874(a2);
}


// ============================================================

// Address: 0x3775b6
// Original: _ZNK16CEventFireNearby17TakesPriorityOverERK6CEvent
// Demangled: CEventFireNearby::TakesPriorityOver(CEvent const&)
int __fastcall CEventFireNearby::TakesPriorityOver(CEventFireNearby *this, const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x37ae14
// Original: _ZNK16CEventFireNearby12GetEventTypeEv
// Demangled: CEventFireNearby::GetEventType(void)
int __fastcall CEventFireNearby::GetEventType(CEventFireNearby *this)
{
  return 59;
}


// ============================================================

// Address: 0x37ae18
// Original: _ZNK16CEventFireNearby16GetEventPriorityEv
// Demangled: CEventFireNearby::GetEventPriority(void)
int __fastcall CEventFireNearby::GetEventPriority(CEventFireNearby *this)
{
  return 17;
}


// ============================================================

// Address: 0x37ae1c
// Original: _ZNK16CEventFireNearby11GetLifeTimeEv
// Demangled: CEventFireNearby::GetLifeTime(void)
int __fastcall CEventFireNearby::GetLifeTime(CEventFireNearby *this)
{
  return 0;
}


// ============================================================

// Address: 0x37ae20
// Original: _ZNK16CEventFireNearby13CloneEditableEv
// Demangled: CEventFireNearby::CloneEditable(void)
int __fastcall CEventFireNearby::CloneEditable(CEventFireNearby *this)
{
  int v1; // lr
  _DWORD *v2; // r2
  int v3; // r1
  int v4; // r12
  int v5; // r3
  int v6; // r4
  __int64 v7; // d16
  int result; // r0

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
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)v3 = &off_666A9C;
  v7 = *((_QWORD *)this + 2);
  *(_DWORD *)(v3 + 24) = *((_DWORD *)this + 6);
  result = v3;
  *(_QWORD *)(v3 + 16) = v7;
  return result;
}


// ============================================================
