
// Address: 0x196268
// Original: j__ZN13CEventGunShotC2EP7CEntity7CVectorS2_b
// Demangled: CEventGunShot::CEventGunShot(CEntity *,CVector,CVector,bool)
// attributes: thunk
int CEventGunShot::CEventGunShot()
{
  return _ZN13CEventGunShotC2EP7CEntity7CVectorS2_b();
}


// ============================================================

// Address: 0x370b2c
// Original: _ZN13CEventGunShotC2EP7CEntity7CVectorS2_b
// Demangled: CEventGunShot::CEventGunShot(CEntity *,CVector,CVector,bool)
int __fastcall CEventGunShot::CEventGunShot(
        int a1,
        CEntity *a2,
        int a3,
        int a4,
        int a5,
        arg6_370B2C a6,
        int a7,
        char a8)
{
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 13107456;
  *(_WORD *)(a1 + 12) = -1;
  *(_DWORD *)(a1 + 20) = a3;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 40) = a7;
  *(arg6_370B2C *)(a1 + 32) = a6;
  *(_BYTE *)(a1 + 44) = a8;
  *(_DWORD *)a1 = &off_665E20;
  *(_DWORD *)(a1 + 16) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)(a1 + 16));
  return a1;
}


// ============================================================

// Address: 0x370bbc
// Original: _ZN13CEventGunShotD0Ev
// Demangled: CEventGunShot::~CEventGunShot()
void __fastcall CEventGunShot::~CEventGunShot(CEventGunShot *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_665E20;
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

// Address: 0x370c10
// Original: _ZNK13CEventGunShot17TakesPriorityOverERK6CEvent
// Demangled: CEventGunShot::TakesPriorityOver(CEvent const&)
int __fastcall CEventGunShot::TakesPriorityOver(CEventGunShot *this, const CEvent *a2)
{
  int v4; // r6
  CPed *v5; // r0
  int IsPlayer; // r5
  int v7; // r5
  CPed *v9; // r0
  int v10; // r0

  v4 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2);
  if ( v4 == (*(int (__fastcall **)(CEventGunShot *))(*(_DWORD *)this + 8))(this) )
  {
    v5 = (CPed *)*((_DWORD *)this + 4);
    if ( v5 && (*((_BYTE *)v5 + 58) & 7) == 3 )
      IsPlayer = CPed::IsPlayer(v5);
    else
      IsPlayer = 0;
    v9 = (CPed *)*((_DWORD *)a2 + 4);
    if ( v9 && (*((_BYTE *)v9 + 58) & 7) == 3 )
      v10 = CPed::IsPlayer(v9) ^ 1;
    else
      v10 = 1;
    return v10 & IsPlayer;
  }
  else
  {
    v7 = (*(int (__fastcall **)(CEventGunShot *))(*(_DWORD *)this + 12))(this);
    return v7 >= (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 12))(a2);
  }
}


// ============================================================

// Address: 0x370c94
// Original: _ZNK13CEventGunShot10AffectsPedEP4CPed
// Demangled: CEventGunShot::AffectsPed(CPed *)
bool __fastcall CEventGunShot::AffectsPed(CEventGunShot *this, CPed *a2, const CPed *a3)
{
  float32x2_t v3; // d4
  float32x2_t v4; // d5
  const CPed *v7; // r1
  bool v8; // zf
  CVehicle *v9; // r0
  CWanted *PlayerWanted; // r0
  CWanted *v11; // r0
  int v12; // r6
  int v13; // r2
  float *v14; // r0
  int v15; // r3
  float *v16; // r1
  float *v17; // r6
  float v18; // s2
  float v19; // s4
  float v20; // s0
  int v21; // r2
  int v22; // r2
  int v23; // r5
  bool v25; // [sp+14h] [bp-14h]

  v7 = (const CPed *)*((_DWORD *)this + 4);
  if ( !v7 || (*((_BYTE *)v7 + 58) & 7) == 3 && CPedGroups::AreInSameGroup(a2, v7, a3) )
    return 0;
  v9 = (CVehicle *)(*((unsigned __int8 *)a2 + 1157) << 31);
  v8 = v9 == 0;
  if ( v9 )
  {
    v9 = (CVehicle *)*((_DWORD *)a2 + 356);
    v8 = v9 == 0;
  }
  if ( !v8 && CVehicle::IsPassenger(v9, a2) == 1 && *(_DWORD *)(*((_DWORD *)a2 + 356) + 1124) )
    return 0;
  if ( *((_DWORD *)a2 + 359) == 6 && *(int *)(FindPlayerWanted(-1) + 44) >= 1 )
  {
    PlayerWanted = (CWanted *)FindPlayerWanted(-1);
    if ( CWanted::IsInPursuit(PlayerWanted, a2)
      || (v11 = (CWanted *)FindPlayerWanted(-1), CWanted::CanCopJoinPursuit(v11, a2) == 1) )
    {
      v12 = *((_DWORD *)this + 4);
      if ( v12 != FindPlayerPed(-1) )
        return 0;
    }
  }
  if ( CPed::IsAlive(a2) != 1 || *((CPed **)this + 4) == a2 || CPed::IsPlayer(a2) )
    return 0;
  v13 = *((_DWORD *)this + 4);
  v14 = (float *)*((_DWORD *)a2 + 5);
  v15 = *(_DWORD *)(v13 + 20);
  v16 = v14 + 12;
  if ( !v14 )
    v16 = (float *)((char *)a2 + 4);
  v17 = (float *)(v15 + 48);
  v18 = *v16;
  v19 = v16[1];
  v20 = v16[2];
  if ( !v15 )
    v17 = (float *)(v13 + 4);
  v21 = *((unsigned __int8 *)a2 + 1096);
  if ( *(float *)&CEventGunShot::ms_fGunShotSenseRangeForRiot2 <= 0.0 )
  {
    if ( v21 == 2 )
    {
      v22 = *((_DWORD *)a2 + 272);
      v3.n64_u32[0] = *(_DWORD *)(v22 + 188);
      v4.n64_u32[0] = *(_DWORD *)(v22 + 192);
      v3.n64_u32[0] = vmax_f32(v3, v4).n64_u32[0];
    }
    else
    {
      v3.n64_u32[0] = 1110704128;
    }
  }
  else
  {
    v3.n64_u32[0] = 1110704128;
    if ( v21 == 2 )
      v3.n64_u32[0] = CEventGunShot::ms_fGunShotSenseRangeForRiot2;
  }
  if ( (float)((float)((float)((float)(v18 - *v17) * (float)(v18 - *v17))
                     + (float)((float)(v19 - v17[1]) * (float)(v19 - v17[1])))
             + (float)((float)(v20 - v17[2]) * (float)(v20 - v17[2]))) > (float)(v3.n64_f32[0] * v3.n64_f32[0]) )
    return 0;
  if ( !*((_BYTE *)this + 44) )
    return 1;
  v23 = 0;
  if ( (float)((float)((float)((float)(*((float *)this + 5) - v18) * v14[4])
                     + (float)((float)(*((float *)this + 6) - v19) * v14[5]))
             + (float)((float)(*((float *)this + 7) - v20) * v14[6])) > 0.0 )
    return CWorld::GetIsLineOfSightClear(
             (CEventGunShot *)((char *)this + 20),
             (const CVector *)v16,
             (const CVector *)((char *)&stderr + 1),
             1,
             1,
             1,
             1,
             0,
             0,
             v25) == 1;
  return v23;
}


// ============================================================

// Address: 0x370e6c
// Original: _ZNK13CEventGunShot15IsCriminalEventEv
// Demangled: CEventGunShot::IsCriminalEvent(void)
bool __fastcall CEventGunShot::IsCriminalEvent(CEventGunShot *this)
{
  CPed *v1; // r0

  v1 = (CPed *)*((_DWORD *)this + 4);
  return v1 && (*((_BYTE *)v1 + 58) & 7) == 3 && CPed::IsPlayer(v1);
}


// ============================================================

// Address: 0x370e94
// Original: _ZNK13CEventGunShot19ReportCriminalEventEP4CPed
// Demangled: CEventGunShot::ReportCriminalEvent(CPed *)
void __fastcall CEventGunShot::ReportCriminalEvent(CEventGunShot *this, CPed *a2)
{
  ;
}


// ============================================================

// Address: 0x379454
// Original: _ZNK13CEventGunShot12GetEventTypeEv
// Demangled: CEventGunShot::GetEventType(void)
int __fastcall CEventGunShot::GetEventType(CEventGunShot *this)
{
  return 15;
}


// ============================================================

// Address: 0x379458
// Original: _ZNK13CEventGunShot16GetEventPriorityEv
// Demangled: CEventGunShot::GetEventPriority(void)
int __fastcall CEventGunShot::GetEventPriority(CEventGunShot *this)
{
  return 35;
}


// ============================================================

// Address: 0x37945c
// Original: _ZNK13CEventGunShot11GetLifeTimeEv
// Demangled: CEventGunShot::GetLifeTime(void)
int __fastcall CEventGunShot::GetLifeTime(CEventGunShot *this)
{
  return 0;
}


// ============================================================

// Address: 0x379460
// Original: _ZNK13CEventGunShot15GetSourceEntityEv
// Demangled: CEventGunShot::GetSourceEntity(void)
int __fastcall CEventGunShot::GetSourceEntity(CEventGunShot *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x379464
// Original: _ZNK13CEventGunShot18GetLocalSoundLevelEv
// Demangled: CEventGunShot::GetLocalSoundLevel(void)
int __fastcall CEventGunShot::GetLocalSoundLevel(CEventGunShot *this)
{
  int *v1; // r1

  v1 = &dword_379474;
  if ( *((_BYTE *)this + 44) )
    v1 = &dword_379478;
  return *v1;
}


// ============================================================

// Address: 0x37947c
// Original: _ZNK13CEventGunShot27CanBeInterruptedBySameEventEv
// Demangled: CEventGunShot::CanBeInterruptedBySameEvent(void)
int __fastcall CEventGunShot::CanBeInterruptedBySameEvent(CEventGunShot *this)
{
  return 1;
}


// ============================================================

// Address: 0x379480
// Original: _ZNK13CEventGunShot13CloneEditableEv
// Demangled: CEventGunShot::CloneEditable(void)
int __fastcall CEventGunShot::CloneEditable(CEventGunShot *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r2
  __int64 v8; // kr08_8
  char v9; // r12
  __int64 *v10; // r0
  __int64 v11; // d16
  __int64 v12; // d17

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
  v8 = *(_QWORD *)((char *)this + 36);
  v9 = *((_BYTE *)this + 44);
  v10 = (__int64 *)((char *)this + 20);
  v11 = *v10;
  v12 = v10[1];
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_QWORD *)(v3 + 36) = v8;
  *(_QWORD *)(v3 + 20) = v11;
  *(_QWORD *)(v3 + 28) = v12;
  *(_BYTE *)(v3 + 44) = v9;
  *(_DWORD *)v3 = &off_665E20;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
