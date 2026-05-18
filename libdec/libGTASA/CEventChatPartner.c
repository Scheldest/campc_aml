
// Address: 0x193328
// Original: j__ZN17CEventChatPartnerC2EbP4CPed
// Demangled: CEventChatPartner::CEventChatPartner(bool,CPed *)
// attributes: thunk
void __fastcall CEventChatPartner::CEventChatPartner(CEventChatPartner *this, bool a2, CPed *a3)
{
  _ZN17CEventChatPartnerC2EbP4CPed(this, a2, a3);
}


// ============================================================

// Address: 0x1965b8
// Original: j__ZN17CEventChatPartnerD2Ev
// Demangled: CEventChatPartner::~CEventChatPartner()
// attributes: thunk
void __fastcall CEventChatPartner::~CEventChatPartner(CEventChatPartner *this)
{
  _ZN17CEventChatPartnerD2Ev(this);
}


// ============================================================

// Address: 0x3746fc
// Original: _ZN17CEventChatPartnerC2EbP4CPed
// Demangled: CEventChatPartner::CEventChatPartner(bool,CPed *)
void __fastcall CEventChatPartner::CEventChatPartner(CEventChatPartner *this, bool a2, CPed *a3)
{
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 9) = a2;
  *(_DWORD *)this = &off_666350;
  *((_DWORD *)this + 3) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)this + 3);
}


// ============================================================

// Address: 0x374730
// Original: _ZN17CEventChatPartnerD2Ev
// Demangled: CEventChatPartner::~CEventChatPartner()
void __fastcall CEventChatPartner::~CEventChatPartner(CEventChatPartner *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666350;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x374758
// Original: _ZN17CEventChatPartnerD0Ev
// Demangled: CEventChatPartner::~CEventChatPartner()
void __fastcall CEventChatPartner::~CEventChatPartner(CEventChatPartner *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_666350;
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

// Address: 0x3747ac
// Original: _ZNK17CEventChatPartner10AffectsPedEP4CPed
// Demangled: CEventChatPartner::AffectsPed(CPed *)
bool __fastcall CEventChatPartner::AffectsPed(CEventChatPartner *this, CPed *a2)
{
  return CPed::IsAlive(a2) == 1 && *((_DWORD *)this + 3) != 0;
}


// ============================================================

// Address: 0x37a058
// Original: _ZNK17CEventChatPartner12GetEventTypeEv
// Demangled: CEventChatPartner::GetEventType(void)
int __fastcall CEventChatPartner::GetEventType(CEventChatPartner *this)
{
  return 19;
}


// ============================================================

// Address: 0x37a05c
// Original: _ZNK17CEventChatPartner16GetEventPriorityEv
// Demangled: CEventChatPartner::GetEventPriority(void)
int __fastcall CEventChatPartner::GetEventPriority(CEventChatPartner *this)
{
  return 5;
}


// ============================================================

// Address: 0x37a060
// Original: _ZNK17CEventChatPartner11GetLifeTimeEv
// Demangled: CEventChatPartner::GetLifeTime(void)
int __fastcall CEventChatPartner::GetLifeTime(CEventChatPartner *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a064
// Original: _ZNK17CEventChatPartner5CloneEv
// Demangled: CEventChatPartner::Clone(void)
int __fastcall CEventChatPartner::Clone(CEventChatPartner *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  CEntity *v7; // r2
  char v8; // r0

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
  v8 = *((_BYTE *)this + 9);
  *(_BYTE *)(v3 + 8) = 0;
  *(_BYTE *)(v3 + 9) = v8;
  *(_DWORD *)v3 = &off_666350;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 12) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 12));
  return v3;
}


// ============================================================
