
// Address: 0x198910
// Original: j__ZN21CModelInfoAccelerator8GetEntryEPP14CBaseModelInfoPiPc
// Demangled: CModelInfoAccelerator::GetEntry(CBaseModelInfo **,int *,char *)
// attributes: thunk
int __fastcall CModelInfoAccelerator::GetEntry(
        CModelInfoAccelerator *this,
        CBaseModelInfo **a2,
        char *a3,
        CModelInfoAccelerator *a4)
{
  return _ZN21CModelInfoAccelerator8GetEntryEPP14CBaseModelInfoPiPc(this, a2, a3, a4);
}


// ============================================================

// Address: 0x19b6ac
// Original: j__ZN21CModelInfoAccelerator18GetNextModelInfoIdEv
// Demangled: CModelInfoAccelerator::GetNextModelInfoId(void)
// attributes: thunk
int __fastcall CModelInfoAccelerator::GetNextModelInfoId(CModelInfoAccelerator *this)
{
  return _ZN21CModelInfoAccelerator18GetNextModelInfoIdEv(this);
}


// ============================================================

// Address: 0x19d288
// Original: j__ZN21CModelInfoAccelerator3EndEPc
// Demangled: CModelInfoAccelerator::End(char *)
// attributes: thunk
int __fastcall CModelInfoAccelerator::End(CModelInfoAccelerator *this, char *a2)
{
  return _ZN21CModelInfoAccelerator3EndEPc(this, a2);
}


// ============================================================

// Address: 0x19f61c
// Original: j__ZN21CModelInfoAccelerator5BeginEPc
// Demangled: CModelInfoAccelerator::Begin(char *)
// attributes: thunk
int __fastcall CModelInfoAccelerator::Begin(CModelInfoAccelerator *this, char *a2)
{
  return _ZN21CModelInfoAccelerator5BeginEPc(this, a2);
}


// ============================================================

// Address: 0x386444
// Original: _ZN21CModelInfoAcceleratorC2Ev
// Demangled: CModelInfoAccelerator::CModelInfoAccelerator(void)
void __fastcall CModelInfoAccelerator::CModelInfoAccelerator(CModelInfoAccelerator *this)
{
  *((_BYTE *)this + 27) = 0;
  *((_WORD *)this + 2) = 0;
  *(_DWORD *)this = 0;
  *((_BYTE *)this + 26) = 0;
  *((_BYTE *)this + 6) = 0;
}


// ============================================================

// Address: 0x386452
// Original: _ZN21CModelInfoAccelerator4InitEv
// Demangled: CModelInfoAccelerator::Init(void)
int __fastcall CModelInfoAccelerator::Init(int this)
{
  *(_BYTE *)(this + 27) = 0;
  *(_WORD *)(this + 4) = 0;
  *(_DWORD *)this = 0;
  *(_BYTE *)(this + 26) = 0;
  *(_BYTE *)(this + 6) = 0;
  return this;
}


// ============================================================

// Address: 0x386460
// Original: _ZN21CModelInfoAcceleratorD2Ev
// Demangled: CModelInfoAccelerator::~CModelInfoAccelerator()
void __fastcall CModelInfoAccelerator::~CModelInfoAccelerator(CModelInfoAccelerator *this)
{
  ;
}


// ============================================================

// Address: 0x386464
// Original: _ZN21CModelInfoAccelerator18GetModelInfoIdFileEv
// Demangled: CModelInfoAccelerator::GetModelInfoIdFile(void)
bool __fastcall CModelInfoAccelerator::GetModelInfoIdFile(CModelInfoAccelerator *this, int a2, const char *a3)
{
  AndroidFile *v4; // r5
  int v5; // r6
  void *v6; // r4
  unsigned int v7; // r1

  v4 = (AndroidFile *)CFileMgr::OpenFile((CModelInfoAccelerator *)((char *)this + 6), (const char *)&dword_3864C4, a3);
  v5 = (int)v4;
  if ( v4 )
    v5 = 1;
  *((_BYTE *)this + 27) = v5;
  v6 = (void *)operator new[](0xA08Cu);
  *(_DWORD *)this = v6;
  memset(v6, 0, 0xA08Cu);
  if ( v4 )
  {
    OS_FileRead(v4, v6, 0xA08Cu);
    CFileMgr::CloseFile(v4, v7);
    v5 = *((unsigned __int8 *)this + 27);
  }
  return v5 != 0;
}


// ============================================================

// Address: 0x3864c8
// Original: _ZN21CModelInfoAccelerator17AllocModelInfoIdsEv
// Demangled: CModelInfoAccelerator::AllocModelInfoIds(void)
void __fastcall CModelInfoAccelerator::AllocModelInfoIds(CModelInfoAccelerator *this)
{
  void *v2; // r0

  v2 = (void *)operator new[](0xA08Cu);
  *(_DWORD *)this = v2;
  memset(v2, 0, 0xA08Cu);
}


// ============================================================

// Address: 0x3864e2
// Original: _ZN21CModelInfoAccelerator14EndOfLoadPhaseEv
// Demangled: CModelInfoAccelerator::EndOfLoadPhase(void)
int __fastcall CModelInfoAccelerator::EndOfLoadPhase(CModelInfoAccelerator *this, const char *a2)
{
  CFileMgr *v3; // r0
  int v4; // r3
  CFileMgr *v5; // r5
  unsigned int v6; // r1
  int result; // r0

  if ( !*((_BYTE *)this + 27) )
  {
    v3 = (CFileMgr *)CFileMgr::OpenFileForWriting((CModelInfoAccelerator *)((char *)this + 6), a2);
    v5 = v3;
    if ( v3 )
    {
      CFileMgr::Write(v3, *(_DWORD *)this, (char *)&elf_hash_bucket[10212], v4);
      CFileMgr::CloseFile(v5, v6);
    }
  }
  if ( *(_DWORD *)this )
    operator delete[](*(void **)this);
  result = 0;
  *(_DWORD *)this = 0;
  return result;
}


// ============================================================

// Address: 0x386518
// Original: _ZN21CModelInfoAccelerator16FreeModelInfoIdsEv
// Demangled: CModelInfoAccelerator::FreeModelInfoIds(void)
int __fastcall CModelInfoAccelerator::FreeModelInfoIds(void **this)
{
  void *v2; // r0
  int result; // r0

  v2 = *this;
  if ( v2 )
    operator delete[](v2);
  result = 0;
  *this = 0;
  return result;
}


// ============================================================

// Address: 0x38652e
// Original: _ZN21CModelInfoAccelerator14AddModelInfoIdEt
// Demangled: CModelInfoAccelerator::AddModelInfoId(ushort)
int __fastcall CModelInfoAccelerator::AddModelInfoId(int this, unsigned __int16 a2)
{
  *(_WORD *)(*(_DWORD *)this + 2 * (unsigned __int16)(*(_WORD *)(this + 4))++) = a2;
  return this;
}


// ============================================================

// Address: 0x38653e
// Original: _ZN21CModelInfoAccelerator18GetNextModelInfoIdEv
// Demangled: CModelInfoAccelerator::GetNextModelInfoId(void)
int __fastcall CModelInfoAccelerator::GetNextModelInfoId(CModelInfoAccelerator *this)
{
  int v1; // r2
  int v2; // r1

  v1 = *((unsigned __int16 *)this + 2);
  v2 = *(unsigned __int16 *)(*(_DWORD *)this + 2 * v1);
  *((_WORD *)this + 2) = v1 + 1;
  return v2;
}


// ============================================================

// Address: 0x38654e
// Original: _ZN21CModelInfoAccelerator8GetEntryEPP14CBaseModelInfoPiPc
// Demangled: CModelInfoAccelerator::GetEntry(CBaseModelInfo **,int *,char *)
CBaseModelInfo *__fastcall CModelInfoAccelerator::GetEntry(
        CModelInfoAccelerator *this,
        CBaseModelInfo **a2,
        char *a3,
        CModelInfoAccelerator *a4)
{
  CBaseModelInfo *result; // r0
  CBaseModelInfo *ModelInfo; // r0
  int v9; // r2

  if ( *((_BYTE *)this + 27) )
  {
    result = (CBaseModelInfo *)CModelInfo::GetModelInfoFast(this, a4, a3, (int *)a4);
    *a2 = result;
  }
  else
  {
    ModelInfo = (CBaseModelInfo *)CModelInfo::GetModelInfo(a4, a3, (int *)a3);
    *a2 = ModelInfo;
    if ( ModelInfo )
      v9 = *(_DWORD *)a3;
    else
      LOWORD(v9) = -1;
    *(_WORD *)(*(_DWORD *)this + 2 * *((unsigned __int16 *)this + 2)) = v9;
    result = (CBaseModelInfo *)(*((unsigned __int16 *)this + 2) + 1);
    *((_WORD *)this + 2) = (_WORD)result;
  }
  return result;
}


// ============================================================

// Address: 0x38659c
// Original: _ZN21CModelInfoAccelerator5BeginEPc
// Demangled: CModelInfoAccelerator::Begin(char *)
void __fastcall CModelInfoAccelerator::Begin(CModelInfoAccelerator *this, char *a2)
{
  CFileMgr *v3; // r4
  const char *v4; // r2
  AndroidFile *v5; // r4
  void *v6; // r6
  unsigned int v7; // r1

  v3 = (CModelInfoAccelerator *)((char *)this + 6);
  strcpy((char *)this + 6, a2);
  if ( !*((_BYTE *)this + 26) )
  {
    v5 = (AndroidFile *)CFileMgr::OpenFile(v3, (const char *)&dword_3865FC, v4);
    *((_BYTE *)this + 27) = v5 != 0;
    v6 = (void *)operator new[](0xA08Cu);
    *(_DWORD *)this = v6;
    memset(v6, 0, 0xA08Cu);
    if ( v5 )
    {
      OS_FileRead(v5, v6, 0xA08Cu);
      j_CFileMgr::CloseFile(v5, v7);
    }
  }
}


// ============================================================

// Address: 0x386600
// Original: _ZN21CModelInfoAccelerator3EndEPc
// Demangled: CModelInfoAccelerator::End(char *)
int __fastcall CModelInfoAccelerator::End(CModelInfoAccelerator *this, char *a2)
{
  int result; // r0
  CFileMgr *v4; // r0
  int v5; // r3
  CFileMgr *v6; // r5
  unsigned int v7; // r1

  result = *((unsigned __int8 *)this + 26);
  if ( !result )
  {
    if ( !byte_931557 )
    {
      v4 = (CFileMgr *)CFileMgr::OpenFileForWriting((CFileMgr *)byte_931542, a2);
      v6 = v4;
      if ( v4 )
      {
        CFileMgr::Write(v4, gModelInfoAccelerator, (char *)&elf_hash_bucket[10212], v5);
        CFileMgr::CloseFile(v6, v7);
      }
    }
    if ( gModelInfoAccelerator )
      operator delete[]((void *)gModelInfoAccelerator);
    gModelInfoAccelerator = 0;
    result = 1;
    *((_BYTE *)this + 26) = 1;
  }
  return result;
}


// ============================================================
