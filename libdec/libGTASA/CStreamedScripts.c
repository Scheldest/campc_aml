
// Address: 0x18a6d0
// Original: j__ZN16CStreamedScripts35GetProperIndexFromIndexUsedByScriptEs
// Demangled: CStreamedScripts::GetProperIndexFromIndexUsedByScript(short)
// attributes: thunk
int __fastcall CStreamedScripts::GetProperIndexFromIndexUsedByScript(CStreamedScripts *this, __int16 a2)
{
  return _ZN16CStreamedScripts35GetProperIndexFromIndexUsedByScriptEs(this, a2);
}


// ============================================================

// Address: 0x18d5cc
// Original: j__ZN16CStreamedScripts14RegisterScriptEPKc
// Demangled: CStreamedScripts::RegisterScript(char const*)
// attributes: thunk
int __fastcall CStreamedScripts::RegisterScript(CStreamedScripts *this, const char *a2)
{
  return _ZN16CStreamedScripts14RegisterScriptEPKc(this, a2);
}


// ============================================================

// Address: 0x197430
// Original: j__ZN16CStreamedScripts22StartNewStreamedScriptEi
// Demangled: CStreamedScripts::StartNewStreamedScript(int)
// attributes: thunk
int __fastcall CStreamedScripts::StartNewStreamedScript(CStreamedScripts *this, int a2)
{
  return _ZN16CStreamedScripts22StartNewStreamedScriptEi(this, a2);
}


// ============================================================

// Address: 0x197578
// Original: j__ZN16CStreamedScripts12ReInitialiseEv
// Demangled: CStreamedScripts::ReInitialise(void)
// attributes: thunk
int __fastcall CStreamedScripts::ReInitialise(CStreamedScripts *this)
{
  return _ZN16CStreamedScripts12ReInitialiseEv(this);
}


// ============================================================

// Address: 0x199200
// Original: j__ZN16CStreamedScripts22ReadStreamedScriptDataEv
// Demangled: CStreamedScripts::ReadStreamedScriptData(void)
// attributes: thunk
int __fastcall CStreamedScripts::ReadStreamedScriptData(CStreamedScripts *this)
{
  return _ZN16CStreamedScripts22ReadStreamedScriptDataEv(this);
}


// ============================================================

// Address: 0x19aeac
// Original: j__ZN16CStreamedScripts30RemoveStreamedScriptFromMemoryEi
// Demangled: CStreamedScripts::RemoveStreamedScriptFromMemory(int)
// attributes: thunk
int __fastcall CStreamedScripts::RemoveStreamedScriptFromMemory(CStreamedScripts *this, int a2)
{
  return _ZN16CStreamedScripts30RemoveStreamedScriptFromMemoryEi(this, a2);
}


// ============================================================

// Address: 0x19b800
// Original: j__ZN16CStreamedScripts37GetStreamedScriptWithThisStartAddressEPh
// Demangled: CStreamedScripts::GetStreamedScriptWithThisStartAddress(uchar *)
// attributes: thunk
int __fastcall CStreamedScripts::GetStreamedScriptWithThisStartAddress(CStreamedScripts *this, unsigned __int8 *a2)
{
  return _ZN16CStreamedScripts37GetStreamedScriptWithThisStartAddressEPh(this, a2);
}


// ============================================================

// Address: 0x19bd98
// Original: j__ZN16CStreamedScripts10InitialiseEv
// Demangled: CStreamedScripts::Initialise(void)
// attributes: thunk
int __fastcall CStreamedScripts::Initialise(CStreamedScripts *this)
{
  return _ZN16CStreamedScripts10InitialiseEv(this);
}


// ============================================================

// Address: 0x1a1580
// Original: j__ZN16CStreamedScripts18LoadStreamedScriptEP8RwStreami
// Demangled: CStreamedScripts::LoadStreamedScript(RwStream *,int)
// attributes: thunk
int CStreamedScripts::LoadStreamedScript()
{
  return _ZN16CStreamedScripts18LoadStreamedScriptEP8RwStreami();
}


// ============================================================

// Address: 0x33523c
// Original: _ZN16CStreamedScripts10InitialiseEv
// Demangled: CStreamedScripts::Initialise(void)
int __fastcall CStreamedScripts::Initialise(int this)
{
  int v1; // r3
  int v2; // r2

  v1 = 0;
  do
  {
    *(_DWORD *)(this + v1) = 0;
    v2 = this + v1;
    v1 += 32;
    *(_BYTE *)(v2 + 4) = 0;
    *(_WORD *)(v2 + 6) = -1;
    *(_BYTE *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 28) = 0;
  }
  while ( v1 != 2624 );
  *(_WORD *)(this + 2628) = 0;
  *(_DWORD *)(this + 2624) = 0;
  return this;
}


// ============================================================

// Address: 0x335266
// Original: _ZN16CStreamedScripts12ReInitialiseEv
// Demangled: CStreamedScripts::ReInitialise(void)
__int64 __fastcall CStreamedScripts::ReInitialise(CStreamedScripts *this)
{
  __int64 result; // r0
  int i; // r2

  result = (unsigned int)this + 4;
  for ( i = 0; i != 2624; i += 32 )
    *(_BYTE *)(result + i) = 0;
  return result;
}


// ============================================================

// Address: 0x335278
// Original: _ZN16CStreamedScripts14RegisterScriptEPKc
// Demangled: CStreamedScripts::RegisterScript(char const*)
int __fastcall CStreamedScripts::RegisterScript(CStreamedScripts *this, const char *a2)
{
  unsigned __int16 v3; // r0

  strcpy((char *)this + 32 * *((unsigned __int16 *)this + 1314) + 8, a2);
  v3 = *((_WORD *)this + 1314) + 1;
  *((_WORD *)this + 1314) = v3;
  return v3 - 1;
}


// ============================================================

// Address: 0x3352a0
// Original: _ZN16CStreamedScripts23FindStreamedScriptQuietEPKc
// Demangled: CStreamedScripts::FindStreamedScriptQuiet(char const*)
int __fastcall CStreamedScripts::FindStreamedScriptQuiet(CStreamedScripts *this, const char *a2)
{
  int v2; // r5
  const char *v4; // r6
  int v5; // r4

  v2 = *((unsigned __int16 *)this + 1314);
  if ( !*((_WORD *)this + 1314) )
    return -1;
  v4 = (char *)this + 8;
  v5 = 0;
  while ( strcasecmp(v4, a2) )
  {
    ++v5;
    v4 += 32;
    if ( v5 >= v2 )
      return -1;
  }
  return v5;
}


// ============================================================

// Address: 0x3352d4
// Original: _ZN16CStreamedScripts18FindStreamedScriptEPKc
// Demangled: CStreamedScripts::FindStreamedScript(char const*)
int __fastcall CStreamedScripts::FindStreamedScript(CStreamedScripts *this, const char *a2)
{
  int v2; // r5
  const char *v4; // r6
  int v5; // r4

  v2 = *((unsigned __int16 *)this + 1314);
  if ( !*((_WORD *)this + 1314) )
    return -1;
  v4 = (char *)this + 8;
  v5 = 0;
  while ( strcasecmp(v4, a2) )
  {
    ++v5;
    v4 += 32;
    if ( v5 >= v2 )
      return -1;
  }
  return v5;
}


// ============================================================

// Address: 0x335308
// Original: _ZN16CStreamedScripts22ReadStreamedScriptDataEv
// Demangled: CStreamedScripts::ReadStreamedScriptData(void)
int __fastcall CStreamedScripts::ReadStreamedScriptData(CStreamedScripts *this)
{
  unsigned int v1; // r4
  char *v2; // r3
  char *v3; // r5
  int v4; // r11
  __int64 v5; // d17
  int v6; // r8
  const char *v7; // r6
  int v8; // r1
  char *v9; // r0
  _QWORD v12[2]; // [sp+4h] [bp-34h] BYREF
  char v13; // [sp+14h] [bp-24h]
  char v14; // [sp+15h] [bp-23h]
  char v15; // [sp+16h] [bp-22h]
  char v16; // [sp+17h] [bp-21h]
  int v17; // [sp+18h] [bp-20h]

  v1 = *((unsigned __int16 *)this + 1314);
  v2 = &CTheScripts::ScriptSpace[*(_DWORD *)&CTheScripts::ScriptSpace[*(_DWORD *)&CTheScripts::ScriptSpace[dword_7BD797 + 3]
                                                                    + 3]];
  *((_DWORD *)this + 656) = *((_DWORD *)v2 + 2);
  if ( v1 )
  {
    v3 = v2 + 16;
    v4 = 0;
    do
    {
      v5 = *((_QWORD *)v3 + 1);
      v6 = 0;
      v7 = (char *)this + 8;
      v12[0] = *(_QWORD *)v3;
      v12[1] = v5;
      v13 = v3[16];
      v14 = v3[17];
      v15 = v3[18];
      v16 = v3[19];
      while ( strcasecmp(v7, (const char *)v12) )
      {
        ++v6;
        v7 += 32;
        if ( v6 >= (int)v1 )
        {
          v6 = -1;
          break;
        }
      }
      v8 = *((_DWORD *)v3 + 6);
      v3 += 28;
      v9 = (char *)this + 32 * v6;
      *((_WORD *)v9 + 3) = v4++;
      *((_DWORD *)v9 + 7) = v8;
    }
    while ( (unsigned __int16)v4 < v1 );
  }
  return _stack_chk_guard - v17;
}


// ============================================================

// Address: 0x3353dc
// Original: _ZN16CStreamedScripts35GetProperIndexFromIndexUsedByScriptEs
// Demangled: CStreamedScripts::GetProperIndexFromIndexUsedByScript(short)
int __fastcall CStreamedScripts::GetProperIndexFromIndexUsedByScript(CStreamedScripts *this, unsigned __int16 a2)
{
  int v2; // r2

  LOWORD(v2) = 0;
  while ( *((unsigned __int16 *)this + 16 * (__int16)v2 + 3) != a2 )
  {
    v2 = (__int16)(v2 + 1);
    if ( v2 >= 82 )
    {
      LOWORD(v2) = -1;
      return (__int16)v2;
    }
  }
  return (__int16)v2;
}


// ============================================================

// Address: 0x3353fc
// Original: _ZN16CStreamedScripts18LoadStreamedScriptEP8RwStreami
// Demangled: CStreamedScripts::LoadStreamedScript(RwStream *,int)
int __fastcall CStreamedScripts::LoadStreamedScript(int a1, int a2, int a3)
{
  unsigned int v6; // r8
  void *v7; // r0

  if ( CTheScripts::CheckStreamedScriptVersion() != 1 )
    return 0;
  v6 = *(_DWORD *)(a1 + 32 * a3 + 28);
  v7 = (void *)operator new[](v6);
  *(_DWORD *)(a1 + 32 * a3) = v7;
  RwStreamRead(a2, v7, v6);
  return 1;
}


// ============================================================

// Address: 0x33544c
// Original: _ZN16CStreamedScripts22StartNewStreamedScriptEi
// Demangled: CStreamedScripts::StartNewStreamedScript(int)
int __fastcall CStreamedScripts::StartNewStreamedScript(CStreamedScripts *this, int a2, int a3)
{
  unsigned __int8 *v4; // r1
  char *v5; // r8
  CTheScripts *v6; // r5
  bool v7; // r1
  int started; // r6
  int v9; // r1

  v4 = (unsigned __int8 *)(32 * a2);
  v5 = (char *)this + 32 * a2;
  v6 = *(CTheScripts **)&v4[(_DWORD)this];
  if ( !v6 && IsMissionSave )
  {
    CStreaming::RequestModel((CStreaming *)(a2 + 26230), 12, a3);
    CStreaming::LoadAllRequestedModels(0, v7);
    v6 = *(CTheScripts **)v5;
  }
  if ( !v6 )
    return 0;
  started = CTheScripts::StartNewScript(v6, v4);
  *(_BYTE *)(started + 231) = 1;
  *(_DWORD *)(started + 16) = v6;
  ++v5[4];
  CStreaming::SetMissionDoesntRequireModel((CStreaming *)(a2 + 26230), v9);
  return started;
}


// ============================================================

// Address: 0x3354b8
// Original: _ZN16CStreamedScripts30RemoveStreamedScriptFromMemoryEi
// Demangled: CStreamedScripts::RemoveStreamedScriptFromMemory(int)
int __fastcall CStreamedScripts::RemoveStreamedScriptFromMemory(CStreamedScripts *this, int a2)
{
  void *v3; // r0
  _DWORD *v4; // r4
  int result; // r0

  v3 = (void *)*((_DWORD *)this + 8 * a2);
  v4 = (_DWORD *)((char *)this + 32 * a2);
  if ( v3 )
    operator delete[](v3);
  result = 0;
  *v4 = 0;
  return result;
}


// ============================================================

// Address: 0x3354d4
// Original: _ZN16CStreamedScripts25GetStreamedScriptFilenameEt
// Demangled: CStreamedScripts::GetStreamedScriptFilename(ushort)
char *__fastcall CStreamedScripts::GetStreamedScriptFilename(CStreamedScripts *this, int a2)
{
  return (char *)this + 32 * a2 + 8;
}


// ============================================================

// Address: 0x3354dc
// Original: _ZN16CStreamedScripts37GetStreamedScriptWithThisStartAddressEPh
// Demangled: CStreamedScripts::GetStreamedScriptWithThisStartAddress(uchar *)
int __fastcall CStreamedScripts::GetStreamedScriptWithThisStartAddress(CStreamedScripts *this, unsigned __int8 *a2)
{
  int v2; // r12
  unsigned __int16 v3; // r3
  unsigned __int8 *v4; // lr

  v2 = 0;
  v3 = 0;
  do
  {
    v4 = (unsigned __int8 *)*((_DWORD *)this + 8 * v2);
    v3 += v4 != a2;
    v2 = v3;
  }
  while ( v3 <= 0x51u && v4 != a2 );
  return v3;
}


// ============================================================
