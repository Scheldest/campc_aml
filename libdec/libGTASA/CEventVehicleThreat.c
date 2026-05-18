
// Address: 0x3752f0
// Original: _ZN19CEventVehicleThreatC2EP8CVehicle
// Demangled: CEventVehicleThreat::CEventVehicleThreat(CVehicle *)
void __fastcall CEventVehicleThreat::CEventVehicleThreat(CEventVehicleThreat *this, CVehicle *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_DWORD *)this = &off_6665BC;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
}


// ============================================================

// Address: 0x375330
// Original: _ZN19CEventVehicleThreatD2Ev
// Demangled: CEventVehicleThreat::~CEventVehicleThreat()
void __fastcall CEventVehicleThreat::~CEventVehicleThreat(CEventVehicleThreat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6665BC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x375358
// Original: _ZN19CEventVehicleThreatD0Ev
// Demangled: CEventVehicleThreat::~CEventVehicleThreat()
void __fastcall CEventVehicleThreat::~CEventVehicleThreat(CEventVehicleThreat *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_6665BC;
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

// Address: 0x3753ac
// Original: _ZNK19CEventVehicleThreat10AffectsPedEP4CPed
// Demangled: CEventVehicleThreat::AffectsPed(CPed *)
int __fastcall CEventVehicleThreat::AffectsPed(CEventVehicleThreat *this, CPed *a2)
{
  return sub_196874(a2);
}


// ============================================================

// Address: 0x37a4b0
// Original: _ZNK19CEventVehicleThreat12GetEventTypeEv
// Demangled: CEventVehicleThreat::GetEventType(void)
int __fastcall CEventVehicleThreat::GetEventType(CEventVehicleThreat *this)
{
  return 30;
}


// ============================================================

// Address: 0x37a4b4
// Original: _ZNK19CEventVehicleThreat16GetEventPriorityEv
// Demangled: CEventVehicleThreat::GetEventPriority(void)
int __fastcall CEventVehicleThreat::GetEventPriority(CEventVehicleThreat *this)
{
  return 19;
}


// ============================================================

// Address: 0x37a4b8
// Original: _ZNK19CEventVehicleThreat11GetLifeTimeEv
// Demangled: CEventVehicleThreat::GetLifeTime(void)
int __fastcall CEventVehicleThreat::GetLifeTime(CEventVehicleThreat *this)
{
  return 0;
}


// ============================================================

// Address: 0x37a4bc
// Original: _ZNK19CEventVehicleThreat13CloneEditableEv
// Demangled: CEventVehicleThreat::CloneEditable(void)
int __fastcall CEventVehicleThreat::CloneEditable(CEventVehicleThreat *this)
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
  *(_DWORD *)v3 = &off_6665BC;
  *(_DWORD *)(v3 + 16) = v7;
  if ( v7 )
    CEntity::RegisterReference(v7, (CEntity **)(v3 + 16));
  return v3;
}


// ============================================================
