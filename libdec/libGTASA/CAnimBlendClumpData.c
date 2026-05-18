
// Address: 0x18ffa0
// Original: j__ZN19CAnimBlendClumpDataD2Ev
// Demangled: CAnimBlendClumpData::~CAnimBlendClumpData()
// attributes: thunk
void __fastcall CAnimBlendClumpData::~CAnimBlendClumpData(CAnimBlendClumpData *this)
{
  _ZN19CAnimBlendClumpDataD2Ev(this);
}


// ============================================================

// Address: 0x198d14
// Original: j__ZN19CAnimBlendClumpData12ForAllFramesEPFvP18AnimBlendFrameDataPvES2_
// Demangled: CAnimBlendClumpData::ForAllFrames(void (*)(AnimBlendFrameData *,void *),void *)
// attributes: thunk
int CAnimBlendClumpData::ForAllFrames(void)
{
  return _ZN19CAnimBlendClumpData12ForAllFramesEPFvP18AnimBlendFrameDataPvES2_();
}


// ============================================================

// Address: 0x198e0c
// Original: j__ZN19CAnimBlendClumpData16SetNumberOfBonesEi
// Demangled: CAnimBlendClumpData::SetNumberOfBones(int)
// attributes: thunk
int __fastcall CAnimBlendClumpData::SetNumberOfBones(CAnimBlendClumpData *this, int a2)
{
  return _ZN19CAnimBlendClumpData16SetNumberOfBonesEi(this, a2);
}


// ============================================================

// Address: 0x19d358
// Original: j__ZN19CAnimBlendClumpDataC2Ev
// Demangled: CAnimBlendClumpData::CAnimBlendClumpData(void)
// attributes: thunk
void __fastcall CAnimBlendClumpData::CAnimBlendClumpData(CAnimBlendClumpData *this)
{
  _ZN19CAnimBlendClumpDataC2Ev(this);
}


// ============================================================

// Address: 0x38a060
// Original: _ZN19CAnimBlendClumpDataC2Ev
// Demangled: CAnimBlendClumpData::CAnimBlendClumpData(void)
void __fastcall CAnimBlendClumpData::CAnimBlendClumpData(CAnimBlendClumpData *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
}


// ============================================================

// Address: 0x38a070
// Original: _ZN19CAnimBlendClumpDataD2Ev
// Demangled: CAnimBlendClumpData::~CAnimBlendClumpData()
void __fastcall CAnimBlendClumpData::~CAnimBlendClumpData(CAnimBlendClumpData *this)
{
  _DWORD *v2; // r0
  CMemoryMgr *v3; // r0

  v2 = (_DWORD *)*((_DWORD *)this + 1);
  if ( v2 )
    *v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
    *(_DWORD *)(*(_DWORD *)this + 4) = *((_DWORD *)this + 1);
  v3 = (CMemoryMgr *)*((_DWORD *)this + 4);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  if ( v3 )
    CMemoryMgr::FreeAlign(v3, 0);
}


// ============================================================

// Address: 0x38a09e
// Original: _ZN19CAnimBlendClumpData16SetNumberOfBonesEi
// Demangled: CAnimBlendClumpData::SetNumberOfBones(int)
int __fastcall CAnimBlendClumpData::SetNumberOfBones(CAnimBlendClumpData *this, void *a2, unsigned int a3)
{
  CMemoryMgr *v5; // r0
  int result; // r0

  v5 = (CMemoryMgr *)*((_DWORD *)this + 4);
  if ( v5 )
    CMemoryMgr::FreeAlign(v5, a2);
  result = CMemoryMgr::MallocAlign((CMemoryMgr *)((24 * (_DWORD)a2 + 63) & 0xFFFFFFC0), 0x40u, a3);
  *((_DWORD *)this + 4) = result;
  *((_DWORD *)this + 2) = a2;
  return result;
}


// ============================================================

// Address: 0x38a0ca
// Original: _ZN19CAnimBlendClumpData12ForAllFramesEPFvP18AnimBlendFrameDataPvES2_
// Demangled: CAnimBlendClumpData::ForAllFrames(void (*)(AnimBlendFrameData *,void *),void *)
int __fastcall CAnimBlendClumpData::ForAllFrames(int a1, void (__fastcall *a2)(int, int), int a3)
{
  int result; // r0
  int v7; // r4
  int i; // r5

  result = *(_DWORD *)(a1 + 8);
  if ( result >= 1 )
  {
    v7 = 0;
    for ( i = 0; i < result; ++i )
    {
      a2(*(_DWORD *)(a1 + 16) + v7, a3);
      result = *(_DWORD *)(a1 + 8);
      v7 += 24;
    }
  }
  return result;
}


// ============================================================

// Address: 0x38a0fa
// Original: _ZN19CAnimBlendClumpData17LoadFramesIntoSPREv
// Demangled: CAnimBlendClumpData::LoadFramesIntoSPR(void)
void __fastcall CAnimBlendClumpData::LoadFramesIntoSPR(CAnimBlendClumpData *this)
{
  ;
}


// ============================================================

// Address: 0x38a0fc
// Original: _ZN19CAnimBlendClumpData17ForAllFramesInSPREPFvP18AnimBlendFrameDataPvES2_j
// Demangled: CAnimBlendClumpData::ForAllFramesInSPR(void (*)(AnimBlendFrameData *,void *),void *,uint)
void CAnimBlendClumpData::ForAllFramesInSPR()
{
  ;
}


// ============================================================
