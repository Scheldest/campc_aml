
// Address: 0x3751f8
// Original: _ZNK33CEventAcquaintancePedHateBadlyLit10AffectsPedEP4CPed
// Demangled: CEventAcquaintancePedHateBadlyLit::AffectsPed(CPed *)
bool __fastcall CEventAcquaintancePedHateBadlyLit::AffectsPed(CEventAcquaintancePedHateBadlyLit *this, CPed *a2)
{
  const CPed *v4; // r2
  _BOOL4 result; // r0
  int CurrentEvent; // r0
  int v7; // r5
  int v8; // r6
  float v9; // s0
  float32x2_t v10; // d16
  unsigned __int64 v11; // d1

  if ( !*((_DWORD *)this + 4)
    || *((_DWORD *)a2 + 462)
    || CPed::IsAlive(a2) != 1
    || CPed::IsAlive(*((CPed **)this + 4)) != 1
    || CPedGroups::AreInSameGroup(a2, *((const CPed **)this + 4), v4) )
  {
    return 0;
  }
  CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56));
  v7 = CurrentEvent;
  if ( !CurrentEvent )
    return 1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)CurrentEvent + 8))(CurrentEvent) != 63 )
    return 1;
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 44))(v7);
  if ( v8 != (*(int (__fastcall **)(CEventAcquaintancePedHateBadlyLit *))(*(_DWORD *)this + 44))(this) )
    return 1;
  result = 0;
  if ( *((_DWORD *)this + 5) - *(_DWORD *)(v7 + 20) >= 2000 )
  {
    v9 = *((float *)this + 6) - *(float *)(v7 + 24);
    v10.n64_u64[0] = vsub_f32(*(float32x2_t *)((char *)this + 28), *(float32x2_t *)(v7 + 28)).n64_u64[0];
    v11 = vmul_f32(v10, v10).n64_u64[0];
    return (float)((float)((float)(v9 * v9) + *(float *)&v11) + *((float *)&v11 + 1)) >= 1.0;
  }
  return result;
}


// ============================================================

// Address: 0x3780ec
// Original: _ZN33CEventAcquaintancePedHateBadlyLitD0Ev
// Demangled: CEventAcquaintancePedHateBadlyLit::~CEventAcquaintancePedHateBadlyLit()
void __fastcall CEventAcquaintancePedHateBadlyLit::~CEventAcquaintancePedHateBadlyLit(
        CEventAcquaintancePedHateBadlyLit *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_66656C;
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

// Address: 0x378140
// Original: _ZNK33CEventAcquaintancePedHateBadlyLit12GetEventTypeEv
// Demangled: CEventAcquaintancePedHateBadlyLit::GetEventType(void)
int __fastcall CEventAcquaintancePedHateBadlyLit::GetEventType(CEventAcquaintancePedHateBadlyLit *this)
{
  return 63;
}


// ============================================================

// Address: 0x378144
// Original: _ZNK33CEventAcquaintancePedHateBadlyLit16GetEventPriorityEv
// Demangled: CEventAcquaintancePedHateBadlyLit::GetEventPriority(void)
int __fastcall CEventAcquaintancePedHateBadlyLit::GetEventPriority(CEventAcquaintancePedHateBadlyLit *this)
{
  return 25;
}


// ============================================================

// Address: 0x378148
// Original: _ZNK33CEventAcquaintancePedHateBadlyLit27CanBeInterruptedBySameEventEv
// Demangled: CEventAcquaintancePedHateBadlyLit::CanBeInterruptedBySameEvent(void)
int __fastcall CEventAcquaintancePedHateBadlyLit::CanBeInterruptedBySameEvent(CEventAcquaintancePedHateBadlyLit *this)
{
  return 1;
}


// ============================================================

// Address: 0x37814c
// Original: _ZNK33CEventAcquaintancePedHateBadlyLit13CloneEditableEv
// Demangled: CEventAcquaintancePedHateBadlyLit::CloneEditable(void)
int __fastcall CEventAcquaintancePedHateBadlyLit::CloneEditable(CEventAcquaintancePedHateBadlyLit *this)
{
  int v1; // r3
  _DWORD *v2; // r1
  int v3; // r2
  int v4; // r4
  int v5; // r6
  int v6; // r5
  __int64 v7; // kr08_8
  char *v8; // r6
  __int64 v9; // d16
  int v10; // r1
  __int64 *v11; // r2
  __int64 v12; // d16

  v1 = 0;
  v2 = (_DWORD *)CPools::ms_pEventPool;
  v4 = *(_DWORD *)(CPools::ms_pEventPool + 12);
  v3 = *(_DWORD *)(CPools::ms_pEventPool + 8);
  do
  {
    v2[3] = ++v4;
    if ( v4 == v3 )
    {
      v4 = 0;
      v2[3] = 0;
      if ( v1 << 31 )
        goto LABEL_7;
      v1 = 1;
    }
    v5 = v2[1];
    v6 = *(char *)(v5 + v4);
  }
  while ( v6 > -1 );
  *(_BYTE *)(v5 + v4) = v6 & 0x7F;
  *(_BYTE *)(v2[1] + v2[3]) = (*(_BYTE *)(v2[1] + v2[3]) + 1) & 0x7F | *(_BYTE *)(v2[1] + v2[3]) & 0x80;
  v4 = *v2 + 68 * v2[3];
LABEL_7:
  v7 = *((_QWORD *)this + 2);
  v8 = (char *)this + 24;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 13107456;
  *(_WORD *)(v4 + 12) = -1;
  *(_DWORD *)v4 = &off_66656C;
  *(_DWORD *)(v4 + 16) = v7;
  if ( (_DWORD)v7 )
    CEntity::RegisterReference((CEntity *)v7, (CEntity **)(v4 + 16));
  *(_DWORD *)(v4 + 20) = HIDWORD(v7);
  *(_DWORD *)v4 = &off_666C78;
  v9 = *(_QWORD *)v8;
  *(_DWORD *)(v4 + 32) = *((_DWORD *)v8 + 2);
  *(_QWORD *)(v4 + 24) = v9;
  if ( HIDWORD(v7) == -1 )
  {
    *(_DWORD *)(v4 + 20) = CTimer::m_snTimeInMilliseconds;
    v10 = *(_DWORD *)(v7 + 20);
    v11 = (__int64 *)(v10 + 48);
    if ( !v10 )
      v11 = (__int64 *)(v7 + 4);
    v12 = *v11;
    *(_DWORD *)(v4 + 32) = *((_DWORD *)v11 + 2);
    *(_QWORD *)(v4 + 24) = v12;
  }
  return v4;
}


// ============================================================
