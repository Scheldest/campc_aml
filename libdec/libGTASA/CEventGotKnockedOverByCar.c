
// Address: 0x18d6c4
// Original: j__ZN25CEventGotKnockedOverByCarC2EP8CVehicle
// Demangled: CEventGotKnockedOverByCar::CEventGotKnockedOverByCar(CVehicle *)
// attributes: thunk
void __fastcall CEventGotKnockedOverByCar::CEventGotKnockedOverByCar(CEventGotKnockedOverByCar *this, CVehicle *a2)
{
  _ZN25CEventGotKnockedOverByCarC2EP8CVehicle(this, a2);
}


// ============================================================

// Address: 0x19f5e0
// Original: j__ZN25CEventGotKnockedOverByCarD2Ev
// Demangled: CEventGotKnockedOverByCar::~CEventGotKnockedOverByCar()
// attributes: thunk
void __fastcall CEventGotKnockedOverByCar::~CEventGotKnockedOverByCar(CEventGotKnockedOverByCar *this)
{
  _ZN25CEventGotKnockedOverByCarD2Ev(this);
}


// ============================================================

// Address: 0x377204
// Original: _ZN25CEventGotKnockedOverByCarC2EP8CVehicle
// Demangled: CEventGotKnockedOverByCar::CEventGotKnockedOverByCar(CVehicle *)
void __fastcall CEventGotKnockedOverByCar::CEventGotKnockedOverByCar(CEventGotKnockedOverByCar *this, CVehicle *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_6669B0;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x377244
// Original: _ZN25CEventGotKnockedOverByCarD2Ev
// Demangled: CEventGotKnockedOverByCar::~CEventGotKnockedOverByCar()
void __fastcall CEventGotKnockedOverByCar::~CEventGotKnockedOverByCar(CEventGotKnockedOverByCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6669B0;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x37726c
// Original: _ZN25CEventGotKnockedOverByCarD0Ev
// Demangled: CEventGotKnockedOverByCar::~CEventGotKnockedOverByCar()
void __fastcall CEventGotKnockedOverByCar::~CEventGotKnockedOverByCar(CEventGotKnockedOverByCar *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6669B0;
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

// Address: 0x3772c0
// Original: _ZNK25CEventGotKnockedOverByCar10AffectsPedEP4CPed
// Demangled: CEventGotKnockedOverByCar::AffectsPed(CPed *)
int __fastcall CEventGotKnockedOverByCar::AffectsPed(CEventGotKnockedOverByCar *this, CPed *a2)
{
  if ( *((_DWORD *)this + 4) && !CPed::IsPlayer(a2) )
    return sub_196874(a2);
  else
    return 0;
}


// ============================================================

// Address: 0x3772e0
// Original: _ZNK25CEventGotKnockedOverByCar15GetSourceEntityEv
// Demangled: CEventGotKnockedOverByCar::GetSourceEntity(void)
int __fastcall CEventGotKnockedOverByCar::GetSourceEntity(CEventGotKnockedOverByCar *this)
{
  int v1; // r0

  v1 = *((_DWORD *)this + 4);
  if ( v1 )
    return *(_DWORD *)(v1 + 1124);
  else
    return 0;
}


// ============================================================

// Address: 0x37abe4
// Original: _ZNK25CEventGotKnockedOverByCar12GetEventTypeEv
// Demangled: CEventGotKnockedOverByCar::GetEventType(void)
int __fastcall CEventGotKnockedOverByCar::GetEventType(CEventGotKnockedOverByCar *this)
{
  return 43;
}


// ============================================================

// Address: 0x37abe8
// Original: _ZNK25CEventGotKnockedOverByCar16GetEventPriorityEv
// Demangled: CEventGotKnockedOverByCar::GetEventPriority(void)
int __fastcall CEventGotKnockedOverByCar::GetEventPriority(CEventGotKnockedOverByCar *this)
{
  return 37;
}


// ============================================================

// Address: 0x37abec
// Original: _ZNK25CEventGotKnockedOverByCar11GetLifeTimeEv
// Demangled: CEventGotKnockedOverByCar::GetLifeTime(void)
int __fastcall CEventGotKnockedOverByCar::GetLifeTime(CEventGotKnockedOverByCar *this)
{
  return 0;
}


// ============================================================

// Address: 0x37abf0
// Original: _ZNK25CEventGotKnockedOverByCar18GetLocalSoundLevelEv
// Demangled: CEventGotKnockedOverByCar::GetLocalSoundLevel(void)
int __fastcall CEventGotKnockedOverByCar::GetLocalSoundLevel(CEventGotKnockedOverByCar *this)
{
  return 1113325568;
}


// ============================================================

// Address: 0x37abf8
// Original: _ZNK25CEventGotKnockedOverByCar13CloneEditableEv
// Demangled: CEventGotKnockedOverByCar::CloneEditable(void)
int __fastcall CEventGotKnockedOverByCar::CloneEditable(CEventGotKnockedOverByCar *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r0

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
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 13107456;
  *(_WORD *)(v3 + 12) = -1;
  *(_DWORD *)v3 = &off_6669B0;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
