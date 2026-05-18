
// Address: 0x3777a4
// Original: _ZNK16CEventSoundQuiet10AffectsPedEP4CPed
// Demangled: CEventSoundQuiet::AffectsPed(CPed *)
int __fastcall CEventSoundQuiet::AffectsPed(float32x2_t *this, CPed *a2)
{
  int v4; // r0
  const CVector *v5; // r8
  int v6; // r6
  const CVector *v7; // r2
  float v8; // s16
  int CurrentEvent; // r0
  float32x2_t *v10; // r9
  int v11; // r6
  float v12; // s0
  float32x2_t v13; // d16
  unsigned __int64 v14; // d1
  int v16; // r0

  if ( CPed::IsPlayer(a2)
    || CPed::IsAlive(a2) != 1
    || !(*(int (__fastcall **)(float32x2_t *))(this->n64_u32[0] + 44))(this) )
  {
    return 0;
  }
  v4 = *((_DWORD *)a2 + 5);
  v5 = (CPed *)((char *)a2 + 4);
  v6 = 0;
  v7 = (CPed *)((char *)a2 + 4);
  if ( v4 )
    v7 = (const CVector *)(v4 + 48);
  v8 = COERCE_FLOAT(CEvent::GetSoundLevel((CEvent *)this, 0, v7));
  if ( v8 >= 30.0 )
  {
    CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56));
    v10 = (float32x2_t *)CurrentEvent;
    if ( CurrentEvent
      && (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 8))(CurrentEvent) == 62
      && (v11 = (*(int (__fastcall **)(float32x2_t *))(v10->n64_u32[0] + 44))(v10),
          v11 == (*(int (__fastcall **)(float32x2_t *))(this->n64_u32[0] + 44))(this))
      && ((signed __int32)(this[3].n64_u32[0] - v10[3].n64_u32[0]) < 2000
       || (v12 = this[3].n64_f32[1] - v10[3].n64_f32[1],
           v13.n64_u64[0] = vsub_f32(this[4], v10[4]).n64_u64[0],
           v14 = vmul_f32(v13, v13).n64_u64[0],
           (float)((float)((float)(v12 * v12) + *(float *)&v14) + *((float *)&v14 + 1)) < 1.0)) )
    {
      v16 = *((_DWORD *)a2 + 5);
      v6 = 0;
      if ( v16 )
        v5 = (const CVector *)(v16 + 48);
      if ( (float)(v8 - COERCE_FLOAT(CEvent::GetSoundLevel((CEvent *)v10, 0, v5))) >= 3.0 )
        return 1;
    }
    else
    {
      return 1;
    }
  }
  return v6;
}


// ============================================================

// Address: 0x379020
// Original: _ZN16CEventSoundQuietD2Ev
// Demangled: CEventSoundQuiet::~CEventSoundQuiet()
void __fastcall CEventSoundQuiet::~CEventSoundQuiet(CEventSoundQuiet *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66715C;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x379048
// Original: _ZN16CEventSoundQuietD0Ev
// Demangled: CEventSoundQuiet::~CEventSoundQuiet()
void __fastcall CEventSoundQuiet::~CEventSoundQuiet(CEventSoundQuiet *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66715C;
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

// Address: 0x37909c
// Original: _ZNK16CEventSoundQuiet12GetEventTypeEv
// Demangled: CEventSoundQuiet::GetEventType(void)
int __fastcall CEventSoundQuiet::GetEventType(CEventSoundQuiet *this)
{
  return 62;
}


// ============================================================

// Address: 0x3790a0
// Original: _ZNK16CEventSoundQuiet16GetEventPriorityEv
// Demangled: CEventSoundQuiet::GetEventPriority(void)
int __fastcall CEventSoundQuiet::GetEventPriority(CEventSoundQuiet *this)
{
  return 8;
}


// ============================================================

// Address: 0x3790a4
// Original: _ZNK16CEventSoundQuiet11GetLifeTimeEv
// Demangled: CEventSoundQuiet::GetLifeTime(void)
int __fastcall CEventSoundQuiet::GetLifeTime(CEventSoundQuiet *this)
{
  return 0;
}


// ============================================================

// Address: 0x3790a8
// Original: _ZNK16CEventSoundQuiet15GetSourceEntityEv
// Demangled: CEventSoundQuiet::GetSourceEntity(void)
int __fastcall CEventSoundQuiet::GetSourceEntity(CEventSoundQuiet *this)
{
  return *((_DWORD *)this + 4);
}


// ============================================================

// Address: 0x3790ac
// Original: _ZNK16CEventSoundQuiet18GetLocalSoundLevelEv
// Demangled: CEventSoundQuiet::GetLocalSoundLevel(void)
int __fastcall CEventSoundQuiet::GetLocalSoundLevel(CEventSoundQuiet *this)
{
  return *((_DWORD *)this + 5);
}


// ============================================================

// Address: 0x3790b0
// Original: _ZNK16CEventSoundQuiet27CanBeInterruptedBySameEventEv
// Demangled: CEventSoundQuiet::CanBeInterruptedBySameEvent(void)
int __fastcall CEventSoundQuiet::CanBeInterruptedBySameEvent(CEventSoundQuiet *this)
{
  return 1;
}


// ============================================================

// Address: 0x3790b4
// Original: _ZNK16CEventSoundQuiet13CloneEditableEv
// Demangled: CEventSoundQuiet::CloneEditable(void)
int __fastcall CEventSoundQuiet::CloneEditable(CEventSoundQuiet *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  __int64 v7; // kr08_8
  int v8; // r3
  __int64 v9; // d16
  int v11; // r2
  int v12; // r1
  __int64 *v13; // r3
  __int64 v14; // d16

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
  v7 = *((_QWORD *)this + 2);
  v8 = *((_DWORD *)this + 6);
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)(v3 + 20) = HIDWORD(v7);
  *(_DWORD *)(v3 + 24) = v8;
  *(_DWORD *)v3 = &off_66715C;
  *(_DWORD *)(v3 + 16) = v7;
  v9 = *(_QWORD *)((char *)this + 28);
  *(_DWORD *)(v3 + 36) = *((_DWORD *)this + 9);
  *(_QWORD *)(v3 + 28) = v9;
  if ( (_DWORD)v7 )
  {
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 16));
    v8 = *(_DWORD *)(v3 + 24);
  }
  if ( v8 != -1 )
    return v3;
  v11 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v3 + 24) = CTimer::m_snTimeInMilliseconds;
  v12 = *(_DWORD *)(v11 + 20);
  v13 = (__int64 *)(v12 + 48);
  if ( !v12 )
    v13 = (__int64 *)(v11 + 4);
  v14 = *v13;
  *(_DWORD *)(v3 + 36) = *((_DWORD *)v13 + 2);
  *(_QWORD *)(v3 + 28) = v14;
  return v3;
}


// ============================================================
