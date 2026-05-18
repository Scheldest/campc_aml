
// Address: 0x18e7fc
// Original: j__ZN13CQuadTreeNode14GetAllMatchingERK9CVector2DR18CPtrListSingleLink
// Demangled: CQuadTreeNode::GetAllMatching(CVector2D const&,CPtrListSingleLink &)
// attributes: thunk
int CQuadTreeNode::GetAllMatching()
{
  return _ZN13CQuadTreeNode14GetAllMatchingERK9CVector2DR18CPtrListSingleLink();
}


// ============================================================

// Address: 0x18fc70
// Original: j__ZN13CQuadTreeNodeD2Ev
// Demangled: CQuadTreeNode::~CQuadTreeNode()
// attributes: thunk
void __fastcall CQuadTreeNode::~CQuadTreeNode(CQuadTreeNode *this)
{
  _ZN13CQuadTreeNodeD2Ev(this);
}


// ============================================================

// Address: 0x19042c
// Original: j__ZN13CQuadTreeNodenwEj
// Demangled: CQuadTreeNode::operator new(uint)
// attributes: thunk
int __fastcall CQuadTreeNode::operator new(CQuadTreeNode *this, unsigned int a2)
{
  return _ZN13CQuadTreeNodenwEj(this, a2);
}


// ============================================================

// Address: 0x19250c
// Original: j__ZN13CQuadTreeNode7AddItemEPvRK5CRect
// Demangled: CQuadTreeNode::AddItem(void *,CRect const&)
// attributes: thunk
int CQuadTreeNode::AddItem()
{
  return _ZN13CQuadTreeNode7AddItemEPvRK5CRect();
}


// ============================================================

// Address: 0x193014
// Original: j__ZN13CQuadTreeNode10DeleteItemEPv
// Demangled: CQuadTreeNode::DeleteItem(void *)
// attributes: thunk
int __fastcall CQuadTreeNode::DeleteItem(CQuadTreeNode *this, void *a2)
{
  return _ZN13CQuadTreeNode10DeleteItemEPv(this, a2);
}


// ============================================================

// Address: 0x193048
// Original: j__ZN13CQuadTreeNode10DeleteItemEPvRK5CRect
// Demangled: CQuadTreeNode::DeleteItem(void *,CRect const&)
// attributes: thunk
int CQuadTreeNode::DeleteItem()
{
  return _ZN13CQuadTreeNode10DeleteItemEPvRK5CRect();
}


// ============================================================

// Address: 0x195510
// Original: j__ZN13CQuadTreeNodedlEPv
// Demangled: CQuadTreeNode::operator delete(void *)
// attributes: thunk
void __fastcall CQuadTreeNode::operator delete(void *a1)
{
  _ZN13CQuadTreeNodedlEPv(a1);
}


// ============================================================

// Address: 0x195b38
// Original: j__ZN13CQuadTreeNode14GetAllMatchingERK5CRectR18CPtrListSingleLink
// Demangled: CQuadTreeNode::GetAllMatching(CRect const&,CPtrListSingleLink &)
// attributes: thunk
int CQuadTreeNode::GetAllMatching()
{
  return _ZN13CQuadTreeNode14GetAllMatchingERK5CRectR18CPtrListSingleLink();
}


// ============================================================

// Address: 0x196c04
// Original: j__ZN13CQuadTreeNodeD2Ev_0
// Demangled: CQuadTreeNode::~CQuadTreeNode()
// attributes: thunk
void __fastcall CQuadTreeNode::~CQuadTreeNode(CQuadTreeNode *this)
{
  _ZN13CQuadTreeNodeD2Ev(this);
}


// ============================================================

// Address: 0x197110
// Original: j__ZN13CQuadTreeNode8InitPoolEv
// Demangled: CQuadTreeNode::InitPool(void)
// attributes: thunk
int __fastcall CQuadTreeNode::InitPool(CQuadTreeNode *this)
{
  return _ZN13CQuadTreeNode8InitPoolEv(this);
}


// ============================================================

// Address: 0x199090
// Original: j__ZN13CQuadTreeNode14ForAllMatchingERK9CVector2DPFvS2_PvE
// Demangled: CQuadTreeNode::ForAllMatching(CVector2D const&,void (*)(CVector2D const&,void *))
// attributes: thunk
int CQuadTreeNode::ForAllMatching()
{
  return _ZN13CQuadTreeNode14ForAllMatchingERK9CVector2DPFvS2_PvE();
}


// ============================================================

// Address: 0x1995b0
// Original: j__ZN13CQuadTreeNode6GetAllER18CPtrListSingleLink
// Demangled: CQuadTreeNode::GetAll(CPtrListSingleLink &)
// attributes: thunk
int __fastcall CQuadTreeNode::GetAll(CQuadTreeNode *this, CPtrListSingleLink *a2)
{
  return _ZN13CQuadTreeNode6GetAllER18CPtrListSingleLink(this, a2);
}


// ============================================================

// Address: 0x19b830
// Original: j__ZN13CQuadTreeNodeC2ERK5CRecti
// Demangled: CQuadTreeNode::CQuadTreeNode(CRect const&,int)
// attributes: thunk
int CQuadTreeNode::CQuadTreeNode()
{
  return _ZN13CQuadTreeNodeC2ERK5CRecti();
}


// ============================================================

// Address: 0x19dd3c
// Original: j__ZN13CQuadTreeNode14ForAllMatchingERK5CRectPFvS2_PvE
// Demangled: CQuadTreeNode::ForAllMatching(CRect const&,void (*)(CRect const&,void *))
// attributes: thunk
int CQuadTreeNode::ForAllMatching()
{
  return _ZN13CQuadTreeNode14ForAllMatchingERK5CRectPFvS2_PvE();
}


// ============================================================

// Address: 0x40daec
// Original: _ZN13CQuadTreeNode8InitPoolEv
// Demangled: CQuadTreeNode::InitPool(void)
int *__fastcall CQuadTreeNode::InitPool(CQuadTreeNode *this)
{
  int *result; // r0
  int v2; // r4
  _BYTE *v3; // r0
  char v4; // r1
  int i; // r0

  result = (int *)CQuadTreeNode::ms_pQuadTreeNodePool;
  if ( !CQuadTreeNode::ms_pQuadTreeNodePool )
  {
    v2 = operator new(0x14u);
    *(_DWORD *)v2 = operator new[](0x3E80u);
    v3 = (_BYTE *)operator new[](0x190u);
    *(_BYTE *)(v2 + 16) = 1;
    *(_DWORD *)(v2 + 4) = v3;
    *(_DWORD *)(v2 + 8) = 400;
    *(_DWORD *)(v2 + 12) = -1;
    v4 = v3[1];
    *v3 = 0x80;
    v3[1] = v4 | 0x80;
    *(_BYTE *)(*(_DWORD *)(v2 + 4) + 1) &= 0x80u;
    for ( i = 2; i != 400; ++i )
    {
      *(_BYTE *)(*(_DWORD *)(v2 + 4) + i) |= 0x80u;
      *(_BYTE *)(*(_DWORD *)(v2 + 4) + i) &= 0x80u;
    }
    result = &CQuadTreeNode::ms_pQuadTreeNodePool;
    CQuadTreeNode::ms_pQuadTreeNodePool = v2;
  }
  return result;
}


// ============================================================

// Address: 0x40db74
// Original: _ZN13CQuadTreeNodenwEj
// Demangled: CQuadTreeNode::operator new(uint)
int __fastcall CQuadTreeNode::operator new(CQuadTreeNode *this, unsigned int a2)
{
  int v2; // lr
  _DWORD *v3; // r1
  int result; // r0
  int v5; // r12
  int v6; // r2
  int v7; // r3

  v2 = 0;
  v3 = (_DWORD *)CQuadTreeNode::ms_pQuadTreeNodePool;
  result = *(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 12);
  v5 = *(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 8);
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
  return *v3 + 40 * v3[3];
}


// ============================================================

// Address: 0x40dbd8
// Original: _ZN13CQuadTreeNodedlEPv
// Demangled: CQuadTreeNode::operator delete(void *)
void __fastcall CQuadTreeNode::operator delete(int a1)
{
  int v1; // r1
  int v2; // r0

  v1 = CQuadTreeNode::ms_pQuadTreeNodePool;
  v2 = -858993459 * ((a1 - *(_DWORD *)CQuadTreeNode::ms_pQuadTreeNodePool) >> 3);
  *(_BYTE *)(*(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 4) + v2) |= 0x80u;
  if ( v2 < *(_DWORD *)(v1 + 12) )
    *(_DWORD *)(v1 + 12) = v2;
}


// ============================================================

// Address: 0x40dc08
// Original: _ZN13CQuadTreeNodeC2ERK5CRecti
// Demangled: CQuadTreeNode::CQuadTreeNode(CRect const&,int)
int __fastcall CQuadTreeNode::CQuadTreeNode(int result, __int64 *a2, int a3)
{
  __int64 v3; // d16
  __int64 v4; // d17

  v3 = *a2;
  v4 = a2[1];
  *(_DWORD *)(result + 36) = a3;
  *(_QWORD *)(result + 20) = 0LL;
  *(_QWORD *)(result + 28) = 0LL;
  *(_QWORD *)result = v3;
  *(_QWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


// ============================================================

// Address: 0x40dc28
// Original: _ZN13CQuadTreeNodeD2Ev
// Demangled: CQuadTreeNode::~CQuadTreeNode()
void __fastcall CQuadTreeNode::~CQuadTreeNode(CQuadTreeNode *this)
{
  CQuadTreeNode *v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r0
  CQuadTreeNode *v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  CQuadTreeNode *v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r0
  CQuadTreeNode *v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r0

  v2 = (CQuadTreeNode *)*((_DWORD *)this + 5);
  if ( v2 )
  {
    CQuadTreeNode::~CQuadTreeNode(v2);
    v3 = CQuadTreeNode::ms_pQuadTreeNodePool;
    v5 = -858993459 * ((v4 - *(_DWORD *)CQuadTreeNode::ms_pQuadTreeNodePool) >> 3);
    *(_BYTE *)(*(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 4) + v5) |= 0x80u;
    if ( v5 < *(_DWORD *)(v3 + 12) )
      *(_DWORD *)(v3 + 12) = v5;
  }
  v6 = (CQuadTreeNode *)*((_DWORD *)this + 6);
  if ( v6 )
  {
    CQuadTreeNode::~CQuadTreeNode(v6);
    v7 = CQuadTreeNode::ms_pQuadTreeNodePool;
    v9 = -858993459 * ((v8 - *(_DWORD *)CQuadTreeNode::ms_pQuadTreeNodePool) >> 3);
    *(_BYTE *)(*(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 4) + v9) |= 0x80u;
    if ( v9 < *(_DWORD *)(v7 + 12) )
      *(_DWORD *)(v7 + 12) = v9;
  }
  v10 = (CQuadTreeNode *)*((_DWORD *)this + 7);
  if ( v10 )
  {
    CQuadTreeNode::~CQuadTreeNode(v10);
    v11 = CQuadTreeNode::ms_pQuadTreeNodePool;
    v13 = -858993459 * ((v12 - *(_DWORD *)CQuadTreeNode::ms_pQuadTreeNodePool) >> 3);
    *(_BYTE *)(*(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 4) + v13) |= 0x80u;
    if ( v13 < *(_DWORD *)(v11 + 12) )
      *(_DWORD *)(v11 + 12) = v13;
  }
  v14 = (CQuadTreeNode *)*((_DWORD *)this + 8);
  if ( v14 )
  {
    CQuadTreeNode::~CQuadTreeNode(v14);
    v15 = CQuadTreeNode::ms_pQuadTreeNodePool;
    v17 = -858993459 * ((v16 - *(_DWORD *)CQuadTreeNode::ms_pQuadTreeNodePool) >> 3);
    *(_BYTE *)(*(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 4) + v17) |= 0x80u;
    if ( v17 < *(_DWORD *)(v15 + 12) )
      *(_DWORD *)(v15 + 12) = v17;
  }
  CPtrListSingleLink::Flush((CQuadTreeNode *)((char *)this + 16));
}


// ============================================================

// Address: 0x40dd14
// Original: _ZN13CQuadTreeNode6GetAllER18CPtrListSingleLink
// Demangled: CQuadTreeNode::GetAll(CPtrListSingleLink &)
_DWORD *__fastcall CQuadTreeNode::GetAll(_DWORD *this, CPtrListSingleLink *a2)
{
  _DWORD *v2; // r8
  CPtrListSingleLink *v3; // r4
  int *i; // r6
  int v5; // r5
  _DWORD *v6; // r0
  CQuadTreeNode *v7; // r0
  CQuadTreeNode *v8; // r0
  CQuadTreeNode *v9; // r0

  while ( 1 )
  {
    v2 = this;
    v3 = a2;
    for ( i = (int *)this[4]; i; i = (int *)i[1] )
    {
      v5 = *i;
      v6 = (_DWORD *)CPtrNodeSingleLink::operator new((CPtrNodeSingleLink *)byte_8, (unsigned int)a2);
      *v6 = v5;
      a2 = *(CPtrListSingleLink **)v3;
      v6[1] = *(_DWORD *)v3;
      *(_DWORD *)v3 = v6;
    }
    v7 = (CQuadTreeNode *)v2[5];
    if ( v7 )
      CQuadTreeNode::GetAll(v7, v3);
    v8 = (CQuadTreeNode *)v2[6];
    if ( v8 )
      CQuadTreeNode::GetAll(v8, v3);
    v9 = (CQuadTreeNode *)v2[7];
    if ( v9 )
      CQuadTreeNode::GetAll(v9, v3);
    this = (_DWORD *)v2[8];
    if ( !this )
      break;
    a2 = v3;
  }
  return this;
}


// ============================================================

// Address: 0x40dd80
// Original: _ZN13CQuadTreeNode14GetAllMatchingERK5CRectR18CPtrListSingleLink
// Demangled: CQuadTreeNode::GetAllMatching(CRect const&,CPtrListSingleLink &)
int __fastcall CQuadTreeNode::GetAllMatching(int a1, unsigned int a2, unsigned int *a3)
{
  int *v5; // r5
  float *i; // r8
  int v7; // r4
  _DWORD *v8; // r0
  int j; // r5
  int result; // r0
  float v11; // r1
  float v12; // s2
  float v13; // r2
  float v14; // s0
  float v15; // s4
  float *v16; // r1
  float v17; // [sp+0h] [bp-28h] BYREF
  float v18; // [sp+4h] [bp-24h] BYREF

  v5 = *(int **)(a1 + 16);
  for ( i = (float *)a2; v5; v5 = (int *)v5[1] )
  {
    v7 = *v5;
    v8 = (_DWORD *)CPtrNodeSingleLink::operator new((CPtrNodeSingleLink *)byte_8, a2);
    *v8 = v7;
    a2 = *a3;
    v8[1] = *a3;
    *a3 = (unsigned int)v8;
  }
  for ( j = 0; j != 4; ++j )
  {
    result = *(_DWORD *)(a1 + 20 + 4 * j);
    if ( result )
    {
      v11 = *(float *)(a1 + 4);
      v12 = *(float *)a1;
      v18 = v11;
      v13 = *(float *)(a1 + 12);
      v14 = *(float *)(a1 + 8);
      v17 = v13;
      if ( *(_DWORD *)(a1 + 36) )
      {
        v15 = v11;
        switch ( j )
        {
          case 0:
            v16 = &v17;
            v14 = (float)(v12 + v14) * 0.5;
            goto LABEL_12;
          case 1:
            v16 = &v17;
            v12 = (float)(v12 + v14) * 0.5;
            goto LABEL_12;
          case 2:
            v14 = (float)(v12 + v14) * 0.5;
            goto LABEL_11;
          case 3:
            v12 = (float)(v12 + v14) * 0.5;
LABEL_11:
            v16 = &v18;
LABEL_12:
            *v16 = (float)(v15 + v13) * 0.5;
            break;
          default:
            break;
        }
        if ( v12 <= i[2] && v14 >= *i && v17 <= i[1] && v18 >= i[3] )
          result = CQuadTreeNode::GetAllMatching();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x40de80
// Original: _ZN13CQuadTreeNode8InSectorERK5CRecti
// Demangled: CQuadTreeNode::InSector(CRect const&,int)
bool __fastcall CQuadTreeNode::InSector(int a1, float *a2, int a3)
{
  float v3; // r12
  float v4; // s2
  float v5; // r3
  float v6; // s0
  float *v7; // r0
  float v9; // [sp+0h] [bp-8h] BYREF
  float v10; // [sp+4h] [bp-4h] BYREF

  v3 = *(float *)(a1 + 4);
  v4 = *(float *)a1;
  v10 = v3;
  v5 = *(float *)(a1 + 12);
  v6 = *(float *)(a1 + 8);
  v9 = v5;
  if ( !*(_DWORD *)(a1 + 36) )
    return 0;
  switch ( a3 )
  {
    case 0:
      v7 = &v9;
      v6 = (float)(v4 + v6) * 0.5;
      goto LABEL_8;
    case 1:
      v7 = &v9;
      v4 = (float)(v4 + v6) * 0.5;
      goto LABEL_8;
    case 2:
      v6 = (float)(v4 + v6) * 0.5;
      goto LABEL_7;
    case 3:
      v4 = (float)(v4 + v6) * 0.5;
LABEL_7:
      v7 = &v10;
LABEL_8:
      *v7 = (float)(v3 + v5) * 0.5;
      break;
    default:
      return v4 <= a2[2] && v6 >= *a2 && v9 <= a2[1] && v10 >= a2[3];
  }
  return v4 <= a2[2] && v6 >= *a2 && v9 <= a2[1] && v10 >= a2[3];
}


// ============================================================

// Address: 0x40df48
// Original: _ZN13CQuadTreeNode14GetAllMatchingERK9CVector2DR18CPtrListSingleLink
// Demangled: CQuadTreeNode::GetAllMatching(CVector2D const&,CPtrListSingleLink &)
int __fastcall CQuadTreeNode::GetAllMatching(int a1, unsigned int a2, unsigned int *a3)
{
  float *v4; // r8
  int *i; // r5
  int v7; // r6
  _DWORD *v8; // r0
  int result; // r0
  int v10; // r0

  v4 = (float *)a2;
  do
  {
    for ( i = *(int **)(a1 + 16); i; i = (int *)i[1] )
    {
      v7 = *i;
      v8 = (_DWORD *)CPtrNodeSingleLink::operator new((CPtrNodeSingleLink *)byte_8, a2);
      *v8 = v7;
      a2 = *a3;
      v8[1] = *a3;
      *a3 = (unsigned int)v8;
    }
    result = *(_DWORD *)(a1 + 36);
    if ( !result )
      break;
    v10 = 2;
    a2 = 3;
    if ( v4[1] >= (float)((float)(*(float *)(a1 + 12) + *(float *)(a1 + 4)) * 0.5) )
    {
      v10 = 0;
      a2 = 1;
    }
    if ( *v4 < (float)((float)(*(float *)a1 + *(float *)(a1 + 8)) * 0.5) )
      a2 = v10;
    result = a1 + 4 * a2;
    a1 = *(_DWORD *)(result + 20);
  }
  while ( a1 );
  return result;
}


// ============================================================

// Address: 0x40dfe0
// Original: _ZN13CQuadTreeNode10FindSectorERK9CVector2D
// Demangled: CQuadTreeNode::FindSector(CVector2D const&)
int __fastcall CQuadTreeNode::FindSector(int a1, float *a2)
{
  int result; // r0
  float v3; // s0
  float v4; // s2

  if ( !*(_DWORD *)(a1 + 36) )
    return -1;
  v3 = (float)(*(float *)(a1 + 12) + *(float *)(a1 + 4)) * 0.5;
  v4 = a2[1];
  if ( *a2 >= (float)((float)(*(float *)a1 + *(float *)(a1 + 8)) * 0.5) )
  {
    result = 3;
    if ( v4 >= v3 )
      return 1;
  }
  else
  {
    result = 2;
    if ( v4 >= v3 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x40e044
// Original: _ZN13CQuadTreeNode14ForAllMatchingERK5CRectPFvS2_PvE
// Demangled: CQuadTreeNode::ForAllMatching(CRect const&,void (*)(CRect const&,void *))
int __fastcall CQuadTreeNode::ForAllMatching(int a1, float *a2, void (__fastcall *a3)(float *, _DWORD))
{
  _DWORD *i; // r4
  int j; // r4
  int result; // r0
  float v9; // r1
  float v10; // s2
  float v11; // r2
  float v12; // s0
  float v13; // s4
  float *v14; // r1
  float v15; // [sp+0h] [bp-28h] BYREF
  float v16; // [sp+4h] [bp-24h] BYREF

  for ( i = *(_DWORD **)(a1 + 16); i; i = (_DWORD *)i[1] )
    a3(a2, *i);
  for ( j = 0; j != 4; ++j )
  {
    result = *(_DWORD *)(a1 + 20 + 4 * j);
    if ( result )
    {
      v9 = *(float *)(a1 + 4);
      v10 = *(float *)a1;
      v16 = v9;
      v11 = *(float *)(a1 + 12);
      v12 = *(float *)(a1 + 8);
      v15 = v11;
      if ( *(_DWORD *)(a1 + 36) )
      {
        v13 = v9;
        switch ( j )
        {
          case 0:
            v14 = &v15;
            v12 = (float)(v10 + v12) * 0.5;
            goto LABEL_12;
          case 1:
            v14 = &v15;
            v10 = (float)(v10 + v12) * 0.5;
            goto LABEL_12;
          case 2:
            v12 = (float)(v10 + v12) * 0.5;
            goto LABEL_11;
          case 3:
            v10 = (float)(v10 + v12) * 0.5;
LABEL_11:
            v14 = &v16;
LABEL_12:
            *v14 = (float)(v13 + v11) * 0.5;
            break;
          default:
            break;
        }
        if ( v10 <= a2[2] && v12 >= *a2 && v15 <= a2[1] && v16 >= a2[3] )
          result = CQuadTreeNode::ForAllMatching();
      }
    }
  }
  return result;
}


// ============================================================

// Address: 0x40e136
// Original: _ZN13CQuadTreeNode14ForAllMatchingERK9CVector2DPFvS2_PvE
// Demangled: CQuadTreeNode::ForAllMatching(CVector2D const&,void (*)(CVector2D const&,void *))
int __fastcall CQuadTreeNode::ForAllMatching(int a1, float *a2, void (__fastcall *a3)(float *, _DWORD))
{
  _DWORD *i; // r6
  int result; // r0
  int v8; // r0
  int v9; // r1

  do
  {
    for ( i = *(_DWORD **)(a1 + 16); i; i = (_DWORD *)i[1] )
      a3(a2, *i);
    result = *(_DWORD *)(a1 + 36);
    if ( !result )
      break;
    v8 = 2;
    v9 = 3;
    if ( a2[1] >= (float)((float)(*(float *)(a1 + 12) + *(float *)(a1 + 4)) * 0.5) )
    {
      v8 = 0;
      v9 = 1;
    }
    if ( *a2 < (float)((float)(*(float *)a1 + *(float *)(a1 + 8)) * 0.5) )
      v9 = v8;
    result = a1 + 4 * v9;
    a1 = *(_DWORD *)(result + 20);
  }
  while ( a1 );
  return result;
}


// ============================================================

// Address: 0x40e1c4
// Original: _ZN13CQuadTreeNode10FindSectorERK5CRect
// Demangled: CQuadTreeNode::FindSector(CRect const&)
int __fastcall CQuadTreeNode::FindSector(int a1, float *a2)
{
  float v2; // s6
  int v3; // r2
  float v4; // s0
  int result; // r0

  if ( !*(_DWORD *)(a1 + 36) )
    return -1;
  v2 = (float)(*(float *)(a1 + 12) + *(float *)(a1 + 4)) * 0.5;
  if ( a2[1] < v2 )
  {
    v3 = 0;
    goto LABEL_6;
  }
  if ( a2[3] <= v2 )
    return -1;
  v3 = 1;
LABEL_6:
  v4 = (float)(*(float *)a1 + *(float *)(a1 + 8)) * 0.5;
  if ( a2[2] >= v4 )
  {
    if ( *a2 > v4 )
    {
      result = 3;
      if ( v3 )
        return 1;
    }
    else
    {
      return -1;
    }
  }
  else
  {
    result = 2;
    if ( v3 )
      return 0;
  }
  return result;
}


// ============================================================

// Address: 0x40e24c
// Original: _ZN13CQuadTreeNode7AddItemEPvRK5CRect
// Demangled: CQuadTreeNode::AddItem(void *,CRect const&)
float *__fastcall CQuadTreeNode::AddItem(int a1, unsigned int a2, float *a3)
{
  float *result; // r0
  int v7; // r5
  int v8; // r1
  float v9; // r2
  float v10; // r2
  float v11; // r2
  float v12; // s0
  float v13; // r3
  float v14; // s2
  float v15; // s8
  float v16; // s10
  float v17; // s8
  float v18; // s8
  int v19; // r12
  int *v20; // r12
  int v21; // t1
  float *v22; // r0
  _DWORD *v23; // r2
  int v24; // r1
  int v25; // r0
  int v26; // lr
  int v27; // r6
  int v28; // r3
  float v29; // [sp+0h] [bp-40h] BYREF
  float v30[15]; // [sp+4h] [bp-3Ch] BYREF

  result = *(float **)(a1 + 36);
  if ( result )
  {
    v7 = 0;
    while ( 1 )
    {
      v11 = *(float *)(a1 + 4);
      v12 = *(float *)a1;
      v30[0] = v11;
      v13 = *(float *)(a1 + 12);
      v14 = *(float *)(a1 + 8);
      v29 = v13;
      if ( result )
      {
        v15 = v14;
        v16 = v12;
        switch ( v7 )
        {
          case 0:
            v17 = v12 + v14;
            result = &v29;
            goto LABEL_12;
          case 1:
            v18 = v12 + v14;
            result = &v29;
            goto LABEL_14;
          case 2:
            v17 = v12 + v14;
            result = v30;
LABEL_12:
            v16 = v12;
            v15 = v17 * 0.5;
            goto LABEL_15;
          case 3:
            v18 = v12 + v14;
            result = v30;
LABEL_14:
            v16 = v18 * 0.5;
            v15 = v14;
LABEL_15:
            *result = (float)(v11 + v13) * 0.5;
            break;
          default:
            break;
        }
        if ( v16 <= a3[2] && v15 >= *a3 && v29 <= a3[1] && v30[0] >= a3[3] )
        {
          v19 = a1 + 4 * v7;
          v21 = *(_DWORD *)(v19 + 20);
          v20 = (int *)(v19 + 20);
          if ( !v21 )
          {
            v29 = v13;
            v30[0] = v11;
            switch ( v7 )
            {
              case 0:
                v22 = &v29;
                v14 = (float)(v12 + v14) * 0.5;
                goto LABEL_27;
              case 1:
                v22 = &v29;
                v12 = (float)(v12 + v14) * 0.5;
                goto LABEL_27;
              case 2:
                v14 = (float)(v12 + v14) * 0.5;
                goto LABEL_26;
              case 3:
                v12 = (float)(v12 + v14) * 0.5;
LABEL_26:
                v22 = v30;
LABEL_27:
                *v22 = (float)(v11 + v13) * 0.5;
                break;
              default:
                break;
            }
            v23 = (_DWORD *)CQuadTreeNode::ms_pQuadTreeNodePool;
            v24 = 0;
            v25 = *(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 12);
            v26 = *(_DWORD *)(CQuadTreeNode::ms_pQuadTreeNodePool + 8);
            do
            {
              v23[3] = ++v25;
              if ( v25 == v26 )
              {
                v25 = 0;
                v23[3] = 0;
                if ( v24 << 31 )
                  goto LABEL_3;
                v24 = 1;
              }
              v27 = v23[1];
              v28 = *(char *)(v27 + v25);
            }
            while ( v28 > -1 );
            *(_BYTE *)(v27 + v25) = v28 & 0x7F;
            *(_BYTE *)(v23[1] + v23[3]) = (*(_BYTE *)(v23[1] + v23[3]) + 1) & 0x7F | *(_BYTE *)(v23[1] + v23[3]) & 0x80;
            v25 = *v23 + 40 * v23[3];
LABEL_3:
            v8 = *(_DWORD *)(a1 + 36);
            *(float *)v25 = v12;
            v9 = v30[0];
            *(float *)(v25 + 8) = v14;
            *(float *)(v25 + 4) = v9;
            v10 = v29;
            *(_QWORD *)(v25 + 20) = 0LL;
            *(_QWORD *)(v25 + 28) = 0LL;
            *(float *)(v25 + 12) = v10;
            *(_DWORD *)(v25 + 16) = 0;
            *(_DWORD *)(v25 + 36) = v8 - 1;
            *v20 = v25;
          }
          result = (float *)CQuadTreeNode::AddItem();
        }
      }
      if ( ++v7 == 4 )
        break;
      result = *(float **)(a1 + 36);
    }
  }
  else
  {
    result = (float *)CPtrNodeSingleLink::operator new((CPtrNodeSingleLink *)byte_8, a2);
    *(_DWORD *)result = a2;
    result[1] = *(float *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = result;
  }
  return result;
}


// ============================================================

// Address: 0x40e428
// Original: _ZN13CQuadTreeNode10DeleteItemEPv
// Demangled: CQuadTreeNode::DeleteItem(void *)
_DWORD *__fastcall CQuadTreeNode::DeleteItem(_DWORD *this, void *a2)
{
  _DWORD *v2; // r5
  void *v3; // r4
  void **v4; // r1
  void **v5; // r0
  void **v6; // r2
  void **v7; // r3
  void **v8; // r0
  CQuadTreeNode *v9; // r0
  CQuadTreeNode *v10; // r0
  CQuadTreeNode *v11; // r0

  while ( 1 )
  {
    v2 = this;
    v3 = a2;
    v4 = (void **)this[4];
    if ( v4 )
    {
      v5 = (void **)this[4];
      while ( *v5 != v3 )
      {
        v5 = (void **)v5[1];
        if ( !v5 )
          goto LABEL_16;
      }
      v6 = 0;
      v7 = v4;
      while ( 1 )
      {
        v8 = v7;
        if ( *v7 == v3 )
          break;
        v7 = (void **)v7[1];
        v6 = v8;
        if ( !v7 )
          goto LABEL_16;
      }
      if ( v4 == v7 )
      {
        v2[4] = v4[1];
      }
      else if ( v6 )
      {
        v6[1] = v7[1];
      }
      CPtrNodeSingleLink::operator delete(v7);
    }
LABEL_16:
    v9 = (CQuadTreeNode *)v2[5];
    if ( v9 )
      CQuadTreeNode::DeleteItem(v9, v3);
    v10 = (CQuadTreeNode *)v2[6];
    if ( v10 )
      CQuadTreeNode::DeleteItem(v10, v3);
    v11 = (CQuadTreeNode *)v2[7];
    if ( v11 )
      CQuadTreeNode::DeleteItem(v11, v3);
    this = (_DWORD *)v2[8];
    if ( !this )
      return this;
    a2 = v3;
  }
}


// ============================================================

// Address: 0x40e4a4
// Original: _ZN13CQuadTreeNode10DeleteItemEPvRK5CRect
// Demangled: CQuadTreeNode::DeleteItem(void *,CRect const&)
float *__fastcall CQuadTreeNode::DeleteItem(int a1, int a2, float *a3)
{
  _DWORD *v5; // r1
  _DWORD *v7; // r0
  _DWORD *v8; // r2
  _DWORD *v9; // r3
  _DWORD *v10; // r0
  int i; // r5
  float *result; // r0
  float v13; // s2
  float v14; // r1
  float v15; // s0
  float v16; // s4
  float v17; // [sp+0h] [bp-28h] BYREF
  float v18; // [sp+4h] [bp-24h] BYREF

  v5 = *(_DWORD **)(a1 + 16);
  if ( v5 )
  {
    v7 = *(_DWORD **)(a1 + 16);
    while ( *v7 != a2 )
    {
      v7 = (_DWORD *)v7[1];
      if ( !v7 )
        goto LABEL_16;
    }
    v8 = 0;
    v9 = v5;
    while ( 1 )
    {
      v10 = v9;
      if ( *v9 == a2 )
        break;
      v9 = (_DWORD *)v9[1];
      v8 = v10;
      if ( !v9 )
        goto LABEL_16;
    }
    if ( v5 == v9 )
    {
      *(_DWORD *)(a1 + 16) = v5[1];
    }
    else if ( v8 )
    {
      v8[1] = v9[1];
    }
    CPtrNodeSingleLink::operator delete(v9);
  }
LABEL_16:
  for ( i = 0; i != 4; ++i )
  {
    result = *(float **)(a1 + 4);
    v13 = *(float *)a1;
    v18 = *(float *)&result;
    v14 = *(float *)(a1 + 12);
    v15 = *(float *)(a1 + 8);
    v17 = v14;
    if ( *(_DWORD *)(a1 + 36) )
    {
      v16 = *(float *)&result;
      switch ( i )
      {
        case 0:
          result = &v17;
          v15 = (float)(v13 + v15) * 0.5;
          goto LABEL_24;
        case 1:
          result = &v17;
          v13 = (float)(v13 + v15) * 0.5;
          goto LABEL_24;
        case 2:
          v15 = (float)(v13 + v15) * 0.5;
          goto LABEL_23;
        case 3:
          v13 = (float)(v13 + v15) * 0.5;
LABEL_23:
          result = &v18;
LABEL_24:
          *result = (float)(v16 + v14) * 0.5;
          break;
        default:
          break;
      }
      if ( v13 <= a3[2] && v15 >= *a3 && v17 <= a3[1] && v18 >= a3[3] )
        result = (float *)CQuadTreeNode::DeleteItem();
    }
  }
  return result;
}


// ============================================================
