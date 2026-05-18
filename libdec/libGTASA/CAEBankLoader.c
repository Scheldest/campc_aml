
// Address: 0x18e808
// Original: j__ZN13CAEBankLoaderC2Ev
// Demangled: CAEBankLoader::CAEBankLoader(void)
// attributes: thunk
void __fastcall CAEBankLoader::CAEBankLoader(CAEBankLoader *this)
{
  _ZN13CAEBankLoaderC2Ev(this);
}


// ============================================================

// Address: 0x1920b4
// Original: j__ZN13CAEBankLoader20LoadSFXPakLookupFileEv
// Demangled: CAEBankLoader::LoadSFXPakLookupFile(void)
// attributes: thunk
int __fastcall CAEBankLoader::LoadSFXPakLookupFile(CAEBankLoader *this)
{
  return _ZN13CAEBankLoader20LoadSFXPakLookupFileEv(this);
}


// ============================================================

// Address: 0x193f20
// Original: j__ZN13CAEBankLoader13GetBankLookupEt
// Demangled: CAEBankLoader::GetBankLookup(ushort)
// attributes: thunk
int __fastcall CAEBankLoader::GetBankLookup(CAEBankLoader *this, unsigned __int16 a2)
{
  return _ZN13CAEBankLoader13GetBankLookupEt(this, a2);
}


// ============================================================

// Address: 0x195440
// Original: j__ZN13CAEBankLoader16LoadBankSlotFileEv
// Demangled: CAEBankLoader::LoadBankSlotFile(void)
// attributes: thunk
int __fastcall CAEBankLoader::LoadBankSlotFile(CAEBankLoader *this)
{
  return _ZN13CAEBankLoader16LoadBankSlotFileEv(this);
}


// ============================================================

// Address: 0x197e80
// Original: j__ZN13CAEBankLoader18LoadBankLookupFileEv
// Demangled: CAEBankLoader::LoadBankLookupFile(void)
// attributes: thunk
int __fastcall CAEBankLoader::LoadBankLookupFile(CAEBankLoader *this)
{
  return _ZN13CAEBankLoader18LoadBankLookupFileEv(this);
}


// ============================================================

// Address: 0x198934
// Original: j__ZN13CAEBankLoaderD2Ev
// Demangled: CAEBankLoader::~CAEBankLoader()
// attributes: thunk
void __fastcall CAEBankLoader::~CAEBankLoader(CAEBankLoader *this)
{
  _ZN13CAEBankLoaderD2Ev(this);
}


// ============================================================

// Address: 0x19c3bc
// Original: j__ZN13CAEBankLoader10InitialiseEv
// Demangled: CAEBankLoader::Initialise(void)
// attributes: thunk
int __fastcall CAEBankLoader::Initialise(CAEBankLoader *this)
{
  return _ZN13CAEBankLoader10InitialiseEv(this);
}


// ============================================================

// Address: 0x27d4b4
// Original: _ZN13CAEBankLoaderC2Ev
// Demangled: CAEBankLoader::CAEBankLoader(void)
void __fastcall CAEBankLoader::CAEBankLoader(CAEBankLoader *this)
{
  *((_BYTE *)this + 20) = 0;
}


// ============================================================

// Address: 0x27d4ba
// Original: _ZN13CAEBankLoaderD2Ev
// Demangled: CAEBankLoader::~CAEBankLoader()
void __fastcall CAEBankLoader::~CAEBankLoader(CAEBankLoader *this)
{
  void *v2; // r0
  void *v3; // r0

  if ( *((_BYTE *)this + 20) )
  {
    v2 = *(void **)this;
    if ( *(_DWORD *)this )
      operator delete[](v2);
    v3 = (void *)*((_DWORD *)this + 1);
    if ( v3 )
      operator delete[](v3);
  }
}


// ============================================================

// Address: 0x27d4dc
// Original: _ZN13CAEBankLoader10InitialiseEv
// Demangled: CAEBankLoader::Initialise(void)
int __fastcall CAEBankLoader::Initialise(CAEBankLoader *this)
{
  int result; // r0

  if ( !CAEBankLoader::LoadBankSlotFile(this)
    || !CAEBankLoader::LoadBankLookupFile(this)
    || !CAEBankLoader::LoadSFXPakLookupFile(this) )
  {
    return 0;
  }
  result = 1;
  *((_BYTE *)this + 20) = 1;
  return result;
}


// ============================================================

// Address: 0x27d504
// Original: _ZN13CAEBankLoader16LoadBankSlotFileEv
// Demangled: CAEBankLoader::LoadBankSlotFile(void)
int __fastcall CAEBankLoader::LoadBankSlotFile(void **this, int a2, const char *a3)
{
  CFileMgr *v4; // r0
  unsigned int v5; // r1
  CFileMgr *v6; // r5
  unsigned int v7; // r1
  unsigned int TotalSize; // r6
  int result; // r0
  __int64 v10; // r0
  void *v11; // r1
  unsigned int v12; // r9
  size_t v13; // r6
  int v14; // r8
  unsigned int v15; // r1

  v4 = (CFileMgr *)CFileMgr::OpenFile((CFileMgr *)"AUDIO\\CONFIG\\BANKSLOT.DAT", "rb", a3);
  v6 = v4;
  if ( !v4 )
    return 0;
  TotalSize = CFileMgr::GetTotalSize(v4, v5);
  if ( TotalSize <= 2 )
  {
    CFileMgr::CloseFile(v6, v7);
    return 0;
  }
  OS_FileRead(v6, this + 3, 2u);
  v10 = 4820LL * (unsigned int)*((__int16 *)this + 6);
  if ( !is_mul_ok(0x12D4u, *((__int16 *)this + 6)) )
    HIDWORD(v10) = 1;
  if ( HIDWORD(v10) )
    LODWORD(v10) = -1;
  v11 = (void *)operator new[](v10);
  v12 = TotalSize - 2;
  *this = v11;
  v13 = 4820 * ((TotalSize - 2) / 0x12D4);
  v14 = OS_FileRead(v6, v11, v13);
  CFileMgr::CloseFile(v6, v15);
  if ( v14 )
    v13 = 0;
  if ( v12 == v13 )
    return 1;
  if ( *this )
    operator delete[](*this);
  result = 0;
  *this = 0;
  return result;
}


// ============================================================

// Address: 0x27d5d0
// Original: _ZN13CAEBankLoader18LoadBankLookupFileEv
// Demangled: CAEBankLoader::LoadBankLookupFile(void)
int __fastcall CAEBankLoader::LoadBankLookupFile(CAEBankLoader *this, int a2, const char *a3)
{
  CFileMgr *v4; // r0
  unsigned int v5; // r1
  AndroidFile *v6; // r5
  unsigned int TotalSize; // r0
  unsigned int v8; // r1
  unsigned int v9; // r6
  unsigned int v10; // r4
  unsigned int v11; // r0
  int v12; // r2
  void *v13; // r0
  int v14; // r4
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r6
  void *v18; // r0

  v4 = (CFileMgr *)CFileMgr::OpenFile((CFileMgr *)"AUDIO\\CONFIG\\BANKLKUP.DAT", "rb", a3);
  v6 = v4;
  if ( !v4 )
    return 0;
  TotalSize = CFileMgr::GetTotalSize(v4, v5);
  v9 = TotalSize;
  if ( TotalSize )
  {
    v10 = (__int16)(TotalSize / 0xC);
    *((_WORD *)this + 7) = TotalSize / 0xC;
    v12 = (12 * (unsigned __int64)v10) >> 32;
    v11 = 12 * v10;
    if ( !is_mul_ok(0xCu, v10) )
      v12 = 1;
    if ( v12 )
      v11 = -1;
    v13 = (void *)operator new[](v11);
    v14 = 3 * v10;
    *((_DWORD *)this + 1) = v13;
    v15 = OS_FileRead(v6, v13, 4 * v14);
    v16 = 0;
    if ( !v15 )
      v16 = 4 * v14;
    if ( v9 == v16 )
    {
      CFileMgr::CloseFile(v6, v16);
      return 1;
    }
    else
    {
      v18 = (void *)*((_DWORD *)this + 1);
      if ( v18 )
        operator delete[](v18);
      v17 = 0;
      *((_DWORD *)this + 1) = 0;
      CFileMgr::CloseFile(v6, v16);
    }
  }
  else
  {
    CFileMgr::CloseFile(v6, v8);
    return 0;
  }
  return v17;
}


// ============================================================

// Address: 0x27d694
// Original: _ZN13CAEBankLoader20LoadSFXPakLookupFileEv
// Demangled: CAEBankLoader::LoadSFXPakLookupFile(void)
int __fastcall CAEBankLoader::LoadSFXPakLookupFile(CAEBankLoader *this, int a2, const char *a3)
{
  CFileMgr *v4; // r0
  unsigned int v5; // r1
  CFileMgr *v6; // r5
  unsigned int v7; // r1
  unsigned int TotalSize; // r6
  unsigned int v9; // r4
  unsigned int v10; // r0
  int v11; // r2
  void *v12; // r0
  size_t v13; // r4
  int v14; // r9
  unsigned int v15; // r1
  int result; // r0
  void *v17; // r0

  v4 = (CFileMgr *)CFileMgr::OpenFile((CFileMgr *)"AUDIO\\CONFIG\\PAKFILES.DAT", "rb", a3);
  v6 = v4;
  if ( !v4 )
    return 0;
  TotalSize = CFileMgr::GetTotalSize(v4, v5);
  if ( !TotalSize )
  {
    CFileMgr::CloseFile(v6, v7);
    return 0;
  }
  v9 = (__int16)(TotalSize / 0x34);
  *((_WORD *)this + 8) = TotalSize / 0x34;
  v11 = (52 * (unsigned __int64)v9) >> 32;
  v10 = 52 * v9;
  if ( !is_mul_ok(0x34u, v9) )
    v11 = 1;
  if ( v11 )
    v10 = -1;
  v12 = (void *)operator new[](v10);
  v13 = 52 * (__int16)v9;
  *((_DWORD *)this + 2) = v12;
  v14 = OS_FileRead(v6, v12, v13);
  CFileMgr::CloseFile(v6, v15);
  if ( v14 )
    v13 = 0;
  if ( TotalSize == v13 )
    return 1;
  v17 = (void *)*((_DWORD *)this + 2);
  if ( v17 )
    operator delete[](v17);
  result = 0;
  *((_DWORD *)this + 2) = 0;
  return result;
}


// ============================================================

// Address: 0x27d758
// Original: _ZN13CAEBankLoader13GetBankLookupEt
// Demangled: CAEBankLoader::GetBankLookup(ushort)
int __fastcall CAEBankLoader::GetBankLookup(CAEBankLoader *this, int a2)
{
  if ( *((_BYTE *)this + 20) && a2 < *((__int16 *)this + 7) )
    return *((_DWORD *)this + 1) + 12 * a2;
  else
    return 0;
}


// ============================================================
