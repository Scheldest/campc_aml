
// Address: 0x18b534
// Original: j__ZN22CTaskSimpleStealthKill10ManageAnimEP4CPed
// Demangled: CTaskSimpleStealthKill::ManageAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleStealthKill::ManageAnim(CTaskSimpleStealthKill *this, CPed *a2)
{
  return _ZN22CTaskSimpleStealthKill10ManageAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19c0f4
// Original: j__ZN22CTaskSimpleStealthKillC2EbP4CPed12AssocGroupId
// Demangled: CTaskSimpleStealthKill::CTaskSimpleStealthKill(bool,CPed *,AssocGroupId)
// attributes: thunk
int CTaskSimpleStealthKill::CTaskSimpleStealthKill()
{
  return _ZN22CTaskSimpleStealthKillC2EbP4CPed12AssocGroupId();
}


// ============================================================

// Address: 0x4e8608
// Original: _ZN22CTaskSimpleStealthKillC2EbP4CPed12AssocGroupId
// Demangled: CTaskSimpleStealthKill::CTaskSimpleStealthKill(bool,CPed *,AssocGroupId)
int __fastcall CTaskSimpleStealthKill::CTaskSimpleStealthKill(int a1, char a2, CEntity *a3, int a4)
{
  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_BYTE *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a4;
  *(_WORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)a1 = &off_669ADC;
  *(_DWORD *)(a1 + 12) = a3;
  if ( a3 )
    CEntity::RegisterReference(a3, (CEntity **)(a1 + 12));
  return a1;
}


// ============================================================

// Address: 0x4e8654
// Original: _ZN22CTaskSimpleStealthKillD2Ev
// Demangled: CTaskSimpleStealthKill::~CTaskSimpleStealthKill()
void __fastcall CTaskSimpleStealthKill::~CTaskSimpleStealthKill(CTaskSimpleStealthKill *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669ADC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 6);
  if ( v4 )
    CAnimBlendAssociation::SetDeleteCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x4e8694
// Original: _ZN22CTaskSimpleStealthKillD0Ev
// Demangled: CTaskSimpleStealthKill::~CTaskSimpleStealthKill()
void __fastcall CTaskSimpleStealthKill::~CTaskSimpleStealthKill(CTaskSimpleStealthKill *this)
{
  CEntity *v2; // r0
  CEntity **v3; // r1
  CAnimBlendAssociation *v4; // r0
  void *v5; // r0

  v3 = (CEntity **)((char *)this + 12);
  v2 = (CEntity *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_669ADC;
  if ( v2 )
    CEntity::CleanUpOldReference(v2, v3);
  v4 = (CAnimBlendAssociation *)*((_DWORD *)this + 6);
  if ( v4 )
    CAnimBlendAssociation::SetDeleteCallback(
      v4,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x4e86d8
// Original: _ZN22CTaskSimpleStealthKill13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleStealthKill::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleStealthKill::MakeAbortable(CTaskSimpleStealthKill *this, CPed *a2, int a3, const CEvent *a4)
{
  int v6; // r0
  int v7; // r5
  int v9; // r0
  bool v10; // zf
  CAnimBlendAssociation *v11; // r0

  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      v6 = *((_DWORD *)this + 6);
      if ( v6 )
      {
        *(_DWORD *)(v6 + 28) = -998637568;
        CAnimBlendAssociation::SetDeleteCallback(
          *((CAnimBlendAssociation **)this + 6),
          (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
          0);
        *((_DWORD *)this + 6) = 0;
      }
      v7 = 1;
      *((_BYTE *)this + 20) = 1;
      return v7;
    }
    return 0;
  }
  if ( *((_BYTE *)this + 8) )
    return 0;
  v9 = *((_DWORD *)this + 6);
  v7 = 0;
  v10 = v9 == 0;
  if ( v9 )
    v10 = a4 == 0;
  if ( !v10 && *(_WORD *)(v9 + 44) == 350 )
  {
    if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) != 9 )
      return 0;
    v7 = 0;
    if ( *((_DWORD *)a4 + 4) == *((_DWORD *)this + 3) )
    {
      v11 = (CAnimBlendAssociation *)*((_DWORD *)this + 6);
      *((_BYTE *)this + 20) = 1;
      CAnimBlendAssociation::SetDeleteCallback(
        v11,
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 6) = 0;
      return 1;
    }
  }
  return v7;
}


// ============================================================

// Address: 0x4e8768
// Original: _ZN22CTaskSimpleStealthKill10ProcessPedEP4CPed
// Demangled: CTaskSimpleStealthKill::ProcessPed(CPed *)
int __fastcall CTaskSimpleStealthKill::ProcessPed(CTaskSimpleStealthKill *this, CPed *a2)
{
  float32x2_t v2; // d2
  float32x2_t v3; // d3
  int v7; // r1
  int v8; // r2
  float *v9; // r0
  int v10; // r3
  float *v11; // r1
  float v12; // s2
  float v13; // s0
  float v14; // s4
  float v15; // s8
  int v16; // r0
  bool v17; // zf

  if ( *((_BYTE *)this + 20) || !*((_DWORD *)this + 3) )
    return 1;
  if ( *((_DWORD *)this + 6) )
    goto LABEL_9;
  if ( !*((_BYTE *)this + 8) )
    CPed::SetPedState(a2);
  CTaskSimpleStealthKill::ManageAnim(this, a2);
  if ( *((_DWORD *)this + 6) || !*((_BYTE *)this + 21) )
  {
LABEL_9:
    v7 = *((_DWORD *)a2 + 5);
    *((_DWORD *)a2 + 333) |= 8u;
    v8 = *((_DWORD *)this + 3);
    v9 = (float *)(v7 + 48);
    v10 = *(_DWORD *)(v8 + 20);
    if ( !v7 )
      v9 = (float *)((char *)a2 + 4);
    v11 = (float *)(v10 + 48);
    if ( !v10 )
      v11 = (float *)(v8 + 4);
    v12 = *v11 - *v9;
    v13 = v11[1] - v9[1];
    if ( *((_BYTE *)this + 8) )
    {
      v14 = v11[2] - v9[2];
      v2.n64_f32[0] = sqrtf((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14)) + -1.0;
      if ( fabsf(v2.n64_f32[0]) > 0.02 )
      {
        v15 = *(float *)&CTimer::ms_fTimeStep;
        *((_DWORD *)a2 + 313) = 0;
        v3.n64_f32[0] = v15 * 0.05;
        *((_DWORD *)a2 + 314) = vmin_f32(v2, v3).n64_u32[0];
      }
    }
    else
    {
      v16 = *((_DWORD *)this + 6);
      v17 = v16 == 0;
      if ( v16 )
        v17 = *(unsigned __int16 *)(v16 + 44) == 349;
      if ( !v17 )
        return 0;
      v13 = -v13;
      v12 = -v12;
    }
    *((float *)a2 + 344) = atan2f(COERCE_FLOAT(LODWORD(v12) ^ 0x80000000), v13);
  }
  return 0;
}


// ============================================================

// Address: 0x4e8884
// Original: _ZN22CTaskSimpleStealthKill10ManageAnimEP4CPed
// Demangled: CTaskSimpleStealthKill::ManageAnim(CPed *)
unsigned int __fastcall CTaskSimpleStealthKill::ManageAnim(CTaskSimpleStealthKill *this, CPed *a2)
{
  int v4; // r1
  int v5; // r0
  bool v6; // zf
  unsigned int result; // r0
  CAnimBlendAssociation *v8; // r0
  _BYTE *v9; // r6
  int v10; // r0
  CEventDamage *v11; // r0
  _BYTE v12[33]; // [sp+10h] [bp-70h] BYREF
  char v13; // [sp+31h] [bp-4Fh]
  int v14; // [sp+34h] [bp-4Ch]
  int v15; // [sp+38h] [bp-48h]
  int v16; // [sp+3Ch] [bp-44h]
  int v17; // [sp+40h] [bp-40h]
  _BYTE v18[48]; // [sp+50h] [bp-30h] BYREF

  v4 = *((_DWORD *)this + 4);
  v5 = *(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * v4);
  v6 = v5 == 0;
  if ( v5 )
    v6 = *(_BYTE *)(v5 + 16) == 0;
  if ( v6 )
  {
    result = *((_DWORD *)this + 7) + (unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0);
    *((_DWORD *)this + 7) = result;
    if ( result >= 0x2711 )
    {
      result = 1;
      *((_BYTE *)this + 20) = 1;
    }
  }
  else
  {
    if ( *((_BYTE *)this + 8) )
    {
      v8 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v4, 0x15Cu);
      *((_DWORD *)this + 6) = v8;
      v9 = (char *)this + 21;
    }
    else
    {
      v10 = *((_DWORD *)a2 + 6);
      v9 = (char *)this + 21;
      if ( *((_BYTE *)this + 21) )
      {
        *((_DWORD *)this + 6) = CAnimManager::BlendAnimation(v10, v4, 0x15Eu);
        CPedDamageResponseCalculator::CPedDamageResponseCalculator(
          (int)v18,
          *((_DWORD *)this + 3),
          CPedDamageResponseCalculator::ms_fStealthKillDamage,
          *(_DWORD *)(*((_DWORD *)this + 3) + 28 * *(char *)(*((_DWORD *)this + 3) + 1820) + 1444),
          3,
          0);
        v11 = (CEventDamage *)CEventDamage::CEventDamage(
                                (int)v12,
                                *((CEntity **)this + 3),
                                CTimer::m_snTimeInMilliseconds,
                                *(_DWORD *)(*((_DWORD *)this + 3) + 28 * *(char *)(*((_DWORD *)this + 3) + 1820) + 1444),
                                3,
                                0,
                                0,
                                (*((_DWORD *)a2 + 289) >> 8) & 1);
        if ( CEventDamage::AffectsPed(v11, a2) == 1 )
        {
          CPedDamageResponseCalculator::ComputeDamageResponse((int)v18, a2);
          v14 = *((_DWORD *)this + 4);
          v15 = 350;
          v16 = 1090519040;
          v17 = 1065353216;
          v13 |= 4u;
          CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v12, 0);
        }
        CEventDamage::~CEventDamage((CEventDamage *)v12);
        CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v18);
        v8 = (CAnimBlendAssociation *)*((_DWORD *)this + 6);
      }
      else
      {
        v8 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(v10, v4, 0x15Du);
        *((_DWORD *)this + 6) = v8;
      }
    }
    CAnimBlendAssociation::SetFinishCallback(
      v8,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleStealthKill::FinishAnimStealthKillCB,
      this);
    result = 1;
    *v9 = 1;
  }
  return result;
}


// ============================================================

// Address: 0x4e8a14
// Original: _ZN22CTaskSimpleStealthKill23FinishAnimStealthKillCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleStealthKill::FinishAnimStealthKillCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleStealthKill::FinishAnimStealthKillCB(
        CTaskSimpleStealthKill *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0

  if ( (*((__int16 *)this + 22) | 2) == 0x15E )
    *((_BYTE *)a2 + 20) = 1;
  result = 0;
  *((_DWORD *)a2 + 6) = 0;
  return result;
}


// ============================================================

// Address: 0x4ea66c
// Original: _ZNK22CTaskSimpleStealthKill5CloneEv
// Demangled: CTaskSimpleStealthKill::Clone(void)
CTaskSimple *__fastcall CTaskSimpleStealthKill::Clone(CTaskSimpleStealthKill *this, unsigned int a2)
{
  CTaskSimple *v3; // r0
  __int64 v4; // kr00_8
  CTaskSimple *v5; // r4

  v3 = (CTaskSimple *)CTask::operator new((CTask *)&dword_20, a2);
  v4 = *(_QWORD *)((char *)this + 12);
  v5 = v3;
  LOBYTE(this) = *((_BYTE *)this + 8);
  CTaskSimple::CTaskSimple(v3);
  *((_BYTE *)v5 + 8) = (_BYTE)this;
  *((_DWORD *)v5 + 4) = HIDWORD(v4);
  *((_WORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 6) = 0;
  *((_DWORD *)v5 + 7) = 0;
  *(_DWORD *)v5 = &off_669ADC;
  *((_DWORD *)v5 + 3) = v4;
  if ( (_DWORD)v4 )
    CEntity::RegisterReference((CEntity *)v4, (CEntity **)v5 + 3);
  return v5;
}


// ============================================================

// Address: 0x4ea6c0
// Original: _ZNK22CTaskSimpleStealthKill11GetTaskTypeEv
// Demangled: CTaskSimpleStealthKill::GetTaskType(void)
int __fastcall CTaskSimpleStealthKill::GetTaskType(CTaskSimpleStealthKill *this)
{
  return 1027;
}


// ============================================================
