
// Address: 0x19aa58
// Original: j__ZN8CGridRef4InitEv
// Demangled: CGridRef::Init(void)
// attributes: thunk
int __fastcall CGridRef::Init(CGridRef *this)
{
  return _ZN8CGridRef4InitEv(this);
}


// ============================================================

// Address: 0x5ad928
// Original: _ZN8CGridRef4InitEv
// Demangled: CGridRef::Init(void)
int __fastcall CGridRef::Init(CGridRef *this)
{
  const char *v1; // r2
  CFileLoader *v2; // r4
  unsigned int v3; // r1
  const char *i; // r0
  unsigned int v5; // r1
  unsigned int v6; // r1
  bool v7; // zf
  char *v8; // r9
  const char *v9; // r0
  int v11; // [sp+8h] [bp-48h] BYREF
  unsigned __int8 v12; // [sp+Fh] [bp-41h] BYREF
  _BYTE v13[32]; // [sp+10h] [bp-40h] BYREF
  int v14; // [sp+30h] [bp-20h]

  v12 = 0;
  v11 = 0;
  CFileMgr::SetDir((CFileMgr *)&byte_61CD7E, 0);
  v2 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"DATA\\GRIDREF.DAT", "rb", v1);
  for ( i = (const char *)CFileLoader::LoadLine(v2, v3); i; i = (const char *)CFileLoader::LoadLine(v2, v6) )
  {
    v6 = *(unsigned __int8 *)i;
    v7 = v6 == 0;
    if ( *i )
      v7 = v6 == 35;
    if ( !v7 )
    {
      sscanf(i, "%c%d %s", &v12, &v11, v13);
      v8 = (char *)&GridRefList + 320 * v12 + 32 * v11;
      v9 = (const char *)(*((int (__fastcall **)(_BYTE *))RwEngineInstance + 72))(v13);
      strcpy(v8 - 20832, v9);
    }
  }
  CFileMgr::CloseFile(v2, v5);
  return _stack_chk_guard - v14;
}


// ============================================================

// Address: 0x5ada14
// Original: _ZN8CGridRef19GetGridRefPositionsE7CVectorPhS1_
// Demangled: CGridRef::GetGridRefPositions(CVector,uchar *,uchar *)
_BYTE *__fastcall CGridRef::GetGridRefPositions(float a1, float a2, int a3, _BYTE *a4, _BYTE *a5)
{
  float v5; // s2
  _BYTE *result; // r0

  v5 = a1 + 3000.0;
  result = a5;
  *a4 = (unsigned int)(float)(v5 / 600.0);
  *a5 = 9 - (unsigned int)(float)((float)(a2 + 3000.0) / 600.0);
  return result;
}


// ============================================================

// Address: 0x5ada58
// Original: _ZN8CGridRef19GetGridRefPositionsEPhS0_
// Demangled: CGridRef::GetGridRefPositions(uchar *,uchar *)
unsigned int __fastcall CGridRef::GetGridRefPositions(CGridRef *this, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned int v5; // s0
  unsigned int result; // r0
  float v7[3]; // [sp+0h] [bp-20h] BYREF
  _BYTE v8[20]; // [sp+Ch] [bp-14h] BYREF

  FindPlayerCoors((int)v8);
  FindPlayerCoors((int)v7);
  v5 = (unsigned int)(float)((float)(v7[1] + 3000.0) / 600.0);
  *(_BYTE *)this = (unsigned int)(float)((float)(v7[0] + 3000.0) / 600.0);
  result = 9 - v5;
  *a2 = 9 - v5;
  return result;
}


// ============================================================

// Address: 0x5adabc
// Original: _ZN8CGridRef11GetAreaNameEhh
// Demangled: CGridRef::GetAreaName(uchar,uchar)
char *__fastcall CGridRef::GetAreaName(CGridRef *this, unsigned int a2, unsigned __int8 a3)
{
  bool v3; // cc
  char *v4; // r2

  v3 = (unsigned int)this > 9;
  if ( (unsigned int)this <= 9 )
    v3 = a2 > 9;
  if ( v3 )
    return 0;
  v4 = &byte_61CD7E;
  if ( a2 == 255 )
    v4 = 0;
  if ( this == (CGridRef *)((char *)elf_hash_bucket + 3) )
    return 0;
  return v4;
}


// ============================================================

// Address: 0x5adae0
// Original: _ZN8CGridRef18GetArtistBugstarIDEhh
// Demangled: CGridRef::GetArtistBugstarID(uchar,uchar)
int __fastcall CGridRef::GetArtistBugstarID(unsigned int this, unsigned int a2, unsigned __int8 a3)
{
  bool v3; // cf
  bool v4; // zf

  v3 = this >= 9;
  v4 = this == 9;
  if ( this <= 9 )
  {
    v3 = a2 >= 9;
    v4 = a2 == 9;
  }
  if ( !v4 && v3 )
    return 0;
  else
    return sub_19A7EC(&GridRefList[320 * this + 32 * a2]);
}


// ============================================================
