
// Address: 0x18e1e4
// Original: j__ZN12COctTreeBase11FillPaletteEPh
// Demangled: COctTreeBase::FillPalette(uchar *)
// attributes: thunk
int __fastcall COctTreeBase::FillPalette(COctTreeBase *this, unsigned __int8 *a2)
{
  return _ZN12COctTreeBase11FillPaletteEPh(this, a2);
}


// ============================================================

// Address: 0x19254c
// Original: j__ZN12COctTreeBase6InsertEhhh
// Demangled: COctTreeBase::Insert(uchar,uchar,uchar)
// attributes: thunk
int __fastcall COctTreeBase::Insert(COctTreeBase *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  return _ZN12COctTreeBase6InsertEhhh(this, a2, a3, a4);
}


// ============================================================

// Address: 0x193a00
// Original: j__ZN12COctTreeBase14ReduceBranchesEi
// Demangled: COctTreeBase::ReduceBranches(int)
// attributes: thunk
int __fastcall COctTreeBase::ReduceBranches(COctTreeBase *this, int a2)
{
  return _ZN12COctTreeBase14ReduceBranchesEi(this, a2);
}


// ============================================================

// Address: 0x19a784
// Original: j__ZN12COctTreeBase4InitEi
// Demangled: COctTreeBase::Init(int)
// attributes: thunk
int __fastcall COctTreeBase::Init(COctTreeBase *this, int a2)
{
  return _ZN12COctTreeBase4InitEi(this, a2);
}


// ============================================================

// Address: 0x19b278
// Original: j__ZN12COctTreeBaseC2Ev
// Demangled: COctTreeBase::COctTreeBase(void)
// attributes: thunk
void __fastcall COctTreeBase::COctTreeBase(COctTreeBase *this)
{
  _ZN12COctTreeBaseC2Ev(this);
}


// ============================================================

// Address: 0x45c95c
// Original: _ZN12COctTreeBaseC2Ev
// Demangled: COctTreeBase::COctTreeBase(void)
void __fastcall COctTreeBase::COctTreeBase(COctTreeBase *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)((char *)this + 22) = -1;
  *(_DWORD *)((char *)this + 18) = -1;
  *(_DWORD *)((char *)this + 14) = -1;
  *(_DWORD *)((char *)this + 10) = -1;
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_667F88;
}


// ============================================================

// Address: 0x45c98c
// Original: _ZN12COctTreeBase4InitEi
// Demangled: COctTreeBase::Init(int)
int __fastcall COctTreeBase::Init(COctTreeBase *this, int a2)
{
  char *v3; // r6
  int v4; // r5
  int v5; // r0
  COctTree *v6; // r0
  int v7; // r0
  int v8; // r0
  int result; // r0

  v3 = (char *)this + 10;
  v4 = 0;
  COctTree::ms_level = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = a2;
  *((_DWORD *)this + 11) = 0;
  do
  {
    v5 = *(__int16 *)&v3[2 * v4];
    if ( v5 > -1 )
    {
      if ( *(char *)(dword_9ABF44 + v5) >= 0 )
      {
        v6 = (COctTree *)(dword_9ABF40 + 40 * v5);
        if ( v6 )
        {
          COctTree::~COctTree(v6);
          v8 = -858993459 * ((v7 - dword_9ABF40) >> 3);
          *(_BYTE *)(dword_9ABF44 + v8) |= 0x80u;
          if ( v8 < dword_9ABF4C )
            dword_9ABF4C = v8;
        }
      }
      *(_WORD *)&v3[2 * v4] = -1;
    }
    ++v4;
  }
  while ( v4 != 8 );
  result = 0;
  *((_BYTE *)this + 8) = 0;
  return result;
}


// ============================================================

// Address: 0x45ca44
// Original: _ZN12COctTreeBase10InsertTreeEhhh
// Demangled: COctTreeBase::InsertTree(uchar,uchar,uchar)
int __fastcall COctTreeBase::InsertTree(COctTreeBase *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v5; // r5

  v5 = 0;
  COctTree::ms_level = 0;
  if ( COctTree::InsertTree(this, a2, a3, a4) == 1 )
  {
    --*((_DWORD *)this + 10);
    return 1;
  }
  return v5;
}


// ============================================================

// Address: 0x45ca70
// Original: _ZN12COctTreeBase6InsertEhhh
// Demangled: COctTreeBase::Insert(uchar,uchar,uchar)
int __fastcall COctTreeBase::Insert(COctTreeBase *this, int a2, int a3, int a4)
{
  int *v4; // r4
  int v5; // r5
  int *v6; // r12
  int v7; // r4
  int v8; // r0
  COctTree *v9; // r0
  int v10; // r0
  int v11; // r0
  int *v12; // r9
  COctTree *v13; // r0
  int v14; // r4
  _WORD *v15; // r8
  int v16; // r0
  COctTree *v17; // r0
  int v18; // r0
  int v19; // r0

  v4 = (int *)this;
  while ( 1 )
  {
    COctTree::ms_bFailed = 0;
    if ( (*(int (__fastcall **)(int *, int, int, int))*v4)(v4, a2, a3, a4) == 1 )
      break;
    v5 = 0;
    if ( !COctTree::ms_bFailed )
      return v5;
    dword_9ABF58 = 0;
    COctTree::ReduceTree((COctTree *)v4);
    v6 = v4;
    v7 = dword_9ABF58 + 10;
    v6[10] = ((*(unsigned __int16 *)(dword_9ABF58 + 22) >> 15) ^ 1)
           + v6[10]
           + (unsigned __int16)((*(_WORD *)(dword_9ABF58 + 10) >= 0)
                              + (*(_WORD *)(dword_9ABF58 + 12) >= 0)
                              + (*(_WORD *)(dword_9ABF58 + 14) >= 0)
                              + (*(_WORD *)(dword_9ABF58 + 16) >= 0)
                              + (*(_WORD *)(dword_9ABF58 + 18) >= 0)
                              + (*(_WORD *)(dword_9ABF58 + 20) >= 0))
           + ((*(unsigned __int16 *)(dword_9ABF58 + 24) >> 15) ^ 1)
           - 1;
    *(_BYTE *)(v7 - 2) = 1;
    do
    {
      v8 = *(__int16 *)(v7 + 2 * v5);
      if ( v8 > -1 )
      {
        if ( *(char *)(dword_9ABF44 + v8) >= 0 )
        {
          v9 = (COctTree *)(dword_9ABF40 + 40 * v8);
          if ( v9 )
          {
            COctTree::~COctTree(v9);
            v11 = -858993459 * ((v10 - dword_9ABF40) >> 3);
            *(_BYTE *)(dword_9ABF44 + v11) |= 0x80u;
            if ( v11 < dword_9ABF4C )
              dword_9ABF4C = v11;
          }
        }
        *(_WORD *)(v7 + 2 * v5) = -1;
      }
      ++v5;
    }
    while ( v5 != 8 );
    v4 = (int *)this;
    if ( !COctTree::ms_bFailed )
      return 0;
  }
  v5 = 1;
  if ( v4[10] <= 0 )
  {
    v12 = v4;
    v13 = (COctTree *)v4;
    v14 = 0;
    dword_9ABF58 = 0;
    COctTree::ReduceTree(v13);
    v15 = (_WORD *)(dword_9ABF58 + 10);
    v12[10] = (((unsigned __int16)v15[6] >> 15) ^ 1)
            + v12[10]
            + (unsigned __int16)((*(_WORD *)(dword_9ABF58 + 10) >= 0)
                               + (v15[1] >= 0)
                               + (v15[2] >= 0)
                               + (v15[3] >= 0)
                               + (v15[4] >= 0)
                               + (v15[5] >= 0))
            + ((*(unsigned __int16 *)(dword_9ABF58 + 24) >> 15) ^ 1)
            - 1;
    *((_BYTE *)v15 - 2) = 1;
    do
    {
      v16 = (__int16)v15[v14];
      if ( v16 > -1 )
      {
        if ( *(char *)(dword_9ABF44 + v16) >= 0 )
        {
          v17 = (COctTree *)(dword_9ABF40 + 40 * v16);
          if ( v17 )
          {
            COctTree::~COctTree(v17);
            v19 = -858993459 * ((v18 - dword_9ABF40) >> 3);
            *(_BYTE *)(dword_9ABF44 + v19) |= 0x80u;
            if ( v19 < dword_9ABF4C )
              dword_9ABF4C = v19;
          }
        }
        v15[v14] = -1;
      }
      ++v14;
    }
    while ( v14 != 8 );
    return 1;
  }
  return v5;
}


// ============================================================

// Address: 0x45cccc
// Original: _ZN12COctTreeBase14ReduceBranchesEi
// Demangled: COctTreeBase::ReduceBranches(int)
int __fastcall COctTreeBase::ReduceBranches(COctTreeBase *this, int a2)
{
  COctTreeBase *v2; // r6
  int result; // r0
  int v4; // r2
  int v5; // r9
  _WORD *v6; // r10
  int v7; // r0
  COctTree *v8; // r0
  int v9; // r0
  int v10; // r0
  int *v11; // [sp+4h] [bp-24h]
  int v12; // [sp+8h] [bp-20h]

  v2 = this;
  v4 = *((_DWORD *)this + 11);
  result = *((_DWORD *)this + 10);
  if ( v4 )
    ++a2;
  v12 = a2;
  if ( result < a2 )
  {
    v11 = (int *)v2;
    do
    {
      v5 = 0;
      dword_9ABF58 = 0;
      COctTree::ReduceTree(v2);
      v6 = (_WORD *)(dword_9ABF58 + 10);
      *((_DWORD *)v2 + 10) = (((unsigned __int16)v6[6] >> 15) ^ 1)
                           + *((_DWORD *)v2 + 10)
                           + (unsigned __int16)((*(_WORD *)(dword_9ABF58 + 10) >= 0)
                                              + (v6[1] >= 0)
                                              + (v6[2] >= 0)
                                              + (v6[3] >= 0)
                                              + (v6[4] >= 0)
                                              + (v6[5] >= 0))
                           + ((*(unsigned __int16 *)(dword_9ABF58 + 24) >> 15) ^ 1)
                           - 1;
      *((_BYTE *)v6 - 2) = 1;
      do
      {
        v7 = (__int16)v6[v5];
        if ( v7 > -1 )
        {
          if ( *(char *)(dword_9ABF44 + v7) >= 0 )
          {
            v8 = (COctTree *)(dword_9ABF40 + 40 * v7);
            if ( v8 )
            {
              COctTree::~COctTree(v8);
              v10 = -858993459 * ((v9 - dword_9ABF40) >> 3);
              *(_BYTE *)(dword_9ABF44 + v10) |= 0x80u;
              if ( v10 < dword_9ABF4C )
                dword_9ABF4C = v10;
            }
          }
          v6[v5] = -1;
        }
        ++v5;
      }
      while ( v5 != 8 );
      v2 = (COctTreeBase *)v11;
      result = v11[10];
    }
    while ( result < v12 );
  }
  return result;
}


// ============================================================

// Address: 0x45cdf4
// Original: _ZN12COctTreeBase11FillPaletteEPh
// Demangled: COctTreeBase::FillPalette(uchar *)
int __fastcall COctTreeBase::FillPalette(COctTree *this, unsigned __int8 *a2)
{
  COctTree::ms_level = 0;
  if ( *((_DWORD *)this + 11) )
  {
    *(_DWORD *)a2 = 0;
    COctTree::ms_level = 1;
  }
  return COctTree::FillPalette(this, a2);
}


// ============================================================
