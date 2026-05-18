
// Address: 0x194f0c
// Original: j__ZN14CTaskAllocatornwEj
// Demangled: CTaskAllocator::operator new(uint)
// attributes: thunk
int __fastcall CTaskAllocator::operator new(CTaskAllocator *this, unsigned int a2)
{
  return _ZN14CTaskAllocatornwEj(this, a2);
}


// ============================================================

// Address: 0x5498f0
// Original: _ZN14CTaskAllocatornwEj
// Demangled: CTaskAllocator::operator new(uint)
int __fastcall CTaskAllocator::operator new(CTaskAllocator *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CPools::ms_pTaskAllocatorPool;
  result = *(_DWORD *)(CPools::ms_pTaskAllocatorPool + 12);
  v5 = *(_DWORD *)(CPools::ms_pTaskAllocatorPool + 8);
  do
  {
    v3[3] = ++result;
    if ( result == v5 )
    {
      result = 0;
      v3[3] = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v6 = v3[1];
    v7 = *(char *)(v6 + result);
  }
  while ( v7 > -1 );
  *(_BYTE *)(v6 + result) = v7 & 0x7F;
  *(_BYTE *)(v3[1] + v3[3]) = (*(_BYTE *)(v3[1] + v3[3]) + 1) & 0x7F | *(_BYTE *)(v3[1] + v3[3]) & 0x80;
  return *v3 + 32 * v3[3];
}


// ============================================================

// Address: 0x549950
// Original: _ZN14CTaskAllocatordlEPv
// Demangled: CTaskAllocator::operator delete(void *)
void __fastcall CTaskAllocator::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CPools::ms_pTaskAllocatorPool;
  v2 = (a1 - *(_DWORD *)CPools::ms_pTaskAllocatorPool) >> 5;
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pTaskAllocatorPool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x54a184
// Original: _ZN14CTaskAllocator10IsFinishedEP21CPedGroupIntelligence
// Demangled: CTaskAllocator::IsFinished(CPedGroupIntelligence *)
bool __fastcall CTaskAllocator::IsFinished(CTaskAllocator *this, CPedGroupIntelligence *a2)
{
  int v2; // r0
  bool v3; // zf
  int v5; // r0
  bool v6; // zf
  int v7; // r0
  bool v8; // zf

  if ( *((_DWORD *)a2 + 4) )
    return 0;
  v2 = *((_DWORD *)a2 + 9);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = *((_DWORD *)a2 + 14) == 0;
  if ( !v3 )
    return 0;
  v5 = *((_DWORD *)a2 + 19);
  v6 = v5 == 0;
  if ( !v5 )
    v6 = *((_DWORD *)a2 + 24) == 0;
  if ( !v6 )
    return 0;
  v7 = *((_DWORD *)a2 + 29);
  v8 = v7 == 0;
  if ( !v7 )
    v8 = *((_DWORD *)a2 + 34) == 0;
  return v8 && *((_DWORD *)a2 + 39) == 0;
}


// ============================================================

// Address: 0x54b3e4
// Original: _ZN14CTaskAllocatorD0Ev
// Demangled: CTaskAllocator::~CTaskAllocator()
void __fastcall __noreturn CTaskAllocator::~CTaskAllocator(CTaskAllocator *this)
{
  __debugbreak();
}


// ============================================================

// Address: 0x54b3e6
// Original: _ZN14CTaskAllocator12ProcessGroupEP21CPedGroupIntelligence
// Demangled: CTaskAllocator::ProcessGroup(CPedGroupIntelligence *)
int __fastcall CTaskAllocator::ProcessGroup(CTaskAllocator *this, CPedGroupIntelligence *a2)
{
  return 0;
}


// ============================================================

// Address: 0x54b3ea
// Original: _ZN14CTaskAllocator5AbortEv
// Demangled: CTaskAllocator::Abort(void)
void __fastcall CTaskAllocator::Abort(CTaskAllocator *this)
{
  ;
}


// ============================================================

// Address: 0x54b474
// Original: _ZN14CTaskAllocatorD2Ev
// Demangled: CTaskAllocator::~CTaskAllocator()
void __fastcall CTaskAllocator::~CTaskAllocator(CTaskAllocator *this)
{
  ;
}


// ============================================================
