
// Address: 0x542324
// Original: _ZN24CTaskSimplePutDownEntityC2EP7CEntityPK7CVectorhh11AnimationId12AssocGroupIdf
// Demangled: CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(CEntity *,CVector const*,uchar,uchar,AnimationId,AssocGroupId,float)
int __fastcall CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(
        int a1,
        int a2,
        __int64 *a3,
        char a4,
        char a5,
        int a6,
        int a7,
        float a8)
{
  __int64 v12; // d16

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 25) = a5;
  *(_BYTE *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a6;
  *(_DWORD *)(a1 + 36) = a7;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 52) = 256;
  *(_BYTE *)(a1 + 54) = 0;
  *(_DWORD *)a1 = &off_66D19C;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    v12 = *a3;
    *(_DWORD *)(a1 + 20) = *((_DWORD *)a3 + 2);
    *(_QWORD *)(a1 + 12) = v12;
  }
  if ( a2 )
  {
    *(_DWORD *)(a2 + 28) |= 0x400u;
    CEntity::RegisterReference(*(CEntity **)(a1 + 8), (CEntity **)(a1 + 8));
  }
  *(float *)(a1 + 60) = a8;
  *(_DWORD *)a1 = &off_66D2A8;
  return a1;
}


// ============================================================

// Address: 0x5423c4
// Original: _ZN24CTaskSimplePutDownEntityC2EP7CEntityPK7CVectorhhPKcS6_if
// Demangled: CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(CEntity *,CVector const*,uchar,uchar,char const*,char const*,int,float)
void __fastcall CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(
        CTaskSimplePutDownEntity *this,
        CEntity *a2,
        const CVector *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const char *a6,
        const char *a7,
        int a8,
        float a9)
{
  int v9; // r0

  CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(this, a2, a3, a4, a5, a6, a7, a8);
  *(float *)(v9 + 60) = a9;
  *(_DWORD *)v9 = &off_66D2A8;
}


// ============================================================

// Address: 0x5423f8
// Original: _ZN24CTaskSimplePutDownEntityC2EP7CEntityPK7CVectorhhP10CAnimBlockP19CAnimBlendHierarchyif
// Demangled: CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(CEntity *,CVector const*,uchar,uchar,CAnimBlock *,CAnimBlendHierarchy *,int,float)
int __fastcall CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(
        int a1,
        int a2,
        __int64 *a3,
        char a4,
        char a5,
        int a6,
        int a7,
        int a8,
        float a9)
{
  CEntity **v13; // r1
  __int64 v14; // d16

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 25) = a5;
  *(_BYTE *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 191;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 52) = 256;
  *(_BYTE *)(a1 + 54) = 0;
  *(_DWORD *)a1 = &off_66D19C;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  v13 = (CEntity **)(a1 + 8);
  if ( a3 )
  {
    v14 = *a3;
    *(_DWORD *)(a1 + 20) = *((_DWORD *)a3 + 2);
    *(_QWORD *)(a1 + 12) = v14;
  }
  if ( a2 )
  {
    *(_DWORD *)(a2 + 28) |= 0x400u;
    CEntity::RegisterReference(*v13, v13);
  }
  *(_DWORD *)(a1 + 44) = a6;
  *(_DWORD *)(a1 + 40) = a8;
  *(_DWORD *)(a1 + 48) = a7;
  CAnimManager::AddAnimBlockRef((CAnimManager *)((a6 - (int)CAnimManager::ms_aAnimBlocks) >> 5), (int)v13);
  *(float *)(a1 + 60) = a9;
  *(_DWORD *)a1 = &off_66D2A8;
  return a1;
}


// ============================================================

// Address: 0x5424b8
// Original: _ZN24CTaskSimplePutDownEntityC2Ev
// Demangled: CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(void)
void __fastcall CTaskSimplePutDownEntity::CTaskSimplePutDownEntity(CTaskSimplePutDownEntity *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_WORD *)(v1 + 24) = 262;
  *(_QWORD *)(v1 + 32) = 191LL;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_WORD *)(v1 + 52) = 256;
  *(_BYTE *)(v1 + 54) = 0;
  *(_QWORD *)(v1 + 8) = 0LL;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_DWORD *)(v1 + 56) = 0;
  *(_DWORD *)(v1 + 60) = 1058642330;
  *(_DWORD *)v1 = &off_66D2A8;
}


// ============================================================

// Address: 0x5442ca
// Original: _ZN24CTaskSimplePutDownEntityD0Ev
// Demangled: CTaskSimplePutDownEntity::~CTaskSimplePutDownEntity()
void __fastcall CTaskSimplePutDownEntity::~CTaskSimplePutDownEntity(CTaskSimplePutDownEntity *this)
{
  void *v1; // r0

  CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5442dc
// Original: _ZNK24CTaskSimplePutDownEntity5CloneEv
// Demangled: CTaskSimplePutDownEntity::Clone(void)
CTaskSimple *__fastcall CTaskSimplePutDownEntity::Clone(CTaskSimplePutDownEntity *this, unsigned int a2)
{
  int v3; // r6
  CTaskSimple *v4; // r0
  char v5; // r11
  __int64 *v6; // r8
  char v7; // r10
  CTaskSimple *v8; // r4
  int v9; // r9
  int v10; // s16
  __int64 v11; // kr00_8
  __int64 v12; // d16
  __int64 v13; // kr08_8
  __int64 v14; // d16
  int v16; // [sp+4h] [bp-2Ch]

  v3 = *((_DWORD *)this + 12);
  v4 = (CTaskSimple *)CTask::operator new((CTask *)&dword_40, a2);
  v5 = *((_BYTE *)this + 25);
  v6 = (__int64 *)((char *)this + 12);
  v7 = *((_BYTE *)this + 24);
  v8 = v4;
  v9 = *((_DWORD *)this + 2);
  if ( v3 )
  {
    v10 = *((_DWORD *)this + 15);
    v16 = *((_DWORD *)this + 10);
    v11 = *(_QWORD *)((char *)this + 44);
    CTaskSimple::CTaskSimple(v4);
    *((_BYTE *)v8 + 24) = v7;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 4) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 25) = v5;
    *((_DWORD *)v8 + 7) = 0;
    *((_DWORD *)v8 + 8) = 191;
    *((_DWORD *)v8 + 9) = 0;
    *((_WORD *)v8 + 26) = 256;
    *((_BYTE *)v8 + 54) = 0;
    *((_DWORD *)v8 + 14) = 0;
    *(_DWORD *)v8 = &off_66D19C;
    *((_DWORD *)v8 + 2) = v9;
    v12 = *v6;
    *((_DWORD *)v8 + 5) = *((_DWORD *)this + 5);
    *(_QWORD *)((char *)v8 + 12) = v12;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 28) |= 0x400u;
      CEntity::RegisterReference(*((CEntity **)v8 + 2), (CEntity **)v8 + 2);
    }
    *((_DWORD *)v8 + 11) = v11;
    *((_DWORD *)v8 + 10) = v16;
    *((_DWORD *)v8 + 12) = HIDWORD(v11);
    CAnimManager::AddAnimBlockRef((CAnimManager *)(((int)v11 - (int)CAnimManager::ms_aAnimBlocks) >> 5), v16);
  }
  else
  {
    v10 = *((_DWORD *)this + 15);
    v13 = *((_QWORD *)this + 4);
    CTaskSimple::CTaskSimple(v4);
    *((_BYTE *)v8 + 24) = v7;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 4) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 25) = v5;
    *((_QWORD *)v8 + 4) = v13;
    *((_DWORD *)v8 + 11) = 0;
    *((_DWORD *)v8 + 12) = 0;
    *((_WORD *)v8 + 26) = 256;
    *((_BYTE *)v8 + 54) = 0;
    *((_DWORD *)v8 + 14) = 0;
    *(_DWORD *)v8 = &off_66D19C;
    *((_DWORD *)v8 + 2) = v9;
    v14 = *v6;
    *((_DWORD *)v8 + 5) = *((_DWORD *)this + 5);
    *(_QWORD *)((char *)v8 + 12) = v14;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 28) |= 0x400u;
      CEntity::RegisterReference(*((CEntity **)v8 + 2), (CEntity **)v8 + 2);
    }
  }
  *((_DWORD *)v8 + 15) = v10;
  *(_DWORD *)v8 = &off_66D2A8;
  return v8;
}


// ============================================================

// Address: 0x54442c
// Original: _ZNK24CTaskSimplePutDownEntity11GetTaskTypeEv
// Demangled: CTaskSimplePutDownEntity::GetTaskType(void)
int __fastcall CTaskSimplePutDownEntity::GetTaskType(CTaskSimplePutDownEntity *this)
{
  return 309;
}


// ============================================================
