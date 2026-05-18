
// Address: 0x18f57c
// Original: j__ZN27CAnimBlendStaticAssociationC2Ev
// Demangled: CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(void)
// attributes: thunk
void __fastcall CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(CAnimBlendStaticAssociation *this)
{
  _ZN27CAnimBlendStaticAssociationC2Ev(this);
}


// ============================================================

// Address: 0x193540
// Original: j__ZN27CAnimBlendStaticAssociation4InitEP7RpClumpP19CAnimBlendHierarchy
// Demangled: CAnimBlendStaticAssociation::Init(RpClump *,CAnimBlendHierarchy *)
// attributes: thunk
int CAnimBlendStaticAssociation::Init()
{
  return _ZN27CAnimBlendStaticAssociation4InitEP7RpClumpP19CAnimBlendHierarchy();
}


// ============================================================

// Address: 0x199f68
// Original: j__ZN27CAnimBlendStaticAssociationD2Ev
// Demangled: CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation()
// attributes: thunk
void __fastcall CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation(CAnimBlendStaticAssociation *this)
{
  _ZN27CAnimBlendStaticAssociationD2Ev(this);
}


// ============================================================

// Address: 0x3898f0
// Original: _ZN27CAnimBlendStaticAssociationC2Ev
// Demangled: CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(void)
void __fastcall CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(CAnimBlendStaticAssociation *this)
{
  *(_DWORD *)((char *)this + 6) = -1;
  *((_WORD *)this + 5) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_667758;
}


// ============================================================

// Address: 0x389910
// Original: _ZN27CAnimBlendStaticAssociationC2EP7RpClumpP19CAnimBlendHierarchy
// Demangled: CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(RpClump *,CAnimBlendHierarchy *)
int __fastcall CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(int a1)
{
  *(_DWORD *)(a1 + 6) = -1;
  *(_WORD *)(a1 + 10) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_667758;
  CAnimBlendStaticAssociation::Init();
  return a1;
}


// ============================================================

// Address: 0x38993c
// Original: _ZN27CAnimBlendStaticAssociation4InitEP7RpClumpP19CAnimBlendHierarchy
// Demangled: CAnimBlendStaticAssociation::Init(RpClump *,CAnimBlendHierarchy *)
int __fastcall CAnimBlendStaticAssociation::Init(int result, unsigned int a2, int a3)
{
  int v4; // r9
  int v5; // r8
  int v6; // r5
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r5
  int i; // r6
  int v11; // r10
  int Bone; // r0

  v4 = result;
  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + ClumpOffset);
    v6 = *(_DWORD *)(v5 + 8);
    *(_WORD *)(result + 4) = v6;
    v7 = CMemoryMgr::Malloc(4 * (__int16)v6, a2);
    *(_DWORD *)(v4 + 12) = v7;
    if ( v6 << 16 >= 1 )
    {
      *v7 = 0;
      if ( (__int16)v6 != 1 )
      {
        v8 = 1;
        do
          *(_DWORD *)(*(_DWORD *)(v4 + 12) + 4 * v8++) = 0;
        while ( (__int16)v6 != v8 );
      }
    }
    *(_DWORD *)(v4 + 16) = a3;
    result = *(__int16 *)(a3 + 8);
    if ( result >= 1 )
    {
      v9 = 0;
      for ( i = 0; i < result; ++i )
      {
        v11 = *(_DWORD *)(a3 + 4) + v9;
        if ( (*(_BYTE *)(v11 + 4) & 0x10) != 0 )
        {
          Bone = RpAnimBlendClumpFindBone();
          if ( Bone )
          {
LABEL_12:
            if ( *(__int16 *)(v11 + 6) >= 1 )
              *(_DWORD *)(*(_DWORD *)(v4 + 12) - 1431655764 * ((Bone - *(_DWORD *)(v5 + 16)) >> 3)) = v11;
          }
        }
        else
        {
          Bone = RpAnimBlendClumpFindFrameFromHashKey();
          if ( Bone )
            goto LABEL_12;
        }
        result = *(__int16 *)(a3 + 8);
        v9 += 12;
      }
    }
  }
  else
  {
    *(_DWORD *)(result + 16) = a3;
  }
  return result;
}


// ============================================================

// Address: 0x389a04
// Original: _ZN27CAnimBlendStaticAssociationD2Ev
// Demangled: CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation()
void __fastcall CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation(CAnimBlendStaticAssociation *this)
{
  void *v2; // r0

  v2 = (void *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_667758;
  if ( v2 )
    CMemoryMgr::Free(v2, &off_667758);
}


// ============================================================

// Address: 0x389a28
// Original: _ZN27CAnimBlendStaticAssociation17FreeSequenceArrayEv
// Demangled: CAnimBlendStaticAssociation::FreeSequenceArray(void)
CMemoryMgr *__fastcall CAnimBlendStaticAssociation::FreeSequenceArray(CAnimBlendStaticAssociation *this, void *a2)
{
  CMemoryMgr *result; // r0

  result = (CMemoryMgr *)*((_DWORD *)this + 3);
  if ( result )
    return (CMemoryMgr *)j_CMemoryMgr::Free(result, a2);
  return result;
}


// ============================================================

// Address: 0x389a34
// Original: _ZN27CAnimBlendStaticAssociationD0Ev
// Demangled: CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation()
void __fastcall CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation(CAnimBlendStaticAssociation *this)
{
  void *v2; // r0

  v2 = (void *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_667758;
  if ( v2 )
    CMemoryMgr::Free(v2, &off_667758);
  operator delete(this);
}


// ============================================================

// Address: 0x389a5c
// Original: _ZN27CAnimBlendStaticAssociation21AllocateSequenceArrayEi
// Demangled: CAnimBlendStaticAssociation::AllocateSequenceArray(int)
int __fastcall CAnimBlendStaticAssociation::AllocateSequenceArray(CAnimBlendStaticAssociation *this, int a2)
{
  int result; // r0

  result = (int)CMemoryMgr::Malloc(4 * a2, a2);
  *((_DWORD *)this + 3) = result;
  if ( a2 >= 1 )
  {
    *(_DWORD *)result = 0;
    if ( a2 != 1 )
    {
      result = 1;
      do
        *(_DWORD *)(*((_DWORD *)this + 3) + 4 * result++) = 0;
      while ( a2 != result );
    }
  }
  return result;
}


// ============================================================
