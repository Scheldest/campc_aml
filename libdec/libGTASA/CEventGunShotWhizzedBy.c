
// Address: 0x19784c
// Original: j__ZN22CEventGunShotWhizzedByC2EP7CEntityRK7CVectorS4_b
// Demangled: CEventGunShotWhizzedBy::CEventGunShotWhizzedBy(CEntity *,CVector const&,CVector const&,bool)
// attributes: thunk
void __fastcall CEventGunShotWhizzedBy::CEventGunShotWhizzedBy(
        CEventGunShotWhizzedBy *this,
        CEntity *a2,
        const CVector *a3,
        const CVector *a4,
        bool a5)
{
  _ZN22CEventGunShotWhizzedByC2EP7CEntityRK7CVectorS4_b(this, a2, a3, a4, a5);
}


// ============================================================

// Address: 0x1988d4
// Original: j__ZN22CEventGunShotWhizzedByD2Ev
// Demangled: CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy()
// attributes: thunk
void __fastcall CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy(CEventGunShotWhizzedBy *this)
{
  _ZN22CEventGunShotWhizzedByD2Ev(this);
}


// ============================================================

// Address: 0x1a0f88
// Original: j__ZN22CEventGunShotWhizzedByD2Ev_0
// Demangled: CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy()
// attributes: thunk
void __fastcall CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy(CEventGunShotWhizzedBy *this)
{
  _ZN22CEventGunShotWhizzedByD2Ev(this);
}


// ============================================================

// Address: 0x370b94
// Original: _ZN22CEventGunShotWhizzedByD2Ev
// Demangled: CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy()
void __fastcall CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy(CEventGunShotWhizzedBy *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 16);
  v2 = (CEntity *)*((_DWORD *)this + 4);
  *(_DWORD *)this = &off_665E20;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x3775bc
// Original: _ZN22CEventGunShotWhizzedByC2EP7CEntityRK7CVectorS4_b
// Demangled: CEventGunShotWhizzedBy::CEventGunShotWhizzedBy(CEntity *,CVector const&,CVector const&,bool)
void __fastcall CEventGunShotWhizzedBy::CEventGunShotWhizzedBy(
        CEventGunShotWhizzedBy *this,
        CEntity *a2,
        const CVector *a3,
        const CVector *a4,
        bool a5)
{
  __int64 v6; // kr00_8
  int v7; // r3
  __int64 v8; // kr08_8
  int v9; // r2

  v6 = *(_QWORD *)a4;
  v7 = *((_DWORD *)a4 + 2);
  v8 = *(_QWORD *)a3;
  v9 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 13107456;
  *((_WORD *)this + 6) = -1;
  *(_QWORD *)((char *)this + 20) = v8;
  *((_DWORD *)this + 7) = v9;
  *((_DWORD *)this + 10) = v7;
  *((_QWORD *)this + 4) = v6;
  *((_BYTE *)this + 44) = a5;
  *(_DWORD *)this = &off_665E20;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 4);
  *(_DWORD *)this = &off_666AEC;
}


// ============================================================

// Address: 0x377630
// Original: _ZN22CEventGunShotWhizzedByD0Ev
// Demangled: CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy()
void __fastcall CEventGunShotWhizzedBy::~CEventGunShotWhizzedBy(CEventGunShotWhizzedBy *this)
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

// Address: 0x377684
// Original: _ZNK22CEventGunShotWhizzedBy10AffectsPedEP4CPed
// Demangled: CEventGunShotWhizzedBy::AffectsPed(CPed *)
int __fastcall CEventGunShotWhizzedBy::AffectsPed(CEventGunShotWhizzedBy *this, CPed *a2)
{
  float v4; // s0
  float v5; // s4
  int v6; // r0
  float v7; // s0
  float *v8; // r1
  bool v9; // zf
  float v10; // s4
  int result; // r0
  float v12; // s2
  float v13; // s12
  float v14; // s0
  float v15; // [sp+4h] [bp-14h] BYREF
  float v16; // [sp+8h] [bp-10h]
  float v17; // [sp+Ch] [bp-Ch]

  if ( CPed::IsPlayer(a2) || CPed::IsAlive(a2) != 1 )
    return 0;
  v4 = *((float *)this + 8) - *((float *)this + 5);
  v5 = *((float *)this + 10) - *((float *)this + 7);
  v16 = *((float *)this + 9) - *((float *)this + 6);
  v15 = v4;
  v17 = v5;
  CVector::Normalise((CVector *)&v15);
  v6 = *((_DWORD *)a2 + 5);
  v7 = *((float *)this + 5);
  v8 = (float *)(v6 + 48);
  v9 = v6 == 0;
  v10 = *((float *)this + 6);
  result = 0;
  if ( v9 )
    v8 = (float *)((char *)a2 + 4);
  v12 = *v8;
  v13 = (float)((float)((float)(*v8 - v7) * v15) + (float)((float)(v8[1] - v10) * v16))
      + (float)((float)(v8[2] - *((float *)this + 7)) * v17);
  if ( v13 > 0.0 )
  {
    v16 = v13 * v16;
    v14 = v7 + (float)(v15 * v13);
    v15 = v15 * v13;
    v17 = v13 * v17;
    if ( (float)((float)((float)((float)(v12 - v14) * (float)(v12 - v14))
                       + (float)((float)(v8[1] - (float)(v10 + v16)) * (float)(v8[1] - (float)(v10 + v16))))
               + 0.0) < (float)(CEventGunShotWhizzedBy::ms_fThresholdDist * CEventGunShotWhizzedBy::ms_fThresholdDist) )
      return 1;
  }
  return result;
}


// ============================================================

// Address: 0x37aeb4
// Original: _ZNK22CEventGunShotWhizzedBy12GetEventTypeEv
// Demangled: CEventGunShotWhizzedBy::GetEventType(void)
int __fastcall CEventGunShotWhizzedBy::GetEventType(CEventGunShotWhizzedBy *this)
{
  return 49;
}


// ============================================================

// Address: 0x37aeb8
// Original: _ZNK22CEventGunShotWhizzedBy16GetEventPriorityEv
// Demangled: CEventGunShotWhizzedBy::GetEventPriority(void)
int __fastcall CEventGunShotWhizzedBy::GetEventPriority(CEventGunShotWhizzedBy *this)
{
  return 36;
}


// ============================================================

// Address: 0x37aebc
// Original: _ZNK22CEventGunShotWhizzedBy11GetLifeTimeEv
// Demangled: CEventGunShotWhizzedBy::GetLifeTime(void)
int __fastcall CEventGunShotWhizzedBy::GetLifeTime(CEventGunShotWhizzedBy *this)
{
  return 0;
}


// ============================================================

// Address: 0x37aec0
// Original: _ZNK22CEventGunShotWhizzedBy27CanBeInterruptedBySameEventEv
// Demangled: CEventGunShotWhizzedBy::CanBeInterruptedBySameEvent(void)
int __fastcall CEventGunShotWhizzedBy::CanBeInterruptedBySameEvent(CEventGunShotWhizzedBy *this)
{
  return 1;
}


// ============================================================

// Address: 0x37aec4
// Original: _ZNK22CEventGunShotWhizzedBy13CloneEditableEv
// Demangled: CEventGunShotWhizzedBy::CloneEditable(void)
int __fastcall CEventGunShotWhizzedBy::CloneEditable(CEventGunShotWhizzedBy *this)
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
  *(_DWORD *)v3 = &off_666AEC;
  return v3;
}


// ============================================================
