
// Address: 0x19a174
// Original: j__ZN12CEventDangerD2Ev
// Demangled: CEventDanger::~CEventDanger()
// attributes: thunk
void __fastcall CEventDanger::~CEventDanger(CEventDanger *this)
{
  _ZN12CEventDangerD2Ev(this);
}


// ============================================================

// Address: 0x19ab7c
// Original: j__ZN12CEventDangerC2EP7CEntityf
// Demangled: CEventDanger::CEventDanger(CEntity *,float)
// attributes: thunk
void __fastcall CEventDanger::CEventDanger(CEventDanger *this, CEntity *a2, float a3)
{
  _ZN12CEventDangerC2EP7CEntityf(this, a2, a3);
}


// ============================================================

// Address: 0x377e2c
// Original: _ZN12CEventDangerC2EP7CEntityf
// Demangled: CEventDanger::CEventDanger(CEntity *,float)
void __fastcall CEventDanger::CEventDanger(CEventDanger *this, CEntity *a2, float a3)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_666C28;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
  *((float *)this + 5) = a3;
}


// ============================================================

// Address: 0x377e7c
// Original: _ZN12CEventDangerD2Ev
// Demangled: CEventDanger::~CEventDanger()
void __fastcall CEventDanger::~CEventDanger(CEventDanger *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666C28;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x377ea4
// Original: _ZN12CEventDangerD0Ev
// Demangled: CEventDanger::~CEventDanger()
void __fastcall CEventDanger::~CEventDanger(CEventDanger *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_666C28;
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

// Address: 0x377ef8
// Original: _ZNK12CEventDanger10AffectsPedEP4CPed
// Demangled: CEventDanger::AffectsPed(CPed *)
int __fastcall CEventDanger::AffectsPed(CEventDanger *this, CPed *a2)
{
  int v2; // r2
  bool v3; // zf
  float32x2_t *v4; // lr
  float32x2_t *v5; // r12
  float32x2_t *v6; // r3
  float32x2_t *v7; // r2
  float32x2_t v8; // d16
  unsigned __int64 v9; // d0

  v2 = *((_DWORD *)this + 4);
  v3 = v2 == 0;
  if ( v2 )
    v3 = v2 == *((_DWORD *)a2 + 356);
  if ( v3 )
    return 0;
  v4 = *(float32x2_t **)(v2 + 20);
  v5 = (float32x2_t *)*((_DWORD *)a2 + 5);
  v6 = v4 + 6;
  if ( !v4 )
    v6 = (float32x2_t *)(v2 + 4);
  v7 = v5 + 6;
  if ( !v5 )
    v7 = (float32x2_t *)((char *)a2 + 4);
  v8.n64_u64[0] = vsub_f32((float32x2_t)v7->n64_u64[0], (float32x2_t)v6->n64_u64[0]).n64_u64[0];
  v9 = vmul_f32(v8, v8).n64_u64[0];
  if ( (float)((float)(*(float *)&v9 + *((float *)&v9 + 1)) + 0.0) > (float)(*((float *)this + 5) * *((float *)this + 5)) )
    return 0;
  else
    return sub_196874(a2);
}


// ============================================================

// Address: 0x377f6c
// Original: _ZNK12CEventDanger15AffectsPedGroupEP9CPedGroup
// Demangled: CEventDanger::AffectsPedGroup(CPedGroup *)
int __fastcall CEventDanger::AffectsPedGroup(CEventDanger *this, CPedGroup *a2)
{
  int Leader; // r1
  int result; // r0
  int v6; // r12
  float32x2_t *v7; // r3
  float32x2_t *v8; // r5
  float32x2_t *v9; // r2
  float32x2_t *v10; // r1
  float32x2_t v11; // d16
  unsigned __int64 v12; // d0

  if ( !(*(int (__fastcall **)(CEventDanger *))(*(_DWORD *)this + 44))(this)
    || (*(_BYTE *)((*(int (__fastcall **)(CEventDanger *))(*(_DWORD *)this + 44))(this) + 58) & 7) != 3 )
  {
    return 0;
  }
  Leader = CPedGroupMembership::GetLeader((CPedGroup *)((char *)a2 + 8));
  result = 0;
  if ( Leader )
  {
    v6 = *((_DWORD *)this + 4);
    v7 = *(float32x2_t **)(Leader + 20);
    v8 = *(float32x2_t **)(v6 + 20);
    v9 = v7 + 6;
    if ( !v7 )
      v9 = (float32x2_t *)(Leader + 4);
    v10 = v8 + 6;
    if ( !v8 )
      v10 = (float32x2_t *)(v6 + 4);
    v11.n64_u64[0] = vsub_f32((float32x2_t)v9->n64_u64[0], (float32x2_t)v10->n64_u64[0]).n64_u64[0];
    v12 = vmul_f32(v11, v11).n64_u64[0];
    if ( (float)((float)(*(float *)&v12 + *((float *)&v12 + 1)) + 0.0) <= (float)(*((float *)this + 5)
                                                                                * *((float *)this + 5)) )
      return 1;
  }
  return result;
}


// ============================================================

// Address: 0x378000
// Original: _ZNK12CEventDanger15GetSourceEntityEv
// Demangled: CEventDanger::GetSourceEntity(void)
int __fastcall CEventDanger::GetSourceEntity(CEventDanger *this)
{
  int v1; // r1
  int result; // r0

  v1 = *((_DWORD *)this + 4);
  if ( !v1 )
    return 0;
  if ( (*(_BYTE *)(v1 + 58) & 7) != 2 )
    return *((_DWORD *)this + 4);
  result = *(_DWORD *)(v1 + 1124);
  if ( !result )
    return v1;
  return result;
}


// ============================================================

// Address: 0x37b0cc
// Original: _ZNK12CEventDanger12GetEventTypeEv
// Demangled: CEventDanger::GetEventType(void)
int __fastcall CEventDanger::GetEventType(CEventDanger *this)
{
  return 75;
}


// ============================================================

// Address: 0x37b0d0
// Original: _ZNK12CEventDanger16GetEventPriorityEv
// Demangled: CEventDanger::GetEventPriority(void)
int __fastcall CEventDanger::GetEventPriority(CEventDanger *this)
{
  return 20;
}


// ============================================================

// Address: 0x37b0d4
// Original: _ZNK12CEventDanger11GetLifeTimeEv
// Demangled: CEventDanger::GetLifeTime(void)
int __fastcall CEventDanger::GetLifeTime(CEventDanger *this)
{
  return 0;
}


// ============================================================

// Address: 0x37b0d8
// Original: _ZNK12CEventDanger13CloneEditableEv
// Demangled: CEventDanger::CloneEditable(void)
int __fastcall CEventDanger::CloneEditable(CEventDanger *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r5
  int v6; // r2
  __int64 v7; // kr08_8
  int result; // r0

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
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)v3 = &off_666C28;
  *(_DWORD *)(v3 + 16) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v3 + 16));
  result = v3;
  *(_DWORD *)(v3 + 20) = HIDWORD(v7);
  return result;
}


// ============================================================
