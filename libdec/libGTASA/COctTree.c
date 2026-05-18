
// Address: 0x18abe8
// Original: j__ZN8COctTree10ReduceTreeEv
// Demangled: COctTree::ReduceTree(void)
// attributes: thunk
int __fastcall COctTree::ReduceTree(COctTree *this)
{
  return _ZN8COctTree10ReduceTreeEv(this);
}


// ============================================================

// Address: 0x18db10
// Original: j__ZN8COctTree10InsertTreeEhhh
// Demangled: COctTree::InsertTree(uchar,uchar,uchar)
// attributes: thunk
int __fastcall COctTree::InsertTree(COctTree *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  return _ZN8COctTree10InsertTreeEhhh(this, a2, a3, a4);
}


// ============================================================

// Address: 0x18fb50
// Original: j__ZN8COctTreeD2Ev
// Demangled: COctTree::~COctTree()
// attributes: thunk
void __fastcall COctTree::~COctTree(COctTree *this)
{
  _ZN8COctTreeD2Ev(this);
}


// ============================================================

// Address: 0x19058c
// Original: j__ZN8COctTree8InitPoolEPvi
// Demangled: COctTree::InitPool(void *,int)
// attributes: thunk
int __fastcall COctTree::InitPool(COctTree *this, void *a2, int a3)
{
  return _ZN8COctTree8InitPoolEPvi(this, a2, a3);
}


// ============================================================

// Address: 0x19289c
// Original: j__ZN8COctTree17FindNearestColourEhhh
// Demangled: COctTree::FindNearestColour(uchar,uchar,uchar)
// attributes: thunk
int __fastcall COctTree::FindNearestColour(COctTree *this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  return _ZN8COctTree17FindNearestColourEhhh(this, a2, a3, a4);
}


// ============================================================

// Address: 0x195270
// Original: j__ZN8COctTree12ShutdownPoolEv
// Demangled: COctTree::ShutdownPool(void)
// attributes: thunk
int __fastcall COctTree::ShutdownPool(COctTree *this)
{
  return _ZN8COctTree12ShutdownPoolEv(this);
}


// ============================================================

// Address: 0x45be90
// Original: _ZN8COctTreeC2Ev
// Demangled: COctTree::COctTree(void)
void __fastcall COctTree::COctTree(COctTree *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)((char *)this + 10) = -1;
  *(_DWORD *)((char *)this + 22) = -1;
  *(_DWORD *)((char *)this + 18) = -1;
  *(_DWORD *)((char *)this + 14) = -1;
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_667F78;
}


// ============================================================

// Address: 0x45bec0
// Original: _ZN8COctTreeD2Ev
// Demangled: COctTree::~COctTree()
void __fastcall COctTree::~COctTree(COctTree *this)
{
  int v2; // r5
  int v3; // r0
  COctTree *v4; // r0
  int v5; // r0
  int v6; // r0

  v2 = 5;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_QWORD *)this = (unsigned int)&off_667F78;
  do
  {
    v3 = *((__int16 *)this + v2);
    if ( v3 > -1 )
    {
      if ( *(char *)(dword_9ABF44 + v3) >= 0 )
      {
        v4 = (COctTree *)(dword_9ABF40 + 40 * v3);
        if ( v4 )
        {
          COctTree::~COctTree(v4);
          v6 = -858993459 * ((v5 - dword_9ABF40) >> 3);
          *(_BYTE *)(dword_9ABF44 + v6) |= 0x80u;
          if ( v6 < dword_9ABF4C )
            dword_9ABF4C = v6;
        }
      }
      *((_WORD *)this + v2) = -1;
    }
    ++v2;
  }
  while ( v2 != 13 );
  *((_BYTE *)this + 8) = 0;
}


// ============================================================

// Address: 0x45bf74
// Original: _ZN8COctTree5emptyEv
// Demangled: COctTree::empty(void)
int __fastcall COctTree::empty(COctTree *this)
{
  char *v2; // r6
  int v3; // r5
  int v4; // r0
  COctTree *v5; // r0
  int v6; // r0
  int v7; // r0
  int result; // r0

  v2 = (char *)this + 10;
  v3 = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  do
  {
    v4 = *(__int16 *)&v2[2 * v3];
    if ( v4 > -1 )
    {
      if ( *(char *)(dword_9ABF44 + v4) >= 0 )
      {
        v5 = (COctTree *)(dword_9ABF40 + 40 * v4);
        if ( v5 )
        {
          COctTree::~COctTree(v5);
          v7 = -858993459 * ((v6 - dword_9ABF40) >> 3);
          *(_BYTE *)(dword_9ABF44 + v7) |= 0x80u;
          if ( v7 < dword_9ABF4C )
            dword_9ABF4C = v7;
        }
      }
      *(_WORD *)&v2[2 * v3] = -1;
    }
    ++v3;
  }
  while ( v3 != 8 );
  result = 0;
  *((_BYTE *)this + 8) = 0;
  return result;
}


// ============================================================

// Address: 0x45c01c
// Original: _ZN8COctTreenwEj
// Demangled: COctTree::operator new(uint)
int __fastcall COctTree::operator new(COctTree *this, unsigned int a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r5

  v2 = 0;
  result = dword_9ABF4C;
  do
  {
    dword_9ABF4C = ++result;
    if ( result == dword_9ABF48 )
    {
      result = 0;
      dword_9ABF4C = 0;
      if ( v2 << 31 )
        return result;
      v2 = 1;
    }
    v4 = *(char *)(dword_9ABF44 + result);
  }
  while ( v4 > -1 );
  *(_BYTE *)(dword_9ABF44 + result) = v4 & 0x7F;
  *(_BYTE *)(dword_9ABF44 + dword_9ABF4C) = (*(_BYTE *)(dword_9ABF44 + dword_9ABF4C) + 1) & 0x7F | *(_BYTE *)(dword_9ABF44 + dword_9ABF4C) & 0x80;
  return dword_9ABF40 + 40 * dword_9ABF4C;
}


// ============================================================

// Address: 0x45c09c
// Original: _ZN8COctTreedlEPv
// Demangled: COctTree::operator delete(void *)
void __fastcall COctTree::operator delete(int a1)
{
  int v1; // r0

  v1 = -858993459 * ((a1 - dword_9ABF40) >> 3);
  *(_BYTE *)(dword_9ABF44 + v1) |= 0x80u;
  if ( v1 < dword_9ABF4C )
    dword_9ABF4C = v1;
}


// ============================================================

// Address: 0x45c0d4
// Original: _ZN8COctTree8InitPoolEPvi
// Demangled: COctTree::InitPool(void *,int)
int *__fastcall COctTree::InitPool(COctTree *this, unsigned int a2, int a3)
{
  unsigned int v3; // r2
  int v4; // r0
  int *result; // r0

  byte_9ABF50 = 0;
  v3 = a2 / 0x29;
  dword_9ABF40 = (int)this;
  dword_9ABF44 = (int)this + 40 * (a2 / 0x29);
  dword_9ABF48 = a2 / 0x29;
  dword_9ABF4C = -1;
  if ( a2 >= 0x29 )
  {
    *((_BYTE *)this + 40 * v3) |= 0x80u;
    *(_BYTE *)dword_9ABF44 &= 0x80u;
    if ( a2 - 41 >= 0x29 )
    {
      v4 = 1;
      do
      {
        *(_BYTE *)(dword_9ABF44 + v4) |= 0x80u;
        *(_BYTE *)(dword_9ABF44 + v4++) &= 0x80u;
      }
      while ( v3 != v4 );
    }
  }
  result = &dword_9ABF40;
  byte_9ABF51 = 1;
  return result;
}


// ============================================================

// Address: 0x45c164
// Original: _ZN8COctTree12ShutdownPoolEv
// Demangled: COctTree::ShutdownPool(void)
int *__fastcall COctTree::ShutdownPool(COctTree *this)
{
  int *result; // r0

  result = (int *)dword_9ABF48;
  if ( dword_9ABF48 >= 1 )
  {
    if ( byte_9ABF50 )
    {
      if ( dword_9ABF40 )
        operator delete[]((void *)dword_9ABF40);
      if ( dword_9ABF44 )
        operator delete[]((void *)dword_9ABF44);
    }
    result = &dword_9ABF40;
    *(_QWORD *)&dword_9ABF40 = 0LL;
    *(_QWORD *)&dword_9ABF48 = 0LL;
  }
  return result;
}


// ============================================================

// Address: 0x45c1c0
// Original: _ZN8COctTree14RemoveChildrenEv
// Demangled: COctTree::RemoveChildren(void)
int __fastcall COctTree::RemoveChildren(COctTree *this)
{
  char *v1; // r4
  int i; // r5
  int result; // r0
  int v4; // r0

  v1 = (char *)this + 10;
  for ( i = 0; i != 8; ++i )
  {
    result = *(__int16 *)&v1[2 * i];
    if ( result > -1 )
    {
      if ( *(char *)(dword_9ABF44 + result) >= 0 )
      {
        result = dword_9ABF40 + 40 * result;
        if ( result )
        {
          COctTree::~COctTree((COctTree *)result);
          result = -858993459 * ((v4 - dword_9ABF40) >> 3);
          *(_BYTE *)(dword_9ABF44 + result) |= 0x80u;
          if ( result < dword_9ABF4C )
            dword_9ABF4C = result;
        }
      }
      *(_WORD *)&v1[2 * i] = -1;
    }
  }
  return result;
}


// ============================================================

// Address: 0x45c258
// Original: _ZN8COctTree12NoOfChildrenEv
// Demangled: COctTree::NoOfChildren(void)
int __fastcall COctTree::NoOfChildren(COctTree *this)
{
  return ((*((unsigned __int16 *)this + 11) >> 15) ^ 1)
       + (unsigned __int16)((*((_WORD *)this + 8) >= 0)
                          + (*((_WORD *)this + 6) >= 0)
                          + (*((_WORD *)this + 5) >= 0)
                          + (*((_WORD *)this + 7) >= 0)
                          + (*((_WORD *)this + 9) >= 0)
                          + (*((_WORD *)this + 10) >= 0))
       + ((*((unsigned __int16 *)this + 12) >> 15) ^ 1);
}


// ============================================================

// Address: 0x45c2a4
// Original: _ZN8COctTree10ReduceTreeEv
// Demangled: COctTree::ReduceTree(void)
int *__fastcall COctTree::ReduceTree(COctTree *this)
{
  int *result; // r0
  int v3; // r0
  COctTree *v4; // r5
  int v5; // r8
  int v6; // r6
  int v7; // r0
  COctTree *v8; // r5
  int v9; // r0
  COctTree *v10; // r5
  int v11; // r0
  COctTree *v12; // r5
  int v13; // r0
  COctTree *v14; // r5
  int v15; // r0
  COctTree *v16; // r5
  int v17; // r0
  COctTree *v18; // r5
  int v19; // r0
  COctTree *v20; // r5

  result = (int *)*((unsigned __int8 *)this + 8);
  if ( !result )
  {
    ++COctTree::ms_level;
    v3 = *((__int16 *)this + 5);
    if ( v3 < 0 )
    {
      v5 = 0;
      v6 = 0;
    }
    else
    {
      v4 = (COctTree *)(dword_9ABF40 + 40 * v3);
      if ( *(char *)(dword_9ABF44 + v3) < 0 )
        v4 = 0;
      COctTree::ReduceTree(v4);
      v5 = *(_DWORD *)&byte_4[(_DWORD)v4];
      v6 = 1;
    }
    v7 = *((__int16 *)this + 6);
    if ( v7 > -1 )
    {
      v8 = (COctTree *)(dword_9ABF40 + 40 * v7);
      if ( *(char *)(dword_9ABF44 + v7) < 0 )
        v8 = 0;
      COctTree::ReduceTree(v8);
      ++v6;
      v5 += *(_DWORD *)&byte_4[(_DWORD)v8];
    }
    v9 = *((__int16 *)this + 7);
    if ( v9 > -1 )
    {
      v10 = (COctTree *)(dword_9ABF40 + 40 * v9);
      if ( *(char *)(dword_9ABF44 + v9) < 0 )
        v10 = 0;
      COctTree::ReduceTree(v10);
      ++v6;
      v5 += *(_DWORD *)&byte_4[(_DWORD)v10];
    }
    v11 = *((__int16 *)this + 8);
    if ( v11 > -1 )
    {
      v12 = (COctTree *)(dword_9ABF40 + 40 * v11);
      if ( *(char *)(dword_9ABF44 + v11) < 0 )
        v12 = 0;
      COctTree::ReduceTree(v12);
      ++v6;
      v5 += *(_DWORD *)&byte_4[(_DWORD)v12];
    }
    v13 = *((__int16 *)this + 9);
    if ( v13 > -1 )
    {
      v14 = (COctTree *)(dword_9ABF40 + 40 * v13);
      if ( *(char *)(dword_9ABF44 + v13) < 0 )
        v14 = 0;
      COctTree::ReduceTree(v14);
      ++v6;
      v5 += *(_DWORD *)&byte_4[(_DWORD)v14];
    }
    v15 = *((__int16 *)this + 10);
    if ( v15 > -1 )
    {
      v16 = (COctTree *)(dword_9ABF40 + 40 * v15);
      if ( *(char *)(dword_9ABF44 + v15) < 0 )
        v16 = 0;
      COctTree::ReduceTree(v16);
      ++v6;
      v5 += *(_DWORD *)&byte_4[(_DWORD)v16];
    }
    v17 = *((__int16 *)this + 11);
    if ( v17 > -1 )
    {
      v18 = (COctTree *)(dword_9ABF40 + 40 * v17);
      if ( *(char *)(dword_9ABF44 + v17) < 0 )
        v18 = 0;
      COctTree::ReduceTree(v18);
      ++v6;
      v5 += *(_DWORD *)&byte_4[(_DWORD)v18];
    }
    v19 = *((__int16 *)this + 12);
    if ( v19 > -1 )
    {
      v20 = (COctTree *)(dword_9ABF40 + 40 * v19);
      if ( *(char *)(dword_9ABF44 + v19) < 0 )
        v20 = 0;
      COctTree::ReduceTree(v20);
      ++v6;
      v5 += *(_DWORD *)&byte_4[(_DWORD)v20];
    }
    if ( v6 >= 2 && (v5 < dword_9ABF54 || !dword_9ABF58) )
    {
      dword_9ABF58 = (int)this;
      dword_9ABF54 = v5;
    }
    result = &COctTree::ms_level;
    --COctTree::ms_level;
  }
  return result;
}


// ============================================================

// Address: 0x45c4a0
// Original: _ZN8COctTree10InsertTreeEhhh
// Demangled: COctTree::InsertTree(uchar,uchar,uchar)
int __fastcall COctTree::InsertTree(COctTree *this, int a2, int a3, int a4)
{
  char v5; // lr
  int v6; // r12
  bool v7; // zf
  __int64 v8; // kr00_8
  int v9; // r5
  int v10; // r6
  char *v11; // r5
  int v12; // r0
  COctTree *v13; // r0
  int v14; // r0
  int v15; // r0
  int result; // r0
  char *v17; // r9
  int v18; // r0
  _WORD *v19; // r9
  int v20; // t1
  int v21; // r4
  int v22; // r6
  int v23; // r0
  int v24; // r0

  v5 = COctTree::ms_level++;
  v6 = *((_DWORD *)this + 1);
  v7 = COctTree::ms_level == 8;
  v8 = *(_QWORD *)((char *)this + 28);
  v9 = *((_DWORD *)this + 9);
  *((_DWORD *)this + 7) = v8 + a2;
  *((_DWORD *)this + 8) = HIDWORD(v8) + a3;
  *((_DWORD *)this + 9) = v9 + a4;
  *((_DWORD *)this + 1) = v6 + 1;
  if ( !v7 && !*((_BYTE *)this + 8) )
  {
    v17 = (char *)this
        + 2
        * (((unsigned int)(a2 << v5) >> 5) & 4 | ((unsigned int)(a3 << v5) >> 6) & 2 | ((unsigned int)(a4 << v5) >> 7) & 1);
    v20 = *((__int16 *)v17 + 5);
    v19 = v17 + 10;
    v18 = v20;
    if ( v20 <= -1 )
    {
      v22 = 0;
      v21 = dword_9ABF4C;
      do
      {
        dword_9ABF4C = ++v21;
        if ( v21 == dword_9ABF48 )
        {
          v21 = 0;
          dword_9ABF4C = 0;
          if ( v22 << 31 )
            goto LABEL_23;
          v22 = 1;
        }
        v23 = *(char *)(dword_9ABF44 + v21);
      }
      while ( v23 > -1 );
      *(_BYTE *)(dword_9ABF44 + v21) = v23 & 0x7F;
      *(_BYTE *)(dword_9ABF44 + dword_9ABF4C) = *(_BYTE *)(dword_9ABF44 + dword_9ABF4C) & 0x80 | (*(_BYTE *)(dword_9ABF44 + dword_9ABF4C)
                                                                                                + 1) & 0x7F;
      v21 = dword_9ABF40 + 40 * dword_9ABF4C;
LABEL_23:
      *(_DWORD *)(v21 + 4) = 0;
      *(_DWORD *)(v21 + 28) = 0;
      *(_DWORD *)(v21 + 32) = 0;
      *(_DWORD *)(v21 + 36) = 0;
      *(_DWORD *)(v21 + 10) = -1;
      *(_DWORD *)(v21 + 22) = -1;
      *(_DWORD *)(v21 + 18) = -1;
      *(_DWORD *)(v21 + 14) = -1;
      *(_BYTE *)(v21 + 8) = 0;
      *(_DWORD *)v21 = &off_667F78;
      if ( !v21 )
      {
        COctTree::ms_bFailed = 1;
        return 0;
      }
      *v19 = -13107 * ((unsigned int)(v21 - dword_9ABF40) >> 3);
    }
    else if ( *(char *)(dword_9ABF44 + v18) < 0 )
    {
      v21 = 0;
    }
    else
    {
      v21 = dword_9ABF40 + 40 * v18;
    }
    result = (**(int (__fastcall ***)(int))v21)(v21);
    if ( !COctTree::ms_bFailed || *(int *)(v21 + 4) > 1 )
      return result;
    COctTree::~COctTree((COctTree *)v21);
    v24 = -858993459 * ((v21 - dword_9ABF40) >> 3);
    *(_BYTE *)(dword_9ABF44 + v24) = *(_BYTE *)(dword_9ABF44 - 858993459 * ((v21 - dword_9ABF40) >> 3)) | 0x80;
    if ( v24 < dword_9ABF4C )
      dword_9ABF4C = v24;
    *v19 = -1;
    return 0;
  }
  v10 = 0;
  v11 = (char *)this + 10;
  COctTree::ms_level = 0;
  *((_BYTE *)this + 8) = 1;
  do
  {
    v12 = *(__int16 *)&v11[2 * v10];
    if ( v12 > -1 )
    {
      if ( *(char *)(dword_9ABF44 + v12) >= 0 )
      {
        v13 = (COctTree *)(dword_9ABF40 + 40 * v12);
        if ( v13 )
        {
          COctTree::~COctTree(v13);
          v15 = -858993459 * ((v14 - dword_9ABF40) >> 3);
          *(_BYTE *)(dword_9ABF44 + v15) |= 0x80u;
          if ( v15 < dword_9ABF4C )
            dword_9ABF4C = v15;
        }
      }
      *(_WORD *)&v11[2 * v10] = -1;
    }
    ++v10;
  }
  while ( v10 != 8 );
  result = *((_DWORD *)this + 1);
  if ( result != 1 )
    return 0;
  return result;
}


// ============================================================

// Address: 0x45c72c
// Original: _ZN8COctTree11FillPaletteEPh
// Demangled: COctTree::FillPalette(uchar *)
int __fastcall COctTree::FillPalette(COctTree *this, unsigned __int8 *a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0

  if ( *((_BYTE *)this + 8) )
  {
    result = (int)&COctTree::ms_level;
    a2[4 * COctTree::ms_level] = (unsigned int)(float)((float)*((unsigned int *)this + 7) / (float)*((int *)this + 1));
    a2[4 * COctTree::ms_level + 1] = (unsigned int)(float)((float)*((unsigned int *)this + 8) / (float)*((int *)this + 1));
    a2[4 * COctTree::ms_level + 2] = (unsigned int)(float)((float)*((unsigned int *)this + 9) / (float)*((int *)this + 1));
    a2[4 * COctTree::ms_level + 3] = 0x80;
    v5 = COctTree::ms_level;
    *((_DWORD *)this + 1) = COctTree::ms_level;
    COctTree::ms_level = v5 + 1;
  }
  else
  {
    v6 = *((__int16 *)this + 5);
    if ( v6 > -1 )
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * v6) + 4))(
        dword_9ABF40 + 40 * v6,
        a2);
    v7 = *((__int16 *)this + 6);
    if ( v7 > -1 )
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * v7) + 4))(
        dword_9ABF40 + 40 * v7,
        a2);
    v8 = *((__int16 *)this + 7);
    if ( v8 > -1 )
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * v8) + 4))(
        dword_9ABF40 + 40 * v8,
        a2);
    v9 = *((__int16 *)this + 8);
    if ( v9 > -1 )
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * v9) + 4))(
        dword_9ABF40 + 40 * v9,
        a2);
    v10 = *((__int16 *)this + 9);
    if ( v10 > -1 )
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * v10) + 4))(
        dword_9ABF40 + 40 * v10,
        a2);
    v11 = *((__int16 *)this + 10);
    if ( v11 > -1 )
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * v11) + 4))(
        dword_9ABF40 + 40 * v11,
        a2);
    v12 = *((__int16 *)this + 11);
    if ( v12 > -1 )
      (*(void (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * v12) + 4))(
        dword_9ABF40 + 40 * v12,
        a2);
    result = *((__int16 *)this + 12);
    if ( result > -1 )
      return (*(int (__fastcall **)(int, unsigned __int8 *))(*(_DWORD *)(dword_9ABF40 + 40 * result) + 4))(
               dword_9ABF40 + 40 * result,
               a2);
  }
  return result;
}


// ============================================================

// Address: 0x45c8fc
// Original: _ZN8COctTree17FindNearestColourEhhh
// Demangled: COctTree::FindNearestColour(uchar,uchar,uchar)
int __fastcall COctTree::FindNearestColour(int this, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r4
  int v5; // r0
  int v6; // r4

  if ( !*(_BYTE *)(this + 8) )
  {
    do
    {
      v4 = (a3 >> 6) & 2 | (a4 >> 7) | (a2 >> 5) & 4;
      a4 *= 2;
      a3 *= 2;
      a2 *= 2;
      v5 = *(__int16 *)(this + 2 * v4 + 10);
      v6 = *(char *)(dword_9ABF44 + v5);
      this = dword_9ABF40 + 40 * v5;
      if ( v6 < 0 )
        this = 0;
    }
    while ( !byte_8[this] );
  }
  return *(_DWORD *)(this + 4);
}


// ============================================================
