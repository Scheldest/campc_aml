
// Address: 0x19f358
// Original: j__ZN11CEventInAirC2Ev
// Demangled: CEventInAir::CEventInAir(void)
// attributes: thunk
void __fastcall CEventInAir::CEventInAir(CEventInAir *this)
{
  _ZN11CEventInAirC2Ev(this);
}


// ============================================================

// Address: 0x37665c
// Original: _ZNK11CEventInAir10AffectsPedEP4CPed
// Demangled: CEventInAir::AffectsPed(CPed *)
int __fastcall CEventInAir::AffectsPed(CEventInAir *this, CPed *a2)
{
  int ActiveTask; // r0
  int v4; // r5
  int SimplestActiveTask; // r0
  const CPed *v6; // r1

  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  v4 = ActiveTask;
  if ( ActiveTask
    && ((*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 108
     || (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 513
     || (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 240) )
  {
    return 0;
  }
  SimplestActiveTask = CTaskManager::GetSimplestActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  if ( SimplestActiveTask )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)SimplestActiveTask + 20))(SimplestActiveTask) == 207 )
      return 0;
  }
  if ( *((_DWORD *)a2 + 56)
    || !(*((unsigned __int8 *)a2 + 28) << 31)
    || *((_DWORD *)a2 + 64)
    || CPedGeometryAnalyser::IsInAir(a2, v6) != 1 )
  {
    return 0;
  }
  else
  {
    return sub_196874(a2);
  }
}


// ============================================================

// Address: 0x3766d8
// Original: _ZN11CEventInAirC2Ev
// Demangled: CEventInAir::CEventInAir(void)
void __fastcall CEventInAir::CEventInAir(CEventInAir *this)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_6666F8;
  *((_DWORD *)this + 1) = 0;
}


// ============================================================

// Address: 0x3766f0
// Original: _ZN11CEventInAirD0Ev
// Demangled: CEventInAir::~CEventInAir()
void __fastcall CEventInAir::~CEventInAir(CEventInAir *this)
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

// Address: 0x37a710
// Original: _ZNK11CEventInAir12GetEventTypeEv
// Demangled: CEventInAir::GetEventType(void)
int __fastcall CEventInAir::GetEventType(CEventInAir *this)
{
  return 33;
}


// ============================================================

// Address: 0x37a714
// Original: _ZNK11CEventInAir16GetEventPriorityEv
// Demangled: CEventInAir::GetEventPriority(void)
int __fastcall CEventInAir::GetEventPriority(CEventInAir *this)
{
  return 61;
}


// ============================================================

// Address: 0x37a718
// Original: _ZNK11CEventInAir11GetLifeTimeEv
// Demangled: CEventInAir::GetLifeTime(void)
int __fastcall CEventInAir::GetLifeTime(CEventInAir *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a71c
// Original: _ZNK11CEventInAir5CloneEv
// Demangled: CEventInAir::Clone(void)
int __fastcall CEventInAir::Clone(CEventInAir *this)
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
  *(_DWORD *)result = &off_6666F8;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


// ============================================================
