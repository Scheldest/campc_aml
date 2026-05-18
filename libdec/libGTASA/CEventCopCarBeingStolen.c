
// Address: 0x18c234
// Original: j__ZN23CEventCopCarBeingStolenD2Ev
// Demangled: CEventCopCarBeingStolen::~CEventCopCarBeingStolen()
// attributes: thunk
void __fastcall CEventCopCarBeingStolen::~CEventCopCarBeingStolen(CEventCopCarBeingStolen *this)
{
  _ZN23CEventCopCarBeingStolenD2Ev(this);
}


// ============================================================

// Address: 0x191790
// Original: j__ZN23CEventCopCarBeingStolenC2EP4CPedP8CVehicle
// Demangled: CEventCopCarBeingStolen::CEventCopCarBeingStolen(CPed *,CVehicle *)
// attributes: thunk
void __fastcall CEventCopCarBeingStolen::CEventCopCarBeingStolen(CEventCopCarBeingStolen *this, CPed *a2, CVehicle *a3)
{
  _ZN23CEventCopCarBeingStolenC2EP4CPedP8CVehicle(this, a2, a3);
}


// ============================================================

// Address: 0x376ee8
// Original: _ZN23CEventCopCarBeingStolenC2EP4CPedP8CVehicle
// Demangled: CEventCopCarBeingStolen::CEventCopCarBeingStolen(CPed *,CVehicle *)
void __fastcall CEventCopCarBeingStolen::CEventCopCarBeingStolen(CEventCopCarBeingStolen *this, CPed *a2, CVehicle *a3)
{
  CVehicle **v4; // r5

  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_6668C4;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = a3;
  v4 = (CVehicle **)((char *)this + 16);
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
  {
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
    a3 = *v4;
  }
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x376f30
// Original: _ZN23CEventCopCarBeingStolenD2Ev
// Demangled: CEventCopCarBeingStolen::~CEventCopCarBeingStolen()
void __fastcall CEventCopCarBeingStolen::~CEventCopCarBeingStolen(CEventCopCarBeingStolen *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6668C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x376f64
// Original: _ZN23CEventCopCarBeingStolenD0Ev
// Demangled: CEventCopCarBeingStolen::~CEventCopCarBeingStolen()
void __fastcall CEventCopCarBeingStolen::~CEventCopCarBeingStolen(CEventCopCarBeingStolen *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CEntity *v4; // r0
  int v5; // r0
  int v6; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_6668C4;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CEntity *)*((_DWORD *)this + 4);
  if ( v4 )
    CEntity::CleanUpOldReference(v4, (CEntity **)this + 4);
  v5 = CPools::ms_pEventPool;
  v6 = -252645135 * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2);
  *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4) + v6) = *(_BYTE *)(*(_DWORD *)(CPools::ms_pEventPool + 4)
                                                                     - 252645135
                                                                     * (((int)this - *(_DWORD *)CPools::ms_pEventPool) >> 2)) | 0x80;
  if ( v6 < *(_DWORD *)(v5 + 12) )
    *(_DWORD *)(v5 + 12) = v6;
}


// ============================================================

// Address: 0x376fc4
// Original: _ZNK23CEventCopCarBeingStolen10AffectsPedEP4CPed
// Demangled: CEventCopCarBeingStolen::AffectsPed(CPed *)
int __fastcall CEventCopCarBeingStolen::AffectsPed(CEventCopCarBeingStolen *this, CPed *a2)
{
  CPed *v4; // r0
  bool v5; // zf
  int IsAlive; // r0
  bool v7; // zf

  v4 = (CPed *)*((_DWORD *)this + 3);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((_DWORD *)this + 4) == 0;
  if ( v5 || CPed::IsAlive(v4) != 1 )
    return 0;
  IsAlive = CPed::IsAlive(a2);
  v7 = IsAlive == 1;
  if ( IsAlive == 1 )
    v7 = *((_DWORD *)a2 + 359) == 6;
  if ( v7 && *((_DWORD *)this + 4) == *((_DWORD *)a2 + 356) )
    return *((_BYTE *)a2 + 1157) & 1;
  else
    return 0;
}


// ============================================================

// Address: 0x37aa9c
// Original: _ZNK23CEventCopCarBeingStolen12GetEventTypeEv
// Demangled: CEventCopCarBeingStolen::GetEventType(void)
int __fastcall CEventCopCarBeingStolen::GetEventType(CEventCopCarBeingStolen *this)
{
  return 16;
}


// ============================================================

// Address: 0x37aaa0
// Original: _ZNK23CEventCopCarBeingStolen16GetEventPriorityEv
// Demangled: CEventCopCarBeingStolen::GetEventPriority(void)
int __fastcall CEventCopCarBeingStolen::GetEventPriority(CEventCopCarBeingStolen *this)
{
  return 38;
}


// ============================================================

// Address: 0x37aaa4
// Original: _ZNK23CEventCopCarBeingStolen11GetLifeTimeEv
// Demangled: CEventCopCarBeingStolen::GetLifeTime(void)
int __fastcall CEventCopCarBeingStolen::GetLifeTime(CEventCopCarBeingStolen *this)
{
  return 0;
}


// ============================================================

// Address: 0x37aaa8
// Original: _ZNK23CEventCopCarBeingStolen5CloneEv
// Demangled: CEventCopCarBeingStolen::Clone(void)
int __fastcall CEventCopCarBeingStolen::Clone(CEventCopCarBeingStolen *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r5
  int v6; // r2
  CEntity *v7; // r0
  __int64 v8; // kr08_8

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
  v8 = *(_QWORD *)((char *)this + 12);
  v7 = (CEntity *)*((_DWORD *)this + 4);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_6668C4;
  *(_DWORD *)(v3 + 4) = 0;
  *(_QWORD *)(v3 + 12) = __PAIR64__((unsigned int)v7, v8);
  if ( (_DWORD)v8 )
  {
    CEntity::RegisterReference((CEntity *)v8, (CEntity **)(v3 + 12));
    v7 = *(CEntity **)(v3 + 16);
  }
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
