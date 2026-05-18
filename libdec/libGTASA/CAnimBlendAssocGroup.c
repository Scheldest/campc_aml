
// Address: 0x18d618
// Original: j__ZN20CAnimBlendAssocGroupC2Ev
// Demangled: CAnimBlendAssocGroup::CAnimBlendAssocGroup(void)
// attributes: thunk
void __fastcall CAnimBlendAssocGroup::CAnimBlendAssocGroup(CAnimBlendAssocGroup *this)
{
  _ZN20CAnimBlendAssocGroupC2Ev(this);
}


// ============================================================

// Address: 0x18e64c
// Original: j__ZN20CAnimBlendAssocGroup12GetAnimationEPKc
// Demangled: CAnimBlendAssocGroup::GetAnimation(char const*)
// attributes: thunk
int __fastcall CAnimBlendAssocGroup::GetAnimation(CAnimBlendAssocGroup *this, CKeyGen *a2)
{
  return _ZN20CAnimBlendAssocGroup12GetAnimationEPKc(this, a2);
}


// ============================================================

// Address: 0x18e874
// Original: j__ZN20CAnimBlendAssocGroup13CopyAnimationEj
// Demangled: CAnimBlendAssocGroup::CopyAnimation(uint)
// attributes: thunk
int __fastcall CAnimBlendAssocGroup::CopyAnimation(CAnimBlendAssocGroup *this, unsigned int a2)
{
  return _ZN20CAnimBlendAssocGroup13CopyAnimationEj(this, a2);
}


// ============================================================

// Address: 0x190778
// Original: j__ZN20CAnimBlendAssocGroupD2Ev
// Demangled: CAnimBlendAssocGroup::~CAnimBlendAssocGroup()
// attributes: thunk
void __fastcall CAnimBlendAssocGroup::~CAnimBlendAssocGroup(CAnimBlendAssocGroup *this)
{
  _ZN20CAnimBlendAssocGroupD2Ev(this);
}


// ============================================================

// Address: 0x190c58
// Original: j__ZN20CAnimBlendAssocGroup13CopyAnimationEPKc
// Demangled: CAnimBlendAssocGroup::CopyAnimation(char const*)
// attributes: thunk
int __fastcall CAnimBlendAssocGroup::CopyAnimation(CAnimBlendAssocGroup *this, CKeyGen *a2)
{
  return _ZN20CAnimBlendAssocGroup13CopyAnimationEPKc(this, a2);
}


// ============================================================

// Address: 0x199364
// Original: j__ZN20CAnimBlendAssocGroup18CreateAssociationsEPKcP7RpClumpPS1_i
// Demangled: CAnimBlendAssocGroup::CreateAssociations(char const*,RpClump *,char const**,int)
// attributes: thunk
int __fastcall CAnimBlendAssocGroup::CreateAssociations(int a1, CAnimManager *this, int a3, int a4, int a5)
{
  return _ZN20CAnimBlendAssocGroup18CreateAssociationsEPKcP7RpClumpPS1_i(a1, this, a3, a4, a5);
}


// ============================================================

// Address: 0x1998bc
// Original: j__ZN20CAnimBlendAssocGroup18CreateAssociationsEPKcS1_S1_i
// Demangled: CAnimBlendAssocGroup::CreateAssociations(char const*,char const*,char const*,int)
// attributes: thunk
int __fastcall CAnimBlendAssocGroup::CreateAssociations(
        CAnimBlendAssocGroup *this,
        CAnimManager *a2,
        const char *a3,
        const char *a4,
        int a5)
{
  return _ZN20CAnimBlendAssocGroup18CreateAssociationsEPKcS1_S1_i(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x19ee34
// Original: j__ZN20CAnimBlendAssocGroup19DestroyAssociationsEv
// Demangled: CAnimBlendAssocGroup::DestroyAssociations(void)
// attributes: thunk
int __fastcall CAnimBlendAssocGroup::DestroyAssociations(CAnimBlendAssocGroup *this)
{
  return _ZN20CAnimBlendAssocGroup19DestroyAssociationsEv(this);
}


// ============================================================

// Address: 0x19f8b0
// Original: j__ZN20CAnimBlendAssocGroup12GetAnimationEj
// Demangled: CAnimBlendAssocGroup::GetAnimation(uint)
// attributes: thunk
int __fastcall CAnimBlendAssocGroup::GetAnimation(CAnimBlendAssocGroup *this, unsigned int a2)
{
  return _ZN20CAnimBlendAssocGroup12GetAnimationEj(this, a2);
}


// ============================================================

// Address: 0x38915c
// Original: _ZN20CAnimBlendAssocGroupC2Ev
// Demangled: CAnimBlendAssocGroup::CAnimBlendAssocGroup(void)
void __fastcall CAnimBlendAssocGroup::CAnimBlendAssocGroup(CAnimBlendAssocGroup *this)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = -1;
}


// ============================================================

// Address: 0x38916e
// Original: _ZN20CAnimBlendAssocGroupD2Ev
// Demangled: CAnimBlendAssocGroup::~CAnimBlendAssocGroup()
void __fastcall CAnimBlendAssocGroup::~CAnimBlendAssocGroup(CAnimBlendAssocGroup *this)
{
  int v2; // r0
  int v3; // r1
  void *v4; // r8
  int v5; // r6
  int v6; // r5

  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 - 4);
    v4 = (void *)(v2 - 8);
    if ( v3 )
    {
      v5 = v2 - 20;
      v6 = 20 * v3;
      do
      {
        CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation((CAnimBlendStaticAssociation *)(v5 + v6));
        v6 -= 20;
      }
      while ( v6 );
    }
    operator delete[](v4);
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
}


// ============================================================

// Address: 0x3891ae
// Original: _ZN20CAnimBlendAssocGroup19DestroyAssociationsEv
// Demangled: CAnimBlendAssocGroup::DestroyAssociations(void)
int __fastcall CAnimBlendAssocGroup::DestroyAssociations(CAnimBlendAssocGroup *this)
{
  int result; // r0
  int v3; // r1
  void *v4; // r8
  int v5; // r6
  int v6; // r5

  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v3 = *(_DWORD *)(result - 4);
    v4 = (void *)(result - 8);
    if ( v3 )
    {
      v5 = result - 20;
      v6 = 20 * v3;
      do
      {
        CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation((CAnimBlendStaticAssociation *)(v5 + v6));
        v6 -= 20;
      }
      while ( v6 );
    }
    operator delete[](v4);
    result = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x389298
// Original: _ZN20CAnimBlendAssocGroup18CreateAssociationsEPKc
// Demangled: CAnimBlendAssocGroup::CreateAssociations(char const*)
int __fastcall CAnimBlendAssocGroup::CreateAssociations(CAnimBlendAssocGroup *this, CAnimManager *a2)
{
  int v4; // r0
  int v5; // r1
  void *v6; // r8
  int v7; // r4
  int v8; // r6
  int AnimationBlock; // r6
  int v10; // r4
  _QWORD *v11; // r0
  int *v12; // r2
  __int64 v13; // r4
  int v14; // r5
  CAnimBlendStaticAssociation *v15; // r0
  int v16; // r0
  int result; // r0
  int v18; // r4
  int i; // r5
  int ModelInfoFromHashKey; // r0
  int v21; // r6

  v4 = *((_DWORD *)this + 1);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 - 4);
    v6 = (void *)(v4 - 8);
    if ( v5 )
    {
      v7 = v4 - 20;
      v8 = 20 * v5;
      do
      {
        CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation((CAnimBlendStaticAssociation *)(v7 + v8));
        v8 -= 20;
      }
      while ( v8 );
    }
    operator delete[](v6);
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  AnimationBlock = CAnimManager::GetAnimationBlock(a2, (const char *)a2);
  v10 = 20;
  *(_DWORD *)this = AnimationBlock;
  HIDWORD(v13) = *(_DWORD *)(AnimationBlock + 24);
  v11 = (_QWORD *)operator new[](saturated_mul(0x14u, HIDWORD(v13)));
  *v11 = v13;
  LODWORD(v13) = v11 + 1;
  if ( HIDWORD(v13) )
  {
    v14 = 20 * HIDWORD(v13);
    v15 = (CAnimBlendStaticAssociation *)(v11 + 1);
    do
    {
      CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(v15);
      v14 -= 20;
      v15 = (CAnimBlendStaticAssociation *)(v16 + 20);
    }
    while ( v14 );
    AnimationBlock = *(_DWORD *)this;
  }
  *((_DWORD *)this + 1) = v13;
  *((_DWORD *)this + 2) = 0;
  result = *(_DWORD *)(AnimationBlock + 24);
  if ( result >= 1 )
  {
    v18 = 0;
    for ( i = 0; i < result; ++i )
    {
      ModelInfoFromHashKey = CModelInfo::GetModelInfoFromHashKey(
                               *((CModelInfo **)&CAnimManager::ms_aAnimations
                               + 6 * *(_DWORD *)(AnimationBlock + 20)
                               + 6 * i),
                               0,
                               v12);
      if ( ModelInfoFromHashKey )
      {
        v21 = (*(int (__fastcall **)(int))(*(_DWORD *)ModelInfoFromHashKey + 44))(ModelInfoFromHashKey);
        RpAnimBlendClumpInit();
        CAnimBlendStaticAssociation::Init();
        if ( GetFirstAtomic() && j_RpSkinGeometryGetSkin() )
          RpClumpForAllAtomics(v21, AtomicRemoveAnimFromSkinCB, 0);
        RpClumpDestroy();
        *(_WORD *)(*((_DWORD *)this + 1) + v18 + 6) = *((_DWORD *)this + 3) + i;
        *(_WORD *)(*((_DWORD *)this + 1) + v18 + 8) = *((_DWORD *)this + 4);
      }
      v18 += 20;
      AnimationBlock = *(_DWORD *)this;
      ++*((_DWORD *)this + 2);
      result = *(_DWORD *)(AnimationBlock + 24);
    }
  }
  *((_DWORD *)this + 2) = result;
  return result;
}


// ============================================================

// Address: 0x3893e4
// Original: _ZN20CAnimBlendAssocGroup18CreateAssociationsEPKcS1_S1_i
// Demangled: CAnimBlendAssocGroup::CreateAssociations(char const*,char const*,char const*,int)
int __fastcall CAnimBlendAssocGroup::CreateAssociations(
        CAnimBlendAssocGroup *this,
        CAnimManager *a2,
        CKeyGen *a3,
        const char *a4,
        int a5)
{
  int v7; // r0
  int v8; // r1
  void *v9; // r8
  int v10; // r5
  int v11; // r4
  int AnimationBlock; // r4
  unsigned int v13; // r5
  _DWORD *v14; // r0
  _DWORD *v15; // r8
  int v16; // r4
  CAnimBlendStaticAssociation *v17; // r0
  int v18; // r0
  int result; // r0
  int i; // r9
  int v21; // r10
  const char *v22; // r1
  int v23; // r8
  CKeyGen *v24; // r5
  const char **v25; // r4
  int UppercaseKey; // r0
  int ModelInfo; // r0
  int v28; // r5

  if ( !a4 )
    return CAnimBlendAssocGroup::CreateAssociations(this, a2);
  v7 = *((_DWORD *)this + 1);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 - 4);
    v9 = (void *)(v7 - 8);
    if ( v8 )
    {
      v10 = v7 - 20;
      v11 = 20 * v8;
      do
      {
        CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation((CAnimBlendStaticAssociation *)(v10 + v11));
        v11 -= 20;
      }
      while ( v11 );
    }
    operator delete[](v9);
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  AnimationBlock = CAnimManager::GetAnimationBlock(a2, (const char *)a2);
  *(_DWORD *)this = AnimationBlock;
  v13 = *(_DWORD *)(AnimationBlock + 24);
  v14 = (_DWORD *)operator new[](saturated_mul(0x14u, v13));
  *v14 = 20;
  v14[1] = v13;
  v15 = v14 + 2;
  if ( v13 )
  {
    v16 = 20 * v13;
    v17 = (CAnimBlendStaticAssociation *)(v14 + 2);
    do
    {
      CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(v17);
      v16 -= 20;
      v17 = (CAnimBlendStaticAssociation *)(v18 + 20);
    }
    while ( v16 );
    AnimationBlock = *(_DWORD *)this;
  }
  *((_DWORD *)this + 1) = v15;
  *((_DWORD *)this + 2) = 0;
  result = *(_DWORD *)(AnimationBlock + 24);
  if ( result >= 1 )
  {
    for ( i = 0; i < result; ++i )
    {
      if ( result >= 1 )
      {
        v21 = -1;
        v22 = (const char *)&CAnimManager::ms_aAnimations;
        v23 = 0;
        v24 = a3;
        v25 = (const char **)((char *)&CAnimManager::ms_aAnimations + 24 * *(_DWORD *)(AnimationBlock + 20) + 24 * i);
        do
        {
          UppercaseKey = CKeyGen::GetUppercaseKey(v24, v22);
          v22 = *v25;
          v24 = (CKeyGen *)((char *)v24 + a5);
          if ( (const char *)UppercaseKey == *v25 )
            v21 = v23;
          ++v23;
        }
        while ( v23 < *(_DWORD *)(*(_DWORD *)this + 24) );
        if ( v21 != -1 )
        {
          CModelInfo::ms_lastPositionSearched = 0;
          ModelInfo = CModelInfo::GetModelInfo((CModelInfo *)&a4[v21 * a5], 0, &CModelInfo::ms_lastPositionSearched);
          if ( ModelInfo )
          {
            v28 = (*(int (__fastcall **)(int))(*(_DWORD *)ModelInfo + 44))(ModelInfo);
            RpAnimBlendClumpInit();
            CAnimBlendStaticAssociation::Init();
            if ( GetFirstAtomic() )
            {
              if ( j_RpSkinGeometryGetSkin() )
                RpClumpForAllAtomics(v28, AtomicRemoveAnimFromSkinCB, 0);
            }
            RpClumpDestroy();
            *(_WORD *)(*((_DWORD *)this + 1) + 20 * *((_DWORD *)this + 2) + 6) = *((_DWORD *)this + 3) + i;
            *(_WORD *)(*((_DWORD *)this + 1) + 20 * (*((_DWORD *)this + 2))++ + 8) = *((_DWORD *)this + 4);
          }
        }
      }
      AnimationBlock = *(_DWORD *)this;
      result = *(_DWORD *)(*(_DWORD *)this + 24);
    }
  }
  return result;
}


// ============================================================

// Address: 0x389594
// Original: _ZN20CAnimBlendAssocGroup18CreateAssociationsEPKcP7RpClump
// Demangled: CAnimBlendAssocGroup::CreateAssociations(char const*,RpClump *)
int __fastcall CAnimBlendAssocGroup::CreateAssociations(int *a1, CAnimManager *this)
{
  int v3; // r0
  int v5; // r1
  void *v6; // r8
  int v7; // r4
  int v8; // r5
  int AnimationBlock; // r6
  unsigned int v10; // r4
  _DWORD *v11; // r0
  _DWORD *v12; // r8
  int v13; // r4
  CAnimBlendStaticAssociation *v14; // r0
  int v15; // r0
  int result; // r0
  int v17; // r5
  int v18; // r4
  __int16 v19; // r1
  int v20; // r6

  v3 = a1[1];
  if ( v3 )
  {
    v5 = *(_DWORD *)(v3 - 4);
    v6 = (void *)(v3 - 8);
    if ( v5 )
    {
      v7 = v3 - 20;
      v8 = 20 * v5;
      do
      {
        CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation((CAnimBlendStaticAssociation *)(v7 + v8));
        v8 -= 20;
      }
      while ( v8 );
    }
    operator delete[](v6);
    a1[1] = 0;
    a1[2] = 0;
  }
  AnimationBlock = CAnimManager::GetAnimationBlock(this, (const char *)this);
  *a1 = AnimationBlock;
  v10 = *(_DWORD *)(AnimationBlock + 24);
  v11 = (_DWORD *)operator new[](saturated_mul(0x14u, v10));
  v12 = v11 + 2;
  *v11 = 20;
  v11[1] = v10;
  if ( v10 )
  {
    v13 = 20 * v10;
    v14 = (CAnimBlendStaticAssociation *)(v11 + 2);
    do
    {
      CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(v14);
      v13 -= 20;
      v14 = (CAnimBlendStaticAssociation *)(v15 + 20);
    }
    while ( v13 );
    AnimationBlock = *a1;
  }
  a1[1] = (int)v12;
  a1[2] = 0;
  result = *(_DWORD *)(AnimationBlock + 24);
  if ( result >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      CAnimBlendStaticAssociation::Init();
      v19 = a1[3] + v18++;
      *(_WORD *)(a1[1] + v17 + 6) = v19;
      *(_WORD *)(a1[1] + v17 + 8) = a1[4];
      v20 = *a1;
      ++a1[2];
      result = *(_DWORD *)(v20 + 24);
      if ( v18 >= result )
        break;
      v17 += 20;
    }
  }
  a1[2] = result;
  return result;
}


// ============================================================

// Address: 0x3896a0
// Original: _ZN20CAnimBlendAssocGroup18CreateAssociationsEPKcP7RpClumpPS1_i
// Demangled: CAnimBlendAssocGroup::CreateAssociations(char const*,RpClump *,char const**,int)
int __fastcall CAnimBlendAssocGroup::CreateAssociations(int *a1, CAnimManager *this, int a3, int a4, int a5)
{
  int v6; // r0
  CAnimManager *v8; // r8
  int v9; // r1
  int v10; // r6
  int v11; // r5
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  int v14; // r6
  CAnimBlendStaticAssociation *v15; // r0
  int v16; // r0
  int result; // r0
  int v18; // r6
  int v19; // r5
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r4
  void *v23; // [sp+0h] [bp-20h]

  v6 = a1[1];
  if ( v6 )
  {
    v8 = this;
    v9 = *(_DWORD *)(v6 - 4);
    v23 = (void *)(v6 - 8);
    if ( v9 )
    {
      v10 = v6 - 20;
      v11 = 20 * v9;
      do
      {
        CAnimBlendStaticAssociation::~CAnimBlendStaticAssociation((CAnimBlendStaticAssociation *)(v10 + v11));
        v11 -= 20;
      }
      while ( v11 );
    }
    operator delete[](v23);
    this = v8;
    a1[1] = 0;
    a1[2] = 0;
  }
  *a1 = CAnimManager::GetAnimationBlock(this, (const char *)this);
  v12 = (_DWORD *)operator new[](saturated_mul(0x14u, a5));
  *v12 = 20;
  v12[1] = a5;
  v13 = v12 + 2;
  if ( a5 )
  {
    v14 = 20 * a5;
    v15 = (CAnimBlendStaticAssociation *)(v12 + 2);
    do
    {
      CAnimBlendStaticAssociation::CAnimBlendStaticAssociation(v15);
      v14 -= 20;
      v15 = (CAnimBlendStaticAssociation *)(v16 + 20);
    }
    while ( v14 );
    result = 0;
    a1[2] = 0;
    a1[1] = (int)v13;
    if ( a5 >= 1 )
    {
      v18 = 0;
      v19 = 0;
      do
      {
        if ( **(_BYTE **)(a4 + 4 * v19) )
        {
          CAnimManager::GetAnimation();
          CAnimBlendStaticAssociation::Init();
          v20 = a1[3] + v19;
        }
        else
        {
          LOWORD(v20) = -1;
        }
        ++v19;
        *(_WORD *)(a1[1] + v18 + 6) = v20;
        v21 = a1[1] + v18;
        v18 += 20;
        *(_WORD *)(v21 + 8) = a1[4];
        result = a1[2] + 1;
        a1[2] = result;
      }
      while ( a5 != v19 );
    }
    v22 = a1 + 2;
  }
  else
  {
    result = 0;
    a1[2] = 0;
    v22 = a1 + 2;
    *(v22 - 1) = v13;
  }
  *v22 = a5;
  return result;
}


// ============================================================

// Address: 0x3897b0
// Original: _ZN20CAnimBlendAssocGroup21InitEmptyAssociationsEP7RpClump
// Demangled: CAnimBlendAssocGroup::InitEmptyAssociations(RpClump *)
int __fastcall CAnimBlendAssocGroup::InitEmptyAssociations(int result)
{
  int v1; // r5
  int v2; // r1
  int v3; // r6
  int i; // r4

  v1 = result;
  v2 = *(_DWORD *)(result + 8);
  if ( v2 >= 1 )
  {
    v3 = 0;
    for ( i = 0; i < v2; ++i )
    {
      result = *(_DWORD *)(v1 + 4) + v3;
      if ( !*(_DWORD *)(result + 12) )
      {
        result = CAnimBlendStaticAssociation::Init();
        v2 = *(_DWORD *)(v1 + 8);
      }
      v3 += 20;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3897e6
// Original: _ZN20CAnimBlendAssocGroup12GetAnimationEPKc
// Demangled: CAnimBlendAssocGroup::GetAnimation(char const*)
int __fastcall CAnimBlendAssocGroup::GetAnimation(CAnimBlendAssocGroup *this, CKeyGen *a2)
{
  int UppercaseKey; // r0
  int v4; // r2
  int v5; // r1
  int result; // r0
  int v7; // r3

  UppercaseKey = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  v4 = *((_DWORD *)this + 2);
  v5 = UppercaseKey;
  if ( v4 < 1 )
    return 0;
  result = *((_DWORD *)this + 1);
  v7 = 0;
  while ( **(_DWORD **)(result + 16) != v5 )
  {
    ++v7;
    result += 20;
    if ( v7 >= v4 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x389818
// Original: _ZN20CAnimBlendAssocGroup12GetAnimationEj
// Demangled: CAnimBlendAssocGroup::GetAnimation(uint)
unsigned int __fastcall CAnimBlendAssocGroup::GetAnimation(CAnimBlendAssocGroup *this, unsigned int a2)
{
  return *((_DWORD *)this + 1) + 20 * (a2 - *((_DWORD *)this + 3));
}


// ============================================================

// Address: 0x389828
// Original: _ZN20CAnimBlendAssocGroup13CopyAnimationEPKc
// Demangled: CAnimBlendAssocGroup::CopyAnimation(char const*)
void __fastcall CAnimBlendAssocGroup::CopyAnimation(CAnimBlendAssocGroup *this, CKeyGen *a2)
{
  int UppercaseKey; // r0
  int v4; // r12
  CAnimManager **v5; // r4
  int v6; // r3
  CAnimBlendHierarchy *v7; // r1
  CAnimBlendAssociation *v8; // r0

  UppercaseKey = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  v4 = *((_DWORD *)this + 2);
  if ( v4 >= 1 )
  {
    v5 = (CAnimManager **)*((_DWORD *)this + 1);
    v6 = 0;
    while ( 1 )
    {
      v7 = v5[4];
      if ( *(_DWORD *)v7 == UppercaseKey )
        break;
      ++v6;
      v5 += 5;
      if ( v6 >= v4 )
        return;
    }
    if ( v5 )
    {
      CAnimManager::UncompressAnimation(v5[4], v7);
      v8 = (CAnimBlendAssociation *)operator new(0x3Cu);
      CAnimBlendAssociation::CAnimBlendAssociation(v8, (CAnimBlendStaticAssociation *)v5);
    }
  }
}


// ============================================================

// Address: 0x389874
// Original: _ZN20CAnimBlendAssocGroup13CopyAnimationEj
// Demangled: CAnimBlendAssocGroup::CopyAnimation(uint)
void __fastcall CAnimBlendAssocGroup::CopyAnimation(CAnimBlendAssocGroup *this, CAnimBlendHierarchy *a2)
{
  CAnimManager **v2; // r4
  CAnimBlendAssociation *v3; // r0

  v2 = (CAnimManager **)(*((_DWORD *)this + 1) + 20 * ((_DWORD)a2 - *((_DWORD *)this + 3)));
  if ( v2 )
  {
    CAnimManager::UncompressAnimation(v2[4], a2);
    v3 = (CAnimBlendAssociation *)operator new(0x3Cu);
    CAnimBlendAssociation::CAnimBlendAssociation(v3, (CAnimBlendStaticAssociation *)v2);
  }
}


// ============================================================

// Address: 0x3898a0
// Original: _ZN20CAnimBlendAssocGroup14GetAnimationIdEPKc
// Demangled: CAnimBlendAssocGroup::GetAnimationId(char const*)
int __fastcall CAnimBlendAssocGroup::GetAnimationId(CAnimBlendAssocGroup *this, CKeyGen *a2)
{
  int UppercaseKey; // r0
  int v4; // r1
  int v5; // r3
  _DWORD **i; // r2

  UppercaseKey = CKeyGen::GetUppercaseKey(a2, (const char *)a2);
  v4 = *((_DWORD *)this + 2);
  if ( v4 < 1 )
    return -1;
  v5 = 0;
  for ( i = (_DWORD **)(*((_DWORD *)this + 1) + 16); **i != UppercaseKey; i += 5 )
  {
    if ( ++v5 >= v4 )
      return -1;
  }
  if ( i == (_DWORD **)&word_10 )
    return -1;
  else
    return *((__int16 *)i - 5);
}


// ============================================================
