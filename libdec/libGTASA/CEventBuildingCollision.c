
// Address: 0x18d428
// Original: j__ZN23CEventBuildingCollisionC2EtfPK9CBuildingRK7CVectorS5_i
// Demangled: CEventBuildingCollision::CEventBuildingCollision(ushort,float,CBuilding const*,CVector const&,CVector const&,int)
// attributes: thunk
void __fastcall CEventBuildingCollision::CEventBuildingCollision(
        CEventBuildingCollision *this,
        unsigned __int16 a2,
        float a3,
        const CBuilding *a4,
        const CVector *a5,
        const CVector *a6,
        int a7)
{
  _ZN23CEventBuildingCollisionC2EtfPK9CBuildingRK7CVectorS5_i(this, a2, a3, a4, a5, a6, a7);
}


// ============================================================

// Address: 0x1981f8
// Original: j__ZN23CEventBuildingCollision24CanTreatBuildingAsObjectERK9CBuilding
// Demangled: CEventBuildingCollision::CanTreatBuildingAsObject(CBuilding const&)
// attributes: thunk
int __fastcall CEventBuildingCollision::CanTreatBuildingAsObject(CEventBuildingCollision *this, const CBuilding *a2)
{
  return _ZN23CEventBuildingCollision24CanTreatBuildingAsObjectERK9CBuilding(this, a2);
}


// ============================================================

// Address: 0x19c434
// Original: j__ZNK23CEventBuildingCollision17IsHeadOnCollisionERK4CPed
// Demangled: CEventBuildingCollision::IsHeadOnCollision(CPed const&)
// attributes: thunk
int __fastcall CEventBuildingCollision::IsHeadOnCollision(CEventBuildingCollision *this, const CPed *a2)
{
  return _ZNK23CEventBuildingCollision17IsHeadOnCollisionERK4CPed(this, a2);
}


// ============================================================

// Address: 0x1a1718
// Original: j__ZN23CEventBuildingCollisionD2Ev
// Demangled: CEventBuildingCollision::~CEventBuildingCollision()
// attributes: thunk
void __fastcall CEventBuildingCollision::~CEventBuildingCollision(CEventBuildingCollision *this)
{
  _ZN23CEventBuildingCollisionD2Ev(this);
}


// ============================================================

// Address: 0x371694
// Original: _ZN23CEventBuildingCollisionC2EtfPK9CBuildingRK7CVectorS5_i
// Demangled: CEventBuildingCollision::CEventBuildingCollision(ushort,float,CBuilding const*,CVector const&,CVector const&,int)
void __fastcall CEventBuildingCollision::CEventBuildingCollision(
        CEventBuildingCollision *this,
        unsigned __int16 a2,
        float a3,
        const CBuilding *a4,
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
  *(_DWORD *)this = &off_665F54;
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

// Address: 0x3716f8
// Original: _ZN23CEventBuildingCollisionD0Ev
// Demangled: CEventBuildingCollision::~CEventBuildingCollision()
void __fastcall CEventBuildingCollision::~CEventBuildingCollision(CEventBuildingCollision *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  int v4; // r0
  int v5; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665F54;
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

// Address: 0x37174c
// Original: _ZNK23CEventBuildingCollision17TakesPriorityOverERK6CEvent
// Demangled: CEventBuildingCollision::TakesPriorityOver(CEvent const&)
bool __fastcall CEventBuildingCollision::TakesPriorityOver(CEventBuildingCollision *this, const CEvent *a2)
{
  int v3; // r5

  v3 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a2 + 8))(a2);
  return v3 != (*(int (__fastcall **)(CEventBuildingCollision *))(*(_DWORD *)this + 8))(this);
}


// ============================================================

// Address: 0x371770
// Original: _ZNK23CEventBuildingCollision10AffectsPedEP4CPed
// Demangled: CEventBuildingCollision::AffectsPed(CPed *)
bool __fastcall CEventBuildingCollision::AffectsPed(CEventBuildingCollision *this, CPed *a2)
{
  int v4; // r6
  float v6; // s16
  int CurrentEvent; // r0
  int v8; // r0
  __int64 v9; // [sp+0h] [bp-28h] BYREF
  float v10; // [sp+8h] [bp-20h]

  if ( CPed::IsPlayer(a2)
    || CPed::IsAlive(a2) != 1
    || *((_WORD *)this + 6) == 1
    || *((float *)this + 8) > 0.707 && (*(_BYTE *)(*((_DWORD *)this + 5) + 30) & 0x40) == 0 )
  {
    return 0;
  }
  v4 = 0;
  if ( *((_DWORD *)a2 + 64) )
    return v4;
  v9 = *((_QWORD *)this + 3);
  v10 = 0.0;
  CVector::Normalise((CVector *)&v9);
  v6 = (float)((float)(*(float *)(*((_DWORD *)a2 + 5) + 16) * *(float *)&v9)
             + (float)(*(float *)(*((_DWORD *)a2 + 5) + 20) * *((float *)&v9 + 1)))
     + (float)(*(float *)(*((_DWORD *)a2 + 5) + 24) * v10);
  if ( v6 > -0.422 )
    return v4;
  if ( CEventHandler::GetCurrentEventType((CEventHandler *)(*((_DWORD *)a2 + 272) + 52)) == 6 )
  {
    CurrentEvent = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56));
    if ( v6 > -0.5 && *(_DWORD *)(CurrentEvent + 20) == *((_DWORD *)this + 5) )
      return 0;
  }
  if ( CEventHandler::GetCurrentEventType((CEventHandler *)(*((_DWORD *)a2 + 272) + 52)) == 60 )
  {
    v8 = CEventHandlerHistory::GetCurrentEvent((CEventHandlerHistory *)(*((_DWORD *)a2 + 272) + 56));
    if ( v6 > -0.5 && *(_DWORD *)(v8 + 20) == *((_DWORD *)this + 5) )
      return 0;
  }
  v4 = 0;
  if ( !CTaskManager::FindActiveTaskByType((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 267) )
    return CEventHandler::GetCurrentEventType((CEventHandler *)(*((_DWORD *)a2 + 272) + 52)) != 31;
  return v4;
}


// ============================================================

// Address: 0x3718b0
// Original: _ZN23CEventBuildingCollision24CanTreatBuildingAsObjectERK9CBuilding
// Demangled: CEventBuildingCollision::CanTreatBuildingAsObject(CBuilding const&)
bool __fastcall CEventBuildingCollision::CanTreatBuildingAsObject(CEventBuildingCollision *this, const CBuilding *a2)
{
  _BOOL4 result; // r0
  float *v3; // r0
  float v4; // s0
  float v5; // s2

  if ( (*((_BYTE *)this + 30) & 0x40) != 0 )
    return 1;
  v3 = *(float **)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)this + 19)]) + 44);
  v4 = fabsf(v3[3] - *v3);
  v5 = fabsf(v3[4] - v3[1]);
  if ( (float)(v3[5] - v3[2]) >= 2.0 )
    return v4 < 6.0 && v5 < 6.0;
  result = 1;
  if ( v4 >= 6.0 )
    return v4 < 6.0 && v5 < 6.0;
  return result;
}


// ============================================================

// Address: 0x371948
// Original: _ZNK23CEventBuildingCollision17IsHeadOnCollisionERK4CPed
// Demangled: CEventBuildingCollision::IsHeadOnCollision(CPed const&)
bool __fastcall CEventBuildingCollision::IsHeadOnCollision(CEventBuildingCollision *this, const CPed *a2)
{
  float *v2; // r5
  __int64 v4; // [sp+0h] [bp-18h] BYREF
  float v5; // [sp+8h] [bp-10h]

  v2 = (float *)*((_DWORD *)a2 + 5);
  v4 = *((_QWORD *)this + 3);
  v5 = 0.0;
  CVector::Normalise((CVector *)&v4);
  return (float)((float)((float)(v2[4] * *(float *)&v4) + (float)(v2[5] * *((float *)&v4 + 1))) + (float)(v2[6] * v5)) < -0.866;
}


// ============================================================

// Address: 0x378050
// Original: _ZN23CEventBuildingCollisionD2Ev
// Demangled: CEventBuildingCollision::~CEventBuildingCollision()
void __fastcall CEventBuildingCollision::~CEventBuildingCollision(CEventBuildingCollision *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1

  v3 = (CEntity **)((char *)this + 20);
  v2 = (CEntity *)*((_DWORD *)this + 5);
  *(_DWORD *)this = &off_665F54;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
}


// ============================================================

// Address: 0x378a0c
// Original: _ZNK23CEventBuildingCollision11GetLifeTimeEv
// Demangled: CEventBuildingCollision::GetLifeTime(void)
int __fastcall CEventBuildingCollision::GetLifeTime(CEventBuildingCollision *this)
{
  return 0;
}


// ============================================================

// Address: 0x378ad0
// Original: _ZNK23CEventBuildingCollision27CanBeInterruptedBySameEventEv
// Demangled: CEventBuildingCollision::CanBeInterruptedBySameEvent(void)
int __fastcall CEventBuildingCollision::CanBeInterruptedBySameEvent(CEventBuildingCollision *this)
{
  return 1;
}


// ============================================================

// Address: 0x3797a0
// Original: _ZNK23CEventBuildingCollision12GetEventTypeEv
// Demangled: CEventBuildingCollision::GetEventType(void)
int __fastcall CEventBuildingCollision::GetEventType(CEventBuildingCollision *this)
{
  return 6;
}


// ============================================================

// Address: 0x3797a4
// Original: _ZNK23CEventBuildingCollision16GetEventPriorityEv
// Demangled: CEventBuildingCollision::GetEventPriority(void)
int __fastcall CEventBuildingCollision::GetEventPriority(CEventBuildingCollision *this)
{
  return 59;
}


// ============================================================

// Address: 0x3797a8
// Original: _ZNK23CEventBuildingCollision5CloneEv
// Demangled: CEventBuildingCollision::Clone(void)
int __fastcall CEventBuildingCollision::Clone(CEventBuildingCollision *this)
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
  *(_DWORD *)v3 = &off_665F54;
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
