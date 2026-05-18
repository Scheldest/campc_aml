
// Address: 0x18ab70
// Original: j__ZN21CTaskSimpleHoldEntity14CanThrowEntityEv
// Demangled: CTaskSimpleHoldEntity::CanThrowEntity(void)
// attributes: thunk
int __fastcall CTaskSimpleHoldEntity::CanThrowEntity(CTaskSimpleHoldEntity *this)
{
  return _ZN21CTaskSimpleHoldEntity14CanThrowEntityEv(this);
}


// ============================================================

// Address: 0x18ad40
// Original: j__ZN21CTaskSimpleHoldEntityD2Ev
// Demangled: CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity()
// attributes: thunk
void __fastcall CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity(CTaskSimpleHoldEntity *this)
{
  _ZN21CTaskSimpleHoldEntityD2Ev(this);
}


// ============================================================

// Address: 0x18ba44
// Original: j__ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhhPKcS6_i
// Demangled: CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(CEntity *,CVector const*,uchar,uchar,char const*,char const*,int)
// attributes: thunk
void __fastcall CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(
        CTaskSimpleHoldEntity *this,
        CEntity *a2,
        const CVector *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const char *a6,
        const char *a7,
        int a8)
{
  _ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhhPKcS6_i(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x18ba9c
// Original: j__ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhhPKcS6_i_0
// Demangled: CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(CEntity *,CVector const*,uchar,uchar,char const*,char const*,int)
// attributes: thunk
void __fastcall CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(
        CTaskSimpleHoldEntity *this,
        CEntity *a2,
        const CVector *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const char *a6,
        const char *a7,
        int a8)
{
  _ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhhPKcS6_i(this, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x18c580
// Original: j__ZN21CTaskSimpleHoldEntity9StartAnimEP4CPed
// Demangled: CTaskSimpleHoldEntity::StartAnim(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleHoldEntity::StartAnim(CTaskSimpleHoldEntity *this, CPed *a2)
{
  return _ZN21CTaskSimpleHoldEntity9StartAnimEP4CPed(this, a2);
}


// ============================================================

// Address: 0x18db44
// Original: j__ZN21CTaskSimpleHoldEntity10DropEntityEP4CPedb
// Demangled: CTaskSimpleHoldEntity::DropEntity(CPed *,bool)
// attributes: thunk
int __fastcall CTaskSimpleHoldEntity::DropEntity(CEntity **this, CPed *a2, bool a3)
{
  return _ZN21CTaskSimpleHoldEntity10DropEntityEP4CPedb(this, a2, a3);
}


// ============================================================

// Address: 0x195ddc
// Original: j__ZN21CTaskSimpleHoldEntity19ChoosePutDownHeightEP4CPed
// Demangled: CTaskSimpleHoldEntity::ChoosePutDownHeight(CPed *)
// attributes: thunk
int __fastcall CTaskSimpleHoldEntity::ChoosePutDownHeight(CTaskSimpleHoldEntity *this, CPed *a2)
{
  return _ZN21CTaskSimpleHoldEntity19ChoosePutDownHeightEP4CPed(this, a2);
}


// ============================================================

// Address: 0x197894
// Original: j__ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhh11AnimationId12AssocGroupIdb
// Demangled: CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(CEntity *,CVector const*,uchar,uchar,AnimationId,AssocGroupId,bool)
// attributes: thunk
int __fastcall CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  return _ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhh11AnimationId12AssocGroupIdb(a1, a2, a3, a4, a5, a6, a7, a8);
}


// ============================================================

// Address: 0x19bdbc
// Original: j__ZN21CTaskSimpleHoldEntity8PlayAnimE11AnimationId12AssocGroupId
// Demangled: CTaskSimpleHoldEntity::PlayAnim(AnimationId,AssocGroupId)
// attributes: thunk
int CTaskSimpleHoldEntity::PlayAnim()
{
  return _ZN21CTaskSimpleHoldEntity8PlayAnimE11AnimationId12AssocGroupId();
}


// ============================================================

// Address: 0x5412c8
// Original: _ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhh11AnimationId12AssocGroupIdb
// Demangled: CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(CEntity *,CVector const*,uchar,uchar,AnimationId,AssocGroupId,bool)
int __fastcall CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(
        int a1,
        int a2,
        __int64 *a3,
        char a4,
        char a5,
        int a6,
        int a7,
        char a8)
{
  __int64 v12; // d16

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 25) = a5;
  *(_BYTE *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 32) = a6;
  *(_DWORD *)(a1 + 36) = a7;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 52) = 256;
  *(_BYTE *)(a1 + 54) = a8;
  *(_DWORD *)a1 = &off_66D19C;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  if ( a3 )
  {
    v12 = *a3;
    *(_DWORD *)(a1 + 20) = *((_DWORD *)a3 + 2);
    *(_QWORD *)(a1 + 12) = v12;
  }
  if ( a2 )
  {
    *(_DWORD *)(a2 + 28) |= 0x400u;
    CEntity::RegisterReference(*(CEntity **)(a1 + 8), (CEntity **)(a1 + 8));
  }
  return a1;
}


// ============================================================

// Address: 0x541350
// Original: _ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhhPKcS6_i
// Demangled: CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(CEntity *,CVector const*,uchar,uchar,char const*,char const*,int)
void __fastcall CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(
        CTaskSimpleHoldEntity *this,
        CEntity *a2,
        const CVector *a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        const char *a6,
        CAnimManager *a7,
        int a8)
{
  CEntity **v12; // r1
  __int64 v13; // d16
  int Animation; // r0
  int v15; // r2

  CTaskSimple::CTaskSimple(this);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_BYTE *)this + 25) = a5;
  *((_BYTE *)this + 24) = a4;
  *((_DWORD *)this + 8) = 191;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_WORD *)this + 26) = 256;
  *((_BYTE *)this + 54) = 0;
  *(_DWORD *)this = &off_66D19C;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = a2;
  v12 = (CEntity **)((char *)this + 8);
  if ( a3 )
  {
    v13 = *(_QWORD *)a3;
    *((_DWORD *)this + 5) = *((_DWORD *)a3 + 2);
    *(_QWORD *)((char *)this + 12) = v13;
  }
  if ( a2 )
  {
    *((_DWORD *)a2 + 7) |= 0x400u;
    CEntity::RegisterReference(*v12, v12);
  }
  *((_DWORD *)this + 10) = a8;
  *((_DWORD *)this + 11) = CAnimManager::GetAnimationBlock(a7, (const char *)v12);
  Animation = CAnimManager::GetAnimation();
  v15 = *((_DWORD *)this + 11);
  *((_DWORD *)this + 12) = Animation;
  CAnimManager::AddAnimBlockRef(
    (CAnimManager *)((v15 - (int)CAnimManager::ms_aAnimBlocks) >> 5),
    (int)CAnimManager::ms_aAnimBlocks);
}


// ============================================================

// Address: 0x5413f8
// Original: _ZN21CTaskSimpleHoldEntityC2EP7CEntityPK7CVectorhhP10CAnimBlockP19CAnimBlendHierarchyi
// Demangled: CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(CEntity *,CVector const*,uchar,uchar,CAnimBlock *,CAnimBlendHierarchy *,int)
int __fastcall CTaskSimpleHoldEntity::CTaskSimpleHoldEntity(
        int a1,
        int a2,
        __int64 *a3,
        char a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  CEntity **v12; // r1
  __int64 v13; // d16

  CTaskSimple::CTaskSimple((CTaskSimple *)a1);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 25) = a5;
  *(_BYTE *)(a1 + 24) = a4;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 191;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_WORD *)(a1 + 52) = 256;
  *(_BYTE *)(a1 + 54) = 0;
  *(_DWORD *)a1 = &off_66D19C;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  v12 = (CEntity **)(a1 + 8);
  if ( a3 )
  {
    v13 = *a3;
    *(_DWORD *)(a1 + 20) = *((_DWORD *)a3 + 2);
    *(_QWORD *)(a1 + 12) = v13;
  }
  if ( a2 )
  {
    *(_DWORD *)(a2 + 28) |= 0x400u;
    CEntity::RegisterReference(*v12, v12);
  }
  *(_DWORD *)(a1 + 44) = a6;
  *(_DWORD *)(a1 + 40) = a8;
  *(_DWORD *)(a1 + 48) = a7;
  CAnimManager::AddAnimBlockRef((CAnimManager *)((a6 - (int)CAnimManager::ms_aAnimBlocks) >> 5), (int)v12);
  return a1;
}


// ============================================================

// Address: 0x54149c
// Original: _ZN21CTaskSimpleHoldEntityD0Ev
// Demangled: CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity()
void __fastcall CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity(CTaskSimpleHoldEntity *this)
{
  void *v1; // r0

  CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity(this);
  j_CTask::operator delete(v1);
}


// ============================================================

// Address: 0x5414ac
// Original: _ZN21CTaskSimpleHoldEntity13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskSimpleHoldEntity::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskSimpleHoldEntity::MakeAbortable(CEntity **this, CPed *a2, int a3, const CEvent *a4)
{
  CEntity *v6; // r0
  int v7; // r6

  v6 = this[14];
  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v7 = 0;
    if ( v6 )
      *((_DWORD *)v6 + 7) = -1065353216;
  }
  else
  {
    if ( v6 )
    {
      *((_DWORD *)v6 + 7) = -1065353216;
      CAnimBlendAssociation::SetFinishCallback(
        this[14],
        (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
        0);
      this[14] = 0;
    }
    v7 = 1;
    CTaskSimpleHoldEntity::DropEntity(this, a2, 1);
    *((_BYTE *)this + 52) = 1;
  }
  return v7;
}


// ============================================================

// Address: 0x54150c
// Original: _ZN21CTaskSimpleHoldEntity10DropEntityEP4CPedb
// Demangled: CTaskSimpleHoldEntity::DropEntity(CPed *,bool)
CEntity *__fastcall CTaskSimpleHoldEntity::DropEntity(CEntity **this, CPed *a2, int a3)
{
  CEntity *result; // r0
  CEntity **v5; // r4
  CEntity *v6; // r5
  int v7; // r9
  int v8; // r0
  int v9; // r0
  int v10; // r8
  int v11; // r0
  __int64 v12; // d16
  float v13; // s0
  float *v14; // r0
  float v15; // s0
  float v16; // s2
  float v17; // s4
  float v18; // s0
  float v19; // s0
  float *v20; // r0
  float v21; // s0
  float v22; // s2
  float v23; // s4
  float v24; // s0
  float *v25; // r0
  float v26; // s0
  float v27; // s4
  int v28; // r0
  CEntity **v29; // r9
  int v30; // r0
  char *v31; // r2
  double v32; // d16
  CEventGroup *EventGlobalGroup; // r0
  int v34; // r0
  int v35; // r0
  float *v36; // r1
  __int64 v37; // kr00_8
  float v38; // s16
  float v39; // s0
  int v40; // r0
  float v41; // s0
  float *v42; // r0
  _DWORD v43[4]; // [sp+0h] [bp-48h] BYREF
  CEntity *v44; // [sp+10h] [bp-38h]
  int v45; // [sp+14h] [bp-34h]
  int v46; // [sp+18h] [bp-30h]
  double v47; // [sp+1Ch] [bp-2Ch]
  int v48; // [sp+24h] [bp-24h]

  v5 = this + 2;
  result = this[2];
  if ( result )
  {
    *((_DWORD *)result + 7) |= 1u;
    v6 = *v5;
    if ( (*((_BYTE *)*v5 + 58) & 7) != 4 )
    {
LABEL_37:
      CEntity::CleanUpOldReference(*v5, v5);
      result = 0;
      *v5 = 0;
      return result;
    }
    *((_DWORD *)v6 + 75) = a2;
    v7 = a3 ^ 1;
    v8 = *((_DWORD *)v6 + 17);
    if ( (v8 & 4) == 0 || v7 )
    {
      *((_DWORD *)v6 + 17) = v8 & 0xFDFFFFFF;
      if ( a3 == 1 )
      {
        if ( (*((_DWORD *)v6 + 7) & 0x40004) != 0 )
        {
          (*(void (__fastcall **)(CEntity *, _DWORD))(*(_DWORD *)v6 + 20))(v6, 0);
          CPhysical::AddToMovingList(v6);
        }
        v12 = *((_QWORD *)a2 + 9);
        *((_DWORD *)v6 + 20) = *((_DWORD *)a2 + 20);
        *((_QWORD *)v6 + 9) = v12;
        v13 = (float)rand();
        v14 = (float *)*((_DWORD *)a2 + 5);
        v15 = (float)((float)(v13 * 4.6566e-10) * 0.03) + 0.03;
        v16 = (float)(v14[4] * v15) + *((float *)v6 + 18);
        v17 = (float)(v14[6] * v15) + *((float *)v6 + 20);
        v18 = (float)(v14[5] * v15) + *((float *)v6 + 19);
        *((float *)v6 + 18) = v16;
        *((float *)v6 + 19) = v18;
        *((float *)v6 + 20) = v17;
        v19 = (float)rand();
        v20 = (float *)*((_DWORD *)a2 + 5);
        v21 = (float)((float)(v19 * 4.6566e-10) * 0.06) + -0.03;
        v22 = (float)(*v20 * v21) + *((float *)v6 + 18);
        v23 = (float)(v20[2] * v21) + *((float *)v6 + 20);
        v24 = (float)(v20[1] * v21) + *((float *)v6 + 19);
        *((float *)v6 + 18) = v22;
        *((float *)v6 + 19) = v24;
        *((float *)v6 + 20) = v23;
        v25 = (float *)*((_DWORD *)a2 + 5);
        v26 = (float)(v25[9] * 0.01) + v24;
        v27 = (float)(v25[10] * 0.01) + v23;
        *((float *)v6 + 18) = (float)(v25[8] * 0.01) + v22;
        *((float *)v6 + 19) = v26;
        *((float *)v6 + 20) = v27;
        v10 = (*(int (__fastcall **)(CEntity *, _DWORD))(*(_DWORD *)v6 + 56))(v6, 0);
      }
      else
      {
        v10 = 0;
        *((_DWORD *)v6 + 18) = 0;
        *((_DWORD *)v6 + 19) = 0;
        *((_DWORD *)v6 + 20) = 0;
      }
      goto LABEL_17;
    }
    if ( (*((_BYTE *)v6 + 325) & 0x20) != 0 )
    {
      v10 = 1;
    }
    else
    {
      v9 = *((unsigned __int8 *)v6 + 320);
      v10 = 1;
      if ( v9 == 2 )
        goto LABEL_17;
      if ( v9 != 3 )
      {
        if ( v9 == 6 )
          goto LABEL_17;
        ++CObject::nNoTempObjects;
      }
      v10 = 0;
      *((_DWORD *)v6 + 85) = 0;
      v11 = *((_DWORD *)v6 + 7);
      *((_BYTE *)v6 + 320) = 3;
      *((_DWORD *)v6 + 7) = v11 & 0xFFFFFF7E;
    }
LABEL_17:
    if ( (*((_BYTE *)v6 + 325) & 0x20) != 0 && !((*((_DWORD *)a2 + 273) == 0) | v7) )
    {
      CEventEditableResponse::CEventEditableResponse((CEventEditableResponse *)v43);
      v29 = (CEntity **)(v28 + 16);
      v44 = a2;
      v45 = 1114636288;
      v46 = -1;
      v47 = 0.0;
      v48 = 0;
      v43[0] = &off_66715C;
      CEntity::RegisterReference(a2, (CEntity **)(v28 + 16));
      if ( v46 == -1 )
      {
        v46 = CTimer::m_snTimeInMilliseconds;
        v30 = *((_DWORD *)v44 + 5);
        v31 = (char *)(v30 + 48);
        if ( !v30 )
          v31 = (char *)v44 + 4;
        v32 = *(double *)v31;
        v48 = *((_DWORD *)v31 + 2);
        v47 = v32;
      }
      EventGlobalGroup = (CEventGroup *)GetEventGlobalGroup();
      CEventGroup::Add(EventGlobalGroup, (CEvent *)v43, 0);
      v43[0] = &off_66715C;
      if ( v44 )
        CEntity::CleanUpOldReference(v44, v29);
      CEvent::~CEvent((CEvent *)v43);
    }
    if ( v10 == 1 )
    {
      v34 = *(_DWORD *)v6;
      *((_DWORD *)v6 + 18) = 0;
      *((_DWORD *)v6 + 19) = 0;
      *((_DWORD *)v6 + 20) = 0;
      (*(void (__fastcall **)(CEntity *, int))(v34 + 20))(v6, 1);
      CPhysical::RemoveFromMovingList(v6);
      v35 = *((_DWORD *)a2 + 5);
      v36 = (float *)(v35 + 48);
      if ( !v35 )
        v36 = (float *)((char *)a2 + 4);
      v37 = *(_QWORD *)v36;
      v38 = v36[2] + -1.0;
      v39 = *(float *)(CEntity::GetColModel(v6) + 8);
      v40 = *((_DWORD *)v6 + 5);
      v41 = v38 - v39;
      if ( v40 )
      {
        *(_DWORD *)(v40 + 48) = v37;
        *(_DWORD *)(*((_DWORD *)v6 + 5) + 52) = HIDWORD(v37);
        v42 = (float *)(*((_DWORD *)v6 + 5) + 56);
      }
      else
      {
        v42 = (float *)((char *)v6 + 12);
        *(_QWORD *)((char *)v6 + 4) = v37;
      }
      *v42 = v41;
      if ( *((_DWORD *)v6 + 6) )
      {
        if ( *((_DWORD *)v6 + 5) )
          CMatrix::UpdateRwMatrix();
        else
          CSimpleTransform::UpdateRwMatrix();
      }
      CEntity::UpdateRwFrame(v6);
    }
    goto LABEL_37;
  }
  return result;
}


// ============================================================

// Address: 0x541844
// Original: _ZN21CTaskSimpleHoldEntity10ProcessPedEP4CPed
// Demangled: CTaskSimpleHoldEntity::ProcessPed(CPed *)
int __fastcall CTaskSimpleHoldEntity::ProcessPed(CEntity **this, CPed *a2)
{
  int v4; // r0
  CEntity **v5; // r6
  CPhysical *v6; // r0
  CEntity *v7; // r0
  bool v8; // zf
  CEntity **v9; // r5
  CPhysical *v10; // r0
  int v11; // r1
  float v12; // s0
  int v13; // r4
  CEntity *v14; // r0
  bool v15; // zf
  CEntity *v16; // r0
  int v17; // r0
  CEntity *v18; // r0
  CEntity *v19; // r6
  float *v20; // r1
  float *v21; // r0
  float v22; // s0
  float v23; // s2
  float v24; // s4
  float v25; // s10
  CEntity *v26; // r1
  float v27; // s0
  float v28; // s2
  int v29; // r2
  float *v30; // r0
  CPad *PadFromPlayer; // r0
  unsigned int v32; // r1
  int v33; // r6
  int v34; // r0
  int v35; // r0
  int TaskSecondary; // r0
  int v38; // r0
  int v39; // r9
  CEntity *v40; // r0
  _DWORD *v41; // r8
  bool v42; // zf
  __int64 v43; // d16
  CEntity *v44; // r0
  float v45; // [sp+0h] [bp-30h] BYREF
  float v46; // [sp+4h] [bp-2Ch]
  float v47; // [sp+8h] [bp-28h]

  if ( *((_BYTE *)this + 53) )
  {
    v4 = (int)*this;
    *((_BYTE *)this + 53) = 0;
    v5 = this + 2;
    if ( (*(int (__fastcall **)(CEntity **))(v4 + 20))(this) == 309 )
    {
      v6 = *v5;
      if ( *v5 )
        goto LABEL_8;
      v7 = this[12];
      v8 = v7 == 0;
      if ( !v7 )
        v8 = this[9] == 0;
      if ( v8 )
      {
        if ( !CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4) )
          goto LABEL_62;
        TaskSecondary = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)TaskSecondary + 20))(TaskSecondary) != 307 )
          goto LABEL_62;
        v38 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4);
        v39 = v38;
        if ( !v38 )
          goto LABEL_62;
        v41 = (_DWORD *)(v38 + 8);
        v40 = *(CEntity **)(v38 + 8);
        v42 = v40 == 0;
        if ( v40 )
          v42 = *(_DWORD *)(v39 + 36) == 0;
        if ( !v42 )
        {
          this[2] = v40;
          CEntity::RegisterReference(v40, this + 2);
          v43 = *(_QWORD *)(v39 + 12);
          this[5] = *(CEntity **)(v39 + 20);
          this[8] = (CEntity *)(elf_hash_bucket + 67);
          *(_QWORD *)(this + 3) = v43;
          this[9] = *(CEntity **)(v39 + 36);
          CTaskSimpleHoldEntity::ChoosePutDownHeight((CTaskSimpleHoldEntity *)this, a2);
          v44 = *(CEntity **)(v39 + 8);
          if ( v44 )
          {
            CEntity::CleanUpOldReference(v44, (CEntity **)(v39 + 8));
            *v41 = 0;
          }
        }
        else
        {
LABEL_62:
          *((_BYTE *)this + 52) = 1;
        }
      }
    }
    v6 = *v5;
    if ( !*v5 )
    {
      v9 = this + 13;
      goto LABEL_17;
    }
LABEL_8:
    v9 = this + 13;
    if ( !*((_BYTE *)this + 52) )
    {
      *((_DWORD *)v6 + 7) &= ~1u;
      v10 = *v5;
      if ( (*((_BYTE *)*v5 + 58) & 7) == 4 )
      {
        if ( (*((_DWORD *)v10 + 7) & 0x40004) != 0 )
        {
          (*(void (__fastcall **)(CPhysical *, _DWORD))(*(_DWORD *)v10 + 20))(v10, 0);
          CPhysical::AddToMovingList(*v5);
          v10 = *v5;
        }
        *((_DWORD *)v10 + 17) |= 0x2000000u;
        *((_BYTE *)*v5 + 188) = 0;
        v10 = *v5;
      }
      v11 = *((_DWORD *)v10 + 5);
      if ( v11 )
        v12 = atan2f(COERCE_FLOAT(*(_DWORD *)(v11 + 16) ^ 0x80000000), *(float *)(v11 + 20));
      else
        v12 = *((float *)v10 + 4);
      *((float *)this + 7) = v12 - *((float *)a2 + 343);
      goto LABEL_20;
    }
LABEL_17:
    v13 = 1;
    *(_BYTE *)v9 = 1;
    return v13;
  }
  v9 = this + 13;
LABEL_20:
  if ( *(_BYTE *)v9 )
    return 1;
  v14 = this[8];
  v15 = v14 == (CEntity *)((char *)&dword_BC + 3);
  if ( v14 == (CEntity *)((char *)&dword_BC + 3) )
    v15 = this[12] == 0;
  if ( !v15 )
  {
    v16 = this[14];
    if ( v16 )
    {
      if ( *((float *)v16 + 7) < 0.0 && !*((_BYTE *)this + 54) )
        CTaskSimpleHoldEntity::DropEntity(this, a2, 1);
    }
    else
    {
      CTaskSimpleHoldEntity::StartAnim((CTaskSimpleHoldEntity *)this, a2);
    }
  }
  if ( !this[2] )
    return 0;
  v17 = (*((int (__fastcall **)(CEntity **))*this + 5))(this);
  if ( v17 != 307 )
  {
    if ( v17 == 309 )
    {
      if ( CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4) )
      {
        v34 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)v34 + 20))(v34) == 307 )
        {
          v35 = CTaskManager::GetTaskSecondary((CTaskManager *)(*((_DWORD *)a2 + 272) + 4), 4);
          v13 = 0;
          (*(void (__fastcall **)(int, CPed *, int, _DWORD))(*(_DWORD *)v35 + 28))(v35, a2, 1, 0);
          return v13;
        }
      }
    }
    else if ( v17 == 308 )
    {
      v18 = this[14];
      if ( (!v18 || *((float *)v18 + 8) < *((float *)this + 15))
        && (*((float *)this + 16) != 0.0 || *((float *)this + 17) != 0.0) )
      {
        v19 = this[2];
        if ( !*((_DWORD *)v19 + 5) )
        {
          CPlaceable::AllocateMatrix(this[2]);
          CSimpleTransform::UpdateMatrix((CEntity *)((char *)v19 + 4), *((CMatrix **)v19 + 5));
        }
        operator*();
        v20 = (float *)*((_DWORD *)a2 + 5);
        v21 = v20 + 12;
        if ( !v20 )
          v21 = (float *)((char *)a2 + 4);
        v22 = v45 - *v21;
        v23 = v46 - v21[1];
        v24 = v47 - v21[2];
        v45 = v22;
        v46 = v23;
        v47 = v24;
        v25 = *(float *)&CTimer::ms_fTimeStep;
        *((float *)a2 + 313) = *((float *)a2 + 313)
                             + (float)((float)((float)((float)((float)(v22 * *v20) + (float)(v23 * v20[1]))
                                                     + (float)(v24 * v20[2]))
                                             * 0.1)
                                     / *(float *)&CTimer::ms_fTimeStep);
        *((float *)a2 + 314) = *((float *)a2 + 314)
                             + (float)((float)((float)((float)((float)(v22 * v20[4]) + (float)(v23 * v20[5]))
                                                     + (float)(v24 * v20[6]))
                                             * 0.1)
                                     / v25);
        v26 = this[2];
        v27 = *v21;
        v28 = v21[1];
        v29 = *((_DWORD *)v26 + 5);
        v30 = (float *)(v29 + 48);
        if ( !v29 )
          v30 = (float *)((char *)v26 + 4);
        *((float *)a2 + 344) = atan2f(-(float)(*v30 - v27), v30[1] - v28);
      }
    }
    return 0;
  }
  if ( (unsigned int)this[9] - 81 > 2 || CPed::IsPlayer(a2) != 1 )
    return 0;
  PadFromPlayer = (CPad *)CPlayerPed::GetPadFromPlayer(a2);
  v13 = 0;
  if ( CPad::DropItemJustDown(PadFromPlayer) == 1 )
  {
    v33 = CTask::operator new((CTask *)&dword_40, v32);
    CTaskSimple::CTaskSimple((CTaskSimple *)v33);
    *(_QWORD *)(v33 + 8) = 0LL;
    *(_QWORD *)(v33 + 16) = 0LL;
    *(_WORD *)(v33 + 24) = 262;
    *(_DWORD *)(v33 + 32) = 191;
    *(_DWORD *)(v33 + 36) = 0;
    *(_DWORD *)(v33 + 44) = 0;
    *(_DWORD *)(v33 + 48) = 0;
    *(_WORD *)(v33 + 52) = 256;
    *(_BYTE *)(v33 + 54) = 0;
    *(_DWORD *)(v33 + 56) = 0;
    *(_DWORD *)(v33 + 60) = 1058642330;
    *(_DWORD *)v33 = &off_66D2A8;
    CTaskSimpleHoldEntity::m_nPutDownTimer = 2000;
    CEventScriptCommand::CEventScriptCommand((CEventScriptCommand *)&v45, 3, (CTask *)v33, 0);
    CEventGroup::Add((CEventGroup *)(*((_DWORD *)a2 + 272) + 104), (CEvent *)&v45, 0);
    CEventScriptCommand::~CEventScriptCommand((CEventScriptCommand *)&v45);
  }
  return v13;
}


// ============================================================

// Address: 0x541c60
// Original: _ZN21CTaskSimpleHoldEntity19ChoosePutDownHeightEP4CPed
// Demangled: CTaskSimpleHoldEntity::ChoosePutDownHeight(CPed *)
int __fastcall CTaskSimpleHoldEntity::ChoosePutDownHeight(CTaskSimpleHoldEntity *this, CPed *a2)
{
  float *v4; // r0
  float *v5; // r6
  float *v6; // r1
  float v7; // s4
  float v8; // s6
  float v9; // s2
  float v10; // s12
  float v11; // s8
  float v12; // s10
  int v13; // r0
  float v14; // s2
  int v15; // r0
  int result; // r0
  int *v17; // r1
  int v18; // s0
  int v19; // [sp+1Ch] [bp-4Ch] BYREF
  _BYTE v20[8]; // [sp+20h] [bp-48h] BYREF
  float v21; // [sp+28h] [bp-40h]
  float v22[2]; // [sp+4Ch] [bp-1Ch] BYREF
  float v23; // [sp+54h] [bp-14h]

  v4 = (float *)*((_DWORD *)a2 + 5);
  v5 = (float *)((char *)a2 + 4);
  v6 = (float *)((char *)a2 + 4);
  v7 = v4[5];
  v8 = v4[6] * 0.65;
  v9 = v4[4];
  if ( v4 )
    v6 = v4 + 12;
  v10 = v6[2];
  v11 = *v6;
  v12 = v6[1];
  v19 = 0;
  v22[1] = (float)(v7 * 0.65) + v12;
  v22[0] = (float)(v9 * 0.65) + v11;
  v23 = (float)(v8 + v10) + 0.2;
  if ( CWorld::ProcessVerticalLine((CVector *)v22, COERCE_INT(v23 + -1.5), (int)v20, (int)&v19, 1, 0, 0, 1, 0, 0, 0) == 1 )
  {
    v13 = *((_DWORD *)a2 + 5);
    if ( v13 )
      v5 = (float *)(v13 + 48);
    v14 = v5[2];
    if ( v21 >= (float)(v14 + -0.2) )
    {
      v15 = 83;
    }
    else
    {
      v15 = 81;
      if ( v21 >= (float)(v14 + -0.7) )
        v15 = 82;
    }
  }
  else
  {
    v15 = 81;
  }
  *((_DWORD *)this + 9) = v15;
  result = (*(int (__fastcall **)(CTaskSimpleHoldEntity *))(*(_DWORD *)this + 20))(this);
  if ( result == 309 )
  {
    result = *((_DWORD *)this + 9);
    v17 = dword_541D80;
    if ( result == 82 )
      v17 = &dword_541D80[1];
    v18 = *v17;
    if ( result == 83 )
      v18 = 1054727646;
    *((_DWORD *)this + 15) = v18;
  }
  return result;
}


// ============================================================

// Address: 0x541d8c
// Original: _ZN21CTaskSimpleHoldEntity13ReleaseEntityEv
// Demangled: CTaskSimpleHoldEntity::ReleaseEntity(void)
CEntity *__fastcall CTaskSimpleHoldEntity::ReleaseEntity(CTaskSimpleHoldEntity *this)
{
  CEntity *result; // r0
  CEntity **v2; // r4

  v2 = (CEntity **)((char *)this + 8);
  result = (CEntity *)*((_DWORD *)this + 2);
  if ( result )
  {
    CEntity::CleanUpOldReference(result, v2);
    result = 0;
    *v2 = 0;
  }
  return result;
}


// ============================================================

// Address: 0x541da8
// Original: _ZN21CTaskSimpleHoldEntity9StartAnimEP4CPed
// Demangled: CTaskSimpleHoldEntity::StartAnim(CPed *)
int __fastcall CTaskSimpleHoldEntity::StartAnim(CTaskSimpleHoldEntity *this, CPed *a2)
{
  int v4; // r1
  int v5; // r2
  int AnimationBlock; // r6
  CAnimManager *AnimBlockName; // r0
  const char *v8; // r1
  int v9; // r0
  int v10; // r0
  int v11; // r1
  CAnimBlendAssociation *v12; // r0

  if ( *((_DWORD *)this + 12) )
  {
    *((_DWORD *)this + 10) |= 0x414u;
    *((_DWORD *)this + 14) = CAnimManager::BlendAnimation();
  }
  else
  {
    v4 = *((_DWORD *)this + 9);
    if ( v4 )
    {
      if ( !*((_DWORD *)this + 11) )
      {
        v5 = 5 * v4;
        AnimationBlock = *(_DWORD *)(CAnimManager::ms_aAnimAssocGroups + 20 * v4);
        if ( !AnimationBlock )
        {
          AnimBlockName = (CAnimManager *)CAnimManager::GetAnimBlockName();
          AnimationBlock = CAnimManager::GetAnimationBlock(AnimBlockName, v8);
        }
        v9 = (AnimationBlock - (int)CAnimManager::ms_aAnimBlocks) >> 5;
        if ( !*(_BYTE *)(AnimationBlock + 16) )
          return j_CStreaming::RequestModel((CStreaming *)(v9 + 25575), 8, v5);
        CAnimManager::AddAnimBlockRef((CAnimManager *)v9, *(unsigned __int8 *)(AnimationBlock + 16));
        v4 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 11) = AnimationBlock;
      }
    }
    else
    {
      v4 = 0;
    }
    v10 = CAnimManager::BlendAnimation(*((_DWORD *)a2 + 6), v4, *((_DWORD *)this + 8));
    *((_DWORD *)this + 14) = v10;
    *(_WORD *)(v10 + 46) |= 4u;
    if ( (*(int (__fastcall **)(CTaskSimpleHoldEntity *))(*(_DWORD *)this + 20))(this) == 307 )
      *(_WORD *)(*((_DWORD *)this + 14) + 46) |= 0x400u;
  }
  v11 = (*(int (__fastcall **)(CTaskSimpleHoldEntity *))(*(_DWORD *)this + 20))(this);
  v12 = (CAnimBlendAssociation *)*((_DWORD *)this + 14);
  if ( v11 == 308 )
    return sub_18C20C(
             v12,
             (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleHoldEntity::FinishAnimHoldEntityCB,
             this);
  else
    return sub_192A28(
             v12,
             (void (*)(CAnimBlendAssociation *, void *))CTaskSimpleHoldEntity::FinishAnimHoldEntityCB,
             this);
}


// ============================================================

// Address: 0x541ea8
// Original: _ZN21CTaskSimpleHoldEntity14SetPedPositionEP4CPed
// Demangled: CTaskSimpleHoldEntity::SetPedPosition(CPed *)
int __fastcall CTaskSimpleHoldEntity::SetPedPosition(CTaskSimpleHoldEntity *this, CPed *a2)
{
  int v4; // r0
  int v5; // r6
  int v6; // r0
  bool v7; // zf
  int v8; // r0
  __int64 v9; // r2
  int v10; // r1
  int v11; // r0
  char *v12; // r3
  int v13; // r2
  __int64 v14; // kr00_8
  int v15; // r1
  double v16; // d16
  int v17; // r8
  float *v18; // r0
  float v19; // s2
  float v20; // s4
  CMatrix *v21; // r0
  int v22; // r5
  int v23; // r1
  int v24; // r2
  float v25; // r0
  int v26; // r6
  float *v27; // r1
  int v28; // r0
  double v29; // d16
  int v30; // r5
  int MatrixArray; // r0
  int v32; // r6
  int v33; // r1
  int v34; // r2
  float v35; // r0
  int v36; // r6
  float *v37; // r1
  int v38; // r2
  double v40; // [sp+0h] [bp-68h] BYREF
  float v41; // [sp+8h] [bp-60h]
  double v42; // [sp+48h] [bp-20h]
  float v43; // [sp+50h] [bp-18h]

  if ( (*(int (__fastcall **)(CTaskSimpleHoldEntity *))(*(_DWORD *)this + 20))(this) == 308 )
  {
    v4 = *((_DWORD *)this + 14);
    if ( !v4 || *(float *)(v4 + 32) < *((float *)this + 15) )
      return 0;
    goto LABEL_8;
  }
  v6 = (*(int (__fastcall **)(CTaskSimpleHoldEntity *))(*(_DWORD *)this + 20))(this);
  v7 = v6 == 309;
  if ( v6 == 309 )
    v7 = *((_BYTE *)this + 53) == 0;
  if ( !v7 || (v28 = *((_DWORD *)this + 14)) != 0 && *(float *)(v28 + 32) <= *((float *)this + 15) )
  {
LABEL_8:
    v8 = *((_DWORD *)this + 2);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 28);
      LODWORD(v9) = v9 & 0xFFFFFF7F | (((*((_DWORD *)a2 + 7) >> 7) & 1) << 7);
      *(_QWORD *)(v8 + 28) = v9;
      if ( (*((_BYTE *)a2 + 1165) & 4) != 0 )
      {
        if ( (*((_BYTE *)this + 25) & 0x10) != 0 )
        {
          v29 = *(double *)((char *)this + 12);
          v41 = *((float *)this + 5);
          v40 = v29;
          GetAnimHierarchyFromSkinClump();
          v30 = RpHAnimIDGetIndex();
          MatrixArray = RpHAnimHierarchyGetMatrixArray();
          RwV3dTransformPoints(&v40, &v40, 1, MatrixArray + (v30 << 6));
          v32 = *((_DWORD *)this + 2);
          if ( !*(_DWORD *)(v32 + 20) )
          {
            CPlaceable::AllocateMatrix(*((CPlaceable **)this + 2));
            CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v32 + 4), *(CMatrix **)(v32 + 20));
          }
          CMatrix::UpdateMatrix();
          v33 = *((_DWORD *)this + 2);
          v34 = HIDWORD(v40);
          v35 = v41;
          v36 = *(_DWORD *)(v33 + 20);
          if ( v36 )
          {
            *(_DWORD *)(v36 + 48) = LODWORD(v40);
            *(_DWORD *)(*(_DWORD *)(v33 + 20) + 52) = v34;
            v37 = (float *)(*(_DWORD *)(v33 + 20) + 56);
          }
          else
          {
            *(double *)(v33 + 4) = v40;
            v37 = (float *)(v33 + 12);
          }
          *v37 = v35;
        }
        else
        {
          v16 = *(double *)((char *)this + 12);
          v43 = *((float *)this + 5);
          v42 = v16;
          Multiply3x3((const CMatrix *)&v40, *((const CVector **)a2 + 5));
          v43 = v41;
          v42 = v40;
          GetAnimHierarchyFromSkinClump();
          v17 = RpHAnimIDGetIndex();
          v18 = (float *)(RpHAnimHierarchyGetMatrixArray() + (v17 << 6));
          v19 = v18[13] + *((float *)&v42 + 1);
          v20 = v18[14] + v43;
          *(float *)&v42 = v18[12] + *(float *)&v42;
          *((float *)&v42 + 1) = v19;
          v43 = v20;
          CMatrix::CMatrix((CMatrix *)&v40, *((const CMatrix **)a2 + 5));
          CMatrix::RotateZ(v21, *((float *)this + 7));
          v22 = *((_DWORD *)this + 2);
          if ( !*(_DWORD *)(v22 + 20) )
          {
            CPlaceable::AllocateMatrix(*((CPlaceable **)this + 2));
            CSimpleTransform::UpdateMatrix((CSimpleTransform *)(v22 + 4), *(CMatrix **)(v22 + 20));
          }
          CMatrix::operator=();
          v23 = *((_DWORD *)this + 2);
          v24 = HIDWORD(v42);
          v25 = v43;
          v26 = *(_DWORD *)(v23 + 20);
          if ( v26 )
          {
            *(_DWORD *)(v26 + 48) = LODWORD(v42);
            *(_DWORD *)(*(_DWORD *)(v23 + 20) + 52) = v24;
            v27 = (float *)(*(_DWORD *)(v23 + 20) + 56);
          }
          else
          {
            *(double *)(v23 + 4) = v42;
            v27 = (float *)(v23 + 12);
          }
          *v27 = v25;
          CMatrix::~CMatrix((CMatrix *)&v40);
        }
      }
      else
      {
        v10 = *((_DWORD *)a2 + 5);
        v11 = *((_DWORD *)this + 2);
        v12 = (char *)(v10 + 48);
        v13 = *(_DWORD *)(v11 + 20);
        if ( !v10 )
          v12 = (char *)a2 + 4;
        v14 = *(_QWORD *)v12;
        v15 = *((_DWORD *)v12 + 2);
        if ( v13 )
        {
          *(_DWORD *)(v13 + 48) = v14;
          *(_DWORD *)(*(_DWORD *)(v11 + 20) + 52) = HIDWORD(v14);
          *(_DWORD *)(*(_DWORD *)(v11 + 20) + 56) = v15;
        }
        else
        {
          *(_QWORD *)(v11 + 4) = v14;
          *(_DWORD *)(v11 + 12) = v15;
        }
      }
      v38 = *((_DWORD *)this + 2);
      if ( *(_DWORD *)(v38 + 24) )
      {
        if ( *(_DWORD *)(v38 + 20) )
          CMatrix::UpdateRwMatrix();
        else
          CSimpleTransform::UpdateRwMatrix();
      }
      CEntity::UpdateRwFrame(*((CEntity **)this + 2));
      return 1;
    }
    else
    {
      v5 = 0;
      (*(void (__fastcall **)(CTaskSimpleHoldEntity *, CPed *, int, _DWORD))(*(_DWORD *)this + 28))(this, a2, 1, 0);
    }
    return v5;
  }
  v5 = 0;
  if ( *((_DWORD *)this + 2) )
    CTaskSimpleHoldEntity::DropEntity((CEntity **)this, a2, 0);
  return v5;
}


// ============================================================

// Address: 0x542100
// Original: _ZN21CTaskSimpleHoldEntity22FinishAnimHoldEntityCBEP21CAnimBlendAssociationPv
// Demangled: CTaskSimpleHoldEntity::FinishAnimHoldEntityCB(CAnimBlendAssociation *,void *)
int __fastcall CTaskSimpleHoldEntity::FinishAnimHoldEntityCB(
        CTaskSimpleHoldEntity *this,
        CAnimBlendAssociation *a2,
        void *a3)
{
  int result; // r0
  CEntity *v6; // r0

  if ( *((_BYTE *)a2 + 54) )
  {
    result = 191;
    *((_DWORD *)a2 + 14) = 0;
    *((_QWORD *)a2 + 4) = 191LL;
  }
  else
  {
    if ( (*(int (__fastcall **)(CAnimBlendAssociation *))(*(_DWORD *)a2 + 20))(a2) == 308 && *((float *)this + 6) > 0.0 )
    {
      v6 = (CEntity *)*((_DWORD *)a2 + 2);
      if ( v6 )
      {
        CEntity::CleanUpOldReference(v6, (CEntity **)a2 + 2);
        *((_DWORD *)a2 + 2) = 0;
      }
    }
    *((_BYTE *)a2 + 52) = 1;
    result = 0;
    *((_DWORD *)a2 + 14) = 0;
  }
  return result;
}


// ============================================================

// Address: 0x542158
// Original: _ZN21CTaskSimpleHoldEntity14CanThrowEntityEv
// Demangled: CTaskSimpleHoldEntity::CanThrowEntity(void)
bool __fastcall CTaskSimpleHoldEntity::CanThrowEntity(CTaskSimpleHoldEntity *this)
{
  return *((_DWORD *)this + 2)
      && __PAIR64__(*((unsigned __int8 *)this + 25), *((unsigned __int8 *)this + 24)) == 0x1000000006LL;
}


// ============================================================

// Address: 0x542170
// Original: _ZN21CTaskSimpleHoldEntity8PlayAnimE11AnimationId12AssocGroupId
// Demangled: CTaskSimpleHoldEntity::PlayAnim(AnimationId,AssocGroupId)
int __fastcall CTaskSimpleHoldEntity::PlayAnim(int result, int a2, int a3)
{
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)(result + 36) = a3;
  return result;
}


// ============================================================

// Address: 0x5438a0
// Original: _ZN21CTaskSimpleHoldEntityD2Ev
// Demangled: CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity()
void __fastcall CTaskSimpleHoldEntity::~CTaskSimpleHoldEntity(CTaskSimpleHoldEntity *this)
{
  int v2; // r1
  int v3; // r0
  CEntity **v4; // r5
  CEntity *v5; // r0
  __int64 v6; // kr00_8
  CAnimBlendAssociation *v7; // r0
  int v8; // r0

  v2 = *((unsigned __int8 *)this + 53);
  *(_DWORD *)this = &off_66D19C;
  if ( !v2 )
  {
    v4 = (CEntity **)((char *)this + 8);
    v3 = *((_DWORD *)this + 2);
    if ( v3 )
    {
      *(_DWORD *)(v3 + 28) &= ~0x400u;
      CEntity::CleanUpOldReference(*v4, (CEntity **)this + 2);
      v5 = *v4;
      v6 = *(_QWORD *)((char *)*v4 + 28);
      *((_DWORD *)v5 + 7) = v6 | 0x800;
      *((_DWORD *)v5 + 8) = HIDWORD(v6);
      *v4 = 0;
    }
  }
  v7 = (CAnimBlendAssociation *)*((_DWORD *)this + 14);
  if ( v7 )
    CAnimBlendAssociation::SetFinishCallback(
      v7,
      (void (*)(CAnimBlendAssociation *, void *))CDefaultAnimCallback::DefaultAnimCB,
      0);
  v8 = *((_DWORD *)this + 11);
  if ( v8 )
    CAnimManager::RemoveAnimBlockRef(
      (CAnimManager *)((v8 - (int)CAnimManager::ms_aAnimBlocks) >> 5),
      (int)CAnimManager::ms_aAnimBlocks);
  j_CTask::~CTask(this);
}


// ============================================================

// Address: 0x543be4
// Original: _ZNK21CTaskSimpleHoldEntity5CloneEv
// Demangled: CTaskSimpleHoldEntity::Clone(void)
CTaskSimple *__fastcall CTaskSimpleHoldEntity::Clone(CTaskSimpleHoldEntity *this, unsigned int a2)
{
  int v3; // r6
  CTaskSimple *v4; // r0
  char v5; // r11
  __int64 *v6; // r8
  char v7; // r10
  CTaskSimple *v8; // r4
  int v9; // r9
  __int64 v10; // kr00_8
  __int64 v11; // d16
  __int64 v12; // kr08_8
  __int64 v13; // d16
  int v15; // [sp+0h] [bp-20h]

  v3 = *((_DWORD *)this + 12);
  v4 = (CTaskSimple *)CTask::operator new((CTask *)&off_3C, a2);
  v5 = *((_BYTE *)this + 25);
  v6 = (__int64 *)((char *)this + 12);
  v7 = *((_BYTE *)this + 24);
  v8 = v4;
  v9 = *((_DWORD *)this + 2);
  if ( v3 )
  {
    v15 = *((_DWORD *)this + 10);
    v10 = *(_QWORD *)((char *)this + 44);
    CTaskSimple::CTaskSimple(v4);
    *((_BYTE *)v8 + 24) = v7;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 4) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 25) = v5;
    *((_DWORD *)v8 + 7) = 0;
    *((_DWORD *)v8 + 8) = 191;
    *((_DWORD *)v8 + 9) = 0;
    *((_WORD *)v8 + 26) = 256;
    *((_BYTE *)v8 + 54) = 0;
    *((_DWORD *)v8 + 14) = 0;
    *(_DWORD *)v8 = &off_66D19C;
    *((_DWORD *)v8 + 2) = v9;
    v11 = *v6;
    *((_DWORD *)v8 + 5) = *((_DWORD *)this + 5);
    *(_QWORD *)((char *)v8 + 12) = v11;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 28) |= 0x400u;
      CEntity::RegisterReference(*((CEntity **)v8 + 2), (CEntity **)v8 + 2);
    }
    *((_DWORD *)v8 + 11) = v10;
    *((_DWORD *)v8 + 10) = v15;
    *((_DWORD *)v8 + 12) = HIDWORD(v10);
    CAnimManager::AddAnimBlockRef((CAnimManager *)(((int)v10 - (int)CAnimManager::ms_aAnimBlocks) >> 5), v15);
  }
  else
  {
    v12 = *((_QWORD *)this + 4);
    CTaskSimple::CTaskSimple(v4);
    *((_BYTE *)v8 + 24) = v7;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 4) = 0;
    *((_DWORD *)v8 + 5) = 0;
    *((_BYTE *)v8 + 25) = v5;
    *((_QWORD *)v8 + 4) = v12;
    *((_DWORD *)v8 + 11) = 0;
    *((_DWORD *)v8 + 12) = 0;
    *((_WORD *)v8 + 26) = 256;
    *((_BYTE *)v8 + 54) = 0;
    *((_DWORD *)v8 + 14) = 0;
    *(_DWORD *)v8 = &off_66D19C;
    *((_DWORD *)v8 + 2) = v9;
    v13 = *v6;
    *((_DWORD *)v8 + 5) = *((_DWORD *)this + 5);
    *(_QWORD *)((char *)v8 + 12) = v13;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 28) |= 0x400u;
      CEntity::RegisterReference(*((CEntity **)v8 + 2), (CEntity **)v8 + 2);
    }
  }
  return v8;
}


// ============================================================

// Address: 0x543d0c
// Original: _ZNK21CTaskSimpleHoldEntity11GetTaskTypeEv
// Demangled: CTaskSimpleHoldEntity::GetTaskType(void)
int __fastcall CTaskSimpleHoldEntity::GetTaskType(CTaskSimpleHoldEntity *this)
{
  return 307;
}


// ============================================================
