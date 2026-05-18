
// Address: 0x1910c0
// Original: j__ZN20CTaskSimpleArrestPedD2Ev
// Demangled: CTaskSimpleArrestPed::~CTaskSimpleArrestPed()
// attributes: thunk
void __fastcall CTaskSimpleArrestPed::~CTaskSimpleArrestPed(CEntity **this)
{
  _ZN20CTaskSimpleArrestPedD2Ev(this);
}


// ============================================================

// Address: 0x195830
// Original: j__ZN20CTaskSimpleArrestPed9StartAnimEP4CPed
// Demangled: CTaskSimpleArrestPed::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleArrestPed::StartAnim(CTaskSimpleArrestPed *this, CPed *a2)
{
  return _ZN20CTaskSimpleArrestPed9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x53c8f8
// Original: _ZN20CTaskSimpleArrestPedC2EP4CPed
// Demangled: CTaskSimpleArrestPed::CTaskSimpleArrestPed(CPed *)
void __fastcall CTaskSimpleArrestPed::CTaskSimpleArrestPed(CTaskSimpleArrestPed *this, CPed *a2)
{
  CTaskSimple::CTaskSimple(this);
  *((_BYTE *)this + 12) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_66CFA0;
  *((_DWORD *)this + 2) = a2;
  if ( a2 )
    CEntity::RegisterReference(a2, (CEntity **)this + 2);
}


// ============================================================

// Address: 0x53c930
// Original: _ZN20CTaskSimpleArrestPedD2Ev
// Demangled: CTaskSimpleArrestPed::~CTaskSimpleArrestPed()
void __fastcall CTaskSimpleArrestPed::~CTaskSimpleArrestPed(CEntity **this)
{
  CAnimBlendAssociation *v2; // r0
  CEntity *v3; // r0
  CEntity **v4; // r5
  CPed *v5; // r0
  bool v6; // zf
  CPed *v7; // r0

  v2 = this[4];
  *this = (CEntity *)&off_66CFA0;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v4 = this + 2;
  v3 = this[2];
  if ( v3 )
    CEntity::CleanUpOldReference(v3, this + 2);
  v5 = this[4];
  v6 = v5 == 0;
  if ( v5 )
  {
    v5 = *v4;
    v6 = *v4 == 0;
  }
  if ( !v6 && !CPed::IsPlayer(v5) )
  {
    v7 = *v4;
    if ( *((unsigned __int8 *)*v4 + 1157) << 31 )
    {
      if ( *((_DWORD *)v7 + 275) == 63 )
        CPed::SetPedState(v7);
    }
  }
  j_CTask::~CTask((CTask *)this);
}


// ============================================================

// Address: 0x53c99c
// Original: _ZN20CTaskSimpleArrestPedD0Ev
// Demangled: CTaskSimpleArrestPed::~CTaskSimpleArrestPed()
void __fastcall CTaskSimpleArrestPed::~CTaskSimpleArrestPed(CEntity **this)
{
  void *v1; // r0

  CTaskSimpleArrestPed::~CTaskSimpleArrestPed(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x53c9ac
// Original: _ZN20CTaskSimpleArrestPed13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleArrestPed::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleArrestPed::MakeAbortable(CTaskSimpleArrestPed *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0
  int result; // r0
  bool v8; // zf

  if ( a3 == 2 )
  {
    v6 = *((_DWORD *)this + 4);
    if ( v6 )
    {
      *(_DWORD *)(v6 + 28) = -998637568;
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 4),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      result = 1;
      *((_DWORD *)this + 4) = 0;
      return result;
    }
    return 1;
  }
  if ( a4 && (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v8 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v8 = *((_BYTE *)a4 + 9) == 0;
    if ( !v8 )
    {
      CPed::SetPedState(*((CPed **)this + 2));
      *(_DWORD *)(*((_DWORD *)this + 2) + 1164) &= ~0x40u;
    }
    return 1;
  }
  return 0;
}


// ============================================================

// Address: 0x53ca24
// Original: _ZN20CTaskSimpleArrestPed21FinishAnimArrestPedCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleArrestPed::FinishAnimArrestPedCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleArrestPed::FinishAnimArrestPedCB(
        CTaskSimpleArrestPed *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  *((_DWORD *)a2 + 4) = 0;
  result = 1;
  *((_BYTE *)a2 + 12) = 1;
  return result;
}


// ============================================================

// Address: 0x53ca30
// Original: _ZN20CTaskSimpleArrestPed9StartAnimEP4CPed
// Demangled: CTaskSimpleArrestPed::StartAnim(CPed *)
int __fastcall CTaskSimpleArrestPed::StartAnim(CTaskSimpleArrestPed *this, CPed *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  CEntity **v7; // r1
  int v8; // t1
  _DWORD *v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r5

  v4 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, 0x8Bu);
  *((_DWORD *)this + 4) = v4;
  *(_WORD *)(v4 + 46) |= 1u;
  CAnimBlendAssociation::SetDeleteCallback(
    *((CAnimBlendAssociation **)this + 4),
    (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleArrestPed::FinishAnimArrestPedCB,
    this);
  if ( CPed::IsPlayer(*((CPed **)this + 2)) == 1 )
    CPed::Say(a2, 0xDu, 0, 1.0, 1u, 1u, 1u);
  if ( CPed::CanSetPedState(*((CPed **)this + 2)) == 1 )
    CPed::SetPedState(*((CPed **)this + 2));
  if ( *((_DWORD *)a2 + 359) == 6 )
  {
    v5 = *((_DWORD *)this + 2);
    if ( *(_DWORD *)(v5 + 1436) <= 1u )
    {
      v6 = *(_DWORD *)(v5 + 1092);
      v8 = *(_DWORD *)(v6 + 8);
      v7 = (CEntity **)(v6 + 8);
      if ( !v8 )
      {
        *v7 = a2;
        CEntity::RegisterReference(a2, v7);
      }
    }
  }
  v9 = (_DWORD *)*((_DWORD *)this + 2);
  v10 = v9[290];
  v11 = v9[291] | 0x40;
  v12 = v9[292];
  v9[289] = v9[289];
  v9[290] = v10;
  v9[291] = v11;
  v9[292] = v12;
  return sub_18D928(a2);
}


// ============================================================

// Address: 0x53caf0
// Original: _ZN20CTaskSimpleArrestPed10ProcessPedEP4CPed
// Demangled: CTaskSimpleArrestPed::ProcessPed(CPed *)
int __fastcall CTaskSimpleArrestPed::ProcessPed(CTaskSimpleArrestPed *this, CPed *a2)
{
  float v2; // s0
  CGeneral *v3; // s2
  CEntity *v6; // r0
  int v7; // r2
  float *v8; // r3
  int RadianAngleBetweenPoints; // r3
  float *v10; // r0
  float v11; // s16
  float v12; // s18
  float v13; // s20
  float *v14; // r0
  float v15; // s2
  float v16; // s4
  float v18; // [sp+0h] [bp-30h]
  float v19[11]; // [sp+4h] [bp-2Ch] BYREF

  if ( !*((_BYTE *)this + 12) )
  {
    if ( *((_DWORD *)this + 4) )
    {
      v6 = (CEntity *)*((_DWORD *)this + 2);
      if ( v6 )
      {
        CPed::GetBonePosition(v6);
        v3 = (CGeneral *)LODWORD(v19[0]);
        v2 = v19[1];
      }
      v7 = *((_DWORD *)a2 + 5);
      v8 = (float *)(v7 + 48);
      if ( !v7 )
        v8 = (float *)((char *)a2 + 4);
      RadianAngleBetweenPoints = CGeneral::GetRadianAngleBetweenPoints(v3, v2, *v8, v8[1], v18);
      v10 = (float *)*((_DWORD *)a2 + 5);
      *((_DWORD *)a2 + 343) = RadianAngleBetweenPoints;
      *((_DWORD *)a2 + 344) = RadianAngleBetweenPoints;
      if ( v10 )
      {
        v11 = v10[12];
        v12 = v10[13];
        v13 = v10[14];
        CMatrix::SetRotate((CMatrix *)v10, 0.0, 0.0, *(float *)&RadianAngleBetweenPoints);
        v14 = (float *)*((_DWORD *)a2 + 5);
        v15 = v12 + v14[13];
        v16 = v13 + v14[14];
        v14[12] = v11 + v14[12];
        v14[13] = v15;
        v14[14] = v16;
      }
      else
      {
        *((_DWORD *)a2 + 4) = RadianAngleBetweenPoints;
      }
      CPedIK::PointGunAtPosition(
        (CPed *)((char *)a2 + 1304),
        (const CVector *)v19,
        *(float *)(*((_DWORD *)this + 4) + 24));
    }
    else
    {
      if ( CWeapon::IsTypeMelee((CPed *)((char *)a2 + 28 * *((char *)a2 + 1820) + 1444)) == 1 )
      {
        CPed::GiveWeapon(a2, 22, 10, 0);
        CPed::SetCurrentWeapon(a2, 22);
      }
      CTaskSimpleArrestPed::StartAnim(this, a2);
    }
  }
  return 0;
}


// ============================================================

// Address: 0x540910
// Original: _ZNK20CTaskSimpleArrestPed5CloneEv
// Demangled: CTaskSimpleArrestPed::Clone(void)
int __fastcall CTaskSimpleArrestPed::Clone(CTaskSimpleArrestPed *this, unsigned int a2)
{
  int v3; // r4
  CEntity *v4; // r5

  v3 = CTask::operator new((CTask *)&dword_14, a2);
  v4 = (CEntity *)*((_DWORD *)this + 2);
  CTaskSimple::CTaskSimple((CTaskSimple *)v3);
  *(_BYTE *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)v3 = &off_66CFA0;
  *(_DWORD *)(v3 + 8) = v4;
  if ( v4 )
    CEntity::RegisterReference(v4, (CEntity **)(v3 + 8));
  return v3;
}


// ============================================================

// Address: 0x540950
// Original: _ZNK20CTaskSimpleArrestPed11GetTaskTypeEv
// Demangled: CTaskSimpleArrestPed::GetTaskType(void)
int __fastcall CTaskSimpleArrestPed::GetTaskType(CTaskSimpleArrestPed *this)
{
  return 1100;
}


// ============================================================
