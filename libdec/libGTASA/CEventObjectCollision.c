
// Address: 0x18f7b4
// Original: j__ZN21CEventObjectCollisionD2Ev
// Demangled: CEventObjectCollision::~CEventObjectCollision()
// attributes: thunk
void __fastcall CEventObjectCollision::~CEventObjectCollision(CEventObjectCollision *this)
{
  _ZN21CEventObjectCollisionD2Ev(this);
}


// ============================================================

// Address: 0x1995d4
// Original: j__ZN21CEventObjectCollisionC2EtfPK7CObjectRK7CVectorS5_i
// Demangled: CEventObjectCollision::CEventObjectCollision(ushort,float,CObject const*,CVector const&,CVector const&,int)
// attributes: thunk
void __fastcall CEventObjectCollision::CEventObjectCollision(
        CEventObjectCollision *this,
        unsigned __int16 a2,
        float a3,
        const CObject *a4,
        const CVector *a5,
        const CVector *a6,
        int a7)
{
  _ZN21CEventObjectCollisionC2EtfPK7CObjectRK7CVectorS5_i(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x19ec70
// Original: j__ZNK21CEventObjectCollision17IsHeadOnCollisionERK4CPed
// Demangled: CEventObjectCollision::IsHeadOnCollision(CPed const&)
// attributes: thunk
int __fastcall CEventObjectCollision::IsHeadOnCollision(CEventObjectCollision *this, const CPed *a2)
{
  return _ZNK21CEventObjectCollision17IsHeadOnCollisionERK4CPed(this, a2);
}


// ============================================================

// Address: 0x37151c
// Original: _ZN21CEventObjectCollisionC2EtfPK7CObjectRK7CVectorS5_i
// Demangled: CEventObjectCollision::CEventObjectCollision(ushort,float,CObject const*,CVector const&,CVector const&,int)
void __fastcall CEventObjectCollision::CEventObjectCollision(
        CEventObjectCollision *this,
        unsigned __int16 a2,
        float a3,
        const CObject *a4,
        const CVector *a5,
        const CVector *a6,
        __int16 a7)
{
  __int64 v7; // d16
  __int64 v8; // d16

  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_WORD *)this + 5) = a2;
  *((_WORD *)this + 6) = a7;
  *((float *)this + 4) = a3;
  *(_DWORD *)this = &off_665F08;
  *((_DWORD *)this + 5) = a4;
  v7 = *(_QWORD *)a5;
  *((_DWORD *)this + 8) = *((_DWORD *)a5 + 2);
  *((_QWORD *)this + 3) = v7;
  v8 = *(_QWORD *)a6;
  *((_DWORD *)this + 11) = *((_DWORD *)a6 + 2);
  *(_QWORD *)((char *)this + 36) = v8;
  if ( a4 )
    CEntity::RegisterReference(a4, (CEntity **)this + 5);
}


// ============================================================

// Address: 0x371580
// Original: _ZN21CEventObjectCollisionD2Ev
// Demangled: CEventObjectCollision::~CEventObjectCollision()
void __fastcall CEventObjectCollision::~CEventObjectCollision(CEventObjectCollision *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665F08;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x3715a8
// Original: _ZN21CEventObjectCollisionD0Ev
// Demangled: CEventObjectCollision::~CEventObjectCollision()
void __fastcall CEventObjectCollision::~CEventObjectCollision(CEventObjectCollision *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665F08;
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

// Address: 0x3715fc
// Original: _ZNK21CEventObjectCollision10AffectsPedEP4CPed
// Demangled: CEventObjectCollision::AffectsPed(CPed *)
int __fastcall CEventObjectCollision::AffectsPed(CEventObjectCollision *this, CPed *a2)
{
  int v4; // r0

  if ( *((_DWORD *)a2 + 64) )
    return 0;
  v4 = *((_DWORD *)this + 5);
  if ( !v4 || (*(_BYTE *)(v4 + 68) & 0x20) != 0 || CPed::IsPlayer(a2) )
    return 0;
  else
    return sub_196874(a2);
}


// ============================================================

// Address: 0x371630
// Original: _ZNK21CEventObjectCollision17IsHeadOnCollisionERK4CPed
// Demangled: CEventObjectCollision::IsHeadOnCollision(CPed const&)
bool __fastcall CEventObjectCollision::IsHeadOnCollision(CEventObjectCollision *this, const CPed *a2)
{
  float *v2; // r5
  __int64 v4; // [sp+0h] [bp-18h] BYREF
  float v5; // [sp+8h] [bp-10h]

  v2 = (float *)*((_DWORD *)a2 + 5);
  v4 = *((_QWORD *)this + 3);
  v5 = 0.0;
  CVector::Normalise((CVector *)&v4);
  return (float)((float)((float)(v2[4] * *(float *)&v4) + (float)(v2[5] * *((float *)&v4 + 1))) + (float)(v2[6] * v5)) < -0.9397;
}


// ============================================================

// Address: 0x371690
// Original: _ZNK21CEventObjectCollision17TakesPriorityOverERK6CEvent
// Demangled: CEventObjectCollision::TakesPriorityOver(CEvent const&)
int __fastcall CEventObjectCollision::TakesPriorityOver(CEventObjectCollision *this, const CEvent *a2)
{
  return 1;
}


// ============================================================

// Address: 0x3796dc
// Original: _ZNK21CEventObjectCollision12GetEventTypeEv
// Demangled: CEventObjectCollision::GetEventType(void)
int __fastcall CEventObjectCollision::GetEventType(CEventObjectCollision *this)
{
  return 5;
}


// ============================================================

// Address: 0x3796e0
// Original: _ZNK21CEventObjectCollision16GetEventPriorityEv
// Demangled: CEventObjectCollision::GetEventPriority(void)
int __fastcall CEventObjectCollision::GetEventPriority(CEventObjectCollision *this)
{
  return 57;
}


// ============================================================

// Address: 0x3796e4
// Original: _ZNK21CEventObjectCollision11GetLifeTimeEv
// Demangled: CEventObjectCollision::GetLifeTime(void)
int __fastcall CEventObjectCollision::GetLifeTime(CEventObjectCollision *this)
{
  return 0;
}


// ============================================================

// Address: 0x3796e8
// Original: _ZNK21CEventObjectCollision5CloneEv
// Demangled: CEventObjectCollision::Clone(void)
int __fastcall CEventObjectCollision::Clone(CEventObjectCollision *this)
{
  int v1; // lr
  _DWORD *v2; // r1
  int v3; // r4
  int v4; // r12
  int v5; // r2
  int v6; // r3
  int v7; // r5
  __int64 v8; // kr08_8
  __int64 v9; // d16
  __int64 v10; // d16

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
  v7 = *(_DWORD *)((char *)this + 10);
  v8 = *((_QWORD *)this + 2);
  *(_BYTE *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 16) = v8;
  *(_DWORD *)(v3 + 10) = v7;
  *(_DWORD *)v3 = &off_665F08;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 20) = HIDWORD(v8);
  v9 = *((_QWORD *)this + 3);
  *(_DWORD *)(v3 + 32) = *((_DWORD *)this + 8);
  *(_QWORD *)(v3 + 24) = v9;
  v10 = *(_QWORD *)((char *)this + 36);
  *(_DWORD *)(v3 + 44) = *((_DWORD *)this + 11);
  *(_QWORD *)(v3 + 36) = v10;
  if ( HIDWORD(v8) )
    CEntity::RegisterReference((CEntity *)HIDWORD(v8), (CEntity **)(v3 + 20));
  return v3;
}


// ============================================================
