
// Address: 0x54a1c0
// Original: _ZN21CTaskAllocatorRetreat13AllocateTasksEP21CPedGroupIntelligence
// Demangled: CTaskAllocatorRetreat::AllocateTasks(CPedGroupIntelligence *)
void __fastcall CTaskAllocatorRetreat::AllocateTasks(CTaskAllocatorRetreat *this, CPedGroupIntelligence *a2)
{
  ;
}


// ============================================================

// Address: 0x54b3ec
// Original: _ZN21CTaskAllocatorRetreatD0Ev
// Demangled: CTaskAllocatorRetreat::~CTaskAllocatorRetreat()
void __fastcall CTaskAllocatorRetreat::~CTaskAllocatorRetreat(CTaskAllocatorRetreat *this)
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

// Address: 0x54b414
// Original: _ZNK21CTaskAllocatorRetreat7GetTypeEv
// Demangled: CTaskAllocatorRetreat::GetType(void)
int __fastcall CTaskAllocatorRetreat::GetType(CTaskAllocatorRetreat *this)
{
  return 2;
}


// ============================================================
