
// Address: 0x18efc4
// Original: j__ZN27CTaskComplexGangJoinRespondC2Eh
// Demangled: CTaskComplexGangJoinRespond::CTaskComplexGangJoinRespond(uchar)
// attributes: thunk
void __fastcall CTaskComplexGangJoinRespond::CTaskComplexGangJoinRespond(
        CTaskComplexGangJoinRespond *this,
        unsigned __int8 a2)
{
  _ZN27CTaskComplexGangJoinRespondC2Eh(this, a2);
}


// ============================================================

// Address: 0x51b130
// Original: _ZN27CTaskComplexGangJoinRespondC2Eh
// Demangled: CTaskComplexGangJoinRespond::CTaskComplexGangJoinRespond(uchar)
void __fastcall CTaskComplexGangJoinRespond::CTaskComplexGangJoinRespond(
        CTaskComplexGangJoinRespond *this,
        unsigned __int8 a2)
{
  int v3; // r0

  CTaskComplex::CTaskComplex(this);
  *(_BYTE *)(v3 + 12) = a2;
  *(_BYTE *)(v3 + 13) = 0;
  *(_DWORD *)v3 = &off_66C038;
}


// ============================================================

// Address: 0x51b150
// Original: _ZN27CTaskComplexGangJoinRespondD2Ev
// Demangled: CTaskComplexGangJoinRespond::~CTaskComplexGangJoinRespond()
void __fastcall CTaskComplexGangJoinRespond::~CTaskComplexGangJoinRespond(CTaskComplexGangJoinRespond *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1

  v2 = (const char *)*((unsigned __int8 *)this + 13);
  *(_DWORD *)this = &off_66C038;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 13) = 0;
  }
  sub_18EDE8(this);
}


// ============================================================

// Address: 0x51b18c
// Original: _ZN27CTaskComplexGangJoinRespondD0Ev
// Demangled: CTaskComplexGangJoinRespond::~CTaskComplexGangJoinRespond()
void __fastcall CTaskComplexGangJoinRespond::~CTaskComplexGangJoinRespond(CTaskComplexGangJoinRespond *this)
{
  const char *v2; // r1
  CAnimManager *AnimationBlockIndex; // r0
  int v4; // r1
  void *v5; // r0

  v2 = (const char *)*((unsigned __int8 *)this + 13);
  *(_DWORD *)this = &off_66C038;
  if ( v2 )
  {
    AnimationBlockIndex = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", v2);
    CAnimManager::RemoveAnimBlockRef(AnimationBlockIndex, v4);
    *((_BYTE *)this + 13) = 0;
  }
  CTaskComplex::~CTaskComplex(this);
  j_CTask::operator delete(v5);
}


// ============================================================

// Address: 0x51b1cc
// Original: _ZN27CTaskComplexGangJoinRespond13MakeAbortableEP4CPediPK6CEvent
// Demangled: CTaskComplexGangJoinRespond::MakeAbortable(CPed *,int,CEvent const*)
int __fastcall CTaskComplexGangJoinRespond::MakeAbortable(
        CTaskComplexGangJoinRespond *this,
        CPed *a2,
        int a3,
        const CEvent *a4)
{
  return 1;
}


// ============================================================

// Address: 0x51b1d0
// Original: _ZN27CTaskComplexGangJoinRespond17CreateNextSubTaskEP4CPed
// Demangled: CTaskComplexGangJoinRespond::CreateNextSubTask(CPed *)
void __fastcall CTaskComplexGangJoinRespond::CreateNextSubTask(CTaskComplexGangJoinRespond *this, CPed *a2)
{
  unsigned int v3; // r1
  int v4; // r4
  int v5; // r0
  int v6; // r2
  int v7; // r0
  CTaskSimpleStandStill *v8; // r0

  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 2) + 20))(*((_DWORD *)this + 2)) != 400 )
  {
    if ( *((_BYTE *)this + 13) )
    {
      v4 = *((unsigned __int8 *)this + 12);
      v5 = CTask::operator new((CTask *)&dword_20, v3);
      if ( v4 == 1 )
        v6 = 306;
      else
        v6 = 307;
      CTaskSimpleRunAnim::CTaskSimpleRunAnim(v5, 52, v6, 1082130432, 0);
    }
    else
    {
      v7 = *((_DWORD *)this + 4);
      *((_DWORD *)this + 4) = v7 + 1;
      if ( v7 <= 9 )
      {
        v8 = (CTaskSimpleStandStill *)CTask::operator new((CTask *)&dword_20, v7 + 1);
        CTaskSimpleStandStill::CTaskSimpleStandStill(v8, 250, 0, 0, 8.0);
      }
    }
  }
}


// ============================================================

// Address: 0x51b23c
// Original: _ZN27CTaskComplexGangJoinRespond18CreateFirstSubTaskEP4CPed
// Demangled: CTaskComplexGangJoinRespond::CreateFirstSubTask(CPed *)
CTaskComplexTurnToFaceEntityOrCoord *__fastcall CTaskComplexGangJoinRespond::CreateFirstSubTask(
        CTaskComplexGangJoinRespond *this,
        CPed *a2)
{
  CTaskComplexTurnToFaceEntityOrCoord *v2; // r4
  CEntity *PlayerPed; // r1

  *((_DWORD *)this + 4) = 0;
  v2 = (CTaskComplexTurnToFaceEntityOrCoord *)CTask::operator new((CTask *)&word_28, 0);
  PlayerPed = (CEntity *)FindPlayerPed(0);
  return sub_19C9F8(v2, PlayerPed, 0.5, 0.2);
}


// ============================================================

// Address: 0x51b278
// Original: _ZN27CTaskComplexGangJoinRespond14ControlSubTaskEP4CPed
// Demangled: CTaskComplexGangJoinRespond::ControlSubTask(CPed *)
int __fastcall CTaskComplexGangJoinRespond::ControlSubTask(CTaskComplexGangJoinRespond *this, CPed *a2)
{
  int PlayerPed; // r0
  int v5; // r1
  int v6; // r2
  float *v7; // r3
  float *v8; // r1
  float v9; // s2
  float v10; // s6
  CGeneral *RadianAngleBetweenPoints; // r0
  float v12; // r1
  int v13; // r5
  int v14; // r1
  float *v15; // r0
  bool v16; // zf
  int v17; // r0
  int AnimationBlockIndex; // r0
  int v19; // r2
  char v20; // r0
  CAnimManager *v21; // r0
  int v22; // r1
  float v24; // [sp+0h] [bp-18h]
  float v25; // [sp+4h] [bp-14h] BYREF
  float v26; // [sp+8h] [bp-10h]
  int v27; // [sp+Ch] [bp-Ch]

  PlayerPed = FindPlayerPed(-1);
  v5 = *((_DWORD *)a2 + 5);
  v6 = *(_DWORD *)(PlayerPed + 20);
  v7 = (float *)(v5 + 48);
  if ( !v5 )
    v7 = (float *)((char *)a2 + 4);
  v8 = (float *)(v6 + 48);
  v9 = v7[1];
  if ( !v6 )
    v8 = (float *)(PlayerPed + 4);
  v10 = v8[1];
  v25 = *v8 - *v7;
  v27 = 0;
  v26 = v10 - v9;
  CVector::Normalise((CVector *)&v25);
  RadianAngleBetweenPoints = (CGeneral *)CGeneral::GetRadianAngleBetweenPoints(
                                           (CGeneral *)LODWORD(v25),
                                           v26,
                                           0.0,
                                           0.0,
                                           v24);
  *((_DWORD *)a2 + 344) = CGeneral::LimitRadianAngle(RadianAngleBetweenPoints, v12);
  v13 = *((unsigned __int8 *)this + 13);
  v14 = CWorld::Players[101 * *(__int16 *)&CWorld::PlayerInFocus];
  v15 = *(float **)(v14 + 1424);
  v16 = v15 == 0;
  if ( v15 )
  {
    v14 = *(_DWORD *)(v14 + 1156) & 0x100;
    v16 = v14 == 0;
  }
  if ( v16
    || (float)((float)((float)(v15[18] * v15[18]) + (float)(v15[19] * v15[19])) + (float)(v15[20] * v15[20])) <= 0.04 )
  {
    v17 = CStreaming::IsVeryBusy((CStreaming *)v15) ^ 1;
    if ( !v13 )
    {
LABEL_10:
      if ( v17 == 1 )
      {
        AnimationBlockIndex = CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v14);
        if ( CAnimManager::ms_aAnimBlocks[32 * AnimationBlockIndex + 16] != 1 )
        {
          CStreaming::RequestModel((CStreaming *)(AnimationBlockIndex + 25575), 8, v19);
          return *((_DWORD *)this + 2);
        }
        CAnimManager::AddAnimBlockRef((CAnimManager *)AnimationBlockIndex, 1);
        v20 = 1;
        goto LABEL_16;
      }
      return *((_DWORD *)this + 2);
    }
  }
  else
  {
    v17 = 0;
    if ( !*((_BYTE *)this + 13) )
      goto LABEL_10;
  }
  if ( !v17 )
  {
    v21 = (CAnimManager *)CAnimManager::GetAnimationBlockIndex((CAnimManager *)"gangs", (const char *)v14);
    CAnimManager::RemoveAnimBlockRef(v21, v22);
    v20 = 0;
LABEL_16:
    *((_BYTE *)this + 13) = v20;
  }
  return *((_DWORD *)this + 2);
}


// ============================================================

// Address: 0x51c5b0
// Original: _ZNK27CTaskComplexGangJoinRespond5CloneEv
// Demangled: CTaskComplexGangJoinRespond::Clone(void)
int __fastcall CTaskComplexGangJoinRespond::Clone(CTaskComplexGangJoinRespond *this, unsigned int a2)
{
  CTaskComplex *v3; // r0
  int result; // r0

  v3 = (CTaskComplex *)CTask::operator new((CTask *)&dword_14, a2);
  LOBYTE(this) = *((_BYTE *)this + 12);
  CTaskComplex::CTaskComplex(v3);
  *(_BYTE *)(result + 12) = (_BYTE)this;
  *(_BYTE *)(result + 13) = 0;
  *(_DWORD *)result = &off_66C038;
  return result;
}


// ============================================================

// Address: 0x51c5d8
// Original: _ZNK27CTaskComplexGangJoinRespond11GetTaskTypeEv
// Demangled: CTaskComplexGangJoinRespond::GetTaskType(void)
int __fastcall CTaskComplexGangJoinRespond::GetTaskType(CTaskComplexGangJoinRespond *this)
{
  return 1219;
}


// ============================================================

// Address: 0x51c5e0
// Original: _ZN27CTaskComplexGangJoinRespond9SerializeEv
// Demangled: CTaskComplexGangJoinRespond::Serialize(void)
int __fastcall CTaskComplexGangJoinRespond::Serialize(CTaskComplexGangJoinRespond *this)
{
  int v2; // r5
  CGenericGameStorage *v3; // r6
  int v4; // r2
  int v5; // r2
  int v7; // r0

  v2 = (*(int (__fastcall **)(CTaskComplexGangJoinRespond *))(*(_DWORD *)this + 20))(this);
  if ( UseDataFence )
    AddDataFence();
  v3 = (CGenericGameStorage *)malloc(4u);
  *(_DWORD *)v3 = v2;
  CGenericGameStorage::_SaveDataToWorkBuffer(v3, byte_4, v4);
  free(v3);
  if ( (*(int (__fastcall **)(CTaskComplexGangJoinRespond *))(*(_DWORD *)this + 20))(this) == 1219 )
  {
    if ( UseDataFence )
      AddDataFence();
    return sub_19EA3C((CTaskComplexGangJoinRespond *)((char *)this + 12), (char *)&stderr + 1, v5);
  }
  else
  {
    v7 = (*(int (__fastcall **)(CTaskComplexGangJoinRespond *))(*(_DWORD *)this + 20))(this);
    return sub_1941D4(1219, v7);
  }
}


// ============================================================
