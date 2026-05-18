
// Address: 0x18d170
// Original: j__ZN15CEventPedToFleeC2EP4CPed
// Demangled: CEventPedToFlee::CEventPedToFlee(CPed *)
// attributes: thunk
void __fastcall CEventPedToFlee::CEventPedToFlee(CEventPedToFlee *this, CPed *a2)
{
  _ZN15CEventPedToFleeC2EP4CPed(this, a2);
}


// ============================================================

// Address: 0x19580c
// Original: j__ZN15CEventPedToFleeD2Ev
// Demangled: CEventPedToFlee::~CEventPedToFlee()
// attributes: thunk
void __fastcall CEventPedToFlee::~CEventPedToFlee(CEventPedToFlee *this)
{
  _ZN15CEventPedToFleeD2Ev(this);
}


// ============================================================

// Address: 0x374af4
// Original: _ZN15CEventPedToFleeC2EP4CPed
// Demangled: CEventPedToFlee::CEventPedToFlee(CPed *)
void __fastcall CEventPedToFlee::CEventPedToFlee(CEventPedToFlee *this, CPed *a2)
{
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_666484;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x374b28
// Original: _ZN15CEventPedToFleeD2Ev
// Demangled: CEventPedToFlee::~CEventPedToFlee()
void __fastcall CEventPedToFlee::~CEventPedToFlee(CEventPedToFlee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666484;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x374b50
// Original: _ZN15CEventPedToFleeD0Ev
// Demangled: CEventPedToFlee::~CEventPedToFlee()
void __fastcall CEventPedToFlee::~CEventPedToFlee(CEventPedToFlee *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666484;
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

// Address: 0x374ba4
// Original: _ZNK15CEventPedToFlee10AffectsPedEP4CPed
// Demangled: CEventPedToFlee::AffectsPed(CPed *)
int __fastcall CEventPedToFlee::AffectsPed(CEventPedToFlee *this, CPed *a2)
{
  return sub_196874(a2);
}


// ============================================================

// Address: 0x37a2cc
// Original: _ZNK15CEventPedToFlee12GetEventTypeEv
// Demangled: CEventPedToFlee::GetEventType(void)
int __fastcall CEventPedToFlee::GetEventType(CEventPedToFlee *this)
{
  return 26;
}


// ============================================================

// Address: 0x37a2d0
// Original: _ZNK15CEventPedToFlee16GetEventPriorityEv
// Demangled: CEventPedToFlee::GetEventPriority(void)
int __fastcall CEventPedToFlee::GetEventPriority(CEventPedToFlee *this)
{
  return 2;
}


// ============================================================

// Address: 0x37a2d4
// Original: _ZNK15CEventPedToFlee11GetLifeTimeEv
// Demangled: CEventPedToFlee::GetLifeTime(void)
int __fastcall CEventPedToFlee::GetLifeTime(CEventPedToFlee *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a2d8
// Original: _ZNK15CEventPedToFlee5CloneEv
// Demangled: CEventPedToFlee::Clone(void)
int __fastcall CEventPedToFlee::Clone(CEventPedToFlee *this)
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
  v7 = (CEntity *)*((_DWORD *)this + 3);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)v3 = &off_666484;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================
