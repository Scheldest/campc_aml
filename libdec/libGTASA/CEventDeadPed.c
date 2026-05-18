
// Address: 0x1910f0
// Original: j__ZN13CEventDeadPedD2Ev
// Demangled: CEventDeadPed::~CEventDeadPed()
// attributes: thunk
void __fastcall CEventDeadPed::~CEventDeadPed(CEventDeadPed *this)
{
  _ZN13CEventDeadPedD2Ev(this);
}


// ============================================================

// Address: 0x19e268
// Original: j__ZN13CEventDeadPedC2EP4CPedbi
// Demangled: CEventDeadPed::CEventDeadPed(CPed *,bool,int)
// attributes: thunk
void __fastcall CEventDeadPed::CEventDeadPed(CEventDeadPed *this, CPed *a2, bool a3, int a4)
{
  _ZN13CEventDeadPedC2EP4CPedbi(this, a2, a3, a4);
}


// ============================================================

// Address: 0x373ae0
// Original: _ZN13CEventDeadPedC2EP4CPedbi
// Demangled: CEventDeadPed::CEventDeadPed(CPed *,bool,int)
void __fastcall CEventDeadPed::CEventDeadPed(CEventDeadPed *this, CPed *a2, bool a3, int a4)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *((_BYTE *)this + 20) = a3;
  *((_DWORD *)this + 6) = a4;
  *(_DWORD *)this = &off_66608C;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x373b28
// Original: _ZN13CEventDeadPedD2Ev
// Demangled: CEventDeadPed::~CEventDeadPed()
void __fastcall CEventDeadPed::~CEventDeadPed(CEventDeadPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66608C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x373b50
// Original: _ZN13CEventDeadPedD0Ev
// Demangled: CEventDeadPed::~CEventDeadPed()
void __fastcall CEventDeadPed::~CEventDeadPed(CEventDeadPed *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66608C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = CPools::ms_pEventPool;
  v5 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v5) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v5 < *(_DWORD *)(v4 + 12) )
    *(_DWORD *)(v4 + 12) = v5;
}


// ============================================================

// Address: 0x373ba4
// Original: _ZNK13CEventDeadPed10AffectsPedEP4CPed
// Demangled: CEventDeadPed::AffectsPed(CPed *)
bool __fastcall CEventDeadPed::AffectsPed(CEventDeadPed *this, float **a2)
{
  CPed *v4; // r1
  _BOOL4 result; // r0
  bool v6; // zf
  int LookAtEntity; // r0
  int v8; // r1
  float *v9; // r2
  int v10; // r0
  float *v11; // r3
  float *v12; // r5
  float v13; // s4
  float v14; // s2
  float v15; // s6
  float v16; // s0

  v4 = (CPed *)*((_DWORD *)this + 4);
  result = 0;
  v6 = v4 == 0;
  if ( v4 )
    v6 = v4 == (CPed *)a2;
  if ( !v6 )
  {
    if ( CPed::IsAlive((CPed *)a2) != 1 )
      return 0;
    if ( IKChainManager_c::IsLooking((IKChainManager_c *)&g_ikChainMan, (CPed *)a2) )
    {
      LookAtEntity = IKChainManager_c::GetLookAtEntity((IKChainManager_c *)&g_ikChainMan, (CPed *)a2);
      v8 = *((_DWORD *)this + 4);
      if ( LookAtEntity == v8 )
        return 0;
    }
    else
    {
      v8 = *((_DWORD *)this + 4);
    }
    if ( *(unsigned __int8 *)(v8 + 69) << 31 )
    {
      return 0;
    }
    else
    {
      v9 = a2[5];
      v10 = *(_DWORD *)(v8 + 20);
      v11 = v9 + 12;
      if ( !v9 )
        v11 = (float *)(a2 + 1);
      v12 = (float *)(v10 + 48);
      if ( !v10 )
        v12 = (float *)(v8 + 4);
      v13 = v12[1] - v11[1];
      v14 = *v12 - *v11;
      v15 = v12[2] - v11[2];
      v16 = (float)((float)(v14 * v14) + (float)(v13 * v13)) + (float)(v15 * v15);
      if ( !(*(unsigned __int8 *)(v8 + 1165) << 31) )
        return v16 < 400.0;
      result = 0;
      if ( v16 <= 64.0 && (float)((float)((float)(v14 * v9[4]) + (float)(v13 * v9[5])) + (float)(v15 * v9[6])) >= 0.0 )
        return v16 < 400.0;
    }
  }
  return result;
}


// ============================================================

// Address: 0x3799cc
// Original: _ZNK13CEventDeadPed12GetEventTypeEv
// Demangled: CEventDeadPed::GetEventType(void)
int __fastcall CEventDeadPed::GetEventType(CEventDeadPed *this)
{
  return 11;
}


// ============================================================

// Address: 0x3799d0
// Original: _ZNK13CEventDeadPed16GetEventPriorityEv
// Demangled: CEventDeadPed::GetEventPriority(void)
int __fastcall CEventDeadPed::GetEventPriority(CEventDeadPed *this)
{
  return 15;
}


// ============================================================

// Address: 0x3799d4
// Original: _ZNK13CEventDeadPed11GetLifeTimeEv
// Demangled: CEventDeadPed::GetLifeTime(void)
int __fastcall CEventDeadPed::GetLifeTime(CEventDeadPed *this)
{
  return 0;
}


// ============================================================

// Address: 0x3799d8
// Original: _ZNK13CEventDeadPed15GetSourceEntityEv
// Demangled: CEventDeadPed::GetSourceEntity(void)
int __fastcall CEventDeadPed::GetSourceEntity(CEventDeadPed *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x3799dc
// Original: _ZNK13CEventDeadPed18GetLocalSoundLevelEv
// Demangled: CEventDeadPed::GetLocalSoundLevel(void)
int __fastcall CEventDeadPed::GetLocalSoundLevel(CEventDeadPed *this)
{
  return 1114636288;
}


// ============================================================

// Address: 0x3799e4
// Original: _ZNK13CEventDeadPed13CloneEditableEv
// Demangled: CEventDeadPed::CloneEditable(void)
int __fastcall CEventDeadPed::CloneEditable(CEventDeadPed *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r2
  int v8; // lr
  char v9; // r0

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v3;
    if ( v3 == v4 )
    {
      v3 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v3);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v3) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v3 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = (CEntity *)*((_DWORD *)this + 4);
  v8 = *((_DWORD *)this + 6);
  v9 = *((_BYTE *)this + 20);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_BYTE *)(v3 + 20) = v9;
  *(_DWORD *)(v3 + 24) = v8;
  *(_DWORD *)v3 = &off_66608C;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
