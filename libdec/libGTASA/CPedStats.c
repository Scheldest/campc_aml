
// Address: 0x191db0
// Original: j__ZN9CPedStats8ShutdownEv
// Demangled: CPedStats::Shutdown(void)
// attributes: thunk
int __fastcall CPedStats::Shutdown(CPedStats *this)
{
  return _ZN9CPedStats8ShutdownEv(this);
}


// ============================================================

// Address: 0x19b1d4
// Original: j__ZN9CPedStats12LoadPedStatsEv
// Demangled: CPedStats::LoadPedStats(void)
// attributes: thunk
int __fastcall CPedStats::LoadPedStats(CPedStats *this)
{
  return _ZN9CPedStats12LoadPedStatsEv(this);
}


// ============================================================

// Address: 0x19b254
// Original: j__ZN9CPedStats14GetPedStatTypeEPc
// Demangled: CPedStats::GetPedStatType(char *)
// attributes: thunk
int __fastcall CPedStats::GetPedStatType(CPedStats *this, char *a2)
{
  return _ZN9CPedStats14GetPedStatTypeEPc(this, a2);
}


// ============================================================

// Address: 0x470d90
// Original: _ZN9CPedStats10InitialiseEv
// Demangled: CPedStats::Initialise(void)
int __fastcall CPedStats::Initialise(CPedStats *this)
{
  CPedStats *v1; // r0
  int v2; // r2
  int v3; // r1
  _BYTE *v4; // r5
  CDecisionMakerTypesFileLoader *PedStats; // r0

  v1 = (CPedStats *)operator new[](0x8BCu);
  v2 = 43;
  CPedStats::ms_apPedStats = (int)v1;
  v3 = 50;
  do
  {
    --v2;
    *(_DWORD *)((char *)v1 + v3 - 50) = 0;
    v1 = (CPedStats *)CPedStats::ms_apPedStats;
    v4 = (_BYTE *)(CPedStats::ms_apPedStats + v3);
    *v4 = 0;
    v3 += 52;
    *(_DWORD *)(v4 - 10) = 1065353216;
    *(_DWORD *)(v4 - 14) = 842150450;
    *(_DWORD *)(v4 - 22) = 1101004800;
    *(_DWORD *)(v4 - 18) = 1097859072;
    strcpy(v4 - 46, "PLAYER");
    *(_DWORD *)(v4 - 6) = 1065353216;
    *((_WORD *)v4 - 1) = 0;
  }
  while ( v2 );
  PedStats = (CDecisionMakerTypesFileLoader *)CPedStats::LoadPedStats(v1);
  return CDecisionMakerTypesFileLoader::LoadDefaultDecisionMaker(PedStats);
}


// ============================================================

// Address: 0x473f40
// Original: _ZN9CPedStats12LoadPedStatsEv
// Demangled: CPedStats::LoadPedStats(void)
int __fastcall CPedStats::LoadPedStats(CPedStats *this, int a2, const char *a3)
{
  CFileLoader *v3; // r4
  unsigned int v4; // r1
  const char *Line; // r0
  unsigned int v6; // r1
  int v7; // r5
  int v8; // r0
  int v9; // r2
  int v10; // r2
  unsigned int v11; // r1
  bool v12; // zf
  int v14; // [sp+28h] [bp-68h] BYREF
  int v15; // [sp+2Ch] [bp-64h] BYREF
  int v16; // [sp+30h] [bp-60h] BYREF
  int v17; // [sp+34h] [bp-5Ch] BYREF
  unsigned int v18; // [sp+38h] [bp-58h] BYREF
  int v19; // [sp+3Ch] [bp-54h] BYREF
  int v20; // [sp+40h] [bp-50h] BYREF
  int v21; // [sp+44h] [bp-4Ch] BYREF
  int v22; // [sp+48h] [bp-48h] BYREF
  int v23; // [sp+4Ch] [bp-44h] BYREF
  char v24[32]; // [sp+50h] [bp-40h] BYREF
  int v25; // [sp+70h] [bp-20h]

  v3 = (CFileLoader *)CFileMgr::OpenFile((CFileMgr *)"DATA\\PEDSTATS.DAT", "r", a3);
  Line = (const char *)CFileLoader::LoadLine(v3, v4);
  if ( Line )
  {
    v7 = 0;
    do
    {
      v11 = *(unsigned __int8 *)Line;
      v12 = v11 == 35;
      if ( v11 != 35 )
        v12 = v11 == 0;
      if ( !v12 )
      {
        sscanf(
          Line,
          "%s %f %f %d %d %d %d %f %f %d %d",
          v24,
          &v17,
          &v16,
          &v23,
          &v22,
          &v21,
          &v20,
          &v15,
          &v14,
          &v19,
          &v18);
        *(_DWORD *)(CPedStats::ms_apPedStats + 52 * v7) = v7;
        strcpy((char *)(CPedStats::ms_apPedStats + 52 * v7 + 4), v24);
        v8 = CPedStats::ms_apPedStats + 52 * v7;
        v9 = v16;
        ++v7;
        *(_DWORD *)(v8 + 28) = v17;
        *(_DWORD *)(v8 + 32) = v9;
        *(_BYTE *)(v8 + 36) = v23;
        *(_BYTE *)(v8 + 37) = v22;
        *(_BYTE *)(v8 + 38) = v21;
        *(_BYTE *)(v8 + 39) = v20;
        v10 = v14;
        *(_DWORD *)(v8 + 40) = v15;
        *(_DWORD *)(v8 + 44) = v10;
        *(_WORD *)(v8 + 48) = v19;
        v11 = v18;
        *(_BYTE *)(v8 + 50) = v18;
      }
      Line = (const char *)CFileLoader::LoadLine(v3, v11);
    }
    while ( Line );
  }
  CFileMgr::CloseFile(v3, v6);
  return _stack_chk_guard - v25;
}


// ============================================================

// Address: 0x4c33ac
// Original: _ZN9CPedStats8ShutdownEv
// Demangled: CPedStats::Shutdown(void)
void __fastcall CPedStats::Shutdown(CPedStats *this)
{
  if ( CPedStats::ms_apPedStats )
    sub_18E920((void *)CPedStats::ms_apPedStats);
}


// ============================================================

// Address: 0x4c33c4
// Original: _ZN9CPedStats14GetPedStatInfoEPc
// Demangled: CPedStats::GetPedStatInfo(char *)
int __fastcall CPedStats::GetPedStatInfo(CPedStats *this, char *a2)
{
  int v3; // r6
  int i; // r4

  v3 = 0;
  for ( i = CPedStats::ms_apPedStats; strcmp((const char *)(i + 4), (const char *)this); i += 52 )
  {
    if ( (unsigned int)++v3 > 0x2A )
      return 0;
  }
  return i;
}


// ============================================================

// Address: 0x4c33f8
// Original: _ZN9CPedStats14GetPedStatTypeEPc
// Demangled: CPedStats::GetPedStatType(char *)
int __fastcall CPedStats::GetPedStatType(CPedStats *this, char *a2)
{
  int v3; // r4
  const char *i; // r6

  v3 = 0;
  for ( i = (const char *)(CPedStats::ms_apPedStats + 4); strcmp(i, (const char *)this); i += 52 )
  {
    if ( (unsigned int)++v3 > 0x2A )
      return 16;
  }
  return v3;
}


// ============================================================

// Address: 0x4c3430
// Original: _ZN9CPedStats20FindIndexWithPedStatEPS_
// Demangled: CPedStats::FindIndexWithPedStat(CPedStats*)
int __fastcall CPedStats::FindIndexWithPedStat(CPedStats *this, CPedStats *a2)
{
  char *v2; // r1
  int result; // r0

  v2 = (char *)this - CPedStats::ms_apPedStats + 52;
  result = -1;
  while ( 1 )
  {
    ++result;
    v2 -= 52;
    if ( !v2 )
      break;
    if ( result >= 42 )
      return 0;
  }
  return result;
}


// ============================================================
