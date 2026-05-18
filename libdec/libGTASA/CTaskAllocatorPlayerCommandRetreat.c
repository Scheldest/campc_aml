
// Address: 0x54a40c
// Original: _ZN34CTaskAllocatorPlayerCommandRetreat13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorPlayerCommandRetreat::AllocateTasks(CPedGroupIntelligence *)
void __fastcall CTaskAllocatorPlayerCommandRetreat::AllocateTasks(
        CTaskAllocatorPlayerCommandRetreat *this,
        CPedGroupIntelligence *a2)
{
  ;
}


// ============================================================

// Address: 0x54b478
// Original: _ZN34CTaskAllocatorPlayerCommandRetreatD0Ev
// Demangled: CTaskAllocatorPlayerCommandRetreat::~CTaskAllocatorPlayerCommandRetreat()
void __fastcall CTaskAllocatorPlayerCommandRetreat::~CTaskAllocatorPlayerCommandRetreat(
        CTaskAllocatorPlayerCommandRetreat *this)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pTaskAllocatorPool;
  v2 = ((int)this - *(_DWORD *)CPools::ms_pTaskAllocatorPool) >> 5;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pTaskAllocatorPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x54b4a0
// Original: _ZNK34CTaskAllocatorPlayerCommandRetreat7GetTypeEv
// Demangled: CTaskAllocatorPlayerCommandRetreat::GetType(void)
int __fastcall CTaskAllocatorPlayerCommandRetreat::GetType(CTaskAllocatorPlayerCommandRetreat *this)
{
  return 7;
}


// ============================================================
