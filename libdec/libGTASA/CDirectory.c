
// Address: 0x18fcdc
// Original: j__ZN10CDirectory7AddItemERKNS_13DirectoryInfoE
// Demangled: CDirectory::AddItem(CDirectory::DirectoryInfo const&)
// attributes: thunk
int CDirectory::AddItem()
{
  return _ZN10CDirectory7AddItemERKNS_13DirectoryInfoE();
}


// ============================================================

// Address: 0x18fde4
// Original: j__ZN10CDirectory4InitEiPv
// Demangled: CDirectory::Init(int,void *)
// attributes: thunk
int __fastcall CDirectory::Init(CDirectory *this, int a2, void *a3)
{
  return _ZN10CDirectory4InitEiPv(this, a2, a3);
}


// ============================================================

// Address: 0x190198
// Original: j__ZN10CDirectory11ReadDirFileEPKc
// Demangled: CDirectory::ReadDirFile(char const*)
// attributes: thunk
int __fastcall CDirectory::ReadDirFile(CDirectory *this, CFileMgr *a2)
{
  return _ZN10CDirectory11ReadDirFileEPKc(this, a2);
}


// ============================================================

// Address: 0x193aa4
// Original: j__ZN10CDirectory8FindItemEPKcRjS2_
// Demangled: CDirectory::FindItem(char const*,uint &,uint &)
// attributes: thunk
int __fastcall CDirectory::FindItem(CDirectory *this, const char *a2, unsigned int *a3, unsigned int *a4)
{
  return _ZN10CDirectory8FindItemEPKcRjS2_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x196654
// Original: j__ZN10CDirectory8FindItemEjRjS0_
// Demangled: CDirectory::FindItem(uint,uint &,uint &)
// attributes: thunk
int __fastcall CDirectory::FindItem(CDirectory *this, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  return _ZN10CDirectory8FindItemEjRjS0_(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19868c
// Original: j__ZN10CDirectoryC2Ev
// Demangled: CDirectory::CDirectory(void)
// attributes: thunk
void __fastcall CDirectory::CDirectory(CDirectory *this)
{
  _ZN10CDirectoryC2Ev(this);
}


// ============================================================

// Address: 0x19b78c
// Original: j__ZN10CDirectoryC2Ei
// Demangled: CDirectory::CDirectory(int)
// attributes: thunk
void __fastcall CDirectory::CDirectory(CDirectory *this, int a2)
{
  _ZN10CDirectoryC2Ei(this, a2);
}


// ============================================================

// Address: 0x1a116c
// Original: j__ZN10CDirectoryD2Ev
// Demangled: CDirectory::~CDirectory()
// attributes: thunk
void __fastcall CDirectory::~CDirectory(CDirectory *this)
{
  _ZN10CDirectoryD2Ev(this);
}


// ============================================================

// Address: 0x3eab24
// Original: _ZN10CDirectoryC2Ev
// Demangled: CDirectory::CDirectory(void)
void __fastcall CDirectory::CDirectory(CDirectory *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


// ============================================================

// Address: 0x3eab2e
// Original: _ZN10CDirectoryC2Ei
// Demangled: CDirectory::CDirectory(int)
void __fastcall CDirectory::CDirectory(CDirectory *this, unsigned int a2)
{
  unsigned int v3; // r0
  int v4; // r2

  v4 = (unsigned __int64)a2 >> 27;
  v3 = 32 * a2;
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = 0;
  if ( !is_mul_ok(0x20u, a2) )
    v4 = 1;
  if ( v4 )
    v3 = -1;
  *(_DWORD *)this = operator new[](v3);
  *((_BYTE *)this + 12) = 1;
}


// ============================================================

// Address: 0x3eab5c
// Original: _ZN10CDirectoryD2Ev
// Demangled: CDirectory::~CDirectory()
void __fastcall CDirectory::~CDirectory(CDirectory *this)
{
  void *v2; // r0

  v2 = *(void **)this;
  if ( v2 )
  {
    if ( *((_BYTE *)this + 12) )
      operator delete[](v2);
  }
}


// ============================================================

// Address: 0x3eab74
// Original: _ZN10CDirectory4InitEiPv
// Demangled: CDirectory::Init(int,void *)
int __fastcall CDirectory::Init(int this, int a2, void *a3)
{
  *(_DWORD *)this = a3;
  *(_DWORD *)(this + 4) = a2;
  *(_DWORD *)(this + 8) = 0;
  *(_BYTE *)(this + 12) = 0;
  return this;
}


// ============================================================

// Address: 0x3eab80
// Original: _ZN10CDirectory7AddItemERKNS_13DirectoryInfoE
// Demangled: CDirectory::AddItem(CDirectory::DirectoryInfo const&)
_QWORD *__fastcall CDirectory::AddItem(int a1, __int64 *a2)
{
  __int64 v2; // kr00_8
  __int64 *v3; // r1
  __int64 v4; // d16
  __int64 v5; // d17
  _QWORD *v6; // r0
  __int64 v7; // d18
  __int64 v8; // d19
  _QWORD *result; // r0

  v2 = *(_QWORD *)(a1 + 4);
  if ( SHIDWORD(v2) >= (int)v2 )
    return (_QWORD *)sub_19D888("Too many objects without modelinfo structures");
  *(_DWORD *)(a1 + 8) = HIDWORD(v2) + 1;
  v4 = *a2;
  v5 = a2[1];
  v3 = a2 + 2;
  v6 = (_QWORD *)(*(_DWORD *)a1 + 32 * HIDWORD(v2));
  v7 = *v3;
  v8 = v3[1];
  *v6 = v4;
  v6[1] = v5;
  result = v6 + 2;
  *result = v7;
  result[1] = v8;
  return result;
}


// ============================================================

// Address: 0x3eabb0
// Original: _ZN10CDirectory11ReadDirFileEPKc
// Demangled: CDirectory::ReadDirFile(char const*)
int __fastcall CDirectory::ReadDirFile(CDirectory *this, CFileMgr *a2)
{
  CFileMgr *v3; // r5
  int v4; // r3
  bool v5; // zf
  unsigned int i; // r1
  __int64 v7; // kr00_8
  __int64 v8; // d17
  _QWORD *v9; // r0
  __int64 v10; // d18
  __int64 v11; // d19
  int ptr; // [sp+4h] [bp-44h] BYREF
  int v14; // [sp+8h] [bp-40h] BYREF
  char v15; // [sp+Ch] [bp-3Ch]
  _QWORD v16[4]; // [sp+10h] [bp-38h] BYREF
  int v17; // [sp+34h] [bp-14h]

  v3 = (CFileMgr *)CFileMgr::OpenFile(a2, (const char *)&dword_3EAC68, (const char *)&dword_3EAC68);
  v15 = 0;
  v14 = 0;
  CFileMgr::ReadBytes(v3, (unsigned int)&v14, &byte_4, v4);
  OS_FileRead(v3, &ptr, 4u);
  v5 = ptr == 0;
  for ( i = --ptr; !v5; --ptr )
  {
    OS_FileRead(v3, v16, 0x20u);
    v7 = *(_QWORD *)((char *)this + 4);
    if ( SHIDWORD(v7) >= (int)v7 )
    {
      puts("Too many objects without modelinfo structures");
    }
    else
    {
      *((_DWORD *)this + 2) = HIDWORD(v7) + 1;
      v8 = v16[1];
      v9 = (_QWORD *)(*(_DWORD *)this + 32 * HIDWORD(v7));
      v10 = v16[2];
      v11 = v16[3];
      *v9 = v16[0];
      v9[1] = v8;
      v9 += 2;
      *v9 = v10;
      v9[1] = v11;
    }
    v5 = ptr == 0;
    i = ptr - 1;
  }
  CFileMgr::CloseFile(v3, i);
  return _stack_chk_guard - v17;
}


// ============================================================

// Address: 0x3eac74
// Original: _ZN10CDirectory12WriteDirFileEPKc
// Demangled: CDirectory::WriteDirFile(char const*)
bool __fastcall CDirectory::WriteDirFile(CDirectory *this, CFileMgr *a2)
{
  CFileMgr *v3; // r5
  int v4; // r3
  int v5; // r6
  unsigned int v6; // r1

  v3 = (CFileMgr *)CFileMgr::OpenFileForWriting(a2, (const char *)a2);
  v5 = CFileMgr::Write(v3, *(_DWORD *)this, (char *)(32 * *((_DWORD *)this + 2)), v4);
  CFileMgr::CloseFile(v3, v6);
  return v5 == 32 * *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x3eacac
// Original: _ZN10CDirectory8FindItemEPKc
// Demangled: CDirectory::FindItem(char const*)
int __fastcall CDirectory::FindItem(CDirectory *this, const char *a2)
{
  int v2; // r6
  int v4; // r4
  int v5; // r5

  v2 = *((_DWORD *)this + 2);
  if ( v2 < 1 )
    return 0;
  v4 = *(_DWORD *)this;
  v5 = 0;
  while ( strcasecmp((const char *)(v4 + 8), a2) )
  {
    ++v5;
    v4 += 32;
    if ( v5 >= v2 )
      return 0;
  }
  return v4;
}


// ============================================================

// Address: 0x3eacde
// Original: _ZN10CDirectory8FindItemEPKcRjS2_
// Demangled: CDirectory::FindItem(char const*,uint &,uint &)
int __fastcall CDirectory::FindItem(CDirectory *this, const char *a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // r5
  int v8; // r6
  char *i; // r4

  v4 = *((_DWORD *)this + 2);
  if ( v4 < 1 )
    return 0;
  v8 = 0;
  for ( i = (char *)(*(_DWORD *)this + 4); strcasecmp(i + 4, a2); i += 32 )
  {
    if ( ++v8 >= v4 )
      return 0;
  }
  if ( i == &byte_4 )
    return 0;
  *a4 = *(unsigned __int16 *)i;
  *a3 = *((_DWORD *)i - 1);
  return 1;
}


// ============================================================

// Address: 0x3ead2e
// Original: _ZN10CDirectory8FindItemEjRjS0_
// Demangled: CDirectory::FindItem(uint,uint &,uint &)
int __fastcall CDirectory::FindItem(CDirectory *this, const char *a2, unsigned int *a3, unsigned int *a4)
{
  int v8; // r5
  int v9; // r4

  if ( *((int *)this + 2) < 1 )
    return 0;
  v8 = 0;
  v9 = 0;
  while ( (const char *)CKeyGen::GetUppercaseKey((CKeyGen *)(*(_DWORD *)this + v8 + 8), a2) != a2 )
  {
    ++v9;
    v8 += 32;
    if ( v9 >= *((_DWORD *)this + 2) )
      return 0;
  }
  *a4 = *(unsigned __int16 *)(*(_DWORD *)this + v8 + 4);
  *a3 = *(_DWORD *)(*(_DWORD *)this + v8);
  return 1;
}


// ============================================================
