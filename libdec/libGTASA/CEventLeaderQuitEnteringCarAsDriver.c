
// Address: 0x37690c
// Original: _ZNK35CEventLeaderQuitEnteringCarAsDriver15AffectsPedGroupEP9CPedGroup
// Demangled: CEventLeaderQuitEnteringCarAsDriver::AffectsPedGroup(CPedGroup *)
bool __fastcall CEventLeaderQuitEnteringCarAsDriver::AffectsPedGroup(
        CEventLeaderQuitEnteringCarAsDriver *this,
        CPedGroup *a2)
{
  int v2; // r0

  v2 = *((_DWORD *)a2 + 13);
  return v2 && (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v2 + 16) + 8))(*(_DWORD *)(v2 + 16)) == 54;
}


// ============================================================

// Address: 0x37692c
// Original: _ZNK35CEventLeaderQuitEnteringCarAsDriver17TakesPriorityOverERK6CEvent
// Demangled: CEventLeaderQuitEnteringCarAsDriver::TakesPriorityOver(CEvent const&)
int __fastcall CEventLeaderQuitEnteringCarAsDriver::TakesPriorityOver(
        CEventLeaderQuitEnteringCarAsDriver *this,
        const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x378838
// Original: _ZN35CEventLeaderQuitEnteringCarAsDriverD0Ev
// Demangled: CEventLeaderQuitEnteringCarAsDriver::~CEventLeaderQuitEnteringCarAsDriver()
void __fastcall CEventLeaderQuitEnteringCarAsDriver::~CEventLeaderQuitEnteringCarAsDriver(
        CEventLeaderQuitEnteringCarAsDriver *this)
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

// Address: 0x378868
// Original: _ZNK35CEventLeaderQuitEnteringCarAsDriver12GetEventTypeEv
// Demangled: CEventLeaderQuitEnteringCarAsDriver::GetEventType(void)
int __fastcall CEventLeaderQuitEnteringCarAsDriver::GetEventType(CEventLeaderQuitEnteringCarAsDriver *this)
{
  return 57;
}


// ============================================================

// Address: 0x37886c
// Original: _ZNK35CEventLeaderQuitEnteringCarAsDriver16GetEventPriorityEv
// Demangled: CEventLeaderQuitEnteringCarAsDriver::GetEventPriority(void)
int __fastcall CEventLeaderQuitEnteringCarAsDriver::GetEventPriority(CEventLeaderQuitEnteringCarAsDriver *this)
{
  return 48;
}


// ============================================================

// Address: 0x378870
// Original: _ZNK35CEventLeaderQuitEnteringCarAsDriver11GetLifeTimeEv
// Demangled: CEventLeaderQuitEnteringCarAsDriver::GetLifeTime(void)
int __fastcall CEventLeaderQuitEnteringCarAsDriver::GetLifeTime(CEventLeaderQuitEnteringCarAsDriver *this)
{
  return 0;
}


// ============================================================

// Address: 0x378874
// Original: _ZNK35CEventLeaderQuitEnteringCarAsDriver5CloneEv
// Demangled: CEventLeaderQuitEnteringCarAsDriver::Clone(void)
int __fastcall CEventLeaderQuitEnteringCarAsDriver::Clone(CEventLeaderQuitEnteringCarAsDriver *this)
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
  *(_DWORD *)result = &off_666EF8;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


// ============================================================

// Address: 0x3788ec
// Original: _ZNK35CEventLeaderQuitEnteringCarAsDriver10AffectsPedEP4CPed
// Demangled: CEventLeaderQuitEnteringCarAsDriver::AffectsPed(CPed *)
int __fastcall CEventLeaderQuitEnteringCarAsDriver::AffectsPed(CEventLeaderQuitEnteringCarAsDriver *this, CPed *a2)
{
  return 0;
}


// ============================================================
