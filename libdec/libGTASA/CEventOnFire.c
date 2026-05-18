
// Address: 0x376930
// Original: _ZNK12CEventOnFire10AffectsPedEP4CPed
// Demangled: CEventOnFire::AffectsPed(CPed *)
int __fastcall CEventOnFire::AffectsPed(CEventOnFire *this, CPed *a2)
{
  int ActiveTask; // r0
  int TaskSecondary; // r0

  if ( !*((_DWORD *)a2 + 462) )
    return 0;
  if ( (*((_BYTE *)a2 + 70) & 8) != 0 )
    return 0;
  ActiveTask = CTaskManager::GetActiveTask((CTaskManager *)(*((_DWORD *)a2 + 272) + 4));
  if ( ActiveTask )
  {
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)ActiveTask + 20))(ActiveTask) == 250 )
      return 0;
  }
  TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4);
  if ( TaskSecondary && (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) == 255 )
    return 0;
  else
    return sub_196874(a2);
}


// ============================================================

// Address: 0x3788f4
// Original: _ZN12CEventOnFireD0Ev
// Demangled: CEventOnFire::~CEventOnFire()
void __fastcall CEventOnFire::~CEventOnFire(CEventOnFire *this)
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

// Address: 0x378924
// Original: _ZNK12CEventOnFire12GetEventTypeEv
// Demangled: CEventOnFire::GetEventType(void)
int __fastcall CEventOnFire::GetEventType(CEventOnFire *this)
{
  return 58;
}


// ============================================================

// Address: 0x378928
// Original: _ZNK12CEventOnFire16GetEventPriorityEv
// Demangled: CEventOnFire::GetEventPriority(void)
int __fastcall CEventOnFire::GetEventPriority(CEventOnFire *this)
{
  return 66;
}


// ============================================================

// Address: 0x37892c
// Original: _ZNK12CEventOnFire11GetLifeTimeEv
// Demangled: CEventOnFire::GetLifeTime(void)
int __fastcall CEventOnFire::GetLifeTime(CEventOnFire *this)
{
  return 0;
}


// ============================================================

// Address: 0x378930
// Original: _ZNK12CEventOnFire5CloneEv
// Demangled: CEventOnFire::Clone(void)
int __fastcall CEventOnFire::Clone(CEventOnFire *this)
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
  *(_DWORD *)result = &off_666F44;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


// ============================================================

// Address: 0x3789a8
// Original: _ZNK12CEventOnFire18GetLocalSoundLevelEv
// Demangled: CEventOnFire::GetLocalSoundLevel(void)
int __fastcall CEventOnFire::GetLocalSoundLevel(CEventOnFire *this)
{
  return 1114636288;
}


// ============================================================
