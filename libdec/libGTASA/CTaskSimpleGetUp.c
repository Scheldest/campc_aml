
// Address: 0x194b7c
// Original: j__ZN16CTaskSimpleGetUp9StartAnimEP4CPed
// Demangled: CTaskSimpleGetUp::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleGetUp::StartAnim(CTaskSimpleGetUp *this, CPed *a2)
{
  return _ZN16CTaskSimpleGetUp9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x19ae24
// Original: j__ZN16CTaskSimpleGetUpC2Ev
// Demangled: CTaskSimpleGetUp::CTaskSimpleGetUp(void)
// attributes: thunk
void __fastcall CTaskSimpleGetUp::CTaskSimpleGetUp(CTaskSimpleGetUp *this)
{
  _ZN16CTaskSimpleGetUpC2Ev(this);
}


// ============================================================

// Address: 0x52afe8
// Original: _ZN16CTaskSimpleGetUpC2Ev
// Demangled: CTaskSimpleGetUp::CTaskSimpleGetUp(void)
void __fastcall CTaskSimpleGetUp::CTaskSimpleGetUp(CTaskSimpleGetUp *this)
{
  int v1; // r0

  CTaskSimple::CTaskSimple(this);
  *(_WORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)v1 = &off_66C998;
}


// ============================================================

// Address: 0x52b008
// Original: _ZN16CTaskSimpleGetUpD2Ev
// Demangled: CTaskSimpleGetUp::~CTaskSimpleGetUp()
void __fastcall CTaskSimpleGetUp::~CTaskSimpleGetUp(CTaskSimpleGetUp *this)
{
  CAnimBlendAssociation *v2; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C998;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x52b03c
// Original: _ZN16CTaskSimpleGetUpD0Ev
// Demangled: CTaskSimpleGetUp::~CTaskSimpleGetUp()
void __fastcall CTaskSimpleGetUp::~CTaskSimpleGetUp(CTaskSimpleGetUp *this)
{
  CAnimBlendAssociation *v2; // r0
  void *v3; // r0

  v2 = (CAnimBlendAssociation *)*((_DWORD *)this + 3);
  *(_DWORD *)this = &off_66C998;
  if ( v2 )
    CAnimBlendAssociation::SetFinishCallback(
      v2,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  CTask::~CTask(this);
  j_CTask::operator delete(v3);
}


// ============================================================

// Address: 0x52b074
// Original: _ZN16CTaskSimpleGetUp13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleGetUp::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleGetUp::MakeAbortable(CTaskSimpleGetUp *this, CPed *a2, int a3, const CEvent *a4)
{
  int v7; // r0
  bool v8; // zf
  int result; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r1

  if ( a3 != 1 )
  {
    if ( a3 == 2 )
    {
      v7 = *((_DWORD *)this + 3);
      if ( v7 )
        *(_DWORD *)(v7 + 28) = -998637568;
      goto LABEL_20;
    }
    return 0;
  }
  if ( !a4 )
  {
    result = 0;
    goto LABEL_16;
  }
  if ( (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 8))(a4) == 9 )
  {
    v8 = *((_BYTE *)a4 + 60) == 0;
    if ( *((_BYTE *)a4 + 60) )
      v8 = *((_BYTE *)a4 + 9) == 0;
    if ( v8 )
    {
      result = 0;
      if ( (float)((float)(unsigned int)(float)((float)(*(float *)&CTimer::ms_fTimeStep / 50.0) * 1000.0) * 3.0) < (float)(unsigned int)(CTimer::m_snTimeInMilliseconds - *((_DWORD *)a4 + 5)) )
      {
LABEL_18:
        if ( *((_BYTE *)this + 8) || result == 1 )
          goto LABEL_20;
        return 0;
      }
    }
    else
    {
      result = 1;
    }
LABEL_16:
    if ( *((_DWORD *)this + 3) )
    {
      CAnimBlendAssociation::SetFinishCallback(
        *((CAnimBlendAssociation **)this + 3),
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      *((_DWORD *)this + 3) = 0;
      *((_WORD *)this + 4) = 257;
LABEL_20:
      v11 = *((_DWORD *)a2 + 291);
      v12 = *((_DWORD *)a2 + 292);
      v13 = *((_DWORD *)a2 + 290);
      *((_DWORD *)a2 + 289) = *((_DWORD *)a2 + 289);
      *((_DWORD *)a2 + 290) = v13;
      *((_DWORD *)a2 + 291) = v11;
      result = 1;
      *((_DWORD *)a2 + 292) = v12 & 0xFFFFFFF7;
      return result;
    }
    goto LABEL_18;
  }
  v10 = (*(int (__fastcall **)(const CEvent *))(*(_DWORD *)a4 + 12))(a4);
  result = 0;
  if ( v10 >= 61 )
    goto LABEL_16;
  return result;
}


// ============================================================

// Address: 0x52b1a0
// Original: _ZN16CTaskSimpleGetUp10ProcessPedEP4CPed
// Demangled: CTaskSimpleGetUp::ProcessPed(CPed *)
int __fastcall CTaskSimpleGetUp::ProcessPed(CTaskSimpleGetUp *this, CPed *a2)
{
  int v5; // r12
  int v6; // r1
  unsigned int v7; // r2
  int v8; // r3
  int v9; // r0
  _DWORD *v10; // r5

  *((_DWORD *)a2 + 333) |= 8u;
  if ( *((_BYTE *)this + 9) )
    return 1;
  if ( *((_DWORD *)this + 3) || (CTaskSimpleGetUp::StartAnim(this, a2), *((_DWORD *)this + 3)) )
  {
    v5 = *((_DWORD *)a2 + 289);
    v6 = *((_DWORD *)a2 + 290);
    v7 = *((_DWORD *)a2 + 292) & 0xFFFFFFF7;
    v8 = *((_DWORD *)a2 + 291);
    *((_DWORD *)a2 + 292) = v7;
    v9 = *((_DWORD *)this + 3);
    v10 = (_DWORD *)((char *)a2 + 1156);
    if ( v9 && *(float *)(v9 + 32) >= (float)(*(float *)(*(_DWORD *)(v9 + 20) + 16) * 0.75) )
      return 0;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 289);
    v10 = (_DWORD *)((char *)a2 + 1156);
    v6 = *((_DWORD *)a2 + 290);
    v8 = *((_DWORD *)a2 + 291);
    v7 = *((_DWORD *)a2 + 292);
  }
  *v10 = v5;
  v10[1] = v6;
  v10[2] = v8 | 0x100000;
  v10[3] = v7;
  return 0;
}


// ============================================================

// Address: 0x52b234
// Original: _ZN16CTaskSimpleGetUp9StartAnimEP4CPed
// Demangled: CTaskSimpleGetUp::StartAnim(CPed *)
int __fastcall CTaskSimpleGetUp::StartAnim(CTaskSimpleGetUp *this, CPed *a2)
{
  int IsPositionClearOfCars; // r0
  CEntity *v5; // r5
  bool v6; // zf
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  int v10; // r1
  bool v11; // zf
  int FirstAssociation; // r0
  unsigned int v13; // r2
  CAnimBlendAssociation *v14; // r0
  int v15; // r6
  int v17; // r10
  int v18; // r8
  CMatrix *v19; // r2
  int v20; // r9
  int v21; // r0
  int v22; // r1
  int v23; // s0
  CEventDamage *v24; // r0
  _BYTE v25[64]; // [sp+14h] [bp-6Ch] BYREF
  _BYTE v26[44]; // [sp+54h] [bp-2Ch] BYREF

  IsPositionClearOfCars = CPedPlacement::IsPositionClearOfCars(a2, a2);
  v5 = (CEntity *)IsPositionClearOfCars;
  v6 = IsPositionClearOfCars == 0;
  if ( IsPositionClearOfCars )
    v6 = *(_DWORD *)(IsPositionClearOfCars + 1440) == 9;
  if ( !v6 )
  {
    v7 = *(_DWORD *)(IsPositionClearOfCars + 1444);
    v8 = v7 == 2;
    if ( v7 != 2 )
      v8 = v5 == *((CEntity **)a2 + 64);
    if ( !v8 && *((CEntity **)a2 + 347) != v5 )
      goto LABEL_26;
  }
  v9 = *((_DWORD *)a2 + 75);
  if ( !v9 || (*(_BYTE *)(v9 + 58) & 7) != 2 )
    goto LABEL_14;
  v10 = *(_DWORD *)(v9 + 1440);
  v11 = v10 == 9;
  if ( v10 != 9 )
    v11 = *(_DWORD *)(v9 + 1444) == 2;
  if ( v11 || IsVehiclePointerValid((CVehicle *)v9) != 1 )
    goto LABEL_14;
  if ( (CTimer::m_FrameCounter + *((unsigned __int16 *)a2 + 18) + 5) << 29 )
    goto LABEL_26;
  v17 = *((_DWORD *)a2 + 75);
  v18 = *((_DWORD *)a2 + 5);
  v19 = *(CMatrix **)(v17 + 20);
  v20 = *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*((__int16 *)a2 + 19)]) + 44);
  if ( v19 )
  {
    v21 = *((_DWORD *)a2 + 75);
  }
  else
  {
    CPlaceable::AllocateMatrix(*((CPlaceable **)a2 + 75));
    CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v17 + 4), *(CMatrix **)(v17 + 20));
    v21 = *((_DWORD *)a2 + 75);
    v19 = *(CMatrix **)(v17 + 20);
  }
  if ( CCollision::ProcessColModels(
         v18,
         v20,
         v19,
         *(_DWORD *)(LODWORD(CModelInfo::ms_modelInfoPtrs[*(__int16 *)(v21 + 38)]) + 44),
         (int)&unk_9FF1C4,
         0,
         0,
         0) < 1 )
  {
LABEL_14:
    *((_DWORD *)a2 + 75) = 0;
    FirstAssociation = RpAnimBlendClumpGetFirstAssociation();
    v13 = 112;
    if ( FirstAssociation )
      v13 = 115;
    v14 = (CAnimBlendAssociation *)CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), 0, v13);
    *((_DWORD *)this + 3) = v14;
    CAnimBlendAssociation::SetFinishCallback(
      v14,
      (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleGetUp::FinishAnimGetUpCB,
      this);
    v15 = 1;
    CPed::SetPedState(a2);
  }
  else
  {
LABEL_26:
    *((_DWORD *)a2 + 292) |= 8u;
    if ( CPed::IsPlayer(a2) )
    {
      v23 = CTimer::ms_fTimeStep;
      if ( *(float *)&CTimer::ms_fTimeStep <= 0.0 )
        return 0;
    }
    else
    {
      v15 = 0;
      if ( !*(_WORD *)(CPad::GetPad(0, v22) + 272) )
        return v15;
      v23 = 1148846080;
    }
    CPedDamageResponseCalculator::CPedDamageResponseCalculator((int)v26, (int)v5, v23, 50, 3, 0);
    v24 = (CEventDamage *)CEventDamage::CEventDamage(
                            (int)v25,
                            v5,
                            CTimer::m_snTimeInMilliseconds,
                            50,
                            3,
                            0,
                            0,
                            (*((_DWORD *)a2 + 289) >> 8) & 1);
    if ( CEventDamage::AffectsPed(v24, a2) == 1 )
      CPedDamageResponseCalculator::ComputeDamageResponse((int)v26, a2);
    else
      v25[62] = 1;
    v15 = 0;
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)v25, 0);
    CEventDamage::~CEventDamage((CEventDamage *)v25);
    CPedDamageResponseCalculator::~CPedDamageResponseCalculator((CPedDamageResponseCalculator *)v26);
  }
  return v15;
}


// ============================================================

// Address: 0x52b444
// Original: _ZN16CTaskSimpleGetUp17FinishAnimGetUpCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleGetUp::FinishAnimGetUpCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleGetUp::FinishAnimGetUpCB(CTaskSimpleGetUp *this, CAnimBlendAssociation *a2, void *a3)
{
  int v3; // r0
  int result; // r0

  v3 = *((_DWORD *)a2 + 3);
  *((_BYTE *)a2 + 9) = 1;
  *(_DWORD *)(v3 + 28) = -998637568;
  result = 0;
  *((_BYTE *)a2 + 8) = 1;
  *((_DWORD *)a2 + 3) = 0;
  return result;
}


// ============================================================

// Address: 0x5328f4
// Original: _ZNK16CTaskSimpleGetUp5CloneEv
// Demangled: CTaskSimpleGetUp::Clone(void)
int __fastcall CTaskSimpleGetUp::Clone(CTaskSimpleGetUp *this, unsigned int a2)
{
  CTaskSimple *v2; // r0
  int result; // r0

  v2 = (CTaskSimple *)CTask::operator new((CTask *)&word_10, a2);
  CTaskSimple::CTaskSimple(v2);
  *(_WORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)result = &off_66C998;
  return result;
}


// ============================================================

// Address: 0x532918
// Original: _ZNK16CTaskSimpleGetUp11GetTaskTypeEv
// Demangled: CTaskSimpleGetUp::GetTaskType(void)
int __fastcall CTaskSimpleGetUp::GetTaskType(CTaskSimpleGetUp *this)
{
  return 205;
}


// ============================================================

// Address: 0x53291c
// Original: _ZN16CTaskSimpleGetUp9SerializeEv
// Demangled: CTaskSimpleGetUp::Serialize(void)
int __fastcall CTaskSimpleGetUp::Serialize(CTaskSimpleGetUp *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int result; // r0
  int v6; // r0

  v2 = (*(int (__fastcall **)(CTaskSimpleGetUp *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  result = (*(int (__fastcall **)(CTaskSimpleGetUp *))(*(_DWORD *)this + 20))(this);
  if ( result != 205 )
  {
    v6 = (*(int (__fastcall **)(CTaskSimpleGetUp *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(205, v6);
  }
  return result;
}


// ============================================================
